#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICCHORDRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICCHORDRING_H

#include "ellipticarcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆弦环类，由椭圆弧和它的弦构成的环
				class EV_GEOMETRY_DLL CEllipticChordRing
					: public EarthView::World::Spatial::Geometry::CEllipticArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticChordRing();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticChordRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticChordRing(EarthView::World::Core::CNameValuePairList* pList);					
				public:
					/// <summary>
					/// 获取椭圆弦的长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆弦的长度</returns>
					ev_real64 getChordLength() const;
					/// <summary>
					/// 获取面积（无意义）
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
				protected:
					
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticChordRing* ring)const;
				public:
					EarthView::World::Spatial::Geometry::CEllipticChordRing clone2() const;
					CEllipticChordRing(const CEllipticChordRing& obj);
					EarthView::World::Spatial::Geometry::CEllipticChordRing& operator=(const EarthView::World::Spatial::Geometry::CEllipticChordRing & obj);			
					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(_in ev_uint32 smooth) const;
				};
			}
		}
	}
}

#endif
