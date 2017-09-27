#ifndef __GLXCONFIGDIALOG_H__
#define __GLXCONFIGDIALOG_H__
#include "../prerequisites.h"
#include "../root.h"
#include "../rendersystem.h"
#include <gtk/gtk.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /**
            Defines the behaviour of an automatic renderer configuration dialog.
            @remarks
                OGRE comes with it's own renderer configuration dialog, which
                applications can use to easily allow the user to configure the
                settings appropriate to their machine. This class defines the
                interface to this standard dialog. Because dialogs are inherently
                tied to a particular platform's windowing system, there will be a
                different subclass for each platform.
            @author
                Andrew Zabolotny <zap@homelink.ru>
            */
            class EV_GRAPHIC_DLL CConfigDialog : public CAllocatedObject
            {
            public:
                CConfigDialog();
                /**
                Displays the dialog.
                @remarks
                    This method displays the dialog and from then on the dialog
                    interacts with the user independently. The dialog will be
                    calling the relevant OGRE rendering systems to query them for
                    options and to set the options the user selects. The method
                    returns when the user closes the dialog.
                @returns
                    If the user accepted the dialog, <b>true</b> is returned.
                @par
                    If the user cancelled the dialog (indicating the application
                    should probably terminate), <b>false</b> is returned.
                @see
                    CRenderSystem
                */
                ev_bool display ();
            protected:
                //// The rendersystem selected by user
                CRenderSystem *mSelectedRenderSystem;
                //// The dialog window
                GtkWidget *mDialog;
                //// The table with renderer parameters
                GtkWidget *mParamTable;
                //// The button used to accept the dialog
                GtkWidget *mOKButton;
                //// Create the gtk+ dialog window
                ev_bool createWindow ();
                //// Get parameters from selected renderer and fill the dialog
                void setupRendererParams ();
                //// Callback function for renderer select combobox
                static void rendererChanged (GtkComboBox *widget, gpointer data);
                //// Callback function to change a renderer option
                static void optionChanged (GtkComboBox *widget, gpointer data);
                //// Idle function to refresh renderer parameters
                static gboolean refreshParams (gpointer data);
            };
        }
    }
}

#endif
