#ifndef __WIN32ERRORDIALOG_H__
#define __WIN32ERRORDIALOG_H__
#pragma once
#include "graphic/graphic_config.h"
#define WIN32_LEAN_AND_MEAN
#if !defined(NOMINMAX) && defined(_MSC_VER)
#define NOMINMAX ///// required to stop windows.h messing up std::min
#endif
#include "windows.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Class for displaying the error dialog if EV_World fails badly. ****/
            class EV_GRAPHIC_DLL CErrorDialog : public CBaseObject
            {
            public:
                CErrorDialog();
                ~CErrorDialog() {}
            ev_private:
                CErrorDialog(_in CNameValuePairList *pList);
            public:
                /*****
                @remarks
                	Displays the error dialog.
                @param
                	errorMessage The error message which has caused the failure.
                @param
                	logName Optional name of the log to display in the detail pane.
                ****/
                void display(const EVString &errorMessage);
                void display(const EVString &errorMessage, EVString logName);
            protected:
                EVString mErrorMsg;
                /***** Callback to process window events ****/
#if EV_ARCHITECTURE_64 == EV_ARCH_TYPE
                static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT iMsg, WPARAM wParam, LPARAM lParam);
#else
                static ev_int32 CALLBACK DlgProc(HWND hDlg, UINT iMsg, WPARAM wParam, LPARAM lParam);
#endif
                HINSTANCE mHInstance; 			//// HInstance of application, for dialog
            };
        }
    }
}

#endif
