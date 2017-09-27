#ifndef _EV_GLOBECONTROL_CONFIG_H_
#define _EV_GLOBECONTROL_CONFIG_H_ 1

 #include "core/global.h"
 #include "graphic/buildsettings.h"

#if EV_PLATFORM == EV_PLATFORM_WIN32
#   	if defined( EV_GLOBECONTROL_EXPORTS )
#       	define EV_GLOBECONTROL_DLL __declspec( dllexport )
#   	else
#           if defined( __MINGW32__ )
#               define EV_GLOBECONTROL_DLL
#           else
#       	    define EV_GLOBECONTROL_DLL __declspec( dllimport )
#           endif
#   	endif
#   	define EV_GLOBECONTROL_PRIVATE
#	endif

#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_IPHONE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS || EV_PLATFORM == EV_PLATFORM_SYMBIAN || EV_PLATFORM == EV_PLATFORM_ANDROID

// Enable GCC symbol visibility
#   if defined( EV_GCC_VISIBILITY )
#       define EV_GLOBECONTROL_DLL  __attribute__ ((visibility("default")))
#       define EV_GLOBECONTROL_PRIVATE __attribute__ ((visibility("hidden")))
#   else
#       define EV_GLOBECONTROL_DLL
#       define EV_GLOBECONTROL_PRIVATE
#   endif
#endif

#endif
