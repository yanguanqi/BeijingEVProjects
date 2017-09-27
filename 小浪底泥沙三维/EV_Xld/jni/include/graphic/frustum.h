#ifndef __Frustum_H__
#define __Frustum_H__
#include "graphic/graphic_config.h"
#include <mathengine/vector2.h>
#include <mathengine/plane.h>
#include "movableobject.h"
#include "renderable.h"
#include "frustum_def.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CVector2;
				class CQuaternion;
				class CMatrix4;
				class CPlaneBoundedVolume;
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

            class CMovablePlane;
            /// <summary>
            /// 视椎体类
            /// 此类模拟人眼的视觉效果，可以改变显示物体的位置，角度以及裁剪。
            /// </summary>
            class EV_GRAPHIC_DLL CFrustum : public EarthView::World::Graphic::CMovableObject
            {
                friend class CFrustumInternalRenderable;
            public:
                /// <summary>
                /// 视椎体内部渲染类
                /// </summary>
                class EV_GRAPHIC_DLL CFrustumInternalRenderable : public EarthView::World::Graphic::CRenderable
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CFrustumInternalRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">父类</param>
                    /// <returns></returns>
                    CFrustumInternalRenderable(_in CFrustum *ref_parent);
                    /// <summary>
                    /// 获取材质，纹理对象
                    /// </summary>
                    /// <returns>本对象</returns>
                    const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                    /// <summary>
                    /// 获取渲染操作对象(基本渲染单元)
                    /// </summary>
                    /// <param name="op">渲染操作对象</param>
                    /// <returns></returns>
                    void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                    /// <summary>
                    /// 获得世界变换矩阵
                    /// </summary>
                    /// <param name="xform">四维矩阵</param>
                    /// <returns></returns>
                    void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                    /// <summary>
                    /// 返回渲染实体相对虚拟相机的直角深度
                    /// </summary>
                    /// <param name="cam"></param>
                    /// <returns</returns>
                    Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                    /// <summary>
                    /// 获得光照的列表，按照相对于渲染实体的远近排列
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Graphic::LightList &getLights() const;
                private:
                    EarthView::World::Graphic::CFrustum *mParent;
                };
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                virtual const EarthView::World::Graphic::LightList &getLights() const;

                virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable *getFrustumRenderablePtr();
                ///virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable& getFrustumRenderable();
            private:
                EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable *mpRenderable;

            protected:
                //// Orthographic or perspective?
                EarthView::World::Graphic::ProjectionType mProjType;
                //// y-direction field-of-view (default 45)
                EarthView::World::Spatial::Math::CRadian mFOVy;
                //// Far clip distance - default 10000
                Real mFarDist;
                //// Near clip distance - default 100
                Real mNearDist;
                //// x/y viewport ratio - default 1.3333
                Real mAspect;
                //// Ortho height size (world units)
                Real mOrthoHeight;
                //// Off-axis frustum center offset - default (0.0, 0.0)
                EarthView::World::Spatial::Math::CVector2 mFrustumOffset;
                //// Focal length of frustum (for stereo rendering, defaults to 1.0)
                Real mFocalLength;
                //// The 6 main clipping planes
                mutable EarthView::World::Spatial::Math::CPlane mFrustumPlanes[6];
                //// Stored versions of parent orientation / position
                mutable EarthView::World::Spatial::Math::CQuaternion mLastParentOrientation;
                mutable EarthView::World::Spatial::Math::CVector3 mLastParentPosition;
                //// Pre-calced projection matrix for the specific render system
                mutable EarthView::World::Spatial::Math::CMatrix4 mProjMatrixRS;
                //// Pre-calced standard projection matrix but with render system depth range
                mutable EarthView::World::Spatial::Math::CMatrix4 mProjMatrixRSDepth;
                //// Pre-calced standard projection matrix
                mutable EarthView::World::Spatial::Math::CMatrix4 mProjMatrix;
                //// Pre-calced view matrix
                mutable EarthView::World::Spatial::Math::CMatrix4 mViewMatrix;
                //// Something's changed in the frustum shape?
                mutable ev_bool mRecalcFrustum;
                //// Something re the view pos has changed
                mutable ev_bool mRecalcView;
                //// Something re the frustum planes has changed
                mutable ev_bool mRecalcFrustumPlanes;
                //// Something re the world space corners has changed
                mutable ev_bool mRecalcWorldSpaceCorners;
                //// Something re the vertex data has changed
                mutable ev_bool mRecalcVertexData;
                ev_bool mCustomViewMatrix;
                ev_bool mCustomProjMatrix;
                //// Have the frustum extents been manually set?
                ev_bool mFrustumExtentsManuallySet;
                //// EarthView::World::Graphic::CFrustum extents
                mutable Real mLeft, mRight, mTop, mBottom;
                //// EarthView::World::Graphic::CFrustum orientation mode
                mutable EarthView::World::Graphic::OrientationMode mOrientationMode;
                //// Shared class-level name for CMovable type
                static EVString msMovableType;
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
                mutable CVertexData mVertexData;
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                mutable EarthView::World::Spatial::Math::CVector3 mWorldSpaceCorners[8];
                //// Is this frustum to act as a reflection of itself?
                ev_bool mReflect;
                //// Derived reflection matrix
                mutable EarthView::World::Spatial::Math::CMatrix4 mReflectMatrix;
                //// Fixed reflection plane
                mutable EarthView::World::Spatial::Math::CPlane mReflectPlane;
                //// Pointer to a reflection plane (automatically updated)
                const EarthView::World::Graphic::CMovablePlane *mLinkedReflectPlane;
                //// Record of the last world-space reflection plane info used
                mutable EarthView::World::Spatial::Math::CPlane mLastLinkedReflectionPlane;

                ev_bool mObliqueDepthProjection;
                //// Fixed oblique projection plane
                mutable EarthView::World::Spatial::Math::CPlane mObliqueProjPlane;
                //// Pointer to oblique projection plane (automatically updated)
                const EarthView::World::Graphic::CMovablePlane *mLinkedObliqueProjPlane;
                //// Record of the last world-space oblique depth projection plane info used
                mutable EarthView::World::Spatial::Math::CPlane mLastLinkedObliqueProjPlane;
            
            ev_internal:
                /// Internal functions for calcs
                virtual void calcProjectionParameters(Real &left, Real &right, Real &bottom, Real &top) const;
                //// Update frustum if out of date
                virtual void updateFrustum() const;
                //// Update view if out of date
                virtual void updateView() const;
                //// Implementation of updateFrustum (called if out of date)
                virtual void updateFrustumImpl() const;
                //// Implementation of updateView (called if out of date)
                virtual void updateViewImpl() const;
                virtual void updateFrustumPlanes() const;
                //// Implementation of updateFrustumPlanes (called if out of date)
                virtual void updateFrustumPlanesImpl() const;
                virtual void updateWorldSpaceCorners() const;
				
                //// Implementation of updateWorldSpaceCorners (called if out of date)
                virtual void updateWorldSpaceCornersImpl() const;
				
                virtual void updateVertexData() const;
                virtual ev_bool isViewOutOfDate() const;
                virtual ev_bool isFrustumOutOfDate() const;
                //// Signal to update frustum information.
                virtual void invalidateFrustum() const;
                //// Signal to update view information.
                virtual void invalidateView() const;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称，默认为CStringUtil::BLANK</param>
                /// <returns></returns>
                CFrustum(const EVString &name);
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CFrustum();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CFrustum(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CFrustum();
                /// <summary>
                /// 设置Y方向的视域                
                /// </summary>
                /// <param name="fovy">视野域</param>
                /// <returns></returns>
                virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian &fovy);
                /// <summary>
                /// 取得Y方向的视域
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CRadian &getFOVy() const;
                /// <summary>
                /// 设置近裁剪面的距离
                /// </summary>
                /// <param name="nearDist"></param>
                /// <returns></returns>
                virtual void setNearClipDistance(Real nearDist);
                /// <summary>
                /// 获取近裁剪面的距离
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                virtual Real getNearClipDistance() const;
                /// <summary>
                /// 设置远裁剪面的距离
                /// </summary>
                /// <param name="farDist"></param>
                /// <returns></returns>
                virtual void setFarClipDistance(Real farDist);
                /// <summary>
                /// 获取远裁剪面的距离
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                virtual Real getFarClipDistance() const;
                /// <summary>
                /// 设定当前纵横比
                /// </summary>
                /// <param name="ratio">全屏下的系统默认值为1.3333</param>
                /// <returns></returns>
                virtual void setAspectRatio(Real ratio);
                /// <summary>
                /// 获取当前纵横比
                /// </summary>
                /// <param name=""></param>
                /// <returns>比例值</returns>
                virtual Real getAspectRatio() const;
                /// <summary>
                /// 通过二维矢量设置视椎体偏移量
                /// 在立体渲染中使用
                /// 在世界坐标系中默认为(0, 0)没有偏移
                /// </summary>
                /// <param name="offset">水平和垂直偏移量</param>
                /// <returns></returns>
                virtual void setFrustumOffset(const EarthView::World::Spatial::Math::CVector2 &offset);
                /// <summary>
                /// 通过水平偏移和垂直偏移设置视椎体偏移量
                /// 在立体渲染中使用
                /// 在世界坐标系中默认为(0, 0)没有偏移
                /// </summary>
                /// <param name="horizontal">水平偏移量</param>
                /// <param name="vertical">垂直偏移量</param>
                /// <returns></returns>
                virtual void setFrustumOffset(Real horizontal , Real vertical);
                virtual void setFrustumOffset(Real horizontal);
                virtual void setFrustumOffset();
                /// <summary>
                /// 获取视椎体偏移量
                /// </summary>
                /// <param name=""></param>
                /// <returns>二维矢量值</returns>
                virtual const EarthView::World::Spatial::Math::CVector2 &getFrustumOffset() const;
                /// <summary>
                /// 设置视椎体焦距
                /// 在立体渲染中使用
                /// </summary>
                /// <param name="focalLength">焦点到视椎体的距离，默认为1.0</param>
                /// <returns></returns>
                virtual void setFocalLength(Real focalLength);
                virtual void setFocalLength();
                /// <summary>
                /// 获取视椎体焦距
                /// 在立体渲染中使用
                /// </summary>
                /// <param name=""></param>
                /// <returns>焦距值</returns>
                virtual Real getFocalLength() const;
                /// <summary>
                /// 手动设置可视范围
                /// 侧面与近裁剪面的交界边
                /// </summary>
                /// <param name="left">左边</param>
                /// <param name="right">右边</param>
                /// <param name="top">上边</param>
                /// <param name="bottom">底边</param>
                /// <returns></returns>
                virtual void setFrustumExtents(Real left, Real right, Real top, Real bottom);
                /// <summary>
                /// 利用其它参数自动获取可视范围
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetFrustumExtents();

                /// <summary>
                /// 获取可视范围
                /// </summary>
                /// <param name="outleft">左边长度值</param>
                /// <param name="outright">右边长度值</param>
                /// <param name="outtop">上边长度值</param>
                /// <param name="outbottom">底边长度值</param>
                /// <returns></returns>
                virtual void getFrustumExtents(Real &outleft, Real &outright, Real &outtop, Real &outbottom) const;
                /// <summary>
                /// 获取当前渲染系统的投影矩阵
                /// 可能使用左手坐标系或右手坐标系，深度值可能发生改变
                /// 此方法渲染接口版本取决于投影矩阵，如果想使用典型的投影矩阵使用函数getProjectionMatrix
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getProjectionMatrixRS() const;
                /// <summary>
                /// 根据深度值获取当前渲染系统的投影矩阵
                /// 遵循右手坐标系规则
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getProjectionMatrixWithRSDepth() const;
                /// <summary>
                /// 获取该摄像机投影矩阵
                /// 遵循右手坐标系规则，使用深度值[-1,+1]
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getProjectionMatrix() const;
                /// <summary>
                /// 获取该摄像机观察矩阵
                /// 内部使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getViewMatrix() const;
                /// <summary>
                /// 根据动态点缩放关系，计算当前观察矩阵
                /// 内部使用
                /// </summary>
                /// <param name="relPos">平移的三维向量</param>
                /// <param name="matToUpdate">缩放的四维矩阵</param>
                /// <returns></returns>
                virtual void calcViewMatrixRelative(const EarthView::World::Spatial::Math::CVector3 &relPos, EarthView::World::Spatial::Math::CMatrix4 &matToUpdate) const;
                /// <summary>
                /// 是否使用自定义观察矩阵
                /// </summary>
                /// <param name="enable">如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值</param>
                /// <param name="viewMatrix">使用自定义矩阵，则矩阵为相似矩阵</param>
                /// <returns></returns>
                virtual void setCustomViewMatrix(ev_bool enable, const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix);
                virtual void setCustomViewMatrix(ev_bool enable);
                /// <summary>
                /// 自定义观察矩阵是否正在使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isCustomViewMatrixEnabled() const;

                /// <summary>
                /// 是否使用用户自定义投射矩阵
                /// </summary>
                /// <param name="enable">如果为真，则自定义观察矩阵优先被计算，否则，恢复系统自动计算值</param>
                /// <param name="projectionMatrix"></param>
                /// <returns></returns>
                virtual void setCustomProjectionMatrix(ev_bool enable, const EarthView::World::Spatial::Math::CMatrix4 &projectionMatrix);
                virtual void setCustomProjectionMatrix(ev_bool enable);
                /// <summary>
                /// 自定义观察矩阵是否正在使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isCustomProjectionMatrixEnabled() const;
                /// <summary>
                /// 获取裁剪面
                /// 裁剪面顺序定义在枚举EarthView::World::Graphic::FrustumPlane中。
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CPlane *getFrustumPlanes() const;
                /// <summary>
                /// 获取视椎体的特定面
                /// </summary>
                /// <param name="plane"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CPlane &getFrustumPlane( ev_uint16 plane ) const;
                /// <summary>
                /// 测试给定的边框盒是否在视椎体中
                /// </summary>
                /// <param name="bound">包围盒</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，可见</returns>
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CAxisAlignedBox &bound) const;
                /// <summary>
                /// 测试给定的球体是否在视椎体中
                /// </summary>
                /// <param name="bound">封闭球体</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，可见</returns>
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CSphere &bound, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CSphere &bound) const;
                /// <summary>
                /// 测试给定的顶点是否在视椎体中
                /// </summary>
                /// <param name="vert">顶点</param>
                /// <param name="culledBy">锥体面指针</param>
                /// <returns>如果成功，可见</returns>
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CVector3 &vert, EarthView::World::Graphic::FrustumPlane *culledBy) const;
                virtual ev_bool isVisible(const EarthView::World::Spatial::Math::CVector3 &vert) const;
                /// <summary>
                /// 获得类型标志信息                
                /// </summary>
                /// <param name=""></param>
                /// <returns>标志</returns>
                ev_uint32 getTypeFlags() const;
                /// <summary>
                /// 获得外包围盒                
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                /// <summary>
				/// 获得外包围盒半径                
                /// </summary>
                /// <param name=""></param>
                /// <returns>范围</returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 更新渲染队列                
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 获取移动对象类型的名称                
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                EVString getMovableType() const;
                /// <summary>
                /// 渲染时通报当前摄像机
                /// 内部方法                
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
                
                /// <summary>
                /// 设置投影类型
                /// 默认为透视投影
                /// </summary>
                /// <param name="pt">投影类型</param>
                /// <returns></returns>
                virtual void setProjectionType(ProjectionType pt);
                /// <summary>
                /// 获取当前使用投影类型
                /// 正射投影或者透视投影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::ProjectionType getProjectionType() const;
                /// <summary>
                /// 设置平行投影窗口设置
                /// 只有在正交渲染的时候使用
                /// </summary>
                /// <param name="w">窗口宽</param>
                /// <param name="h">窗口高</param>
                /// <returns></returns>
                virtual void setOrthoWindow(Real w, Real h);
                /// <summary>
                /// 设置平行投影窗口高度值设置
                /// 只有在正交渲染的时候使用
                /// 窗口宽度由窗口比例计算出
                /// </summary>
                /// <param name="h">在世界单位下视图窗口的高度值</param>
                /// <returns></returns>
                virtual void setOrthoWindowHeight(Real h);
                /// <summary>
                /// 设置平行投影窗口宽度设置
                /// 只有在正交渲染的时候使用
                /// 窗口高度由窗口比例计算出
                /// </summary>
                /// <param name="w">窗口宽度</param>
                /// <returns></returns>
                virtual void setOrthoWindowWidth(Real w);
                /// <summary>
                /// 得到平行投影窗口高度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getOrthoWindowHeight() const;
                /// <summary>
                /// 得到平行投影窗口宽度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getOrthoWindowWidth() const;
                /// <summary>
                /// 设置反射的镜面平面,并启用镜面反射
                /// </summary>
                /// <param name="p">作为镜面的平面</param>
                /// <returns></returns>
                virtual void enableReflection(const EarthView::World::Spatial::Math::CPlane &p);

                /// <summary>
                /// 设置反射的镜面平面,并启用镜面反射
                /// </summary>
                /// <param name="p">作为镜面的可移动平面</param>
                /// <returns></returns>
                virtual void enableReflection(const EarthView::World::Graphic::CMovablePlane *p);
                /// <summary>
                /// 禁用镜面平面
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void disableReflection();

                /// <summary>
                /// 判断是否启用了镜面反射
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isReflected() const;
                /// <summary>
                /// 获取视椎体的反射矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns>反射矩阵</returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getReflectionMatrix() const;
                /// <summary>
                /// 获取视椎体的反射平面
                /// </summary>
                /// <param name=""></param>
                /// <returns>反射平面</returns>
                virtual const EarthView::World::Spatial::Math::CPlane &getReflectionPlane() const;

                /// <summary>
                /// 进行球体投影
                /// </summary>
                /// <param name="sphere">球体</param>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <param name="right"></param>
                /// <param name="bottom"></param>
                /// <returns></returns>
                virtual ev_bool projectSphere(const EarthView::World::Spatial::Math::CSphere &sphere,
                                              Real *left, Real *top, Real *right, Real *bottom) const;
                /// <summary>
                /// 启用自定义近裁剪面                
                /// </summary>
                /// <param name="plane">裁剪面，当摄像机关联此面时，它必须存在，不能在视椎体之前销毁它</param>
                /// <returns></returns>
                virtual void enableCustomNearClipPlane(const EarthView::World::Graphic::CMovablePlane *plane);
                virtual void enableCustomNearClipPlane(const EarthView::World::Spatial::Math::CPlane &plane);
                /// <summary>
                /// 禁用自定义近裁剪面
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void disableCustomNearClipPlane();

                /// <summary>
                /// 自定义近裁剪面是否被使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isCustomNearClipPlaneEnabled() const;
                /// <summary>
                /// 访问可渲染对象
                /// 允许迭代器遍历渲染实例，当被询问时，移动对象将被添加到渲染队列
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                /// <returns></returns>
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                static const Real INFINITE_FAR_PLANE_ADJUST; 			/// 用来减少远裁剪面投影误差
                /// <summary>
                /// 获取视椎体派生位置
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量</returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getPositionForViewUpdate() const;

                /// <summary>
                /// 获取视椎体派生四元数
                /// </summary>
                /// <param name=""></param>
                /// <returns>四元数</returns>
                virtual const EarthView::World::Spatial::Math::CQuaternion &getOrientationForViewUpdate() const;
                /// <summary>
                /// 获取封闭视椎体的世界空间面列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CPlaneBoundedVolume getPlaneBoundedVolume();
                /// <summary>
                /// 设置视椎体定向模式，默认为EV_NO_VIEWPORT_ORIENTATIONMODE = 0
                /// 此函数只有在iPhone上可用，在其他平台作为例外被抛出
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setOrientationMode(OrientationMode orientationMode);
                /// <summary>
                /// 得到视椎体定向模式
                /// 此函数只有在iPhone上可用，在其他平台作为例外被抛出
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回本身</returns>
                EarthView::World::Graphic::OrientationMode getOrientationMode() const;
				/// <summary>
				/// 计算正交投影矩阵
				/// </summary>
				/// <param name="left"></param>
				/// <param name="right"></param>
				/// <param name="top"></param>
				/// <param name="bottom"></param>
				/// <param name="nearClip"></param>
				/// <param name="farClip"></param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 caculateOrthoProjMatrix(Real left,Real right,Real top,Real bottom,Real nearClip,Real farClip);
            ev_private:
                /// <summary>
                /// 得到得到视椎体的棱角坐标
                /// 分别是近截面的和远截面的四个角
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 *getWorldSpaceCorners() const;

				/// <summary>
				/// 得到视椎体的棱角坐标
				/// 分别是近截面的和远截面的四个角
				/// </summary>
				/// <param name="pmWorldSpaceCorners[8]"></param>
				/// <returns></returns>
				void getWorldSpaceCorners(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8]);
				/// <summary>
				/// 得到视椎体的棱角坐标
				/// 分别是近截面的和远截面的四个角
				/// </summary>
				/// <param name="pmWorldSpaceCorners[8]"></param>
				/// <param name="nearClip"></param>
				/// <param name="farClip"></param>
				/// <returns></returns>
				void getWorldSpaceCorners(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8],Real nearClip,Real farClip);

				virtual void updateWorldSpaceCorners(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8],Real nearClip,Real farClip) const;
				virtual void updateWorldSpaceCornersImpl(EarthView::World::Spatial::Math::CVector3 *pmWorldSpaceCorners[8],Real nearClip,Real farClip) const;
            };
        }
    }
}

#endif

