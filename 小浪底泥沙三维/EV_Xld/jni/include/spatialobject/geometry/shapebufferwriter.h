#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_UTILITY_SHAPEBUFFERWRITER_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_UTILITY_SHAPEBUFFERWRITER_H

#include "spatialobject/geometry/geometry.h"
#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/multipoint.h"
#include "spatialobject/geometry/linestring.h"
#include "spatialobject/geometry/line.h"
#include "spatialobject/geometry/circlearc.h"
#include "spatialobject/geometry/ellipticarc.h"
#include "spatialobject/geometry/beziercurve.h"
#include "spatialobject/geometry/polyline.h"
#include "spatialobject/geometry/polygon.h"
#include "spatialobject/geometry/circle.h"
#include "spatialobject/geometry/ellipse.h"
#include "spatialobject/geometry/rectangle.h"
#include "spatialobject/geometry/triangle.h"
#include "spatialobject/geometry/geometrycollection.h"
#include "spatialobject/geometry/envelope.h"
#include "spatialobject/geometry/coordinate.h"
#include "spatialobject/geometry/coordinatesequence.h"

// using namespace EarthView::World::Spatial::Geometry;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Utility{
					enum EVBitOrderType
					{
						BOT_BIGENDIAN_XDR  = 0,
						BOT_LITTLEENDIAN_NDR = 1
					};

					class CShapeBufferWriter
					{
					public:
						CShapeBufferWriter(const CGeometry* geom);
						virtual ~CShapeBufferWriter();
					public:
						ev_uint32 write(CDataStream & stream);
					private:
						ev_uint32 writeDouble(CDataStream & stream,ev_real64 & value);
						ev_uint32 writeInt32(CDataStream & stream,ev_int32 & value);
						ev_uint32 writeByte(CDataStream & stream,ev_byte & value);
						ev_uint32 writeUint32(CDataStream & stream,ev_uint32 & value);

						ev_uint32 writeGeometry(CDataStream & stream);
						ev_uint32 writeCoordinate(CDataStream & stream);
						ev_uint32 writeCoordinateSequence(CDataStream & stream);
						ev_uint32 writeEnvelope(CDataStream & stream);
						ev_uint32 writePoint(CDataStream & stream);
						ev_uint32 writeMultiPoint(CDataStream & stream);
						ev_uint32 writeLineString(CDataStream & stream);
						ev_uint32 writeLine(CDataStream & stream);
						ev_uint32 writeCircleArc(CDataStream & stream);
						ev_uint32 writeEllipticArc(CDataStream & stream);
						ev_uint32 writeBezierCurve(CDataStream & stream);
						ev_uint32 writePolyline(CDataStream & stream);
						ev_uint32 writePolygon(CDataStream & stream);
						ev_uint32 writeGeometryCollection(CDataStream & stream);
						ev_uint32 writeCircle(CDataStream & stream);
						ev_uint32 writeEllipse(CDataStream & stream);
						ev_uint32 writeRectangle(CDataStream & stream);
						ev_uint32 writeTriangle(CDataStream & stream);
					private:
						const CGeometry* mpGeom;
					};
				}
			}
		}
	}
}

#endif