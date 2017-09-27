#ifndef _AtomicWrapper_H__
#define _AtomicWrapper_H__
#include "graphic/graphic_config.h"
#include <signal.h>
#include <core/graphic_exception.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            template <class T> class CAtomicObject
            {
            public:
                CAtomicObject (const T &initial)
                    : mField(initial)
                {   }
                CAtomicObject (const CAtomicObject<T> &cousin)
                    : mField(cousin.get())
                {   }
                CAtomicObject ()
                {   }
                void operator= (const CAtomicObject<T> &cousin)
                {
                    set(cousin.get());
                }
                T get () const
                {
                    EV_LOCK_AUTO_MUTEX
                    return mField;
                }
                void set (const T &v)
                {
                    EV_LOCK_AUTO_MUTEX
                    mField = v;
                }
                ev_bool cas (const T &old, const T &nu)
                {
                    EV_LOCK_AUTO_MUTEX
                    if (mField != old) return false;
                    mField = nu;
                    return true;
                }
                T operator++ ()
                {
                    EV_LOCK_AUTO_MUTEX
                    return ++mField;
                }
                T operator++ (ev_int32)
                {
                    EV_LOCK_AUTO_MUTEX
                    return mField++;
                }
                T operator-- (ev_int32)
                {
                    EV_LOCK_AUTO_MUTEX
                    return mField--;
                }
                T operator+=(const T &add)
                {
                    EV_LOCK_AUTO_MUTEX
                    mField += add;
                    return mField;
                }

            protected:
                EV_AUTO_MUTEX
                volatile T mField;
            };
        }
    }
}

/////// These GCC instrinsics are not supported on ARM - masterfalcon
#if EV_COMPILER == EV_COMPILER_GNUC && EV_COMP_VER >= 412 && EV_THREAD_SUPPORT && EV_CPU != EV_CPU_ARM
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            template<class T> class CAtomicScalar
            {
            public:
                CAtomicScalar (const T &initial)
                    : mField(initial)
                {   }
                CAtomicScalar (const CAtomicScalar<T> &cousin)
                    : mField(cousin.mField)
                {   }
                CAtomicScalar ()
                {   }
                void operator= (const CAtomicScalar<T> &cousin)
                {
                    mField = cousin.mField;
                }
                T get () const
                {
                    return mField;
                }
                void set (const T &v)
                {
                    mField = v;
                }

                ev_bool cas (const T &old, const T &nu)
                {
                    return __sync_bool_compare_and_swap (&mField, old, nu);
                }

                T operator++ ()
                {
                    __sync_add_and_fetch (&mField, 1);
                }

                T operator-- ()
                {
                    __sync_add_and_fetch (&mField, -1);
                }
                T operator++ (ev_int32)
                {
                    __sync_fetch_and_add (&mField, 1);
                }

                T operator-- (ev_int32)
                {
                    __sync_fetch_and_add (&mField, -1);
                }
                T operator+=(const T &add)
                {
                    return __sync_add_and_fetch (&mField, add);
                }
                volatile T mField;
            };
            /** @} */
            /** @} */
        }
    }
}

