#ifndef __CompositorLogic_H__
#define __CompositorLogic_H__
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositorInstance;
            /***** Interface for compositor logics, which can be automatically binded to compositors,
            *	allowing per-compositor logic (such as attaching a relevant listener) to happen
            *	automatically.
            *	@remarks All methods have empty implementations to not force an implementer into
            *		extending all of them.
            ****/
            class EV_GRAPHIC_DLL CCompositorLogic : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CCompositorLogic(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositorLogic();
                /***** Called when a compositor instance has been created.
                	@remarks
                	This happens after its setup was finished, so the chain is also accessible.
                	This is an ideal method to automatically attach a compositor listener.
                ****/
                virtual void compositorInstanceCreated(EarthView::World::Graphic::CCompositorInstance *newInstance) ;
                /***** Called when a compositor instance has been destroyed
                	@remarks
                	The chain that contained the compositor is still alive during this call.
                ****/
                virtual void compositorInstanceDestroyed(EarthView::World::Graphic::CCompositorInstance *destroyedInstance);
                /****protected:****/
                virtual ~CCompositorLogic();
            };
        }
    }
}

#endif

