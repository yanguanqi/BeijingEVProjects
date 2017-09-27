#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLECHORDRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLECHORDRING_H

#include "circlearcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
			    /// EarthView::World::Spatial::Geometry::CCircleChordRing,圆弦环类
				/// </summary>
				class EV_GEOMETRY_DLL CCircleChordRing
					: public EarthView::World::Spatial::Geometry::CCircleArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleChordRing();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleChordRing();
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleChordRing(EarthView::World::Core::CNameValuePairList* pList);
				public:				
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
				protected:
					

					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleChordRing* ring)const;
				public:
					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(_in ev_uint32 smooth) const;

					EarthView::World::Spatial::Geometry::CCircleChordRing clone2() const;
					CCircleChordRing(const CCircleChordRing& obj);
					EarthView::World::Spatial::Geometry::CCircleChordRing& operator=(const EarthView::World::Spatial::Geometry::CCircleChordRing& obj);
				};
			}
		}
	}
}

#endif
