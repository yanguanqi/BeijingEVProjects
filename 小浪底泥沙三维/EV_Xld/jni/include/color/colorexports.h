﻿#ifndef EARTHVIEW_WORLD_SPATIAL_COLOREXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_COLOREXPORTS_H
#ifdef EV_BUILD_COLOR
#define EV_COLOR_DLL EV_DLL_EXPORT
#else
#define EV_COLOR_DLL EV_DLL_IMPORT
#endif
#endif
