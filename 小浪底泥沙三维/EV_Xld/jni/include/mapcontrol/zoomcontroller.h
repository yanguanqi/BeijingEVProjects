#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_ZOOMCONTROLLER_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_ZOOMCONTROLLER_H
#include "mapcontrol/mapcontrolconfig.h"
namespace EarthView{
	namespace World{
		namespace Display{
			class IBitmap;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CMapControl;
				class CWheelZoomTimer;

				class CZoomController : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CZoomController( CMapControl* ctrl );
					~CZoomController();

				public:
					ev_bool zoom( _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag );
				ev_private:
					CZoomController( EarthView::World::Core::CNameValuePairList* pList );

				protected:
					ev_void updateDataExtent();

					ev_real64 m_dx, m_dy, m_dWidth, m_dHeight;
					ev_real64 mdPreviousScale;
					CMapControl* mpMapControl;
					EarthView::World::Display::IBitmap* mpTempContext;
					CWheelZoomTimer *mpTimer;
					friend class CWheelZoomTimer;
				};
			}
		}
	}
}
#endif
