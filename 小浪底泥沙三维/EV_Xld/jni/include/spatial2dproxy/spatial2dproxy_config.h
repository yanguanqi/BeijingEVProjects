#ifndef _SPATIAL2DPROXY_COFING_H
#define _SPATIAL2DPROXY_COFING_H
#include "core/global.h"
#include "core/event.h"
#include "spatialgui/spatialguievent.h"

#ifdef  EV_BUILD_SPATIAL2DPROXY
#define EV_2DPROXY_DLL EV_DLL_EXPORT
#else
#define EV_2DPROXY_DLL EV_DLL_IMPORT
#endif

#endif
