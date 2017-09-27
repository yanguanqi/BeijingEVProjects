#ifndef  EV_GEOMETRY3D_CONFIG_H_
#define  EV_GEOMETRY3D_CONFIG_H_
#pragma once

#include <core/global.h>
#include <graphic/buildsettings.h>
#if EV_COMPILER == EV_COMPILER_MSVC
/// we do a lot of PreciseReal -> Real in here, casting is messy
/// disable: "conversion from 'ev_real64' to 'ev_real32', possible loss of data
#pragma warning (disable : 4244)
#pragma warning (disable : 4305)
#endif

#if EV_PLATFORM == EV_PLATFORM_WIN32
#if defined( EV_GEOMETRY3D_EXPORTS )
#define EV_GEOMETRY3D_DLL EV_DLL_EXPORT
#else
#if defined( __MINGW32__ )
#define EV_GEOMETRY3D_DLL
#else
#define EV_GEOMETRY3D_DLL EV_DLL_IMPORT
#endif
#endif
#define EV_GEOMETRY3D_PRIVATE
#endif

#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS || EV_PLATFORM == EV_PLATFORM_SYMBIAN || EV_PLATFORM == EV_PLATFORM_ANDROID
/// Enable GCC symbol visibility
#if defined( EV_GCC_VISIBILITY )
#define EV_GEOMETRY3D_DLL  __attribute__ ((visibility("default")))
#define EV_GRAPHIC_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define EV_GEOMETRY3D_DLL
#define EV_GEOMETRY3D_PRIVATE
#endif
#endif

#endif ///EV_DRAWING3D_CONFIG_H_
