#ifndef __CoreJavaPrerequisites_H__
#define __CoreJavaPrerequisites_H__

#if defined(EV_OS_WIN) && !defined(EV_STATIC_LIB)
#ifdef EV_COREJAVA_EXPORTS
#define EV_COREJAVA_DLL __declspec(dllexport)
#else
#if defined( __MINGW32__ )
#define EV_COREJAVA_DLL
#else
#define EV_COREJAVA_DLL __declspec(dllimport)
#endif
#endif
#elif defined ( EV_GCC_VISIBILITY )
#define EV_COREJAVA_DLL  __attribute__ ((visibility("default")))
#else
#define EV_COREJAVA_DLL
#endif

#endif