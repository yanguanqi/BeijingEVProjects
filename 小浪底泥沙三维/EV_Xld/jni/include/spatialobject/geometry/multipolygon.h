#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTIPOLYGON_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTIPOLYGON_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "multisurface.h"
#include "polygon.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CMultiPolygon
					:public CMultiSurface
				{
				public:
					CMultiPolygon();
					virtual ~CMultiPolygon();
					CMultiPolygon(const CPolygon* lines,ev_uint32 size);
ev_private:
					CMultiPolygon(CNameValuePairList* pList);
				private:
					CMultiPolygon(CMultiPolygon & obj);
				};
			}
		}
	}
}

#endif