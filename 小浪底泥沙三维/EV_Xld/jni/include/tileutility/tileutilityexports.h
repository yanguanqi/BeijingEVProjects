﻿#ifndef EARTHVIEW_WORLD_SPATIAL_TILEUTILITYEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_TILEUTILITYEXPORTS_H
#include "core/global.h"
#include "core/stringdefines.h"
#ifdef EV_BUILD_TILEUTILITY
#define EV_TILEUTILITY_DLL EV_DLL_EXPORT
#else
#define EV_TILEUTILITY_DLL EV_DLL_IMPORT
#endif

#endif
