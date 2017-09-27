#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ALGORITHM_ELLIPTICALGORITHM_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ALGORITHM_ELLIPTICALGORITHM_H

#include "core/global.h"
#include "../config.h"
#include "circlealgorithm.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Algorithm{
					class CEllipticAlgorithm
					{
					public:
						CEllipticAlgorithm(ev_real64 x,ev_real64 y,ev_real64 semiHeight,ev_real64 semiWidth,ev_real64 angle);
						virtual ~CEllipticAlgorithm(void);
					public:
						ev_real64 getArea() const;
						ev_real64 getLength() const;
						ev_void   getPointOnEllipse(ev_real64 angle,ev_real64 & x,ev_real64 & y) const;
						ev_real64 getChordLength(ev_real64 angle1,ev_real64 angle2) const;
						ev_real64 getArcLength(ev_real64 angle1,ev_real64 angle2,ev_bool isClockwise) const;
						ev_uint32 getVertexForArc(ev_real64 angle1,ev_real64 angle2,ev_bool isClockwise,ev_uint32 smooth,Vertex2D ** points) const;
					private:
						ev_real64 mdfX;
						ev_real64 mdfY;
						ev_real64 mdfSemiHeight;
						ev_real64 mdfSemiWidth;
						ev_real64 mdfRotatedAngle;
						ev_real64 mdfRSin;
						ev_real64 mdfRCos;
						ev_bool   mbUseRotatedAngle;
					};
				}
			}
		}
	}
}

#endif
