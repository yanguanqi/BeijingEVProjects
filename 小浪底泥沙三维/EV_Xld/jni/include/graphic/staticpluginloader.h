#ifndef __StaticPluginLoader_H__
#define __StaticPluginLoader_H__
#include "buildsettings.h"
#include "ev_graphic.h"
#include "configfile.h"
/////// Static plugin headers
#ifdef EV_STATIC_CgProgramManager
#include "cgplugin.h"
#endif
#ifdef EV_STATIC_OctreeSceneManager
#include "octreeplugin.h"
#endif
#ifdef EV_STATIC_ParticleFX
#include "particlefxplugin.h"
#endif
#ifdef EV_STATIC_BSPSceneManager
#include "bspscenemanagerplugin.h"
#endif
#ifdef EV_STATIC_GL
#include "glplugin.h"
#endif
#ifdef EV_STATIC_GLES
#include "glesplugin.h"
#endif
#ifdef EV_STATIC_GLES2
#include "gles2plugin.h"
#endif
#ifdef EV_STATIC_Direct3D9
#include "d3d9plugin.h"
#endif
#ifdef EV_STATIC_Direct3D10
#include "d3d10plugin.h"
#endif
#ifdef EV_STATIC_Direct3D11
#include "d3d11plugin.h"
#endif
#ifdef EV_STATIC_PCZSceneManager
#include "pczplugin.h"
#endif
#ifdef EV_STATIC_OctreeZone
#include "octreezoneplugin.h"
#endif
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Utility class for loading some plugins statically.
            @remarks
            	When loading plugins statically, you are limited to loading plugins
            	that are known about at compile time. You should define preprocessor
            	symbols depending on which plugins you want to load - the symbol being
            	EV_STATIC_<pluginname>, with pluginname being the usual name of the
            	plugin DLL (no file extension, no debug suffix, and without the Plugin_
            	or RenderSystem_ prefix.)
            */
            class StaticPluginLoader
            {
            protected:
#ifdef EV_STATIC_CgProgramManager
                CCgPlugin *mCCgPlugin;
#endif
#ifdef EV_STATIC_OctreeSceneManager
                COctreePlugin *mOctreePlugin;
#endif
#ifdef EV_STATIC_ParticleFX
                EarthView::World::Plugin::ParticleFX::CParticleFXPlugin *mParticleFXPlugin;
#endif
#ifdef EV_STATIC_BSPSceneManager
                CBspSceneManagerPlugin *mBSPPlugin;
#endif
#ifdef EV_STATIC_PCZSceneManager
                CPCZPlugin *mPCZPlugin;
#endif
#ifdef EV_STATIC_OctreeZone
                COctreeZonePlugin *mOctreeZonePlugin;
#endif
#ifdef EV_STATIC_GL
                CGLPlugin *mGLPlugin;
#endif
#ifdef EV_STATIC_GLES
                EarthView::World::RenderSystem::GLES::CGLESPlugin *mGLESPlugin;
#endif
#ifdef EV_STATIC_GLES2
                EarthView::World::RenderSystem::GLES2::GLES2Plugin *mGLES2Plugin;
#endif
#ifdef EV_STATIC_Direct3D9
                CD3D9Plugin *mD3D9Plugin;
#endif
#ifdef EV_STATIC_Direct3D10
                CD3D10Plugin *mD3D10Plugin;
#endif
#ifdef EV_STATIC_Direct3D11
                CD3D11Plugin *mD3D11Plugin;
#endif
            public:
                StaticPluginLoader() {}
                /** Load all the enabled plugins against the passed in root object. */
                void load()
                {
                    CRoot &root  = CRoot::getSingleton();
#ifdef EV_STATIC_GL
                    mGLPlugin = EV_NEW CGLPlugin();
                    root.installPlugin(mGLPlugin);
#endif
#ifdef EV_STATIC_GLES
                    mGLESPlugin = EV_NEW EarthView::World::RenderSystem::GLES::CGLESPlugin();
                    root.installPlugin(mGLESPlugin);
#endif
#ifdef EV_STATIC_GLES2
                    mGLES2Plugin = EV_NEW EarthView::World::RenderSystem::GLES2::GLES2Plugin();
                    root.installPlugin(mGLES2Plugin);
#endif
#ifdef EV_STATIC_Direct3D9
                    mD3D9Plugin = EV_NEW CD3D9Plugin();
                    root.installPlugin(mD3D9Plugin);
#endif
#ifdef EV_STATIC_Direct3D10
                    mD3D10Plugin = EV_NEW CD3D10Plugin();
                    root.installPlugin(mD3D10Plugin);
#endif
#ifdef EV_STATIC_Direct3D11
                    mD3D11Plugin = EV_NEW CD3D11Plugin();
                    root.installPlugin(mD3D11Plugin);
#endif
#ifdef EV_STATIC_CgProgramManager
                    mCCgPlugin = EV_NEW CCgPlugin();
                    root.installPlugin(mCCgPlugin);
#endif
#ifdef EV_STATIC_OctreeSceneManager
                    mOctreePlugin = EV_NEW COctreePlugin();
                    root.installPlugin(mOctreePlugin);
#endif
#ifdef EV_STATIC_ParticleFX
                    mParticleFXPlugin = EV_NEW EarthView::World::Plugin::ParticleFX::CParticleFXPlugin();
                    root.installPlugin(mParticleFXPlugin);
#endif
#ifdef EV_STATIC_BSPSceneManager
                    mBSPPlugin = EV_NEW CBspSceneManagerPlugin();
                    root.installPlugin(mBSPPlugin);
#endif
#ifdef EV_STATIC_PCZSceneManager
                    mPCZPlugin = EV_NEW CPCZPlugin();
                    root.installPlugin(mPCZPlugin);
#endif
#ifdef EV_STATIC_OctreeZone
                    mOctreeZonePlugin = EV_NEW COctreeZonePlugin();
                    root.installPlugin(mOctreeZonePlugin);
#endif
                }
                void unload()
                {
                    /// don't unload plugins, since CRoot will have done that. Destroy here.
#ifdef EV_STATIC_OctreeZone
                    EV_DELETE mOctreeZonePlugin;
#endif
#ifdef EV_STATIC_PCZSceneManager
                    EV_DELETE mPCZPlugin;
#endif
#ifdef EV_STATIC_BSPSceneManager
                    EV_DELETE mBSPPlugin;
#endif
#ifdef EV_STATIC_ParticleFX
                    EV_DELETE mParticleFXPlugin;
#endif
#ifdef EV_STATIC_OctreeSceneManager
                    EV_DELETE mOctreePlugin;
#endif
#ifdef EV_STATIC_CgProgramManager
                    EV_DELETE mCCgPlugin;
#endif
#ifdef EV_STATIC_Direct3D9
                    EV_DELETE mD3D9Plugin;
#endif
#ifdef EV_STATIC_Direct3D10
                    EV_DELETE mD3D10Plugin;
#endif
#ifdef EV_STATIC_Direct3D11
                    EV_DELETE mD3D11Plugin;
#endif
#ifdef EV_STATIC_GL
                    EV_DELETE mGLPlugin;
#endif
#ifdef EV_STATIC_GLES
                    EV_DELETE mGLESPlugin;
#endif
#ifdef EV_STATIC_GLES2
                    EV_DELETE mGLES2Plugin;
#endif
                }
            };
        }
    }
}

#endif

