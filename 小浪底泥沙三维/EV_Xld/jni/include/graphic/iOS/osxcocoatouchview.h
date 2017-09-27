#ifndef __OSXCocoaView_H__
#define __OSXCocoaView_H__
#include "renderwindow.h"
#include <UIKit/UIKit.h>
@interface OgreView :
UIView
{
    CRenderWindow *window;
}
- (id)initWithFrame:
(CGRect)f;
- (id)initWithGLiPhoneWindow:
(CRenderWindow *)w;
- ()setOgreWindow:
(CRenderWindow *)w;
- (CRenderWindow *)ogreWindow;
- ()setFrameSize:
(CGSize)s;
@end
@interface OgreWindow :
UIWindow
{}
@end
#endif
