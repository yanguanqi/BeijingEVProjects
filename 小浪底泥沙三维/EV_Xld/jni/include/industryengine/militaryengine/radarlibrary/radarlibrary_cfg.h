#ifndef RADARLIBRARY_CFG_H
#define RADARLIBRARY_CFG_H

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"

#ifdef EV_BUILD_RADARLIBRARY
#define EV_RADARLIBRARY_DLL EV_DLL_EXPORT
#else
#define EV_RADARLIBRARY_DLL EV_DLL_IMPORT
#endif

#endif
