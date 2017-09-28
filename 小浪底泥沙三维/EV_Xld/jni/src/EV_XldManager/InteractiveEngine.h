#include "core\global.h"
#include "mathengine\vector3.h"
#ifndef INTERACTIVEENGINE_H_
#define INTERACTIVEENGINE_H_

namespace EarthView
{
	namespace Xld
	{
		namespace AnalysisTool
		{
			class CInteractiveEngine
			{
			public:
				static EarthView::World::Spatial::Math::CVector3 GetSelectedWorldPostion(const ev_real64& screenX, const ev_real64& screenY, const ev_bool& isPickOnModel);
				static EarthView::World::Spatial::Math::CVector3 GetSelectedGeoPostion(const ev_real64& screenX, const ev_real64& screenY, const ev_bool& isPickOnModel);
				static EarthView::World::Spatial::Math::CVector3 GetSelectedModelGeoPosition(const ev_real64& screenX, const ev_real64& screenY);
				static EarthView::World::Spatial::Math::CVector3 GetSelectedModelWrdPosition(const ev_real64& screenX, const ev_real64& screenY);
			};
		}
	}
}


#endif // INTERACTIVEENGINE_H_

