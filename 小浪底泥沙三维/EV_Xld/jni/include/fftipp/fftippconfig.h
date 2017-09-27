#ifndef EARTHVIEW_WORLD_GRAPHIC_FFTIPP_CONFIG_H
#define EARTHVIEW_WORLD_GRAPHIC_FFTIPP_CONFIG_H

#include "core/global.h"

#ifdef EV_BUILD_FFTIPP
#define EV_FFTIPP_DLL EV_DLL_EXPORT
#else
#define EV_FFTIPP_DLL EV_DLL_IMPORT
#endif


#ifndef UNWARP_EXPORT
#define UNWARP_EXPORT EV_FFTIPP_DLL
#endif

#include <core/platform.h>

#endif