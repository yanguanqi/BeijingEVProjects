#ifndef _ShaderSGXAtlasTexture_
#define _ShaderSGXAtlasTexture_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shadersubrenderstate.h"
#include "shaderparameter.h"
#include <singleton.h>

#define TAS_MAX_TEXTURES 4
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                class EV_RTSS_DLL TextureAtlasRecord : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureAtlasRecord(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    TextureAtlasRecord(const EVString &texOriginalName, const EVString &texAtlasName,
                                       const float texPosU, const float texPosV, const float texWidth, const float texHeight,
                                       const size_t texIndexInAtlas);
                    float posU;
                    float posV;
                    float width;
                    float height;
                    EVString originalTextureName;
                    EVString atlasTextureName;
                    size_t indexInAtlas;
                    TextureAtlasRecord() {}
                };
                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord> EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable;
                class EV_RTSS_DLL TextureAtlasTable : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    TextureAtlasTable(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    TextureAtlasTable() {}
                    void push_back(EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord &back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord &operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord &at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasRecord const &at(ev_size_t n) const
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

                ///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable> EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr;
                class EV_RTSS_DLL TextureAtlasTablePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable>
                {
                ev_private:
                    TextureAtlasTablePtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<TextureAtlasTable>(
                            pList && pList->Exist("rep") ? (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *)pList->GetAt("rep") : (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *) NULL
                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                            EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable>*)pList->GetAt("r");
                            EV_SET_AUTO_SHARED_MUTEX_NULL
                            EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                            {
                                EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                                EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                                pRep = r.pRep;
                                pUseCount = r.pUseCount;
                                useFreeMethod = r.useFreeMethod;
                                /// Handle zero pointer gracefully to manage STL containers
                                if(pUseCount)
                                {
                                    ++(*pUseCount);
                                }
                            }
                        }
                    }
                public:
                    TextureAtlasTablePtr() : EarthView::World::Core::CSharedPtr<TextureAtlasTable>() {}
                    explicit TextureAtlasTablePtr(TextureAtlasTable *rep) : EarthView::World::Core::CSharedPtr<TextureAtlasTable>(rep) {}
                    explicit TextureAtlasTablePtr(TextureAtlasTable *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<TextureAtlasTable>(rep, inFreeMethod) {}
                    TextureAtlasTablePtr(const TextureAtlasTablePtr &r) : EarthView::World::Core::CSharedPtr<TextureAtlasTable>(r) {}
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable *get() const
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::TextureAtlasTable>::get();
                    }
                };
                ///typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr> TextureAtlasMap;
                class EV_RTSS_DLL TextureAtlasMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureAtlasMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    TextureAtlasMap() {}
                    ev_bool push(const EVString &key, const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr)val;
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
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &get(const EVString &key)
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
                    typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr> InternalList;
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

                /** Implements texture atlas sampling.

                This class implements a sub render state which allows sampling of a texture
                from a texture atlas.

                Note: This class does not implement the entire texture sub-render state. It
                only implement the sampling of textures. This class needs to work in conjunction
                with the default FFPTexturing to work.

                \par Using the TextureAtlasSampler
                There are 2 pieces of information that are need to be provided for this sub
                render state to work.

                The first is the texture atlas table. This table consists of several records
                containing the position and size of each texture in the in the texture atlas.
                This information needs to be provided per atlas texture. The information is
                functions setTextureAtlasTable and removeTextureAtlasTable.

                The second information is the index of the record in the texture atlas table
                to which a given texture is associated with. This information is provided
                through an extra texture coordinate in the vertex buffer. This texture coordinate
                might can be placed either relative or in absolute position.

                For example:
                 - given 3 texture sand a relative position of 2, the shader will search assume
                	that the indexes exist in texture coordinate 5 (2+3)
                 - given an absolute position of 2, the shader will search for the indexes in
                	texture coordinate 2, regardless of the amount of textures

                The position of the indexes can be controlled globally through the
                The default index position is set to relative + 1.

                \par Preparing atlas textures
                When preparing the atlas texture to be used in this system you should make sure
                that all texture with in the atlas have power-of-2 dimensions. And also that
                the inserted textures will be padded with 1 pixel of their own border color.
                This will prevent visual artifacts caused when sampling textures at their borders.

                \par Border issues
                There is an inherit problem in texture atlases. This issue occurs because individual textures within
                the atlas texture are adjacent to one another. when polling the color of a texture near the texture's
                edges, especially in lower mipmaps pixel color from other images may be mixed in with the result.
                There are 3 ways to handle this issue, each with it's own limitations:
                -# Ignore the problem - bad for repetitive images in which the border colour may be quite apparent.
                -# Auto adjust the polling position - This the default implementation of the TextureAtlasSampler SRS.
                	Auto adjust the polling position in the shader according the mipmap level in use. This means that
                	a different (smaller) section of an image may be polled instead of the original section (especially
                	with in mipmaps). Bad for non repetitive accurate images.
                -# Generate a texture atlas where each image will contain around it a wrapped version of itself.
                	This solves all visual problems but is wasteful in gpu memory (up to 3 times the size of the original image)


                You can use the NVidia "Texture Atlas Tools" to create the texture.
                */
                class EV_RTSS_DLL CTextureAtlasSampler : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CTextureAtlasSampler(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CTextureAtlasSampler();
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString getType() const;
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual int getExecutionOrder() const;
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /**
                    @see SubRenderState::updateGpuProgramsParams.
                    */
                    virtual void updateGpuProgramsParams(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass,  const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList);
                    /**
                    @see SubRenderState::preAddToRenderState.
                    */
                    virtual bool preAddToRenderState(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    static EVString Type;
                    /// Protected methods
                ev_internal:
                    virtual bool			resolveParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                protected:
                    /**
                    Given an address mode returns the function name which calculates the UV values for that addressing mode
                    */
                    const char *getAdressingFunctionName(CTextureUnitState::TextureAddressingMode mode);

                    /// Attributes.
                    ParameterPtr mVSInpTextureTableIndex; 				/// The index of the information on the texture in the table

                    CTextureUnitState::UVWAddressingMode mTextureAddressings[TAS_MAX_TEXTURES]; 				/// The addressing mode for each texture
                    ParameterPtr mVSOutTextureDatas[TAS_MAX_TEXTURES]; 				/// The position and size of the texture in the atlas
                    ParameterPtr mPSInpTextureDatas[TAS_MAX_TEXTURES]; 				/// The position and size of the texture in the atlas
                    UniformParameterPtr mPSTextureSizes[TAS_MAX_TEXTURES]; 				///A parameter carrying the sizes of the atlas textures
                    UniformParameterPtr mVSTextureTable[TAS_MAX_TEXTURES]; 				/// The table containing information on the textures in the atlas
                    ///The position of the texture coordinates containing the index information
                    ev_uint16 mAtlasTexcoordPos;
                    ///The texture atlas table data
                    EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr mAtlasTableDatas[TAS_MAX_TEXTURES];
                    ///For each texture unit in the pass tells if it uses atlas texture
                    bool mIsAtlasTextureUnits[TAS_MAX_TEXTURES];
                    ///Tells if the data in mAtlasTableData has been uploaded to the corresponding mVSTextureTable parameter
                    bool mIsTableDataUpdated;
                    ///Tells whether border issue handling uses auto adjust polling position.
                    bool mAutoAdjustPollPosition;
                };

                /**
                A factory that enables creation of TextureAtlasSampler instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CTextureAtlasSamplerFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CTextureAtlasSamplerFactory(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    static EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *ms_Singleton;
                public:
                    enum IndexPositionMode
                    {
                        ipmRelative,
                        ipmAbsolute
                    };
                    class EV_RTSS_DLL TextureAtlasAttib : public  EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        TextureAtlasAttib(_in EarthView::World::Core::CNameValuePairList *pList):
                            positionMode( pList && pList->Exist("_posMode") ? *(EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode *)pList->GetAt("_posMode") : ipmRelative),
                            positionOffset(  pList && pList->Exist("_posOffset") ? *(ev_uint16 *)pList->GetAt("_posOffset") : 1),
                            autoBorderAdjust( pList &&  pList->Exist("_autoBorderAdjust") ? *(bool *)pList->GetAt("_autoBorderAdjust") : true)
                        {}
                    public:
                        TextureAtlasAttib() : positionMode(ipmRelative), positionOffset(1),
                            autoBorderAdjust(true) {}
                        TextureAtlasAttib(EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode _posMode ) :  positionMode(_posMode), positionOffset(1),
                            autoBorderAdjust(true) {}
                        TextureAtlasAttib(EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode _posMode ,	ev_uint16 _posOffset) : positionMode(_posMode), positionOffset(_posOffset),
                            autoBorderAdjust(true) {}
                        TextureAtlasAttib(EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode _posMode,	ev_uint16 _posOffset,
                                          bool _autoBorderAdjust) : positionMode(_posMode), positionOffset(_posOffset),
                            autoBorderAdjust(_autoBorderAdjust) {}

                        EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode positionMode;
                        ev_uint16 positionOffset;
                        bool autoBorderAdjust;
                    };
                public:

                    CTextureAtlasSamplerFactory();
                    ~CTextureAtlasSamplerFactory();
                    ///CSingleton implementation
                    static EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory *getSingletonPtr();
                    static EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory &getSingleton();



                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString getType() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState *createInstance(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /**
                    @see SubRenderStateFactory::writeInstance.
                    */
                    virtual void writeInstance(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);

                    /**
                    	Adds a texture atlas definition from a stream.

                    	This function loads a texture atlas definition file from a stream. The accepted format for
                    	this file is the NVidia Texture Atlas Tools ".tai" file format. This file as

                    	The ".tai" format consist of lines, where each line corresponds to a specific texture
                    	in the texture atlas. Each line has the following format:
                    	# <original texture filename>/t/t<atlas filename>, <atlas idx>, <atlas type>, <woffset>, <hoffset>, <depth offset>, <width>, <height>

                    	@param filename The full path to the file containing a ".tai" format data.
                    	@param stream A stream to a file containing ".tai" format data
                    	@param textureAtlasTable A table into which the data in the stream will be filled. This
                    		parameter will be filled only if it is not null. The system factory keeps a copy of this
                    		information in any case.
                    	@param autoBorderAdjust Sets whether to automatically adjust the image polling area for border
                    		issues.See the Border issues paragraph under the class documentation for more information.
                    */
                    /*bool addTexutreAtlasDefinition( const EVString& filename, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable = EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr());*/
                    bool addTexutreAtlasDefinition( const EVString &filename, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable);
                    bool addTexutreAtlasDefinition( const EVString &filename);
                    ///bool addTexutreAtlasDefinition( EarthView::World::Core::DataStreamPtr stream, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable = EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr());
                    bool addTexutreAtlasDefinition( EarthView::World::Core::DataStreamPtr stream, EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr textureAtlasTable);
                    bool addTexutreAtlasDefinition( EarthView::World::Core::DataStreamPtr stream);
                    /**
                    	Set the texture atlas information for a given texture
                    	@param textureName Name of an atlas texture
                    	@param atlasData a list of records containing the position and size of each
                    		texture in the atlas
                    	@param autoBorderAdjust Sets whether to automatically adjust the image polling area for border
                    		issues.See the Border issues paragraph under the class documentation for more information.
                    */
                    /*void setTextureAtlasTable(const EVString& textureName, const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr& atlasData, bool autoBorderAdjust = true);*/
                    void setTextureAtlasTable(const EVString &textureName, const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &atlasData, bool autoBorderAdjust);
                    void setTextureAtlasTable(const EVString &textureName, const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &atlasData);

                    /**
                    	Removes the texture atlas information from a given texture
                    	@param textureName Name of an atlas texture
                    */
                    void removeTextureAtlasTable(const EVString &textureName);
                    /**
                    	Removes all texture atlas table information
                    */
                    void removeAllTextureAtlasTables();
                    /**
                    	Retrieve the texture atlas table information for a given texture
                    	@param textureName Name of an atlas texture
                    */
                    const EarthView::World::Graphic::RTShaderSystem::TextureAtlasTablePtr &getTextureAtlasTable(const EVString &textureName) const;
                    /**
                    	Set the default attributes concerning atlas texture processing
                    	@param mode The index positioning mode. Tells relative to where the the texture coordinates
                    		containing the atlas image to use are positioned.
                    	@param offset The index positioning offset. Tells the offset relative to the index positioning
                    		mode.
                    	@param autoAdjustBorders Tells whether to automatically adjust the polled area in the texture
                    		relative to the used mipmap level.
                    	@see TextureAtlasSampler
                    */
                    void setDefaultAtlasingAttributes(EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode mode, ev_uint16 offset, bool autoAdjustBorders);
                    /**
                    	Returns the default attributes of texture atlas processing
                    	@see setDefaultAtlasingAttributes
                    */
                    const EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib &getDefaultAtlasingAttributes() const;
                    /**
                    	Set the default attributes concerning atlas texture processing for a specific material
                    	@param material The material to which to add the information
                    	@param mode The index positioning mode. Tells relative to where the the texture coordinates
                    		containing the atlas image to use are positioned.
                    	@param offset The index positioning offset. Tells the offset relative to the index positioning
                    		mode.
                    	@param autoAdjustBorders Tells whether to automatically adjust the polled area in the texture
                    		relative to the used mipmap level.
                    	@see TextureAtlasSampler
                    */
                    void setMaterialAtlasingAttributes(EarthView::World::Graphic::CMaterial *material,
                                                       EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::IndexPositionMode mode, ev_uint16 offset, bool autoAdjustBorders);

                    /**
                    	Tells whether a specific material has atlas attributes associated with it. And returns the
                    	attributes to be used.
                    	@see setMaterialAtlasingAttributes
                    	*/
                    ///bool hasMaterialAtlasingAttributes(EarthView::World::Graphic::CMaterial* material, EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib* attrib = NULL) const;
                    bool hasMaterialAtlasingAttributes(EarthView::World::Graphic::CMaterial *material, EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib *attrib) const;
                    bool hasMaterialAtlasingAttributes(EarthView::World::Graphic::CMaterial *material) const;

                ev_internal:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl();
                private:
                    ///Holds a mapping of texture names and the atlas table information associated with them
                    TextureAtlasMap mAtlases;
                    EarthView::World::Graphic::RTShaderSystem::CTextureAtlasSamplerFactory::TextureAtlasAttib mDefaultAtlasAttrib;
                };
                EV_RTSS_DLL void operator<<(std::ostream &o, const CTextureAtlasSamplerFactory::TextureAtlasAttib &tai);
            }
        }
    }
}

#endif
#endif

