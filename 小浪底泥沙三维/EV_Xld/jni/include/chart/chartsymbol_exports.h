#ifndef EARTHVIEW_WORLD_CHART_CCHARTSYMBOLEXPORTS_H
#define EARTHVIEW_WORLD_CHART_CCHARTSYMBOLEXPORTS_H

#ifdef EV_CHART_EXPORTS
#define EVCHART_DLL EV_DLL_EXPORT
#else
#define EVCHART_DLL EV_DLL_IMPORT
#endif

#include "core/global.h"
#include "spatialinterface/ichartoption.h"
#define  Chart_Line_Width   0.3
#define  Math_PI            3.141592653589793f
#define Chart_ColorToken_Size	5
#define Chart_SymbolName_Size	8
#define G_DPI 96
static int sssCount = 0;

#endif
