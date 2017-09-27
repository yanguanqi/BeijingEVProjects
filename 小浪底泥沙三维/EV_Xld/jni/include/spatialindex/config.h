﻿#ifndef _SPATIALINDEX_COFING_H
#define _SPATIALINDEX_COFING_H

#include "core/global.h"

#ifdef EV_BUILD_SPATIALINDEX 
#define EV_SPATIALINDEX_DLL EV_DLL_EXPORT
#else
#define EV_SPATIALINDEX_DLL EV_DLL_IMPORT
#endif
#ifndef UNWARP_EXPORT_SPATIALINDEX
#define UNWARP_EXPORT_SPATIALINDEX EV_SPATIALINDEX_DLL
#endif


#endif