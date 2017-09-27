#ifndef EARTHVIEW_WORLD_GRAPHIC_FFTCUDA_CONFIG_H
#define EARTHVIEW_WORLD_GRAPHIC_FFTCUDA_CONFIG_H

#include "core/global.h"

#ifdef EV_BUILD_FFTCUDA
#define EV_FFTCUDA_DLL EV_DLL_EXPORT
#else
#define EV_FFTCUDA_DLL EV_DLL_IMPORT
#endif


#ifndef UNWARP_EXPORT
#define UNWARP_EXPORT EV_FFTCUDA_DLL
#endif

#include <core/platform.h>

#endif