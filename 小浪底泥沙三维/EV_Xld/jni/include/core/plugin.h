#ifndef __PLUGIN_H__
#define __PLUGIN_H__
#pragma once
#include "core/memoryallocatedobject.h"
#include "core/graphic_exception.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            /***** Class defining a generic EV_World plugin.
            @remarks
            	EV_World is very plugin-oriented and you can customise much of its behaviour
            	This class abstracts the generic interface that all plugins must support.
            	Within the implementations of this interface, the plugin must call other
            	EV_World classes in order to register the detailed customisations it is
            	providing, e.g. registering a new CSceneManagerFactory, a new
            	CMovableObjectFactory, or a new CRenderSystem.
            @par
            	Plugins can be linked statically or dynamically. If they are linked
            	dynamically (ie the plugin is in a DLL or Shared Object file), then you
            	load the plugin by calling the CRoot::loadPlugin method (or some other
            	mechanism which leads to that call, e.g. plugins.cfg), passing the name of
            	the DLL. EV_World will then call a global init function on that DLL, and it
            	CRoot::installPlugin. The procedure is very similar if you use a static
            	linked plugin, except that you simply instantiate the CPlugin implementation
            	yourself and pass it to CRoot::installPlugin.
            @note
            	Lifecycle of a CPlugin instance is very important. The CPlugin instance must
            	remain valid until the CPlugin is uninstalled. Here are the things you
            	must bear in  mind:
            	<ul><li>If your plugin is in a DLL:
            	<ul><li>Create the CPlugin instance and call CRoot::installPlugin in dllStartPlugin</li>
            	<li>Call CRoot::uninstallPlugin, then delete it in dllStopPlugin</li></ul>
            	<li>If your plugin is statically linked in your app:
            	<ul><li>Create the CPlugin anytime you like</li>
            	<li>Call CRoot::installPlugin any time whilst CRoot is valid</li>
            	<li>Call CRoot::uninstallPlugin if you like so ev_int32 as CRoot is valid. However,
            		it will be done for you when CRoot is destroyed, so the CPlugin instance must
            		still be valid at that point if you haven't manually uninstalled it.</li></ul>
            	</ul>
            	The install and uninstall methods will be called when the plugin is
            	installed or uninstalled. The initialise and shutdown will be called when
            	there is a system initialisation or shutdown, e.g. when CRoot::initialise
            	or CRoot::shutdown are called.
            ****/
            class EV_CORE_DLL CPlugin : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CPlugin(_in EarthView::World::Core::CNameValuePairList *pList ) {}
            public:
                CPlugin() {}
                virtual ~CPlugin() {}
                /***** Get the name of the plugin.
                @remarks An implementation must be supplied for this method to uniquely
                	identify the plugin.
                ****/
                virtual EVString getName() const
                {
                    EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED, "", "");
                }


                /***** Perform the plugin initial installation sequence.
                @remarks An implementation must be supplied for this method. It must perform
                the startup tasks necessary to install any rendersystem customisations
                or anything else that is not dependent on system initialisation, ie
                only dependent on the core of EV_World. It must not perform any
                operations that would create rendersystem-specific objects at this stage,
                that should be done in initialise().
                ****/
                virtual void install()
                {
                    EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /***** Perform any tasks the plugin needs to perform on full system
                	initialisation.
                @remarks An implementation must be supplied for this method. It is called
                	just after the system is fully initialised (either after CRoot::initialise
                	if a window is created then, or after the first window is created)
                	and therefore all rendersystem functionality is available at this
                	time. You can use this hook to create any resources which are
                	dependent on a rendersystem or have rendersystem-specific implementations.
                ****/
                virtual void initialise()
                {
                    EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /***** Perform any tasks the plugin needs to perform when the system is shut down.
                @remarks An implementation must be supplied for this method.
                This method is called just before key parts of the system are unloaded,
                such as rendersystems being shut down. You should use this hook to free up
                resources and decouple custom objects from the EV_World system, whilst all the
                instances of other plugins (e.g. rendersystems) still exist.
                ****/
                virtual void shutdown()
                {
                    //EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /***** Perform the final plugin uninstallation sequence.
                @remarks An implementation must be supplied for this method. It must perform
                the cleanup tasks which haven't already been performed in shutdown()
                (e.g. final deletion of custom instances, if you kept them around incase
                the system was reinitialised). At this stage you cannot be sure what other
                plugins are still loaded or active. It must therefore not perform any
                operations that would reference any rendersystem-specific objects - those
                should have been sorted out in the 'shutdown' method.
                ****/
                virtual void uninstall()
                {
                    EV_EXCEPT(CException::ERR_NOT_IMPLEMENTED, "", "");
                }
            };
        }
    }
}

#endif


