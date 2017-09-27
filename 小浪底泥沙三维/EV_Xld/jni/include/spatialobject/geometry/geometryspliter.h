#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYSPLITER_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_OPERATOR_GEOMETRYSPLITER_H

#include "geometryoperator.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Operator{
					class CGeometrySpliter:
						public CGeometryOperator
					{
					public:
						CGeometrySpliter(const IGeometry* geom);
						virtual ~CGeometrySpliter();
ev_private:
						CGeometrySpliter(EarthView::World::Core::CNameValuePairList* pList);
					public:
						IGeometry* split(const IGeometry* linestring) const;
					private:
						C_DISABLE_COPY(CGeometrySpliter);
					};
				}
			}
		}
	}
}

#endif
