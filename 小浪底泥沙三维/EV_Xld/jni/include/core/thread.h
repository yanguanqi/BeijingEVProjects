#ifndef _EVTHREAD__H
#define _EVTHREAD__H
#pragma once
#include "core/object.h"
#include "core/mutex.h"
#include <stdio.h>
#if defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN)||defined (EV_OS_IOS)
#include <pthread.h>
#include <sys/time.h>
#include <errno.h>
#include <unistd.h>
#endif
using namespace std;
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            struct EV_THREAD_DATA;
            /// <summary>
            /// 线程的局部存储
            /// </summary>
            template <class T>
            class CThreadLocalStore
            {
            public:
                CThreadLocalStore()
#if defined(EV_OS_WIN)
                    : m_dwTlsIndex(0)
#endif
                {
#if defined(EV_OS_WIN)
                    if ((m_dwTlsIndex = TlsAlloc()) == TLS_OUT_OF_INDEXES)
                    {
                        ExitProcess(0);
                    }
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN)||defined (EV_OS_IOS)
                    pthread_key_create(&m_tlsIndex, NULL);
#endif
                }
                ~CThreadLocalStore()
                {
#if defined(EV_OS_WIN)
                    if (m_dwTlsIndex)
                    {
                        TlsFree(m_dwTlsIndex);
                    }
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN) ||defined (EV_OS_IOS)
                    pthread_key_delete(m_tlsIndex);
#endif
                }
                /// <summary>
                /// 获得线程局部数据指针
                /// </summary>
                /// <param name="id">线程的id</param>
                /// <returns>线程局部数据指针</returns>
                T *getValue()
                {
#if defined(EV_OS_WIN)
                    LPVOID lpvData = TlsGetValue(m_dwTlsIndex);
                    return (T *)lpvData;
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN) ||defined (EV_OS_IOS)
                    return (T *)pthread_getspecific(m_tlsIndex);
#endif
                }
                /// <summary>
                /// 设置线程局部数据指针
                /// </summary>
                /// <param name="value">线程局部数据指针</param>
                /// <returns>/<returns>
                void setValue(T *ptr)
                {
#if defined(EV_OS_WIN)
                    if (! TlsSetValue(m_dwTlsIndex, ptr))
                    {
                        ExitProcess(0);
                    }
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN) ||defined (EV_OS_IOS)
                    pthread_setspecific(m_tlsIndex, ptr);
#endif
                }
                /// <summary>
                /// 清除所有线程局部存储数据
                /// </summary>
                /// <param name="">线程的id</param>
                /// <returns></returns>
                void reset()
                {
#if defined(EV_OS_WIN)
                    T *lpvData = (T *)TlsGetValue(m_dwTlsIndex);
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN) ||defined (EV_OS_IOS)
                    T *lpvData = (T *)pthread_getspecific(m_tlsIndex);
#endif
                    if (lpvData)
                    {
                        delete lpvData;
                    }
                }
            private:
#if defined(EV_OS_WIN)
                DWORD m_dwTlsIndex;
#elif defined(EV_OS_LINUX) || defined(EV_OS_CYGWIN) ||defined (EV_OS_IOS)
                pthread_key_t m_tlsIndex;
#endif
            };
            enum ThreadPriority
            {
                EV_THREAD_LOW,
                EV_THREAD_NORMAL,
                EV_THREAD_HIGH,
                EV_THREAD_REAL
            };
            enum ThreadState
            {
                TS_CREATED,
                TS_RUNNING,
                TS_SUSPENDED,
                TS_TERMINATED,
                TS_FINISHED
            };
			class CThread;
            class EV_CORE_DLL CThreadFunc : public EarthView::World::Core::CBaseObject
            {
            public:
                CThreadFunc();
                virtual ~CThreadFunc();
                virtual void run();
			protected:
				void operator()();
				friend class CThread;
            ev_private:
                CThreadFunc(EarthView::World::Core::CNameValuePairList *pList);
            };
            /// <summary>
            ///线程的基类，可以通过继承此类并重载run方法开启线程
            ///也可以直接调用work方法将线程函数指针传递进去，运行线程
            /// </summary>
            class EV_CORE_DLL CThread : public EarthView::World::Core::CEventObject
            {
            public:
                CThread();
                virtual ~CThread();
                /// <summary>
                /// 开始运行线程，调用此接口时，必须继承此类并重载run方法
                /// </summary>
                /// <param name=""></param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool start();

                /// <summary>
                /// 开始运行线程，调用此接口时，不需要继承此类，
                ///之间将线程函数的指针传递给该接口的第一个参数即可
                /// </summary>
                /// <param name="pFunc">线程函数的指针</param>
                /// <param name="pParam">线程函数的参数</param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool work(EarthView::World::Core::CThreadFunc *threadFunc);

                /// <summary>
                /// 等待线程运行结束
                /// </summary>
                /// <param name=""></param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool wait();
                /// <summary>
                /// 让线程休息指定的时间
                /// </summary>
                /// <param name="msecs">线程休息时间的毫秒数</param>
                /// <returns></returns>
                static ev_void sleep(ev_uint32 msecs);
                /// <summary>
                /// 强制结束线程
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_void terminate();
                /// <summary>
                /// 判断线程是否正在运行
                /// </summary>
                /// <param name=""></param>
                /// <returns>正在运行返回true,否则返回false</returns>
                ev_bool isRunning();
                /// <summary>
                /// 设置线程的优先级
                /// </summary>
                /// <param name="priority">线程优先级的枚举值</param>
                /// <returns></returns>
                ev_void setThreadPriority(ThreadPriority priority);
                /// <summary>
                /// 设置线程的继承属性
                /// </summary>
                /// <param name="inherit">inherit为true,则子线程继承于父线程，否则不继承</param>
                /// <returns></returns>
                ev_void setThreadInheritAttr(ev_bool inherit);
                /// <summary>
                /// 获得当前线程的ID
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回当前线程的ID</returns>
                static ev_uint32 getThreadID();

                ev_void suspend();
                ev_void resume();
                /// <summary>
                /// 获得线程的运行状态
                /// </summary>
                /// <param name=""></param>
                /// <returns>线程的运行状态枚举值</returns>
                ev_int32 getThreadState();
                /// <summary>
                /// 设置线程的运行状态
                /// </summary>
                /// <param name="state">线程运行状态枚举值</param>
                /// <returns></returns>
                void setThreadState(ThreadState state);
                /// <summary>
                /// 获得线程的返回值
                /// </summary>
                /// <param name=""></param>
                /// <returns>线程的运行完毕的返回值</returns>
                ev_int32 getRetValue();
                /// <summary>
                /// 获得当前线程的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前线程的指针</returns>
                static EarthView::World::Core::CThread *getCurrentThread();
                /// <summary>
                /// 获得线程已开启的线程个数
                /// </summary>
                /// <param name=""></param>
                /// <returns>线程个数</returns>
                static ev_uint32 getThreadCount();

				static ev_bool isMainThread();
            ev_private:
                CThread(EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                virtual ev_int32 run() ;
            private:
                EV_THREAD_DATA *m_pData;
				static ev_uint32 mMainThreadID;
                friend struct EV_THREAD_DATA;
            };
        }
    }
}

#endif

