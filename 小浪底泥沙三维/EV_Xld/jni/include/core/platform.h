#ifndef __Platform_H_
#define __Platform_H_
#pragma once
/* Initial platform/compiler-related stuff to set.
*/
#define EV_PLATFORM_WIN32 1
#define EV_PLATFORM_LINUX 2
#define EV_PLATFORM_APPLE 3
#define EV_PLATFORM_SYMBIAN 4
///#define EV_PLATFORM_APPLE_IOS 5
#define EV_PLATFORM_APPLE_IOS 5
#define EV_PLATFORM_ANDROID 6
#define EV_COMPILER_MSVC 1
#define EV_COMPILER_GNUC 2
#define EV_COMPILER_BORL 3
#define EV_COMPILER_WINSCW 4
#define EV_COMPILER_GCCE 5
#define EV_ENDIAN_LITTLE 1234
#define EV_ENDIAN_BIG 4321
#define EV_ARCHITECTURE_32 1
#define EV_ARCHITECTURE_64 2

/* 追加EV_ARCH_AARCH64这个宏*/
#if defined(__aarch64__)
#define EV_PLATFORM  EV_ARCH_AARCH64
#endif 

/* Finds the compiler type and version.
*/
///编译器类型标识宏定义--开始
#if defined(_MSC_VER) && (_MSC_VER >= 1200) ///只支持MSVC++6.0以上的编译器
#define EV_CC_MSVC
#elif defined(__GNUC__)
#define EV_CC_GNU
#elif defined(__intel__)
#define EV_CC_INTEL
#else
#error  "nonsupport current compiler"
#endif
///编译器类型标识宏定义--结束

#if defined( __GCCE__ )
#define EV_COMPILER EV_COMPILER_GCCE
#define EV_COMP_VER _MSC_VER
///#	include <staticlibinit_gcce.h> // This is a GCCE toolchain workaround needed when compiling with GCCE
#elif defined( __WINSCW__ )
#define EV_COMPILER EV_COMPILER_WINSCW
#define EV_COMP_VER _MSC_VER
#elif defined( _MSC_VER )
#define EV_COMPILER EV_COMPILER_MSVC
#define EV_COMP_VER _MSC_VER

#elif defined( __GNUC__ )
#define EV_COMPILER EV_COMPILER_GNUC
#define EV_COMP_VER (((__GNUC__)*100) + \
        (__GNUC_MINOR__*10) + \
        __GNUC_PATCHLEVEL__)

#elif defined( __BORLANDC__ )
#define EV_COMPILER EV_COMPILER_BORL
#define EV_COMP_VER __BCPLUSPLUS__
#define __FUNCTION__ __FUNC__
#else
#pragma error "No known compiler. Abort! Abort!"
#endif
/* See if we can use __forceinline or if we need to use __inline instead */
#if EV_COMPILER == EV_COMPILER_MSVC
#if EV_COMP_VER >= 1200
#define FORCEINLINE __forceinline
#endif
#elif defined(__MINGW32__)
#if !defined(FORCEINLINE)
#define FORCEINLINE __inline
#endif
#else
#define FORCEINLINE __inline
#endif

#if defined( __SYMBIAN32__ )
#define EV_PLATFORM EV_PLATFORM_SYMBIAN
#elif defined( __WIN32__ ) || defined( _WIN32 )
#define EV_PLATFORM EV_PLATFORM_WIN32
#elif defined( __APPLE_CC__)
/// Device                                                     Simulator
/// Both requiring OS version 3.0 or greater
#if __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ >= 40000/*30000*/ || __IPHONE_OS_VERSION_MIN_REQUIRED >= 40000/*30000*/
#define EV_PLATFORM EV_PLATFORM_APPLE_IOS
#else
#define EV_PLATFORM EV_PLATFORM_APPLE
#endif
#elif defined(__ANDROID__)
#define EV_PLATFORM EV_PLATFORM_ANDROID
#else
#define EV_PLATFORM EV_PLATFORM_LINUX
#endif


