#ifndef EARTHVIEW_SPATIAL2D_DISPLAY_PAINTDEVICE_H
#define EARTHVIEW_SPATIAL2D_DISPLAY_PAINTDEVICE_H

#include "spatialinterface/ipaintdevice.h"
#include "spatialdisplay/spatialdisplayconfig.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Display{
				class EV_SPATIALDISPLAY_DLL CPaintDevice:
					public IPaintDevice
				{
				public:
					virtual ~CPaintDevice();

					virtual ev_int64 getDC();
					virtual ev_void releaseDC();
					virtual ev_int32 getWidth() const ;
					virtual ev_int32 getHeight() const ;

				ev_private:
					CPaintDevice(CNameValuePairList *pList);

				protected:
					CPaintDevice();
				private:
					C_DISABLE_COPY( CPaintDevice );
				};
			}
		}
	}
}
#endif