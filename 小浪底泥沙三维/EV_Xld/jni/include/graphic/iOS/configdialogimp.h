#ifndef __iOSConfigDialog_H__
#define __iOSConfigDialog_H__
#include "prerequisites.h"
#include "root.h"
#include "rendersystem.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CConfigDialog : public CAllocatedObject
            {
            public:
                CConfigDialog();
                ~CConfigDialog();

            public:
                void initialise();
                void run();
                void cancel();
                ev_bool display();
            protected:
                CRenderSystem *iSelectedRenderSystem;
                ev_bool		iDisplayStatus;
            };
        }
    }
}

#endif /// __iOSConfigDialog_H__
