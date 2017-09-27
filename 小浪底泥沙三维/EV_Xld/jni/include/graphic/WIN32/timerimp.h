#ifndef __Win32Timer_H__
#define __Win32Timer_H__
#include "graphic/graphic_config.h"
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
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

            class EV_GRAPHIC_DLL CTimer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CTimer(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                clock_t mZeroClock;
                DWORD mStartTick;
                LONGLONG mLastTime;
                LARGE_INTEGER mStartTime;
                LARGE_INTEGER mFrequency;
                DWORD_PTR mTimerMask;
            public:
                /** CTimer constructor.  MUST be called on same thread that calls getMilliseconds() */
                CTimer();
                ~CTimer();
                /** Method for setting a specific option of the CTimer. These options are usually
                    specific for a certain implementation of the CTimer class, and may (and probably
                    will) not exist across different implementations.  reset() must be called after
                	all setOption() calls.
                	@par
                	Current options supported are:
                	<ul><li>"QueryAffinityMask" (DWORD): Set the thread affinity mask to be used
                	to check the timer. If 'reset' has been called already this mask should
                	overlap with the process mask that was in force at that point, and should
                	be a power of two (a single core).</li></ul>
                    @param
                        strKey The name of the option to set
                    @param
                        pValue A pointer to the value - the size should be calculated by the timer
                        based on the key
                    @return
                        On success, true is returned.
                    @par
                        On failure, false is returned.
                */
                ev_bool setOption( const EVString &strKey, const void *pValue );
                /** Resets timer */
                void reset();
                /** Returns milliseconds since initialisation or last reset */
                ev_uint32 getMilliseconds();
                /** Returns microseconds since initialisation or last reset */
                ev_uint32 getMicroseconds();
                /** Returns milliseconds since initialisation or last reset, only CPU time measured */
                ev_uint32 getMillisecondsCPU();
                /** Returns microseconds since initialisation or last reset, only CPU time measured */
                ev_uint32 getMicrosecondsCPU();
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

