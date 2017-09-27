#ifndef __DYNAMICMODEL_CFG_H__
#define __DYNAMICMODEL_CFG_H__

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"

#ifdef EV_BUILD_DYNAMICMODELLIBRARY
#define EV_DYNAMICMODELLIBRARY_DLL EV_DLL_EXPORT
#else
#define EV_DYNAMICMODELLIBRARY_DLL EV_DLL_IMPORT
#endif

#endif
