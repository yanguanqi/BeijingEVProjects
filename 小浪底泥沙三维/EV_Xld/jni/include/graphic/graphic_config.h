#ifndef __Config_H_
#define __Config_H_
/// Include the CMake-generated build settings.
/// If you get complaints that this file is missing, then you're probably
/// trying to link directly against your source dir. You must then add
/// %BUILD_DIR%/include to your include search path to find buildsettings.h.
#include <core/global.h>
#include "buildsettings.h"
/** If set to 1, profiling code will be included in the application. When you
	are deploying your application you will probably want to set this to 0 */
#ifndef EV_PROFILING
#define EV_PROFILING 0
#endif
/** There are three modes for handling EV_ASSERTs in EV_World:
0 - STANDARD - Standard EV_ASSERTs in debug builds, nothing in release builds
1 - RELEASE_EXCEPTIONS - Standard EV_ASSERTs in debug builds, exceptions in release builds
2 - EXCEPTIONS - Exceptions in debug builds, exceptions in release builds
*/
#define EV_ASSERT_MODE 0
/** If set to >0, EV_World will always 'think' that the graphics card only has the
    number of texture units specified. Very useful for testing multipass fallback.
*/
#define EV_PRETEND_TEXTURE_UNITS 0
/** If set to 1, Real is typedef'ed to double. Otherwise, Real is typedef'ed
    to ev_real32. Setting this allows you to perform mathematical operations in the
	CPU (EarthView::World::Spatial::Math::CQuaternion, EarthView::World::Spatial::Math::CVector3 etc) with more precision, but bear in mind that the
	GPU still operates in single-precision mode.
*/
//#ifndef EV_DOUBLE_PRECISION
//#define EV_DOUBLE_PRECISION 1
//#endif
/** Define number of texture coordinate sets allowed per vertex.
*/
#define EV_MAX_TEXTURE_COORD_SETS /*6*/8
/** Define max number of texture layers allowed per pass on any card.
*/
#define EV_MAX_TEXTURE_LAYERS 16
/** Define max number of lights allowed per pass.
*/
#define EV_MAX_SIMULTANEOUS_LIGHTS 8
/** Define max number of blending weights allowed per vertex.
*/
#define EV_MAX_BLEND_WEIGHTS 4
/** Define this if you want to link EV_World as a static lib (preferably as a project file)
*/
///#define EV_STATIC_LIB

/** Define max number of multiple render targets (MRTs) to render to at once.
*/
#define EV_MAX_MULTIPLE_RENDER_TARGETS 8
/** Disables use of the FreeImage image library for loading images.
WARNING: Use only when you want to provide your own image loading code via codecs.
*/
#ifndef EV_NO_FREEIMAGE
#define EV_NO_FREEIMAGE 0
#endif

/** Disables use of the internal image codec for loading DDS files.
WARNING: Use only when you want to provide your own image loading code via codecs.
*/
#ifndef EV_NO_DDS_CODEC
#define EV_NO_DDS_CODEC 0
#endif
/** Disables use of the ZIP archive support.
WARNING: Disabling this will make the samples unusable.
*/
#ifndef EV_NO_ZIP_ARCHIVE
#define EV_NO_ZIP_ARCHIVE 0
#endif
/** Enables the use of the new script compilers when EV_World compiles resource scripts.
*/
#ifndef EV_USE_NEW_COMPILERS
#define EV_USE_NEW_COMPILERS 1
#endif
#ifndef EV_USE_FIXED_POINT
#define EV_USE_FIXED_POINT 0
#endif

#if EV_PLATFORM == EV_PLATFORM_WIN32
#if defined( EV_GRAPHIC_BUILD )
#define EV_GRAPHIC_DLL __declspec( dllexport )
#else
#if defined( __MINGW32__ )
#define EV_GRAPHIC_DLL
#else
#define EV_GRAPHIC_DLL __declspec( dllimport )
#endif
#endif
#define EV_GRAPHIC_PRIVATE
#endif
///----------------------------------------------------------------------------
/// Symbian Settings
#if EV_PLATFORM == EV_PLATFORM_SYMBIAN
#define EV_UNICODE_SUPPORT 1
#define EV_DEBUG_MODE 0
#define EV_GRAPHIC_DLL
#define EV_GRAPHIC_PRIVATE
#define CLOCKS_PER_SEC  1000
/// pragma def were found here: http://www.inf.pucrs.br/~eduardob/disciplinas/SistEmbarcados/Mobile/Nokia/Tools/Carbide_vs/WINSCW/Help/PDF/C_Compilers_Reference_3.2.pdf
#pragma warn_unusedarg off
#pragma warn_emptydecl off
#pragma warn_possunwant off
#endif
///----------------------------------------------------------------------------
/// Linux/Apple/Symbian Settings
#if EV_PLATFORM == EV_PLATFORM_LINUX \
	|| EV_PLATFORM == EV_PLATFORM_APPLE \
	|| EV_PLATFORM == EV_PLATFORM_APPLE_IOS \
	|| EV_PLATFORM == EV_PLATFORM_SYMBIAN\
	|| EV_PLATFORM == EV_PLATFORM_ANDROID

/// Enable GCC symbol visibility
#if defined( EV_GCC_VISIBILITY )
#define EV_GRAPHIC_DLL  __attribute__ ((visibility("default")))
#define EV_GRAPHIC_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define EV_GRAPHIC_DLL
#define EV_GRAPHIC_PRIVATE
#endif
#endif

/// EV_Graphic code's begin and end;
#define EV_GRAPHIC_BEGIN namespace EarthView{ namespace World { namespace Graphic{	
#define EV_GRAPHIC_END }}};

#endif
