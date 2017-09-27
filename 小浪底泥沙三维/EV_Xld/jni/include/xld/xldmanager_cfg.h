#ifndef XLDMANAGER_CFG_H
#define XLDMANAGER_CFG_H

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"

#ifdef EV_BUILD_XLDMANAGER
#define EV_XLDMANAGER_DLL EV_DLL_EXPORT
#else
#define EV_XLDMANAGER_DLL EV_DLL_IMPORT
#endif

#endif