#ifndef __ParticleFXPlugin_H__
#define __ParticleFXPlugin_H__
#include "core/plugin.h"
#include "graphic/particleaffectorfactory.h"
#include "graphic/particleemitterfactory.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** CPlugin instance for ParticleFX Manager */
                class CParticleFXPlugin : public EarthView::World::Core::CPlugin
                {
                public:
                    CParticleFXPlugin();

                    //// @copydoc CPlugin::getName
                    EVString getName() const;
                    //// @copydoc CPlugin::install
                    void install();
                    //// @copydoc CPlugin::initialise
                    void initialise();
                    //// @copydoc CPlugin::shutdown
                    void shutdown();
                    //// @copydoc CPlugin::uninstall
                    void uninstall();
                protected:
                    vector<EarthView::World::Graphic::CParticleEmitterFactory *> mEmitterFactories;
                    vector<EarthView::World::Graphic::CParticleAffectorFactory *> mAffectorFactories;
                };
            }
        }
    }
}

#endif

