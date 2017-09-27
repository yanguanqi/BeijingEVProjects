#ifndef INDUSTRYGRAPHIC_CFG_H
#define INDUSTRYGRAPHIC_CFG_H

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/stdheaders.h"

#ifdef EV_BUILD_INDUSTRYGRAPHIC
#define EV_INDUSTRYGRAPHIC_DLL EV_DLL_EXPORT
#else
#define EV_INDUSTRYGRAPHIC_DLL EV_DLL_IMPORT
#endif

#endif
