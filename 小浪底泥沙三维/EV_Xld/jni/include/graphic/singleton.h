﻿#ifndef _SINGLETON_H__
#define _SINGLETON_H__
#include <core/global.h>
#include "prerequisites.h"
#include "core/headerprefix.h"
#if EV_COMPILER == EV_COMPILER_MSVC
/////// Turn off warnings generated by this singleton implementation
#pragma warning (disable : 4311)
#pragma warning (disable : 4312)
#endif
#if defined ( EV_GCC_VISIBILITY )
#pragma GCC visibility push(default)
#endif
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// End SJS additions
            /** Template class for creating single-instance global classes.
            */
            template <typename T> class CSingleton
            {
            private:
                /** \brief Explicit private copy constructor. This is a forbidden operation.*/
                CSingleton(const CSingleton<T> &);
                /** \brief Private operator= . This is a forbidden operation. */
                CSingleton &operator=(const CSingleton<T> &);

            protected:
                static T *ms_Singleton;
            public:
                CSingleton()
                {
                    EV_ASSERT( !ms_Singleton );
#if defined( _MSC_VER ) && _MSC_VER < 1200
                    ev_int32 offset = (ev_int32)(T *)1 - (ev_int32)(CSingleton <T>*)(T *)1;
                    ms_Singleton = (T *)((ev_int32)this + offset);
#else
                    ms_Singleton = static_cast< T * >( this );
#endif
                }
                ~CSingleton()
                {
                    EV_ASSERT( ms_Singleton );
                    ms_Singleton = 0;
                }
                static T &getSingleton()
                {
                    EV_ASSERT( ms_Singleton );
                    return ( *ms_Singleton );
                }
                static T *getSingletonPtr()
                {
                    return ms_Singleton;
                }
            };
            /** @} */
            /** @} */


        }
    }
}

#if defined ( EV_GCC_VISIBILITY )
#pragma GCC visibility pop
#endif
#include "core/headersuffix.h"
#endif

