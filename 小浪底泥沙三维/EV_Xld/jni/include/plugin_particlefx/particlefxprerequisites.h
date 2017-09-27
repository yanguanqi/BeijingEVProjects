#ifndef __SfxPluginPrerequisites_H__
#define __SfxPluginPrerequisites_H__
#include "graphic/prerequisites.h"
#include "graphic/graphic_config.h"
///////-----------------------------------------------------------------------
/////// Windows Settings
//////-----------------------------------------------------------------------
#if (EV_PLATFORM == EV_PLATFORM_WIN32) && !defined(EV_STATIC_LIB)
#ifdef EV_PARTICLEFXPLUGIN_EXPORTS
#define EV_ParticleFX_DLL __declspec(dllexport)
#else
#if defined( __MINGW32__ )
#define EV_ParticleFX_DLL
#else
#define EV_ParticleFX_DLL __declspec(dllimport)
#endif
#endif
#elif defined ( EV_GCC_VISIBILITY )
#define EV_ParticleFX_DLL  __attribute__ ((visibility("default")))
#else
#define EV_ParticleFX_DLL
#endif

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /// Predeclare classes
                class CPointEmitter;
                class CPointEmitterFactory;
                class CLinearForceAffector;
                class CLinearForceAffectorFactory;
                class CDirectionRandomiserAffectorFactory;
                class CDeflectorPlaneAffectorFactory;

            }
        }
    }
}


#endif

