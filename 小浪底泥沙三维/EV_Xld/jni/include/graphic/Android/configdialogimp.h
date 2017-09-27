#ifndef __AndroidConfigDialog_H__
#define __AndroidConfigDialog_H__
#include "prerequisites.h"
#include "root.h"
#include "rendersystem.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderSystem;
            class EV_GRAPHIC_DLL CConfigDialog : public CAllocatedObject
            {
            public:
                CConfigDialog();
                ~CConfigDialog();

            public:
                void initialise();
                void run();
                void cancel();
                bool display();
            protected:
                CRenderSystem *iSelectedRenderSystem;
                bool		iDisplayStatus;
            };
        }
    }
}

#endif /// __AndroidConfigDialog_H__
