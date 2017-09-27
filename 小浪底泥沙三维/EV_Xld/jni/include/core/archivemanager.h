#ifndef _ArchiveManager_H__
#define _ArchiveManager_H__
#include "core/memoryallocatedobject.h"
#include "core/iteratorwrapper.h"
#include "core/stringdefines.h"
#include "core/mutex.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CArchiveFactory;
            class CArchive;

            /// <summary> This class manages the available CArchiveFactory plugins. </summary>

            class EV_CORE_DLL CArchiveManager :  public EarthView::World::Core::CAllocatedObject
            {
            public:
                /*typedef map<EVString, EarthView::World::Core::CArchiveFactory*> ArchiveFactoryMap;*/
                class EV_CORE_DLL ArchiveFactoryMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ArchiveFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList) 
					{
						
					}
                public:
                    ArchiveFactoryMap() {}
                    ev_bool push(const EVString &key, const EarthView::World::Core::CArchiveFactory*& val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Core::CArchiveFactory *)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Core::CArchiveFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Core::CArchiveFactory*& get(const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    typedef map<EVString, EarthView::World::Core::CArchiveFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };

                /*typedef map<EVString, EarthView::World::Core::CArchive*> EarthView::World::Core::CArchiveManager::ArchiveMap;*/
                class EV_CORE_DLL ArchiveMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ArchiveMap(_in EarthView::World::Core::CNameValuePairList *pList) 
					{
	
					}
                public:
                    ArchiveMap() {}
                    ev_bool push(const EVString &key, const EarthView::World::Core::CArchive*& val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Core::CArchive *)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Core::CArchive*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Core::CArchive*& get(const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    typedef map<EVString, EarthView::World::Core::CArchive *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };

            private:
                static EarthView::World::Core::CArchiveManager *ms_Singleton;
            protected:
				EarthView::World::Core::CMutex mMutex;

                //// Factories available to create archives, indexed by archive type (EVString identifier e.g. 'Zip')
                ArchiveFactoryMap mArchFactories;
                //// Currently loaded archives

                EarthView::World::Core::CArchiveManager::ArchiveMap mArchives;
            ev_private:
                CArchiveManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary> Default constructor - should never get called by a client app.</summary>
                /// <param></param>
                /// <returns></returns>
                CArchiveManager();

                virtual ~CArchiveManager();
                static EarthView::World::Core::CArchiveManager &getSingleton();
                static EarthView::World::Core::CArchiveManager *getSingletonPtr();
                /// <summary> Opens an archive for file reading.
                ///     @remarks
                ///       extension libraries.
                ///</summary>
                ///   <param> name ="filename" The filename that will be opened</param>
                ///   <param> name = "refLibrary"The library that contains the data-handling code</param>
                ///   <returns>
                ///   If the function succeeds, a valid pointer to an EarthView::World::Core::CArchive
                ///  object is returned.
                ///</returns>
                EarthView::World::Core::CArchive *load( const EVString &filename, const EVString &archiveType);
                ///<summary> Unloads an archive.
                /// remarks
                ///	You must ensure that this archive is not being used before removing it.
                /// </summary>
                ///<param> name = "arch" </param>
                /// <returns></returns>
                void unload(EarthView::World::Core::CArchive *arch);
                /// <summary>Unloads an archive by name.
                /// remarks
                ///	You must ensure that this archive is not being used before removing it.
                /// </summary>
                /// <param>name= "filename"</param>
                ///<returns></returns>
                void unload(const EVString &filename);
                /*typedef CMapIterator<EarthView::World::Core::CArchiveManager::ArchiveMap> EarthView::World::Core::CArchiveManager::ArchiveMapIterator;*/
                class EV_CORE_DLL ArchiveMapPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ArchiveMapPair(EarthView::World::Core::CNameValuePairList *pList)
					{
	
					}

                public:
                    ArchiveMapPair() {}
                    EVString first;
                    EarthView::World::Core::CArchive *second;
                };
                class EV_CORE_DLL ArchiveMapIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ArchiveMapIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList)
                        {
                            if (pList->Exist("lst"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Core::CArchiveManager::ArchiveMap *)pList->GetAt("lst"));
                            }
                            else if (pList->Exist("other"))
                            {
                                mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Core::CArchiveManager::ArchiveMapIterator *)pList->GetAt("other"))->mIterator);
                            }
						}else 
						{

						}
					}
                ev_private:
                    typedef CConstMapIterator<EarthView::World::Core::CArchiveManager::ArchiveMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    ArchiveMapIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    KeyType peekNextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    ValueType peekNextValue (  ) const
                    {
                        return mIterator->peekNextValue();
                    }
                    const PointerType peekNextValuePtr ()
                    {
                        mvt = peekNextValue();
                        return &mvt;
                    }
                    ValueType getNext()
                    {
                        return mIterator->getNext() ;
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    IteratorType &current()
                    {
                        return mIterator->current();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }



                public:
                    ArchiveMapIterator() {}


                    ArchiveMapIterator(ArchiveMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    ArchiveMapIterator(const ArchiveMapIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~ArchiveMapIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    /// <summary>
                    /// 锟斤拷值锟斤拷锟?="锟斤拷锟斤拷锟斤拷
                    /// </summary>
                    /// <param name="other">EarthView::World::Core::CArchiveManager::ArchiveMapIterator锟斤拷锟斤拷锟斤拷锟?/param>
                    /// <returns>锟斤拷锟截革拷值锟斤拷锟斤拷锟斤拷锟?/returns>
                    EarthView::World::Core::CArchiveManager::ArchiveMapIterator &operator=(_in const EarthView::World::Core::CArchiveManager::ArchiveMapIterator &other)
                    {
                        if ( &other == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    EVString nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Core::CArchive *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Core::CArchive **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Core::CArchive *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Core::CArchiveManager::ArchiveMapPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Core::CArchiveManager::ArchiveMapPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Core::CArchiveManager::ArchiveMapPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Core::CArchiveManager::ArchiveMapPair mBeginPair;
                    EarthView::World::Core::CArchiveManager::ArchiveMapPair mCurrentPair;
                    EarthView::World::Core::CArchiveManager::ArchiveMapPair mEndPair;
                    EarthView::World::Core::CArchive *mptr;
                    ValueType mvt;
                };
                /// <summary> Get an iterator over the Archives in this Manager. </summary>
                ///<param></param>
                /// <returns>EarthView::World::Core::CArchiveManager::ArchiveMapIterator</returns>
                EarthView::World::Core::CArchiveManager::ArchiveMapIterator getArchiveIterator();
                /// <summary> Adds a new EarthView::World::Core::CArchiveFactory to the list of available factories.
                ///   remarks
                ///       CPlugin developers who add new archive codecs need to call
                ///       this after defining their CArchiveFactory subclass and
                ///       CArchive subclasses for their archive type.
                /// </summary>
                /// <param>name = "factory"</param>
                /// <returns></returns>
                void addArchiveFactory(EarthView::World::Core::CArchiveFactory *factory);
            };
        }
    }
}

#endif