/* Finds the current platform */
/*操作系统标识宏定义--开始*/
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__) ||  defined(_WIN32_WCE) || defined(WINCE)
#if defined(WINCE) || defined(_WIN32_WCE)
#ifndef EV_OS_WINCE
#define  EV_OS_WINCE
#endif
#else
#ifndef EV_OS_WIN32
#define  EV_OS_WIN32
#endif
#endif

#if  defined(WIN64) || defined(_WIN64) || defined(__WIN64__)
#ifndef EV_OS_WIN32
#define  EV_OS_WIN32
#endif
#ifndef EV_OS_WIN64
#define  EV_OS_WIN64
#endif
#endif

#elif defined(__android__)
#define  __stdcall
#ifndef EV_OS_ANDROID
#define EV_OS_ANDROID
#endif
#elif defined(__ios__) || defined(__APPLE_CC__)
#ifndef EV_OS_IOS
#define EV_OS_IOS
#endif
#elif defined(__CYGWIN__)
#ifndef EV_OS_CYGWIN
#define EV_OS_CYGWIN
#endif
///在这里添加其他的操作系统标识宏
#else
///#error "nonsupport current OS"
#endif ///#if    defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#if defined(EV_OS_WIN32) || defined(EV_OS_WIN64) || defined(EV_OS_WINCE)
#ifndef EV_OS_WIN
#define EV_OS_WIN
#endif
#endif
#if defined(__linux__) || defined(__linux) || defined(EV_OS_ANDROID) || defined(EV_OS_IOS) || defined(EV_OS_CYGWIN)
#ifndef EV_OS_LINUX
#define EV_OS_LINUX
# if defined(__x86_64__) || defined(_M_X64) || defined(__powerpc64__) || defined(__alpha__) || defined(__ia64__) || defined(__s390__) || defined(__s390x__) || defined(__mips64) || defined(__aarch64__)
#  ifndef EV_OS_LINUX64
#   define EV_OS_LINUX64
#  endif
# endif
#endif
#ifdef __arm__
#ifndef EV_OS_LINUX_ARM
#define EV_OS_LINUX_ARM
#endif
#else
#ifndef EV_OS_LINUX_PC
#define EV_OS_LINUX_PC
#endif
#endif
#endif
///操作系统标识宏定义--结束

