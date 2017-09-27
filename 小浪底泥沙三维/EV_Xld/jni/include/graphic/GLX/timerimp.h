#ifndef __GLXTimer_H__
#define __GLXTimer_H__
#pragma once
#include "../prerequisites.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** CTimer class */
            class EV_GRAPHIC_DLL CTimer : public EarthView::World::Core::CAllocatedObject
            {
            private:
                struct timeval start;
                clock_t zeroClock;
            ev_private:
                CTimer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTimer();
                ~CTimer();
                /** Method for setting a specific option of the CTimer. These options are usually
                    specific for a certain implementation of the CTimer class, and may (and probably
                    will) not exist across different implementations.  reset() must be called after
                	all setOption() calls.
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
        }
    }
}

#endif
