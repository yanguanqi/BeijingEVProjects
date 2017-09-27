#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTILINESTRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTILINESTRING_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "multicurve.h"
#include "linestring.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CMultiLineString
					:public CMultiCurve
				{
				public:
					CMultiLineString();
					virtual ~CMultiLineString();
					CMultiLineString(const CLineString* lines,ev_uint32 size);
ev_private:
					CMultiLineString(CNameValuePairList* pList);
				private:
					CMultiLineString(CMultiLineString & obj);
				};
			}
		}
	}
}

#endif