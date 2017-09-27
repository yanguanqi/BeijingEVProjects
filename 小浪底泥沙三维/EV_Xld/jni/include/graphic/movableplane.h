#ifndef __MovablePlane_H__
#define __MovablePlane_H__
#include "graphic/graphic_config.h"
#include <mathengine/plane.h>
#include "movableobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 可移动平面类
            /// 此平面提供一个可以连接到节点上的平面，用作一些技术，如：反射效果，程序逻辑等。
            /// </summary>
            class EV_GRAPHIC_DLL CMovablePlane : public EarthView::World::Spatial::Math::CPlane
            {
                friend class CMovablePlaneInternalMovable;

            protected:
                mutable EarthView::World::Spatial::Math::CPlane mDerivedPlane;
                mutable EarthView::World::Spatial::Math::CVector3 mLastTranslate;
                mutable EarthView::World::Spatial::Math::CQuaternion mLastRotate;
                EarthView::World::Spatial::Math::CAxisAlignedBox mNullBB;
                mutable ev_bool mDirty;
                static EVString msMovableType;                
            public:
                /// <summary>
                /// 可移动平面内部动态对象类
                /// 定义可以移动平面操作
                /// </summary>
                class EV_GRAPHIC_DLL CMovablePlaneInternalMovable : public EarthView::World::Graphic::CMovableObject
                {
                    ///protected:
                    ///	mutable EarthView::World::Spatial::Math::CPlane mDerivedPlane;
                    ///	mutable EarthView::World::Spatial::Math::CVector3 mLastTranslate;
                    ///	mutable EarthView::World::Spatial::Math::CQuaternion mLastRotate;
                    ///	EarthView::World::Spatial::Math::CAxisAlignedBox mNullBB;
                    ///	mutable ev_bool mDirty;
                    ///	static EVString msMovableType;
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMovablePlaneInternalMovable(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <param name="parent">父类</param>
                    /// <returns></returns>
                    CMovablePlaneInternalMovable(const EVString& name, CMovablePlane *ref_parent);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">父类</param>
                    /// <returns></returns>
                    CMovablePlaneInternalMovable(CMovablePlane *ref_parent);
                    /// <summary>
                    /// 通报当前摄像机
                    /// 内部方法
                    /// </summary>
                    /// <param name="cam">摄像机</param>
                    /// <returns></returns>
                    void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
                    /// <summary>
                    /// 获取模型坐标系下的包围盒                    
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>边框盒</returns>
                    const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                    /// <summary>
                    /// 获取当前对象的球体限定半径
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>边框盒</returns>
                    Real getBoundingRadius() const;
                    /// <summary>
                    /// 更新渲染队列                    
                    /// 内部方法
                    /// </summary>
                    /// <param name="queue">渲染队列</param>
                    /// <returns></returns>
                    void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *pQueue);
                    /// <summary>
                    /// 获取移动对象类型的名称
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>名称</returns>
                    EVString getMovableType() const;
                    /// <summary>
                    /// 访问可渲染对象                    
                    /// </summary>
                    /// <param name="visitor"></param>
                    /// <param name="debugRenderables">默认为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                    /// <returns></returns>
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                    void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                    /// <summary>
                    /// 获取派生平面
                    /// 从父节点变化中生成
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    const EarthView::World::Spatial::Math::CPlane &_getDerivedPlane() const;
                private:
                    EarthView::World::Graphic::CMovablePlane *mParent;
                };
                virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                virtual Real getBoundingRadius() const;
                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *pQueue);
                virtual EVString getMovableType() const;
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                ///virtual const EarthView::World::Spatial::Math::CPlane& _getDerivedPlane() const;
                virtual const EarthView::World::Graphic::CMovablePlane::CMovablePlaneInternalMovable *getMovableObjectPtr();
                ///virtual const EarthView::World::Graphic::CMovablePlane::CMovablePlaneInternalMovable& getMovableObject();
            private:
                EarthView::World::Graphic::CMovablePlane::CMovablePlaneInternalMovable *mpMovableObject;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMovablePlane(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">平面名称</param>
                /// <returns></returns>
                CMovablePlane(const EVString &name);
                /// <summary>
                /// 构造函数
                /// 使用平面定义初始面
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                CMovablePlane (const EarthView::World::Spatial::Math::CPlane &rhs);
                /// <summary>
                /// 构造函数
                /// 使用平面方程定义初始面
                /// </summary>
                /// <param name="rkNormal"></param>
                /// <param name="fConstant"></param>
                /// <returns></returns>
                CMovablePlane (const EarthView::World::Spatial::Math::CVector3 &rkNormal, Real fConstant);
                /// <summary>
                /// 构造函数
                /// 使用法线和平面上的一个点定义初始面
                /// </summary>
                /// <param name="rkNormal"></param>
                /// <param name="rkPoint"></param>
                /// <returns></returns>
                CMovablePlane (const EarthView::World::Spatial::Math::CVector3 &rkNormal, const EarthView::World::Spatial::Math::CVector3 &rkPoint);
                /// <summary>
                /// 构造函数
                /// 使用三个点定义初始面
                /// </summary>
                /// <param name="rkPoint0"></param>
                /// <param name="rkPoint1"></param>
                /// <param name="rkPoint2"></param>
                /// <returns></returns>
                CMovablePlane (const EarthView::World::Spatial::Math::CVector3 &rkPoint0, const EarthView::World::Spatial::Math::CVector3 &rkPoint1, const EarthView::World::Spatial::Math::CVector3 &rkPoint2);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CMovablePlane();

                /// <summary>
                /// 获取派生平面
                /// 从父节点变化中生成
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CPlane &_getDerivedPlane() const;
            };
        }
    }
}

#endif

