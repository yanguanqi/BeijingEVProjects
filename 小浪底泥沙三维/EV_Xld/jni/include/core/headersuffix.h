#ifndef __HeaderPrefix_H__
#define __HeaderPrefix_H__
#include "core/platform.h"
#if EV_COMPILER == EV_COMPILER_MSVC
/// restore previous warnings settings
#pragma warning (pop)

#endif

#endif
/// allow inclusion of prefix again now (this is scoped)
#undef __HeaderPrefix_H__


