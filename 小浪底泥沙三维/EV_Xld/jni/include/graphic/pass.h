#ifndef __Pass_H__
#define __Pass_H__
#include "graphic/graphic_config.h"
#include "colourvalue.h"
#include "light.h"
#include "textureunitstate.h"
#include "userobjectbindings.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CGpuProgramUsage;
            class CGpuProgramPtr;

            ///// Categorisation of passes for the purpose of additive lighting
            enum IlluminationStage
            {
                ///// Part of the rendering which occurs without any kind of direct lighting
                IS_AMBIENT,
                ///// Part of the rendering which occurs per light
                IS_PER_LIGHT,
                ///// Post-lighting rendering
                IS_DECAL,
                ///// Not determined
                IS_UNKNOWN
            };

			enum RecompileMethod
			{
				CT_Recompile,
				CT_NoRecompile
			};
            /***** Class defining a single pass of a EarthView::World::Graphic::CTechnique (of a CMaterial), i.e.
                a single rendering call.
            @remarks
                Rendering can be repeated with many passes for more complex effects.
                Each pass is either a fixed-function pass (meaning it does not use
                a vertex or fragment program) or a programmable pass (meaning it does
                use either a vertex and fragment program, or both).
            @par
                Programmable passes are complex to define, because they require custom
                programs and you have to set all constant inputs to the programs (like
                the position of lights, any base material colours you wish to use etc), but
                they do give you much total flexibility over the algorithms used to render your
                pass, and you can create some effects which are impossible with a fixed-function pass.
                On the other hand, you can define a fixed-function pass in very little time, and
                you can use a range of fixed-function effects like environment mapping very
                easily, plus your pass will be more likely to be compatible with older hardware.
                There are pros and cons to both, just remember that if you use a programmable
                pass to create some great effects, allow more time for definition and testing.
            ****/
            class EV_GRAPHIC_DLL CPass : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /***** Definition of a functor for calculating the hashcode of a EarthView::World::Graphic::CPass.
                @remarks
                	The hashcode of a EarthView::World::Graphic::CPass is used to sort Passes for rendering, in order
                	to reduce the number of render state changes. Each EarthView::World::Graphic::CPass represents a
                	single unique set of states, but by ordering them, state changes can
                	be minimised between passes. An implementation of this functor should
                	order passes so that the elements that you want to keep constant are
                	sorted next to each other.
                @see CPass::setHashFunc
                ****/
                class EV_GRAPHIC_DLL HashFunc : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    HashFunc(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    HashFunc() {}
                public:
                    virtual ev_uint32 operator()(const EarthView::World::Graphic::CPass *p) const;
                    
                    ///// Need virtual destructor in case subclasses use it
                    virtual ~HashFunc() {}
                };
                ///// Storage of texture unit states
                ////typedef vector<EarthView::World::Graphic::CTextureUnitState*> EarthView::World::Graphic::CPass::TextureUnitStates;
                class EV_GRAPHIC_DLL TextureUnitStates : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureUnitStates(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CTextureUnitState *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CTextureUnitState *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                public:
                    TextureUnitStates() {}
                    void push_back(EarthView::World::Graphic::CTextureUnitState *const &ref_t)
                    {
                        mList.push_back(ref_t);
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
                    EarthView::World::Graphic::CTextureUnitState*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTextureUnitState *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTextureUnitState*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTextureUnitState *const &at(ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
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
                EarthView::World::Graphic::CTechnique *mParent;
                ev_uint16 mIndex; 			//// pass index
                EVString mName; 			//// optional name for the pass
                ev_uint32 mHash; 			//// pass hash
                ev_bool mHashDirtyQueued; 			//// needs to be dirtied when next loaded
                ////-------------------------------------------------------------------------
                //// Colour properties, only applicable in fixed-function passes
                EarthView::World::Graphic::CColourValue mAmbient;
                EarthView::World::Graphic::CColourValue mDiffuse;
                EarthView::World::Graphic::CColourValue mSpecular;

				EarthView::World::Graphic::CColourValue mDefaultAmbient;
				EarthView::World::Graphic::CColourValue mDefaultDiffuse;
				EarthView::World::Graphic::CColourValue mDefaultSpecular;

                EarthView::World::Graphic::CColourValue mEmissive;
                Real mShininess;
                TrackVertexColourType mTracking;
                ////-------------------------------------------------------------------------
                ////-------------------------------------------------------------------------
                //// Blending factors
                EarthView::World::Graphic::SceneBlendFactor mSourceBlendFactor;
                EarthView::World::Graphic::SceneBlendFactor mDestBlendFactor;
                EarthView::World::Graphic::SceneBlendFactor mSourceBlendFactorAlpha;
                EarthView::World::Graphic::SceneBlendFactor mDestBlendFactorAlpha;
                //// Used to determine if separate alpha blending should be used for color and alpha channels
                ev_bool mSeparateBlend;
                ////-------------------------------------------------------------------------
                //// Blending operations
                EarthView::World::Graphic::SceneBlendOperation mBlendOperation;
                EarthView::World::Graphic::SceneBlendOperation mAlphaBlendOperation;
                //// Determines if we should use separate blending operations for color and alpha channels
                ev_bool mSeparateBlendOperation;
                ////-------------------------------------------------------------------------
                ////-------------------------------------------------------------------------
                //// Depth buffer settings
                ev_bool mDepthCheck;
                ev_bool mDepthWrite;
                EarthView::World::Graphic::CompareFunction mDepthFunc;
                ev_real32 mDepthBiasConstant;
                ev_real32 mDepthBiasSlopeScale;
                ev_real32 mDepthBiasPerIteration;
                //// Colour buffer settings
                ev_bool mColourWrite;
                //// Alpha reject settings
                EarthView::World::Graphic::CompareFunction mAlphaRejectFunc;
                ev_uchar mAlphaRejectVal;
                ev_bool mAlphaToCoverageEnabled;
                //// Transparent depth sorting
                ev_bool mTransparentSorting;
                //// Transparent depth sorting forced
                ev_bool mTransparentSortingForced;
                ////-------------------------------------------------------------------------
                ////-------------------------------------------------------------------------
                //// Culling mode
                EarthView::World::Graphic::CullingMode mCullMode;
                EarthView::World::Graphic::ManualCullingMode mManualCullMode;
                ////-------------------------------------------------------------------------
                ///// Lighting enabled?
                ev_bool mLightingEnabled;
                ///// Max simultaneous lights
                ev_uint16 mMaxSimultaneousLights;
                ///// Starting light index
                ev_uint16 mStartLight;
                ///// Run this pass once per light?
                ev_bool mIteratePerLight;
                ///// Iterate per how many lights?
                ev_uint16 mLightsPerIteration;
                //// Should it only be run for a certain light type?
                ev_bool mRunOnlyForOneLightType;
                EarthView::World::Graphic::CLight::LightTypes mOnlyLightType;
                ev_uint32 mLightMask;
                ///// Shading options
                EarthView::World::Graphic::ShadeOptions mShadeOptions;
                ///// CPolygon mode
                EarthView::World::Graphic::PolygonMode mPolygonMode;
                ///// Normalisation
                ev_bool mNormaliseNormals;
                ev_bool mPolygonModeOverrideable;
                ////-------------------------------------------------------------------------
                //// Fog
                ev_bool mFogOverride;
                EarthView::World::Graphic::FogMode mFogMode;
                EarthView::World::Graphic::CColourValue mFogColour;
                Real mFogStart;
                Real mFogEnd;
                Real mFogDensity;
                ////-------------------------------------------------------------------------

                EarthView::World::Graphic::CPass::TextureUnitStates mTextureUnitStates;
                //// Vertex program details
                CGpuProgramUsage *mVertexProgramUsage;
                //// Vertex program details
                CGpuProgramUsage *mShadowCasterVertexProgramUsage;
                //// Vertex program details
                //// Fragment program details
                CGpuProgramUsage *mShadowCasterFragmentProgramUsage;
                CGpuProgramUsage *mShadowReceiverVertexProgramUsage;
                //// Fragment program details
                CGpuProgramUsage *mFragmentProgramUsage;
                //// Fragment program details
                CGpuProgramUsage *mShadowReceiverFragmentProgramUsage;
                //// Geometry program details
                CGpuProgramUsage *mGeometryProgramUsage;
                //// Is this pass queued for deletion?
                ev_bool mQueuedForDeletion;
                //// number of pass iterations to perform
                ev_size_t mPassIterationCount;
                Real mPointSize;
                Real mPointMinSize;
                Real mPointMaxSize;
                ev_bool mPointSpritesEnabled;
                ev_bool mPointAttenuationEnabled;
                //// constant, linear, quadratic coeffs
                Real mPointAttenuationCoeffs[3];
                //// TU Content type lookups
                typedef vector<ev_uint16> ContentTypeLookup;
                mutable ContentTypeLookup mShadowContentTypeLookup;
                mutable ev_bool mContentTypeLookupBuilt;
                ///// Scissoring for the light?
                ev_bool mLightScissoring;
                ///// User clip planes for light?
                ev_bool mLightClipPlanes;
                ///// Illumination stage?
                EarthView::World::Graphic::IlluminationStage mIlluminationStage;
                //// User objects binding.
                EarthView::World::Graphic::CUserObjectBindings	mUserObjectBindings;


                //// Used to get scene blending flags from a blending type
                void _getBlendFlags(EarthView::World::Graphic::SceneBlendType type, EarthView::World::Graphic::SceneBlendFactor &source, EarthView::World::Graphic::SceneBlendFactor &dest);
            public:
                /****typedef set<EarthView::World::Graphic::CPass*> EarthView::World::Graphic::CPass::PassSet;****/
                class EV_GRAPHIC_DLL PassSet : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef set<EarthView::World::Graphic::CPass *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CPass*& ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    PassSet(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    PassSet() {}
                    void insert(EarthView::World::Graphic::CPass *const &ref_val)
                    {
                        mList.insert(ref_val);
                    }
                    ev_size_t size()
                    {
                        return mList.size();
                    }
                    ev_size_t erase(_in  EarthView::World::Graphic::CPass *const &key)
                    {
                        return mList.erase(key);
                    }
                    ev_bool empty()
                    {
                        return mList.empty();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_size_t count(_in  EarthView::World::Graphic::CPass *const &key)
                    {
                        return mList.count(key);
                    }
                    ev_size_t max_size()
                    {
                        return mList.max_size();
                    }
                    void swap(_inout EarthView::World::Graphic::CPass::PassSet &other)
                    {
                        mList.swap(other.mList);
                    }
                };
            protected:
                ///// List of Passes whose hashes need recalculating
                static EarthView::World::Graphic::CPass::PassSet msDirtyHashList;
                ///// The place where passes go to die
                static EarthView::World::Graphic::CPass::PassSet msPassGraveyard;
                ///// The EarthView::World::Graphic::CPass hash functor
                static EarthView::World::Graphic::CPass::HashFunc *msHashFunc;

            ev_private:
                CPass(_in EarthView::World::Core::CNameValuePairList *pList);
                EV_STATIC_MUTEX(msDirtyHashListMutex)
                EV_STATIC_MUTEX(msPassGraveyardMutex)
                EV_MUTEX(mTexUnitChangeMutex)
                EV_MUTEX(mGpuProgramChangeMutex)
            public:

                ///// Default constructor
                CPass() {}

                CPass(EarthView::World::Graphic::CTechnique *ref_parent, ev_uint16 index);
                ///// Copy constructor
                CPass(EarthView::World::Graphic::CTechnique *ref_parent, ev_uint16 index, const CPass &oth );
                ///// Operator = overload
                EarthView::World::Graphic::CPass &operator=(const EarthView::World::Graphic::CPass &oth);
                virtual ~CPass();
                
				/// <summary>
				/// 是否已编程
				/// </summary>				
				/// <returns></returns>
                ev_bool isProgrammable() const
                {
                    return mVertexProgramUsage || mFragmentProgramUsage || mGeometryProgramUsage;
                }
                
				/// <summary>
				/// 是否有顶点程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasVertexProgram() const
                {
                    return mVertexProgramUsage != NULL;
                }
				/// <summary>
				/// 是否有片段程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasFragmentProgram() const
                {
                    return mFragmentProgramUsage != NULL;
                }
				/// <summary>
				/// 是否有几何程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasGeometryProgram() const
                {
                    return mGeometryProgramUsage != NULL;
                }
				/// <summary>
				/// 是否有投射阴影的顶点程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasShadowCasterVertexProgram() const
                {
                    return mShadowCasterVertexProgramUsage != NULL;
                }

				/// <summary>
				/// 是否有投射阴影的片段程序
				/// </summary>				
				/// <returns></returns>
                bool hasShadowCasterFragmentProgram() const
                {
                    return mShadowCasterFragmentProgramUsage != NULL;
                }

				/// <summary>
				/// 是否有接收阴影的顶点程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasShadowReceiverVertexProgram() const
                {
                    return mShadowReceiverVertexProgramUsage != NULL;
                }
				/// <summary>
				/// 是否有接收阴影的片段程序
				/// </summary>				
				/// <returns></returns>
                ev_bool hasShadowReceiverFragmentProgram() const
                {
                    return mShadowReceiverFragmentProgramUsage != NULL;
                }

				/// <summary>
				/// 获得通路在技术中的序号
				/// </summary>				
				/// <returns></returns>
                ev_uint16 getIndex() const
                {
                    return mIndex;
                }
				
				/// <summary>
				/// 设置名称
				/// </summary>				
				/// <returns></returns>
                void setName(const EVString &name);
				/// <summary>
				/// 获得名称
				/// </summary>				
				/// <returns></returns>
                const EVString &getName() const
                {
                    return mName;
                }

				/// <summary>
				/// 设置环境光反射率
				/// </summary>				
				/// <returns></returns>
                void setAmbient(Real red, Real green, Real blue);                
                void setAmbient(const EarthView::World::Graphic::CColourValue &ambient);
                
				/// <summary>
				/// 设置漫射光反射率
				/// </summary>				
				/// <returns></returns>
                void setDiffuse(Real red, Real green, Real blue, Real alpha);                
                void setDiffuse(const EarthView::World::Graphic::CColourValue &diffuse);
                
				/// <summary>
				/// 设置镜面光反射率
				/// </summary>				
				/// <returns></returns>
                void setSpecular(Real red, Real green, Real blue, Real alpha);               
                void setSpecular(const EarthView::World::Graphic::CColourValue &specular);
                
				/// <summary>
				/// 设置镜面高光亮度
				/// </summary>				
				/// <returns></returns>
                void setShininess(Real val);
                
				/// <summary>
				/// 设置自发光的颜色
				/// </summary>				
				/// <returns></returns>
                void setSelfIllumination(Real red, Real green, Real blue);
				void setSelfIllumination(const EarthView::World::Graphic::CColourValue &selfIllum);
				/// <summary>
				/// 设置自发光的颜色
				/// </summary>				
				/// <returns></returns>
                void setEmissive(Real red, Real green, Real blue)
                {
                    setSelfIllumination(red, green, blue);
                }
				void setEmissive(const EarthView::World::Graphic::CColourValue &emissive)
				{
					setSelfIllumination(emissive);
				}               

				/// <summary>
				/// 设置顶点颜色跟踪类型
				/// </summary>				
				/// <returns></returns>
                void setVertexColourTracking(TrackVertexColourType tracking);
               
				/// <summary>
				/// 获得点大小
				/// </summary>				
				/// <returns></returns>
                Real getPointSize() const;

				/// <summary>
				/// 设置点大小
				/// </summary>				
				/// <returns></returns>
                void setPointSize(Real ps);

				/// <summary>
				/// 设置是否启用点精灵
				/// </summary>				
				/// <returns></returns>
                void setPointSpritesEnabled(ev_bool enabled);
				/// <summary>
				/// 获取是否启用点精灵
				/// </summary>				
				/// <returns></returns>
                ev_bool getPointSpritesEnabled() const;
                
				/// <summary>
				/// 设置点精灵参数
				/// </summary>				
				/// <returns></returns>
                void setPointAttenuation(ev_bool enabled, Real constant, Real linear , Real quadratic );
                void setPointAttenuation(ev_bool enabled, Real constant, Real linear );
                void setPointAttenuation(ev_bool enabled, Real constant );
                void setPointAttenuation(ev_bool enabled);
				/// <summary>
				/// 设置点精灵参数是否启用
				/// </summary>				
				/// <returns></returns>
                ev_bool isPointAttenuationEnabled() const;
                /***** Returns the constant coefficient of point attenuation. ****/
                Real getPointAttenuationConstant() const;
                /***** Returns the linear coefficient of point attenuation. ****/
                Real getPointAttenuationLinear() const;
                /***** Returns the quadratic coefficient of point attenuation. ****/
                Real getPointAttenuationQuadratic() const;
                /***** Set the minimum point size, when point attenuation is in use. ****/
                void setPointMinSize(Real min);
                /***** Get the minimum point size, when point attenuation is in use. ****/
                Real getPointMinSize() const;
                /***** Set the maximum point size, when point attenuation is in use.
                @remarks Setting this to 0 indicates the max size supported by the card.
                ****/
                void setPointMaxSize(Real max);
                /***** Get the maximum point size, when point attenuation is in use.
                @remarks 0 indicates the max size supported by the card.
                ****/
                Real getPointMaxSize() const;
                
				/// <summary>
				/// 获得环境光反射率
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getAmbient() const;
				/// <summary>
				/// 获得漫射光反射率
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getDiffuse() const;
				/// <summary>
				/// 获得镜面光反射率
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getSpecular() const;
				/// <summary>
				/// 获得自发光颜色
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getSelfIllumination() const;

				/// <summary>
				/// 获得自发光颜色
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getEmissive() const
                {
                    return getSelfIllumination();
                }
				/// <summary>
				/// 获得镜面高光亮度
				/// </summary>				
				/// <returns></returns>
                Real getShininess() const;
				/// <summary>
				/// 获得顶点颜色跟踪类型
				/// </summary>				
				/// <returns></returns>
                TrackVertexColourType getVertexColourTracking() const;

				/// <summary>
				/// 创建纹理单元
				/// </summary>		
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				EarthView::World::Graphic::CTextureUnitState *createTextureUnitState(RecompileMethod recompile);
                EarthView::World::Graphic::CTextureUnitState *createTextureUnitState()
				{
					return createTextureUnitState(CT_Recompile);
				}					

				/// <summary>
				/// 在指定索引处创建纹理单元
				/// </summary>			
				/// <param name="toWhere">索引</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				EarthView::World::Graphic::CTextureUnitState *createTextureUnitState(ev_uint32 toWhere,RecompileMethod recompile);
				EarthView::World::Graphic::CTextureUnitState *createTextureUnitState(ev_uint32 toWhere)
				{
					return createTextureUnitState(toWhere,CT_Recompile);
				}

				/// <summary>
				/// 创建纹理单元
				/// </summary>	
				/// <param name="textureName">纹理名称</param>
				/// <param name="texCoordSet">纹理坐标索引</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				EarthView::World::Graphic::CTextureUnitState *createTextureUnitState( const EVString &textureName, ev_uint16 texCoordSet,RecompileMethod recompile);
                EarthView::World::Graphic::CTextureUnitState *createTextureUnitState( const EVString &textureName, ev_uint16 texCoordSet)
				{
					return createTextureUnitState(textureName,texCoordSet,CT_Recompile);
				}
				EarthView::World::Graphic::CTextureUnitState *createTextureUnitState( const EVString &textureName)
				{
					return createTextureUnitState(textureName,0,CT_Recompile);
				}               

				/// <summary>
				/// 添加纹理单元
				/// </summary>	
				/// <param name="state">纹理单元</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				void addTextureUnitState(EarthView::World::Graphic::CTextureUnitState *state,RecompileMethod recompile);
				void addTextureUnitState(EarthView::World::Graphic::CTextureUnitState *state)
				{
					addTextureUnitState(state,CT_Recompile);
				}								

				/// <summary>
				/// 插入纹理单元
				/// </summary>			
				/// <param name="state">纹理单元</param>
				/// <param name="toWhere">索引</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				void insertTextureUnitState(EarthView::World::Graphic::CTextureUnitState *state,ev_uint32 toWhere,RecompileMethod recompile);
				void insertTextureUnitState(EarthView::World::Graphic::CTextureUnitState *state,ev_uint32 toWhere)
				{
					insertTextureUnitState(state,toWhere,CT_Recompile);
				}

				/// <summary>
				/// 获取纹理单元
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CTextureUnitState *getTextureUnitState(ev_uint16 index);
                EarthView::World::Graphic::CTextureUnitState *getTextureUnitState(const EVString &name);
                const EarthView::World::Graphic::CTextureUnitState *getTextureUnitState(ev_uint16 index) const;
                const EarthView::World::Graphic::CTextureUnitState *getTextureUnitState(const EVString &name) const;

				/// <summary>
				/// 获取纹理单元的序号
				/// </summary>				
				/// <returns></returns>
                ev_uint16 getTextureUnitStateIndex(const EarthView::World::Graphic::CTextureUnitState *state) const;

                ////typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CPass::TextureUnitStates> EarthView::World::Graphic::CPass::TextureUnitStateIterator;
                class EV_GRAPHIC_DLL TextureUnitStateIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureUnitStateIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("vec"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CPass::TextureUnitStates *)pList->GetAt("vec"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CPass::TextureUnitStateIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CPass::TextureUnitStates> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef TextureUnitStates::iterator IteratorType;

                    TextureUnitStateIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CPass::TextureUnitStateIterator &operator=(_in const EarthView::World::Graphic::CPass::TextureUnitStateIterator &other)
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
                    ValueType peekNext () const
                    {
                        return mIterator->peekNext();
                    }
                    PointerType peekNextPtr ()  const
                    {
                        return mIterator->peekNextPtr();
                    }
                    ValueType getNext ()
                    {
                        return mIterator->getNext();
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                public:
                    TextureUnitStateIterator(EarthView::World::Graphic::CPass::TextureUnitStates &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }

                    TextureUnitStateIterator(const TextureUnitStateIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~TextureUnitStateIterator()
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
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    EarthView::World::Graphic::CTextureUnitState *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CTextureUnitState *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CTextureUnitState *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CTextureUnitState *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };
                class EV_GRAPHIC_DLL ConstTextureUnitStateIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ConstTextureUnitStateIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("vec"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CPass::TextureUnitStates *)pList->GetAt("vec"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CPass::TextureUnitStates> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef TextureUnitStates::const_iterator IteratorType;

                    ConstTextureUnitStateIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator &operator=(_in const EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator &other)
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
                    ValueType peekNext () const
                    {
                        return mIterator->peekNext();
                    }
                    ValueType getNext ()
                    {
                        return mIterator->getNext();
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                public:
                    ConstTextureUnitStateIterator(EarthView::World::Graphic::CPass::TextureUnitStates &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }

                    ConstTextureUnitStateIterator(const ConstTextureUnitStateIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~ConstTextureUnitStateIterator()
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
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    const EarthView::World::Graphic::CTextureUnitState  *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    const EarthView::World::Graphic::CTextureUnitState  *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::CTextureUnitState  *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    const EarthView::World::Graphic::CTextureUnitState  *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };
                
				/// <summary>
				/// 获取纹理单元的迭代器
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CPass::TextureUnitStateIterator getTextureUnitStateIterator();                
                EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator getTextureUnitStateIterator() const;
               
				/// <summary>
				/// 移除纹理单元
				/// </summary>				
				/// <returns></returns>
                void removeTextureUnitState(ev_uint16 index);
				void removeTextureUnitState(ev_uint16 index, RecompileMethod recompile);
                
				/// <summary>
				/// 移除所有纹理单元
				/// </summary>				
				/// <returns></returns>
                void removeAllTextureUnitStates();
                
				/// <summary>
				/// 获得纹理单元的数量
				/// </summary>				
				/// <returns></returns>
                ev_uint16 getNumTextureUnitStates() const
                {
                    return static_cast<ev_uint16>(mTextureUnitStates.size());
                }
                
				/// <summary>
				/// 设置场景混合方式
				/// </summary>				
				/// <returns></returns>
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt );
                
				/// <summary>
				/// 为RGB通道和Alpha通道分别设置场景混合方式
				/// </summary>				
				/// <returns></returns>
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt, const EarthView::World::Graphic::SceneBlendType sbta );
                
				/// <summary>
				/// 设置场景混合方式
				/// </summary>				
				/// <returns></returns>
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor);
                
				/// <summary>
				/// 为RGB通道和Alpha通道分别设置场景混合方式
				/// </summary>				
				/// <returns></returns>
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor, const EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, const EarthView::World::Graphic::SceneBlendFactor destFactorAlpha );
               
				/// <summary>
				/// 询问RGB通道和Alpha通道是否使用不同的场景混合方式
				/// </summary>				
				/// <returns></returns>
                ev_bool hasSeparateSceneBlending() const;
                
				/// <summary>
				/// 获得RGB通道的源混合因子
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getSourceBlendFactor() const;
				/// <summary>
				/// 获得RGB通道的目标混合因子
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getDestBlendFactor() const;
				/// <summary>
				/// 获得Aplha通道的源混合因子
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getSourceBlendFactorAlpha() const;
				/// <summary>
				/// 获得Aplha通道的目标混合因子
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getDestBlendFactorAlpha() const;
               
				/// <summary>
				/// 设置场景混合操作
				/// </summary>				
				/// <returns></returns>
                void setSceneBlendingOperation(EarthView::World::Graphic::SceneBlendOperation op);

				/// <summary>
				/// 为RGB通道和Alpha通道分别设置场景混合操作
				/// </summary>				
				/// <returns></returns>
                void setSeparateSceneBlendingOperation(EarthView::World::Graphic::SceneBlendOperation op, EarthView::World::Graphic::SceneBlendOperation alphaOp);

				/// <summary>
				/// 询问RGB通道和Alpha通道是否使用不同的场景混合操作
				/// </summary>				
				/// <returns></returns>
                ev_bool hasSeparateSceneBlendingOperations() const;

				/// <summary>
				/// 获得RGB通道的混合操作
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendOperation getSceneBlendingOperation() const;

				/// <summary>
				/// 获得Alpha通道的混合操作
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::SceneBlendOperation getSceneBlendingOperationAlpha() const;

				/// <summary>
				/// 是否为透明通路
				/// </summary>				
				/// <returns></returns>
                ev_bool isTransparent() const;
                
				/// <summary>
				/// 设置深度测试是否启用
				/// </summary>				
				/// <returns></returns>
                void setDepthCheckEnabled(ev_bool enabled);                
				/// <summary>
				/// 获取深度测试是否启用
				/// </summary>				
				/// <returns></returns>
                ev_bool getDepthCheckEnabled() const;
                
				/// <summary>
				/// 设置深度写入是否启用
				/// </summary>				
				/// <returns></returns>
                void setDepthWriteEnabled(ev_bool enabled);                
				/// <summary>
				/// 获取深度写入是否启用
				/// </summary>				
				/// <returns></returns>
                ev_bool getDepthWriteEnabled() const;
                
				/// <summary>
				/// 设置深度比较函数
				/// </summary>				
				/// <returns></returns>
                void setDepthFunction( EarthView::World::Graphic::CompareFunction func );
				/// <summary>
				/// 获得深度比较函数
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CompareFunction getDepthFunction() const;
                
				/// <summary>
				/// 设置颜色写入是否启用
				/// </summary>				
				/// <returns></returns>
                void setColourWriteEnabled(ev_bool enabled);
				/// <summary>
				/// 获取颜色写入是否启用
				/// </summary>				
				/// <returns></returns>
                ev_bool getColourWriteEnabled() const;

				/// <summary>
				/// 设置剔除方式
				/// </summary>				
				/// <returns></returns>
                void setCullingMode( CullingMode mode );
				/// <summary>
				/// 获取剔除方式
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CullingMode getCullingMode() const;
                
				/// <summary>
				/// 设置手动剔除方式(GPU)
				/// </summary>				
				/// <returns></returns>
                void setManualCullingMode( ManualCullingMode mode );
				/// <summary>
				/// 获取手动剔除方式(GPU)
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::ManualCullingMode getManualCullingMode() const;
                
				/// <summary>
				/// 设置是否启用光照
				/// </summary>				
				/// <returns></returns>
                void setLightingEnabled(ev_bool enabled);
				/// <summary>
				/// 获取是否启用光照
				/// </summary>				
				/// <returns></returns>
                ev_bool getLightingEnabled() const;

                /***** Sets the maximum number of lights to be used by this pass.
                @remarks
                    During rendering, if lighting is enabled (or if the pass uses an automatic
                    program parameter based on a light) the engine will request the nearest lights
                    to the object being rendered in order to work out which ones to use. This
                    parameter sets the limit on the number of lights which should apply to objects
                    rendered with this pass.
                ****/
                void setMaxSimultaneousLights(ev_uint16 maxLights);
                /***** Gets the maximum number of lights to be used by this pass. ****/
                ev_uint16 getMaxSimultaneousLights() const;
                
				/// <summary>
				/// 设置光照开始的序号
				/// </summary>				
				/// <returns></returns>
                void setStartLight(ev_uint16 startLight);
				/// <summary>
				/// 获取光照开始的序号
				/// </summary>				
				/// <returns></returns>
                ev_uint16 getStartLight() const;

                /***** Sets the light mask which can be matched to specific light flags to be handled by this pass ****/
                void setLightMask(ev_uint32 mask);
                /***** Gets the light mask controlling which lights are used for this pass ****/
                ev_uint32 getLightMask() const;

				/// <summary>
				/// 设置光照模型
				/// </summary>				
				/// <returns></returns>
                void setShadingMode( EarthView::World::Graphic::ShadeOptions mode );
				/// <summary>
				/// 获取光照模型
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::ShadeOptions getShadingMode() const;
                
				/// <summary>
				/// 设置三角面渲染方式
				/// </summary>				
				/// <returns></returns>
                void setPolygonMode( PolygonMode mode );
				/// <summary>
				/// 获取三角面渲染方式
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::PolygonMode getPolygonMode() const;
                
				/***** Sets whether this pass's chosen detail level can be
                	overridden (downgraded) by the camera setting.
                @param override true means that a lower camera detail will override this
                	pass's detail level, false means it won't (default true).
                ****/
                virtual void setPolygonModeOverrideable(ev_bool val)
                {
                    mPolygonModeOverrideable = val;
                }
                /***** Gets whether this renderable's chosen detail level can be
                	overridden (downgraded) by the camera setting.
                ****/
                virtual ev_bool getPolygonModeOverrideable() const
                {
                    return mPolygonModeOverrideable;
                }

                /***** Sets the fogging mode applied to this pass.
                @remarks
                Fogging is an effect that is applied as polys are rendered. Sometimes, you want
                fog to be applied to an entire scene. Other times, you want it to be applied to a few
                polygons only. This pass-level specification of fog parameters lets you easily manage
                both.
                @par
                The CSceneManager class also has a setFog method which applies scene-level fog. This method
                lets you change the fog behaviour for this pass compared to the standard scene-level fog.
                @param
                overrideScene If true, you authorise this pass to override the scene's fog params with it's own settings.
                If you specify false, so other parameters are necessary, and this is the default behaviour for passes.
                @param
                mode Only applicable if overrideScene is true. You can disable fog which is turned on for the
                rest of the scene by specifying FOG_NONE. Otherwise, set a pass-specific fog mode as
                defined in the enum FogMode.
                @param
                colour The colour of the fog. Either set this to the same as your viewport background colour,
                or to blend in with a skydome or skybox.
                @param
                expDensity The density of the fog in FOG_EXP or FOG_EXP2 mode, as a value between 0 and 1.
                The default is 0.001.
                @param
                linearStart Distance in world units at which linear fog starts to encroach.
                Only applicable if mode is FOG_LINEAR.
                @param
                linearEnd Distance in world units at which linear fog becomes completely opaque.
                Only applicable if mode is FOG_LINEAR.
                ****/
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour , Real expDensity , Real linearStart , Real linearEnd );
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity, Real linearStart);
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour, Real expDensity);
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour );
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode);
                void setFog(ev_bool overrideScene);
                /***** Returns true if this pass is to override the scene fog settings.
                ****/
                ev_bool getFogOverride() const;
                /***** Returns the fog mode for this pass.
                @note
                Only valid if getFogOverride is true.
                ****/
                EarthView::World::Graphic::FogMode getFogMode() const;
                /***** Returns the fog colour for the scene.
                ****/
                const EarthView::World::Graphic::CColourValue &getFogColour() const;
                /***** Returns the fog start distance for this pass.
                @note
                Only valid if getFogOverride is true.
                ****/
                Real getFogStart() const;
                /***** Returns the fog end distance for this pass.
                @note
                Only valid if getFogOverride is true.
                ****/
                Real getFogEnd() const;
                /***** Returns the fog density for this pass.
                @note
                Only valid if getFogOverride is true.
                ****/
                Real getFogDensity() const;
                
				/// <summary>
				/// 设置深度偏移值
				/// </summary>
				/// <param name=""></param>
				/// <param name=""></param>
				/// <returns></returns>
                void setDepthBias(ev_real32 constantBias, ev_real32 slopeScaleBias);
                void setDepthBias(ev_real32 constantBias);
                
				/// <summary>
				/// 获取深度偏移常量
				/// </summary>				
				/// <returns></returns>
                ev_real32 getDepthBiasConstant() const;
                
				/// <summary>
				/// 获取深度偏移倾斜值
				/// </summary>				
				/// <returns></returns>
                ev_real32 getDepthBiasSlopeScale() const;
                /***** Sets a factor which derives an additional depth bias from the number
                	of times a pass is iterated.
                @remarks
                	The Final depth bias will be the constant depth bias as set through
                	setDepthBias, plus this value times the iteration number.
                ****/
                void setIterationDepthBias(ev_real32 biasPerIteration);
                /***** Gets a factor which derives an additional depth bias from the number
                	of times a pass is iterated.
                ****/
                ev_real32 getIterationDepthBias() const;
                
				/// <summary>
				/// 设置Alpha通道拒绝参数
				/// </summary>				
				/// <returns></returns>
                void setAlphaRejectSettings(EarthView::World::Graphic::CompareFunction func, ev_uchar value, ev_bool alphaToCoverageEnabled);
                void setAlphaRejectSettings(EarthView::World::Graphic::CompareFunction func, ev_uchar value);                
                void setAlphaRejectFunction(EarthView::World::Graphic::CompareFunction func);                
                void setAlphaRejectValue(ev_uchar val);

				/// <summary>
				/// 获取Alpha通道拒绝时比较函数
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CompareFunction getAlphaRejectFunction() const
                {
                    return mAlphaRejectFunc;
                }
				/// <summary>
				/// 获取Alpha通道拒绝时的临界值
				/// </summary>				
				/// <returns></returns>
                ev_uchar getAlphaRejectValue() const
                {
                    return mAlphaRejectVal;
                }
                /***** Sets whether to use alpha to coverage (A2C) when blending alpha rejected values.
                @remarks
                	Alpha to coverage performs multisampling on the edges of alpha-rejected
                	textures to produce a smoother result. It is only supported when multisampling
                	is already enabled on the render target, and when the hardware supports
                	alpha to coverage (see CRenderSystemCapabilities).
                ****/
                void setAlphaToCoverageEnabled(ev_bool enabled);
                /***** Gets whether to use alpha to coverage (A2C) when blending alpha rejected values.
                ****/
                ev_bool isAlphaToCoverageEnabled() const
                {
                    return mAlphaToCoverageEnabled;
                }
                
				/// <summary>
				/// 设置是否启用透明通路排序
				/// 如果不启用，则此材质的深度排序将禁用
				/// </summary>				
				/// <returns></returns>
                void setTransparentSortingEnabled(ev_bool enabled);
                
				/// <summary>
				/// 获取是否启用透明通路排序				
				/// </summary>				
				/// <returns></returns>
                ev_bool getTransparentSortingEnabled() const;
                
				/// <summary>
				/// 设置是否强制启用透明通路排序
				/// 如果启用，则不论深度写入/测试是否开启，都将强制排序
				/// </summary>				
				/// <returns></returns>
                void setTransparentSortingForced(ev_bool enabled);
                
				/// <summary>
				/// 获取是否强制启用透明通路排序				
				/// </summary>				
				/// <returns></returns>
                ev_bool getTransparentSortingForced() const;
                
				/// <summary>
				/// 设置逐光源迭代			
				/// 默认渲染流程是所有光源一起作用于渲染对象
				/// 若启用逐光源迭代，则每个/每几个分别作用于渲染对象,迭代光源的个数由setLightCountPerIteration函数进行设置
				/// </summary>
				/// <param name="enabled"></param>
				/// <param name="onlyForOneLightType">是否只为某种类型的光源启用迭代</param>
				/// <param name="lightType">光源类型</param>
				/// <returns></returns>
                void setIteratePerLight(ev_bool enabled, ev_bool onlyForOneLightType, EarthView::World::Graphic::CLight::LightTypes lightType);
                void setIteratePerLight(ev_bool enabled, ev_bool onlyForOneLightType);
                void setIteratePerLight(ev_bool enabled);
                
				/// <summary>
				/// 获取光源迭代是否启用
				/// </summary>				
				/// <returns></returns>
                ev_bool getIteratePerLight() const
                {
                    return mIteratePerLight;
                }
                
				/// <summary>
				/// 获取光源迭代是否只针对特定类型的光源
				/// </summary>				
				/// <returns></returns>
                ev_bool getRunOnlyForOneLightType() const
                {
                    return mRunOnlyForOneLightType;
                }
                
				/// <summary>
				/// 获取光源迭代针对的特定光源的类型
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CLight::LightTypes getOnlyLightType() const
                {
                    return mOnlyLightType;
                }
                
				/// <summary>
				/// 设置迭代光源的个数
				/// </summary>				
				/// <returns></returns>
                void setLightCountPerIteration(ev_uint16 c);
                
				/// <summary>
				/// 获取迭代光源的个数
				/// </summary>				
				/// <returns></returns>
                ev_uint16 getLightCountPerIteration() const;

				/// <summary>
				/// 获取所属的技术
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::CTechnique *getParent() const
                {
                    return mParent;
                }
               
				/// <summary>
				/// 获取所属材质的资源组名
				/// </summary>				
				/// <returns></returns>
                EVString getResourceGroup() const;
                
				/// <summary>
				/// 设置顶点GPU程序
				/// </summary>			
				/// <param name="name">GPU程序名称</param>
				/// <param name="resetParams">是否重置GPU参数</param>
				/// <param name="recompile">是否重新编译</param>
				/// <param name="gpuPtr">GPU程序</param>
				/// <returns></returns>
				void setVertexProgram(const EVString &name, ev_bool resetParams, RecompileMethod recompile);                			
				void setVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr,RecompileMethod recompile);

                void setVertexProgram(const EVString &name, ev_bool resetParams)
				{
					setVertexProgram(name,resetParams,CT_Recompile);
				}
                void setVertexProgram(const EVString &name)
				{
					setVertexProgram(name,true,CT_Recompile);
				}
				void setVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr)
				{
					setVertexProgram(gpuPtr,CT_Recompile);
				}
				

				/// <summary>
				/// 设置顶点GPU程序使用的参数
				/// </summary>
				/// <returns></returns>
                void setVertexProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获得顶点GPU程序名称
				/// </summary>
				/// <returns></returns>
                EVString getVertexProgramName() const;
                
				/// <summary>
				/// 获得顶点GPU程序使用的参数
				/// </summary>
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getVertexProgramParameters() const;
                
				/// <summary>
				/// 获得顶点GPU程序
				/// </summary>
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getVertexProgram() const;

				/// <summary>
				/// 设置投射阴影的顶点GPU程序
				/// 当场景使用纹理阴影时起作用
				/// </summary>
				/// <param name="name">GPU程序名称</param>				
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
                void setShadowCasterVertexProgram(const EVString &name,RecompileMethod recompile);
				void setShadowCasterVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr,RecompileMethod recompile);
				void setShadowCasterVertexProgram(const EVString &name)
				{
					setShadowCasterVertexProgram(name,CT_Recompile);
				}
				void setShadowCasterVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr)
				{
					setShadowCasterVertexProgram(gpuPtr,CT_Recompile);
				}
                
				/// <summary>
				/// 设置投射阴影的顶点GPU程序使用的参数				
				/// </summary>				
				/// <returns></returns>
                void setShadowCasterVertexProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获取投射阴影的顶点GPU程序的名称				
				/// </summary>				
				/// <returns></returns>
                EVString getShadowCasterVertexProgramName() const;
                
				/// <summary>
				/// 获取投射阴影的顶点GPU程序使用的参数			
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getShadowCasterVertexProgramParameters() const;
               
				/// <summary>
				/// 获取投射阴影的顶点GPU程序		
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getShadowCasterVertexProgram() const;

				/// <summary>
				/// 设置投射阴影的片段GPU程序
				/// 当场景使用纹理阴影时起作用
				/// </summary>
				/// <param name="name">GPU程序名称</param>				
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
				void setShadowCasterFragmentProgram(const EVString &name,RecompileMethod recompile);
				void setShadowCasterFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr,RecompileMethod recompile);
				void setShadowCasterFragmentProgram(const EVString &name)
				{
					setShadowCasterFragmentProgram(name,CT_Recompile);
				}
				void setShadowCasterFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr)
				{
					setShadowCasterFragmentProgram(gpuPtr,CT_Recompile);
				}
                
				/// <summary>
				/// 设置投射阴影的片段GPU程序使用的参数				
				/// </summary>				
				/// <returns></returns>
                void setShadowCasterFragmentProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获取投射阴影的片段GPU程序的名称				
				/// </summary>				
				/// <returns></returns>
                EVString getShadowCasterFragmentProgramName() const;
                
				/// <summary>
				/// 获取投射阴影的片段GPU程序使用的参数				
				/// </summary>				
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getShadowCasterFragmentProgramParameters() const;
                
				/// <summary>
				/// 获取投射阴影的片段GPU程序		
				/// </summary>				
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getShadowCasterFragmentProgram() const;
                
				/// <summary>
				/// 设置接收阴影的顶点GPU程序
				/// 当场景使用纹理阴影时起作用
				/// </summary>
				/// <param name="name">GPU程序名称</param>				
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
                void setShadowReceiverVertexProgram(const EVString &name,RecompileMethod recompile);
				void setShadowReceiverVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr,RecompileMethod recompile);

				void setShadowReceiverVertexProgram(const EVString &name)
				{
					setShadowReceiverVertexProgram(name,CT_Recompile);
				}
				void setShadowReceiverVertexProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr)
				{
					setShadowReceiverVertexProgram(gpuPtr,CT_Recompile);
				}

				/// <summary>
				/// 设置接收阴影的顶点GPU程序使用的参数				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setShadowReceiverVertexProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 设置接收阴影的片段GPU程序
				/// 当场景使用纹理阴影时起作用
				/// </summary>
				/// <param name="name">GPU程序名称</param>				
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
                void setShadowReceiverFragmentProgram(const EVString &name,RecompileMethod recompile);
				void setShadowReceiverFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr,RecompileMethod recompile);

				void setShadowReceiverFragmentProgram(const EVString &name)
				{
					setShadowReceiverFragmentProgram(name,CT_Recompile);
				}
				void setShadowReceiverFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr& gpuPtr)
				{
					setShadowReceiverFragmentProgram(gpuPtr,CT_Recompile);
				}
               
				/// <summary>
				/// 设置接收阴影的片段GPU程序使用的参数				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setShadowReceiverFragmentProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获取接收阴影的顶点GPU程序的名称				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EVString getShadowReceiverVertexProgramName() const;
                
				/// <summary>
				/// 获取接收阴影的顶点GPU程序使用的参数				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getShadowReceiverVertexProgramParameters() const;
                
				/// <summary>
				/// 获取接收阴影的顶点GPU程序		
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getShadowReceiverVertexProgram() const;
                
				/// <summary>
				/// 获取接收阴影的片段GPU程序的名称			
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EVString getShadowReceiverFragmentProgramName() const;
                
				/// <summary>
				/// 设置接收阴影的片段GPU程序使用的参数				
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getShadowReceiverFragmentProgramParameters() const;
                
				/// <summary>
				/// 获取接收阴影的片段GPU程序		
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getShadowReceiverFragmentProgram() const;
                
				/// <summary>
				/// 设置片段GPU程序
				/// </summary>			
				/// <param name="name">GPU程序名称</param>
				/// <param name="resetParams">是否重置GPU参数</param>
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
                void setFragmentProgram(const EVString &name, ev_bool resetParams, RecompileMethod recompile);               			
				void setFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr &gpuPtr, RecompileMethod recompile);

				void setFragmentProgram(const EVString &name, ev_bool resetParams)
				{
					setFragmentProgram(name,resetParams,CT_Recompile);
				}
                void setFragmentProgram(const EVString &name)
				{
					setFragmentProgram(name,CT_Recompile);
				}
				void setFragmentProgram(EarthView::World::Graphic::CGpuProgramPtr &gpuPtr)
				{
					setFragmentProgram(gpuPtr,CT_Recompile);
				}
               
				/// <summary>
				/// 设置片段GPU程序使用的参数
				/// </summary>			
				/// <param name=""></param>				
				/// <returns></returns>
                void setFragmentProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获取片段GPU程序的名称
				/// </summary>			
				/// <param name=""></param>				
				/// <returns></returns>
                EVString getFragmentProgramName() const;
               
				/// <summary>
				/// 获取片段GPU程序使用的参数
				/// </summary>			
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getFragmentProgramParameters() const;
                
				/// <summary>
				/// 获取片段GPU程序
				/// </summary>			
				/// <param name=""></param>				
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getFragmentProgram() const;
                
				/// <summary>
				/// 设置几何GPU程序
				/// </summary>			
				/// <param name="name">GPU程序名称</param>
				/// <param name="resetParams">是否重置GPU参数</param>
				/// <param name="gpuPtr">GPU程序</param>
				/// <param name="recompile">是否重新编译</param>
				/// <returns></returns>
                void setGeometryProgram(const EVString &name, ev_bool resetParams, RecompileMethod recompile);                			
				void setGeometryProgram(EarthView::World::Graphic::CGpuProgramPtr &gpuPtr, RecompileMethod recompile);
				                
				void setGeometryProgram(const EVString &name, ev_bool resetParams )
				{
					setGeometryProgram(name,resetParams,CT_Recompile);
				}
                void setGeometryProgram(const EVString &name)
				{
					setGeometryProgram(name,CT_Recompile);
				}
				void setGeometryProgram(EarthView::World::Graphic::CGpuProgramPtr &gpuPtr)
				{
					setGeometryProgram(gpuPtr,CT_Recompile);
				}
                
				/// <summary>
				/// 设置几何GPU程序使用的参数
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void setGeometryProgramParameters(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                
				/// <summary>
				/// 获取几何GPU程序的名称
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                EVString getGeometryProgramName() const;
                
				/// <summary>
				/// 获取几何GPU程序使用的参数
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::GpuProgramParametersSharedPtr getGeometryProgramParameters() const;
                
				/// <summary>
				/// 获取几何GPU程序
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                const EarthView::World::Graphic::CGpuProgramPtr &getGeometryProgram() const;

                /***** Splits this EarthView::World::Graphic::CPass to one which can be handled in the number of
                	texture units specified.
                @remarks
                	Only works on non-programmable passes, programmable passes cannot be
                	split, it's up to the author to ensure that there is a fallback EarthView::World::Graphic::CTechnique
                	for less capable cards.
                @param numUnits The target number of texture units
                @returns A new EarthView::World::Graphic::CPass which contains the remaining units, and a scene_blend
                		setting appropriate to approximate the multitexture. This EarthView::World::Graphic::CPass will be
                		attached to the parent EarthView::World::Graphic::CTechnique of this EarthView::World::Graphic::CPass.
                ****/
                EarthView::World::Graphic::CPass *_split(ev_uint16 numUnits);
                /***** Internal method to adjust pass index. ****/
                void _notifyIndex(ev_uint16 index);
                /***** Internal method for preparing to load this pass. ****/
                void _prepare();
                /***** Internal method for undoing the load preparartion for this pass. ****/
                void _unprepare();
                /***** Internal method for loading this pass. ****/
                void _load();
                /***** Internal method for unloading this pass. ****/
                void _unload();
                //// Is this loaded?
                ev_bool isLoaded() const;
                /***** Gets the 'hash' of this pass, ie a precomputed number to use for sorting
                @remarks
                    This hash is used to sort passes, and for this reason the pass is hashed
                ****/
                ev_uint32 getHash() const
                {
                    return mHash;
                }
                ///// Mark the hash as dirty
                void _dirtyHash();
                /***** Internal method for recalculating the hash.
                @remarks
                	Do not call this unless you are sure the old hash is not still being
                	used by anything. If in doubt, call _dirtyHash if you want to force
                	recalculation of the has next time.
                ****/
                void _recalculateHash();
                
				/// <summary>
				/// 通报需要重新编译
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void _notifyNeedsRecompile();
                /***** Update automatic parameters.
                @param source The source of the parameters
                @param variabilityMask A mask of GpuParamVariability which identifies which autos will need updating
                ****/
                void _updateAutoParams(const EarthView::World::Graphic::CAutoParamDataSource *source, ev_uint16 variabilityMask) const;
                /***** Gets the 'nth' texture which references the given content type.
                @remarks
                	If the 'nth' texture unit which references the content type doesn't
                	exist, then this method returns an arbitrary high-value outside the
                	valid range to index texture units.
                ****/
                ev_uint16 _getTextureUnitWithContentTypeIndex(
                    EarthView::World::Graphic::CTextureUnitState::ContentType contentType, ev_uint16 index) const;
                
				/// <summary>
				/// 为每个纹理单元设置纹理过滤方式
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::TextureFilterOptions filterType);
				/// <summary>
				/// 为每个纹理单元设置纹理各向异性值
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void setTextureAnisotropy(ev_uint32 maxAniso);
                
				/// <summary>
				/// 设置是否对法向量进行单位化
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void setNormaliseNormals(ev_bool normalise)
                {
                    mNormaliseNormals = normalise;
                }
				/// <summary>
				/// 获取是否对法向量进行单位化
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool getNormaliseNormals() const
                {
                    return mNormaliseNormals;
                }
                /***** Static method to retrieve all the Passes which need their
                    hash values recalculated.
                ****/
                static const EarthView::World::Graphic::CPass::PassSet &getDirtyHashList()
                {
                    return msDirtyHashList;
                }
                /***** Static method to retrieve all the Passes which are pending deletion.
                ****/
                static const EarthView::World::Graphic::CPass::PassSet &getPassGraveyard()
                {
                    return msPassGraveyard;
                }
                /***** Static method to reset the list of passes which need their hash
                    values recalculated.
                @remarks
                	For performance, the dirty list is not updated progressively as
                	the hashes are recalculated, instead we expect the processor of the
                	dirty hash list to clear the list when they are done.
                ****/
                static void clearDirtyHashList();
                /***** Process all dirty and pending deletion passes. ****/
                static void processPendingPassUpdates();
                
				/// <summary>
				/// 加入到销毁队列
				/// </summary>			
				/// <param name=""></param>
				/// <returns></returns>
                void queueForDeletion();
                /***** Returns whether this pass is ambient only.
                ****/
                ev_bool isAmbientOnly() const;
                /***** set the number of iterations that this pass
                should perform when doing fast multi pass operation.
                @remarks
                    Only applicable for programmable passes.
                @param count number of iterations to perform fast multi pass operations.
                    A value greater than 1 will cause the pass to be executed count number of
                    times without changing the render state.  This is very usefull for passes
                    that use programmable shaders that have to iterate more than once but don't
                    need a render state change.  Using multi pass can dramatically speed up rendering
                    for materials that do things like fur, blur.
                    A value of 1 turns off multi pass operation and the pass does
                    the normal pass operation.
                ****/
                void setPassIterationCount(const ev_size_t count)
                {
                    mPassIterationCount = count;
                }
                /***** Gets the pass iteration count value.
                ****/
                ev_size_t getPassIterationCount() const
                {
                    return mPassIterationCount;
                }
                /// <summary>
                /// 应用纹理别名
                /// </summary>
                /// <param name="aliasList">纹理名称键值对</param>
                /// <param name="apply">true，应用；false，只匹配别名并不应用</param>
                /// <returns>假如匹配的纹理别名找到了，则返回true，否则返回false</returns>
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList, const ev_bool apply) const;
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList) const;
                /***** Sets whether or not this pass will be clipped by a scissor rectangle
                	encompassing the lights that are being used in it.
                @remarks
                	In order to cut down on fillrate when you have a number of fixed-range
                	lights in the scene, you can enable this option to request that
                	during rendering, only the region of the screen which is covered by
                	the lights is rendered. This region is the screen-space rectangle
                	covering the union of the spheres making up the light ranges. Directional
                	lights are ignored for this.
                @par
                	This is only likely to be useful for multipass additive lighting
                	algorithms, where the scene has already been 'seeded' with an ambient
                	pass and this pass is just adding light in affected areas.
                @note
                	this option is implicitly used for all per-light passes and does
                	a modulative or an integrated shadow technique then this could be useful.

                ****/
                void setLightScissoringEnabled(ev_bool enabled)
                {
                    mLightScissoring = enabled;
                }
                /***** Gets whether or not this pass will be clipped by a scissor rectangle
                	encompassing the lights that are being used in it.
                ****/
                ev_bool getLightScissoringEnabled() const
                {
                    return mLightScissoring;
                }
                /***** Gets whether or not this pass will be clipped by user clips planes
                	bounding the area covered by the light.
                @remarks
                	In order to cut down on the geometry set up to render this pass
                	when you have a single fixed-range light being rendered through it,
                	you can enable this option to request that during triangle setup,
                	clip planes are defined to bound the range of the light. In the case
                	of a point light these planes form a cube, and in the case of
                	a spotlight they form a pyramid. Directional lights are never clipped.
                @par
                	This option is only likely to be useful for multipass additive lighting
                	algorithms, where the scene has already been 'seeded' with an ambient
                	pass and this pass is just adding light in affected areas. In addition,
                	it will only be honoured if there is exactly one non-directional light
                	being used in this pass. Also, these clip planes override any user clip
                	planes set on CCamera.
                @note
                	this option is automatically used for all per-light passes if you
                	enable CSceneManager::setShadowUseLightClipPlanes and does
                	not need to be specified. It is disabled by default since clip planes have
                	a cost of their own which may not always exceed the benefits they give you.
                ****/
                void setLightClipPlanesEnabled(ev_bool enabled)
                {
                    mLightClipPlanes = enabled;
                }
                /***** Gets whether or not this pass will be clipped by user clips planes
                	bounding the area covered by the light.
                ****/
                ev_bool getLightClipPlanesEnabled() const
                {
                    return mLightClipPlanes;
                }
                /***** Manually set which illumination stage this pass is a member of.
                @remarks
                	SHADOWTYPE_TEXTURE_ADDITIVE), the scene is rendered in 3 discrete
                	stages, ambient (or pre-lighting), per-light (once per light, with
                	shadowing) and decal (or post-lighting). Usually EV_World figures out how
                	to categorise your passes automatically, but there are some effects you
                	cannot achieve without manually controlling the illumination. For example
                	specular effects are muted by the typical sequence because all textures
                	are saved until the IS_DECAL stage which mutes the specular effect.
                	Instead, you could do texturing within the per-light stage if it's
                	possible for your material and thus add the specular on after the
                	decal texturing, and have no post-light rendering.
                @par
                	If you assign an illumination stage to a pass you have to assign it
                	to all passes in the technique otherwise it will be ignored. Also note
                	that whilst you can have more than one pass in each group, they cannot
                	alternate, ie all ambient passes will be before all per-light passes,
                	which will also be before all decal passes. Within their categories
                	the passes will retain their ordering though.
                ****/
                void setIlluminationStage(IlluminationStage is)
                {
                    mIlluminationStage = is;
                }
                ///// Get the manually assigned illumination stage, if any
                EarthView::World::Graphic::IlluminationStage getIlluminationStage() const
                {
                    return mIlluminationStage;
                }
                /***** There are some default hash functions used to order passes so that
                	render state changes are minimised, this enumerates them.
                ****/
                enum BuiltinHashFunction
                {
                    /***** Try to minimise the number of texture changes. ****/
                    MIN_TEXTURE_CHANGE,
                    /***** Try to minimise the number of GPU program changes.
                    @note Only really useful if you use GPU programs for all of your
                    	materials.
                    ****/
                    MIN_GPU_PROGRAM_CHANGE
                };
                /***** Sets one of the default hash functions to be used.
                @remarks
                	You absolutely must not change the hash function whilst any EarthView::World::Graphic::CPass instances
                	exist in the render queue. The only time you can do this is either
                	before you render anything, or directly after you manuall call
                	CRenderQueue::clear(true) to completely destroy the queue structures.
                	The default is MIN_TEXTURE_CHANGE.
                @note
                	You can also implement your own hash function, see the alternate version
                	of this method.
                @see EarthView::World::Graphic::CPass::HashFunc
                ****/
                static void setHashFunction(EarthView::World::Graphic::CPass::BuiltinHashFunction builtin);
                /***** Set the hash function used for all passes.
                @remarks
                	You absolutely must not change the hash function whilst any EarthView::World::Graphic::CPass instances
                	exist in the render queue. The only time you can do this is either
                	before you render anything, or directly after you manuall call
                	CRenderQueue::clear(true) to completely destroy the queue structures.
                @note
                	You can also use one of the built-in hash functions, see the alternate version
                	of this method. The default is MIN_TEXTURE_CHANGE.
                @see EarthView::World::Graphic::CPass::HashFunc
                ****/
                static void setHashFunction(HashFunc *hashFunc)
                {
                    msHashFunc = hashFunc;
                }
                /***** Get the hash function used for all passes.
                ****/
                static EarthView::World::Graphic::CPass::HashFunc *getHashFunction()
                {
                    return msHashFunc;
                }
                /***** Get the builtin hash function.
                ****/
                static EarthView::World::Graphic::CPass::HashFunc *getBuiltinHashFunction(BuiltinHashFunction builtin);
                /***** Return an instance of user objects binding associated with this class.
                You can use it to associate one or more custom objects with this class instance.
                @see CUserObjectBindings::setUserAny.
                ****/
                EarthView::World::Graphic::CUserObjectBindings	&getUserObjectBindings()
                {
                    return mUserObjectBindings;
                }
                /***** Return an instance of user objects binding associated with this class.
                You can use it to associate one or more custom objects with this class instance.
                @see CUserObjectBindings::setUserAny.
                ****/
                const EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings() const
                {
                    return mUserObjectBindings;
                }

