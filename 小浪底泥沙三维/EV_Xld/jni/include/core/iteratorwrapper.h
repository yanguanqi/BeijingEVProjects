#ifndef __Iterator_Wrapper_H__
#define __Iterator_Wrapper_H__
#include "core/global.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /**
             *
             * \brief Basefunctionality for IteratorWrappers
             *
             *
             * \param T a Container like vector list map ...
             * \param IteratorType  T::iterator or T::const_iterator
             * \param ValType  T::mapped_type in case of a map, T::value_type for vector, list,...
             *
             * have a look at CVectorIteratorWrapper and CMapIteratorWrapper for a concrete usage
            */
            template <typename T, typename IteratorType, typename ValType>
            class CIteratorWrapper
            {
            private:
                //// Private constructor since only the parameterised constructor should be used
                CIteratorWrapper();
            protected:
                IteratorType mBegin;
                IteratorType mCurrent;
                IteratorType mEnd;


            public:

                //// type you expect to get by funktions like peekNext(Value)
                typedef ValType ValueType;
                //// type you expect to get by funktions like peekNext(Value)Ptr
                typedef ValType *PointerType;
                /**
                \brief typedef to fulfill container interface
                \note there is no distinction between const_iterator and iterator.
                \n keep this in mind if you want to derivate from this class.
                */
                typedef IteratorType iterator;

                /**
                \brief typedef to fulfill container interface
                \note there is no distinction between const_iterator and iterator.
                \n keep this in mind if you want to derivate from this class.
                */
                typedef IteratorType const_iterator;





                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                CIteratorWrapper ( IteratorType start, IteratorType last )
                    : mBegin( start ), mCurrent ( start ), mEnd ( last )
                {
                }

                /** Returns true if there are more items in the collection. */
                ev_bool hasMoreElements ( ) const
                {
                    return mCurrent != mEnd;
                }

                /** Moves the iterator on one element. */
                void moveNext (  )
                {
                    ++mCurrent;
                }
                /** bookmark to the begin of the underlying collection */
                const IteratorType &begin()
                {
                    return mBegin;
                }


                /** full access to the current  iterator */
                IteratorType &current()
                {
                    return mCurrent;
                }

                /** bookmark to the end (one behind the last element) of the underlying collection */
                const IteratorType &end()
                {
                    return mEnd;
                }


            };

            /**
             *
             * \brief Prepiared CIteratorWrapper for container like std::vector
             *
             *
             * \param T = Container eg vector
             * \param IteratorType  T::iterator or T::const_iterator
             *
             * have a look at CVectorIterator and CConstVectorIterator for a more concrete usage
            */
            template <typename T, typename IteratorType>
            class CVectorIteratorWrapper : public CIteratorWrapper<T, IteratorType, typename  T::value_type>
            {
            public:
                typedef typename CIteratorWrapper<T, IteratorType, typename  T::value_type>::ValueType ValueType ;
                typedef typename CIteratorWrapper<T, IteratorType, typename  T::value_type>::PointerType PointerType ;


                /**
                 * \brief c'tor
                 *
                 * Constructor that provide a start and end iterator to initialise.
                 *
                 * @param start start iterator
                 * @param end end iterator
                 */
                CVectorIteratorWrapper ( IteratorType start, IteratorType last )
                    : CIteratorWrapper<T, IteratorType, typename T::value_type>( start, last )
                {
                }

                /** Returns the next(=current) element in the collection, without advancing to the next. */
                ValueType peekNext (  ) const
                {
                    return *(this->mCurrent);
                }
                /** Returns a pointer to the next(=current) element in the collection, without advancing to the next afterwards. */
                PointerType peekNextPtr (  )  const
                {
                    return &(*(this->mCurrent) );
                }
                /** Returns the next(=current) value element in the collection, and advances to the next. */
                ValueType getNext (  )
                {
                    return *(this->mCurrent++);
                }

            };

            /**
             *
             * \brief Concrete CIteratorWrapper for nonconst access to the underlying container
             *
             * \param T  Container
             *
            */
            template <typename T>
            class CVectorIterator : public CVectorIteratorWrapper<T,  typename T::iterator>
            {
            public:
                /** Constructor.
                @remarks
                    Provide a start and end iterator to initialise.
                */
                CVectorIterator( typename T::iterator start, typename T::iterator last )
                    : CVectorIteratorWrapper<T,  typename T::iterator>(start , last )
                {
                }
                /** Constructor.
                @remarks
                    Provide a container to initialise.
                */
                explicit CVectorIterator( T &c )
                    : CVectorIteratorWrapper<T,  typename T::iterator> ( c.begin(), c.end() )
                {
                }

            };
            /**
             *
             * \brief Concrete CIteratorWrapper for const access to the underlying container
             *
             *
             * \param T = Container
             *
            */
            template <typename T>
            class CConstVectorIterator : public CVectorIteratorWrapper<T,  typename T::const_iterator>
            {
            public:
                /** Constructor.
                @remarks
                    Provide a start and end iterator to initialise.
                */
                CConstVectorIterator( typename T::const_iterator start, typename T::const_iterator last )
                    : CVectorIteratorWrapper<T,  typename T::const_iterator> (start , last )
                {
                }
                /** Constructor.
                @remarks
                    Provide a container to initialise.
                */
                explicit CConstVectorIterator ( const T &c )
                    : CVectorIteratorWrapper<T,  typename T::const_iterator> (c.begin() , c.end() )
                {
                }
            };


            /**
             *
             * \brief Prepiared CIteratorWrapper for key-value container
             *
             *
             * \param T  Container  (map - or also set )
             * \param  IteratorType T::iterator or T::const_iterator
             *
             * have a look at CMapIterator and CConstMapIterator for a concrete usage
            */
            template <typename T, typename IteratorType>
            class CMapIteratorWrapper  : public CIteratorWrapper<T, IteratorType, typename T::mapped_type>
            {
            public:
                //// redefined ValueType for a map/set
                typedef typename CIteratorWrapper<T, IteratorType, typename  T::mapped_type>::ValueType ValueType ;
                //// redefined PointerType for a map/set
                typedef typename CIteratorWrapper<T, IteratorType, typename  T::mapped_type>::PointerType PointerType ;

                ////unused, just to make it clear that map/set::value_type is not a ValueType
                typedef typename T::value_type PairType ;
                //// type you expect to get by funktions like peekNextKey
                typedef typename T::key_type KeyType;

                /** Constructor.
                @remarks
                    Provide a start and end iterator to initialise.
                */
                CMapIteratorWrapper ( IteratorType start, IteratorType last )
                    : CIteratorWrapper<T, IteratorType, typename T::mapped_type>( start, last )
                {
                }
                /** Returns the next(=current) key element in the collection, without advancing to the next. */
                KeyType peekNextKey() const
                {
                    return this->mCurrent->first;
                }

                /** Returns the next(=current) value element in the collection, without advancing to the next. */
                ValueType peekNextValue (  ) const
                {
                    return this->mCurrent->second;
                }

                /** Returns a pointer to the next/current value element in the collection, without
                advancing to the next afterwards. */
                const PointerType peekNextValuePtr (  )  const
                {
                    return &(this->mCurrent->second);
                }

                /** Returns the next(=current) value element in the collection, and advances to the next. */
                ValueType getNext()
                {
                    return ((this->mCurrent++)->second) ;
                }


            };


            /**
             *
             * \brief Concrete CIteratorWrapper for nonconst access to the underlying key-value container
             *
             *
             * \param T key-value container
             *
            */
            template <typename T>
            class CMapIterator : public CMapIteratorWrapper<T,  typename T::iterator>
            {
            public:

                /** Constructor.
                @remarks
                    Provide a start and end iterator to initialise.
                */
                CMapIterator( typename T::iterator start, typename T::iterator last )
                    : CMapIteratorWrapper<T,  typename T::iterator>(start , last )
                {
                }

                /** Constructor.
                @remarks
                    Provide a container to initialise.
                */
                explicit CMapIterator( T &c )
                    : CMapIteratorWrapper<T,  typename T::iterator> ( c.begin(), c.end() )
                {
                }

            };

            /**
             *
             * \brief Concrete CIteratorWrapper for const access to the underlying key-value container
             *
             *
             * \param T key-value container
             *
            */
            template <typename T>
            class CConstMapIterator : public CMapIteratorWrapper<T,  typename T::const_iterator>
            {
            public:

                /** Constructor.
                @remarks
                    Provide a start and end iterator to initialise.
                */
                CConstMapIterator( typename T::const_iterator start, typename T::const_iterator last )
                    : CMapIteratorWrapper<T,  typename T::const_iterator> (start , last )
                {
                }
                /** Constructor.
                @remarks
                    Provide a container to initialise.
                */
                explicit CConstMapIterator ( const T &c )
                    : CMapIteratorWrapper<T,  typename T::const_iterator> (c.begin() , c.end() )
                {
                }
            };


        }
    }
}


#endif

