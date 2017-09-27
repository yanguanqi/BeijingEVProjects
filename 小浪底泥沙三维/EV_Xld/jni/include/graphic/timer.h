#ifndef __CommonTimer_H__
#define __CommonTimer_H__
#include <core/platform.h>
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
///Bring in the specific platform's header file

#ifdef EV_OS_ANDROID
#include "Android/timerimp.h"
#endif

#if EV_PLATFORM == EV_PLATFORM_WIN32
#include "WIN32/timerimp.h"
#elif EV_PLATFORM == EV_PLATFORM_ANDROID
#include "Android/timerimp.h"
#elif (EV_PLATFORM == EV_PLATFORM_LINUX) || (EV_PLATFORM == EV_PLATFORM_SYMBIAN)
#include "GLX/timerimp.h"
#elif EV_PLATFORM == EV_PLATFORM_APPLE
#include "OSX/timerimp.h"
#elif EV_PLATFORM == EV_PLATFORM_APPLE_IOS
#include "iOS/timerimp.h"
#endif
#endif

