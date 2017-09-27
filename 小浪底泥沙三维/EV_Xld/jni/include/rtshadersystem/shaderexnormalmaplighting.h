#ifndef _ShaderExNormalMapLighting_
#define _ShaderExNormalMapLighting_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shaderparameter.h"
#include "shadersubrenderstate.h"
#include <mathengine/vector4.h>
#include <light.h>
#include <common.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {
#define SGX_LIB_NORMALMAPLIGHTING					"SGXLib_NormalMapLighting"
#define SGX_FUNC_CONSTRUCT_TBNMATRIX				"SGX_ConstructTBNMatrix"
#define SGX_FUNC_TRANSFORMNORMAL					"SGX_TransformNormal"
#define SGX_FUNC_TRANSFORMPOSITION					"SGX_TransformPosition"
#define SGX_FUNC_FETCHNORMAL						"SGX_FetchNormal"
#define SGX_FUNC_LIGHT_DIRECTIONAL_DIFFUSE			"SGX_Light_Directional_Diffuse"
#define SGX_FUNC_LIGHT_DIRECTIONAL_DIFFUSESPECULAR	"SGX_Light_Directional_DiffuseSpecular"
#define SGX_FUNC_LIGHT_POINT_DIFFUSE				"SGX_Light_Point_Diffuse"
#define SGX_FUNC_LIGHT_POINT_DIFFUSESPECULAR		"SGX_Light_Point_DiffuseSpecular"
#define SGX_FUNC_LIGHT_SPOT_DIFFUSE					"SGX_Light_Spot_Diffuse"
#define SGX_FUNC_LIGHT_SPOT_DIFFUSESPECULAR			"SGX_Light_Spot_DiffuseSpecular"
                /******* Normal Map Lighting extension sub render state implementation.
                Derives from SubRenderState class.
                ****/
                class EV_RTSS_DLL CNormalMapLighting : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CNormalMapLighting(_in EarthView::World::Core::CNameValuePairList *pList);
                    //// Interface.
                public:
                    /******* Class default constructor ****/
                    CNormalMapLighting();
                    /*******
                    @see SubRenderState::getType.
                    ****/
                    virtual EVString	getType					() const;
                    /*******
                    @see SubRenderState::getType.
                    ****/
                    virtual int				getExecutionOrder		() const;
                    /*******
                    @see SubRenderState::updateGpuProgramsParams.
                    ****/
                    virtual void			updateGpuProgramsParams	(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList);
                    /*******
                    @see SubRenderState::copyFrom.
                    ****/
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);

                    /*******
                    @see SubRenderState::preAddToRenderState.
                    ****/
                    virtual bool			preAddToRenderState		(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /*******
                    Set the index of the input vertex shader texture coordinate set
                    ****/
                    void					setTexCoordIndex		(ev_uint32 index)
                    {
                        mVSTexCoordSetIndex = index;
                    }
                    /*******
                    Return the index of the input vertex shader texture coordinate set.
                    ****/
                    ev_uint32			getTexCoordIndex		() const
                    {
                        return mVSTexCoordSetIndex;
                    }
                    //// Type of this render state.
                    static EVString Type;
                    //// Normal map space definition.
                    enum NormalMapSpace
                    {
                        NMS_TANGENT,						//// Normal map contains normal data in tangent space.
                        //// This is the default normal mapping behavior and it requires that the
                        //// target mesh will have valid tangents within its vertex data.

                        NMS_OBJECT							//// Normal map contains normal data in object local space.
                        //// This normal mapping technique has the advantages of better visualization results,
                        //// lack of artifacts that comes from texture mirroring usage, it doesn't requires tangent
                        //// and it also saves some instruction in the vertex shader stage.
                        //// in terms of local space rotations and translations.
                    };
                    /*******
                    Set the normal map space.
                    @param normalMapSpace The normal map space.
                    ****/
                    void					setNormalMapSpace			(NormalMapSpace normalMapSpace)
                    {
                        mNormalMapSpace = normalMapSpace;
                    }
                    /******* Return the normal map space. ****/
                    EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::NormalMapSpace			getNormalMapSpace			() const
                    {
                        return mNormalMapSpace;
                    }
                    /*******
                    Set the normal map texture name.
                    ****/
                    void					setNormalMapTextureName		(const EVString &textureName)
                    {
                        mNormalMapTextureName = textureName;
                    }
                    /*******
                    Return the normal map texture name.
                    ****/
                    const EVString			&getNormalMapTextureName		() const
                    {
                        return mNormalMapTextureName;
                    }
                    /*******
                    Set the normal map filtering attributes.
                    @param minFilter The desired min filter.
                    @param magFilter The desired mag filter.
                    @param mipFilter The desired mip filter.
                    ****/
                    void					setNormalMapFiltering			(const EarthView::World::Graphic::FilterOptions minFilter, const EarthView::World::Graphic::FilterOptions magFilter, const EarthView::World::Graphic::FilterOptions mipFilter)
                    {
                        mNormalMapMinFilter = minFilter;
                        mNormalMapMagFilter = magFilter;
                        mNormalMapMipFilter = mipFilter;
                    }
                    /*******
                    Return the normal map filtering attributes.
                    @param minFilter The desired min filter.
                    @param magFilter The desired mag filter.
                    @param mipFilter The desired mip filter.
                    ****/
                    void					getNormalMapFiltering			(EarthView::World::Graphic::FilterOptions &minFilter, EarthView::World::Graphic::FilterOptions &magFilter, EarthView::World::Graphic::FilterOptions &mipFilter) const
                    {
                        minFilter = mNormalMapMinFilter;
                        magFilter = mNormalMapMagFilter ;
                        mipFilter = mNormalMapMipFilter;
                    }
                    /******* Setup the normal map anisotropy value.
                    @param anisotropy The anisotropy value.
                    ****/
                    void			setNormalMapAnisotropy		(ev_uint32 anisotropy)
                    {
                        mNormalMapAnisotropy = anisotropy;
                    }

                    /******* Return the normal map anisotropy value. ****/
                    ev_uint32	getNormalMapAnisotropy		() const
                    {
                        return mNormalMapAnisotropy;
                    }

                    /******* Setup the normal map anisotropy value.
                    @param anisotropy The anisotropy value.
                    ****/
                    void			setNormalMapMipBias		(Real mipBias)
                    {
                        mNormalMapMipBias = mipBias;
                    }

                    /******* Return the normal map mip bias value. ****/
                    Real			getNormalMapMipBias		() const
                    {
                        return mNormalMapMipBias;
                    }

                    //// Protected types:
                ev_private:

                    //// Per light parameters.
                    struct EV_RTSS_DLL LightParams
                    {
                        CLight::LightTypes		mType;								//// CLight type.
                        UniformParameterPtr		mPosition;							//// CLight position.
                        ParameterPtr			mVSOutToLightDir;					//// Vertex shader output vertex position to light position direction (texture space).
                        ParameterPtr			mPSInToLightDir;					//// Pixel shader input vertex position to light position direction (texture space).
                        UniformParameterPtr		mDirection;							//// CLight direction.
                        ParameterPtr			mVSOutDirection;					//// Vertex shader output light direction (texture space).
                        ParameterPtr			mPSInDirection;						//// Pixel shader input light direction (texture space).
                        UniformParameterPtr		mAttenuatParams;					//// Attenuation parameters.
                        UniformParameterPtr		mSpotParams;						//// Spot light parameters.
                        UniformParameterPtr		mDiffuseColour;						//// Diffuse colour.
                        UniformParameterPtr		mSpecularColour;					//// Specular colour.
                    };
                    /****typedef vector<LightParams>				LightParamsList;****/
                    class EV_RTSS_DLL LightParamsList : public CBaseObject
                    {
                    ev_private:
                        typedef vector<LightParams> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION(mList); 				////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, LightParams const &t)
                        {
                            return mList.insert(pos, t);
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        LightParamsList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        LightParamsList() {}
                        void push_back(LightParams t)
                        {
                            mList.push_back(t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        LightParams &front()
                        {
                            return mList.front();
                        }
                        LightParams &back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, LightParams const &t)
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
                        LightParams &operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        LightParams const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        LightParams &at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        LightParams const &at(ev_size_t n) const
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

                protected:
                    typedef LightParamsList::iterator				LightParamsIterator;
                    typedef LightParamsList::const_iterator			LightParamsConstIterator;
                    //// Protected methods
                protected:
                    /*******
                    Set the track per vertex colour type. Ambient, Diffuse, Specular and Emissive lighting components source
                    can be the vertex colour component. To establish such a link one should provide the matching flags to this
                    sub render state.
                    ****/
                    void					setTrackVertexColourType(TrackVertexColourType type)
                    {
                        mTrackVertexColourType = type;
                    }
                    /*******
                    Return the current track per vertex type.
                    ****/
                    TrackVertexColourType	getTrackVertexColourType() const
                    {
                        return mTrackVertexColourType;
                    }

                    /*******
                    Set the light count per light type that this sub render state will generate.
                    @see ShaderGenerator::setLightCount.
                    ****/
                    void					setLightCount			(const int lightCount[3]);
                    /*******
                    Get the light count per light type that this sub render state will generate.
                    @see ShaderGenerator::getLightCount.
                    ****/
                    void					getLightCount			(int lightCount[3]) const;
                    /*******
                    Set the specular component state. If set to true this sub render state will compute a specular
                    lighting component in addition to the diffuse component.
                    @param enable EarthView::World::Graphic::CPass true to enable specular component computation.
                    ****/
                    void					setSpecularEnable		(bool enable)
                    {
                        mSpecularEnable = enable;
                    }
                    /*******
                    Get the specular component state.
                    ****/
                    bool					getSpecularEnable		() const
                    {
                        return mSpecularEnable;
                    }


                    /******* Resolve global lighting parameters ****/
                    bool					resolveGlobalParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /******* Resolve per light parameters ****/
                    bool					resolvePerLightParameters	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                ev_internal:
                    /*******
                    	@see SubRenderState::resolveParameters.
                    	****/
                    virtual bool			resolveParameters			(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /*******
                    @see SubRenderState::resolveDependencies.
                    ****/
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /*******
                    @see SubRenderState::addFunctionInvocations.
                    ****/
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);

                protected:
                    /*******
                    Internal method that adds related vertex shader functions invocations.
                    ****/
                    bool			addVSInvocation						(CFunction *vsMain, const int groupOrder, int &internalCounter);
                    /*******
                    Internal method that adds per light illumination component functions invocations.
                    ****/
                    bool			addVSIlluminationInvocation			(LightParams *curLightParams, CFunction *vsMain, const int groupOrder, int &internalCounter);
                    /*******
                    Internal method that perform normal fetch invocation.
                    ****/
                    bool			addPSNormalFetchInvocation		(CFunction *psMain, const int groupOrder, int &internalCounter);

                    /*******
                    Internal method that adds global illumination component functions invocations.
                    ****/
                    bool			addPSGlobalIlluminationInvocation	(CFunction *psMain, const int groupOrder, int &internalCounter);
                    /*******
                    Internal method that adds per light illumination component functions invocations.
                    ****/
                    bool			addPSIlluminationInvocation		(LightParams *curLightParams, CFunction *psMain, const int groupOrder, int &internalCounter);
                    /*******
                    Internal method that adds the final colour assignments.
                    ****/
                    bool			addPSFinalAssignmentInvocation	(CFunction *psMain, const int groupOrder, int &internalCounter);

                    //// Attributes.
                protected:
                    EVString					mNormalMapTextureName;							//// The normal map texture name.
                    TrackVertexColourType	mTrackVertexColourType;							//// Track per vertex colour type.
                    bool					mSpecularEnable;								//// Specular component enabled/disabled.
                    LightParamsList			mLightParamsList;								//// CLight list.
                    ev_uint16			mNormalMapSamplerIndex;							//// Normal map texture sampler index.
                    ev_uint32			mVSTexCoordSetIndex;							//// Vertex shader input texture coordinate set index.
                    EarthView::World::Graphic::FilterOptions			mNormalMapMinFilter;							//// The normal map min filter.
                    EarthView::World::Graphic::FilterOptions			mNormalMapMagFilter;							//// The normal map mag filter.
                    EarthView::World::Graphic::FilterOptions			mNormalMapMipFilter;							//// The normal map mip filter.
                    ev_uint32			mNormalMapAnisotropy;							//// The normal map max anisotropy value.
                    Real					mNormalMapMipBias;								//// The normal map mip map bias.
                    EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::NormalMapSpace			mNormalMapSpace;								//// The normal map space.
                    UniformParameterPtr		mWorldMatrix;									//// World matrix parameter.
                    UniformParameterPtr		mWorldInvRotMatrix;								//// World matrix inverse rotation matrix parameter.
                    UniformParameterPtr		mCamPosWorldSpace;								//// CCamera position in world space parameter.
                    ParameterPtr			mVSInPosition;									//// Vertex shader input position parameter.
                    ParameterPtr			mVSWorldPosition;								//// Vertex shader world position parameter.
                    ParameterPtr			mVSOutView;										//// Vertex shader output view vector (position in camera space) parameter.
                    ParameterPtr			mPSInView;										//// Pixel shader input view position (position in camera space) parameter.
                    ParameterPtr			mVSInNormal;									//// Vertex shader input normal.
                    ParameterPtr			mVSInTangent;									//// Vertex shader input tangent.
                    ParameterPtr			mVSTBNMatrix;									//// Vertex shader local TNB matrix.
                    ParameterPtr			mVSLocalDir;									//// Vertex shader local light direction.
                    UniformParameterPtr		mNormalMapSampler;								//// Normal map texture sampler parameter.
                    ParameterPtr			mPSNormal;										//// Pixel shader normal parameter.
                    ParameterPtr			mVSInTexcoord;									//// Vertex shader input texture coordinates.
                    ParameterPtr			mVSOutTexcoord;									//// Vertex shader output texture coordinates.
                    ParameterPtr			mPSInTexcoord;									//// Pixel shader input texture coordinates.
                    ParameterPtr			mPSTempDiffuseColour;							//// Pixel shader temporary diffuse calculation parameter.
                    ParameterPtr			mPSTempSpecularColour;							//// Pixel shader temporary specular calculation parameter.
                    ParameterPtr			mPSDiffuse;										//// Pixel shader input/local diffuse parameter.
                    ParameterPtr			mPSSpecular;									//// Pixel shader input/local specular parameter.
                    ParameterPtr			mPSOutDiffuse;									//// Pixel shader output diffuse parameter.
                    ParameterPtr			mPSOutSpecular;									//// Pixel shader output specular parameter.
                    UniformParameterPtr		mDerivedSceneColour;							//// Derived scene colour parameter.
                    UniformParameterPtr		mLightAmbientColour;							//// Ambient light colour parameter.
                    UniformParameterPtr		mDerivedAmbientLightColour;						//// Derived ambient light colour parameter.
                    UniformParameterPtr		mSurfaceAmbientColour;							//// Surface ambient colour parameter.
                    UniformParameterPtr		mSurfaceDiffuseColour;							//// Surface diffuse colour parameter.
                    UniformParameterPtr		mSurfaceSpecularColour;							//// Surface specular colour parameter.
                    UniformParameterPtr		mSurfaceEmissiveColour;							//// Surface emissive colour parameter.
                    UniformParameterPtr		mSurfaceShininess;								//// Surface shininess parameter.
                    static CLight			msBlankLight;									//// Shared blank light.
                };

                /*******
                A factory that enables creation of NormalMapLighting instances.
                @remarks Sub class of SubRenderStateFactory
                ****/
                class EV_RTSS_DLL CNormalMapLightingFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CNormalMapLightingFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CNormalMapLightingFactory() {};
                    /*******
                    @see SubRenderStateFactory::getType.
                    ****/
                    virtual EVString	getType				() const;
                    /*******
                    @see SubRenderStateFactory::createInstance.
                    ****/
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /*******
                    @see SubRenderStateFactory::writeInstance.
                    ****/
                    virtual void			writeInstance		(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);

                ev_internal:
                    /*******
                    @see SubRenderStateFactory::createInstanceImpl.
                    ****/
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl	();
                };
            }
        }
    }
}

#endif
#endif

