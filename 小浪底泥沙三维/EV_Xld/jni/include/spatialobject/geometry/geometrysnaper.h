#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYSNAPER_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYSNAPER_H

#include "geometryoperator.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Operator{
					enum EVGeometrySnapType
					{
						GST_UNKNOWN,
						GST_VERTEX,
						GST_SEGMENT
					};

					class CGeometrySnaper:
						public CGeometryOperator
					{
					public:
						CGeometrySnaper(const IGeometry* geom);
						virtual ~CGeometrySnaper();
ev_private:
						CGeometrySnaper(EarthView::World::Core::CNameValuePairList* pList);
					public:
						IGeometry* snapToPoint(const IGeometry* point,ev_real64 tolerance,EVGeometrySnapType& snap) const;
						IGeometry* snapToLine(const IGeometry* point,ev_real64 tolerance) const;
						IGeometry* snapToCurve(const IGeometry* point,ev_real64 tolerance) const;
					private:
						C_DISABLE_COPY(CGeometrySnaper);
					};
				}
			}
		}
	}
}

#endif
