#ifndef EV_CORE_OBJECT_H
#define EV_CORE_OBJECT_H
#pragma once
#include "core/global.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CEvent;
            class CTimerEvent;


            /// <summary>
            /// 对象模型的基类
            /// 提供定时器、事件处理方法、对象初始化方法
            /// </summary>
            class EV_CORE_DLL CEventObject : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CEventObject();

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CEventObject();
                /// <summary>
                /// 启动一个定时器，返回定时器id，时间间隔为interval
                /// </summary>
                /// <param name="interval">定时器时间间隔</param>
                /// <returns>定时器id，大于0的值为有效定时器id</returns>
                ev_int32 startTimer(_in ev_int32 interval);
                /// <summary>
                /// 注销指定定时器id的定时器
                /// </summary>
                /// <param name="id">定时器id</param>
                /// <returns>成功返回true，否则返回false</returns>
                ev_bool killTimer(_in ev_int32 id);
            ev_private:
                CEventObject(EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                /// <summary>
                /// 事件处理函数，可重载
                /// </summary>
                /// <param name="e">事件</param>
                /// <returns>已处理返回true，否则返回false</returns>
                virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
                /// <summary>
                /// 定时器事件处理函数，可重载
                /// </summary>
                /// <param name="e">定时器事件，内有定时器id</param>
                /// <returns></returns>
                virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent *e);
                /// <summary>
                /// 用户自定义事件处理函数，是onEvent的子过程，可重载
                /// </summary>
                /// <param name="e">事件</param>
                /// <returns></returns>
                virtual void onCustomEvent(_in EarthView::World::Core::CEvent *e);
            private:
                /// post事件队列中的事件个数
                ev_int32  m_nPostedEvents;
                friend class CEventDispatcher;
            };
        }
    }
}

#endif