ev_private:
				//设置默认的散射光参数值（从材质文件解析出来的值）
				void setDefaultDiffuse(const EarthView::World::Graphic::CColourValue& diffuse);

				//设置默认的环境光参数值（从材质文件解析出来的值）
				void setDefaultAmbient(const EarthView::World::Graphic::CColourValue& ambient);

				//设置默认的镜面光参数值（从材质文件解析出来的值）
				void setDefaultSpecular(const EarthView::World::Graphic::CColourValue& specular);

				//获取默认的散射光参数值（从材质文件解析出来的值）
				const EarthView::World::Graphic::CColourValue& getDefaultDiffuse();

				//获取默认的环境光参数值（从材质文件解析出来的值）
				const EarthView::World::Graphic::CColourValue& getDefaultAmbient();

				//获取默认的镜面光参数值（从材质文件解析出来的值）
				const EarthView::World::Graphic::CColourValue& getDefaultSpecular();
            };
            /***** Struct recording a pass which can be used for a specific illumination stage.
            @remarks
                This structure is used to record categorised passes which fit into a
                number of distinct illumination phases - ambient, diffuse / specular
                (per-light) and decal (post-lighting texturing).
                An original pass may fit into one of these categories already, or it
                may require splitting into its component parts in order to be categorised
                properly.
            ****/
            class EV_GRAPHIC_DLL IlluminationPass : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                IlluminationPass(EarthView::World::Core::CNameValuePairList *pList) { }
            public:
                IlluminationPass()  { }
                EarthView::World::Graphic::IlluminationStage stage;
                ///// The pass to use in this stage
                EarthView::World::Graphic::CPass *pass;
                ///// Whether this pass is one which should be deleted itself
                ev_bool destroyOnShutdown;
                ///// The original pass which spawned this one
                EarthView::World::Graphic::CPass *originalPass;

            };
            /**** typedef vector<EarthView::World::Graphic::IlluminationPass*> IlluminationPassList;****/
            class EV_GRAPHIC_DLL IlluminationPassList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                IlluminationPassList(EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:
                typedef vector<EarthView::World::Graphic::IlluminationPass *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

                iterator insert(iterator pos, EarthView::World::Graphic::IlluminationPass *const &t)
                {
                    return mList.insert(pos, t);
                }
            private:
                InternalList mList;
            public:
                IlluminationPassList() {}
                void push_back(EarthView::World::Graphic::IlluminationPass *const &t)
                {
                    mList.push_back(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                EarthView::World::Graphic::IlluminationPass*& front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::IlluminationPass*& back()
                {
                    return mList.back();
                }
                void insert(ev_uint32 pos, EarthView::World::Graphic::IlluminationPass *const &t)
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
                EarthView::World::Graphic::IlluminationPass*& operator[](ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::IlluminationPass *const &operator[](ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                EarthView::World::Graphic::IlluminationPass*& at(ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::IlluminationPass *const &at(ev_size_t n) const
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

            /***** @} ****/
            /***** @} ****/
        }
    }
}

#endif

