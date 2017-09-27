#ifndef __ShaderProgramWriterManager_H__
#define __ShaderProgramWriterManager_H__
#include "shaderprogramwriter.h"
#include <singleton.h>
#include <graphic_exception.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Interface definition for factories of ShaderProgramWriter. */
                class EV_RTSS_DLL CProgramWriterFactory : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CProgramWriterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CProgramWriterFactory() {}
                    virtual ~CProgramWriterFactory() {}
                    //// Get the name of the language this factory creates programs for
                    virtual EVString getTargetLanguage() const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }
                    //// Create writer instance
                    virtual CProgramWriter *create()
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }
                };
                class EV_RTSS_DLL CProgramWriterManager : public EarthView::World::Core::CAllocatedObject
                {
                private:
                    static CProgramWriterManager *ms_Singleton;
                public:
                    /*typedef map<EVString, CProgramWriterFactory*> FactoryMap;*/
                    class EV_RTSS_DLL FactoryMap : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        FactoryMap(_in EarthView::World::Core::CNameValuePairList *pList) {};
                    public:
                        FactoryMap() {};
                        ev_bool push(const EVString &key, CProgramWriterFactory *const &val)
                        {
                            if(mList.find(key) == mList.end())
                            {
                                mList[key] = (EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory *)val;
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
                        EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory*& operator[](const EVString &key)
                        {
                            return get(key);
                        }
                       EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory*& get(const EVString &key)
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
                        typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);				/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
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
                ev_private:
                    CProgramWriterManager(_in EarthView::World::Core::CNameValuePairList *pList);
                protected:
                    //// Factories capable of creating ShaderProgramWriterFactory instances
                   FactoryMap mFactories;
                public:
                    CProgramWriterManager();
                    ~CProgramWriterManager();
                    /** Add a new factory object for high-level programs of a given language. */
                    void addFactory(EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory *factory);
                    /** Remove a factory object for high-level programs of a given language. */
                    void removeFactory(EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory *factory);
                    /** Returns whether a given high-level language is supported. */
                    bool isLanguageSupported(const EVString &lang);
                    /** Create a new, unloaded HighLevelGpuProgram.
                    @par
                    This method creates a new program of the type specified as the second and third parameters.
                    You will have to call further methods on the returned program in order to
                    define the program fully before you can load it.
                    @param language Code of the language to use (e.g. "cg")
                    */
                    EarthView::World::Graphic::RTShaderSystem::CProgramWriter *createProgramWriter( const EVString &language);
                    /** Override standard CSingleton retrieval.
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
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CProgramWriterManager &getSingleton();
                    /** Override standard CSingleton retrieval.
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
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CProgramWriterManager *getSingletonPtr();
                };
            }
        }
    }
}

#endif
