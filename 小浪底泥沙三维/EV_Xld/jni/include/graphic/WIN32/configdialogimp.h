#ifndef __Win32ConfigDialog_H__
#define __Win32ConfigDialog_H__
#include "graphic/graphic_config.h"

#define WIN32_LEAN_AND_MEAN
#if !defined(NOMINMAX) && defined(_MSC_VER)
#define NOMINMAX /// required to stop windows.h messing up std::min
#endif
#include "windows.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderSystem;
            /***** Defines the behaviour of an automatic renderer configuration dialog.
            @remarks
            	EV_World comes with it's own renderer configuration dialog, which
            	applications can use to easily allow the user to configure the
            	settings appropriate to their machine. This class defines the
            	interface to this standard dialog. Because dialogs are inherently
            	tied to a particular platform's windowing system, there will be a
            	different subclass for each platform.
            @author
            	Steven J. Streeting
            ****/
            class EV_GRAPHIC_DLL CConfigDialog : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CConfigDialog(_in CNameValuePairList *pList);
            public:
                CConfigDialog();
                ~CConfigDialog();

                /***** Displays the dialog.
                @remarks
                	This method displays the dialog and from then on the dialog
                	interacts with the user independently. The dialog will be
                	calling the relevant EV_World rendering systems to query them for
                	options and to set the options the user selects. The method
                	returns when the user closes the dialog.
                @returns
                	If the user accepted the dialog, <b>true</b> is returned.
                @par
                	If the user cancelled the dialog (indicating the application
                	should probably terminate), <b>false</b> is returned.
                @see
                	CRenderSystem
                ****/
                ev_bool display();
            protected:
                /***** Callback to process window events */
#if EV_ARCHITECTURE_64 == EV_ARCH_TYPE
                static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT iMsg, WPARAM wParam, LPARAM lParam);
#else
                static ev_int32 CALLBACK DlgProc(HWND hDlg, UINT iMsg, WPARAM wParam, LPARAM lParam);
#endif
                CRenderSystem *mSelectedRenderSystem;
                HINSTANCE mHInstance; 			//// HInstance of application, for dialog
            };
        }
    }
}

#endif
