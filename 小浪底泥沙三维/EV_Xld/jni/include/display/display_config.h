#ifndef EARTHVIEW_WORLD_DISPLAY_DISLAYCONFIG_H
#define EARTHVIEW_WORLD_DISPLAY_DISPLYCONFIG_H
#include "core/global.h"
#include "core/memoryallocatedobject.h"
#ifdef EV_BULID_DISPLAY
#define EV_DISPLAY_DLL EV_DLL_EXPORT
#else
#define EV_DISPLAY_DLL EV_DLL_IMPORT
#endif
#endif
