#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPHERE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPHERE_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "volume.h"
#include "point.h"
#include "coordinateSequence.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CSphere
					:public CVolume
				{
				public:
					CSphere();
					CSphere(const CCoordinate& centerpoint,const ev_real64&radius);
					virtual ~CSphere();
ev_private:
					CSphere(CNameValuePairList* pList);
				public:
					const EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;	
					EarthView::World::Spatial::Geometry::CPoint* getCenterPoint();
					ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CPoint& centerpoint);
					ev_real64 getRadius() const;
					ev_void setRadius(const ev_real64& radius);

					//重写
					ev_real64 getVolume() const;
				private:		
					CSphere(const CSphere& obj);
				private:
					CCoordinate mCenterCoordinate;
					ev_real64 mdfRadius;
				};
			}
		}
	}
}

#endif