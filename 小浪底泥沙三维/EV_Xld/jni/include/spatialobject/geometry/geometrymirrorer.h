#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYMIRRORER_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYMIRRORER_H

#include "geometryoperator.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Operator{
					class CGeometryMirrorer:
						public CGeometryOperator
					{
					public:
						CGeometryMirrorer(const IGeometry* geom);
						virtual ~CGeometryMirrorer();
ev_private:
						CGeometryMirrorer(EarthView::World::Core::CNameValuePairList* pList);
					public:
						IGeometry* mirror(const IGeometry* line) const;
					private:
						C_DISABLE_COPY(CGeometryMirrorer);
					};
				}
			}
		}
	}
}

#endif
