
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include "core/global.h"

#ifdef  EV_BUILD_DATASOURCEUTILS
#define DATASOURCEUTILS_DLL EV_DLL_EXPORT
#else
#define DATASOURCEUTILS_DLL EV_DLL_IMPORT
#endif


#endif
