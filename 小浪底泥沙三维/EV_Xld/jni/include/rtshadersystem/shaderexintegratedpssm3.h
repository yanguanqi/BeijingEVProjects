#ifndef _ShaderExIntegratedPSSM3_
#define _ShaderExIntegratedPSSM3_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include <mathengine/vector4.h>
#include <light.h>
#include <common.h>
#include "shadersubrenderstate.h"
#include "shaderparameter.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

#define SGX_LIB_INTEGRATEDPSSM						"SGXLib_IntegratedPSSM"
#define SGX_FUNC_COMPUTE_SHADOW_COLOUR3				"SGX_ComputeShadowFactor_PSSM3"
#define SGX_FUNC_APPLYSHADOWFACTOR_DIFFUSE			"SGX_ApplyShadowFactor_Diffuse"
#define SGX_FUNC_MODULATE_SCALAR					"SGX_ModulateScalar"
                /** Integrated PSSM shadow receiver with 3 splits sub render state implementation.
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CIntegratedPSSM3 : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CIntegratedPSSM3(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /*typedef vector<Real> SplitPointList;*/
                    class EV_RTSS_DLL Integratedppssm3SplitPointList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef vector<Real> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, Real const &t)
                        {
                            return mList.insert(pos, t);
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        Integratedppssm3SplitPointList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        Integratedppssm3SplitPointList() {}
                        void push_back(Real t)
                        {
                            mList.push_back(t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        Real &front()
                        {
                            return mList.front();
                        }
                        Real &back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, Real const &t)
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
                        Real &operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        Real const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        Real &at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        Real const &at(ev_size_t n) const
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
                    /** Class default constructor */
                    CIntegratedPSSM3();
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType					() const;
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual int				getExecutionOrder		() const;
                    /**
                    @see SubRenderState::updateGpuProgramsParams.
                    */
                    virtual void			updateGpuProgramsParams	(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList);
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);

                    /**
                    @see SubRenderState::preAddToRenderState.
                    */
                    virtual bool			preAddToRenderState		(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);


                    /** Manually configure a new splitting scheme.
                    @param newSplitPoints A list which is splitCount + 1 entries long, containing the
                    split points. The first value is the near point, the last value is the
                    far point, and each value in between is both a far point of the previous
                    split, and a near point for the next one.
                    */
                    void			setSplitPoints					(const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList &newSplitPoints);
                    static EVString Type;
                    /// Protected types:
                ev_private:
                    /// Shadow texture parameters.
                    struct EV_RTSS_DLL ShadowTextureParams
                    {
                        Real				mMaxRange;								/// The max range of this shadow texture in terms of PSSM (far plane of viewing camera).
                        ev_uint32		mTextureSamplerIndex;					/// The shadow map sampler index.
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mTextureSampler;						/// The shadow map sampler.
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mInvTextureSize;						/// The inverse texture
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mWorldViewProjMatrix;					/// The source light view projection matrix combined with world matrix.
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mVSOutLightPosition;					/// The vertex shader output position in light space.
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mPSInLightPosition;						/// The pixel shader input position in light space.
                    };
                    ///typedef vector<ShadowTextureParams>			ShadowTextureParamsList;
                    class EV_RTSS_DLL ShadowTextureParamsList : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef vector<ShadowTextureParams> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, ShadowTextureParams const &t)
                        {
                            return mList.insert(pos, t);
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        ShadowTextureParamsList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                    public:
                        ShadowTextureParamsList() {};
                        void push_back(ShadowTextureParams t)
                        {
                            mList.push_back(t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        ShadowTextureParams &front()
                        {
                            return mList.front();
                        }
                        ShadowTextureParams &back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, ShadowTextureParams const &t)
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
                        ShadowTextureParams &operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        ShadowTextureParams const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        ShadowTextureParams &at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        ShadowTextureParams const &at(ev_size_t n) const
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
                    typedef ShadowTextureParamsList::iterator			ShadowTextureParamsIterator;
                    typedef ShadowTextureParamsList::const_iterator		ShadowTextureParamsConstIterator;
                    /// Protected methods
                ev_internal:
                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool			resolveParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::addFunctionInvocations.
                    */
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                protected:
                    /**
                    Internal method that adds related vertex shader functions invocations.
                    */
                    bool			addVSInvocation						(CFunction *vsMain, const int groupOrder, int &internalCounter);
                    /**
                    Internal method that adds related pixel shader functions invocations.
                    */
                    bool			addPSInvocation						(CProgram *psProgram, const int groupOrder, int &internalCounter);
                    /// Attributes.
                protected:
                    ShadowTextureParamsList		mShadowTextureParamsList;						/// Shadow texture parameter list.
                    UniformParameterPtr			mPSSplitPoints;									/// Split points parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mVSInPos;										/// Vertex shader input position parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mVSOutPos;										/// Vertex shader output position (clip space) parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mVSOutDepth;									/// Vertex shader output depth (clip space) parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mPSInDepth;										/// Pixel shader input depth (clip space) parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mPSLocalShadowFactor;							/// Pixel shader local computed shadow colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mPSDiffuse;										/// Pixel shader in/local diffuse colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mPSOutDiffuse;									/// Pixel shader output diffuse colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				mPSSpecualr;									/// Pixel shader in/local specular colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr			mPSDerivedSceneColour;							/// Derived scene colour (ambient term).
                };
                /**
                A factory that enables creation of IntegratedPSSM3 instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CIntegratedPSSM3Factory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CIntegratedPSSM3Factory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CIntegratedPSSM3Factory() {}
                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString getType				() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);

                protected:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl	();
                };
            }
        }
    }
}

#endif
#endif

