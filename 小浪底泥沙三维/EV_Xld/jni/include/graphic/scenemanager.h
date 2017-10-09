#ifndef __SceneManager_H__
#define __SceneManager_H__
#include "graphic/graphic_config.h"
#include "scenequery.h"
#include "autoparamdatasource.h"
#include "animationstate.h"
#include "renderqueuesortinggrouping.h"
#include "lodlistener.h"
#include "instancemanager.h"
#include "rendersystem.h"

#include "spatialinterface/ilayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CMatrix4;
			}
		}

	}
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRectangle2D;
            class CInstancedGeometry;
            class CStaticGeometry;
            class CManualObject;
            class CMeshPtr;
            class CRenderQueueListener;
            class CRenderObjectListener;
            class CAnimation;
            class CCamera;
            class CRenderQueueInvocationSequence;
            class CBillboardChain;
            class CRibbonTrail;
            class CParticleSystem;
            class CBillboardSet;
            class CDefaultIntersectionSceneQuery;
            class CDefaultRaySceneQuery;
            class CDefaultSphereSceneQuery;
            class CDefaultAxisAlignedBoxSceneQuery;
            class CCompositorChain;
            class materialLess;
            class lightLess;

            /// <summary>
            /// 观察点类
            /// 原为struct类型，定义场景中观察点的类型
            /// </summary>
            class EV_GRAPHIC_DLL ViewPoint : public EarthView::World::Core::CBaseObject
            {
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ViewPoint();
                EarthView::World::Spatial::Math::CVector3 position;

                EarthView::World::Spatial::Math::CQuaternion orientation;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                ViewPoint(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /// <summary>
            /// 可见对象信息类
            /// 原为struct类型，管理场景中被发现的可见对象
            /// </summary>
            class EV_GRAPHIC_DLL VisibleObjectsBoundsInfo : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                VisibleObjectsBoundsInfo(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// The axis-aligned bounds of the visible objects
                EarthView::World::Spatial::Math::CAxisAlignedBox aabb;
                //// The axis-aligned bounds of the visible shadow receiver objects
                EarthView::World::Spatial::Math::CAxisAlignedBox receiverAabb;
                //// The closest a visible object is to the camera
                Real minDistance;
                //// The farthest a visible objects is from the camera
                Real maxDistance;
                //// The closest a object in the frustum regardless of visibility / shadow caster flags
                Real minDistanceInFrustum;
                //// The farthest object in the frustum regardless of visibility / shadow caster flags
                Real maxDistanceInFrustum;
                VisibleObjectsBoundsInfo();
                void reset();
                /*void merge(const EarthView::World::Spatial::Math::CAxisAlignedBox& boxBounds, const EarthView::World::Spatial::Math::CSphere& sphereBounds, const EarthView::World::Graphic::CCamera* cam, ev_bool receiver=true);*/
                void merge(const EarthView::World::Spatial::Math::CAxisAlignedBox &boxBounds, const EarthView::World::Spatial::Math::CSphere &sphereBounds, const EarthView::World::Graphic::CCamera *cam, ev_bool receiver);
                void merge(const EarthView::World::Spatial::Math::CAxisAlignedBox &boxBounds, const EarthView::World::Spatial::Math::CSphere &sphereBounds, const EarthView::World::Graphic::CCamera *cam);
                /** Merge an object that is not being rendered because it's not a shadow caster,
                but is a shadow receiver so should be included in the range.
                */
                void mergeNonRenderedButInFrustum(const EarthView::World::Spatial::Math::CAxisAlignedBox &boxBounds, const EarthView::World::Spatial::Math::CSphere &sphereBounds, const EarthView::World::Graphic::CCamera *cam);
            };
            /// <summary>
            /// 场景管理类
            /// 此类是场景管理核心类，提供各种方法为摄像机，光源等进行管理和维护。
            /// 还直接保存场景节点树的跟节点指针以提供该树的访问入口。
            /// </summary>
            class EV_GRAPHIC_DLL CSceneManager : public EarthView::World::Core::CAllocatedObject
            {
				friend class CSceneManagerEnumerator;
            private:
                ///	static EarthView::World::Graphic::CSceneManager* ms_Singleton;
            public:
                ///	static EarthView::World::Graphic::CSceneManager& getSingleton();
                ///	static EarthView::World::Graphic::CSceneManager* getSingletonPtr();
                //// Query type mask which will be used for world geometry @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 WORLD_GEOMETRY_TYPE_MASK;
                //// Query type mask which will be used for entities @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 ENTITY_TYPE_MASK;
                //// Query type mask which will be used for effects like billboardsets / particle systems @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 FX_TYPE_MASK;
                //// Query type mask which will be used for EarthView::World::Graphic::CStaticGeometry  @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 STATICGEOMETRY_TYPE_MASK;
                //// Query type mask which will be used for lights  @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 LIGHT_TYPE_MASK;
                //// Query type mask which will be used for frusta and cameras @see EarthView::World::Graphic::CSceneQuery
                static ev_uint32 FRUSTUM_TYPE_MASK;
                //// User type mask limit
                static ev_uint32 USER_TYPE_MASK_LIMIT;

				const static EVString GlobeCameraName;
                /// <summary>
                /// 渲染阶段
                /// </summary>
                enum IlluminationRenderStage
                {
                    IRS_NONE,                  			///普通渲染
                    IRS_RENDER_TO_TEXTURE,     			///渲染到纹理阶段，如:基于阴影的纹理
                    IRS_RENDER_RECEIVER_PASS   			///阴影纹理接收者通路
                };
                /// <summary>
                /// 特殊实例渲染队列
                /// </summary>
                enum SpecialCaseRenderQueueMode
                {
                    SCRQM_INCLUDE, 			///只渲染队列里的特殊实例
                    SCRQM_EXCLUDE  			///渲染除了特殊实例的其他实例
                };
                enum BoxPlane
                {
                    BP_FRONT = 0,
                    BP_BACK = 1,
                    BP_LEFT = 2,
                    BP_RIGHT = 3,
                    BP_UP = 4,
                    BP_DOWN = 5
                };

                /// <summary>
                /// 天空穹顶参数
                /// 原为struct类型
                /// </summary>
                struct SkyDomeGenParameters
                {
                    Real skyDomeCurvature;
                    Real skyDomeTiling;
                    Real skyDomeDistance;
                    ev_int32 skyDomeXSegments;
                    ev_int32 skyDomeYSegments;
                    ev_int32 skyDomeYSegments_keep;
                };
                /// <summary>
                /// 天空面参数
                /// 原为struct类型
                /// </summary>
                struct SkyPlaneGenParameters
                {
                    Real skyPlaneScale;
                    Real skyPlaneTiling;
                    Real skyPlaneBow;
                    ev_int32 skyPlaneXSegments;
                    ev_int32 skyPlaneYSegments;
                };
                /// <summary>
                /// 天空盒参数
                /// 原为struct类型
                /// </summary>
                struct SkyBoxGenParameters
                {
                    Real skyBoxDistance;
                };

				public:
				class EV_GRAPHIC_DLL ShadowMapGround
				{
				public:
					ShadowMapGround(EarthView::World::Graphic::CSceneManager* manager,float width);
					~ShadowMapGround();
					void render(const EarthView::World::Graphic::CCamera* cam);
					void disableRender();
				private:
					EarthView::World::Graphic::CSimpleRenderable* createShadowMapGround();
				private:
					EarthView::World::Graphic::CSceneManager* mSceneManager;
					//float mCound;
					//float mPerLatitude;
					//float mPerLongitude;
					float mWidth;
					EarthView::World::Graphic::CVertexData* mShadowGroudVertexData;
					EarthView::World::Graphic::CIndexData* mShadowGroudIndexData;
					EarthView::World::Graphic::CSimpleRenderable* mShadowGroundRenderable;
					EarthView::World::Graphic::CMovableObject* mShadowGroundMoveableObject;
					EarthView::World::Graphic::CSceneNode* mShadowGroundNode;
				};
				class EV_GRAPHIC_DLL ShadowFullScreenQuad
				{
				public:
					ShadowFullScreenQuad(EarthView::World::Graphic::CSceneManager* manager,float width,EarthView::World::Graphic::CTexturePtr tex,EarthView::World::Graphic::CTexturePtr texVB);
					~ShadowFullScreenQuad();
					void render();
					void disableRender();
				private:
					EarthView::World::Graphic::CSimpleRenderable* createFullScreenQuad();
				private:
					float mWidth;
					EarthView::World::Graphic::CTexturePtr mTexture;
					EarthView::World::Graphic::CTexturePtr mTextureVB;
					EarthView::World::Graphic::CMaterialPtr mMaterialHB;
					EarthView::World::Graphic::CMaterialPtr mMaterialVB;
					EarthView::World::Graphic::CSceneManager* mSceneManager;
					EarthView::World::Graphic::CVertexData* mFullScreenQuadVertexData;
					EarthView::World::Graphic::CIndexData* mFullScreenQuadIndexData;
					EarthView::World::Graphic::CMovableObject* mFullScreenQuadMoveableObject;
					EarthView::World::Graphic::CSceneNode* mFullScreenQuadNode;
				public:
					EarthView::World::Graphic::CSimpleRenderable* mFullScreenQuadRenderable;
					EarthView::World::Graphic::CMaterialPtr GetMaterialVB();
					EarthView::World::Graphic::CMaterialPtr GetMaterialHB();

				};

				public:
                /// <summary>
                /// 场景管理监听类
                /// 自定义操作可以在外部实施
                /// </summary>
                class EV_GRAPHIC_DLL CSceneManagerListener : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CSceneManagerListener(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CSceneManagerListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CSceneManagerListener();
                   
					/// <summary>
					/// 在每帧更新场景图前触发			
					/// </summary>				
					/// <returns></returns>
                    virtual ev_void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera)
                    {
                        (ev_void)source;
                        (ev_void)camera;
                    }
					/// <summary>
					/// 在每帧更新场景图后触发			
					/// </summary>				
					/// <returns></returns>
                    virtual ev_void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera)
                    {
                        (ev_void)source;
                        (ev_void)camera;
                    }


                    /// <summary>
                    /// 在场景中搜索可见对象之前触发
                    /// </summary>
                    /// <param name="source">场景管理实例</param>
                    /// <param name="irs">渲染阶段</param>
                    /// <param name="v">视口</param>
                    /// <returns></returns>
                    virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);

                    /// <summary>
                    /// 在场景中搜索可见对象之后触发
                    /// </summary>
                    /// <param name="source">场景管理实例</param>
                    /// <param name="irs">渲染阶段</param>
                    /// <param name="v">视口</param>
                    /// <returns></returns>
                    virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source,
                                                        EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
                    /// <summary>
                    /// 阴影纹理更新时调用
                    /// 只有阴影纹理被使用的时候，这个事件才触发
                    /// </summary>
                    /// <param name="numberOfShadowTextures">阴影纹理使用中的数量</param>
                    /// <returns></returns>
                    virtual void shadowTexturesUpdated(ev_size_t numberOfShadowTextures);

                    /// <summary>
                    /// 在为纹理阴影投射者设置观察投影矩阵前触发                
                    /// </summary>
                    /// <param name="light">阴影纹理的光源</param>
                    /// <param name="camera">摄像机</param>
                    /// <param name="iteration">迭代次数</param>
                    /// <returns></returns>
                    virtual void shadowTextureCasterPreViewProj(EarthView::World::Graphic::CLight *light,
                            EarthView::World::Graphic::CCamera *camera, ev_size_t iteration);

                    /// <summary>
                    /// 在为纹理阴影接收者设置观察投影矩阵前触发                    
                    /// </summary>
                    /// <param name="light">阴影纹理的光源</param>
                    /// <param name="frustum">视椎体</param>
                    /// <returns></returns>
                    virtual void shadowTextureReceiverPreViewProj(EarthView::World::Graphic::CLight *light,
                            EarthView::World::Graphic::CFrustum *frustum);

                    /// <summary>
                    /// 对影响视椎体的光源进行排序
                    /// </summary>
                    /// <param name="lightList">光源列表</param>
                    /// <returns>为true，已排序</returns>
                    virtual ev_bool sortLightsAffectingFrustum(EarthView::World::Graphic::LightList &lightList);

                    /// <summary>
                    /// 场景管理器销毁时触发
                    /// </summary>
                    /// <param name="source">场景管理器</param>
                    /// <returns></returns>
                    virtual void sceneManagerDestroyed(EarthView::World::Graphic::CSceneManager *source);
                };

                /// <summary>
                /// 队列中渲染对象的访问者
                /// 内部帮助类
                /// </summary>
                class EV_GRAPHIC_DLL CSceneMgrQueuedRenderableVisitor : public EarthView::World::Graphic::CQueuedRenderableVisitor
                {
                protected:
                    const EarthView::World::Graphic::CPass *mUsedPass;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CSceneMgrQueuedRenderableVisitor(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CSceneMgrQueuedRenderableVisitor();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~CSceneMgrQueuedRenderableVisitor();
                    /// <summary>
                    /// 访问可渲染对象
                    /// </summary>
                    /// <param name="r">渲染接口</param>
                    /// <returns></returns>
                    void visit(EarthView::World::Graphic::CRenderable *r);
                    /// <summary>
                    /// 访问渲染通路(当通路改变时，这个函数被调用)
                    /// </summary>
                    /// <param name="p">通路</param>
                    /// <returns></returns>
                    ev_bool visit(const EarthView::World::Graphic::CPass *p);
                    /// <summary>
                    /// 访问渲染对象及其渲染通路
                    /// </summary>
                    /// <param name="rp">渲染通路</param>
                    /// <returns></returns>
                    void visit(EarthView::World::Graphic::RenderablePass *rp);

                    EarthView::World::Graphic::CSceneManager *targetSceneMgr;

                    ev_bool transparentShadowCastersMode;

                    ev_bool autoLights; 			///是否自动操作光源
                    const EarthView::World::Graphic::LightList *manualLightList; 			///自定义光源容器

                    ev_bool scissoring;
                };
                ///typedef map<EVString, EarthView::World::Graphic::CCamera*> EarthView::World::Graphic::CSceneManager::CameraList;
                class EV_GRAPHIC_DLL  CameraList : public EarthView::World::Core::CBaseObject
                {
                public:
                    CameraList() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CCamera *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CCamera *)ref_val;
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
                    EarthView::World::Graphic::CCamera*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CCamera*& get(const EVString &key)
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
                    CameraList(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CCamera *> InternalList;
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
                //// Storage of animations, lookup by name
                ///typedef map<EVString, EarthView::World::Graphic::CAnimation*> EarthView::World::Graphic::CSceneManager::AnimationList;
                class EV_GRAPHIC_DLL  AnimationList : public EarthView::World::Core::CBaseObject
                {
                public:
                    AnimationList() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CAnimation *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CAnimation *)ref_val;
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
                    EarthView::World::Graphic::CAnimation*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CAnimation*& get(const EVString &key)
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
                    AnimationList(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CAnimation *> InternalList;
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
                ///typedef map<EVString, EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::CSceneManager::MovableObjectMap;
                class EV_GRAPHIC_DLL  MovableObjectMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    MovableObjectMap() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CMovableObject *const &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CMovableObject *)val;
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
                    EarthView::World::Graphic::CMovableObject*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CMovableObject*& get(const EVString &key)
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
                    MovableObjectMap(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CMovableObject *> InternalList;
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
                friend class CSceneMgrQueuedRenderableVisitor;

            ev_internal:
                /// <summary>
                /// 创建场景节点的实现函数                
                /// </summary>
                /// <param name="name">节点名称</param>
                /// <returns>场景节点</returns>
                virtual _extfree EarthView::World::Graphic::CSceneNode *createSceneNodeImpl();                
                virtual _extfree EarthView::World::Graphic::CSceneNode *createSceneNodeImpl(const EVString &name);

				inline ev_bool getHeightMapRendering()
				{
					return mIsHeightMapRendering;
				}

            protected:

                EVString mName; 			///实例名称
                EarthView::World::Graphic::CRenderQueue *mRenderQueue;  			///渲染对象队列
                ev_bool mLastRenderQueueInvocationCustom;
                EarthView::World::Graphic::CColourValue mAmbientLight; 			///当前环境光源
                EarthView::World::Graphic::CRenderSystem *mDestRenderSystem;

                EarthView::World::Graphic::CSceneManager::CameraList mCameras;
                typedef map<EVString, EarthView::World::Graphic::CStaticGeometry *> StaticGeometryList;
                StaticGeometryList mStaticGeometryList;
                typedef map<EVString, EarthView::World::Graphic::CInstancedGeometry *> InstancedGeometryList;
                InstancedGeometryList mInstancedGeometryList;
                ///zxt add for v1.8
                typedef map<EVString, EarthView::World::Graphic::CInstanceManager *> InstanceManagerMap;
                InstanceManagerMap	mInstanceManagerMap;
				mutable EarthView::World::Core::CRecursiveMutex mInstanceManagerLock;

                typedef map<EVString, EarthView::World::Graphic::CSceneNode *> SceneNodeList;
                /** Central list of SceneNodes - for easy memory management.
                @note
                Note that this list is used only for memory management; the structure of the scene
                can look up nodes this way.
                */
                SceneNodeList mSceneNodes;
                //// EarthView::World::Graphic::CCamera in progress
                EarthView::World::Graphic::CCamera *mCameraInProgress;
                //// Current EarthView::World::Graphic::CViewport
                EarthView::World::Graphic::CViewport *mCurrentViewport;
                //// CRoot scene node
                EarthView::World::Graphic::CSceneNode *mSceneRoot;
                //// Autotracking scene nodes
                typedef set<EarthView::World::Graphic::CSceneNode *> AutoTrackingSceneNodes;
                AutoTrackingSceneNodes mAutoTrackingSceneNodes;
                /// Sky params
                /// Sky plane
                EarthView::World::Graphic::CEntity *mSkyPlaneEntity;
                EarthView::World::Graphic::CEntity *mSkyDomeEntity[5];
                EarthView::World::Graphic::CManualObject *mSkyBoxObj;
                EarthView::World::Graphic::CSceneNode *mSkyPlaneNode;
                EarthView::World::Graphic::CSceneNode *mSkyDomeNode;
                EarthView::World::Graphic::CSceneNode *mSkyBoxNode;
                /// Sky plane
                ev_bool mSkyPlaneEnabled;
                ev_uint8 mSkyPlaneRenderQueue;
                EarthView::World::Spatial::Math::CPlane mSkyPlane;
                EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters mSkyPlaneGenParameters;
                /// Sky box
                ev_bool mSkyBoxEnabled;
                ev_uint8 mSkyBoxRenderQueue;
                EarthView::World::Spatial::Math::CQuaternion mSkyBoxOrientation;
                EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters mSkyBoxGenParameters;
                /// Sky dome
                ev_bool mSkyDomeEnabled;
                ev_uint8 mSkyDomeRenderQueue;
                EarthView::World::Spatial::Math::CQuaternion mSkyDomeOrientation;
                EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters mSkyDomeGenParameters;
                /// Fog
                EarthView::World::Graphic::FogMode mFogMode;
                EarthView::World::Graphic::CColourValue mFogColour;
                Real mFogStart;
                Real mFogEnd;
                Real mFogDensity;
                typedef set<ev_uint8> SpecialCaseRenderQueueList;
                SpecialCaseRenderQueueList mSpecialCaseQueueList;
                EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode mSpecialCaseQueueMode;
                ev_uint8 mWorldGeometryRenderQueue;
                ev_uint32 mLastFrameNumber;
                EarthView::World::Spatial::Math::CMatrix4 mTempXform[256];
                ev_bool mResetIdentityView;
                ev_bool mResetIdentityProj;
                ev_bool mNormaliseNormalsOnScale;
                ev_bool mFlipCullingOnNegativeScale;
                CullingMode mPassCullingMode;
				ev_bool mIsOceanDepthRendering;
				ev_bool mIsHeightMapRendering;
            ev_internal:
                /// <summary>
                /// 存储光源信息
                /// 用于追踪光源改变，原为struct
                /// </summary>
                class EV_GRAPHIC_DLL LightInfo : public EarthView::World::Core::CBaseObject
                {
                public:
                    EarthView::World::Graphic::CLight *light;
                    ev_int32 type;
                    Real range;
                    EarthView::World::Spatial::Math::CVector3 position;
                    ev_uint32 lightMask;

                    ev_bool operator== (const EarthView::World::Graphic::CSceneManager::LightInfo &rhs) const;
                    ev_bool operator!= (const EarthView::World::Graphic::CSceneManager::LightInfo &rhs) const;
                    LightInfo();
                ev_private:
                    LightInfo(_in EarthView::World::Core::CNameValuePairList *pList);
                };
            protected:
                typedef map< const EarthView::World::Graphic::CCamera *, EarthView::World::Graphic::VisibleObjectsBoundsInfo> CamVisibleObjectsMap;
                CamVisibleObjectsMap mCamVisibleObjectsMap;

                typedef map< const EarthView::World::Graphic::CCamera *, const EarthView::World::Graphic::CLight * > ShadowCamLightMapping;
                ShadowCamLightMapping mShadowCamLightMapping;
                ev_size_t mShadowTextureCountPerType[3];
                vector<ev_size_t> mShadowTextureIndexLightList;
                typedef vector<EarthView::World::Graphic::CSceneManager::LightInfo> LightInfoList;
                EarthView::World::Graphic::LightList mLightsAffectingFrustum;
                LightInfoList mCachedLightInfos;
                LightInfoList mTestLightInfos;
                ev_uint32 mLightsDirtyCounter;
                EarthView::World::Graphic::LightList mShadowTextureCurrentCasterLightList;

			ev_private:
                //// Simple structure to hold CMovableObject map and a mutex to go with it.
                struct EV_GRAPHIC_DLL MovableObjectCollection
                {
                    EarthView::World::Graphic::CSceneManager::MovableObjectMap map;
                    EV_MUTEX(mutex)
                };
                typedef map<EVString, MovableObjectCollection *> MovableObjectCollectionMap;
                MovableObjectCollectionMap mMovableObjectCollectionMap;
                CNameGenerator mMovableNameGenerator;
                /** Gets the movable object collection for the given type name.
                @remarks
                This method create new collection if the collection does not exist.
                */
                MovableObjectCollection *getMovableObjectCollection(const EVString &typeName);
                /** Gets the movable object collection for the given type name.
                @remarks
                This method throw exception if the collection does not exist.
                */
                const MovableObjectCollection *getMovableObjectCollection(const EVString &typeName) const;
                //// Mutex over the collection of EarthView::World::Graphic::CMovableObject types
                EV_MUTEX(mMovableObjectCollectionMapMutex)
            protected:
                //// A pass designed to let us render shadow colour on white for texture shadows
                EarthView::World::Graphic::CPass *mShadowCasterPlainBlackPass;
                //// A pass designed to let us render shadow receivers for texture shadows
                EarthView::World::Graphic::CPass *mShadowReceiverPass;


            ev_internal:
                /// <summary>
                /// 初始化渲染队列
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void initRenderQueue();
                /** Internal method for turning a regular pass into a shadow caster pass.
                @remarks
                This is only used for texture shadows, basically we're trying to
                ensure that objects are rendered solid black.
                This method will usually return the standard solid black pass for
                all fixed function passes, but will merge in a vertex program
                and fudge the AutpoParamDataSource to set black lighting for
                passes with vertex programs.
                */
                virtual const EarthView::World::Graphic::CPass *deriveShadowCasterPass(const EarthView::World::Graphic::CPass *pass);
                /** Internal method for turning a regular pass into a shadow receiver pass.
                @remarks
                This is only used for texture shadows, basically we're trying to
                ensure that objects are rendered with a projective texture.
                This method will usually return a standard single-texture pass for
                all fixed function passes, but will merge in a vertex program
                for passes with vertex programs.
                */
                virtual const EarthView::World::Graphic::CPass *deriveShadowReceiverPass(const EarthView::World::Graphic::CPass *pass);
                /** Internal method to validate whether a EarthView::World::Graphic::CPass should be allowed to render.
                @remarks
                Called just before a pass is about to be used for rendering a group to
                allow the EarthView::World::Graphic::CSceneManager to omit it if required. A return value of false
                skips this pass.
                */
                virtual ev_bool validatePassForRendering(const EarthView::World::Graphic::CPass *pass);
                /** Internal method to validate whether a EarthView::World::Graphic::CRenderable should be allowed to render.
                @remarks
                Called just before a pass is about to be used for rendering a EarthView::World::Graphic::CRenderable to
                allow the EarthView::World::Graphic::CSceneManager to omit it if required. A return value of false
                skips it.
                */
                virtual ev_bool validateRenderableForRendering(const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CRenderable *rend);
                /* Internal utility method for creating the planes of a skybox.
                */
                virtual EarthView::World::Graphic::CMeshPtr createSkyboxPlane(EarthView::World::Graphic::CSceneManager::BoxPlane bp, Real distance, const EarthView::World::Spatial::Math::CQuaternion &orientation, const EVString &groupName);
                /* Internal utility method for creating the planes of a skydome.
                */
                virtual EarthView::World::Graphic::CMeshPtr createSkydomePlane(EarthView::World::Graphic::CSceneManager::BoxPlane bp, Real curvature, Real tiling, Real distance,
                                                    const EarthView::World::Spatial::Math::CQuaternion &orientation, ev_int32 xsegments, ev_int32 ysegments, ev_int32 ySegmentsToKeep,
                                                    const EVString &groupName);
            protected:
                typedef vector<EarthView::World::Graphic::CRenderQueueListener *> RenderQueueListenerList;
                RenderQueueListenerList mRenderQueueListeners;
				EarthView::World::Core::CRecursiveMutex mRenderQueueListenersLocker;

                typedef vector<EarthView::World::Graphic::CRenderObjectListener *> RenderObjectListenerList;
                RenderObjectListenerList mRenderObjectListeners;
				EarthView::World::Core::CRecursiveMutex mRenderObjectListenersLocker;

				EV_MUTEX(mListenersMutex)
                typedef vector<EarthView::World::Graphic::CSceneManager::CSceneManagerListener *> ListenerList;
                ListenerList mListeners;

                /// Flag indicating whether SceneNodes will be rendered as a set of 3 axes
                ev_bool mDisplayNodes;
                EarthView::World::Graphic::CSceneManager::AnimationList mAnimationsList;
                EV_MUTEX(mAnimationsListMutex)
                CAnimationStateSet mAnimationStates;

                /** Flag that indicates if all of the scene node's bounding boxes should be shown as a wireframe. */
                ev_bool mShowBoundingBoxes;


            ev_internal:
                /** Internal method used by _renderSingleObject to deal with renderables
                which override the camera's own view / projection materices. */
                virtual void useRenderableViewProjMode(const EarthView::World::Graphic::CRenderable *pRend, ev_bool fixedFunction);
                /** Internal method used by _renderSingleObject to deal with renderables
                which override the camera's own view / projection matrices. */
                virtual void resetViewProjMode(ev_bool fixedFunction);
                //// Internal method for firing the queue start event
                virtual void firePreRenderQueues();
                //// Internal method for firing the queue end event
                virtual void firePostRenderQueues();
                //// Internal method for firing the queue start event, returns true if queue is to be skipped
                virtual ev_bool fireRenderQueueStarted(ev_uint8 id, const EVString &invocation);
                //// Internal method for firing the queue end event, returns true if queue is to be repeated
                virtual ev_bool fireRenderQueueEnded(ev_uint8 id, const EVString &invocation);
                //// Internal method for firing when rendering a single object.
                virtual void fireRenderSingleObjectStarted(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source,
                                                    const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges);
                virtual void fireRenderSingleObjectEnd(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source,
                    const EarthView::World::Graphic::LightList *pLightList, ev_bool suppressRenderStateChanges);
                //// Internal method for firing the texture shadows updated event
                virtual void fireShadowTexturesUpdated(ev_size_t numberOfShadowTextures);
                //// Internal method for firing the pre caster texture shadows event
                virtual void fireShadowTexturesPreCaster(EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *camera, ev_size_t iteration);
                //// Internal method for firing the pre receiver texture shadows event
                virtual void fireShadowTexturesPreReceiver(EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CFrustum *f);
                ///zxt add for v1.8
                //// Internal method for firing pre update scene graph event
                virtual ev_void firePreUpdateSceneGraph(EarthView::World::Graphic::CCamera *camera);
                //// Internal method for firing post update scene graph event
                virtual ev_void firePostUpdateSceneGraph(EarthView::World::Graphic::CCamera *camera);
                //// Internal method for firing find visible objects event
                virtual void firePreFindVisibleObjects(EarthView::World::Graphic::CViewport *v);
                //// Internal method for firing find visible objects event
                virtual void firePostFindVisibleObjects(EarthView::World::Graphic::CViewport *v);
                //// Internal method for firing destruction event
                virtual void fireSceneManagerDestroyed();
                /** Internal method for setting the destination viewport for the next render. */
                virtual void setViewport(EarthView::World::Graphic::CViewport *vp);
                virtual void renderVisibleObjectsDefaultSequence();
                virtual void renderVisibleObjectsCustomSequence(EarthView::World::Graphic::CRenderQueueInvocationSequence *s);
                /** Internal method for preparing the render queue for use with each render. */
                virtual void prepareRenderQueue();

                /** Internal utility method for rendering a single object.
                @remarks
                Assumes that the pass has already been set up.
                @param rend The renderable to issue to the pipeline
                @param pass The pass which is being used
                @param lightScissoringClipping If true, passes that have the getLightScissorEnabled
                and/or getLightClipPlanesEnabled flags will cause calculation and setting of
                scissor rectangle and user clip planes.
                @param doLightIteration If true, this method will issue the renderable to
                the pipeline possibly multiple times, if the pass indicates it should be
                done once per light
                @param manualLightList Only applicable if doLightIteration is false, this
                method allows you to pass in a previously determined set of lights
                which will be used for a single render of this object.
                */
                virtual void renderSingleObject(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass,
                                                ev_bool lightScissoringClipping, ev_bool doLightIteration, const EarthView::World::Graphic::LightList *manualLightList);
                virtual void renderSingleObject(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass,
                                                ev_bool lightScissoringClipping, ev_bool doLightIteration);
                /** Internal method for creating the EarthView::World::Graphic::CAutoParamDataSource instance. */
                virtual _extfree EarthView::World::Graphic::CAutoParamDataSource *createAutoParamDataSource() const;

				EarthView::World::Graphic::CAutoParamDataSource * getAutoParamDataSource() const{return mAutoParamDataSource;}
            protected:
                //// Utility class for calculating automatic parameters for gpu programs				
                EarthView::World::Graphic::CAutoParamDataSource *mAutoParamDataSource;
                EarthView::World::Graphic::CCompositorChain *mActiveCompositorChain;
                ev_bool mLateMaterialResolving;
                EarthView::World::Graphic::ShadowTechnique mShadowTechnique;
                ev_bool mDebugShadows;
                EarthView::World::Graphic::CColourValue mShadowColour;
                EarthView::World::Graphic::CPass *mShadowDebugPass;
                EarthView::World::Graphic::CPass *mShadowStencilPass;
                EarthView::World::Graphic::CPass *mShadowModulativePass;
                ev_bool mShadowMaterialInitDone;
                CHardwareIndexBufferSharedPtr mShadowIndexBuffer;
                ev_size_t mShadowIndexBufferSize;
                CRectangle2D *mFullScreenQuad;
                Real mShadowDirLightExtrudeDist;
                IlluminationRenderStage mIlluminationStage;
                ShadowTextureConfigList mShadowTextureConfigList;
                ev_bool mShadowTextureConfigDirty;
                ShadowTextureList mShadowTextures;
                EarthView::World::Graphic::CTexturePtr mNullShadowTexture;
                typedef vector<EarthView::World::Graphic::CCamera *> ShadowTextureCameraList;
                ShadowTextureCameraList mShadowTextureCameras;
                CTexture *mCurrentShadowTexture;
                ev_bool mShadowUseInfiniteFarPlane;
                ev_bool mShadowCasterRenderBackFaces;
                ev_bool mShadowAdditiveLightClip;

				EarthView::World::Graphic::CTexturePtr mSoftShadowTexureArray[8];
				EarthView::World::Graphic::CTexturePtr mTempSoftShadowTexureArray[8];
				EarthView::World::Graphic::CTexturePtr mTempSoftShadowTexure;
				EarthView::World::Graphic::CTexturePtr mTempSoftShadowTexure64;
				EVString mSoftShadowTexureName;
			    ShadowMapGround* mShadowGround;
				ShadowFullScreenQuad* mShadowFullScreenQuad;
				EarthView::World::Graphic::CSceneManager* mFullScreenSceneManager;
				EarthView::World::Graphic::CCamera* mFullScreenSceneCamera;
				EarthView::World::Spatial::Math::CMatrix4  mShadowProjMatrix[8]; 
				int mCascadePartitionsZeroToOne[8];
				ev_uint8 mCascadePartitionsDistance[8];
				float mCascadePartitionsPercent;
				float mCascadeEyeSpaceDepthArray[8];
				float mSoftShadowNearClip[8];
				float mSoftShadowFarClip[8];
				ev_uint8 mCurrentClipIndex;
				bool mIsUseSoftShadowFitToCascadesMode;
				bool mIsUseSoftShadowTechnique;
				int mCascadeCount;
				EarthView::World::Graphic::PixelFormat mOffsetFormat;
				bool mHasShadowCasterInFrustum;
				Real mSoftShadowLightBleedPower;
				Real mSoftShadowDepthOffset;
				float mSoftShadowNormalFactor;
				
				EarthView::World::Graphic::ShadowTechnique mOldShadowTechnique;

				virtual void CaculateShadowProjMatrix(EarthView::World::Graphic::CCamera* eyeCam,EarthView::World::Graphic::CCamera* lightCam);

                //// Struct for cacheing light clipping information for re-use in a frame
                class  LightClippingInfo : public EarthView::World::Core::CBaseObject
                {
                public:
                    EarthView::World::Graphic::RealRect scissorRect;
                    EarthView::World::Spatial::Math::PlaneList clipPlanes;
                    ev_bool scissorValid;
                    ev_uint32 clipPlanesValid;
                    LightClippingInfo();
                };
                typedef map<EarthView::World::Graphic::CLight *, LightClippingInfo> LightClippingInfoMap;
                LightClippingInfoMap mLightClippingInfoMap;
                ev_uint32 mLightClippingInfoMapFrameNumber;
                //// default shadow camera setup
                EarthView::World::Graphic::ShadowCameraSetupPtr mDefaultShadowCameraSetup;
            protected:
                typedef set<EarthView::World::Graphic::CInstanceManager *>		InstanceManagerSet;
                InstanceManagerSet mDirtyInstanceManagers;
                InstanceManagerSet mDirtyInstanceMgrsTmp;
				EarthView::World::Core::CRecursiveMutex mDirtyInstanceManagerLock;
                /** Updates all instance managaers with dirty instance batches. @see _addDirtyInstanceManager */
                ev_void updateDirtyInstanceManagers();
            ev_internal:
                /** Internal method for locating a list of lights which could be affecting the frustum.
                @remarks
                Custom scene managers are encouraged to override this method to make use of their
                scene partitioning scheme to more efficiently locate lights, and to eliminate lights
                which may be occluded by word geometry.
                */
                virtual void findLightsAffectingFrustum(const EarthView::World::Graphic::CCamera *camera);
                //// Internal method for setting up materials for shadows
                virtual void initShadowVolumeMaterials();
                //// Internal method for creating shadow textures (texture-based shadows)
                virtual void ensureShadowTexturesCreated();
                //// Internal method for destroying shadow textures (texture-based shadows)
                virtual void destroyShadowTextures();


            public:
                /// <summary>
                /// 准备阴影纹理                
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <param name="vp">视口</param>
                /// <param name="lightList">光源列表，默认为空</param>
                /// <returns></returns>
                virtual void prepareShadowTextures(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::LightList *lightList);
                virtual void prepareShadowTextures(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CViewport *vp);

	
				virtual ev_void setImageDefaultMaterial(const EarthView::World::Graphic::CMaterialPtr& matPtr);
				virtual ev_void setImageUseDefaultMaterial(const ev_bool& useDefaultMat);
				virtual EarthView::World::Spatial::Math::CVector3 getSunPosition();
				virtual ev_void setAtmosphereVisible(const ev_bool& visible);
				virtual ev_void storeAtmosphereVisibleState();
				virtual ev_void restoreAtmosphereVisibleState();
				virtual ev_void setSunVisible(ev_bool flag);

                /// <summary>
                /// 内部环境类
                /// 存储内部数据来暂停或者恢复渲染
                /// 原来为struct
                /// </summary>
                class EV_GRAPHIC_DLL RenderContext : public EarthView::World::Core::CBaseObject
                {
                public:
                    RenderContext();
                    EarthView::World::Graphic::CRenderQueue *renderQueue;
                    EarthView::World::Graphic::CViewport *viewport;
                    EarthView::World::Graphic::CCamera *camera;
                    EarthView::World::Graphic::CCompositorChain *activeChain;
                    EarthView::World::Graphic::CRenderSystem::RenderSystemContext *rsContext;
                ev_private:
                    RenderContext(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 暂停渲染                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CSceneManager::RenderContext *_pauseRendering();
                /// <summary>
                /// 继续渲染                
                /// </summary>
                /// <param name="context">渲染环境</param>
                /// <returns></returns>
                virtual void _resumeRendering(EarthView::World::Graphic::CSceneManager::RenderContext *context);

                class EV_GRAPHIC_DLL ShadowCasterList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ShadowCasterList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CShadowCaster *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                private:
                    InternalList mList;
                public:
                    ShadowCasterList() {}
                    void push_back(EarthView::World::Graphic::CShadowCaster *const &ref_t)
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
                    EarthView::World::Graphic::CShadowCaster*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CShadowCaster *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CShadowCaster*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CShadowCaster *const &at(ev_size_t n) const
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
                ///protected:
                ///	typedef vector<EarthView::World::Graphic::CShadowCaster*> EarthView::World::Graphic::CSceneManager::ShadowCasterList;
            ev_internal:

                /// <summary>
                /// 阴影投射场景询问监听器
                /// 内部类
                /// </summary>
                class EV_GRAPHIC_DLL CShadowCasterSceneQueryListener : public EarthView::World::Graphic::CSceneQueryListener
                {
                protected:
                    EarthView::World::Graphic::CSceneManager *mSceneMgr;
                    EarthView::World::Graphic::CSceneManager::ShadowCasterList *mCasterList;
                    ev_bool mIsLightInFrustum;
                    const EarthView::World::Spatial::Math::PlaneBoundedVolumeList *mLightClipVolumeList;
                    const EarthView::World::Graphic::CCamera *mCamera;
                    const EarthView::World::Graphic::CLight *mLight;
                    Real mFarDistSquared;
                public:
                    CShadowCasterSceneQueryListener(EarthView::World::Graphic::CSceneManager *sm);
                    void prepare(ev_bool lightInFrustum,
                                 const EarthView::World::Spatial::Math::PlaneBoundedVolumeList *lightClipVolumes,
                                 const EarthView::World::Graphic::CLight *light, const EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CSceneManager::ShadowCasterList *casterList,
                                 Real farDistSquared);
                    ev_bool queryResult(EarthView::World::Graphic::CMovableObject *object);
                    ev_bool queryResult(EarthView::World::Graphic::CSceneQuery::WorldFragment *fragment);
                ev_private:
                    CShadowCasterSceneQueryListener(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 将阴影锥绘制到模板缓冲
                /// 内部方法
                /// </summary>
                /// <param name="light">光源</param>
                /// <param name="cam">摄像机</param>
                /// <param name="calcScissor">是否对方法进行修改，如果为false，则已经被修改</param>
                /// <returns></returns>
                virtual void renderShadowVolumesToStencil(const EarthView::World::Graphic::CLight *light, const EarthView::World::Graphic::CCamera *cam, ev_bool calcScissor);
                
				/// <summary>
				/// 设置阴影锥使用模板缓冲的参数                
				/// </summary>
				/// <param name="context">渲染环境</param>
				/// <returns></returns>
                virtual void setShadowVolumeStencilState(ev_bool secondpass, ev_bool zfail, ev_bool twosided);

            protected:
                /** Render a set of shadow renderables. */
                void renderShadowVolumeObjects(CShadowCaster::ShadowRenderableListIterator iShadowRenderables,
                                               EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::LightList *manualLightList, ev_uint32 flags,
                                               ev_bool secondpass, ev_bool zfail, ev_bool twosided);

                EarthView::World::Graphic::CSceneManager::ShadowCasterList mShadowCasterList;
                EarthView::World::Graphic::CSphereSceneQuery *mShadowCasterSphereQuery;
                EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *mShadowCasterAABBQuery;
                Real mDefaultShadowFarDist;
                Real mDefaultShadowFarDistSquared;
                Real mShadowTextureOffset; 			/// proportion of texture offset in view direction e.g. 0.4
                Real mShadowTextureFadeStart; 			/// as a proportion e.g. 0.6
                Real mShadowTextureFadeEnd; 			/// as a proportion e.g. 0.9
                ev_bool mShadowTextureSelfShadow;

				Real mRRatio;
				Real mGRatio;
				Real mBRatio;

                EarthView::World::Graphic::CPass *mShadowTextureCustomCasterPass;
                EarthView::World::Graphic::CPass *mShadowTextureCustomReceiverPass;
                ///zxt add for v1.8
                EVString mShadowTextureCustomCasterVertexProgram;
                EVString mShadowTextureCustomCasterFragmentProgram;
                EVString mShadowTextureCustomReceiverVertexProgram;
                EVString mShadowTextureCustomReceiverFragmentProgram;
                GpuProgramParametersSharedPtr mShadowTextureCustomCasterVPParams;
                ///zxt add for v1.8
                GpuProgramParametersSharedPtr mShadowTextureCustomCasterFPParams;
                GpuProgramParametersSharedPtr mShadowTextureCustomReceiverVPParams;
                GpuProgramParametersSharedPtr mShadowTextureCustomReceiverFPParams;
                //// Visibility mask used to show / hide objects
                ev_uint32 mVisibilityMask;
                ev_bool mFindVisibleObjects;
                //// Suppress render state changes?
                ev_bool mSuppressRenderStateChanges;
                //// Suppress shadows?
                ev_bool mSuppressShadows;

                GpuProgramParametersSharedPtr mInfiniteExtrusionParams;
                GpuProgramParametersSharedPtr mFiniteExtrusionParams;
                CShadowCasterSceneQueryListener *mShadowCasterQueryListener;
            ev_internal:
                /** Internal method for locating a list of shadow casters which
                could be affecting the frustum for a given light.
                @remarks
                Custom scene managers are encouraged to override this method to add optimisations,
                and to add their own custom shadow casters (perhaps for world geometry)
                */
                virtual const EarthView::World::Graphic::CSceneManager::ShadowCasterList &findShadowCastersForLight(const EarthView::World::Graphic::CLight *light, const EarthView::World::Graphic::CCamera *camera);
                /** Render a group in the ordinary way */
                virtual void renderBasicQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *pGroup,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group with the added complexity of additive stencil shadows. */
                virtual void renderAdditiveStencilShadowedQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group with the added complexity of modulative stencil shadows. */
                virtual void renderModulativeStencilShadowedQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group rendering only shadow casters. */
                virtual void renderTextureShadowCasterQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group rendering only shadow receivers. */
                virtual void renderTextureShadowReceiverQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group with the added complexity of modulative texture shadows. */
                virtual void renderModulativeTextureShadowedQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a group with additive texture shadows. */
                virtual void renderAdditiveTextureShadowedQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Render a set of objects, see renderSingleObject for param definitions */
                ///virtual void renderObjects(const EarthView::World::Graphic::CQueuedRenderableCollection& objs,
                ///	EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                ///	ev_bool doLightIteration, const EarthView::World::Graphic::LightList* manualLightList = 0);
                virtual void renderObjects(const EarthView::World::Graphic::CQueuedRenderableCollection &objs,
                                           EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                                           ev_bool doLightIteration, const EarthView::World::Graphic::LightList *manualLightList);
                virtual void renderObjects(const EarthView::World::Graphic::CQueuedRenderableCollection &objs,
                                           EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                                           ev_bool doLightIteration);
                /** Render those objects in the transparent pass list which have shadow casting forced on
                @remarks
                This function is intended to be used to render the shadows of transparent objects which have
                transparency_casts_shadows set to 'on' in their material
                */
                ///virtual void renderTransparentShadowCasterObjects(const EarthView::World::Graphic::CQueuedRenderableCollection& objs,
                ///	EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                ///	ev_bool doLightIteration, const EarthView::World::Graphic::LightList* manualLightList = 0);
                virtual void renderTransparentShadowCasterObjects(const EarthView::World::Graphic::CQueuedRenderableCollection &objs,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                        ev_bool doLightIteration, const EarthView::World::Graphic::LightList *manualLightList);
                virtual void renderTransparentShadowCasterObjects(const EarthView::World::Graphic::CQueuedRenderableCollection &objs,
                        EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
                        ev_bool doLightIteration);
                /** Update the state of the global render queue splitting based on a shadow
                option change. */
                virtual void updateRenderQueueSplitOptions();
                /** Update the state of the render queue group splitting based on a shadow
                option change. */
                virtual void updateRenderQueueGroupSplitOptions(EarthView::World::Graphic::CRenderQueueGroup *group,
                        ev_bool suppressShadows, ev_bool suppressRenderState);
                //// Set up a scissor rectangle from a group of lights
                virtual EarthView::World::Graphic::ClipResult buildAndSetScissor(const EarthView::World::Graphic::LightList &ll, const EarthView::World::Graphic::CCamera *cam);
                //// Update a scissor rectangle from a single light
                virtual void buildScissor(const EarthView::World::Graphic::CLight *l, const EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::RealRect &rect);
                virtual void resetScissor();
                //// Build a set of user clip planes from a single non-directional light
                virtual EarthView::World::Graphic::ClipResult buildAndSetLightClip(const EarthView::World::Graphic::LightList &ll);
                virtual void buildLightClip(const EarthView::World::Graphic::CLight *l, EarthView::World::Spatial::Math::PlaneList &planes);
                virtual void resetLightClip();
                virtual void checkCachedLightClippingInfo();
            protected:
                //// The active renderable visitor class - subclasses could override this
                EarthView::World::Graphic::CSceneManager::CSceneMgrQueuedRenderableVisitor *mActiveQueuedRenderableVisitor;
                //// Storage for default renderable visitor
                EarthView::World::Graphic::CSceneManager::CSceneMgrQueuedRenderableVisitor mDefaultQueuedRenderableVisitor;
                //// Whether to use camera-relative rendering
                ev_bool mCameraRelativeRendering;
                EarthView::World::Spatial::Math::CMatrix4 mCachedViewMatrix;
                EarthView::World::Spatial::Math::CVector3 mCameraRelativePosition;
                //// Last light sets
                ev_uint32 mLastLightHash;
                ev_uint16 mLastLightLimit;
                ev_uint32 mLastLightHashGpuProgram;
                //// Gpu params that need rebinding (mask of GpuParamVariability)
                ev_uint16 mGpuParamsDirty;
            ev_internal:
                virtual void useLights(const EarthView::World::Graphic::LightList &lights, ev_uint16 limit);
                virtual void setViewMatrix(const EarthView::World::Spatial::Math::CMatrix4 &m);
                virtual void useLightsGpuProgram(const EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::LightList *lights);
                virtual void bindGpuProgram(EarthView::World::Graphic::CGpuProgram *prog);
                virtual void updateGpuProgramParameters(const EarthView::World::Graphic::CPass *p);
            protected:
                //// Set of registered lod listeners
                typedef set<EarthView::World::Graphic::CLodListener *> LodListenerSet;
                LodListenerSet mLodListeners;
                //// List of movable object lod changed events
                typedef vector<EarthView::World::Graphic::MovableObjectLodChangedEvent> MovableObjectLodChangedEventList;
                MovableObjectLodChangedEventList mMovableObjectLodChangedEvents;
                //// List of entity mesh lod changed events
                typedef vector<EarthView::World::Graphic::EntityMeshLodChangedEvent> EntityMeshLodChangedEventList;
                EntityMeshLodChangedEventList mEntityMeshLodChangedEvents;
                //// List of entity material lod changed events
                typedef vector<EarthView::World::Graphic::EntityMaterialLodChangedEvent> EntityMaterialLodChangedEventList;
                EntityMaterialLodChangedEventList mEntityMaterialLodChangedEvents;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CSceneManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="instanceName">实例名称</param>
                /// <returns></returns>
                CSceneManager(const EVString &instanceName);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CSceneManager();
            ev_private:
                /** Mutex to protect the scene graph from simultaneous access from
                multiple threads.
                @remarks
                If you are updating the scene in a separate thread from the rendering
                thread, then you should lock this mutex before making any changes to
                the scene graph - that means creating, modifying or deleting a
                scene node, or attaching / detaching objects. It is <b>your</b>
                responsibility to take out this lock, the detail methods on the nodes
                will not do it for you (for the reasons discussed below).
                @par
                Note that locking this mutex will prevent the scene being rendered until
                it is unlocked again. Therefore you should do this sparingly. Try
                to create any objects you need separately and fully prepare them
                before doing all your scene graph work in one go, thus keeping this
                lock for the shortest time possible.
                @note
                A single global lock is used rather than a per-node lock since
                it keeps the number of locks required during rendering down to a
                minimum. Obtaining a lock, even if there is no contention, is not free
                so for performance it is good to do it as little as possible.
                Since modifying the scene in a separate thread is a fairly
                rare occurrence (relative to rendering), it is better to keep the
                locking required during rendering lower than to make update locks
                more granular.
                */
                EV_MUTEX(sceneGraphMutex);
            public:
                /// <summary>
                /// 获取场景管理中的实例名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称值</returns>
                const EVString &getName() const;
                /// <summary>
                /// 获取场景管理器的类型名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称值</returns>
                virtual EVString getTypeName() const;
                /// <summary>
                /// 创建摄像机                
                /// </summary>
                /// <param name="name">新名称</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CCamera *createCamera(const EVString &name);
                /// <summary>
                /// 通过摄像机名称获得摄像机
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>名称值</returns>
                virtual EarthView::World::Graphic::CCamera *getCamera(const EVString &name) const;
                /// <summary>
                /// 判断指定名称的摄像机是否存在
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>成功，返回此名称，不成功，返回空</returns>
                virtual ev_bool hasCamera(const EVString &name) const;
                /// <summary>
                /// 通过指针删除场景中的摄像机
                /// </summary>
                /// <param name="cam">指向摄像机的指针</param>
                /// <returns></returns>
                virtual void destroyCamera(EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 通过名称删除场景中的摄像机
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual void destroyCamera(const EVString &name);
                /// <summary>
                /// 删除场景中的所有摄像机
                /// </summary>
                /// <param name="">名称</param>
                /// <returns></returns>
                virtual void destroyAllCameras();
                /// <summary>
                /// 创建光源
                /// 光源可以创建在固定点，或者挂接在场景节点
                /// </summary>
                /// <param name="name">新创建的光源名称</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CLight *createLight(const EVString &name);
                /// <summary>
                /// 创建光源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CLight *createLight();

				/// <summary>
				/// 获取由场景管理器创建的光源的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint16 getLightCount()const;

				/// <summary>
				/// 通过序号获取光源
				/// </summary>
				/// <param name="index">序号</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CLight *getLight(ev_uint16 index) const;
                /// <summary>
                /// 通过名称获取光源
                /// </summary>
                /// <param name="name">光源名称</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CLight *getLight(const EVString &name) const;

				/// <summary>
				/// 判断是否存在给定名称的光源
				/// </summary>
				/// <param name="name">光源名称</param>
				/// <returns></returns>
                virtual ev_bool hasLight(const EVString &name) const;

				/// <summary>
				/// 获取光源有效照射区域的裁剪面
				/// </summary>
				/// <param name="l">光源</param>
				/// <returns></returns>
                virtual const EarthView::World::Spatial::Math::PlaneList &getLightClippingPlanes(EarthView::World::Graphic::CLight *l);

				/// <summary>
				/// 设置光源和相机作用的裁剪矩形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual const EarthView::World::Graphic::RealRect &getLightScissorRect(EarthView::World::Graphic::CLight *l, const EarthView::World::Graphic::CCamera *cam);

				/// <summary>
				/// 销毁指定的光源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual void destroyLight(const EVString &name);                
                virtual void destroyLight(EarthView::World::Graphic::CLight *light);
				/// <summary>
				/// 销毁所有光源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual void destroyAllLights();

				virtual EVString getSoftShadowTexName() const;
				virtual EarthView::World::Graphic::CCamera* getShadowTexCam() const;						
				virtual EarthView::World::Spatial::Math::CMatrix4 getSoftShadowProjMatrix(ev_uint16 index) const;
				virtual EarthView::World::Spatial::Math::CVector4 getCascadeEyeSpaceDepthArray() const; 
				virtual float getSoftShadowNearClip(ev_uint8 index) const;
				virtual float getSoftShadowFarClip(ev_uint8 index) const;
				virtual bool getIsUseSoftShadowFitToCascadesMode() const;
				virtual void setIsUseSoftShadowFitToCascadesMode(bool flag);
				virtual ev_uint8 getCurrentClipIndex() const;
				virtual bool getIsUseSoftShadowTechnique() const;
				virtual void setIsUseSoftShadowTechnique(bool flag);
				virtual float getCascadePartitionsPercent() const;
				virtual void setCascadePartitionsPercent(float percent);
				virtual int getCascadePartitionsDistance(ev_uint8 index) const;
				virtual void setCascadePartitionsDistance(ev_uint8 index,ev_uint8 distance);
                virtual EarthView::World::Graphic::PixelFormat getSoftShadowOffsetFormat() const;
				virtual void checkShadowCasterInFrustum(EarthView::World::Graphic::CCamera *camera);
				virtual bool hasShadowCasterInFrustum() const;
				virtual Real getSoftShadowLightBleedPower() const;
				virtual ev_void setSoftShadowLightBleedPower(Real power);
				virtual Real getSoftShadowDepthOffset() const;
				virtual ev_void setSoftShadowDepthOffset(Real offset);
				virtual float getSoftShadowNormalFactor() const;
				virtual ev_void setSoftShadowNormalFactor(float factor);

				
				/** Advance method to increase the lights dirty counter due lights changed.
                @remarks
                Scene manager tracking lights that affecting the frustum, if changes
                detected (the changes includes light list itself and the light's position
                and attenuation range), then increase the lights dirty counter.
                @par
                For some reason, you can call this method to force whole scene objects
                re-populate their light list. But near in mind, call to this method
                will harm performance, so should avoid if possible.
                */
                virtual void _notifyLightsDirty();
                /** Advance method to gets the lights dirty counter.
                @remarks
                Scene manager tracking lights that affecting the frustum, if changes
                detected (the changes includes light list itself and the light's position
                and attenuation range), then increase the lights dirty counter.
                @par
                When implementing customise lights finding algorithm relied on either
                CSceneManager::_getLightsAffectingFrustum or CSceneManager::_populateLightList,
                might check this value for sure that the light list are really need to
                re-populate, otherwise, returns cached light list (if exists) for better
                performance.
                */
                ev_uint32 _getLightsDirtyCounter() const;
                /** Get the list of lights which could be affecting the frustum.
                @remarks
                Note that default implementation of this method returns a cached light list,
                which is populated when rendering the scene. So by default the list of lights
                is only available during scene rendering.
                */
                virtual const EarthView::World::Graphic::LightList &_getLightsAffectingFrustum() const;
                /** Populate a light list with an ordered set of the lights which are closest
                to the position specified.
                @remarks
                Note that since directional lights have no position, they are always considered
                closer than any point lights and as such will always take precedence.
                @par
                Subclasses of the default CSceneManager may wish to take into account other issues
                such as possible visibility of the light if that information is included in their
                data structures. This basic scenemanager simply orders by distance, eliminating
                those lights which are out of range or could not be affecting the frustum (i.e.
                only the lights returned by CSceneManager::_getLightsAffectingFrustum are take into
                account).
                @par
                The number of items in the list max exceed the maximum number of lights supported
                by the renderer, but the extraneous ones will never be used. In fact the limit will
                be imposed by CPass::getMaxSimultaneousLights.
                @param position The position at which to evaluate the list of lights
                @param radius The bounding radius to test
                @param destList List to be populated with ordered set of lights; will be cleared by
                this method before population.
                @param lightMask The mask with which to include / exclude lights
                */
                /*virtual void _populateLightList(const EarthView::World::Spatial::Math::CVector3& position, Real radius, LightList& destList, ev_uint32 lightMask = 0xFFFFFFFF);*/
                virtual void _populateLightList(const EarthView::World::Spatial::Math::CVector3 &position, Real radius, LightList &destList, ev_uint32 lightMask);
                virtual void _populateLightList(const EarthView::World::Spatial::Math::CVector3 &position, Real radius, LightList &destList);

				virtual ev_void showImage(ev_bool visible);
				virtual ev_bool getImageVisible() const;
				virtual ev_void showOcean(ev_bool visible);
				virtual ev_bool getOceanVisible()const;	
            public:
                /** Populates a light list with an ordered set of the lights which are closest
                to the position of the EarthView::World::Graphic::CSceneNode given.
                @remarks
                Note that since directional lights have no position, they are always considered
                closer than any point lights and as such will always take precedence.
                This overloaded version will take the EarthView::World::Graphic::CSceneNode's position and use the second method
                to populate the list.
                @par
                Subclasses of the default CSceneManager may wish to take into account other issues
                such as possible visibility of the light if that information is included in their
                data structures. This basic scenemanager simply orders by distance, eliminating
                those lights which are out of range or could not be affecting the frustum (i.e.
                only the lights returned by CSceneManager::_getLightsAffectingFrustum are take into
                account).
                @par
                Also note that subclasses of the CSceneNode might be used here to provide cached
                scene related data, accelerating the list population (for example light lists for
                SceneNodes could be cached inside subclassed CSceneNode objects).
                @par
                The number of items in the list may exceed the maximum number of lights supported
                by the renderer, but the extraneous ones will never be used. In fact the limit will
                be imposed by CPass::getMaxSimultaneousLights.
                @param sn The EarthView::World::Graphic::CSceneNode for which to evaluate the list of lights
                @param radius The bounding radius to test
                @param destList List to be populated with ordered set of lights; will be cleared by
                this method before population.
                @param lightMask The mask with which to include / exclude lights
                */
                /* virtual void _populateLightList(const EarthView::World::Graphic::CSceneNode* sn, Real radius, LightList& destList, ev_uint32 lightMask = 0xFFFFFFFF);*/
                virtual void _populateLightList(const EarthView::World::Graphic::CSceneNode *sn, Real radius, LightList &destList, ev_uint32 lightMask );
                virtual void _populateLightList(const EarthView::World::Graphic::CSceneNode *sn, Real radius, LightList &destList);
                
				/// <summary>
				/// 创建场景节点
				/// 如果不传递名称，则场景管理器会自动对其命名
				/// </summary>
				/// <param name="name">节点名称</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CSceneNode *createSceneNode();                
                virtual EarthView::World::Graphic::CSceneNode *createSceneNode(_in const EVString &name);

				/// <summary>
				/// 销毁场景节点				
				/// </summary>
				/// <param name="name">节点名称</param>
				/// <returns></returns>
                virtual void destroySceneNode(_in const EVString &name);               
                virtual void destroySceneNode(EarthView::World::Graphic::CSceneNode *sn);
                
				/// <summary>
				/// 获取根节点				
				/// </summary>
				/// <param name="name">节点名称</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CSceneNode *getRootSceneNode();
                
				/// <summary>
				/// 获取节点				
				/// </summary>
				/// <param name="name">节点名称</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CSceneNode *getSceneNode(_in const EVString &name) const;
                
				/// <summary>
				/// 判断是否存在给定名称的节点				
				/// </summary>
				/// <param name="name">节点名称</param>
				/// <returns></returns>
                virtual ev_bool hasSceneNode(_in const EVString &name) const;
                

				/// <summary>
				/// 创建模型实体				
				/// </summary>
				/// <param name="entityName">实体名称</param>
				/// <param name="meshName">mesh名称</param>
				/// <param name="subentityIndics">submesh部件序号集</param>
				/// <param name="groupName">mesh资源组名称</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EVString &meshName, const EarthView::World::Core::IntVector& subentityIndics, const EVString &groupName  );
				virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EVString &meshName, const EVString &groupName  );
                virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EVString &meshName,const EarthView::World::Core::IntVector& subentityIndics );
				virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EVString &meshName );
				virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EarthView::World::Graphic::CMeshPtr &pMesh,const EarthView::World::Core::IntVector& subentityIndics );
                virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, const EarthView::World::Graphic::CMeshPtr &pMesh );
				virtual EarthView::World::Graphic::CEntity *createEntity(const EarthView::World::Graphic::CMeshPtr &pMesh,const EarthView::World::Core::IntVector& subentityIndics);
                virtual EarthView::World::Graphic::CEntity *createEntity(const EarthView::World::Graphic::CMeshPtr &pMesh);
                virtual EarthView::World::Graphic::CEntity *createEntity(_in const EVString &meshName,const EarthView::World::Core::IntVector& subentityIndics);
				virtual EarthView::World::Graphic::CEntity *createEntity(_in const EVString &meshName);

                
                /// <summary>
                /// 组合图形渲染模型
                /// </summary>
                /// <returns></returns>
                enum PrefabType
                {
                    PT_PLANE,
                    PT_CUBE,
                    PT_SPHERE
                };
                
                /// <summary>
                /// 通过图形创建实体
                /// </summary>
                /// <param name="entityName">实体名称</param>
                /// <param name="ptype">几何类型</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CEntity *createEntity(const EVString &entityName, EarthView::World::Graphic::CSceneManager::PrefabType ptype);               
                virtual EarthView::World::Graphic::CEntity *createEntity(EarthView::World::Graphic::CSceneManager::PrefabType ptype);


				/// <summary>
				/// 获取给定名称的实体				
				/// </summary>
				/// <param name="name">实体名称</param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CEntity *getEntity(_in const EVString &name) const;
				/// <summary>
				/// 判断给定名称的实体是否存在				
				/// </summary>
				/// <param name="name">实体名称</param>				
				/// <returns></returns>
                virtual ev_bool hasEntity(_in const EVString &name) const;
				/// <summary>
				/// 销毁实体				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void destroyEntity(EarthView::World::Graphic::CEntity *ent);               
                virtual void destroyEntity(_in const EVString &name);
                
				/// <summary>
				/// 销毁所有实体				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void destroyAllEntities();

                /** Create a EarthView::World::Graphic::CManualObject, an object which you populate with geometry
                manually through a GL immediate-mode style interface.
                @param
                name The name to be given to the object (must be unique).
                */
                virtual EarthView::World::Graphic::CManualObject *createManualObject(_in const EVString &name);
                /** Create a EarthView::World::Graphic::CManualObject, an object which you populate with geometry
                manually through a GL immediate-mode style interface, generating the name.
                */
                virtual EarthView::World::Graphic::CManualObject *createManualObject();
                /** Retrieves a pointer to the named EarthView::World::Graphic::CManualObject.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CManualObject *getManualObject(_in const EVString &name) const;
                /** Returns whether a manual object with the given name exists.
                */
                virtual ev_bool hasManualObject(_in const EVString &name) const;
                /** Removes & destroys a EarthView::World::Graphic::CManualObject from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyManualObject(EarthView::World::Graphic::CManualObject *obj);
                /** Removes & destroys a EarthView::World::Graphic::CManualObject from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyManualObject(_in const EVString &name);
                /** Removes & destroys all ManualObjects from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyAllManualObjects();
                /** Create a EarthView::World::Graphic::CBillboardChain, an object which you can use to render
                a linked chain of billboards.
                @param
                name The name to be given to the object (must be unique).
                */
				virtual ev_bool usingWebMercator() const;
                virtual EarthView::World::Graphic::CBillboardChain *createBillboardChain(_in const EVString &name);
                /** Create a EarthView::World::Graphic::CBillboardChain, an object which you can use to render
                a linked chain of billboards, with a generated name.
                */
                virtual EarthView::World::Graphic::CBillboardChain *createBillboardChain();
                /** Retrieves a pointer to the named EarthView::World::Graphic::CBillboardChain.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CBillboardChain *getBillboardChain(const EVString &name) const;
                /** Returns whether a billboard chain with the given name exists.
                */
                virtual ev_bool hasBillboardChain(const EVString &name) const;
                /** Removes & destroys a EarthView::World::Graphic::CBillboardChain from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyBillboardChain(EarthView::World::Graphic::CBillboardChain *obj);
                /** Removes & destroys a EarthView::World::Graphic::CBillboardChain from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyBillboardChain(const EVString &name);
                /** Removes & destroys all BillboardChains from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyAllBillboardChains();
                /** Create a EarthView::World::Graphic::CRibbonTrail, an object which you can use to render
                a linked chain of billboards which follows one or more nodes.
                @param
                name The name to be given to the object (must be unique).
                */
                virtual EarthView::World::Graphic::CRibbonTrail *createRibbonTrail(const EVString &name);
                /** Create a EarthView::World::Graphic::CRibbonTrail, an object which you can use to render
                a linked chain of billboards which follows one or more nodes, generating the name.
                */
                virtual EarthView::World::Graphic::CRibbonTrail *createRibbonTrail();
                /** Retrieves a pointer to the named EarthView::World::Graphic::CRibbonTrail.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CRibbonTrail *getRibbonTrail(const EVString &name) const;
                /** Returns whether a ribbon trail with the given name exists.
                */
                virtual ev_bool hasRibbonTrail(const EVString &name) const;
                /** Removes & destroys a EarthView::World::Graphic::CRibbonTrail from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyRibbonTrail(EarthView::World::Graphic::CRibbonTrail *obj);
                /** Removes & destroys a EarthView::World::Graphic::CRibbonTrail from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyRibbonTrail(const EVString &name);
                /** Removes & destroys all RibbonTrails from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyAllRibbonTrails();

                /** Creates a particle system based on a template.
                @remarks
                This method creates a new EarthView::World::Graphic::CParticleSystem instance based on the named template
                (defined through CParticleSystemManager::createTemplate) and returns a
                pointer to the caller. The caller should not delete this object, it will be freed at system shutdown,
                @par
                Each system created from a template takes the template's settings at the time of creation,
                but is completely separate from the template from there on.
                @par
                Creating a particle system does not make it a part of the scene. As with other EarthView::World::Graphic::CMovableObject
                subclasses, a CParticleSystem is not rendered until it is attached to a CSceneNode.
                @par
                This is probably the more useful particle system creation method since it does not require manual
                setup of the system. Note that the initial quota is based on the template but may be changed later.
                @param
                name The name to give the new particle system instance.
                @param
                templateName The name of the template to base the new instance on.
                */
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(const EVString &name, const EVString &templateName);
                /** Create a blank particle system.
                @remarks
                This method creates a new, blank EarthView::World::Graphic::CParticleSystem instance and returns a pointer to it.
                The caller should not delete this object, it will be freed at system shutdown, or can
                @par
                The instance returned from this method won't actually do anything because on creation a
                particle system has no emitters. The caller should manipulate the instance through it's
                EarthView::World::Graphic::CParticleSystem methods to actually create a real particle effect.
                @par
                Creating a particle system does not make it a part of the scene. As with other EarthView::World::Graphic::CMovableObject
                subclasses, a CParticleSystem is not rendered until it is attached to a CSceneNode.
                @param
                name The name to give the EarthView::World::Graphic::CParticleSystem.
                @param
                quota The maximum number of particles to allow in this system.
                @param
                resourceGroup The resource group which will be used to load dependent resources
                */
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(const EVString &name, ev_size_t quota , const EVString &resourceGroup );
                /*virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(const EVString& name,ev_size_t quota = 500, const EVString& resourceGroup = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);*/
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(const EVString &name, ev_size_t quota );
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(const EVString &name);
            public:
                /** Create a blank particle system with a generated name.
                @remarks
                This method creates a new, blank EarthView::World::Graphic::CParticleSystem instance and returns a pointer to it.
                The caller should not delete this object, it will be freed at system shutdown, or can
                @par
                The instance returned from this method won't actually do anything because on creation a
                particle system has no emitters. The caller should manipulate the instance through it's
                EarthView::World::Graphic::CParticleSystem methods to actually create a real particle effect.
                @par
                Creating a particle system does not make it a part of the scene. As with other EarthView::World::Graphic::CMovableObject
                subclasses, a CParticleSystem is not rendered until it is attached to a CSceneNode.
                @param
                quota The maximum number of particles to allow in this system.
                @param
                resourceGroup The resource group which will be used to load dependent resources
                */
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(ev_size_t quota, const EVString &resourceGroup);
                /*	virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(ev_size_t quota = 500, const EVString& resourceGroup = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);*/
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem(ev_size_t quota);
                virtual EarthView::World::Graphic::CParticleSystem *createParticleSystem();
                /** Retrieves a pointer to the named EarthView::World::Graphic::CParticleSystem.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CParticleSystem *getParticleSystem(const EVString &name) const;
                /** Returns whether a particle system with the given name exists.
                */
                virtual ev_bool hasParticleSystem(const EVString &name) const;
                /** Removes & destroys a EarthView::World::Graphic::CParticleSystem from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyParticleSystem(EarthView::World::Graphic::CParticleSystem *obj);
                /** Removes & destroys a EarthView::World::Graphic::CParticleSystem from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyParticleSystem(const EVString &name);
                /** Removes & destroys all ParticleSystems from the EarthView::World::Graphic::CSceneManager.
                */
                virtual void destroyAllParticleSystems();

                /// <summary>
                /// 清空场景
                /// 清空场景中场景节点，光源等
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void clearScene();
                /// <summary>
                /// 设置环境光
                /// 缺省的环境光是CColourValue::Black
                /// </summary>
                /// <param name="colour"></param>
                /// <returns></returns>
                void setAmbientLight(const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获取环境光
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getAmbientLight() const;
                
                
                virtual void prepareWorldGeometry(const EVString &filename);                
                virtual void prepareWorldGeometry(EarthView::World::Core::DataStreamPtr &stream, const EVString &typeName);
                virtual void prepareWorldGeometry(EarthView::World::Core::DataStreamPtr &stream);                
                virtual void setWorldGeometry(const EVString &filename);                
                virtual void setWorldGeometry(EarthView::World::Core::DataStreamPtr &stream, const EVString &typeName);                
                virtual void setWorldGeometry(EarthView::World::Core::DataStreamPtr &stream);                
                virtual ev_size_t estimateWorldGeometry(const EVString &filename);                
                virtual ev_size_t estimateWorldGeometry(EarthView::World::Core::DataStreamPtr &stream, const EVString &typeName);
                virtual ev_size_t estimateWorldGeometry(EarthView::World::Core::DataStreamPtr &stream);
                
				/// <summary>
                /// 从场景管理获取一个推荐的观察点
                /// 通常这个方法返回原点，除非设定了坐标系或者世界坐标系推荐了起始点，如果有多于一个的推荐点，返回第一个。
                /// </summary>
                /// <param name="random">如果为真，将随机返回一个</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint(ev_bool random);
                virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint();
                /// <summary>
                /// 为场景设定一个特殊实现的选项
                /// </summary>
                /// <param name="strKey">设置的名称</param>
                /// <param name="pValue">通过键值场景管理合理计算大小</param>
                /// <returns>成功返回true,失败返回false</returns>
                virtual ev_bool setOption( const EVString &strKey, const void *pValue );
                /// <summary>
                /// 确认场景是否有一个特殊实现的选项
                /// </summary>
                /// <param name="strKey">设置的名称</param>
                /// <param name="pValue">指针</param>
                /// <returns>成功返回设置的选项,失败返回pDestValue，其值设置为空</returns>
                virtual ev_bool getOption( const EVString &strKey, void *pDestValue );
                /** Method for verifying wether the scene manager has an implementation-specific
                option.
                @param
                strKey The name of the option to check for.
                @return
                If the scene manager contains the given option, true is returned.
                @remarks
                If it does not, false is returned.
                */
                virtual ev_bool hasOption( const EVString &strKey ) const;
                /** Method for getting all possible values for a specific option. When this list is too large
                (i.e. the option expects, for example, a ev_real32), the return value will be true, but the
                list will contain just one element whose size will be set to 0.
                Otherwise, the list will be filled with all the possible values the option can
                accept.
                @param
                strKey The name of the option to get the values for.
                @param
                refValueList A reference to a list that will be filled with the available values.
                @return
                On success (the option exists), true is returned.
                @par
                On failure, false is returned.
                */
                virtual ev_bool getOptionValues( const EVString &strKey, EarthView::World::Core::StringVector &refValueList );
                /** Method for getting all the implementation-specific options of the scene manager.
                @param
                refKeys A reference to a list that will be filled with all the available options.
                @return
                On success, true is returned. On failiure, false is returned.
                */
                virtual ev_bool getOptionKeys( EarthView::World::Core::StringVector &refKeys );
                
				/// <summary>
				/// 更新场景图
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _updateSceneGraph(EarthView::World::Graphic::CCamera *cam);
                
				/// <summary>
				/// 查找可见对象
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds, ev_bool onlyShadowCasters);
                
				/// <summary>
				/// 应用场景节点动画
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _applySceneAnimations();
               
				/// <summary>
				/// 渲染可见对象
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _renderVisibleObjects();
                
				/// <summary>
				/// 渲染场景
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _renderScene(EarthView::World::Graphic::CCamera *camera, EarthView::World::Graphic::CViewport *vp, ev_bool includeOverlays);
                /** Internal method for queueing the sky objects with the params as
                previously set through setSkyBox, setSkyPlane and setSkyDome.
                */
                virtual void _queueSkiesForRendering(EarthView::World::Graphic::CCamera *cam);
                /** Notifies the scene manager of its destination render system
                @remarks
                Called automatically by CRenderSystem::addSceneManager
                this method simply notifies the manager of the render
                system to which its output must be directed.
                @param
                sys Pointer to the CRenderSystem subclass to be used as a render target.
                */
                virtual void _setDestinationRenderSystem(EarthView::World::Graphic::CRenderSystem *ref_sys);
            public:
                /// <summary>
                /// 设置是否启用一个天空平面
                /// </summary>
                /// <param name="enable">ture为启用，false为不启用</param>
                /// <param name="plane">平面的细节描述，它到摄像机的距离</param>
                /// <param name="materialName">天空使用材质的名称</param>
                /// <param name="scale">比例变换以适应天空平面</param>
                /// <param name="tiling">指针</param>
                /// <param name="drawFirst">指针</param>
                /// <param name="bow">指针</param>
                /// <param name="xsegments">指针</param>
                /// <param name="ysegments">指针</param>
                /// <param name="groupName">指针</param>
                /// <returns></returns>
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling, ev_bool drawFirst, Real bow, ev_int32 xsegments, ev_int32 ysegments, const EVString &groupName);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling, ev_bool drawFirst, Real bow, ev_int32 xsegments, ev_int32 ysegments);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling, ev_bool drawFirst, Real bow, ev_int32 xsegments);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling, ev_bool drawFirst, Real bow);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling, ev_bool drawFirst);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale, Real tiling);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                    Real scale);
                virtual void setSkyPlane(
                    ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName);
                
            public:
                ///     virtual void _setSkyPlane(
                ///         ev_bool enable,
                ///         const EarthView::World::Spatial::Math::CPlane& plane,
                ///const EVString& materialName,
                ///Real scale = 1000,
                ///         Real tiling = 10,
                ///ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
                ///Real bow = 0,
                ///         ev_int32 xsegments = 1,
                ///ev_int32 ysegments = 1,
                ///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling, ev_uint8 renderQueue, Real bow, ev_int32 xsegments, ev_int32 ysegments, const EVString &groupName);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling, ev_uint8 renderQueue, Real bow, ev_int32 xsegments, ev_int32 ysegments);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling, ev_uint8 renderQueue, Real bow, ev_int32 xsegments);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling, ev_uint8 renderQueue, Real bow);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling, ev_uint8 renderQueue);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale, Real tiling);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName,
                                          Real scale);
                virtual void _setSkyPlane(ev_bool enable, const EarthView::World::Spatial::Math::CPlane &plane, const EVString &materialName);
                /** Enables / disables a 'sky plane' */
                virtual void setSkyPlaneEnabled(ev_bool enable);
                /** Return whether a key plane is enabled */
                virtual ev_bool isSkyPlaneEnabled() const;
                /** Get the sky plane node, if enabled. */
                virtual EarthView::World::Graphic::CSceneNode *getSkyPlaneNode() const;
                /** Get the parameters used to construct the SkyPlane, if any **/
                virtual const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters &getSkyPlaneGenParameters() const;
                
            public:
                /*virtual void setSkyBox(ev_bool enable, const EVString& materialName,
                Real distance = 5000,
                ev_bool drawFirst = true,
                const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
                const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);*/
                virtual void setSkyBox(ev_bool enable, const EVString &materialName,
                                       Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation, const EVString &groupName);
                virtual void setSkyBox(ev_bool enable, const EVString &materialName,
                                       Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation);
                virtual void setSkyBox(ev_bool enable, const EVString &materialName,
                                       Real distance, ev_bool drawFirst);
                virtual void setSkyBox(ev_bool enable, const EVString &materialName,
                                       Real distance);
                virtual void setSkyBox(ev_bool enable, const EVString &materialName);
                
            public:
                ///     virtual void _setSkyBox(ev_bool enable, const EVString& materialName,
                ///Real distance = 5000,
                ///         ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
                ///const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
                ///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
                virtual void _setSkyBox(ev_bool enable, const EVString &materialName,
                                        Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation, const EVString &groupName);
                virtual void _setSkyBox(ev_bool enable, const EVString &materialName,
                                        Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation);
                virtual void _setSkyBox(ev_bool enable, const EVString &materialName,
                                        Real distance, ev_uint8 renderQueue);
                virtual void _setSkyBox(ev_bool enable, const EVString &materialName,
                                        Real distance);
                virtual void _setSkyBox(ev_bool enable, const EVString &materialName);

                /** Enables / disables a 'sky box' */
                virtual void setSkyBoxEnabled(ev_bool enable);
                /** Return whether a skybox is enabled */
                virtual ev_bool isSkyBoxEnabled() const;
                /** Get the skybox node, if enabled. */
                virtual EarthView::World::Graphic::CSceneNode *getSkyBoxNode() const;
                /** Get the parameters used to generate the current SkyBox, if any */
                virtual const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters &getSkyBoxGenParameters() const;
                
            public:
                ///     virtual void setSkyDome(ev_bool enable, const EVString& materialName,
                ///Real curvature = 10,
                ///         Real tiling = 8, Real distance = 4000, ev_bool drawFirst = true,
                ///         const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
                ///         ev_int32 xsegments = 16, ev_int32 ysegments = 16, ev_int32 ysegments_keep = -1,
                ///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
                /// <summary>
                /// 确认是否启用一个天空穹
                /// </summary>
                /// <param name="enable">ture为启用，false为不启用</param>
                /// <param name="plane">平面的细节描述，它到摄像机的距离</param>
                /// <param name="materialName">天空使用材质的名称</param>
                /// <param name="scale">比例变换以适应天空平面</param>
                /// <param name="tiling">指针</param>
                /// <param name="drawFirst">指针</param>
                /// <param name="bow">指针</param>
                /// <param name="xsegments">指针</param>
                /// <param name="ysegments">指针</param>
                /// <param name="groupName">指针</param>
                /// <returns></returns>
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                        ev_int32 xsegments, ev_int32 ysegments, ev_int32 ysegments_keep, const EVString &groupName);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                        ev_int32 xsegments, ev_int32 ysegments, ev_int32 ysegments_keep);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                        ev_int32 xsegments, ev_int32 ysegments);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                        ev_int32 xsegments);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst, const EarthView::World::Spatial::Math::CQuaternion &orientation);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance, ev_bool drawFirst);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling, Real distance);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature, Real tiling);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName,
                                        Real curvature);
                virtual void setSkyDome(ev_bool enable, const EVString &materialName);
                
            public:
                ///     virtual void _setSkyDome(ev_bool enable, const EVString& materialName,
                ///Real curvature = 10,
                ///         Real tiling = 8, Real distance = 4000, ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
                ///         const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
                ///         ev_int32 xsegments = 16, ev_int32 ysegments = 16, ev_int32 ysegments_keep = -1,
                ///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                         ev_int32 xsegments, ev_int32 ysegments, ev_int32 ysegments_keep, const EVString &groupName);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                         ev_int32 xsegments, ev_int32 ysegments, ev_int32 ysegments_keep);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                         ev_int32 xsegments, ev_int32 ysegments);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation,
                                         ev_int32 xsegments);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue, const EarthView::World::Spatial::Math::CQuaternion &orientation);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance, ev_uint8 renderQueue);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling, Real distance);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature, Real tiling);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName,
                                         Real curvature);
                virtual void _setSkyDome(ev_bool enable, const EVString &materialName);

                /** Enables / disables a 'sky dome' */
                virtual void setSkyDomeEnabled(ev_bool enable);
                /** Return whether a skydome is enabled */
                virtual ev_bool isSkyDomeEnabled() const;
                /** Get the sky dome node, if enabled. */
                virtual EarthView::World::Graphic::CSceneNode *getSkyDomeNode() const;
                /** Get the parameters used to generate the current SkyDome, if any */
                virtual const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters &getSkyDomeGenParameters() const;
                
            public:

                ///void setFog(
                ///    EarthView::World::Graphic::FogMode mode = FOG_NONE, const EarthView::World::Graphic::CColourValue& colour = EarthView::World::Graphic::CColourValue::White,
                ///    Real expDensity = 0.001, Real linearStart = 0.0, Real linearEnd = 1.0);
                void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity, Real linearStart, Real linearEnd);
                void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity, Real linearStart);
                void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity);
                void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour);
                void setFog(EarthView::World::Graphic::FogMode mode);
                void setFog();

                /** Returns the fog mode for the scene.
                */
                virtual EarthView::World::Graphic::FogMode getFogMode() const;
                /** Returns the fog colour for the scene.
                */
                virtual const EarthView::World::Graphic::CColourValue &getFogColour() const;
                /** Returns the fog start distance for the scene.
                */
                virtual Real getFogStart() const;
                /** Returns the fog end distance for the scene.
                */
                virtual Real getFogEnd() const;
                /** Returns the fog density for the scene.
                */
                virtual Real getFogDensity() const;

                /** Creates a new EarthView::World::Graphic::CBillboardSet for use with this scene manager.
                @remarks
                This method creates a new EarthView::World::Graphic::CBillboardSet which is registered with
                the EarthView::World::Graphic::CSceneManager. The EarthView::World::Graphic::CSceneManager will destroy this object when
                it shuts down or when the CSceneManager::clearScene method is
                called, so the caller does not have to worry about destroying
                this object (in fact, it definitely should not do this).
                @par
                See the EarthView::World::Graphic::CBillboardSet documentations for full details of the
                returned class.
                @param
                name The name to give to this billboard set. Must be unique.
                @param
                poolSize The initial size of the pool of billboards (see EarthView::World::Graphic::CBillboardSet for more information)
                @see
                EarthView::World::Graphic::CBillboardSet
                */
                virtual EarthView::World::Graphic::CBillboardSet *createBillboardSet(const EVString &name, ev_uint32 poolSize);
                /*virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(const EVString& name, ev_uint32 poolSize = 20);*/
                virtual EarthView::World::Graphic::CBillboardSet *createBillboardSet(const EVString &name);
                /** Creates a new EarthView::World::Graphic::CBillboardSet for use with this scene manager, with a generated name.
                @param
                poolSize The initial size of the pool of billboards (see EarthView::World::Graphic::CBillboardSet for more information)
                @see
                EarthView::World::Graphic::CBillboardSet
                */
                virtual EarthView::World::Graphic::CBillboardSet *createBillboardSet(ev_uint32 poolSize );
                /*virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(ev_uint32 poolSize = 20);*/
                virtual EarthView::World::Graphic::CBillboardSet *createBillboardSet();
                /** Retrieves a pointer to the named EarthView::World::Graphic::CBillboardSet.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CBillboardSet *getBillboardSet(const EVString &name) const;
                /** Returns whether a billboardset with the given name exists.
                */
                virtual ev_bool hasBillboardSet(const EVString &name) const;
                /** Removes & destroys an EarthView::World::Graphic::CBillboardSet from the EarthView::World::Graphic::CSceneManager.
                @warning
                Must only be done if the EarthView::World::Graphic::CBillboardSet is not attached
                to a EarthView::World::Graphic::CSceneNode. It may be safer to wait to clear the whole
                scene. If you are unsure, use clearScene.
                */
                virtual void destroyBillboardSet(EarthView::World::Graphic::CBillboardSet *set);
                /** Removes & destroys an EarthView::World::Graphic::CBillboardSet from the EarthView::World::Graphic::CSceneManager by name.
                @warning
                Must only be done if the EarthView::World::Graphic::CBillboardSet is not attached
                to a EarthView::World::Graphic::CSceneNode. It may be safer to wait to clear the whole
                scene. If you are unsure, use clearScene.
                */
                virtual void destroyBillboardSet(const EVString &name);
                /** Removes & destroys all BillboardSets.
                @warning
                Again, use caution since no EarthView::World::Graphic::CBillboardSet must be referred to
                elsewhere e.g. attached to a EarthView::World::Graphic::CSceneNode otherwise a crash
                is likely. Use clearScene if you are unsure (it clears EarthView::World::Graphic::CSceneNode
                entries too.)
                @see
                CSceneManager::clearScene
                */
                virtual void destroyAllBillboardSets();
                
				/// <summary>
				/// 设置是否显示场景节点的坐标轴
				/// </summary>				
				/// <returns></returns>
                virtual void setDisplaySceneNodes(ev_bool display);
				/// <summary>
				/// 设置是否显示场景节点的坐标轴			
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool getDisplaySceneNodes() const;
                
				/// <summary>
				/// 创建场景节点动画
				/// </summary>		
				/// <param name="name">动画名称</param>
				/// <param name="length">动画时长:单位为秒</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimation *createAnimation(const EVString &name, Real length);
				/// <summary>
				/// 获取给定名称的场景节点动画
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimation *getAnimation(const EVString &name) const;
				/// <summary>
				/// 判断给定名称的场景节点动画是否存在
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual ev_bool hasAnimation(const EVString &name) const;
				/// <summary>
				/// 销毁给定名称的场景节点动画
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual void destroyAnimation(const EVString &name);
				/// <summary>
				/// 销毁所有场景节点动画
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual void destroyAllAnimations();
                
				/// <summary>
				/// 为给定名称的场景节点动画创建一个动画状态类(播放控制类)
				/// </summary>		
				/// <param name="animName">动画名称</param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimationState *createAnimationState(const EVString &animName);
				/// <summary>
				/// 获取给定名称的场景节点动画对应的动画状态类(播放控制类)
				/// </summary>		
				/// <param name="animName">动画名称</param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CAnimationState *getAnimationState(const EVString &animName) const;
				/// <summary>
				/// 判断给定名称的场景节点动画状态类是否存在
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual ev_bool hasAnimationState(const EVString &name) const;
				/// <summary>
				/// 销毁给定名称的场景节点动画状态类(播放控制类)
				/// </summary>		
				/// <param name="name">动画名称</param>				
				/// <returns></returns>
                virtual void destroyAnimationState(const EVString &name);
				/// <summary>
				/// 销毁所有场景节点动画状态类(播放控制类)
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void destroyAllAnimationStates();

                /** Manual rendering method, for advanced users only.
                @remarks
                This method allows you to send rendering commands through the pipeline on
                demand, bypassing EV_World's normal world processing. You should only use this if you
                really know what you're doing; EV_World does lots of things for you that you really should
                let it do. However, there are times where it may be useful to have this manual interface,
                for example overlaying something on top of the scene rendered by EV_World.
                @par
                Because this is an instant rendering method, timing is important. The best
                time to call it is from a CRenderTargetListener event handler.
                @par
                Don't call this method a lot, it's designed for rare (1 or 2 times per frame) use.
                Calling it regularly per frame will cause frame rate drops!
                @param rend A EarthView::World::Graphic::CRenderOperation object describing the rendering op
                @param pass The EarthView::World::Graphic::CPass to use for this render
                @param vp Pointer to the viewport to render to, or 0 to use the current viewport
                @param worldMatrix The transform to apply from object to world space
                @param viewMatrix The transform to apply from world to view space
                @param projMatrix The transform to apply from view to screen space
                @param doBeginEndFrame If true, beginFrame() and endFrame() are called,
                otherwise not. You should leave this as false if you are calling
                this within the main render loop.
                */
                virtual void manualRender(EarthView::World::Graphic::CRenderOperation *rend, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp,
                                          const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix,
                                          ev_bool doBeginEndFrame) ;
                ///virtual void manualRender(EarthView::World::Graphic::CRenderOperation* rend, EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::CViewport* vp,
                ///	const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, const EarthView::World::Spatial::Math::CMatrix4& projMatrix,
                ///	ev_bool doBeginEndFrame = false) ;
                virtual void manualRender(EarthView::World::Graphic::CRenderOperation *rend, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp,
                                          const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix) ;
                /** Manual rendering method for rendering a single object.
                @remarks
                @param rend The renderable to issue to the pipeline
                @param pass The pass to use
                @param vp Pointer to the viewport to render to, or 0 to use the existing viewport
                @param doBeginEndFrame If true, beginFrame() and endFrame() are called,
                otherwise not. You should leave this as false if you are calling
                this within the main render loop.
                @param viewMatrix The transform to apply from world to view space
                @param projMatrix The transform to apply from view to screen space
                @param lightScissoringClipping If true, passes that have the getLightScissorEnabled
                and/or getLightClipPlanesEnabled flags will cause calculation and setting of
                scissor rectangle and user clip planes.
                @param doLightIteration If true, this method will issue the renderable to
                the pipeline possibly multiple times, if the pass indicates it should be
                done once per light
                @param manualLightList Only applicable if doLightIteration is false, this
                method allows you to pass in a previously determined set of lights
                which will be used for a single render of this object.
                */
                virtual void manualRender(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix,
                                          ev_bool doBeginEndFrame, ev_bool lightScissoringClipping, ev_bool doLightIteration, const EarthView::World::Graphic::LightList *manualLightList);
                ///virtual void manualRender(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::CViewport* vp, const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, const EarthView::World::Spatial::Math::CMatrix4& projMatrix,
                ///	ev_bool doBeginEndFrame = false, ev_bool lightScissoringClipping = true,
                ///	ev_bool doLightIteration = true, const EarthView::World::Graphic::LightList* manualLightList = 0);
                virtual void manualRender(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix,
                                          ev_bool doBeginEndFrame, ev_bool lightScissoringClipping, ev_bool doLightIteration);
                virtual void manualRender(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix,
                                          ev_bool doBeginEndFrame, ev_bool lightScissoringClipping);
                virtual void manualRender(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix,
                                          ev_bool doBeginEndFrame);
                virtual void manualRender(EarthView::World::Graphic::CRenderable *rend, const EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CViewport *vp, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix, const EarthView::World::Spatial::Math::CMatrix4 &projMatrix);
                
				/// <summary>
				/// 获得渲染队列
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CRenderQueue *getRenderQueue();
                
				/// <summary>
				/// 添加渲染队列监听者
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void addRenderQueueListener(EarthView::World::Graphic::CRenderQueueListener *ref_newListener);
                
				/// <summary>
				/// 移除渲染队列监听者
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void removeRenderQueueListener(EarthView::World::Graphic::CRenderQueueListener *delListener);
                
				/// <summary>
				/// 添加渲染对象监听者
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void addRenderObjectListener(EarthView::World::Graphic::CRenderObjectListener *ref_newListener);
				/// <summary>
				/// 移除渲染对象监听者
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void removeRenderObjectListener(EarthView::World::Graphic::CRenderObjectListener *delListener);
                
				/** Adds an item to the 'special case' render queue list.
                @remarks
                Normally all render queues are rendered, in their usual sequence,
                only varying if a EarthView::World::Graphic::CRenderQueueListener nominates for the queue to be
                repeated or skipped. This method allows you to add a render queue to
                a 'special case' list, which varies the behaviour. The effect of this
                list depends on the 'mode' in which this list is in, which might be
                to exclude these render queues, or to include them alone (excluding
                all other queues). This allows you to perform broad selective
                rendering without requiring a EarthView::World::Graphic::CRenderQueueListener.
                @param qid The identifier of the queue which should be added to the
                special case list. Nothing happens if the queue is already in the list.
                */
                virtual void addSpecialCaseRenderQueue(ev_uint8 qid);
                /** Removes an item to the 'special case' render queue list.
                @see CSceneManager::addSpecialCaseRenderQueue
                @param qid The identifier of the queue which should be removed from the
                special case list. Nothing happens if the queue is not in the list.
                */
                virtual void removeSpecialCaseRenderQueue(ev_uint8 qid);
                /** Clears the 'special case' render queue list.
                @see CSceneManager::addSpecialCaseRenderQueue
                */
                virtual void clearSpecialCaseRenderQueues();
                /** Sets the way the special case render queue list is processed.
                @see CSceneManager::addSpecialCaseRenderQueue
                @param mode The mode of processing
                */
                virtual void setSpecialCaseRenderQueueMode(SpecialCaseRenderQueueMode mode);
                /** Gets the way the special case render queue list is processed. */
                virtual EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode getSpecialCaseRenderQueueMode();
                /** Returns whether or not the named queue will be rendered based on the
                current 'special case' render queue list and mode.
                @see CSceneManager::addSpecialCaseRenderQueue
                @param qid The identifier of the queue which should be tested
                @returns true if the queue will be rendered, false otherwise
                */
                virtual ev_bool isRenderQueueToBeProcessed(ev_uint8 qid);
                /** Sets the render queue that the world geometry (if any) this EarthView::World::Graphic::CSceneManager
                renders will be associated with.
                @remarks
                SceneManagers which provide 'world geometry' should place it in a
                specialised render queue in order to make it possible to enable /
                if the EarthView::World::Graphic::CSceneManager does not use the render queues to render the
                world geometry, it should still pick a queue to represent it's manual
                rendering, and check isRenderQueueToBeProcessed before rendering.
                @note
                Setting this may not affect the actual ordering of rendering the
                world geometry, if the world geometry is being rendered manually
                by the EarthView::World::Graphic::CSceneManager. If the EarthView::World::Graphic::CSceneManager feeds world geometry into
                the queues, however, the ordering will be affected.
                */
                virtual void setWorldGeometryRenderQueue(ev_uint8 qid);
                /** Gets the render queue that the world geometry (if any) this EarthView::World::Graphic::CSceneManager
                renders will be associated with.
                @remarks
                SceneManagers which provide 'world geometry' should place it in a
                specialised render queue in order to make it possible to enable /
                if the EarthView::World::Graphic::CSceneManager does not use the render queues to render the
                world geometry, it should still pick a queue to represent it's manual
                rendering, and check isRenderQueueToBeProcessed before rendering.
                */
                virtual ev_uint8 getWorldGeometryRenderQueue();
                
				/// <summary>
				/// 设置是否显示节点的包围盒
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void showBoundingBoxes(ev_bool bShow);
                
				/// <summary>
				/// 获取是否显示节点的包围盒
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_bool getShowBoundingBoxes() const;

				/// <summary>
				/// 通知场景管理器存在某个节点正被跟踪
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void _notifyAutotrackingSceneNode(EarthView::World::Graphic::CSceneNode *node, ev_bool autoTrack);

				/// <summary>
				/// 创建包围盒查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual _extfree EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *createAABBQuery(const EarthView::World::Spatial::Math::CAxisAlignedBox &box, ev_uint32 mask);
                virtual _extfree EarthView::World::Graphic::CAxisAlignedBoxSceneQuery *createAABBQuery(const EarthView::World::Spatial::Math::CAxisAlignedBox &box);
                
				/// <summary>
				/// 创建球查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual _extfree EarthView::World::Graphic::CSphereSceneQuery *createSphereQuery(const EarthView::World::Spatial::Math::CSphere &sphere, ev_uint32 mask);
                virtual _extfree EarthView::World::Graphic::CSphereSceneQuery *createSphereQuery(const EarthView::World::Spatial::Math::CSphere &sphere);
                
				/// <summary>
				/// 创建平面包围体查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual _extfree EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery *createPlaneBoundedVolumeQuery(const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &volumes, ev_uint32 mask);
                virtual _extfree EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery *createPlaneBoundedVolumeQuery(const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &volumes);
                
				/// <summary>
				/// 创建射线查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual _extfree EarthView::World::Graphic::CRaySceneQuery *createRayQuery(const EarthView::World::Spatial::Math::CRay &ray, ev_uint32 mask);
                virtual _extfree EarthView::World::Graphic::CRaySceneQuery *createRayQuery(const EarthView::World::Spatial::Math::CRay &ray);

				/// <summary>
				/// 创建相交查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual _extfree EarthView::World::Graphic::CIntersectionSceneQuery *createIntersectionQuery(ev_uint32 mask);                
                virtual _extfree EarthView::World::Graphic::CIntersectionSceneQuery *createIntersectionQuery();
                
				/// <summary>
				/// 销毁查询对象
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>				
                virtual void destroyQuery(EarthView::World::Graphic::CSceneQuery *query);

                class EV_GRAPHIC_DLL CameraIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    EVString first;
                    EarthView::World::Graphic::CCamera *second;
                    CameraIteratorPair();
                ev_private:
                    CameraIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /*typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::CameraList> EarthView::World::Graphic::CSceneManager::CameraIterator;*/
                class EV_GRAPHIC_DLL CameraIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::CameraList> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    CameraIterator(const_iterator first, const_iterator last);
                    ~CameraIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneManager::CameraIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneManager::CameraIterator &operator=(_in const EarthView::World::Graphic::CSceneManager::CameraIterator &other);
                ev_private:
                    CameraIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

                    CameraIterator(EarthView::World::Graphic::CSceneManager::CameraList &lst);
                    CameraIterator(const CameraIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::CCamera *nextValue() const;
                    EarthView::World::Graphic::CCamera **nextValuePtr();
                    EarthView::World::Graphic::CCamera *next();
                    const EarthView::World::Graphic::CSceneManager::CameraIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneManager::CameraIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneManager::CameraIteratorPair &getCurrent();
                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneManager::CameraIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneManager::CameraIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneManager::CameraIteratorPair mEndPair;
                    EarthView::World::Graphic::CCamera *mptr;
                    ValueType mvt;
                };

                class EV_GRAPHIC_DLL AnimationIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    AnimationIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CAnimation *second;
                ev_private:
                    AnimationIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::AnimationList> EarthView::World::Graphic::CSceneManager::AnimationIterator;
                class EV_GRAPHIC_DLL AnimationIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::AnimationList> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    AnimationIterator(const_iterator first, const_iterator last);
                    ~AnimationIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneManager::AnimationIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneManager::AnimationIterator &operator=(_in const EarthView::World::Graphic::CSceneManager::AnimationIterator &other);
                ev_private:
                    AnimationIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    AnimationIterator(EarthView::World::Graphic::CSceneManager::AnimationList &lst);
                    AnimationIterator(const AnimationIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::CAnimation *nextValue() const;
                    EarthView::World::Graphic::CAnimation **nextValuePtr();
                    EarthView::World::Graphic::CAnimation *next();
                    const EarthView::World::Graphic::CSceneManager::AnimationIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneManager::AnimationIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneManager::AnimationIteratorPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneManager::AnimationIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneManager::AnimationIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneManager::AnimationIteratorPair mEndPair;
                    EarthView::World::Graphic::CAnimation *mptr;
                    ValueType mvt;
                };

				/// <summary>
				/// 获得相机迭代器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::CSceneManager::CameraIterator getCameraIterator();
				/// <summary>
				/// 获得相机列表
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                const EarthView::World::Graphic::CSceneManager::CameraList &getCameras() const;

				/// <summary>
				/// 获得节点动画迭代器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::CSceneManager::AnimationIterator getAnimationIterator();
				/// <summary>
				/// 获得节点动画列表
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                const EarthView::World::Graphic::CSceneManager::AnimationList &getAnimations() const;

				/// <summary>
				/// 获得节点动画状态类迭代器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>                
                EarthView::World::Graphic::AnimationStateMapIterator getAnimationStateIterator();
                
				/// <summary>
				/// 设置阴影技术
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>   
                virtual void setShadowTechnique(ShadowTechnique technique);
                
				/// <summary>
				/// 获得阴影技术
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>   
                virtual EarthView::World::Graphic::ShadowTechnique getShadowTechnique() const;

                /** Enables / disables the rendering of debug information for shadows. */
                virtual void setShowDebugShadows(ev_bool debug);
                /** Are debug shadows shown? */
                virtual ev_bool getShowDebugShadows() const;
                
				/// <summary>
				/// 设置阴影颜色
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>   
                virtual void setShadowColour(const EarthView::World::Graphic::CColourValue &colour);
				/// <summary>
				/// 获得阴影颜色
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>  
				virtual const EarthView::World::Graphic::CColourValue &getShadowColour() const;
                
				/// <summary>
				/// 获得方向光能够产生阴影的最大距离(离相机的距离)
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>   
                virtual void setShadowDirectionalLightExtrusionDistance(Real dist);
				/// <summary>
				/// 获得方向光能够产生阴影的最大距离(离相机的距离)
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>   
                virtual Real getShadowDirectionalLightExtrusionDistance() const;

				/// <summary>
				/// 设置阴影颜色增益 (shadowcolor.r*rRatio, shadowcolor.g*gRatio, shadowcolor.b*bRatio)
				/// </summary>		
				/// <param name="rRatio">设置r通道增益</param>
				/// <param name="gRatio">设置g通道增益</param>
				/// <param name="bRatio">设置b通道增益</param>
				/// <returns></returns> 
				virtual void setShadowColorRRatio(Real rRatio);
				virtual void setShadowColorGRatio(Real gRatio);
				virtual void setShadowColorBRatio(Real bRatio);

				/// <summary>
				/// 获取阴影颜色增益
				/// </summary>						
				/// <returns></returns> 
				virtual Real getShadowColorRRatio() const;
				virtual Real getShadowColorGRatio() const;
				virtual Real getShadowColorBRatio() const;
                
				/// <summary>
				/// 设置阴影的最大距离(离相机的距离)
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowFarDistance(Real distance);
				/// <summary>
				/// 获得阴影的最大距离(离相机的距离)
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual Real getShadowFarDistance() const;
				/// <summary>
				/// 获得阴影的最大距离(离相机的距离)的平方
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual Real getShadowFarDistanceSquared() const;
                
				/// <summary>
				/// 设置阴影锥的索引buffer的长度
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowIndexBufferSize(ev_size_t size);
				/// <summary>
				/// 获得阴影锥的索引buffer的长度
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual ev_size_t getShadowIndexBufferSize() const;
				
				/// <summary>
				/// 设置阴影纹理图片的尺寸
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowTextureSize(ev_uint16 size);
                
				/// <summary>
				/// 设置阴影纹理的相关参数
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowTextureConfig(ev_size_t shadowIndex, ev_uint16 width,
                                                    ev_uint16 height, EarthView::World::Graphic::PixelFormat format);
                virtual void setShadowTextureConfig(ev_size_t shadowIndex, ev_uint16 width,
                                                    ev_uint16 height, EarthView::World::Graphic::PixelFormat format, ev_uint16 fsaa);
                virtual void setShadowTextureConfig(ev_size_t shadowIndex, ev_uint16 width,
                                                    ev_uint16 height, EarthView::World::Graphic::PixelFormat format, ev_uint16 fsaa , ev_uint16 depthBufferPoolId);

                virtual void setShadowTextureConfig(ev_size_t shadowIndex, const ShadowTextureConfig &config);
                
				/// <summary>
				/// 获得阴影纹理的相关参数的迭代器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                EarthView::World::Graphic::ConstShadowTextureConfigIterator getShadowTextureConfigIterator() const;
                
				/// <summary>
				/// 设置阴影纹理的像素格式
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowTexturePixelFormat(PixelFormat fmt);
                
				/// <summary>
				/// 设置阴影纹理的FSAA
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_void setShadowTextureFSAA(ev_uint16 fsaa);

				/// <summary>
				/// 设置阴影纹理的数量
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowTextureCount(ev_size_t count);
                
				/// <summary>
				/// 获得阴影纹理的数量
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                ev_size_t getShadowTextureCount() const;
                /** Set the number of shadow textures a light type uses.
                @remarks
                The default for all light types is 1. This means that each light uses only 1 shadow
                texture. Call this if you need more than 1 shadow texture per light, E.G. PSSM.
                @note
                This feature only works with the Integrated shadow technique.
                Also remember to increase the total number of shadow textures you request
                appropriately (e.g. via setShadowTextureCount)!!
                */
                void setShadowTextureCountPerLightType(EarthView::World::Graphic::CLight::LightTypes type, ev_size_t count);
                //// Get the number of shadow textures is assigned for the given light type.
                ev_size_t getShadowTextureCountPerLightType(EarthView::World::Graphic::CLight::LightTypes type) const;
                
				/// <summary>
				/// 设置阴影纹理的相关参数
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowTextureSettings(ev_uint16 size, ev_uint16 count);
                virtual void setShadowTextureSettings(ev_uint16 size, ev_uint16 count,
                                                      EarthView::World::Graphic::PixelFormat fmt);
                virtual void setShadowTextureSettings(ev_uint16 size, ev_uint16 count,
                                                      EarthView::World::Graphic::PixelFormat fmt, ev_uint16 fsaa);
                virtual void setShadowTextureSettings(ev_uint16 size, ev_uint16 count,
                                                      EarthView::World::Graphic::PixelFormat fmt, ev_uint16 fsaa, ev_uint16 depthBufferPoolId);

				/// <summary>
				/// 获得阴影纹理
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual const EarthView::World::Graphic::CTexturePtr &getShadowTexture(ev_size_t shadowIndex);
                
				/// <summary>
				/// 设置平行光对应的阴影纹理的偏移量
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowDirLightTextureOffset(Real offset);
				/// <summary>
				/// 获得平行光对应的阴影纹理的偏移量
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual Real getShadowDirLightTextureOffset()  const;
                
				/// <summary>
				/// 设置阴影纹理消退的起始点
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowTextureFadeStart(Real fadeStart);
				/// <summary>
				/// 设置阴影纹理消退的截止点
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns> 
                virtual void setShadowTextureFadeEnd(Real fadeEnd);
                
				/// <summary>
				/// 设置纹理阴影是否启用自投影
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowTextureSelfShadow(ev_bool selfShadow);

				/// <summary>
				/// 获得纹理阴影是否启用自投影
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_bool getShadowTextureSelfShadow() const;
                
				/// <summary>
				/// 设置纹理阴影技术下的投射阴影的材质
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowTextureCasterMaterial(const EVString &name);
                
				/// <summary>
				/// 设置纹理阴影技术下的接收阴影的材质
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowTextureReceiverMaterial(const EVString &name);
                
				/// <summary>
				/// 设置是否渲染阴影投射者的背面
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowCasterRenderBackFaces(ev_bool bf);
				/// <summary>
				/// 获取是否渲染阴影投射者的背面
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_bool getShadowCasterRenderBackFaces() const;
                
				/// <summary>
				/// 设置阴影相机
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual void setShadowCameraSetup(const EarthView::World::Graphic::ShadowCameraSetupPtr &shadowSetup);
				/// <summary>
				/// 获得阴影相机
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual const EarthView::World::Graphic::ShadowCameraSetupPtr &getShadowCameraSetup() const;
                /** Sets whether we should use an inifinite camera far plane
                when rendering stencil shadows.
                @remarks
                Stencil shadow coherency is very reliant on the shadow volume
                not being clipped by the far plane. If this clipping happens, you
                get a kind of 'negative' shadow effect. The best way to achieve
                coherency is to move the far plane of the camera out to infinity,
                thus preventing the far plane from clipping the shadow volumes.
                When combined with vertex program extrusion of the volume to
                infinity, which	EV_World does when available, this results in very
                robust shadow volumes. For this reason, when you enable stencil
                shadows, EV_World automatically changes your camera settings to
                project to infinity if the card supports it. You can disable this
                behaviour if you like by calling this method; although you can
                never enable infinite projection if the card does not support it.
                @par
                If you disable infinite projection, or it is not available,
                you need to be far more careful with your light attenuation /
                directional light extrusion distances to avoid clipping artefacts
                at the far plane.
                @note
                Recent cards will generally support infinite far plane projection.
                However, we have found some cases where they do not, especially
                on Direct3D. There is no standard capability we can check to
                validate this, so we use some heuristics based on experience:
                <UL>
                <LI>OpenGL always seems to support it no matter what the card</LI>
                <LI>Direct3D on non-vertex program capable systems (including
                vertex program capable cards on Direct3D7) does not
                support it</LI>
                <LI>Direct3D on GeForce3 and GeForce4 Ti does not seem to support
                infinite projection<LI>
                </UL>
                Therefore in the EarthView::World::Graphic::CRenderSystem implementation, we may veto the use
                of an infinite far plane based on these heuristics.
                */
                virtual void setShadowUseInfiniteFarPlane(ev_bool enable);
                /** Is there a stencil shadow based shadowing technique in use? */
                virtual ev_bool isShadowTechniqueStencilBased() const;
                /** Is there a texture shadow based shadowing technique in use? */
                virtual ev_bool isShadowTechniqueTextureBased() const;
                /** Is there a modulative shadowing technique in use? */
                virtual ev_bool isShadowTechniqueModulative() const;
                /** Is there an additive shadowing technique in use? */
                virtual ev_bool isShadowTechniqueAdditive() const;
                /** Is the shadow technique integrated into primary materials? */
                virtual ev_bool isShadowTechniqueIntegrated() const;
                /** Is there any shadowing technique in use? */
                virtual ev_bool isShadowTechniqueInUse() const;
                
                virtual void setShadowUseLightClipPlanes(ev_bool enabled);
                
                virtual ev_bool getShadowUseLightClipPlanes() const;
                /** Sets the active compositor chain of the current scene being rendered.
                @note EarthView::World::Graphic::CCompositorChain does this automatically, no need to call manually.
                */
                virtual void _setActiveCompositorChain(EarthView::World::Graphic::CCompositorChain *chain);
                /** Sets whether to use late material resolving or not. If set, materials will be resolved
                from the materials at the pass-setting stage and not at the render queue building stage.
                This is useful when the active material scheme during the render queue building stage
                is different from the one during the rendering stage.
                */
                virtual void setLateMaterialResolving(ev_bool isLate);
               
                virtual ev_bool isLateMaterialResolving() const;
                /** Gets the active compositor chain of the current scene being rendered */
                virtual EarthView::World::Graphic::CCompositorChain *_getActiveCompositorChain() const;
                /** Add a listener which will get called back on scene manager events.
                */
                virtual void addListener(EarthView::World::Graphic::CSceneManager::CSceneManagerListener *ref_s);
                /** Remove a listener
                */
                virtual void removeListener(EarthView::World::Graphic::CSceneManager::CSceneManagerListener *s);

				virtual ev_bool existListener(EarthView::World::Graphic::CSceneManager::CSceneManagerListener *s);
                /** Creates a EarthView::World::Graphic::CStaticGeometry instance suitable for use with this
                EarthView::World::Graphic::CSceneManager.
                @remarks
                EarthView::World::Graphic::CStaticGeometry is a way of batching up geometry into a more
                efficient form at the expense of being able to move it. Please
                read the CStaticGeometry class documentation for full information.
                @param name The name to give the new object
                @returns The new EarthView::World::Graphic::CStaticGeometry instance
                */
                virtual EarthView::World::Graphic::CStaticGeometry *createStaticGeometry(const EVString &name);
                /** Retrieve a previously created EarthView::World::Graphic::CStaticGeometry instance.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CStaticGeometry *getStaticGeometry(const EVString &name) const;
                /** Returns whether a static geometry instance with the given name exists. */
                virtual ev_bool hasStaticGeometry(const EVString &name) const;
                /** Remove & destroy a EarthView::World::Graphic::CStaticGeometry instance. */
                virtual void destroyStaticGeometry(EarthView::World::Graphic::CStaticGeometry *geom);
                /** Remove & destroy a EarthView::World::Graphic::CStaticGeometry instance. */
                virtual void destroyStaticGeometry(const EVString &name);
                /** Remove & destroy all EarthView::World::Graphic::CStaticGeometry instances. */
                virtual void destroyAllStaticGeometry();
                /** Creates a EarthView::World::Graphic::CInstancedGeometry instance suitable for use with this
                EarthView::World::Graphic::CSceneManager.
                @remarks
                EarthView::World::Graphic::CInstancedGeometry is a way of batching up geometry into a more
                efficient form, and still be able to move it. Please
                read the CInstancedGeometry class documentation for full information.
                @param name The name to give the new object
                @returns The new EarthView::World::Graphic::CInstancedGeometry instance
                */
                virtual EarthView::World::Graphic::CInstancedGeometry *createInstancedGeometry(const EVString &name);
                /** Retrieve a previously created EarthView::World::Graphic::CInstancedGeometry instance. */
                virtual EarthView::World::Graphic::CInstancedGeometry *getInstancedGeometry(const EVString &name) const;
                /** Remove & destroy a EarthView::World::Graphic::CInstancedGeometry instance. */
                virtual void destroyInstancedGeometry(EarthView::World::Graphic::CInstancedGeometry *geom);
                /** Remove & destroy a EarthView::World::Graphic::CInstancedGeometry instance. */
                virtual void destroyInstancedGeometry(const EVString &name);
                /** Remove & destroy all EarthView::World::Graphic::CInstancedGeometry instances. */
                virtual void destroyAllInstancedGeometry();

				/// <summary>
				/// 创建Instance管理器
				/// 每个submesh对应一个instance管理器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CInstanceManager *createInstanceManager( const EVString &customName, const EVString &meshName,
                        const EVString &groupName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch, ev_uint16 flags,
                        ev_uint16 subMeshIdx );
                virtual EarthView::World::Graphic::CInstanceManager *createInstanceManager( const EVString &customName, const EVString &meshName,
                        const EVString &groupName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch, ev_uint16 flags);
                virtual EarthView::World::Graphic::CInstanceManager *createInstanceManager( const EVString &customName, const EVString &meshName,
                        const EVString &groupName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch);
				void addInstanceManager(CInstanceManager* pInstMnger);
               
				/// <summary>
				/// 获得Instance管理器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CInstanceManager *getInstanceManager( const EVString &managerName ) const;
				/// <summary>
				/// 判断是否存在给定名称的Instance管理器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_bool hasInstanceManager( const EVString &managerName ) const;
                
				/// <summary>
				/// 销毁给定的Instance管理器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_void destroyInstanceManager( const EVString &name );
                virtual ev_void destroyInstanceManager( EarthView::World::Graphic::CInstanceManager *instanceManager );
				virtual ev_void destroyInstanceManagerWithThreadSafe(const EVString &name);
				virtual ev_void destroyInstanceManagerWithThreadSafe(EarthView::World::Graphic::CInstanceManager *instanceManager);
				/// <summary>
				/// 销毁所有Instance管理器
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_void destroyAllInstanceManagers();
                
				/// <summary>
				/// 获得每个批次支持的最多instance数量
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_size_t getNumInstancesPerBatch( const EVString &meshName, const EVString &groupName,
                        const EVString &materialName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch);
                virtual ev_size_t getNumInstancesPerBatch( const EVString &meshName, const EVString &groupName,
                        const EVString &materialName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch, ev_uint16 flags);
                virtual ev_size_t getNumInstancesPerBatch( const EVString &meshName, const EVString &groupName,
                        const EVString &materialName,
                        EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique,
                        ev_size_t numInstancesPerBatch, ev_uint16 flags,
                        ev_uint16 subMeshIdx);
                
				/// <summary>
				/// 创建Instance实体
				/// 每个实体对应一个SubMesh
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CInstancedEntity *createInstancedEntity( const EVString &materialName,
                        const EVString &managerName );

				/// <summary>
				/// 销毁Instance实体				
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                virtual ev_void destroyInstancedEntity( EarthView::World::Graphic::CInstancedEntity *instancedEntity );
                
				/// <summary>
				/// 将instance管理器添加到需要更新包围盒的队列中		
				/// </summary>		
				/// <param name=""></param>				
				/// <returns></returns>
                ev_void _addDirtyInstanceManager( EarthView::World::Graphic::CInstanceManager *ref_dirtyManager );

                /** Create a movable object of the type specified.
                @remarks
                This is the generalised form of EarthView::World::Graphic::CMovableObject creation where you can
                create a EarthView::World::Graphic::CMovableObject of any specialised type generically, including
                @param name The name to give the object. Must be unique within type.
                @param typeName The type of object to create
                @param params Optional name/value pair list to give extra parameters to
                the created object.
                */
                virtual EarthView::World::Graphic::CMovableObject *createMovableObject(const EVString &name, const EVString &typeName, const EarthView::World::Core::NameValuePairList *params);
                virtual EarthView::World::Graphic::CMovableObject *createMovableObject(const EVString &name, const EVString &typeName);
                /** Create a movable object of the type specified without a name.
                @remarks
                This is the generalised form of EarthView::World::Graphic::CMovableObject creation where you can
                create a EarthView::World::Graphic::CMovableObject of any specialised type generically, including
                @param typeName The type of object to create
                @param params Optional name/value pair list to give extra parameters to
                the created object.
                */
                virtual EarthView::World::Graphic::CMovableObject *createMovableObject(const EVString &typeName, const EarthView::World::Core::NameValuePairList *params);
                virtual EarthView::World::Graphic::CMovableObject *createMovableObject(const EVString &typeName);
                /** Destroys a EarthView::World::Graphic::CMovableObject with the name specified, of the type specified.
                @remarks
                The EarthView::World::Graphic::CMovableObject will automatically detach itself from any nodes
                on destruction.
                */
                virtual void destroyMovableObject(const EVString &name, const EVString &typeName);
                /** Destroys a EarthView::World::Graphic::CMovableObject.
                @remarks
                The EarthView::World::Graphic::CMovableObject will automatically detach itself from any nodes
                on destruction.
                */
                virtual void destroyMovableObject(EarthView::World::Graphic::CMovableObject *m);
                /** Destroy all MovableObjects of a given type. */
                virtual void destroyAllMovableObjectsByType(const EVString &typeName);
                /** Destroy all MovableObjects. */
                virtual void destroyAllMovableObjects();
                /** Get a reference to a previously created EarthView::World::Graphic::CMovableObject.
                @note Throws an exception if the named instance does not exist
                */
                virtual EarthView::World::Graphic::CMovableObject *getMovableObject(const EVString &name, const EVString &typeName) const;
                /** Returns whether a movable object instance with the given name exists. */
                virtual ev_bool hasMovableObject(const EVString &name, const EVString &typeName) const;
                /*typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::MovableObjectMap> EarthView::World::Graphic::CSceneManager::MovableObjectIterator;*/
                class EV_GRAPHIC_DLL MovableObjectIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    MovableObjectIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CMovableObject *second;
                ev_private:
                    MovableObjectIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                class EV_GRAPHIC_DLL MovableObjectIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManager::MovableObjectMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    MovableObjectIterator(const_iterator first, const_iterator last);
                    ~MovableObjectIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneManager::MovableObjectIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneManager::MovableObjectIterator &operator=(_in const EarthView::World::Graphic::CSceneManager::MovableObjectIterator &other);
                ev_private:
                    MovableObjectIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    MovableObjectIterator(EarthView::World::Graphic::CSceneManager::MovableObjectMap &lst);
                    MovableObjectIterator(const MovableObjectIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    ev_uint16 nextKey() const;
                    EarthView::World::Graphic::CMovableObject *nextValue() const;
                    EarthView::World::Graphic::CMovableObject **nextValuePtr();
                    EarthView::World::Graphic::CMovableObject *next();
                    const EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneManager::MovableObjectIteratorPair mEndPair;
                    EarthView::World::Graphic::CMovableObject *mptr;
                    ValueType mvt;
                };
                /** Get an iterator over all MovableObect instances of a given type.
                @note
                The iterator returned from this method is not thread safe, do not use this
                if you are creating or deleting objects of this type in another thread.
                */
                virtual EarthView::World::Graphic::CSceneManager::MovableObjectIterator getMovableObjectIterator(const EVString &typeName);
                /** Inject a EarthView::World::Graphic::CMovableObject instance created externally.
                @remarks
                This method 'injects' a EarthView::World::Graphic::CMovableObject instance created externally into
                the EarthView::World::Graphic::CMovableObject instance registry held in the EarthView::World::Graphic::CSceneManager. You
                might want to use this if you have a EarthView::World::Graphic::CMovableObject which you don't
                want to register a factory for; for example a EarthView::World::Graphic::CMovableObject which
                cannot be generally constructed by clients.
                @note
                It is important that the EarthView::World::Graphic::CMovableObject has a unique name for the type,
                and that its getMovableType() method returns a proper type name.
                */
                virtual void injectMovableObject(EarthView::World::Graphic::CMovableObject *m);
                /** Extract a previously injected EarthView::World::Graphic::CMovableObject.
                @remarks
                Essentially this does the same as destroyMovableObject, but only
                removes the instance from the internal lists, it does not attempt
                to destroy it.
                */
                virtual void extractMovableObject(const EVString &name, const EVString &typeName);
                /** Extract a previously injected EarthView::World::Graphic::CMovableObject.
                @remarks
                Essentially this does the same as destroyMovableObject, but only
                removes the instance from the internal lists, it does not attempt
                to destroy it.
                */
                virtual void extractMovableObject(EarthView::World::Graphic::CMovableObject *m);
                /** Extract all injected MovableObjects of a given type.
                @remarks
                Essentially this does the same as destroyAllMovableObjectsByType,
                but only removes the instances from the internal lists, it does not
                attempt to destroy them.
                */
                virtual void extractAllMovableObjectsByType(const EVString &typeName);
                /** Sets a mask which is bitwise 'and'ed with objects own visibility masks
                to determine if the object is visible.
                @remarks
                Note that this is combined with any per-viewport visibility mask
                through an 'and' operation. @see CViewport::setVisibilityMask
                */
                virtual void setVisibilityMask(ev_uint32 vmask);
                /** Gets a mask which is bitwise 'and'ed with objects own visibility masks
                to determine if the object is visible.
                */
                virtual ev_uint32 getVisibilityMask();
                /** Internal method for getting the combination between the global visibility
                mask and the per-viewport visibility mask.
                */
                ev_uint32 _getCombinedVisibilityMask() const;
                /** Sets whether the EarthView::World::Graphic::CSceneManager should search for visible objects, or
                whether they are being manually handled.
                @remarks
                This is an advanced function, you should not use this unless you know
                what you are doing.
                */
                virtual void setFindVisibleObjects(ev_bool find);
                /** Gets whether the EarthView::World::Graphic::CSceneManager should search for visible objects, or
                whether they are being manually handled.
                */
                virtual ev_bool getFindVisibleObjects();
                /** Set whether to automatically normalise normals on objects whenever they
                are scaled.
                @remarks
                Scaling can distort normals so the default behaviour is to compensate
                for this, but it has a cost. If you would prefer to manually manage
                this, set this option to 'false' and use CPass::setNormaliseNormals
                only when needed.
                */
                virtual void setNormaliseNormalsOnScale(ev_bool n);
                /** Get whether to automatically normalise normals on objects whenever they
                are scaled.
                */
                virtual ev_bool getNormaliseNormalsOnScale() const;
                /** Set whether to automatically flip the culling mode on objects whenever they
                are negatively scaled.
                @remarks
                Negativelyl scaling an object has the effect of flipping the triangles,
                so the culling mode should probably be inverted to deal with this.
                If you would prefer to manually manage this, set this option to 'false'
                and use different materials with CPass::setCullingMode set manually as needed.
                */
                virtual void setFlipCullingOnNegativeScale(ev_bool n);
                /** Get whether to automatically flip the culling mode on objects whenever they
                are negatively scaled.
                */
                virtual ev_bool getFlipCullingOnNegativeScale() const;
                /** Render something as if it came from the current queue.
                @param pass		CMaterial pass to use for setting up this quad.
                @param rend		EarthView::World::Graphic::CRenderable to render
                @param shadowDerivation Whether passes should be replaced with shadow caster / receiver passes
                */
                virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend, ev_bool shadowDerivation, ev_bool doLightIteration, const EarthView::World::Graphic::LightList *manualLightList);
                ///virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend, ev_bool shadowDerivation = true,
                ///	ev_bool doLightIteration = false, const EarthView::World::Graphic::LightList* manualLightList = 0);
                virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend, ev_bool shadowDerivation, ev_bool doLightIteration);
                virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend, ev_bool shadowDerivation);
                virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend);
                /** Indicates to the EarthView::World::Graphic::CSceneManager whether it should suppress changing
                the EarthView::World::Graphic::CRenderSystem states when rendering objects.
                @remarks
                This method allows you to tell the EarthView::World::Graphic::CSceneManager not to change any
                EarthView::World::Graphic::CRenderSystem state until you tell it to. This method is only
                intended for advanced use, don't use it if you're unsure of the
                effect. The only RenderSystems calls made are to set the world
                matrix for each object (note - view an projection matrices are NOT
                SET - they are under your control) and to render the object; it is up to
                the caller to do everything else, including enabling any vertex /
                fragment programs and updating their parameter state, and binding
                parameters to the EarthView::World::Graphic::CRenderSystem.
                @note
                Calling this implicitly disables shadow processing since no shadows
                can be rendered without changing state.
                @param suppress If true, no EarthView::World::Graphic::CRenderSystem state changes will be issued
                until this method is called again with a parameter of false.
                */
                virtual void _suppressRenderStateChanges(ev_bool suppress);
                /** Are render state changes suppressed?
                @see _suppressRenderStateChanges
                */
                virtual ev_bool _areRenderStateChangesSuppressed() const;
                /** Internal method for setting up the renderstate for a rendering pass.
                @param pass The EarthView::World::Graphic::CPass details to set.
                @param evenIfSuppressed Sets the pass details even if render state
                when render state changes are suppressed, you should set this to
                true.
                @param shadowDerivation If false, disables the derivation of shadow
                passes from original passes
                @returns
                A EarthView::World::Graphic::CPass object that was used instead of the one passed in, can
                happen when rendering shadow passes
                */
                virtual const EarthView::World::Graphic::CPass *_setPass(const EarthView::World::Graphic::CPass *pass, ev_bool evenIfSuppressed, ev_bool shadowDerivation);
                /*virtual const EarthView::World::Graphic::CPass* _setPass(const EarthView::World::Graphic::CPass* pass, ev_bool evenIfSuppressed = false, ev_bool shadowDerivation = true);*/
                virtual const EarthView::World::Graphic::CPass *_setPass(const EarthView::World::Graphic::CPass *pass, ev_bool evenIfSuppressed);
                virtual const EarthView::World::Graphic::CPass *_setPass(const EarthView::World::Graphic::CPass *pass);
                
                virtual void _markGpuParamsDirty(ev_uint16 mask);
                /** Indicates to the EarthView::World::Graphic::CSceneManager whether it should suppress the
                active shadow rendering technique until told otherwise.
                @remarks
                This is a temporary alternative to setShadowTechnique to suppress
                the rendering of shadows and forcing all processing down the
                standard rendering path. This is intended for internal use only.
                @param suppress If true, no shadow rendering will occur until this
                method is called again with a parameter of false.
                */
                virtual void _suppressShadows(ev_bool suppress);

                /** Are shadows suppressed?
                @see _suppressShadows
                */
                virtual ev_bool _areShadowsSuppressed() const;
                /** Render the objects in a given queue group
                @remarks You should only call this from a CRenderQueueInvocation implementation
                */
                virtual void _renderQueueGroupObjects(EarthView::World::Graphic::CRenderQueueGroup *group, EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om);
                /** Advanced method for supplying an alternative visitor, used for parsing the
                render queues and sending the results to the renderer.
                @remarks
                You can use this method to insert your own implementation of the
                EarthView::World::Graphic::CQueuedRenderableVisitor interface, which receives calls as the queued
                renderables are parsed in a given order (determined by EarthView::World::Graphic::CRenderQueueInvocationSequence)
                and are sent to the renderer. If you provide your own implementation of
                this visitor, you are responsible for either calling the rendersystem,
                or passing the calls on to the base class implementation.
                @note
                Ownership is not taken of this pointer, you are still required to
                delete it yourself once you're finished.
                @param visitor Your implementation of EarthView::World::Graphic::CSceneManager::CSceneMgrQueuedRenderableVisitor.
                If you pass 0, the default implementation will be used.
                */
                void setQueuedRenderableVisitor(EarthView::World::Graphic::CSceneManager::CSceneMgrQueuedRenderableVisitor *visitor);
                /** Gets the current visitor object which processes queued renderables. */
                EarthView::World::Graphic::CSceneManager::CSceneMgrQueuedRenderableVisitor *getQueuedRenderableVisitor() const;

                /** Get the rendersystem subclass to which the output of this Scene Manager
                gets sent
                */
                EarthView::World::Graphic::CRenderSystem *getDestinationRenderSystem();
                /** Gets the current viewport being rendered (advanced use only, only
                valid during viewport update. */
                EarthView::World::Graphic::CViewport *getCurrentViewport() const;
				/// <summary>
				/// 返回当前渲染系统正在使用的相机
				/// </summary>
				/// <returns></returns>
				EarthView::World::Graphic::CCamera *getCameraInProgress() const;

                /** Returns a visibility boundary box for a specific camera. */
                const EarthView::World::Graphic::VisibleObjectsBoundsInfo &getVisibleObjectsBoundsInfo(const EarthView::World::Graphic::CCamera *cam) const;
                /**  Returns the shadow caster AAB for a specific light-camera combination */
                const EarthView::World::Graphic::VisibleObjectsBoundsInfo &getShadowCasterBoundsInfo(const EarthView::World::Graphic::CLight *light, ev_size_t iteration) const;
                const EarthView::World::Graphic::VisibleObjectsBoundsInfo &getShadowCasterBoundsInfo(const EarthView::World::Graphic::CLight *light) const;
                /** Set whether to use camera-relative co-ordinates when rendering, ie
                to always place the camera at the origin and move the world around it.
                @remarks
                This is a technique to alleviate some of the precision issues associated with
                rendering far from the origin, where single-precision floats as used in most
                GPUs begin to lose their precision. Instead of including the camera
                translation in the view matrix, it only includes the rotation, and
                the world matrices of objects must be expressed relative to this.
                @note
                If you need this option, you will probably also need to enable double-precision
                mode in EV_World (EV_DOUBLE_PRECISION), since even though this will
                alleviate the rendering precision, the source camera and object positions will still
                suffer from precision issues leading to jerky movement.
                */
                virtual void setCameraRelativeRendering(ev_bool rel);
                /** Get whether to use camera-relative co-ordinates when rendering, ie
                to always place the camera at the origin and move the world around it.
                */
                virtual ev_bool getCameraRelativeRendering() const;

                /** Add a level of detail listener. */
                void addLodListener(EarthView::World::Graphic::CLodListener *ref_listener);
                /**
                Remove a level of detail listener.
                @remarks
                Do not call from inside an EarthView::World::Graphic::CLodListener callback method.
                */
                void removeLodListener(EarthView::World::Graphic::CLodListener *listener);
                /** Notify that a movable object lod change event has occurred. */
                void _notifyMovableObjectLodChanged(EarthView::World::Graphic::MovableObjectLodChangedEvent &evt);
                /** Notify that an entity mesh lod change event has occurred. */
                void _notifyEntityMeshLodChanged(EarthView::World::Graphic::EntityMeshLodChangedEvent &evt);
                /** Notify that an entity material lod change event has occurred. */
                void _notifyEntityMaterialLodChanged(EarthView::World::Graphic::EntityMaterialLodChangedEvent &evt);
                /** Handle lod events. */
                void _handleLodEvents();

                virtual Real getHeightAt(Real latitude,Real lontitude,ev_real32 targetSamplesPerDegrees)
                {
                    return 0.0;
                }

				virtual Real getBestHeightAt(Real latitude,Real lontitude)
				{
					return 0.0;
				}
				virtual Real getHeightAtTile(Real latitude,Real lontitude)
				{
					return 0.0;
				}
				
				/// 获取瓦片经纬度包围盒
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns>是否成功</returns>
                virtual ev_bool getTileEnvelope(ev_int32 level,ev_uint32 row,ev_uint32 col,Real& minX,Real& maxX,Real& minY,Real& maxY)
                {
                    return false;
                }

				/// <summary>
				/// 添加临时图层
				/// </summary>
				/// <param name="layer">图层</param>  				
				/// <returns>是否成功</returns>
				virtual ev_bool addTempLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

				/// <summary>
				/// 删除临时图层
				/// </summary>
				/// <param name="layer">图层</param>  				
				/// <returns>是否成功</returns>
				virtual ev_bool removeTempLayer(EarthView::World::Spatial::Atlas::ILayer* layer);

				/// <summary>
				/// 刷新瓦片纹理
				/// </summary>
				/// <param name="updateImageGroup">是否更新影像层</param>  
				/// <param name="updateFeatureGroup">是否更新特征层</param> 
				/// <param name="updateKmlGroup">是否更新kml层</param> 
				/// <returns></returns>
				virtual ev_void updateQuadImage(bool updateImageGroup,bool updateFeatureGroup,bool updateKmlGroup);

				/// <summary>
				/// 刷新瓦片纹理<只刷新指定范围内的瓦片>
				/// </summary>
				/// <param name="updateImageGroup">是否更新影像层</param>  
				/// <param name="updateFeatureGroup">是否更新特征层</param> 
				/// <param name="updateKmlGroup">是否更新kml层</param> 
				/// <param name="minX">最小经度</param>
				/// <param name="maxX">最大经度</param>
				/// <param name="minY">最小纬度</param>
				/// <param name="maxY">最大纬度</param>
				/// <returns></returns>
				virtual ev_void updateQuadImage(bool updateImageGroup,bool updateFeatureGroup,bool updateKmlGroup,Real minX,Real maxX,Real minY,Real maxY);
				/// <summary>
				/// 刷新摄影测量纹理
				/// </summary>
				/// <returns></returns>
				virtual ev_void updateOBQ(ev_bool bUpdateVectorTexture,ev_bool bUpdateKmlTexture, ev_bool bUpdateTemporaryTexture, ev_bool bUpdateTerrain);
