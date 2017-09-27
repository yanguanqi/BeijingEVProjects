#ifndef __GpuProgramManager_H_
#define __GpuProgramManager_H_
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "gpuprogram.h"
#include "rendersystemcapabilities.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CGpuProgramManager : public EarthView::World::Graphic::CResourceManager
            {
            private:
                static EarthView::World::Graphic::CGpuProgramManager *ms_Singleton;
            public:
                static EarthView::World::Graphic::CGpuProgramManager &getSingleton();
                static EarthView::World::Graphic::CGpuProgramManager *getSingletonPtr();
                /****typedef CRenderSystemCapabilities::ShaderProfiles SyntaxCodes;****/
                /****typedef map<EVString, EarthView::World::Graphic::GpuSharedParametersPtr> EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap;****/
                class EV_GRAPHIC_DLL  SharedParametersMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    SharedParametersMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    SharedParametersMap() {}
                    ev_bool push(const EVString &key, const EarthView::World::Graphic::GpuSharedParametersPtr &val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::GpuSharedParametersPtr &operator[](const EVString &key);
                    EarthView::World::Graphic::GpuSharedParametersPtr &get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::GpuSharedParametersPtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL GpuSharedParametersPtrPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    GpuSharedParametersPtrPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    GpuSharedParametersPtrPair() {}
                    ev_uint16 first;
                    EarthView::World::Graphic::GpuSharedParametersPtr second;
                };
                class EV_GRAPHIC_DLL GpuSharedParametersPtrIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    GpuSharedParametersPtrIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    GpuSharedParametersPtrIterator(const_iterator first, const_iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">TechniqueIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrIterator &operator=(_in const EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrIterator &other);
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();
                    const IteratorType &begin() ;
                    IteratorType &current();
                    const IteratorType &end() ;
                public:
                    GpuSharedParametersPtrIterator(EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap &lst);
                    GpuSharedParametersPtrIterator(const GpuSharedParametersPtrIterator &other);
                    ~GpuSharedParametersPtrIterator();
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::GpuSharedParametersPtr nextValue() const;
                    EarthView::World::Graphic::GpuSharedParametersPtr *nextValuePtr();
                    EarthView::World::Graphic::GpuSharedParametersPtr next();
                    const EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair &getBegin();
                    const EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair &getEnd();
                    const EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair mBeginPair;
                    EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair mCurrentPair;
                    EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair mEndPair;
                    EarthView::World::Graphic::GpuSharedParametersPtr mptr;
                    ValueType mvt;
                };
                typedef EarthView::World::Core::MemoryDataStreamPtr Microcode;
                ///typedef map<EVString, Microcode>::type MicrocodeMap;
                class EV_GRAPHIC_DLL  MicrocodeMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    MicrocodeMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    MicrocodeMap() {}
                    ev_bool push(const EVString &key, const EarthView::World::Core::MemoryDataStreamPtr &val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Core::MemoryDataStreamPtr &operator[](const EVString &key);
                    EarthView::World::Core::MemoryDataStreamPtr &get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Core::MemoryDataStreamPtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    ///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
            protected:
                EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap mSharedParametersMap;
                /****
                [5/23/2012 WangJian]
                新添加的GLES2中用到的成员和函数。
                ****/
                MicrocodeMap mMicrocodeCache;
                ev_bool mSaveMicrocodesToCache;
                static EVString addRenderSystemToName( const EVString   &name );
            ev_internal:
                //// Specialised create method with specific parameters
                virtual EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                              const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                              EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode)
                {
                    return NULL;
                }
            public:
                CGpuProgramManager();
                virtual ~CGpuProgramManager();
            ev_private:
                CGpuProgramManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Loads a GPU program from a file of assembly.
                @remarks
                This method creates a new program of the type specified as the second parameter.
                As with all types of CResourceManager, this class will search for the file in
                all resource locations it has been configured to look in.
                @param name The name of the CGpuProgram
                @param groupName The name of the resource group
                @param filename The file to load
                @param gptype The type of program to create
                @param syntaxCode The name of the syntax to be used for this program e.g. arbvp1, vs_1_1
                ****/
                virtual EarthView::World::Graphic::CGpuProgramPtr load(const EVString &name, const EVString &groupName,
                                            const EVString &filename, EarthView::World::Graphic::GpuProgramType gptype,
                                            const EVString &syntaxCode);
                /***** Loads a GPU program from a string of assembly code.
                @remarks
                The assembly code must be compatible with this manager - call the
                getSupportedSyntax method for details of the supported syntaxes
                @param name The identifying name to give this program, which can be used to
                retrieve this program later with getByName.
                @param groupName The name of the resource group
                @param code A string of assembly code which will form the program to run
                @param gptype The type of program to create.
                @param syntaxCode The name of the syntax to be used for this program e.g. arbvp1, vs_1_1
                ****/
                virtual EarthView::World::Graphic::CGpuProgramPtr loadFromString(const EVString &name, const EVString &groupName,
                                                      const EVString &code, EarthView::World::Graphic::GpuProgramType gptype,
                                                      const EVString &syntaxCode);
                /***** Returns the syntaxes that this manager supports. ****/
                /****virtual const SyntaxCodes& getSupportedSyntax() const;****/
                virtual const EarthView::World::Graphic::ShaderProfiles &getSupportedSyntax() const;

                /***** Returns whether a given syntax code (e.g. "ps_1_3", "fp20", "arbvp1") is supported. ****/
                virtual ev_bool isSyntaxSupported(const EVString &syntaxCode) const;
                /***** Creates a new CGpuProgramParameters instance which can be used to bind
                parameters to your programs.
                @remarks
                CProgram parameters can be shared between multiple programs if you wish.
                ****/
                virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters();
                /***** Create a new, unloaded CGpuProgram from a file of assembly.
                @remarks
                Use this method in preference to the 'load' methods if you wish to define
                a CGpuProgram, but not load it yet; useful for saving memory.
                @par
                This method creates a new program of the type specified as the second parameter.
                As with all types of CResourceManager, this class will search for the file in
                all resource locations it has been configured to look in.
                @param name The name of the program
                @param groupName The name of the resource group
                @param filename The file to load
                @param syntaxCode The name of the syntax to be used for this program e.g. arbvp1, vs_1_1
                @param gptype The type of program to create
                ****/
                virtual EarthView::World::Graphic::CGpuProgramPtr createProgram(const EVString &name,
                                                     const EVString &groupName, const EVString &filename,
                                                     EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode);
                /***** Create a GPU program from a string of assembly code.
                @remarks
                Use this method in preference to the 'load' methods if you wish to define
                a CGpuProgram, but not load it yet; useful for saving memory.
                @par
                The assembly code must be compatible with this manager - call the
                getSupportedSyntax method for details of the supported syntaxes
                @param name The identifying name to give this program, which can be used to
                retrieve this program later with getByName.
                @param groupName The name of the resource group
                @param code A string of assembly code which will form the program to run
                @param gptype The type of program to create.
                @param syntaxCode The name of the syntax to be used for this program e.g. arbvp1, vs_1_1
                ****/
                virtual EarthView::World::Graphic::CGpuProgramPtr createProgramFromString(const EVString &name,
                        const EVString &groupName, const EVString &code,
                        EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode);
				/*
                instead of name / value pairs.
                ****/
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group,
                                           EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode, ev_bool isManual,
                                           EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group,
                                           EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode, ev_bool isManual);
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group,
                                           EarthView::World::Graphic::GpuProgramType gptype, const EVString &syntaxCode);
                /***** Overrides the standard EarthView::World::Graphic::CResourceManager getByName method.
                @param name The name of the program to retrieve
                @param preferHighLevelPrograms If set to true (the default), high level programs will be
                returned in preference to low-level programs.
                ****/
                EarthView::World::Graphic::ResourcePtr getByName(const EVString &name, ev_bool preferHighLevelPrograms );
                EarthView::World::Graphic::ResourcePtr getByName(const EVString &name);
				EarthView::World::Graphic::ResourcePtr getByName(const EVString& name, const EVString& groupName);
				EarthView::World::Graphic::ResourcePtr getByName(const EVString& name, const EVString& groupName, ev_bool preferHighLevelPrograms );
                /***** Create a new set of shared parameters, which can be used across many
                CGpuProgramParameters objects of different structures.
                @param name The name to give the shared parameters so you can refer to them
                later.
                ****/
                virtual EarthView::World::Graphic::GpuSharedParametersPtr createSharedParameters(const EVString &name);
                /***** Retrieve a set of shared parameters, which can be used across many
                CGpuProgramParameters objects of different structures.
                ****/
                virtual EarthView::World::Graphic::GpuSharedParametersPtr getSharedParameters(const EVString &name) const;
                /***** Get (const) access to the available shared parameter sets.
                ****/
                virtual const EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap &getAvailableSharedParameters() const;
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
                /****
                [5/23/2012 WangJian]
                新添加的GLES2中用到的函数。
                ****/
                const ev_bool getSaveMicrocodesToCache() const;
                const ev_bool canGetCompiledShaderBuffer() const;
                void setSaveMicrocodesToCache( const ev_bool val );
                ev_bool isMicrocodeAvailableInCache( const EVString &name ) const;
                const EarthView::World::Core::MemoryDataStreamPtr &getMicrocodeFromCache( const EVString &name ) const;
                EarthView::World::Core::MemoryDataStreamPtr createMicrocode( const size_t size ) const;
                void addMicrocodeToCache( const EVString &name, const EarthView::World::Core::MemoryDataStreamPtr &microcode );
                void saveMicrocodeCache( EarthView::World::Core::DataStreamPtr stream ) const;
                void loadMicrocodeCache( EarthView::World::Core::DataStreamPtr stream );
            };
        }
    }
}

#endif