/* Find the arch type */
#ifndef EV_ARCH_TYPE
#if defined(__x86_64__) || defined(_M_X64) || defined(__powerpc64__) || defined(__alpha__) || defined(__ia64__) || defined(__s390__) || defined(__s390x__)
#define EV_ARCH_TYPE EV_ARCHITECTURE_64
#else
#define EV_ARCH_TYPE EV_ARCHITECTURE_32
#endif
#endif
/// For generating compiler warnings - should work on any compiler
/// As a side note, if you start your message with 'Warning: ', the MSVC
/// IDE actually does catch a warning :)
#define EV_QUOTE_INPLACE(x) # x
#define EV_QUOTE(x) EV_QUOTE_INPLACE(x)
#define EV_WARN( x )  message( __FILE__ "(" QUOTE( __LINE__ ) ") : " x "\n" )
///----------------------------------------------------------------------------
/// Windows Settings
#if EV_PLATFORM == EV_PLATFORM_WIN32
/// Win32 compilers use _DEBUG for specifying debug builds.
/// for MinGW, we set DEBUG
#if defined(_DEBUG) || defined(DEBUG)
#define EV_DEBUG_MODE 1
#else
#define EV_DEBUG_MODE 0
#endif
/// Disable unicode support on MingW for GCC 3, poorly supported in stdlibc++
/// STLPORT fixes this though so allow if found
/// MinGW C++ Toolkit supports unicode and sets the define __MINGW32_TOOLBOX_UNICODE__ in _mingw.h
/// GCC 4 is also fine
#if defined(__MINGW32__)
#if EV_COMP_VER < 400
#if !defined(_STLPORT_VERSION)
#include<_mingw.h>
#if defined(__MINGW32_TOOLBOX_UNICODE__) || EV_COMP_VER > 345
#define EV_UNICODE_SUPPORT 1
#else
#define EV_UNICODE_SUPPORT 0
#endif
#else
#define EV_UNICODE_SUPPORT 1
#endif
#else
#define EV_UNICODE_SUPPORT 1
#endif
#else
#define EV_UNICODE_SUPPORT 1
#endif
#endif /// EV_PLATFORM == EV_PLATFORM_WIN32
///----------------------------------------------------------------------------
/// Symbian Settings
#if EV_PLATFORM == EV_PLATFORM_SYMBIAN
#define EV_UNICODE_SUPPORT 1
#define EV_DEBUG_MODE 0
#define CLOCKS_PER_SEC  1000
/// pragma def were found here: http://www.inf.pucrs.br/~eduardob/disciplinas/SistEmbarcados/Mobile/Nokia/Tools/Carbide_vs/WINSCW/Help/PDF/C_Compilers_Reference_3.2.pdf
#pragma warn_unusedarg off
#pragma warn_emptydecl off
#pragma warn_possunwant off
/// A quick define to overcome different names for the same function
#define stricmp strcasecmp
#ifdef DEBUG
#define EV_DEBUG_MODE 1
#else
#define EV_DEBUG_MODE 0
#endif
#endif
///----------------------------------------------------------------------------
/// Android Settings
/*
#if EV_PLATFORM == EV_PLATFORM_ANDROID
#   define _EvExport
#	define EV_UNICODE_SUPPORT 1
#   define EV_DEBUG_MODE 0
#   define _EvPrivate
#	  define CLOCKS_PER_SEC  1000
//  pragma def were found here: http://www.inf.pucrs.br/~eduardob/disciplinas/SistEmbarcados/Mobile/Nokia/Tools/Carbide_vs/WINSCW/Help/PDF/C_Compilers_Reference_3.2.pdf
#	  pragma warn_unusedarg off
#	  pragma warn_emptydecl off
#	  pragma warn_possunwant off
// A quick define to overcome different names for the same function
#   define stricmp strcasecmp
#   ifdef DEBUG
#       define EV_DEBUG_MODE 1
#   else
#       define EV_DEBUG_MODE 0
#   endif
#endif
*/
///----------------------------------------------------------------------------
/// Linux/Apple/iOs/Android/Symbian/NaCl Settings
#if EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS || \
	EV_PLATFORM == EV_PLATFORM_ANDROID


/// A quick define to overcome different names for the same function
#define stricmp strcasecmp
/// Unlike the Win32 compilers, Linux compilers seem to use DEBUG for when
/// specifying a debug build.
/// (??? this is wrong, on Linux debug builds aren't marked in any way unless
/// you mark it yourself any way you like it -- zap ???)
#ifdef DEBUG
#define EV_DEBUG_MODE 1
#else
#define EV_DEBUG_MODE 0
#endif
/// Always enable unicode support for the moment
/// Perhaps disable in old versions of gcc if necessary
#define EV_UNICODE_SUPPORT 1
#endif
///----------------------------------------------------------------------------
/// Endian Settings
#ifndef EV_ENDIAN
#if defined(__hppa__) || \
	defined(__m68k__) || defined(mc68000) || defined(_M_M68K) || \
	(defined(__MIPS__) && defined(__MISPEB__)) || \
	defined(__ppc__) || defined(__POWERPC__) || defined(_M_PPC) || \
	defined(__sparc__)
#define EV_ENDIAN	EV_ENDIAN_BIG
#else
#define EV_ENDIAN	EV_ENDIAN_LITTLE
#endif
#endif
#endif
