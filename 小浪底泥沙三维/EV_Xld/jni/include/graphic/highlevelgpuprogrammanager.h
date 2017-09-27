#ifndef __HighLevelGpuProgramManager_H__
#define __HighLevelGpuProgramManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "highlevelgpuprogram.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Interface definition for factories of EarthView::World::Graphic::CHighLevelGpuProgram. ****/
            class EV_GRAPHIC_DLL CHighLevelGpuProgramFactory : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CHighLevelGpuProgramFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                CHighLevelGpuProgramFactory() {}

                virtual ~CHighLevelGpuProgramFactory();
                //// Get the name of the language this factory creates programs for
                virtual EVString getLanguage() const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                };
                virtual EarthView::World::Graphic::CHighLevelGpuProgram *create(EarthView::World::Graphic::CResourceManager *ref_creator,
                                                     const EVString &name, ResourceHandle handle,
                                                     const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                virtual void destroy(EarthView::World::Graphic::CHighLevelGpuProgram *prog)
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
            };
            /***** This EarthView::World::Graphic::CResourceManager manages high-level vertex and fragment programs.
            @remarks
            	High-level vertex and fragment programs can be used instead of assembler programs
            	as managed by CGpuProgramManager; however they typically result in a CGpuProgram
            	being created as a derivative of the high-level program. High-level programs are
            	easier to write, and can often be API-independent, unlike assembler programs.
            @par
            	This class not only manages the programs themselves, it also manages the factory
            	syntaxes. Plugins can be created which register themselves as high-level program
            	factories and as such the engine can be extended to accept virtually any kind of
            	program provided a plugin is written.
            ****/
            class EV_GRAPHIC_DLL CHighLevelGpuProgramManager : public EarthView::World::Graphic::CResourceManager
            {
            private:
                static EarthView::World::Graphic::CHighLevelGpuProgramManager *ms_Singleton;
            public:
                /****typedef map<EVString, EarthView::World::Graphic::CHighLevelGpuProgramFactory*> FactoryMap;****/
                static EarthView::World::Graphic::CHighLevelGpuProgramManager &getSingleton();
                static EarthView::World::Graphic::CHighLevelGpuProgramManager *getSingletonPtr();
                class EV_GRAPHIC_DLL  GpuProgramFactoryMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CHighLevelGpuProgramFactory *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CHighLevelGpuProgramFactory *)ref_val;
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
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory*& get(const EVString &key)
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
                    GpuProgramFactoryMap() {}
                ev_private:
                    GpuProgramFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef map<EVString, EarthView::World::Graphic::CHighLevelGpuProgramFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
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
                class EV_GRAPHIC_DLL CHighLevelGpuProgramFactoryPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CHighLevelGpuProgramFactoryPair(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CHighLevelGpuProgramFactoryPair();
                    ev_uint16 first;
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory *second;
                };
                class EV_GRAPHIC_DLL CHighLevelGpuProgramFactoryIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CHighLevelGpuProgramFactoryIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
						if ((pList->Exist("first"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(const_iterator *)pList->GetAt("first"), *(const_iterator *)pList->GetAt("last"));
						}
                        else if(pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    CHighLevelGpuProgramFactoryIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">TechniqueIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator &operator=(_in const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator &other)
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
                    CHighLevelGpuProgramFactoryIterator(EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    CHighLevelGpuProgramFactoryIterator(const CHighLevelGpuProgramFactoryIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~CHighLevelGpuProgramFactoryIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    ev_uint16 nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair mBeginPair;
                    EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair mCurrentPair;
                    EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair mEndPair;
                    EarthView::World::Graphic::CHighLevelGpuProgramFactory *mptr;
                    ValueType mvt;
                };
            protected:
                //// Factories capable of creating EarthView::World::Graphic::CHighLevelGpuProgram instances
                EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap mFactories;
                //// Factory for dealing with programs for languages we can't create
                EarthView::World::Graphic::CHighLevelGpuProgramFactory *mNullFactory;
                //// Factory for unified high-level programs
                EarthView::World::Graphic::CHighLevelGpuProgramFactory *mUnifiedFactory;
                EarthView::World::Graphic::CHighLevelGpuProgramFactory *getFactory(const EVString &language);
            ev_internal:
                //// @copydoc CResourceManager::createImpl
                EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                      const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                      const EarthView::World::Core::NameValuePairList *params);
            public:
                CHighLevelGpuProgramManager();
            ev_private:
                CHighLevelGpuProgramManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CHighLevelGpuProgramManager();
                /***** Add a new factory object for high-level programs of a given language. ****/
                void addFactory(EarthView::World::Graphic::CHighLevelGpuProgramFactory *ref_factory);
                /***** Remove a factory object for high-level programs of a given language. ****/
                void removeFactory(EarthView::World::Graphic::CHighLevelGpuProgramFactory *factory);
                /***** Returns whether a given high-level language is supported. ****/
                ev_bool isLanguageSupported(const EVString &lang);

                /***** Create a new, unloaded EarthView::World::Graphic::CHighLevelGpuProgram.
                @par
                	This method creates a new program of the type specified as the second and third parameters.
                	You will have to call further methods on the returned program in order to
                	define the program fully before you can load it.
                @param name The identifying name of the program
                @param groupName The name of the resource group which this program is
                    to be a member of
                @param language Code of the language to use (e.g. "cg")
                @param gptype The type of program to create
                ****/
                EarthView::World::Graphic::CHighLevelGpuProgramPtr createProgram(
                    const EVString &name, const EVString &groupName,
                    const EVString &language, EarthView::World::Graphic::GpuProgramType gptype);
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/



            };

        }
    }
}

#endif

