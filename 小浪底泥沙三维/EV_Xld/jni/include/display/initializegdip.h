#ifndef EARTHVIEW_WORLD_DISPLAY_INITALIZEGDIP_H
#define EARTHVIEW_WORLD_DISPLAY_INITALIZEGIDP_H
/*#ifndef EV_OS_ANDROID
namespace EarthView{
	namespace World{
		namespace Display{
			class CInitializeGdip
			{
			public:
				CInitializeGdip();
				~CInitializeGdip();

			private:
				unsigned long mnToken;
			};
		}
	}
}
#else*/
#include "core/stringdefines.h"
#include "core/classfactory.h"
#include "core/platform.h"
#include "display/display_config.h"
namespace EarthView{
	namespace World{
		namespace Display{
			class EV_DISPLAY_DLL CInitializeGdip
			{
			public:
				CInitializeGdip();
				~CInitializeGdip();
			ev_private:
				CInitializeGdip(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				static ev_void setGdipDpi(float dpi);
				static float getGdipDpi();
			private:
				unsigned long mnToken;
			};
		}
	}
}
#endif

