#ifndef __RadixSort_H__
#define __RadixSort_H__
#include <core/memoryallocatorconfig.h>
#include <core/memorystlallocator.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** Class for performing a radix sort (fast comparison-less sort based on
            	byte value) on various standard STL containers.
            @remarks
            	A radix sort is a very fast sort algorithm. It doesn't use comparisons
            	and thus is able to break the theoretical minimum O(N*logN) complexity.
            	Radix sort is complexity O(k*N), where k is a constant. Note that radix
            	sorting is not in-place, it requires additional storage, so it trades
            	memory for speed. The overhead of copying means that it is only faster
            	for fairly large datasets, so you are advised to only use it for collections
            	of at least a few hundred items.
            @par
            	This is a template class to allow it to deal with a variety of containers,
            	and a variety of value types to sort on. In addition to providing the
            	container and value type on construction, you also need to supply a
            	functor object which will retrieve the value to compare on for each item
            	in the list. For example, if you had an std::vector of by-value instances
            	of an object of class 'Bibble', and you wanted to sort on
            	Bibble::getDoobrie(), you'd have to firstly create a functor
            	like this:
            @code
            	struct BibbleSortFunctor
            	{
            		ev_real32 operator()(const Bibble& val) const
            		{
            			return val.getDoobrie();
            		}
            	}
            @endcode
            	Then, you need to declare a CRadixSort class which names the container type,
            	the value type in the container, and the type of the value you want to
            	sort by. You can then call the sort function. E.g.
            @code
            	CRadixSort<BibbleList, Bibble, ev_real32> radixSorter;
            	BibbleSortFunctor functor;

            	radixSorter.sort(myBibbleList, functor);
            @endcode
            	You should try to reuse CRadixSort instances, since repeated allocation of the
            	internal storage is then avoided.
            @note
            	Radix sorting is often associated with just unsigned integer values. Our
            	implementation can handle both unsigned and signed integers, as well as
            	floats (which are often not supported by other radix sorters). doubles
            	are not supported; you will need to implement your functor object to convert
            	to ev_real32 if you wish to use this sort routine.
            ****/
            template <class TContainer, class TContainerValueType, typename TCompValueType>
            class CRadixSort
            {
            public:
                typedef typename TContainer::iterator ContainerIter;
            protected:
                //// Alpha-pass counters of values (histogram)
                //// 4 of them so we can radix sort a maximum of a 32bit value
                ev_int32 mCounters[4][256];
                //// Beta-pass offsets
                ev_int32 mOffsets[256];
                //// Sort area size
                ev_int32 mSortSize;
                //// Number of passes for this type
                ev_int32 mNumPasses;
                struct SortEntry
                {
                    TCompValueType key;
                    ContainerIter iter;
                    SortEntry() {}
                    SortEntry(TCompValueType k, ContainerIter it)
                        : key(k), iter(it) {}
                };
                //// Temp sort storage
                typedef vector<SortEntry, EarthView::World::Core::CSTLAllocator<SortEntry, EarthView::World::Core::CPolicy> > SortVector;
                SortVector mSortArea1;
                SortVector mSortArea2;
                SortVector *mSrc;
                SortVector *mDest;
                TContainer mTmpContainer; 			/// initial copy

                void sortPass(ev_int32 byteIndex)
                {
                    /// Calculate offsets
                    /// Basically this just leaves gaps for duplicate entries to fill
                    mOffsets[0] = 0;
                    for (ev_int32 i = 1; i < 256; ++i)
                    {
                        mOffsets[i] = mOffsets[i-1] + mCounters[byteIndex][i-1];
                    }
                    /// Sort pass
                    for (ev_int32 i = 0; i < mSortSize; ++i)
                    {
                        ev_uchar byteVal = getByte(byteIndex, (*mSrc)[i].key);
                        (*mDest)[mOffsets[byteVal]++] = (*mSrc)[i];
                    }
                }
                template <typename T>
                void finalPass(ev_int32 byteIndex, T val)
                {
                    /// default is to do normal pass
                    sortPass(byteIndex);
                }

                /// special case signed ev_int32
                void finalPass(ev_int32 byteIndex, ev_int32 val)
                {
                    ev_int32 numNeg = 0;
                    /// all negative values are in entries 128+ in most significant byte
                    for (ev_int32 i = 128; i < 256; ++i)
                    {
                        numNeg += mCounters[byteIndex][i];
                    }
                    /// Calculate offsets - positive ones start at the number of negatives
                    /// do positive numbers
                    mOffsets[0] = numNeg;
                    for (ev_int32 i = 1; i < 128; ++i)
                    {
                        mOffsets[i] = mOffsets[i-1] + mCounters[byteIndex][i-1];
                    }
                    /// Do negative numbers (must start at zero)
                    /// No need to invert ordering, already correct (-1 is highest number)
                    mOffsets[128] = 0;
                    for (ev_int32 i = 129; i < 256; ++i)
                    {
                        mOffsets[i] = mOffsets[i-1] + mCounters[byteIndex][i-1];
                    }
                    /// Sort pass
                    for (ev_int32 i = 0; i < mSortSize; ++i)
                    {
                        ev_uchar byteVal = getByte(byteIndex, (*mSrc)[i].key);
                        (*mDest)[mOffsets[byteVal]++] = (*mSrc)[i];
                    }
                }


                /// special case ev_real32
                void finalPass(ev_int32 byteIndex, ev_real32 val)
                {
                    /// floats need to be special cased since negative numbers will come
                    /// after positives (high bit = sign) and will be in reverse order
                    /// (no ones-complement of the +ve value)
                    ev_int32 numNeg = 0;
                    /// all negative values are in entries 128+ in most significant byte
                    for (ev_int32 i = 128; i < 256; ++i)
                    {
                        numNeg += mCounters[byteIndex][i];
                    }
                    /// Calculate offsets - positive ones start at the number of negatives
                    /// do positive numbers normally
                    mOffsets[0] = numNeg;
                    for (ev_int32 i = 1; i < 128; ++i)
                    {
                        mOffsets[i] = mOffsets[i-1] + mCounters[byteIndex][i-1];
                    }
                    /// Do negative numbers (must start at zero)
                    /// Also need to invert ordering
                    /// In order to preserve the stability of the sort (essential since
                    /// we rely on previous bytes already being sorted) we have to count
                    /// backwards in our offsets from
                    mOffsets[255] = mCounters[byteIndex][255];
                    for (ev_int32 i = 254; i > 127; --i)
                    {
                        mOffsets[i] = mOffsets[i+1] + mCounters[byteIndex][i];
                    }
                    /// Sort pass
                    for (ev_int32 i = 0; i < mSortSize; ++i)
                    {
                        ev_uchar byteVal = getByte(byteIndex, (*mSrc)[i].key);
                        if (byteVal > 127)
                        {
                            /// -ve; pre-decrement since offsets set to count
                            (*mDest)[--mOffsets[byteVal]] = (*mSrc)[i];
                        }
                        else
                        {
                            /// +ve
                            (*mDest)[mOffsets[byteVal]++] = (*mSrc)[i];
                        }
                    }
                }
                inline ev_uchar getByte(ev_int32 byteIndex, TCompValueType val)
                {
#if EV_ENDIAN == EV_ENDIAN_LITTLE
                    return ((ev_uchar *)(&val))[byteIndex];
#else
                    return ((ev_uchar *)(&val))[mNumPasses - byteIndex - 1];
#endif
                }
            public:
                CRadixSort() {}
                ~CRadixSort() {}
                /***** Main sort function
                @param container A container of the type you declared when declaring
                @param func A functor which returns the value for comparison when given
                	a container value
                ****/
                template <class TFunction>
                void sort(TContainer &container, TFunction func)
                {
                    if (container.empty())
                        return;
                    /// Set up the sort areas
                    mSortSize = static_cast<ev_int32>(container.size());
                    mSortArea1.resize(container.size());
                    mSortArea2.resize(container.size());
                    /// Copy data now (we need constant iterators for sorting)
                    mTmpContainer = container;
                    mNumPasses = sizeof(TCompValueType);
                    /// Counter pass
                    /// Initialise the counts
                    ev_int32 p;
                    for (p = 0; p < mNumPasses; ++p)
                        memset(mCounters[p], 0, sizeof(ev_int32) * 256);
                    /// Perform alpha pass to count
                    ContainerIter i = mTmpContainer.begin();
                    TCompValueType prevValue = func.operator()(*i);
                    ev_bool needsSorting = false;
                    for (ev_int32 u = 0; i != mTmpContainer.end(); ++i, ++u)
                    {
                        /// get sort value
                        TCompValueType val = func.operator()(*i);
                        /// cheap check to see if needs sorting (temporal coherence)
                        if (!needsSorting && val < prevValue)
                            needsSorting = true;
                        /// Create a sort entry
                        mSortArea1[u].key = val;
                        mSortArea1[u].iter = i;
                        /// increase counters
                        for (p = 0; p < mNumPasses; ++p)
                        {
                            ev_uchar byteVal = getByte(p, val);
                            mCounters[p][byteVal]++;
                        }
                        prevValue = val;
                    }
                    /// early exit if already sorted
                    if (!needsSorting)
                        return;

                    /// Sort passes
                    mSrc = &mSortArea1;
                    mDest = &mSortArea2;
                    for (p = 0; p < mNumPasses - 1; ++p)
                    {
                        sortPass(p);
                        /// flip src/dst
                        SortVector *tmp = mSrc;
                        mSrc = mDest;
                        mDest = tmp;
                    }
                    /// Final pass may differ, make polymorphic
                    finalPass(p, prevValue);
                    /// Copy everything back
                    ev_int32 c = 0;
                    for (i = container.begin();
                            i != container.end(); ++i, ++c)
                    {
                        *i = *((*mDest)[c].iter);
                    }
                }
            };
        }
    }
}

#endif

