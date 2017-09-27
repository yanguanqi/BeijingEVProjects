#ifndef EARTHVIEW_WORLD_SPATIAL_TILEUTILITYENUMS_H
#define EARTHVIEW_WORLD_SPATIAL_TILEUTILITYENUMS_H

namespace EarthView{
	namespace World{
		namespace Spatial{
			enum EVTileUnitsType
			{
				TUT_UNKNOWN = 0,
				TUT_DEGREE = 1,
				TUT_METER = 2,
				TUT_RADIAN = 3
			};

			enum EVOriginPositionType
			{
				OPT_UNKNOWN = 0,
				OPT_LEFTTOP = 1,
				OPT_LEFTLOW = 2,
				OPT_RIGHTTOP = 3,
				OPT_RIGHTLOW = 4,
			};
		}
	}
}
#endif
