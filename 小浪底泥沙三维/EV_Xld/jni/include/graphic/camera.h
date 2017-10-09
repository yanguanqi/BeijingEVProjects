#ifndef __Camera_H__
#define __Camera_H__
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include <mathengine/quaternion.h>
#include <mathengine/ray.h>
#include <mathengine/planeboundedvolume.h>
#include "frustum.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;
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

            class CViewport;
            /// <summary>
            /// 摄像机类
            /// 此类支持透视投影、正射投影，支持线画模式等渲染模式，能实现画中画，分屏等功能。
            /// </summary>
            class EV_GRAPHIC_DLL CCamera : public EarthView::World::Graphic::CFrustum
            {
                friend class CCameraInternalRenderable;
            public:
                /// <summary>
                /// 摄像机监听器类
                /// 此类通过接口响应，监听摄像机事件。
                /// </summary>
                class EV_GRAPHIC_DLL CCameraListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCameraListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCameraListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CCameraListener();
                    /// <summary>
                    /// 渲染场景之前被访问
                    /// </summary>
                    /// <param name="cam">摄像机</param>
                    /// <returns></returns>
                    virtual void cameraPreRenderScene( _in EarthView::World::Graphic::CCamera *cam);
                    /// <summary>
                    /// 渲染场景之后被访问
                    /// </summary>
                    /// <param name="cam">摄像机</param>
                    /// <returns></returns>
                    virtual void cameraPostRenderScene( _in EarthView::World::Graphic::CCamera *cam);
                    /// <summary>
                    /// 摄像机被销毁
                    /// </summary>
                    /// <param name="cam">摄像机</param>
                    /// <returns></returns>
                    virtual void cameraDestroyed( _in EarthView::World::Graphic::CCamera *cam);
				};
                class EV_GRAPHIC_DLL CCameraInternalRenderable : public EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable
                {
                ev_private:
                    CCameraInternalRenderable(EarthView::World::Core::CNameValuePairList *pList)
                        : CFrustum::CFrustumInternalRenderable((EarthView::World::Graphic::CCamera *)pList->GetAt("ref_parent"))
                        , mParent((EarthView::World::Graphic::CCamera *)pList->GetAt("ref_parent"))
                    {
                    }
                public:
                    CCameraInternalRenderable(CCamera *ref_parent)
                        : CFrustum::CFrustumInternalRenderable(ref_parent)
                        , mParent(ref_parent)
                    {
                    }
                    /// <summary>
                    /// 获得世界坐标转换矩阵
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                private:
                    EarthView::World::Graphic::CCamera *mParent;
                };
                virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable *getCameraRenderablePtr()
                {
                    return mpRenderable;
                }
                ///virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable& getCameraRenderable(){EV_ASSERT(mpRenderable != NULL); return *mpRenderable;}

				void operator = (_in const EarthView::World::Graphic::CCamera& rhs);

				ev_bool shouldChangeProjectMatrix(EarthView::World::Graphic::CNode *rootNode, EarthView::World::Graphic::CNode *lockTarget, _out EarthView::World::Spatial::Math::CMatrix4 &projectMatrixRS);
            private:
                EarthView::World::Graphic::CCamera::CCameraInternalRenderable *mpRenderable;
            protected:
                EarthView::World::Graphic::CSceneManager *mSceneMgr;
                EarthView::World::Spatial::Math::CQuaternion mOrientation;
                /// <summary>
                /// 摄像机坐标，默认为（0,0,0）
                /// </summary>
                EarthView::World::Spatial::Math::CVector3 mPosition;
                mutable EarthView::World::Spatial::Math::CQuaternion mDerivedOrientation;
                mutable EarthView::World::Spatial::Math::CVector3 mDerivedPosition;
                //// Real world orientation/position of the camera
                mutable EarthView::World::Spatial::Math::CQuaternion mRealOrientation;
                mutable EarthView::World::Spatial::Math::CVector3 mRealPosition;
                //// Whether to yaw around a fixed axis.
                ev_bool mYawFixed;
                //// Fixed axis to yaw around
                EarthView::World::Spatial::Math::CVector3 mYawFixedAxis;
                //// Rendering type
                EarthView::World::Graphic::PolygonMode mSceneDetail;
                //// Stored number of visible faces in the last render
                ev_uint32 mVisFacesLastRender;
                //// Stored number of visible batches in the last render
                ev_uint32 mVisBatchesLastRender;
				//// Stored number of visible Vertices in the last render
				ev_uint32 mVisVerticesLastRender;
                //// Shared class-level name for CMovable type
                static EVString msMovableType;
                //// EarthView::World::Graphic::CSceneNode which this EarthView::World::Graphic::CCamera will automatically track
                EarthView::World::Graphic::CSceneNode *mAutoTrackTarget;
				//// 相机锁定到节点之后，需要处理高空物体的裁剪问题，这个节点是物体被查找到的根节点
                EarthView::World::Graphic::CNode *mLockToTargetFoundRootNode;
				//// 修改了近裁剪面之后的与渲染系统相关的投影矩阵
				EarthView::World::Spatial::Math::CMatrix4 mLockToTargetProjectMatrixRS;
				//// 渲染对象的投影矩阵是否被改变了
				ev_bool mProjectMatrixChanged;
				//// 每帧会将这个标志位置为false，计算一次之后置为true，保证每帧只计算一次
				ev_bool mLockToTargetProjectMatrixDirty;
				//// 只有满足一定的高度条件，锁定物体才需要修改投影矩阵
				ev_bool mLockToTargetProjectMatrixShouldChange;
                //// Tracking offset for fine tuning
                EarthView::World::Spatial::Math::CVector3 mAutoTrackOffset;
                /// Scene LOD factor used to adjust overall LOD
                Real mSceneLodFactor;
                //// Inverted scene LOD factor, can be used by Renderables to adjust their LOD
                Real mSceneLodFactorInv;

                /** Viewing window.
                @remarks
                Generalize camera class for the case, when viewing frustum doesn't cover all viewport.
                */
                Real mWLeft, mWTop, mWRight, mWBottom;
                //// Is viewing window used.
                ev_bool mWindowSet;
                //// Windowed viewport clip planes
                mutable EarthView::World::Spatial::Math::PlaneList mWindowClipPlanes;
                /// Was viewing window changed.
                mutable ev_bool mRecalcWindow;
                EarthView::World::Graphic::CViewport *mLastViewport;
				//add by zk 2013-11-5
				EarthView::World::Graphic::CViewport *mCurrentViewport;
                /** Whether aspect ratio will automatically be recalculated
                when a viewport changes its size
                */
                ev_bool mAutoAspectRatio;
                //// Custom culling frustum
                EarthView::World::Graphic::CFrustum *mCullFrustum;
                //// Whether or not the rendering distance of objects should take effect for this camera
                ev_bool mUseRenderingDistance;
                //// EarthView::World::Graphic::CCamera to use for LOD calculation
                const EarthView::World::Graphic::CCamera *mLodCamera;
                //// Whether or not the minimum display size of objects should take effect for this camera
                ev_bool mUseMinPixelSize;
                //// @see Camera::getPixelDisplayRatio
                Real mPixelDisplayRatio;
                typedef vector<EarthView::World::Graphic::CCamera::CCameraListener *> ListenerList;
                ListenerList mListeners;

            ev_internal:
                /// Internal functions for calcs
                ev_bool isViewOutOfDate() const;
                //// Signal to update frustum information.
                void invalidateFrustum() const;
                //// Signal to update view information.
                void invalidateView() const;
                /// <summary>
                ///使用参数设置真实窗口
                /// 这方法被需求访问
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setWindowImpl() const;
                /** Helper function for forwardIntersect that intersects rays with canonical plane */
                virtual EarthView::World::Spatial::Math::Vector4List getRayForwardIntersect(const EarthView::World::Spatial::Math::CVector3 &anchor, const EarthView::World::Spatial::Math::CVector3 *dir, Real planeOffset) const;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name"></param>
                /// <param name="sm"></param>
                /// <returns></returns>
                CCamera( _in const EVString &name, _in EarthView::World::Graphic::CSceneManager *ref_sm);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CCamera(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CCamera();
                /// <summary>
                /// 为摄像机添加一个监视器
                /// </summary>
                /// <param name="1"></param>
                /// <returns></returns>
                virtual void addListener(_in EarthView::World::Graphic::CCamera::CCameraListener *ref_l);
                /// <summary>
                /// 为摄像机移除一个监视器
                /// </summary>
                /// <param name="1"></param>
                /// <returns></returns>
                virtual void removeListener(_in EarthView::World::Graphic::CCamera::CCameraListener *l);
                /// <summary>
                /// 返回渲染该摄像机的场景管理的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManager *getSceneManager() const;
                /// <summary>
                /// 设置多边形渲染模式
                /// 共三种模型
                /// </summary>
                /// <param name="sd"></param>
                /// <returns></returns>
                void setPolygonMode(PolygonMode sd);
                /// <summary>
                /// 获取多边形渲染模式
                /// 共三种模型
                /// </summary>
                /// <param name="sd"></param>
                /// <returns></returns>
                EarthView::World::Graphic::PolygonMode getPolygonMode() const;
                /// <summary>
                /// 设置摄像机的位置
                /// </summary>
                /// <param name="x"></param>
                /// <param name="y"></param>
                /// <param name="z"></param>
                /// <returns></returns>
                void setPosition(Real x, Real y, Real z);
                /// <summary>
                /// 设置摄像机的位置
                /// </summary>
                /// <param name="vec"></param>
                /// <returns></returns>
                void setPosition(_in const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 获取摄像机的位置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
                /// <summary>
                /// 在世界坐标系下移动摄像机
                /// </summary>
                /// <param name="vec">位置增量</param>
                /// <returns></returns>
                void move(const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 在相机自身坐标系下移动摄像机
                /// </summary>
                /// <param name="vec">位置增量</param>
                /// <returns></returns>
                void moveRelative(const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 设置相机朝向
                /// </summary>
                /// <param name="x"></param>
                /// <param name="y"></param>
                /// <param name="z"></param>
                /// <returns></returns>
                void setDirection(Real x, Real y, Real z);
                /// <summary>
                /// 设置相机朝向
                /// </summary>
                /// <param name="vec"></param>
                /// <returns></returns>
                void setDirection(const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 获得相机朝向
                /// </summary>
                /// <param name=""></param>
                /// <returns>方向向量</returns>
                EarthView::World::Spatial::Math::CVector3 getDirection() const;
                /// <summary>
                /// 获得上方向
                /// </summary>
                /// <param name=""></param>
                /// <returns>方向向量</returns>
                EarthView::World::Spatial::Math::CVector3 getUp() const;
                /// <summary>
                /// 获得右方向
                /// </summary>
                /// <param name=""></param>
                /// <returns>方向向量</returns>
                EarthView::World::Spatial::Math::CVector3 getRight() const;
                /// <summary>
                /// 设置朝向目标点                
                /// </summary>
                /// <param name="targetPoint">目标点</param>
                /// <returns></returns>
                void lookAt( _in const EarthView::World::Spatial::Math::CVector3 &targetPoint );
                /// <summary>
                /// 设置朝向目标点                
                /// </summary>
                /// <param name="x"></param>
                /// <param name="y"></param>
                /// <param name="z"></param>
                /// <returns></returns>
                void lookAt(Real x, Real y, Real z);
                /// <summary>
                /// 将摄像机绕Z轴逆时针旋转指定角度
                /// </summary>
                /// <param name="angle">角度</param>
                /// <returns></returns>
                void roll(_in const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 将摄像机绕Y轴逆时针旋转指定角度
                /// </summary>
                /// <param name="angle">角度</param>
                /// <returns></returns>
                void yaw(_in const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 将摄像机绕X轴上下旋转指定角度
                /// </summary>
                /// <param name="angle">角度</param>
                /// <returns></returns>
                void pitch(_in const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 绕任意轴旋转角度
                /// </summary>
                /// <param name="axis">三维向量</param>
                /// <param name="angle">角度</param>
                /// <returns></returns>
                void rotate(_in const EarthView::World::Spatial::Math::CVector3 &axis, _in const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 使用四元数进行旋转
                /// </summary>
                /// <param name="q">四元数</param>
                /// <returns></returns>
                void rotate(const EarthView::World::Spatial::Math::CQuaternion &q);
				/// <summary>
				///返回绝对投影矩阵
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const;
				/// <summary>
				///返回相机是否锁定某个目标
				/// <returns></returns>
				virtual ev_bool isLockingToTarget() const;
				/// <summary>
				///返回锁定点
				///</summary>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CSceneNode* getLockTarget();

				/// <summary>
				///是否为从相机
				///</summary>
				/// <returns></returns>
				virtual ev_bool isSlaveCamera();

                /// <summary>
                /// 指定摄像机绕本地Y轴还是指定的固定轴旋转
                /// </summary>
                /// <param name="useFixed">false，使用本地Y周；true，使用指定固定轴</param>
                /// <param name="fixedAxis"></param>
                /// <returns></returns>
                void setFixedYawAxis( ev_bool useFixed, const EarthView::World::Spatial::Math::CVector3 &fixedAxis);
                void setFixedYawAxis( ev_bool useFixed);
                /// <summary>
                /// 获取摄像机当前旋转四元数
                /// </summary>
                /// <param name=""></param>
                /// <returns>四元数</returns>
                const EarthView::World::Spatial::Math::CQuaternion &getOrientation() const;
                /// <summary>
                /// 设置摄像机当前旋转四元数
                /// </summary>
                /// <param name="q">四元数</param>
                /// <returns></returns>
                void setOrientation(const EarthView::World::Spatial::Math::CQuaternion &q);
                /// <summary>
                /// 渲染场景
                /// 将渲染场景与摄像机联系到一起，从视口开始渲染
                /// </summary>
                /// <param name="vp"></param>
                /// <param name="includeOverlays"></param>
                /// <returns></returns>
                void _renderScene(EarthView::World::Graphic::CViewport *ref_vp, ev_bool includeOverlays);
                ///输出流功能
                EV_GRAPHIC_DLL friend std::ostream &operator<<(std::ostream &o, const EarthView::World::Graphic::CCamera &c);
                /// <summary>
                /// 通知渲染的三角面数量
                /// 内部方法
                /// </summary>
                /// <param name="numfaces"></param>
                /// <returns></returns>
                void _notifyRenderedFaces(ev_uint32 numfaces);                
				/// <summary>
				/// 通知渲染的批次
				/// 内部方法
				/// </summary>
				/// <param name="numbatches"></param>
				/// <returns></returns>
				void _notifyRenderedBatches(ev_uint32 numbatches);
				/// <summary>
				/// 通知渲染的顶点数量
				/// 内部方法
				/// </summary>
				/// <param name="numvertices"></param>
				/// <returns></returns>
				void _notifyRenderedVertices(ev_uint32 numvertices);
                /// <summary>
                /// 获取渲染的三角面数量
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 _getNumRenderedFaces() const;
                /// <summary>
                /// 获取渲染的批次
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 _getNumRenderedBatches() const;
				/// <summary>
				/// 获取渲染的顶点数量
				/// 内部方法
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 _getNumRenderedVertices() const;
                /// <summary>
                /// 取得摄像机累积的方向，包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CQuaternion &getDerivedOrientation() const;
                /// <summary>
                /// 取得摄像机累积的位置，包括从节点累积的平移
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector3 &getDerivedPosition() const;
                /// <summary>
                /// 取得摄像机累积的方向向量，包括从节点累积的矩阵变换
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CVector3 getDerivedDirection() const;
                /// <summary>
                /// 取得摄像机累积的上方向，包括从节点累积的变换
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CVector3 getDerivedUp() const;
                /// <summary>
                /// 取得摄像机累积的右方向，包括从节点累积的变换
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CVector3 getDerivedRight() const;
                /// <summary>
                /// 获取摄像机真实世界的旋转四元数
                /// 包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>四元数值</returns>
                const EarthView::World::Spatial::Math::CQuaternion &getRealOrientation() const;
                /// <summary>
                /// 获取摄像机真实世界位置坐标
                /// 包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量值</returns>
                const EarthView::World::Spatial::Math::CVector3 &getRealPosition() const;
                /// <summary>
                /// 获取摄像机真实世界方向
                /// 包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量值</returns>
                EarthView::World::Spatial::Math::CVector3 getRealDirection() const;
                /// <summary>
                /// 获取摄像机真实世界向上矢量
                /// 包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量值</returns>
                EarthView::World::Spatial::Math::CVector3 getRealUp() const;
                /// <summary>
                /// 获取摄像机真实世界向右矢量
                /// 包括从节点累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量值</returns>
                EarthView::World::Spatial::Math::CVector3 getRealRight() const;

                /// <summary>
                /// 获得可移动的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>可移动的类型</returns>
                EVString getMovableType() const;
                /// <summary>
                /// 设置是否启用自动跟踪场景节点
                /// </summary>
                /// <param name="enabled">true：摄像机将追踪场景节点作为下个参数；false：停止跟踪</param>
                /// <param name="target">摄像机追踪场景点，追踪结束之前不要删除此场景节点</param>
                /// <param name="offset"></param>
                /// <returns></returns>
                void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode *const ref_target, const EarthView::World::Spatial::Math::CVector3 &offset);
                void setAutoTracking(ev_bool enabled, EarthView::World::Graphic::CSceneNode *const ref_target);
                void setAutoTracking(ev_bool enabled);
                /// <summary>
                /// 设置摄像机LOD偏移值
                /// </summary>
                /// <param name="factor">默认为1.0</param>
                /// <returns></returns>
                void setLodBias(Real factor);
                void setLodBias();
                /// <summary>
                /// 获取当前摄像机LOD偏移值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getLodBias() const;
                /// <summary>
                /// 设置一个摄像机指针，可以终止LOD设置
                /// </summary>
                /// <param name="lodCam">摄像机指针</param>
                /// <returns></returns>
                virtual void setLodCamera(const EarthView::World::Graphic::CCamera *ref_lodCam);
                /// <summary>
                /// 获取一个摄像机指针，可以终止LOD设置
                /// </summary>
                /// <param name=""></param>
                /// <returns>摄像机指针</returns>
                virtual const EarthView::World::Graphic::CCamera *getLodCamera() const;
                /// <summary>
                /// 通过一个视口位置从摄像机获取一个世界空间射线作为投射
                /// </summary>
                /// <param name="screenx">射线与视口的相交</param>
                /// <param name="screeny">射线与视口的相交</param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CRay getCameraToViewportRay(Real screenx, Real screeny) const;
                /// <summary>
                /// 通过一个视口位置从摄像机获取一个世界空间射线作为投射
                /// </summary>
                /// <param name="screenx">射线与视口的相交</param>
                /// <param name="screeny">射线与视口的相交</param>
                /// <param name="outRay">射线实例的填充结果</param>
                /// <returns></returns>
                void getCameraToViewportRay(Real screenx, Real screeny, EarthView::World::Spatial::Math::CRay *outRay) const;
                /// <summary>
                /// 根据视口矩形，获取一个封闭世界空间容器体积
                /// </summary>
                /// <param name="screenLeft">屏幕矩形的边界</param>
                /// <param name="screenTop">屏幕矩形的边界</param>
                /// <param name="screenRight">屏幕矩形的边界</param>
                /// <param name="screenBottom">屏幕矩形的边界</param>
                /// <param name="includeFarPlane">为真，体积被离摄像机远的面截断</param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CPlaneBoundedVolume getCameraToViewportBoxVolume(Real screenLeft,
                        Real screenTop, Real screenRight, Real screenBottom, ev_bool includeFarPlane);
                EarthView::World::Spatial::Math::CPlaneBoundedVolume getCameraToViewportBoxVolume(Real screenLeft,
                        Real screenTop, Real screenRight, Real screenBottom);
                /// <summary>
                /// 根据视口矩形，获取一个封闭世界空间容器体积
                /// </summary>
                /// <param name="screenLeft">屏幕矩形的边界</param>
                /// <param name="screenTop">屏幕矩形的边界</param>
                /// <param name="screenRight">屏幕矩形的边界</param>
                /// <param name="screenBottom">屏幕矩形的边界</param>
                /// <param name="outVolume">平面容器的填充结果</param>
                /// <param name="includeFarPlane">为真，体积被离摄像机远的面截断</param>
                /// <returns></returns>
                void getCameraToViewportBoxVolume(Real screenLeft, Real screenTop, Real screenRight, Real screenBottom,
                                                  EarthView::World::Spatial::Math::CPlaneBoundedVolume *outVolume, ev_bool includeFarPlane);
                void getCameraToViewportBoxVolume(Real screenLeft, Real screenTop, Real screenRight, Real screenBottom,
                                                  EarthView::World::Spatial::Math::CPlaneBoundedVolume *outVolume);
                /// <summary>
                /// 获取LOD估算值
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real _getLodBiasInverse() const;
                /// <summary>
                /// 自动追踪
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _autoTrack();
                /// <summary>
                /// 设置视口内的可视窗口
                /// </summary>
                /// <param name="Left"></param>
                /// <param name="Top"></param>
                /// <param name="Right"></param>
                /// <param name="Bottom"></param>
                /// <returns>范围</returns>
                virtual void setWindow (Real Left, Real Top, Real Right, Real Bottom);
                /// <summary>
                /// 重置窗口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetWindow ();
                /// <summary>
                /// 是否设置了窗口
                /// </summary>
                /// <param name=""></param>
                /// <returns>为真，被使用，否则没被使用</returns>
                virtual ev_bool isWindowSet() const;
                /// <summary>
                /// 获取可视窗口裁剪面
                /// 只有isWindowSet被设置为真的时候有效
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::PlaneList &getWindowPlanes() const;
                /// <summary>
                /// 获得包围盒半径
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 获取摄像机的自动追踪目标
                /// </summary>
                /// <param name=""></param>
                /// <returns>节点</returns>
                EarthView::World::Graphic::CSceneNode *getAutoTrackTarget() const;
                /// <summary>
                /// 如果自动追踪，获取摄像机当前偏移量
                /// </summary>
                /// <param name=""></param>
                /// <returns>矢量值</returns>
                const EarthView::World::Spatial::Math::CVector3 &getAutoTrackOffset() const;
                /// <summary>
                /// 获取摄像机挂接的最后一个视口
                /// </summary>
                /// <param name=""></param>
                /// <returns>视口</returns>
                EarthView::World::Graphic::CViewport *getViewport() const;
				/// <summary>
				/// 获取当前渲染过程中使用的相机,有可能返回空指针。
				/// </summary>
				/// <returns>视口</returns>
				EarthView::World::Graphic::CViewport *getCurrentViewport() const;
                /// <summary>
                /// 通知摄像机它正被一个视口使用
                /// </summary>
                /// <param name="viewport">视口名称</param>
                /// <returns></returns>
                void _notifyViewport(EarthView::World::Graphic::CViewport *ref_viewport);
                /// <summary>
                /// 设置自动图像纵横比
                /// 当平截头体大小改变，会重新计算图像纵横比
                /// 如果同一时间，摄像机或者平头截图被一个视口使用，可以设置为真。
                /// </summary>
                /// <param name="autoratio">是否自动计算</param>
                /// <returns></returns>
                void setAutoAspectRatio(ev_bool autoratio);
                /// <summary>
                /// 是否获取当前自动图像纵横比
                /// </summary>
                /// <param name=""></param>
                /// <returns>为真，获取，否则不获取</returns>
                ev_bool getAutoAspectRatio() const;
                /// <summary>
                /// 设置摄像机使用的视椎体
                /// </summary>
                /// <param name="frustum">平截头体名称</param>
                /// <returns></returns>
                void setCullingFrustum(EarthView::World::Graphic::CFrustum *ref_frustum);
                /// <summary>
                /// 返回使用中的视椎体
                /// </summary>
                /// <param name=""></param>
                /// <returns>平截头体</returns>
                EarthView::World::Graphic::CFrustum *getCullingFrustum() const;
                /// <summary>
                /// 前交会
                /// 向前投射也许会导致在无线距离远的地方产生交叉
                /// </summary>
                /// <param name="worldPlane">世界平面</param>
                /// <param name="intersect3d">交叉的四维向量值</param>
                /// <returns></returns>
                virtual void forwardIntersect(const EarthView::World::Spatial::Math::CPlane &worldPlane, EarthView::World::Spatial::Math::Vector4List *intersect3d) const;
                /// <summary>
                /// 测试给定的包围盒是否在视椎体中
                /// </summary>
                /// <param name="bound">检查封装盒</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，包围盒可见</returns>
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound) const;
                /// <summary>
                /// 测试给定的球体是否在视椎体中
                /// </summary>
                /// <param name="bound">球体</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，球体可见</returns>
                ev_bool isVisible(const EarthView::World::Spatial::Math::CSphere &bound, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                ev_bool isVisible(const EarthView::World::Spatial::Math::CSphere &bound) const;
                /// <summary>
                /// 测试给定的顶点是否在视椎体中
                /// </summary>
                /// <param name="vert">顶点</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，点可见</returns>
                ev_bool isVisible(const EarthView::World::Spatial::Math::CVector3 &vert, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                ev_bool isVisible(const EarthView::World::Spatial::Math::CVector3 &vert) const;                
                /// <summary>
                /// 获取平截头体的特定面
                /// </summary>
                /// <param name="plane"></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CPlane &getFrustumPlane( ev_uint16 plane ) const;
                /// <summary>
                /// 投影球体到最近的平面，获取封闭盒
                /// </summary>
                /// <param name="sphere">球体的映射</param>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <param name="right"></param>
                /// <param name="bottom"></param>
                /// <returns></returns>
                ev_bool projectSphere(const EarthView::World::Spatial::Math::CSphere &sphere,
                                      Real *left, Real *top, Real *right, Real *bottom) const;
                /// <summary>
                /// 获取到近裁剪面的距离
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                Real getNearClipDistance() const;
                /// <summary>
                /// 获取到远裁剪面的距离
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                Real getFarClipDistance() const;
                /// <summary>
                /// 取得该摄像机的观察矩阵
                /// 只能内部使用
                /// </summary>
                /// <param name=""></param>
                /// <returns>四维矩阵</returns>
                const EarthView::World::Spatial::Math::CMatrix4 &getViewMatrix() const;
                /// <summary>
                /// 获取该摄像机观察矩阵
                /// 特殊情况下允许访问者决定是否使用自定义选择平截头体
                /// </summary>
                /// <param name="ownFrustumOnly"></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CMatrix4 &getViewMatrix(ev_bool ownFrustumOnly) const;
                /// <summary>
                /// 设置用户渲染距离
                /// 设置摄像机是否使用渲染距离在最终的图像中排除远处的对象
                /// 系统默认使用此方法
                /// </summary>
                /// <param name="use">true为使用，false不使用</param>
                /// <returns></returns>
                virtual void setUseRenderingDistance(ev_bool use);
                /// <summary>
                /// 获取用户渲染距离
                /// 摄像机是否使用渲染距离在最终的图像中排除远处的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getUseRenderingDistance() const;
                /// <summary>
                /// 同步摄像机中心
                /// 从一个摄像机复制位置信息，投影类型，修建距离等信息给另一个摄像机
                /// </summary>
                /// <param name="cam">摄像机名称</param>
                /// <returns></returns>
                virtual void synchroniseBaseSettingsWith(const EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 获取视椎体位置坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector3 &getPositionForViewUpdate() const;
                /// <summary>
                /// 获取视椎体方向
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CQuaternion &getOrientationForViewUpdate() const;

                void setUseMinPixelSize(ev_bool enable)
                {
                    mUseMinPixelSize = enable;
                }
                ev_bool getUseMinPixelSize() const
                {
                    return mUseMinPixelSize;
                }
                Real getPixelDisplayRatio() const
                {
                    return mPixelDisplayRatio;
                }

				/// <summary>
				/// 相机拷贝
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual _extfree EarthView::World::Graphic::CCamera* clone(const EVString& newName)const;

				virtual const EarthView::World::Spatial::Math::CDegree& getHeading() const;

				virtual const EarthView::World::Spatial::Math::CDegree& getTilt() const;

				virtual const EarthView::World::Spatial::Math::CDegree& getLatitude() const;

				virtual const EarthView::World::Spatial::Math::CDegree& getLongitude() const;

				virtual ev_real64 getAltitude() const;

				virtual ev_bool isUnderGround() const;

				virtual ev_real64 getCameraDistanceOfGround() const;

				virtual ev_real64 getAltitudeUnderCamera() const;

				/// <summary>
				/// 返回Globe视口
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CViewport* getGlobeViewport() const;

				virtual ev_bool hasChanged() const;
            ev_private:
                /// <summary>
                /// 得到平截头体的棱角坐标
                /// 分别是近截面的和远截面的四个角
                /// </summary>
                /// <param name="["></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector3 *getWorldSpaceCorners() const;
				/// <summary>
				/// 得到得到视椎体的角坐标
				/// 分别是近截面的和远截面的四个角
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void getWorldSpaceCorners(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8]);
				/// <summary>
				/// 得到得到视椎体的角坐标
				/// 分别是近截面的和远截面的四个角
				/// </summary>
				/// <param name=""></param>
				/// <param nearClip=""></param>
				/// <param farCilp=""></param>
				/// <returns></returns>
				void getWorldSpaceCorners(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8],Real nearClip,Real farCilp);
			ev_private:
				/// <summary>
				/// 强制相机不改变场景
				/// </summary>
				/// <param name="enable">true,相机不会改变场景的结构．</param>
				/// <returns></returns>
				ev_void setForceNotChangeScene(ev_bool enable);
				/// <summary>
				/// 强制相机不改变场景
				/// </summary>
				/// <returns></returns>
				ev_bool getForceNotChangeScene() const;

				ev_void updateCamera();

			protected:
				ev_bool	mForceNotChangeScene;
            };
        }
    }
}

#endif

