#ifndef GRAPHIC_DISPLAY_H__
#define GRAPHIC_DISPLAY_H__
#include "core/platform.h"
#ifdef EV_OS_LINUX
/// Display namaspace error!
#include <X11/Xlib.h>
#else

#endif

typedef Display GraphicDisplay;

#endif

