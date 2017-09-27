#ifndef EARTHVIEW_WORLD_ANNOTATION_COFING_H
#define EARTHVIEW_WORLD_ANNOTATION_COFING_H


#include "core/global.h"

#ifdef EV_ANNOTATION_LIB
#define EV_ANNOTATION_EXPORTS EV_DLL_EXPORT
#else
#define EV_ANNOTATION_EXPORTS EV_DLL_IMPORT
#endif

//#define EV_USE_CORE

//#ifdef EV_USE_CORE
#include "core/core_api.h"
//#endif


#endif 