#ifndef EARTHVIEW_WORLD_SPATIAL3D_COFING_H
#define EARTHVIEW_WORLD_SPATIAL3D_COFING_H

#include "core/global.h"

#ifdef EV_BUILD_SPATIAL3DENGINE 
#define EV_Spatial3DEngine_DLL EV_DLL_EXPORT
#else
#define EV_Spatial3DEngine_DLL EV_DLL_IMPORT
#endif


#ifndef UNWARP_EXPORT
#define UNWARP_EXPORT EV_Spatial3DEngine_DLL
#endif

#include <core/platform.h>

#ifdef EV_OS_ANDROID
#define  CREATE_RESOURCE_IN_MAIN_THREAD 1
#else
#define  CREATE_RESOURCE_IN_MAIN_THREAD 0
#endif

#define  USE_FFT_OCEAN

#endif