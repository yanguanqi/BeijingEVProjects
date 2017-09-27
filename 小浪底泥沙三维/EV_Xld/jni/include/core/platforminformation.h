#ifndef __PlatformInformation_H__
#define __PlatformInformation_H__
#include "core/global.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///
            /// TODO: Puts following macros into platform.h?
            ///
            /* Initial CPU stuff to set.
            */
#define EV_CPU_UNKNOWN    0
#define EV_CPU_X86        1
#define EV_CPU_PPC        2
#define EV_CPU_ARM        3
            /* Find CPU type
            */
#if (defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_X64))) || \
    (defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__)))
#define EV_CPU EV_CPU_X86
#elif EV_PLATFORM == EV_PLATFORM_APPLE && defined(__BIG_ENDIAN__)
#define EV_CPU EV_CPU_PPC
#elif EV_PLATFORM == EV_PLATFORM_APPLE
#define EV_CPU EV_CPU_X86
#elif EV_PLATFORM == EV_PLATFORM_APPLE_IOS && (defined(__i386__) || defined(__x86_64__))
#define EV_CPU EV_CPU_X86
#elif defined(__arm__)
#define EV_CPU EV_CPU_ARM
#else
#define EV_CPU EV_CPU_UNKNOWN
#endif
            /* Find how to declare aligned variable.
            */
#if EV_COMPILER == EV_COMPILER_MSVC
#define EV_ALIGNED_DECL(type, var, alignment)  __declspec(align(alignment)) type var
#elif EV_COMPILER == EV_COMPILER_GNUC
#define EV_ALIGNED_DECL(type, var, alignment)  type var __attribute__((__aligned__(alignment)))
#else
#define EV_ALIGNED_DECL(type, var, alignment)  type var
#endif
            /** Find perfect alignment (should supports SIMD alignment if SIMD available)
            */
#if EV_CPU == EV_CPU_X86
#define EV_SIMD_ALIGNMENT  16
#else
#define EV_SIMD_ALIGNMENT  16
#endif
            /* Declare variable aligned to SIMD alignment.
            */
#define EV_SIMD_ALIGNED_DECL(type, var)   EV_ALIGNED_DECL(type, var, EV_SIMD_ALIGNMENT)
            /* Define whether or not EV_World compiled with SSE supports.
            */
#if EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_X86 && EV_COMPILER == EV_COMPILER_MSVC
#define __EV_HAVE_SSE  1
#elif EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_X86 && EV_COMPILER == EV_COMPILER_GNUC && EV_PLATFORM != EV_PLATFORM_APPLE_IOS
#define __EV_HAVE_SSE  1
#endif
            /* Define whether or not EV_World compiled with VFP supports.
             */
#if EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_ARM && EV_COMPILER == EV_COMPILER_GNUC && defined(__ARM_ARCH_6K__) && defined(__VFP_FP__)
#define __EV_HAVE_VFP  1
#endif
            /* Define whether or not EV_World compiled with NEON supports.
             */
#if EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_ARM && EV_COMPILER == EV_COMPILER_GNUC && defined(__ARM_ARCH_7A__) && defined(__ARM_NEON__)
#define __EV_HAVE_NEON  1
#endif
#ifndef __EV_HAVE_SSE
#define __EV_HAVE_SSE  0
#endif
#ifndef __EV_HAVE_VFP
#define __EV_HAVE_VFP  0
#endif
#ifndef __EV_HAVE_NEON
#define __EV_HAVE_NEON  0
#endif

        }
    }
}

#endif  /// __PlatformInformation_H__
