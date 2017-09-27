#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_UTILITY_WKBWRITER_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_UTILITY_WKBWRITER_H

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

#include "spatialobject/geometry/byteorder.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Utility{
					class CWKBWriter
					{
					public:
						CWKBWriter(const CGeometry* geom);
						virtual ~CWKBWriter();
					public:
						ev_uint32 write(CDataStream & stream,EVBitOrderType order,ev_bool isGeos);
						ev_uint32 write(std::ostream & stream,EVBitOrderType order,ev_bool isGeos);
					private:
						ev_uint32 writeDouble(CDataStream & stream,ev_real64 value);
						ev_uint32 writeUint16(CDataStream & stream,ev_uint16 value);
						ev_uint32 writeByte(CDataStream & stream,ev_byte value);
						ev_uint32 writeUint32(CDataStream & stream,ev_uint32 value);

						ev_uint32 writeGeometry(CDataStream & stream,const CGeometry * obj);
						ev_uint32 writeCoordinate(CDataStream & stream,const CCoordinate * obj);
						ev_uint32 writeCoordinateSequence(CDataStream & stream,const CCoordinateSequence * obj,ev_bool isRing);
						ev_uint32 writePoint(CDataStream & stream,const EarthView::World::Spatial::Geometry::CPoint* obj);
						ev_uint32 writeMultiPoint(CDataStream & stream,const CMultiPoint* obj);
						ev_uint32 writeLineString(CDataStream & stream,const CLineString * obj);
						ev_uint32 writeLinearRing(CDataStream & stream,const CLineString * obj);
						ev_uint32 writeLine(CDataStream & stream,const CLine* obj);
						ev_uint32 writeCircleArc(CDataStream & stream,const CCircleArc* obj);
						ev_uint32 writeEllipticArc(CDataStream & stream,const CEllipticArc * obj);
						ev_uint32 writeCurvePath(CDataStream & stream,const CCurvePath *obj);
						ev_uint32 writeCurveRing(CDataStream & stream,const CCurveRing * obj);
						ev_uint32 writeBezierCurve(CDataStream & stream,const CBezierCurve* obj);
						ev_uint32 writePolyline(CDataStream & stream,const CPolyline* obj);
						ev_uint32 writePolygon(CDataStream & stream,const CPolygon* obj);
						ev_uint32 writeGeometryCollection(CDataStream & stream,const CGeometryCollection* obj);
						ev_uint32 writeCircle(CDataStream & stream,const CCircle* obj);
						ev_uint32 writeEllipse(CDataStream & stream,const CEllipse* obj);
						ev_uint32 writeRectangle(CDataStream & stream,const CRectangle* obj);
						ev_uint32 writeTriangle(CDataStream & stream,const CTriangle* obj);


						/////////////////////////////////////////////////////////////////////////////
						ev_uint32 writeDouble(std::ostream & stream,ev_real64 value);
						ev_uint32 writeUint16(std::ostream & stream,ev_uint16 value);
						ev_uint32 writeByte(std::ostream & stream,ev_byte value);
						ev_uint32 writeUint32(std::ostream & stream,ev_uint32 value);

						ev_uint32 writeGeometry(std::ostream & stream,const CGeometry * obj);
						ev_uint32 writeCoordinate(std::ostream & stream,const CCoordinate * obj);
						ev_uint32 writeCoordinateSequence(std::ostream & stream,const CCoordinateSequence * obj,ev_bool isRing);
						ev_uint32 writePoint(std::ostream & stream,const EarthView::World::Spatial::Geometry::CPoint* obj);
						ev_uint32 writeMultiPoint(std::ostream & stream,const CMultiPoint* obj);
						ev_uint32 writeLineString(std::ostream & stream,const CLineString * obj);
						ev_uint32 writeLinearRing(std::ostream & stream,const CLineString * obj);
						ev_uint32 writeLine(std::ostream & stream,const CLine* obj);
						ev_uint32 writeCircleArc(std::ostream & stream,const CCircleArc* obj);
						ev_uint32 writeEllipticArc(std::ostream & stream,const CEllipticArc * obj);
						ev_uint32 writeCurvePath(std::ostream & stream,const CCurvePath *obj);
						ev_uint32 writeCurveRing(std::ostream & stream,const CCurveRing * obj);
						ev_uint32 writeBezierCurve(std::ostream & stream,const CBezierCurve* obj);
						ev_uint32 writePolyline(std::ostream & stream,const CPolyline* obj);
						ev_uint32 writePolygon(std::ostream & stream,const CPolygon* obj);
						ev_uint32 writeGeometryCollection(std::ostream & stream,const CGeometryCollection* obj);
						ev_uint32 writeCircle(std::ostream & stream,const CCircle* obj);
						ev_uint32 writeEllipse(std::ostream & stream,const CEllipse* obj);
						ev_uint32 writeRectangle(std::ostream & stream,const CRectangle* obj);
						ev_uint32 writeTriangle(std::ostream & stream,const CTriangle* obj);
					private:
						const CGeometry* mpGeom;
						EVBitOrderType mnBitOrder;
						ev_bool mbIsGeos;
						ev_bool mbHasZ;
						ev_bool mbHasM;
						ev_uint32 mnSrid;
					};
				}
			}
		}
	}
}

#endif
