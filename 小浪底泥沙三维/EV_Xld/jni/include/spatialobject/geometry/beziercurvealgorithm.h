#ifndef EARTHIVEW_WORLD_SPATIAL_GEOMETRY_ALGORITHM_BEZIERCURVEALGORITHM_H
#define EARTHIVEW_WORLD_SPATIAL_GEOMETRY_ALGORITHM_BEZIERCURVEALGORITHM_H

#include "circlealgorithm.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Algorithm{
					struct Vertex3D
					{
						ev_real64 x;
						ev_real64 y;
						ev_real64 z;
					};
					struct Bezier
					{
						// 第一个起始点
						ev_real64 x1;
						ev_real64 y1;
						ev_real64 z1;

						// 第一个控制点
						ev_real64 x2;
						ev_real64 y2;
						ev_real64 z2;

						// 第二个控制点
						ev_real64 x3;
						ev_real64 y3;
						ev_real64 z3;

						// 第二个起始点
						ev_real64 x4;
						ev_real64 y4;
						ev_real64 z4;
					};

					class CBezierCurveAlgorithm
					{
					public:
						CBezierCurveAlgorithm(ev_real64 x1,ev_real64 y1,ev_real64 z1,
							                  ev_real64 x2,ev_real64 y2,ev_real64 z2,
											  ev_real64 x3,ev_real64 y3,ev_real64 z3,
											  ev_real64 x4,ev_real64 y4,ev_real64 z4);
						CBezierCurveAlgorithm(const Bezier & b);

						virtual ~CBezierCurveAlgorithm();
					public:
						ev_void getStartPoint(ev_real64 & x,ev_real64 & y,ev_real64 & z);
						ev_void getFirstControlPoint(ev_real64 & x,ev_real64 & y,ev_real64 & z);
						ev_void getSecondControlPoint(ev_real64 & x,ev_real64 & y,ev_real64 & z);
						ev_void getEndPoint(ev_real64 & x,ev_real64 & y,ev_real64 & z);
						ev_void getMidPoint(ev_real64 & x,ev_real64 & y,ev_real64 & z);

						ev_void getPointAt(ev_real64 t,ev_real64 & x,ev_real64 & y,ev_real64 & z);
						ev_uint32 getVertexForCurve(ev_uint32 smooth,Vertex3D ** points);

						ev_real64 getLength();

						ev_void splitAt(ev_real64 t,Bezier & left,Bezier & right);
						ev_void getBoundingBox(ev_real64 & minX,ev_real64 & minY,ev_real64 & minZ,
							                   ev_real64 & maxX,ev_real64 & maxY,ev_real64 & maxZ);

					private:
						static ev_void coefficients(ev_real64 t, ev_real64 &a, ev_real64 &b, ev_real64 &c, ev_real64 &d);
					private:
						// 第一个起始点
						ev_real64 mdfX1;
						ev_real64 mdfY1;
						ev_real64 mdfZ1;

						// 第一个控制点
						ev_real64 mdfX2;
						ev_real64 mdfY2;
						ev_real64 mdfZ2;

						// 第二个控制点
						ev_real64 mdfX3;
						ev_real64 mdfY3;
						ev_real64 mdfZ3;

						// 第二个起始点
						ev_real64 mdfX4;
						ev_real64 mdfY4;
						ev_real64 mdfZ4;
					};
				}
			}
		}
	}
}

#endif
