#ifndef __iOSErrorDialog_H__
#define __iOSErrorDialog_H__
#include "prerequisites.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Class for displaying the error dialog if Ogre fails badly. */
            class EV_GRAPHIC_DLL CErrorDialog
            {
            public:
                CErrorDialog();
                /**
                @remarks
                	Displays the error dialog.
                @param
                	errorMessage The error message which has caused the failure.
                @param
                	logName Optional name of the log to display in the detail pane.
                */
                void display(const String &errorMessage, String logName = "");
            };
        }
    }
}

#endif
