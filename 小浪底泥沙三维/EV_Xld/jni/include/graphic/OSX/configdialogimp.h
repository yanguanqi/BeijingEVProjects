#ifndef __OSXConfigDialog_H__
#define __OSXConfigDialog_H__
#include "../prerequisites.h"
#include "../root.h"
#include "../rendersystem.h"
#include "../configoptionmap.h"
#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#import <AppKit/AppKit.h>
#if defined(MAC_OS_X_VERSION_10_6) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6
@interface OgreConfigWindowDelegate :
NSObject <NSWindowDelegate, NSTableViewDelegate, NSTableViewDataSource>
#else
@interface OgreConfigWindowDelegate :
NSObject
#endif
{
    NSWindow *mConfigWindow;
    NSImageView *mOgreLogo;
    NSPopUpButton *mRenderSystemsPopUp;
    NSPopUpButton *mOptionsPopUp;
    NSTableView *mOptionsTable;
    NSButton *mOkButton;
    NSButton *mCancelButton;
    NSTextField *mOptionLabel;

    NSDictionary *mOptions;
}
- ()cancelButtonPressed:
(id)sender;
- ()okButtonPressed:
(id)sender;
- (void)popUpValueChanged:
(id)sender;
/// Getters and setters
- ()setOptions:
(NSDictionary *)dict;
- (NSDictionary *)getOptions;
- ()setRenderSystemsPopUp:
(NSPopUpButton *)button;
- (NSPopUpButton *)getRenderSystemsPopUp;
- ()setOgreLogo:
(NSImageView *)image;
- (NSImageView *)getOgreLogo;
- ()setConfigWindow:
(NSWindow *)window;
- (NSWindow *)getConfigWindow;
- ()setOptionsTable:
(NSTableView *)table;
- (NSTableView *)getOptionsTable;
- ()setOptionsPopUp:
(NSPopUpButton *)button;
- (NSPopUpButton *)getOptionsPopUp;
- ()popUpValueChanged:
(id)sender;
@end
#endif
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

                void initialise();
                ev_bool display();
            protected:
#ifdef __OBJC__
                OgreConfigWindowDelegate *mWindowDelegate;
#endif
                CRenderSystem *mSelectedRenderSystem;
            };
        }
    }
}

#endif /// __OSX_CONFIG_DIALOG_H__
