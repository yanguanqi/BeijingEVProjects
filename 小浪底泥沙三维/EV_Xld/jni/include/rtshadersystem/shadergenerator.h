#ifndef _ShaderGenerator_
#define _ShaderGenerator_
#include "rtshadersystem/shaderprerequisites.h"
#include "rtshadersystem/shaderrenderstate.h"
#include "rtshadersystem/shaderscripttranslator.h"
#include <graphic/singleton.h>
#include <graphic/renderobjectlistener.h>
#include <graphic/scenemanager.h>
#include <graphic/scripttranslator.h>
#include <graphic/resourcegroupmanager.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Shader generator system main interface. This singleton based class
                enables automatic generation of shader code based on existing material techniques.
                */
                class EV_RTSS_DLL CShaderGenerator : public EarthView::World::Core::CAllocatedObject
                {
                private:
                    static EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *ms_Singleton;
                    /// Interface.
                public:
                    /**
                    Initialize the Shader Generator System.
                    Return true upon success.
                    @param sceneMgr The scene manager that the shader generator will be bound to.
                    */
                    static ev_bool		initialize	();
                    /**
                    Finalize the Shader Generator instance.
                    */
                    static void		finalize	();

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
                    static EarthView::World::Graphic::RTShaderSystem::CShaderGenerator			&getSingleton	();


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
                    static EarthView::World::Graphic::RTShaderSystem::CShaderGenerator			*getSingletonPtr	();
                    /**
                    Add a scene manager to the shader generator scene managers list.
                    @param sceneMgr The scene manager to add to the list.
                    */
                    void			addSceneManager				(EarthView::World::Graphic::CSceneManager *sceneMgr);
                    /**
                    Remove a scene manager from the shader generator scene managers list.
                    @param sceneMgr The scene manager to remove from the list.
                    */
                    void			removeSceneManager			(EarthView::World::Graphic::CSceneManager *sceneMgr);
                    /**
                    Get the active scene manager that is doint the actual scene rendering.
                    This attribute will be update on the call to preFindVisibleObjects.
                    */
                    EarthView::World::Graphic::CSceneManager	*getActiveSceneManager		();

                    /**
                    Set the target shader language.
                    @param shaderLanguage The output shader language to use.
                    @remarks The default shader language is cg.
                    */
                    void			setTargetLanguage			(const EVString &shaderLanguage);
                    /**
                    Return the target shader language currently in use.
                    */
                    const EVString	&getTargetLanguage			() const
                    {
                        return mShaderLanguage;
                    }
                    /**
                    Set the output vertex shader target profiles.
                    @param vertexShaderProfile The target profiles for the vertex shader.
                    */
                    void			setVertexShaderProfiles		(const EVString &vertexShaderProfiles);
                    /**
                    Get the output vertex shader target profiles.
                    */
                    const EVString	&getVertexShaderProfiles		() const
                    {
                        return mVertexShaderProfiles;
                    }
                    /**
                    Get the output vertex shader target profiles as list of strings.
                    */
                    const EarthView::World::Core::StringVector	&getVertexShaderProfilesList		() const
                    {
                        return mVertexShaderProfilesList;
                    }

                    /**
                    Set the output fragment shader target profiles.
                    @param fragmentShaderProfile The target profiles for the fragment shader.
                    */
                    void			setFragmentShaderProfiles	(const EVString &fragmentShaderProfiles);
                    /**
                    Get the output fragment shader target profiles.
                    */
                    const EVString	&getFragmentShaderProfiles	() const
                    {
                        return mFragmentShaderProfiles;
                    }
                    /**
                    Get the output fragment shader target profiles as list of strings.
                    */
                    const EarthView::World::Core::StringVector	&getFragmentShaderProfilesList	() const
                    {
                        return mFragmentShaderProfilesList;
                    }
                    /**
                    Set the output shader cache path. Generated shader code will be written to this path.
                    In case of empty cache path shaders will be generated directly from system memory.
                    @param cachePath The cache path of the shader.
                    The default is empty cache path.
                    */
                    void			setShaderCachePath			(const EVString &cachePath);
                    /**
                    Get the output shader cache path.
                    */
                    const EVString	&getShaderCachePath			() const
                    {
                        return mShaderCachePath;
                    }
                    /**
                    Flush the shader cache. This operation will cause all active sachems to be invalidated and will
                    destroy any CPU/GPU program that created by this shader generator.
                    */
                    void			flushShaderCache			();
                    /**
                    Return a global render state associated with the given scheme name.
                    Modifying this render state will affect all techniques that belongs to that scheme.
                    This is the best way to apply global changes to all techniques.
                    After altering the render state one should call invalidateScheme method in order to
                    regenerate shaders.
                    @param schemeName The destination scheme name.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CRenderState	*getRenderState				(const EVString &schemeName);

                    /*typedef std::pair<EarthView::World::Graphic::RTShaderSystem::CRenderState*, ev_bool> EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult;*/
                    class EV_RTSS_DLL RenderStateCreateOrRetrieveResult: public EarthView::World::Core::CBaseObject
                    {
                    public:
                        EarthView::World::Graphic::RTShaderSystem::CRenderState *first;
                        ev_bool second;
                        /// <summary>
                        /// 构造函数
                        /// </summary>
                        /// <param name="fir">键</param>
                        /// <param name="sec">值</param>
                        /// <returns></returns>
                        RenderStateCreateOrRetrieveResult(_in EarthView::World::Graphic::RTShaderSystem::CRenderState *fir, _in ev_bool sec)
                        {
                            first = fir;
                            second = sec;
                        }
                        RenderStateCreateOrRetrieveResult()
                        {
                        }
                    ev_private:
                        /// <summary>
                        /// 构造函数
                        /// </summary>
                        /// <param name="pList">构造函数参数键值对表</param>
                        /// <returns></returns>
                        RenderStateCreateOrRetrieveResult(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
                            if (pList && pList->Count() > 0)
                            {
                                first = (EarthView::World::Graphic::RTShaderSystem::CRenderState *)pList->GetAt("fir");
                                second = *(ev_bool *)pList->GetAt("sec");
                            }
                            else
                            {
                            }
                        }
                    };
                    /**
                    Returns a requested render state. If the render state does not exist this function creates it.
                    @param schemeName The scheme name to retrieve.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult createOrRetrieveRenderState(const EVString &schemeName);
                    /**
                    Tells if a given render state exists
                    @param schemeName The scheme name to check.
                    */
                    ev_bool hasRenderState(const EVString &schemeName) const;

                    /**
                    Get render state of specific pass.
                    Using this method allows the user to customize the behavior of a specific pass.
                    @param schemeName The destination scheme name.
                    @param materialName The specific material name.
                    @param groupName The specific material name.
                    @param passIndex The pass index.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CRenderState	*getRenderState				(const EVString &schemeName, const EVString &materialName, ev_uint16 passIndex);
                    EarthView::World::Graphic::RTShaderSystem::CRenderState	*getRenderState				(const EVString &schemeName, const EVString &materialName, const EVString &groupName, ev_uint16 passIndex);
                    /**
                    Add sub render state factory. Plugins or 3d party applications may implement sub classes of
                    SubRenderState interface. Add the matching factory will allow the application to create instances
                    of these sub classes.
                    @param factory The factory to add.
                    */
                    void			addSubRenderStateFactory	(EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *factory);
                    /**
                    Returns the number of existing factories
                    */
                    ev_size_t			getNumSubRenderStateFactories() const;
                    /**
                    Returns a sub render state factory by index
                    @note index must be lower than the value returned by getNumSubRenderStateFactories()
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *getSubRenderStateFactory(ev_size_t index);
                    /**
                    Returns a sub render state factory by name
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *getSubRenderStateFactory(const EVString &type);
                    /**
                    Remove sub render state factory.
                    @param factory The factory to remove.
                    */
                    void			removeSubRenderStateFactory	(EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *factory);
                    /**
                    Create an instance of sub render state from a given type.
                    @param type The type of sub render state to create.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createSubRenderState		(const EVString &type);

                    /**
                    Destroy an instance of sub render state.
                    @param subRenderState The instance to destroy.
                    */
                    void			destroySubRenderState		(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);

                    /**
                    Checks if a shader based technique has been created for a given technique.
                    Return true if exist. False if not.
                    @param materialName The source material name.
                    @param groupName The source group name.
                    @param srcTechniqueSchemeName The source technique scheme name.
                    @param dstTechniqueSchemeName The destination shader based technique scheme name.
                    */
                    ev_bool			hasShaderBasedTechnique	(const EVString &materialName, const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName) const;
                    ev_bool			hasShaderBasedTechnique	(const EVString &materialName, const EVString &groupName, const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName) const;
                    /**
                    Create shader based technique from a given technique.
                    Return true upon success. Failure may occur if the source technique is not FFP pure, or different
                    source technique is mapped to the requested destination scheme.
                    @param materialName The source material name.
                    @param groupName The source group name.
                    @param srcTechniqueSchemeName The source technique scheme name.
                    @param dstTechniqueSchemeName The destination shader based technique scheme name.
                    @param overProgrammable If true a shader will be created even if the material has shaders
                    */
                    ///ev_bool			createShaderBasedTechnique	(const EVString& materialName, const EVString& srcTechniqueSchemeName,
                    ///	const EVString& dstTechniqueSchemeName, ev_bool overProgrammable = false);
                    ev_bool			createShaderBasedTechnique	(const EVString &materialName, const EVString &srcTechniqueSchemeName,
                            const EVString &dstTechniqueSchemeName, ev_bool overProgrammable);
                    ev_bool			createShaderBasedTechnique	(const EVString &materialName, const EVString &srcTechniqueSchemeName,
                            const EVString &dstTechniqueSchemeName);
                    ev_bool			createShaderBasedTechnique	(const EVString &materialName, const EVString &groupName,
                            const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName, ev_bool overProgrammable);
                    ev_bool			createShaderBasedTechnique	(const EVString &materialName, const EVString &groupName,
                            const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName);

                    /**
                    Remove shader based technique from a given technique.
                    Return true upon success. Failure may occur if the given source technique was not previously
                    @param materialName The source material name.
                    @param groupName The source group name.
                    @param srcTechniqueSchemeName The source technique scheme name.
                    @param dstTechniqueSchemeName The destination shader based technique scheme name.
                    */
                    ev_bool			removeShaderBasedTechnique	(const EVString &materialName, const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName);
                    ev_bool			removeShaderBasedTechnique	(const EVString &materialName, const EVString &groupName, const EVString &srcTechniqueSchemeName, const EVString &dstTechniqueSchemeName);

                    /**
                    Remove all shader based techniques of the given material.
                    Return true upon success.
                    @param materialName The source material name.
                    @param groupName The source group name.
                    */
                    /*ev_bool			removeAllShaderBasedTechniques	(const EVString& materialName, const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);*/
                    ev_bool			removeAllShaderBasedTechniques	(const EVString &materialName, const EVString &groupName);
                    ev_bool			removeAllShaderBasedTechniques	(const EVString &materialName);
                    /**
                    Clone all shader based techniques from one material to another.
                    This function can be used in conjunction with the CMaterial::clone() function to copy
                    both material properties and RTSS state from one material to another.
                    @param srcMaterialName The source material name.
                    @param srcGroupName The source group name.
                    @param dstMaterialName The destination material name.
                    @param dstGroupName The destination group name.
                    @return True if successful
                    */
                    ev_bool cloneShaderBasedTechniques(const EVString &srcMaterialName,
                                                       const EVString &srcGroupName,	const EVString &dstMaterialName, const EVString &dstGroupName);
                    /**
                    Remove all shader based techniques that created by this shader generator.
                    */
                    void			removeAllShaderBasedTechniques	();
                    /**
                    Create a scheme.
                    @param schemeName The scheme name to create.
                    */
                    void			createScheme				(const EVString &schemeName);
                    /**
                    Invalidate a given scheme. This action will lead to shader regeneration of all techniques belongs to the
                    given scheme name.
                    @param schemeName The scheme to invalidate.
                    */
                    void			invalidateScheme			(const EVString &schemeName);
                    /**
                    Validate a given scheme. This action will generate shader programs for all techniques of the
                    given scheme name.
                    @param schemeName The scheme to validate.
                    */
                    ev_bool			validateScheme				(const EVString &schemeName);

                    /**
                    Invalidate specific material scheme. This action will lead to shader regeneration of the technique belongs to the
                    given scheme name.
                    @param schemeName The scheme to invalidate.
                    @param materialName The material to invalidate.
                    @param groupName The source group name.
                    */
                    ///void			invalidateMaterial			(const EVString& schemeName, const EVString& materialName,
                    ///	const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);
                    void			invalidateMaterial			(const EVString &schemeName, const EVString &materialName,
                            const EVString &groupName);
                    void			invalidateMaterial			(const EVString &schemeName, const EVString &materialName);
                    /**
                    Validate specific material scheme. This action will generate shader programs for the technique of the
                    given scheme name.
                    @param schemeName The scheme to validate.
                    @param materialName The material to validate.
                    @param groupName The source group name.
                    */
                    ///ev_bool			validateMaterial			(const EVString& schemeName, const EVString& materialName,
                    ///	const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME);
                    ev_bool			validateMaterial			(const EVString &schemeName, const EVString &materialName,
                            const EVString &groupName);
                    ev_bool			validateMaterial			(const EVString &schemeName, const EVString &materialName);


                    /**
                    Return custom material Serializer of the shader generator.
                    This is useful when you'd like to export certain material that contains shader generator effects.
                    I.E - when writing an exporter you may want mark your material as shader generated material
                    so in the next time you will load it by your application it will automatically generate shaders with custom
                    attributes you wanted. To do it you'll have to do the following steps:
                    1. Create shader based technique for you material via the createShaderBasedTechnique() method.
                    2. Create CMaterialSerializer instance.
                    3. Add the return instance of serializer listener to the CMaterialSerializer.
                    4. Call one of the export methods of CMaterialSerializer.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener	*getMaterialSerializerListener();

                    /** Return the current number of generated vertex shaders. */
                    ev_size_t							getVertexShaderCount			() const;

                    /** Return the current number of generated fragment shaders. */
                    ev_size_t							getFragmentShaderCount			() const;

                    /** Set the vertex shader outputs compaction policy.
                    @see EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy.
                    @param policy The policy to set.
                    */
                    void							setVertexShaderOutputsCompactPolicy		(EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy policy)
                    {
                        mVSOutputCompactPolicy = policy;
                    }

                    /** Get the vertex shader outputs compaction policy.
                    @see EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy.
                    */
                    EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy			getVertexShaderOutputsCompactPolicy		() const
                    {
                        return mVSOutputCompactPolicy;
                    }

                    /** Sets whether shaders are created for passes with shaders.
                    Note that this only refers to when the system parses the materials itself.
                    Not for when calling the createShaderBasedTechnique() function directly
                    @param value The value to set this attribute pass.
                    */
                    void							setCreateShaderOverProgrammablePass		(ev_bool value)
                    {
                        mCreateShaderOverProgrammablePass = value;
                    }
                    /** Returns whether shaders are created for passes with shaders.
                    @see setCreateShaderOverProgrammablePass().
                    */
                    ev_bool							getCreateShaderOverProgrammablePass		() const
                    {
                        return mCreateShaderOverProgrammablePass;
                    }

                    /** Returns the amount of schemes used in the for RT shader generation
                    */
                    ev_size_t							getRTShaderSchemeCount					() const;
                    /** Returns the scheme name used in the for RT shader generation by index
                    */
                    const EVString					&getRTShaderScheme						(ev_size_t index) const;
                    //// Default material scheme of the shader generator.
                    static EVString DEFAULT_SCHEME_NAME;
                public:
                    class SGPass;
                    class SGTechnique;
                    class SGMaterial;
                    class SGScheme;
                    ///typedef vector<EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*>				EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList;
                    class EV_RTSS_DLL SGTechniqueList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef vector<EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *const &t)
                        {
                            return mList.insert(pos, t);
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        SGTechniqueList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        SGTechniqueList() {}
                        void push_back(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *t)
                        {
                            mList.push_back(t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& front()
                        {
                            return mList.front();
                        }
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *const &t)
                        {
                            mList.insert(begin() + pos, t);
                        }
                        void remove(ev_size_t pos)
                        {
                            iterator it = mList.begin();
                            it = it + pos;
                            mList.erase(it);
                        }
                        ev_bool empty() const
                        {
                            return mList.empty();
                        }
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *const &at(ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        ev_size_t size() const
                        {
                            return mList.size();
                        }
                        void resize(ev_size_t newSize)
                        {
                            mList.resize(newSize);
                        }
                        void reserve(ev_size_t count)
                        {
                            mList.reserve(count);
                        }
                        void clear()
                        {
                            mList.clear();
                        }
                    };
                    /// Protected types.
                protected:

                    typedef std::pair<EVString, EVString> MatGroupPair;
                    struct MatGroupPair_less
                    {
                        /// ensure we arrange the list first by material name then by group name
                        ev_bool operator()(const MatGroupPair &p1, const MatGroupPair &p2) const
                        {
                            ev_int32 cmpVal = strcmp(p1.first.c_str(), p2.first.c_str());
                            return (cmpVal < 0) || ((cmpVal == 0) && (strcmp(p1.second.c_str(), p2.second.c_str()) < 0));
                        }
                    };
                    typedef vector<SGPass *>					SGPassList;
                    typedef SGPassList::iterator					SGPassIterator;
                    typedef SGPassList::const_iterator				SGPassConstIterator;

                    typedef SGTechniqueList::iterator				SGTechniqueIterator;
                    typedef SGTechniqueList::const_iterator			SGTechniqueConstIterator;
                    typedef map<EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *, EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *>	SGTechniqueMap;
                    typedef SGTechniqueMap::iterator				SGTechniqueMapIterator;

                    typedef map<MatGroupPair, EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial *, MatGroupPair_less>	SGMaterialMap;
                    typedef SGMaterialMap::iterator					SGMaterialIterator;
                    typedef SGMaterialMap::const_iterator			SGMaterialConstIterator;
                    typedef map<EVString, SGScheme *>			SGSchemeMap;
                    typedef SGSchemeMap::iterator					SGSchemeIterator;
                    typedef SGSchemeMap::const_iterator				SGSchemeConstIterator;
                    typedef map<EVString, EarthView::World::Graphic::CScriptTranslator *>	SGScriptTranslatorMap;
                    typedef SGScriptTranslatorMap::iterator			SGScriptTranslatorIterator;
                    typedef SGScriptTranslatorMap::const_iterator	SGScriptTranslatorConstIterator;
                public:
                    /** Shader generator pass wrapper class. */
                    class EV_RTSS_DLL SGPass : public EarthView::World::Core::CAllocatedObject
                    {
                    ev_private:
                        SGPass(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        SGPass			(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *parent, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                        ~SGPass			();

                        /** Build the render state. */
                        void			buildTargetRenderState			();
                        /** Acquire the CPU/GPU programs for this pass. */
                        void			acquirePrograms			();
                        /** Release the CPU/GPU programs of this pass. */
                        void			releasePrograms			();

                        /** Called when a single object is about to be rendered. */
                        void			notifyRenderSingleObject	(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges);
                        /** Get source pass. */
                        EarthView::World::Graphic::CPass			*getSrcPass					()
                        {
                            return mSrcPass;
                        }
                        /** Get destination pass. */
                        EarthView::World::Graphic::CPass			*getDstPass					()
                        {
                            return mDstPass;
                        }
                        /** Get custom FPP sub state of this pass. */
                        EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*getCustomFFPSubState		(ev_int32 subStateOrder);
                        /** Get custom render state of this pass. */
                        EarthView::World::Graphic::RTShaderSystem::CRenderState	*getCustomRenderState		()
                        {
                            return mCustomRenderState;
                        }
                        /** Set the custom render state of this pass. */
                        void			setCustomRenderState		(EarthView::World::Graphic::RTShaderSystem::CRenderState *customRenderState)
                        {
                            mCustomRenderState = customRenderState;
                        }
                        static EVString	UserKey;									/// Key name for associating with a EarthView::World::Graphic::CPass instance.

                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*getCustomFFPSubState		(ev_int32 subStateOrder, const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState);
                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique			*mParent;								/// Parent technique.
                        EarthView::World::Graphic::CPass					*mSrcPass;								/// Source pass.
                        EarthView::World::Graphic::CPass					*mDstPass;								/// Destination pass.
                        EarthView::World::Graphic::RTShaderSystem::CRenderState			*mCustomRenderState;						/// Custom render state.
                        CTargetRenderState		*mTargetRenderState;					/// The compiled render state.
                    };

                    /** Shader generator technique wrapper class. */
                    class EV_RTSS_DLL SGTechnique : public EarthView::World::Core::CAllocatedObject
                    {
                    ev_private:
                        SGTechnique(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        SGTechnique(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial *parent, EarthView::World::Graphic::CTechnique *srcTechnique, const EVString &dstTechniqueSchemeName);
                        ~SGTechnique();

                        /** Get the parent EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial */
                        const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial	*getParent						() const
                        {
                            return mParent;
                        }

                        /** Get the source technique. */
                        EarthView::World::Graphic::CTechnique			*getSourceTechnique				()
                        {
                            return mSrcTechnique;
                        }
                        /** Get the destination technique. */
                        EarthView::World::Graphic::CTechnique			*getDestinationTechnique			()
                        {
                            return mDstTechnique;
                        }
                        /** Get the destination technique scheme name. */
                        const EVString		&getDestinationTechniqueSchemeName() const
                        {
                            return mDstTechniqueSchemeName;
                        }

                        /** Build the render state. */
                        void				buildTargetRenderState				();
                        /** Acquire the CPU/GPU programs for this technique. */
                        void				acquirePrograms				();
                        /** Release the CPU/GPU programs of this technique. */
                        void				releasePrograms				();
                        /** Tells the technique that it needs to generate shader code. */
                        void				setBuildDestinationTechnique	(ev_bool buildTechnique)
                        {
                            mBuildDstTechnique = buildTechnique;
                        }

                        /** Tells if the destination technique should be build. */
                        ev_bool				getBuildDestinationTechnique	() const
                        {
                            return mBuildDstTechnique;
                        }
                        /** Get render state of specific pass.
                        @param passIndex The pass index.
                        */
                        EarthView::World::Graphic::RTShaderSystem::CRenderState		*getRenderState					(ev_uint16 passIndex);
                        /** Tells if a custom render state exists for the given pass. */
                        ev_bool				hasRenderState					(ev_uint16 passIndex);
                        static EVString	UserKey;									/// Key name for associating with a EarthView::World::Graphic::CTechnique instance.
                    protected:

                        /** Create the passes entries. */
                        void				createSGPasses			();
                        /** Destroy the passes entries. */
                        void				destroySGPasses			();

                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial				*mParent;									/// Parent material.
                        EarthView::World::Graphic::CTechnique				*mSrcTechnique;								/// Source technique.
                        EarthView::World::Graphic::CTechnique				*mDstTechnique;								/// Destination technique.
                        SGPassList				mPassEntries;								/// All passes entries.
                        RenderStateList			mCustomRenderStates;						/// The custom render states of all passes.
                        ev_bool					mBuildDstTechnique;							/// Flag that tells if destination technique should be build.
                        EVString					mDstTechniqueSchemeName;					/// Scheme name of destination technique.
                    };

                    /** Shader generator material wrapper class. */
                    class EV_RTSS_DLL SGMaterial : public EarthView::World::Core::CAllocatedObject
                    {
                    ev_private:
                        SGMaterial(_in EarthView::World::Core::CNameValuePairList *pList) :
                            mName((ev_char *)pList->GetAt("materialName")),
                            mGroup((ev_char *)pList->GetAt("groupName"))
                        {
                        }
                    public:
                        /** Class constructor. */
                        SGMaterial(const EVString &materialName, const EVString &groupName)	: mName(materialName), mGroup(groupName)
                        {
                        }
                        /** Get the material name. */
                        const EVString &getMaterialName				() const
                        {
                            return mName;
                        }

                        /** Get the group name. */
                        const EVString &getGroupName					() const
                        {
                            return mGroup;
                        }
                        /** Get the const techniques list of this material. */
                        const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList	&getTechniqueList	() const
                        {
                            return mTechniqueEntries;
                        }
                        /** Get the techniques list of this material. */
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList	&getTechniqueList		()
                        {
                            return mTechniqueEntries;
                        }

                    protected:
                        EVString				mName;									/// The material name.
                        EVString				mGroup;									/// The group name.
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList		mTechniqueEntries;						/// All passes entries.
                    };

                    /** Shader generator scheme class. */
                    class EV_RTSS_DLL SGScheme : public EarthView::World::Core::CAllocatedObject
                    {
                    ev_private:
                        SGScheme(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        SGScheme		(const EVString &schemeName);
                        ~SGScheme		();


                        /** Return true if this scheme dose not contains any techniques.
                        */
                        ev_bool					empty				() const
                        {
                            return mTechniqueEntries.empty();
                        }

                        /** Invalidate the whole scheme.
                        @see ShaderGenerator::invalidateScheme.
                        */
                        void					invalidate				();
                        /** Validate the whole scheme.
                        @see ShaderGenerator::validateScheme.
                        */
                        void					validate				();
                        /** Invalidate specific material.
                        @see ShaderGenerator::invalidateMaterial.
                        @const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME
                        */
                        void					invalidate				(const EVString &materialName, const EVString &groupName);
                        void invalidate (const EVString &materialName);
                        /** Validate specific material.
                        @see ShaderGenerator::validateMaterial.
                        @const EVString& groupName = CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME
                        */
                        ev_bool					validate				(const EVString &materialName, const EVString &groupName);
                        ev_bool					validate				(const EVString &materialName);

                        /** Add a technique to current techniques list. */
                        void					addTechniqueEntry		(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *techEntry);
                        /** Remove a technique from the current techniques list. */
                        void					removeTechniqueEntry	(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *techEntry);

                        /** Get global render state of this scheme.
                        @see ShaderGenerator::getRenderState.
                        */
                        EarthView::World::Graphic::RTShaderSystem::CRenderState			*getRenderState			();
                        /** Get specific pass render state.
                        @see ShaderGenerator::getRenderState.
                        */
                        EarthView::World::Graphic::RTShaderSystem::CRenderState			*getRenderState			(const EVString &materialName, const EVString &groupName, ev_uint16 passIndex);
                    protected:
                        /** Synchronize the current light settings of this scheme with the current settings of the scene. */
                        void					synchronizeWithLightSettings	();
                        /** Synchronize the fog settings of this scheme with the current settings of the scene. */
                        void					synchronizeWithFogSettings		();

                    protected:
                        EVString					mName;									/// Scheme name.
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList			mTechniqueEntries;						/// EarthView::World::Graphic::CTechnique entries.
                        ev_bool					mOutOfDate;								/// Tells if this scheme is out of date.
                        EarthView::World::Graphic::RTShaderSystem::CRenderState			*mRenderState;							/// The global render state of this scheme.
                        FogMode					mFogMode;								/// Current fog mode.
                    };

                    /** Shader generator CRenderObjectListener sub class. */
                    class EV_RTSS_DLL SGRenderObjectListener : public EarthView::World::Graphic::CRenderObjectListener
                    {
                    ev_private:
                        SGRenderObjectListener(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
                            mOwner = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *)pList->GetAt("owner");
                        }
                    public:
                        SGRenderObjectListener(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *owner)
                        {
                            mOwner = owner;
                        }
                        /**
                        Listener overridden function notify the shader generator when rendering single object.
                        */
                        virtual void notifyRenderSingleObject(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass,
                                                              const EarthView::World::Graphic::CAutoParamDataSource *source,
                                                              const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges)
                        {
                            mOwner->notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
                        }
                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *mOwner;
                    };
                    /** Shader generator scene manager sub class. */
                    class EV_RTSS_DLL SGSceneManagerListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
                    {
                    ev_private:
                        SGSceneManagerListener(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
                            mOwner = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *)pList->GetAt("owner");
                        }
                    public:
                        SGSceneManagerListener(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *owner)
                        {
                            mOwner = owner;
                        }
                        /**
                        Listener overridden function notify the shader generator when finding visible objects process started.
                        */
                        virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source,
                                                           EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v)
                        {
                            mOwner->preFindVisibleObjects(source, irs, v);
                        }
                        virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source,
                                                            EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v)
                        {
                        }
                        virtual void shadowTexturesUpdated(ev_size_t numberOfShadowTextures)
                        {
                        }
                        virtual void shadowTextureCasterPreViewProj(EarthView::World::Graphic::CLight *light,
                                EarthView::World::Graphic::CCamera *camera, ev_size_t iteration)
                        {
                        }
                        virtual void shadowTextureReceiverPreViewProj(EarthView::World::Graphic::CLight *light,
                                EarthView::World::Graphic::CFrustum *frustum)
                        {
                        }
                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *mOwner;							/// The shader generator instance.
                    };
                    /** Shader generator CScriptTranslatorManager sub class. */
                    class EV_RTSS_DLL SGScriptTranslatorManager : public EarthView::World::Graphic::CScriptTranslatorManager
                    {
                    ev_private:
                        SGScriptTranslatorManager(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
                            mOwner = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *)pList->GetAt("owner");
                        }
                    public:
                        SGScriptTranslatorManager(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *owner)
                        {
                            mOwner = owner;
                        }
                        //// Returns the number of translators being managed
                        virtual ev_size_t getNumTranslators() const
                        {
                            return mOwner->getNumTranslators();
                        }

                        //// Returns a manager for the given object abstract node, or null if it is not supported
                        virtual EarthView::World::Graphic::CScriptTranslator *getTranslator(_in const EarthView::World::Graphic::AbstractNodePtr &node)
                        {
                            return mOwner->getTranslator(node);
                        }
                    protected:
                        EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *mOwner;						/// The shader generator instance.
                    };
                    /// Protected types.
                protected:
                    ///-----------------------------------------------------------------------------
                    typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *> 		SubRenderStateFactoryMap;
                    typedef SubRenderStateFactoryMap::iterator 				SubRenderStateFactoryIterator;
                    typedef SubRenderStateFactoryMap::const_iterator		SubRenderStateFactoryConstIterator;
                    ///-----------------------------------------------------------------------------
                    typedef map<EVString, EarthView::World::Graphic::CSceneManager *> 				SceneManagerMap;
                    typedef SceneManagerMap::iterator 						SceneManagerIterator;
                    typedef SceneManagerMap::const_iterator					SceneManagerConstIterator;
                protected:
                    /** Class default constructor */
                    CShaderGenerator();
                    /** Class destructor */
                    ~CShaderGenerator();
                    /** Initialize the shader generator instance. */
                    ev_bool				_initialize			();

                    /** Finalize the shader generator instance. */
                    void				_finalize			();
                    /** Find source technique to generate shader based technique based on it. */
                    EarthView::World::Graphic::CTechnique			*findSourceTechnique				(const EVString &materialName, const EVString &groupName, const EVString &srcTechniqueSchemeName);
                    /** Checks if a given technique has passes with shaders. */
                    ev_bool				isProgrammable					(EarthView::World::Graphic::CTechnique *tech) const;

                    /** Called from the sub class of the RenderObjectLister when single object is rendered. */
                    void				notifyRenderSingleObject		(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass,  const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges);
                    /** Called from the sub class of the CSceneManager::Listener when finding visible object process starts. */
                    void				preFindVisibleObjects			(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
                    /** Create sub render state core extensions factories */
                    void				createSubRenderStateExFactories			();
                    /** Destroy sub render state core extensions factories */
                    void				destroySubRenderStateExFactories		();
/*                    current sub render state factories.
                    @see SubRenderStateFactory::createInstance
                    @param compiler The compiler instance.
                    @param prop The abstract property node.
                    @param pass The pass that is the parent context of this node.
                    @param the translator for the specific SubRenderState
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState		*createSubRenderState				(CScriptCompiler *compiler, CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, CSGScriptTranslator *translator);
/*
                    current sub render state factories.
                    @see SubRenderStateFactory::createInstance
                    @param compiler The compiler instance.
                    @param prop The abstract property node.
                    @param texState The texture unit state that is the parent context of this node.
                    @param the translator for the specific SubRenderState
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState		*createSubRenderState				(CScriptCompiler *compiler, CPropertyAbstractNode *prop, CTextureUnitState *texState, CSGScriptTranslator *translator);
                    /**
                    Add custom script translator.
                    Return true upon success.
                    @param key The key name of the given translator.
                    @param translator The translator to associate with the given key.
                    */
                    ev_bool				addCustomScriptTranslator			(const EVString &key, EarthView::World::Graphic::CScriptTranslator *translator);
                    /**
                    Remove custom script translator.
                    Return true upon success.
                    @param key The key name of the translator to remove.
                    */
                    ev_bool				removeCustomScriptTranslator		(const EVString &key);
                    /** Return number of script translators. */
                    ev_size_t				getNumTranslators					() const;
                    /** Return a matching script translator. */
                    EarthView::World::Graphic::CScriptTranslator	*getTranslator						(_in  const EarthView::World::Graphic::AbstractNodePtr &node);

                    /** This method called by instance of SGMaterialSerializerListener and
                    serialize a given pass entry attributes.
                    @param ser The material serializer.
                    @param passEntry The SGPass instance.
                    */
                    void				serializePassAttributes				(CMaterialSerializer *ser, SGPass *passEntry);
                    /** This method called by instance of SGMaterialSerializerListener and
                    serialize a given textureUnitState entry attributes.
                    @param ser The material serializer.
                    @param passEntry The SGPass instance.
                    @param srcTextureUnit The CTextureUnitState being serialized.
                    */
                    void serializeTextureUnitStateAttributes(CMaterialSerializer *ser, SGPass *passEntry, const CTextureUnitState *srcTextureUnit);
                    /** Finds an entry iterator in the mMaterialEntriesMap map.
                    This function is able to find materials with group specified as
                    AUTODETECT_RESOURCE_GROUP_NAME
                    */
                    SGMaterialIterator findMaterialEntryIt(const EVString &materialName, const EVString &groupName);
                    SGMaterialConstIterator findMaterialEntryIt(const EVString &materialName, const EVString &groupName) const;

                    typedef std::pair<SGScheme *, ev_bool> SchemeCreateOrRetrieveResult;
                    /**
                    Returns a requested scheme. If the scheme does not exist this function creates it.
                    @param schemeName The scheme name to retrieve.
                    */
                    SchemeCreateOrRetrieveResult createOrRetrieveScheme(const EVString &schemeName);
                    /** Used to check if finalizing */
                    ev_bool getIsFinalizing() const;
                protected:
                    EV_AUTO_MUTEX																	/// Auto mutex.
                    EarthView::World::Graphic::CSceneManager					*mActiveSceneMgr;								/// The active scene manager.
                    SceneManagerMap					mSceneManagerMap;								/// A map of all scene managers this generator is bound to.
                    SGRenderObjectListener			*mRenderObjectListener;							/// Render object listener.
                    SGSceneManagerListener			*mSceneManagerListener;							/// Scene manager listener.
                    SGScriptTranslatorManager		*mScriptTranslatorManager;						/// Script translator manager.
                    EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener	*mMaterialSerializerListener;					/// Custom material Serializer listener - allows exporting material that contains shader generated techniques.
                    SGScriptTranslatorMap			mScriptTranslatorsMap;							/// A map of the registered custom script translators.
                    CSGScriptTranslator				mCoreScriptTranslator;							/// The core translator of the RT Shader System.
                    EVString							mShaderLanguage;								/// The target shader language (currently only cg supported).
                    EVString							mVertexShaderProfiles;							/// The target vertex shader profile. Will be used as argument for program compilation.
                   EarthView::World::Core::StringVector					mVertexShaderProfilesList;						/// List of target vertex shader profiles.
                    EVString							mFragmentShaderProfiles;						/// The target fragment shader profile. Will be used as argument for program compilation.
                   EarthView::World::Core::StringVector					mFragmentShaderProfilesList;					/// List of target fragment shader profiles..
                    EVString							mShaderCachePath;								/// Path for caching the generated shaders.
                    CProgramManager					*mProgramManager;								/// Shader program manager.
                    CProgramWriterManager			*mProgramWriterManager;							/// Shader program writer manager.
                    CFFPRenderStateBuilder			*mFFPRenderStateBuilder;							/// Fixed Function Render state builder.
                    SGMaterialMap					mMaterialEntriesMap;							/// CMaterial entries map.
                    SGSchemeMap						mSchemeEntriesMap;								/// Scheme entries map.
                    SGTechniqueMap					mTechniqueEntriesMap;							/// All technique entries map.
                    SubRenderStateFactoryMap		mSubRenderStateFactories;						/// Sub render state registered factories.
                    SubRenderStateFactoryMap		mSubRenderStateExFactories;						/// Sub render state core extension factories.
                    ev_bool							mActiveViewportValid;							/// True if active view port use a valid SGScheme.
                    ev_int32								mLightCount[3];									/// EarthView::World::Graphic::CLight count per light type.
                    EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy			mVSOutputCompactPolicy;							/// Vertex shader outputs compact policy.
                    ev_bool							mCreateShaderOverProgrammablePass; 				/// Tells whether shaders are created for passes with shaders
                    ev_bool                            mIsFinalizing;                  				/// a flag to indicate finalizing
                private:
                    friend class SGPass;
                    friend class CFFPRenderStateBuilder;
                    friend class SGScriptTranslatorManager;
                    friend class CSGScriptTranslator;
                    friend class CSGMaterialSerializerListener;

                };
            }
        }
    }
}

#endif

