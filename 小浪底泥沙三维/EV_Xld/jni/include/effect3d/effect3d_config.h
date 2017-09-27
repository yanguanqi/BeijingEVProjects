#ifndef _EV_EFFECT3D_CONFIG_H_
#define _EV_EFFECT3D_CONFIG_H_ 1

 #include <core/global.h>
 #include <graphic/buildsettings.h>

#if EV_PLATFORM == EV_PLATFORM_WIN32
#   	if defined( EV_EFFECT3D_EXPORTS )
#       	define EV_EFFECT3D_DLL __declspec( dllexport )
#   	else
#           if defined( __MINGW32__ )
#               define EV_EFFECT3D_DLL
#           else
#       	    define EV_EFFECT3D_DLL __declspec( dllimport )
#           endif
#   	endif
#   	define EV_EFFECT3D_PRIVATE
#	endif

#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS || EV_PLATFORM == EV_PLATFORM_IPHONE || EV_PLATFORM == EV_PLATFORM_SYMBIAN || EV_PLATFORM == EV_PLATFORM_ANDROID

// Enable GCC symbol visibility
#   if defined( EV_GCC_VISIBILITY )
#       define EV_EFFECT3D_DLL  __attribute__ ((visibility("default")))
#       define EV_EFFECT3D_PRIVATE __attribute__ ((visibility("hidden")))
#   else
#       define EV_EFFECT3D_DLL
#       define EV_EFFECT3D_PRIVATE
#   endif
#endif

#endif
