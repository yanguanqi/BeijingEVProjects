#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTISURFACE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTISURFACE_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "geometrycollection.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CMultiSurface
					:public CGeometryCollection
				{
				public:					
					virtual ~CMultiSurface();
				public:
					virtual ev_real64 getArea() const;
				protected:
					CMultiSurface();
				private:
					CMultiSurface(CMultiSurface& obj);
				};
			}
		}
	}
}

#endif