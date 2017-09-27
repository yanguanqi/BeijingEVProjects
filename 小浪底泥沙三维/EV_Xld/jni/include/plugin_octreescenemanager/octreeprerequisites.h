#ifndef __TerrainPrerequisites_H__
#define __TerrainPrerequisites_H__
#include "graphic/prerequisites.h"
#include "graphic/graphic_config.h"
#include "graphic/mesh.h"
///////-----------------------------------------------------------------------
////// Windows Settings
//////-----------------------------------------------------------------------
#if (EV_PLATFORM == EV_PLATFORM_WIN32 ) && !defined(EV_STATIC_LIB)
#ifdef EV_OCTREEPLUGIN_EXPORTS
#define EV_OCTREEPLUGIN_DLL __declspec(dllexport)
#else
#if defined( __MINGW32__ )
#define EV_OCTREEPLUGIN_DLL
#else
#define EV_OCTREEPLUGIN_DLL __declspec(dllimport)
#endif
#endif
#elif defined ( EV_GCC_VISIBILITY )
#define EV_OCTREEPLUGIN_DLL  __attribute__ ((visibility("default")))
#else
#define EV_OCTREEPLUGIN_DLL
#endif
#endif

