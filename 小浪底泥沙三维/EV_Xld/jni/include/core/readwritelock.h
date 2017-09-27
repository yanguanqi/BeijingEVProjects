#ifndef _CREADWRITELOCK__H_
#define _CREADWRITELOCK__H_
#include "core/memoryallocatedobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            struct EV_READWRITELOCK_DATA;
            /// <summary>
            /// 读加锁
            /// </summary>
            class EV_CORE_DLL CReadWriteLock : public EarthView::World::Core::CBaseObject
            {
            public:
                CReadWriteLock();
            ev_private:
                CReadWriteLock(EarthView::World::Core::CNameValuePairList *pList);
            public:
                virtual ~CReadWriteLock();
                /// <summary>
                /// 读写锁类
                /// </summary>
                /// <param name=""></param>
                /// <returns</returns>
                void lockForRead();
                /// <summary>
                /// 写加锁
                /// </summary>
                /// <param name=""></param>
                /// <returns</returns>
                void lockForWrite();
                /// <summary>
                /// 读解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns</returns>
                void unlockForRead();
                /// <summary>
                /// 写解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns</returns>
                void unlockForWrite();
            private:
                EV_READWRITELOCK_DATA *m_pData;
            };
            /// <summary>
            /// 自动读加锁、解锁类
            /// 构造的时候进行读加锁，析构的时候进行读解锁
            /// </summary>
            class EV_CORE_DLL CReadLocker : public EarthView::World::Core::CBaseObject
            {
            public:
                CReadLocker(EarthView::World::Core::CReadWriteLock *pReadLocker);
                virtual ~CReadLocker();
            ev_private:
                CReadLocker(EarthView::World::Core::CNameValuePairList *pList);
            private:
                void _lock();
                void _unlock();
                EarthView::World::Core::CReadWriteLock *m_pLock;
            };
            /// <summary>
            /// 自动写加锁、解锁类
            /// 构造的时候进行写加锁，析构的时候进行写解锁
            /// </summary>
            class EV_CORE_DLL CWriteLocker : public EarthView::World::Core::CBaseObject
            {
            public:
                CWriteLocker(EarthView::World::Core::CReadWriteLock *pWriteLocker);
                virtual ~CWriteLocker();
            ev_private:
                CWriteLocker(EarthView::World::Core::CNameValuePairList *pList);
            private:
                EarthView::World::Core::CReadWriteLock *m_pLock;
            };
        }
    }
}

#endif