#elif EV_COMPILER == EV_COMPILER_MSVC && EV_COMP_VER >= 1400 && EV_THREAD_SUPPORT
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#if !defined(NOMINMAX) && defined(_MSC_VER)
#define NOMINMAX //// required to stop windows.h messing up std::min
#endif
#include <windows.h>
#include <intrin.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            template<class T> class CAtomicScalar
            {
            public:
                CAtomicScalar (const T &initial)
                    : mField(initial)
                {   }
                CAtomicScalar (const CAtomicScalar<T> &cousin)
                    : mField(cousin.mField)
                {   }
                CAtomicScalar ()
                {   }
                void operator= (const CAtomicScalar<T> &cousin)
                {
                    mField = cousin.mField;
                }
                T get () const
                {
                    return mField;
                }
                void set (const T &v)
                {
                    mField = v;
                }

                ev_bool cas (const T &old, const T &nu)
                {
                    if (sizeof(T) == 2)
                    {
                        return _InterlockedCompareExchange16((SHORT *)&mField, static_cast<SHORT>(nu), static_cast<SHORT>(old)) == static_cast<SHORT>(old);
                    }
                    else if (sizeof(T) == 4)
                    {
                        return _InterlockedCompareExchange((LONG *)&mField, static_cast<LONG>(nu), static_cast<LONG>(old)) == static_cast<LONG>(old);
                    }
                    else if (sizeof(T) == 8)
                    {
                        return _InterlockedCompareExchange64((LONGLONG *)&mField, static_cast<LONGLONG>(nu), static_cast<LONGLONG>(old)) == static_cast<LONGLONG>(old);
                    }
                    else
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "Only 16, 32, and 64 bit scalars supported in win32.", "CAtomicScalar::cas");
                    }
                }

                T operator++ ()
                {
                    if (sizeof(T) == 2)
                    {
                        return InterlockedIncrement16((SHORT *)&mField);
                    }
                    else if (sizeof(T) == 4)
                    {
                        return InterlockedIncrement((LONG *)&mField);
                    }
                    else if (sizeof(T) == 8)
                    {
                        return InterlockedIncrement64((LONGLONG *)&mField);
                    }
                    else
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "Only 16, 32, and 64 bit scalars supported in win32.", "CAtomicScalar::operator++(prefix)");
                    }
                }

                T operator-- ()
                {
                    if (sizeof(T) == 2)
                    {
                        return InterlockedDecrement16((SHORT *)&mField);
                    }
                    else if (sizeof(T) == 4)
                    {
                        return InterlockedDecrement((LONG *)&mField);
                    }
                    else if (sizeof(T) == 8)
                    {
                        return InterlockedDecrement64((LONGLONG *)&mField);
                    }
                    else
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "Only 16, 32, and 64 bit scalars supported in win32.", "CAtomicScalar::operator--(prefix)");
                    }
                }
                T operator++ (ev_int32)
                {
                    if (sizeof(T) == 2)
                    {
                        return InterlockedIncrement16((SHORT *)&mField) - 1;
                    }
                    else if (sizeof(T) == 4)
                    {
                        return InterlockedIncrement((LONG *)&mField) - 1;
                    }
                    else if (sizeof(T) == 8)
                    {
                        return InterlockedIncrement64((LONGLONG *)&mField) - 1;
                    }
                    else
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "Only 16, 32, and 64 bit scalars supported in win32.", "CAtomicScalar::operator++(postfix)");
                    }
                }

                T operator-- (ev_int32)
                {
                    if (sizeof(T) == 2)
                    {
                        return InterlockedDecrement16((SHORT *)&mField) + 1;
                    }
                    else if (sizeof(T) == 4)
                    {
                        return InterlockedDecrement((LONG *)&mField) + 1;
                    }
                    else if (sizeof(T) == 8)
                    {
                        return InterlockedDecrement64((LONGLONG *)&mField) + 1;
                    }
                    else
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "Only 16, 32, and 64 bit scalars supported in win32.", "CAtomicScalar::operator--(postfix)");
                    }
                }
                T operator+=(const T &add)
                {
                    ////The function InterlockedExchangeAdd is not available for 64 and 16 bit version
                    ////We will use the cas operation instead.
                    T newVal;
                    do
                    {
                        ////Create a value of the current field plus the added value
                        newVal = mField + add;
                        ////Replace the current field value with the new value. Ensure that the value
                        ////of the field hasn't changed in the mean time by comparing it to the new value
                        ////minus the added value.
                    }
                    while (!cas(newVal - add, newVal)); 			////repeat until successful
                    return newVal;
                }
                volatile T mField;
            };
        }
    }
}

#else
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            template <class T> class CAtomicScalar
            {
            public:
                CAtomicScalar (const T &initial)
                    : mField(initial)
                {   }
                CAtomicScalar (const CAtomicScalar<T> &cousin)
                    : mField(cousin.mField)
                {   }
                CAtomicScalar ()
                {   }
                void operator= (const CAtomicScalar<T> &cousin)
                {
                    EV_LOCK_AUTO_MUTEX
                    mField = cousin.mField;
                }
                T get () const
                {
                    //// no lock required here
                    //// since get will not interfere with set or cas
                    //// we may get a stale value, but this is ok
                    return mField;
                }
                void set (const T &v)
                {
                    EV_LOCK_AUTO_MUTEX
                    mField = v;
                }
                ev_bool cas (const T &old, const T &nu)
                {
                    EV_LOCK_AUTO_MUTEX
                    if (mField != old) return false;
                    mField = nu;
                    return true;
                }
                T operator++ ()
                {
                    EV_LOCK_AUTO_MUTEX
                    return ++mField;
                }
                T operator-- ()
                {
                    EV_LOCK_AUTO_MUTEX
                    return --mField;
                }
                T operator++ (ev_int32)
                {
                    EV_LOCK_AUTO_MUTEX
                    return mField++;
                }
                T operator-- (ev_int32)
                {
                    EV_LOCK_AUTO_MUTEX
                    return mField--;
                }
                T operator+=(const T &add)
                {
                    EV_LOCK_AUTO_MUTEX
                    mField += add;
                    return mField;
                }
            protected:
                EV_AUTO_MUTEX
                volatile T mField;
            };
        }
    }
}

#endif

#endif

