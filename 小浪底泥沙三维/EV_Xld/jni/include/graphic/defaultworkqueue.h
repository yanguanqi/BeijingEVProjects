#ifndef __DefaultWorkQueue_H__
#define __DefaultWorkQueue_H__
#if EV_THREAD_PROVIDER == 0
#include "core/defaultworkqueuestandard.h"
#elif EV_THREAD_PROVIDER == 1
#include "core/defaultworkqueuestandard.h"
#elif EV_THREAD_PROVIDER == 2
#include "core/defaultworkqueuestandard.h"
#elif EV_THREAD_PROVIDER == 3
#include "core/defaultworkqueuetbb.h"
#endif
#endif


