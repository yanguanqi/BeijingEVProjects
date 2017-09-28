#ifndef _GEOMETRY3D_FACTORY_H_
#define _GEOMETRY3D_FACTORY_H_
#pragma  once

#include "geometry3d/geometry3d_config.h"

#include <spatialobject/geometry/box.h>
#include <spatialobject/geometry/revolvingvolume.h>
#include <spatialobject/geometry/column.h>
#include <spatialobject/geometry/cone.h>
#include <spatialobject/geometry/ellipsoid.h>
#include <spatialobject/geometry/ring.h>

#include <spatialinterface/icolor.h>


namespace EarthView
{
	namespace World
	{
		namespace Spatial{
			namespace Geometry{	
				class CBox;
				class CCone;
				class CColumn;
				class CEllipsoid;
				class CRing;
				class CRevolvingVolume;

			}
		}
		namespace Geometry3D
		{
            class CSimpleRenderableEx;
			///<summary>
			///可渲染几何体工厂
			///	由相应的几何体对象创建可渲染对象
			///</summary>
            class EV_GEOMETRY3D_DLL CGeometry3DFactory : public EarthView::World::Core::CBaseObject
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                CGeometry3DFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ~CGeometry3DFactory();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                CGeometry3DFactory(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 创建可渲染的长方体
				/// </summary>
				/// <param name="box">几何长方体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createBox(const EarthView::World::Spatial::Geometry::CBox& box, const EarthView::World::Spatial::Display::IColor* color);
				/// <summary>
				/// 创建可渲染的圆锥
				/// </summary>
				/// <param name="cone">几何圆锥体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createCone(const EarthView::World::Spatial::Geometry::CCone& cone,const EarthView::World::Spatial::Display::IColor* color);
				/// <summary>
				/// 创建可渲染的圆柱体
				/// </summary>
				/// <param name="column">圆柱体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createColumn(const EarthView::World::Spatial::Geometry::CColumn& column,const EarthView::World::Spatial::Display::IColor* color);
				/// <summary>
				/// 创建可渲染的椭球体
				/// </summary>
				/// <param name="ellipsoid">椭球体</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createEllipsoid(const EarthView::World::Spatial::Geometry::CEllipsoid& ellipsoid,const EarthView::World::Spatial::Display::IColor* color);
				/// <summary>
				/// 创建可渲染的圆环
				/// </summary>
				/// <param name="ring">圆环</param>
				/// <param name="color">颜色</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createRing(const EarthView::World::Spatial::Geometry::CRing& ring,const EarthView::World::Spatial::Display::IColor* color);
				/// <summary>
				/// 创建可渲染的旋转体面
				/// </summary>
				/// <param name="volume">几何旋转体</param>
				/// <param name="interval">旋转间隔</param>
				/// <param name="color">颜色</param>
				/// <param name="sideClosed">是否封闭</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createVolume(const EarthView::World::Spatial::Geometry::CRevolvingVolume& volume,const EarthView::World::Spatial::Math::CDegree&interval, const EarthView::World::Spatial::Display::IColor* color,ev_bool sideClosed);
				/// <summary>
				/// 创建可渲染的旋转体边框
				/// </summary>
				/// <param name="volume">几何旋转体</param>
				/// <param name="interval">旋转间隔</param>
				/// <param name="color">颜色</param>
				/// <param name="sideClosed">是否封闭</param>
				/// <returns>可渲染实体</returns>
				static _extfree EarthView::World::Geometry3D::CSimpleRenderableEx* createVolumeFrame(const EarthView::World::Spatial::Geometry::CRevolvingVolume& volume,const EarthView::World::Spatial::Math::CDegree&interval,const EarthView::World::Spatial::Display::IColor* color,ev_bool sideClosed);

			public:
				/// <summary>
				/// 销毁几何实体
				/// </summary>
				/// <param name="pRenderable">几何实体</param>
				/// <returns></returns>
				static ev_void destroy(EarthView::World::Geometry3D::CSimpleRenderableEx* pRenderable);            

            };
        }
    }
}

#endif
