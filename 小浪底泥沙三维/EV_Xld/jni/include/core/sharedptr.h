#ifndef __SharedPtr_H__
#define __SharedPtr_H__
#include "core/memoryallocatedobject.h"
#include "core/threaddefines.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            //// The method to use to free memory on destruction
            enum SharedPtrFreeMethod
            {
                //// Use EV_DELETE to free the memory
                SPFM_DELETE,
                //// Use EV_DELETE_T to free (only MEMCATEGORY_GENERAL supported)
                SPFM_DELETE_T,
                //// Use EV_FREE to free (only MEMCATEGORY_GENERAL supported)
                SPFM_FREE
            };
            /**** Reference-counted shared pointer, used for objects where implicit destruction is
                required.
            @remarks
                This is a standard shared pointer implementation which uses a reference
                count to work out when to delete the object.
            @par
            	If EV_THREAD_SUPPORT is defined to be 1, use of this class is thread-safe.
            ****/
            template<class T>
            class CSharedPtr
            {
            ev_internal:
                T *pRep;
                ev_uint32 *pUseCount;
                SharedPtrFreeMethod useFreeMethod; 			///// if we should use EV_FREE instead of EV_DELETE
            public:
                EV_AUTO_SHARED_MUTEX 			///// public to allow external locking
                /**** Constructor, does not initialise the CSharedPtr.
                	@remarks
                ****/
                CSharedPtr() : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
                {
                    EV_SET_AUTO_SHARED_MUTEX_NULL
                }
                /**** Constructor.
                @param rep The pointer to take ownership of
                @param freeMode The mechanism to use to free the pointer
                ****/
                template< class Y>
                explicit CSharedPtr(Y *rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE)
                    : pRep(rep)
                    , pUseCount(rep ? EV_NEW_T(ev_uint32)(1) : 0)
                    , useFreeMethod(inFreeMethod)
                {
                    EV_SET_AUTO_SHARED_MUTEX_NULL
                    if (rep)
                    {
                        EV_NEW_AUTO_SHARED_MUTEX
                    }
                }
                /****explicit CSharedPtr(Y* rep, SharedPtrFreeMethod inFreeMethod )
                	: pRep(rep)
                	, pUseCount(rep ? EV_NEW_T(ev_uint32)(1) : 0)
                	, useFreeMethod(inFreeMethod)
                {
                	EV_SET_AUTO_SHARED_MUTEX_NULL
                		if (rep)
                		{
                			EV_NEW_AUTO_SHARED_MUTEX
                		}
                }****/
                /****explicit CSharedPtr(Y* rep)
                {
                CSharedPtr(rep,SPFM_DELETE);
                }****/
                CSharedPtr(const CSharedPtr &r)
                    : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
                {
                    //// lock & copy other mutex pointer

                    EV_SET_AUTO_SHARED_MUTEX_NULL
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = r.pRep;
                        pUseCount = r.pUseCount;
                        useFreeMethod = r.useFreeMethod;
                        //// Handle zero pointer gracefully to manage STL containers
                        if(pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                CSharedPtr &operator=(const CSharedPtr &r)
                {
                    if (pRep == r.pRep)
                        return *this;
                    //// Swap current data into a local copy
                    //// this ensures we deal with rhs and this being dependent
                    CSharedPtr<T> tmp(r);
                    swap(tmp);
                    return *this;
                }

                template< class Y>
                CSharedPtr(const CSharedPtr<Y>& r)
                    : pRep(0), pUseCount(0), useFreeMethod(SPFM_DELETE)
                {
                    //// lock & copy other mutex pointer
                    EV_SET_AUTO_SHARED_MUTEX_NULL
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = r.getPointer();
                        pUseCount = r.useCountPointer();
                        useFreeMethod = r.freeMethod();
                        //// Handle zero pointer gracefully to manage STL containers
                        if(pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                template< class Y>
                CSharedPtr &operator=(const CSharedPtr<Y>& r)
                {
                    if (pRep == r.getPointer())
                        return *this;
                    //// Swap current data into a local copy
                    //// this ensures we deal with rhs and this being dependent
                    CSharedPtr<T> tmp(r);
                    swap(tmp);
                    return *this;
                }
                virtual ~CSharedPtr()
                {
                    release();
                }

                inline T &operator*() const
                {
                    EV_ASSERT(pRep);
                    return *pRep;
                }
                inline T *operator->() const
                {
                    EV_ASSERT(pRep);
                    return pRep;
                }
                inline T *get() const
                {
                    return pRep;
                }
                /**** Binds rep to the CSharedPtr.
                	@remarks
                		Assumes that the CSharedPtr is uninitialised!
                ***/
                /****void bind(_inout T* rep, SharedPtrFreeMethod inFreeMethod = SPFM_DELETE) {
                EV_ASSERT(!pRep && !pUseCount);
                EV_NEW_AUTO_SHARED_MUTEX
                EV_LOCK_AUTO_SHARED_MUTEX
                pUseCount = EV_NEW_T(ev_uint32)(1);
                pRep = rep;
                useFreeMethod = inFreeMethod;
                }****/
                void bind( T *rep, SharedPtrFreeMethod inFreeMethod )
                {
                    EV_ASSERT(!pRep && !pUseCount);
                    EV_NEW_AUTO_SHARED_MUTEX
                    EV_LOCK_AUTO_SHARED_MUTEX
                    pUseCount = EV_NEW_T(ev_uint32)(1);
                    pRep = rep;
                    useFreeMethod = inFreeMethod;
                }
                void bind( T *rep)
                {
                    bind(rep, SPFM_DELETE);
                }
                inline ev_bool unique() const
                {
                    EV_LOCK_AUTO_SHARED_MUTEX EV_ASSERT(pUseCount);
                    return *pUseCount == 1;
                }
                inline ev_uint32 useCount() const
                {
                    EV_LOCK_AUTO_SHARED_MUTEX EV_ASSERT(pUseCount);
                    return *pUseCount;
                }
                inline ev_uint32 *useCountPointer() const
                {
                    return pUseCount;
                }
                inline T *getPointer() const
                {
                    return pRep;
                }
                inline SharedPtrFreeMethod freeMethod() const
                {
                    return useFreeMethod;
                }
                inline ev_bool isNull() const
                {
                    return pRep == 0;
                }
                inline void setNull()
                {
                    if (pRep)
                    {
                        //// can't scope lock mutex before release in case deleted
                        release();
                        pRep = 0;
                        pUseCount = 0;
                    }
                }
            protected:
                inline void release()
                {
                    ev_bool destroyThis = false;
                    /**** If the mutex is not initialized to a non-zero value, then
                       neither is pUseCount nor pRep.
                     ****/
                    EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
                    {
                        //// lock own mutex in limited scope (must unlock before destroy)
                        EV_LOCK_AUTO_SHARED_MUTEX
                        if (pUseCount)
                        {
                            if (--(*pUseCount) == 0)
                            {
                                destroyThis = true;
                            }
                        }
                    }
                    if (destroyThis)
                        destroy();
                    EV_SET_AUTO_SHARED_MUTEX_NULL
                }
                virtual void destroy()
                {
                    //// IF YOU GET A CRASH HERE, YOU FORGOT TO FREE UP POINTERS
                    //// BEFORE SHUTTING EV_World DOWN
                    //// Use setNull() before shutdown or make sure your pointer goes
                    //// out of scope before EV_World shuts down to avoid this.
                    switch(useFreeMethod)
                    {
                    case SPFM_DELETE:
                        EV_DELETE pRep;
                        break;
                    case SPFM_DELETE_T:
                        EV_DELETE_T(pRep, T);
                        break;
                    case SPFM_FREE:
                        EV_FREE(pRep);
                        break;
                    };
                    //// use EV_FREE instead of EV_DELETE_T since 'ev_uint32' isn't a destructor
                    //// we only used EV_NEW_T to be able to use constructor
                    EV_FREE(pUseCount);
                    EV_DELETE_AUTO_SHARED_MUTEX
                }
                virtual void swap(CSharedPtr<T> &other)
                {
                    std::swap(pRep, other.pRep);
                    std::swap(pUseCount, other.pUseCount);
                    std::swap(useFreeMethod, other.useFreeMethod);
#if EV_THREAD_SUPPORT
                    std::swap(EV_AUTO_MUTEX_NAME, other.EV_AUTO_MUTEX_NAME);
#endif
                }
            };
            template<class T, class U> inline ev_bool operator==(CSharedPtr<T> const &a, CSharedPtr<U> const &b)
            {
                return a.get() == b.get();
            }
            template<class T, class U> inline ev_bool operator!=(CSharedPtr<T> const &a, CSharedPtr<U> const &b)
            {
                return a.get() != b.get();
            }
            template<class T, class U> inline ev_bool operator<(CSharedPtr<T> const &a, CSharedPtr<U> const &b)
            {
                return std::less<const void *>()(a.get(), b.get());
            }
        }
    }
}


#endif

