#ifndef SPATIAL_GUI_H__
#define SPATIAL_GUI_H__

//#ifdef EV_BULID_IDLL
//#define EV_BUILD_SPATIAL_INTERFACE
//#endif

#ifdef EV_BUILD_SPATIALGUI
#define EV_SPATIALGUI_DLL EV_DLL_EXPORT
#else
#define EV_SPATIALGUI_DLL EV_DLL_IMPORT
#endif

#define EV_USE_CORE

#ifdef EV_USE_CORE
#include "core/core_api.h"
#endif

#endif
