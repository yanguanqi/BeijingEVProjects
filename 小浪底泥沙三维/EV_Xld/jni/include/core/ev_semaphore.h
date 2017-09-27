#ifndef _CSEMAPHORE__H_
#define _CSEMAPHORE__H_
#include "core/object.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            struct EV_SEMAPHORE_DATA;
            /// <summary>
            /// 信号量类
            /// </summary>
            class EV_CORE_DLL CSemaphore : public EarthView::World::Core::CEventObject
            {
            public:
                /// <summary>
                /// 构造信号量
                /// </summary>
                /// <param name="MaxCount">资源的最大可用数</param>
                /// <param name="InitialCount">资源的初始可用数</param>
                /// <returns></returns>
                CSemaphore(ev_uint32 nMaxCount, ev_uint32 nInitialCount);
                ~CSemaphore();
            ev_private:
                CSemaphore(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 使用指定数量的信号，P操作
                /// </summary>
                /// <param name="count">使用的信号量数</param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool wait(ev_uint32 count);
                /// <summary>
                /// 使用一个数量的信号，P操作
                /// </summary>
                /// <param name="></param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool waitOne();
                /// <summary>
                /// 恢复指定数量的信号，V操作
                /// </summary>
                /// <param name="count">恢复的信号量数</param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool release(ev_uint32 count);
                /// <summary>
                /// 恢复一个数量的信号，V操作
                /// </summary>
                /// <param name="></param>
                /// <returns>成功返回true,否则false</returns>
                ev_bool releaseOne();
				ev_bool tryWaitOne();
            private:
                EV_SEMAPHORE_DATA *m_pData;
            };
        }
    }
}

#endif

