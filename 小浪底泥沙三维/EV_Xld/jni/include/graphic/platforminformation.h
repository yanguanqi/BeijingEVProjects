#ifndef __GraphicPlatformInformation_H__
#define __GraphicPlatformInformation_H__
#pragma once
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CLogger;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            //
            // TODO: Puts following macros into platform.h?
            //

            /**** Initial CPU stuff to set.
            ****/
#define EV_CPU_UNKNOWN    0
#define EV_CPU_X86        1
#define EV_CPU_PPC        2
#define EV_CPU_ARM        3

            /**** Find CPU type
            ****/
#if (defined(_MSC_VER) && (defined(_M_IX86) || defined(_M_X64))) || \
    (defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__)))
#   define EV_CPU EV_CPU_X86

#elif EV_PLATFORM == EV_PLATFORM_APPLE && defined(__BIG_ENDIAN__)
#   define EV_CPU EV_CPU_PPC
#elif EV_PLATFORM == EV_PLATFORM_APPLE
#	define EV_CPU EV_CPU_X86
#elif EV_PLATFORM == PLATFORM_APPLE_IOS && (defined(__i386__) || defined(__x86_64__))
#	define EV_CPU EV_CPU_X86
#elif defined(__arm__)
#	define EV_CPU EV_CPU_ARM
#else
#   define EV_CPU EV_CPU_UNKNOWN
#endif

            /**** Find how to declare aligned variable.
            ****/
#if EV_COMPILER == EV_COMPILER_MSVC
#   define EV_ALIGNED_DECL(type, var, alignment)  __declspec(align(alignment)) type var

#elif (EV_COMPILER == EV_COMPILER_GNUC) /****|| (EV_COMPILER == EV_COMPILER_CLANG)****/
#   define EV_ALIGNED_DECL(type, var, alignment)  type var __attribute__((__aligned__(alignment)))

#else
#   define EV_ALIGNED_DECL(type, var, alignment)  type var
#endif

            /***** Find perfect alignment (should supports SIMD alignment if SIMD available)
            ****/
#if EV_CPU == EV_CPU_X86
#   define EV_SIMD_ALIGNMENT  16

#else
#   define EV_SIMD_ALIGNMENT  16
#endif

            /**** Declare variable aligned to SIMD alignment.
            ****/
#define EV_SIMD_ALIGNED_DECL(type, var)   EV_ALIGNED_DECL(type, var, EV_SIMD_ALIGNMENT)

            /**** Define whether or not EV_World compiled with SSE supports.
            ****/
#if   EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_X86 && EV_COMPILER == EV_COMPILER_MSVC /****&& EV_PLATFORM != EV_PLATFORM_NACL****/
#   define __EV_HAVE_SSE  1
#elif EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_X86 && (EV_COMPILER == EV_COMPILER_GNUC /****|| EV_COMPILER == EV_COMPILER_CLANG****/) && \
    EV_PLATFORM != EV_PLATFORM_APPLE_IOS /****&& EV_PLATFORM != EV_PLATFORM_NACL****/
#   define __EV_HAVE_SSE  1
#endif

            /**** Define whether or not EV_World compiled with VFP supports.
            ****/
#if EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_ARM && (EV_COMPILER == EV_COMPILER_GNUC /****|| EV_COMPILER == EV_COMPILER_CLANG****/) && defined(__ARM_ARCH_6K__) && defined(__VFP_FP__)
#   define __EV_HAVE_VFP  1
#endif

            /**** Define whether or not EV_World compiled with NEON supports.
            ****/

#if EV_DOUBLE_PRECISION == 0 && EV_CPU == EV_CPU_ARM && (EV_COMPILER == EV_COMPILER_GNUC/**** || EV_COMPILER == EV_COMPILER_CLANG****/) && defined(__ARM_ARCH_7A__) && defined(__ARM_NEON__)
#   define __EV_HAVE_NEON  1
#endif

#ifndef __EV_HAVE_SSE
#   define __EV_HAVE_SSE  0
#endif

#ifndef __EV_HAVE_VFP
#   define __EV_HAVE_VFP  0
#endif

#ifndef __EV_HAVE_NEON
#   define __EV_HAVE_NEON  0
#endif

            /***** Class which provides the run-time platform information EV_World runs on.
            @remarks
            EV_World is designed to be platform-independent, but some platform
            and run-time environment specific optimised functions are built-in
            to maximise performance, and those special optimised routines are
            need to determine run-time environment for select variant executing
            path.
            @par
            This class manages that provides a couple of functions to determine
            platform information of the run-time environment.
            @note
            This class is supposed to use by advanced user only.
            ****/
            class EV_GRAPHIC_DLL CPlatformInformation : public EarthView::World::Core::CBaseObject
            {
            public:

                //// Enum describing the different CPU features we want to check for, platform-dependent
                enum CpuFeatures
                {
#if EV_CPU == EV_CPU_X86
                    CPU_FEATURE_SSE         = 1 << 0,
                    CPU_FEATURE_SSE2        = 1 << 1,
                    CPU_FEATURE_SSE3        = 1 << 2,
                    CPU_FEATURE_MMX         = 1 << 3,
                    CPU_FEATURE_MMXEXT      = 1 << 4,
                    CPU_FEATURE_3DNOW       = 1 << 5,
                    CPU_FEATURE_3DNOWEXT    = 1 << 6,
                    CPU_FEATURE_CMOV        = 1 << 7,
                    CPU_FEATURE_TSC         = 1 << 8,
                    CPU_FEATURE_FPU         = 1 << 9,
                    CPU_FEATURE_PRO         = 1 << 10,
                    CPU_FEATURE_HTT         = 1 << 11,
#elif EV_CPU == EV_CPU_ARM
                    CPU_FEATURE_VFP         = 1 << 12,
                    CPU_FEATURE_NEON        = 1 << 13,
#endif

                    CPU_FEATURE_NONE        = 0
                };

                /***** Gets a string of the CPU identifier.
                @note
                Actual detecting are performs in the first time call to this function,
                and then all future calls with return internal cached value.
                ****/
                CPlatformInformation();
ev_private:
                CPlatformInformation(_in EarthView::World::Core::CNameValuePairList* pList);
            public:
                static const EVString& getCpuIdentifier();

                /***** Gets a or-masked of enum CpuFeatures that are supported by the CPU.
                @note
                Actual detecting are performs in the first time call to this function,
                and then all future calls with return internal cached value.
                ****/
                static ev_uint32 getCpuFeatures();

                /***** Gets whether a specific feature is supported by the CPU.
                @note
                Actual detecting are performs in the first time call to this function,
                and then all future calls with return internal cached value.
                ****/
                static ev_bool hasCpuFeature(_in CpuFeatures feature);


                /***** Write the CPU information to the passed in CLog ****/
                static void log(_in EarthView::World::Core::CLogger* ptLog);

            };
        }
    }
}

#endif  /// __PlatformInformation_H__
