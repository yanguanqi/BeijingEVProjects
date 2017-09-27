#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SURFACE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SURFACE_H

#include "geometry.h"
#include "point.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 表面类
				/// </summary>
				class EV_GEOMETRY_DLL CSurface
					:public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CSurface();
ev_private:
					CSurface(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					virtual ev_real64 getArea() const;
					///// <summary>
					/////
					///// </summary>
					///// <param name=""></param>
					///// <returns></returns>
					//virtual CPoint* getCentroid() const;
					///// <summary>
					/////
					///// </summary>
					///// <param name=""></param>
					///// <returns></returns>
					//virtual CPoint* getPointOnSurface() const;
				protected:
					ev_void clone2(CSurface* surface)const;
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSurface();
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSurface(const CSurface& obj);
					CSurface& operator=(const CSurface& obj);
				};
			}
		}
	}
}

#endif