ev_private:
				/// <summary>
				/// 获取地形信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>地形信息</returns>
				virtual EVString getTerrainLayerInfo() const;

			    EarthView::World::Graphic::CSceneManager::IlluminationRenderStage getIlluminationRenderStage();

public:        
				/// <summary>
				/// 允许碰撞
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
	            virtual void setCollisionDetectionEnable(_in ev_bool enable);
				/// <summary>
				/// 是否碰撞
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_bool getCollisionDetectionEnable();

ev_private:
				ev_bool mEnableCollisionDetection;

				class EV_GRAPHIC_DLL CVisibleEntityQuene
				{
				public:
					struct EV_GRAPHIC_DLL EntityStruct
					{
					public:
						EntityStruct()
							:mEntity(NULL)
						{

						}
						EarthView::World::Graphic::CEntity* mEntity;
						EVString mEntityName;
						EVString mParentNodeName;
					};

					CVisibleEntityQuene();

					~CVisibleEntityQuene();

					ev_int32 getReadEntityVectorCount();

					ev_vector<EntityStruct>* getWriteEntityVector();

					ev_vector<EntityStruct>* getReadEntityVector();

					void addWriteEntityVector(ev_vector<EntityStruct>* entityVector);

					void addReadEntityVector(ev_vector<EntityStruct>* entityVector);

					EarthView::World::Core::CRecursiveMutex mMutex;

					ev_vector<EntityStruct>* mVisibleEntityVector1;
					ev_vector<EntityStruct>* mVisibleEntityVector2;

					ev_list<ev_vector<EntityStruct>*> mReadVisibleEntityList;
					ev_list<ev_vector<EntityStruct>*> mWriteVisibleEntityList;
				};

				CVisibleEntityQuene mVisibleEntityQuene;

				ev_vector<CSceneManager::CVisibleEntityQuene::EntityStruct>* mVisibleEntityVector;

            };
            //// Bitmask containing scene types
            typedef ev_uint16 SceneTypeMask;
            /** Classification of a scene to allow a decision of what type of
            SceenManager to provide back to the application.
            */
            enum SceneType
            {
                ST_GENERIC = 1,   			///普通场景
                ST_EXTERIOR_CLOSE = 2,   			///室外封闭场景
                ST_EXTERIOR_FAR = 4,     			///室外无线场景
                ST_EXTERIOR_REAL_FAR = 8,
                ST_INTERIOR = 16,  			///室内场景
				ST_OCTREE = 32,
				ST_TERRAIN = 64,
				ST_GEO = 128,
				ST_COMMON = 256
            };
            /** Structure containing information about a scene manager. */
            class EV_GRAPHIC_DLL SceneManagerMetaData : public EarthView::World::Core::CBaseObject
            {
            public:
                SceneManagerMetaData();
                //// A globally unique string identifying the scene manager type
                EVString typeName;
                //// A text description of the scene manager
                EVString description;
                //// A mask describing which sorts of scenes this manager can handle
                SceneTypeMask sceneTypeMask;
                //// Flag indicating whether world geometry is supported
                ev_bool worldGeometrySupported;
            ev_private:
                SceneManagerMetaData(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /** Class which will create instances of a given EarthView::World::Graphic::CSceneManager. */
            class EV_GRAPHIC_DLL CSceneManagerFactory : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                mutable EarthView::World::Graphic::SceneManagerMetaData mMetaData;
                mutable ev_bool mMetaDataInit;
                //// Internal method to initialise the metadata, must be implemented
                virtual void initMetaData() const;
            ev_private:
                CSceneManagerFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CSceneManagerFactory();
                virtual ~CSceneManagerFactory();
                /** Get information about the EarthView::World::Graphic::CSceneManager type created by this factory. */
                virtual const EarthView::World::Graphic::SceneManagerMetaData &getMetaData() const;
                /** Create a new instance of a EarthView::World::Graphic::CSceneManager.
                @remarks
                Don't call directly, use CSceneManagerEnumerator::createSceneManager.
                */
                virtual EarthView::World::Graphic::CSceneManager *createInstance(const EVString &instanceName);
                /** Destroy an instance of a EarthView::World::Graphic::CSceneManager. */
                virtual void destroyInstance(EarthView::World::Graphic::CSceneManager *instance);
            };
        }
    }
}


#endif

