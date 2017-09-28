#ifndef EV_CORE_EVENT_H
#define EV_CORE_EVENT_H
#pragma once
#include "object.h"
#include <list>
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 事件基类
            /// 里面定义了事件类型枚举，可通过事件类型来构造
            /// </summary>
            class EV_CORE_DLL CEvent : public EarthView::World::Core::CAllocatedObject
            {
            public:
				/*
				   0-1000   为EarthView::World::Core::CEvent事件类型
				   1001-2000 为spatialguievent.h中公共事件类型
				   2001-3000 为frameworkevent.h中中间层事件类型
				   3001-4000 为spatial3devent.h中事件类型
				
				*/
                enum Type
                {
                    None = 0,                               			/// 无效事件
                    Timer = 1,                              			/// 定时器事件
                    MouseButtonPress = 2,                   			/// 鼠标按钮按下
                    MouseButtonRelease = 3,                 			/// 鼠标按钮释放
                    MouseButtonDblClick = 4,                			/// 鼠标按钮双击
                    MouseMove = 5,                          			/// 鼠标移动
                    KeyPress = 6,                           			/// 键盘键按下
                    KeyRelease = 7,                         			/// 键盘键释放
                    FocusIn = 8,                            			/// 获得键盘焦点
                    FocusOut = 9,                           			/// 失去键盘焦点
                    Enter = 10,                             			/// 鼠标进入部件
                    Leave = 11,                             			/// 鼠标离开部件
                    Paint = 12,                             			/// 绘制部件
                    Move = 13,                              			/// 移动部件
                    Resize = 14,                            			/// 改变部件大小
                    Create = 15,                            			/// 部件已创建
                    Destroy = 16,                           			/// 部件正在被销毁
                    Show = 17,                              			/// 部件已显示
                    Hide = 18,                              			/// 部件已隐藏
                    Close = 19,                             			/// 请求关闭部件
                    Quit = 20,                              			/// 请求退出程序
                    ParentChange = 21,                      			/// 部件父对象被改变
                    ParentAboutToChange = 22,               			/// 部件父对象即将被改变
                    WindowActivate = 23,                    			/// 窗口成为活动状态
                    WindowDeactivate = 24,                  			/// 窗口成为非活动状态
                    WindowTitleChange = 25,                 			/// 窗口标题改变
                    WindowIconChange = 26,                  			/// 窗口图标改变
                    ApplicationWindowIconChange = 27,       			/// 程序图标改变
                    ApplicationFontChange = 28,             			/// 程序字体改变
                    ApplicationPaletteChange = 29,          			/// 系统调色板改变
                    PaletteChange = 30,                     			/// 部件调色板改变
                    SocketAct = 31,                         			/// socket激活事件
                    DeferredDelete = 32,                    			/// 延迟删除事件
                    ChildAdded = 33,                        			/// 增加了子部件
                    ChildRemoved = 34,                      			/// 删除了子部件
                    LanguageChange = 35,                    			/// 语言改变
                    FontChange = 36,                        			/// 字体改变
                    EnabledChange = 37,                     			/// 可用状态改变
                    ActivationChange = 38,                  			/// 窗口活动状态改变
                    StyleChange = 39,                       			/// 风格改变
                    IconTextChange = 40,                    			/// 图标文字改变
                    MouseTrackingChange = 41,               			/// 鼠标跟踪状态改变
                    WindowBlocked = 42,                     			/// 窗口将被阻塞
                    WindowUnblocked = 43,                   			/// 窗口从阻塞中恢复
                    ToolTip = 44,                           			/// 工具提示事件
                    ThreadChange = 45,                      			/// 线程改变事件
                    WinEventAct = 46,                       			/// win事件激活
                    ZeroTimerEvent = 47,                    			/// 0秒定时器事件
                    SockAct = 48,
                    UpdateRequest = 49,									/// 请求重绘
					SwapBuffers = 50,									/// 交换帧缓冲
					UpdateTileTexture = 51,								/// 更新瓦片纹理
					UpdateTileAltitude = 52,							/// 更新瓦片高程
					SyncCommandEvent = 53,								/// 用来处理同步命令的事件
					ViewChanged = 54,									/// 视图发生改变
                    /// Last type used: 54
                    User = 1000,                                 			///用户事件id
                    MaxUser = 60000                         			/// 最后的用户事件id
                };
                /// <summary>
                /// 构造函数，通过事件类型构造
                /// </summary>
                /// <param name="type">事件类型</param>
                /// <returns></returns>
                CEvent(ev_uint16 type);
                CEvent(ev_uint16 type, EarthView::World::Core::CEventObject *sender);
            ev_private:
                CEvent(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CEvent() {}
                /// <summary>
                /// 获得事件类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>事件类型</returns>
                ev_uint16 type() const;

				EarthView::World::Core::CEventObject *sender();
                /// <summary>
                /// 判断该事件是否已被post
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否返回false</returns>
                ev_bool posted() const;
                /// <summary>
                /// 设置该事件是否已被post
                /// </summary>
                /// <param name="posted">是否被post</param>
                /// <returns></returns>
                void setPosted(_in ev_bool posted);

				virtual _extfree EarthView::World::Core::CEvent* clone() const;

            protected:
                ev_uint16 m_type;
                ev_bool m_posted;
				EarthView::World::Core::CEventObject *m_pSender;
            };
            /// <summary>
            /// 定时器事件类，从EarthView::World::Core::CEvent派生
            /// </summary>
            class EV_CORE_DLL CTimerEvent : public EarthView::World::Core::CEvent
            {
            public:
                /// <summary>
                /// 代参构造函数，通过定时器id和事件发送目标构造
                /// </summary>
                /// <param name="timerId">定时器id</param>
                /// <param name="dst">接受事件的对象</param>
                /// <returns></returns>
                CTimerEvent(_in ev_int32 timerId, _in EarthView::World::Core::CEventObject *dst);

            ev_private:
                CTimerEvent(EarthView::World::Core::CNameValuePairList *pList);

            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CTimerEvent();
                /// <summary>
                /// 获得定时器事件的定时器id
                /// </summary>
                /// <param name=""></param>
                /// <returns>定时器id</returns>
                ev_int32 timerID() const;
                /// <summary>
                /// 获得定时器事件的接收者对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>接收者对象</returns>
                EarthView::World::Core::CEventObject *receiver() const;
            protected:
                ev_int32 m_iRefCount;
                ev_int32 m_id;
                EarthView::World::Core::CEventObject *m_pObject;
                friend class CSysTimer;
            };
            enum EventPriority
            {
                HighEventPriority = 1,
                NormalEventPriority = 0,
                LowEventPriority = -1
            };
			class EV_CORE_DLL CPostEvent : public EarthView::World::Core::CBaseObject
			{
			public:
				CPostEvent();
				CPostEvent(EarthView::World::Core::CEventObject *r, EarthView::World::Core::CEvent *e, ev_int32 p);
				~CPostEvent();
			ev_private:
				CPostEvent(EarthView::World::Core::CNameValuePairList *pList);
				EarthView::World::Core::CEventObject *receiver;
				EarthView::World::Core::CEvent *event;
				ev_int32 priority;
			};
			class EV_CORE_DLL IEventHelper : public EarthView::World::Core::CBaseObject
			{
			public:
				IEventHelper();
				virtual void postEvent(EarthView::World::Core::CPostEvent *e);
				virtual void removePostedEvents(EarthView::World::Core::CEventObject *receiver);
				virtual void removePostedEvents(EarthView::World::Core::CEventObject *receiver, ev_int32 eventType);
				virtual void registerTimer(ev_int32 timerID, ev_int32 interval, EarthView::World::Core::CEventObject *object);
				virtual ev_bool unregisterTimer(ev_int32 timerID);
			ev_private:
				IEventHelper(EarthView::World::Core::CNameValuePairList *pList);
			};
            /// <summary>
            /// 事件分发器类
            /// 用户可通过该类的静态函数向对象发送同步或异步事件
            /// </summary>
            class EV_CORE_DLL CEventDispatcher : public EarthView::World::Core::CEventObject
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CEventDispatcher();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CEventDispatcher();
            ev_private:
                CEventDispatcher(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 向指定对象发送同步事件
                /// </summary>
                /// <param name="receiver">事件接收者对象</param>
                /// <param name="e">事件</param>
                /// <returns>发送成功返回true，否则返回false</returns>
                static ev_bool sendEvent(_in EarthView::World::Core::CEventObject *receiver, _in CEvent *e);
                /// <summary>
                /// 向指定对象发送异步事件，主要用在从工作线程向渲染线程发送事件
                /// </summary>
                /// <param name="receiver">事件接收者对象</param>
                /// <param name="e">事件</param>
                /// <param name="priority">事件优先级，一般为NormalEventPriority</param>
                /// <returns>发送成功返回true，否则返回false</returns>
                static ev_bool postEvent(_in EarthView::World::Core::CEventObject *receiver, _nofree _in CEvent *e, _in ev_int32 priority);

                /// <summary>
                /// 向指定对象发送异步事件，主要用在从工作线程向渲染线程或主线程发送事件
                /// </summary>
                /// <param name="receiver">事件接收者对象</param>
                /// <param name="e">事件</param>
                /// <param name="priority">事件优先级，一般为NormalEventPriority</param>
                /// <returns>发送成功返回true，否则返回false</returns>
                static ev_bool postEvent(_in EarthView::World::Core::CEventObject *receiver, _nofree _in CEvent *e, _in ev_int32 priority, ev_bool bUIThread);

				/// <summary>
				/// 移除异步事件接收者
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <returns></returns>
				static void removePostedEvents(_in EarthView::World::Core::CEventObject *receiver);

				/// <summary>
				/// 移除指定类型的异步事件接收者
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <param name="eventType">事件类型</param>
				/// <returns></returns>
				static void removePostedEvents(_in EarthView::World::Core::CEventObject *receiver, int eventType);
                /// <summary>
                /// 处理并发送事件
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void processEvents();
                /// <summary>
                /// 从事件队列中删除已发送的异步定时器事件
                /// </summary>
                /// <param name="object">事件接收者对象</param>
                /// <param name="timerID">定时器id</param>
                /// <returns></returns>
                static void removePostedTimerEvent(_in EarthView::World::Core::CEventObject *pObject, _in ev_int32 timerID);

				/// <summary>
				/// 当开启后台渲染模式的时候，正常情况下posted events是在渲染线程处理的，但某些事件只能post到主线程处理，因此这里可供外部设置一个帮助者，以支持主线程处理
				/// </summary>
				/// <param name="object">事件接收者对象</param>
				/// <param name="timerID">定时器id</param>
				/// <returns></returns>
				static void setEventHelper(EarthView::World::Core::IEventHelper *helper);
            ev_internal:
                /// <summary>
                /// 重载的事件处理函数
                /// </summary>
                /// <param name="e">事件</param>
                /// <returns>处理了返回true，没处理返回false</returns>
                virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
            private:
                /// <summary>
                /// 发送所有异步事件
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void sendPostedEvents();
                /// <summary>
                /// 注册定时器的内部函数，默认定时器在渲染线程执行
                /// </summary>
                /// <param name="interval">定时器时间间隔</param>
                /// <param name="object">定时器的开启者</param>
                /// <returns>定时器id</returns>
                static ev_int32 registerTimer(_in ev_int32 interval, _in EarthView::World::Core::CEventObject *pObject);
				/// <summary>
				/// 注册定时器的内部函数
				/// </summary>
				/// <param name="interval">定时器时间间隔</param>
				/// <param name="object">定时器的开启者</param>
				/// <param name="bUIThread">true表示定时器是在主线程执行，false表示在渲染线程执行</param>
				/// <returns>定时器id</returns>
				static ev_int32 registerTimer(_in ev_int32 interval, _in EarthView::World::Core::CEventObject *pObject, ev_bool bUIThread);
                /// <summary>
                /// 注销定时器的内部函数
                /// </summary>
                /// <param name="id">定时器id</param>
                /// <returns>成功返回true，否则返回false</returns>
                static ev_bool unregisterTimer(_in ev_int32 id);
            private:
                static list<CPostEvent *> ms_listEvents;
				static IEventHelper *ms_eventHelper;
                friend class CEventObject;
            };
        }
    }
}

#endif
