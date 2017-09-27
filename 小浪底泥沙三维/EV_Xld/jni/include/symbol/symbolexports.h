#ifndef EARTHVIEW_WORLD_SPATIAL_SYMBOLEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_SYMBOLEXPORTS_H

#include "core/global.h"

#ifdef _WIN32
#ifndef EV_CC_MSVC
#define EV_CC_MSVC
#endif
#endif

#ifdef EV_SYMBOL_BUILD
#define EV_SYMBOL_DLL EV_DLL_EXPORT
#else
#define EV_SYMBOL_DLL EV_DLL_IMPORT
#endif

#endif
