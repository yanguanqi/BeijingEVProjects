#ifndef _EVGA_CONFIG_H_
#define _EVGA_CONFIG_H_ 1

#include "graphic/buildsettings.h"
#include "core/global.h"


#if EV_PLATFORM == EV_PLATFORM_WIN32
#   	if defined( EV_GA_EXPORTS )
#       	define EV_GA_DLL __declspec( dllexport )
#   	else
#           if defined( __MINGW32__ )
#               define EV_GA_DLL
#           else
#       	    define EV_GA_DLL __declspec( dllimport )
#           endif
#   	endif
#   	define EV_GA_PRIVATE
#	endif

#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_IPHONE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS ||  EV_PLATFORM == EV_PLATFORM_SYMBIAN || EV_PLATFORM == EV_PLATFORM_ANDROID

// Enable GCC symbol visibility
#   if defined( EV_GCC_VISIBILITY )
#       define EV_GA_DLL  __attribute__ ((visibility("default")))
#       define EV_GA_PRIVATE __attribute__ ((visibility("hidden")))
#   else
#       define EV_GA_DLL
#       define EV_GA_PRIVATE
#   endif
#endif

#endif
