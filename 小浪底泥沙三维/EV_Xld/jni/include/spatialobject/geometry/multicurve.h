#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTICURVE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTICURVE_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "geometrycollection.h"
// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CMultiCurve
					:public CGeometryCollection
				{
				public:					
					virtual ~CMultiCurve();
				public:
					virtual ev_real64 getLength() const;
				protected:
					CMultiCurve();
				private:
					CMultiCurve(CMultiCurve& obj);
				};
			}
		}
	}
}

#endif