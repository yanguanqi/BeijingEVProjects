#ifndef _CMUTEX__H_
#define _CMUTEX__H_
#include "core/memoryallocatedobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            enum MutexType
            {
                Mutex_Normal,
                Mutex_Recursive
            };
            struct EV_MUTEX_DATA;
            class CMutex;
            class CMutexInternal
            {
            public:
                CMutexInternal(MutexType type = Mutex_Normal);
                ~CMutexInternal();
                ev_void lock();
                ev_bool tryLock();
                ev_void unlock();
                friend class CMutex;
            private:
                EV_MUTEX_DATA *m_pPrivateData;
            };
            /// <summary>
            /// 互斥体类，提供加锁、解锁、以及尝试加锁的功能
            /// </summary>
            class EV_CORE_DLL CMutex : public EarthView::World::Core::CBaseObject
            {
            public:
                CMutex();
                virtual ~CMutex();
            ev_private:
                CMutex(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 加锁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_void lock();
                /// <summary>
                /// 尝试加锁
                /// </summary>
                /// <returns>尝试加锁成功返回true，否则返回false</returns>
                ev_bool tryLock();
                /// <summary>
                /// 解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_void unlock();
            protected:
                CMutex(MutexType type);
            private:
                void *getPrivateData();
                CMutexInternal *m_pMutexInternal;
                ev_uint32 m_nOwner;
                ev_uint32 m_nRecursion;
                friend class CCondition;
            };
            class EV_CORE_DLL CRecursiveMutex : public EarthView::World::Core::CMutex
            {
            public:
                CRecursiveMutex();
                virtual ~CRecursiveMutex();
            ev_private:
                CRecursiveMutex(EarthView::World::Core::CNameValuePairList *pList);
            };
            /// <summary>
            /// 自动加锁，解锁类，在构造时通过外部传进来的互斥体指针进行加锁
            ///在其析构的时候进行解锁
            /// </summary>
            class EV_CORE_DLL CMutexLocker : public EarthView::World::Core::CBaseObject
            {
            public:
                /// <summary>
                /// 与外部传进来的互斥体指针进行绑定
                /// </summary>
                /// <param name="mutex">外部的互斥体指针</param>
                /// <returns></returns>
                CMutexLocker(CMutex *mutex);
            ev_private:
                CMutexLocker(EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CMutexLocker();
            private:
                EarthView::World::Core::CMutex *m_pMutex;
            };
            struct ConditonData;
            class EV_CORE_DLL CCondition : public EarthView::World::Core::CBaseObject
            {
            public:
                CCondition();
                virtual ~CCondition();
            ev_private:
                CCondition(EarthView::World::Core::CNameValuePairList *pList);
            public:
                void wait(EarthView::World::Core::CMutex &mtx);
                void notify_one();
                void notify_all();
            private:
                ConditonData *m_pData;
            };
        }
    }
}

#endif

