/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

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
			public class Event : EarthView.World.Core.AllocatedObject
			{
				public enum TYPE
				{
								None = 0,
								Timer = 1,
								MouseButtonPress = 2,
								MouseButtonRelease = 3,
								MouseButtonDblClick = 4,
								MouseMove = 5,
								KeyPress = 6,
								KeyRelease = 7,
								FocusIn = 8,
								FocusOut = 9,
								Enter = 10,
								Leave = 11,
								Paint = 12,
								Move = 13,
								Resize = 14,
								Create = 15,
								Destroy = 16,
								Show = 17,
								Hide = 18,
								Close = 19,
								Quit = 20,
								ParentChange = 21,
								ParentAboutToChange = 22,
								WindowActivate = 23,
								WindowDeactivate = 24,
								WindowTitleChange = 25,
								WindowIconChange = 26,
								ApplicationWindowIconChange = 27,
								ApplicationFontChange = 28,
								ApplicationPaletteChange = 29,
								PaletteChange = 30,
								SocketAct = 31,
								DeferredDelete = 32,
								ChildAdded = 33,
								ChildRemoved = 34,
								LanguageChange = 35,
								FontChange = 36,
								EnabledChange = 37,
								ActivationChange = 38,
								StyleChange = 39,
								IconTextChange = 40,
								MouseTrackingChange = 41,
								WindowBlocked = 42,
								WindowUnblocked = 43,
								ToolTip = 44,
								ThreadChange = 45,
								WinEventAct = 46,
								ZeroTimerEvent = 47,
								SockAct = 48,
								UpdateRequest = 49,
								User = 50,
								MaxUser = 50
				
				}

				/// <summary>
				/// 构造函数，通过事件类型构造
				/// </summary>
				/// <param name="type">事件类型</param>
				/// <returns></returns>
				public Event(ushort type) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetype = new BasePtr(type);
					list.Add("type", valuetype.PtrVal);
					Create("CEvent", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public Event(ushort type, EarthView.World.Core.EventObject sender) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetype = new BasePtr(type);
					list.Add("type", valuetype.PtrVal);
					BasePtr valuesender = new BasePtr(sender);
					list.Add("sender", valuesender.PtrVal);
					Create("CEvent", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern ushort EarthView_World_Core_CEvent_type_ev_uint16(IntPtr pNativeObject);

				/// <summary>
				/// 获得事件类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>事件类型</returns>
				public ushort EVType()
				{
					ushort ret=EarthView_World_Core_CEvent_type_ev_uint16(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CEvent_sender_CEventObject(IntPtr pNativeObject);

				public EarthView.World.Core.EventObject Sender()
				{
					IntPtr __ptr = EarthView_World_Core_CEvent_sender_CEventObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.EventObject csObj = new EarthView.World.Core.EventObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEventObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.EventObject;
						csObj.BindNativeObject(__ptr, "CEventObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CEvent_posted_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 判断该事件是否已被post
				/// </summary>
				/// <param name=""></param>
				/// <returns>是返回true，否返回false</returns>
				public bool Posted()
				{
					byte ret=EarthView_World_Core_CEvent_posted_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CEvent_setPosted_void_ev_bool(IntPtr pNativeObject, byte posted);

				/// <summary>
				/// 设置该事件是否已被post
				/// </summary>
				/// <param name="posted">是否被post</param>
				/// <returns></returns>
				public void SetPosted(bool posted)
				{
					EarthView_World_Core_CEvent_setPosted_void_ev_bool(this.NativeObject, Convert.ToByte(posted));
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEvent = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEvent = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadEvent = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEvent = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadEvent = LoadDll.Load("EV_Core.so");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadEvent = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadEvent = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CEvent", new EventClassFactory());

				public Event(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Event FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Event obj = baseObj as  Event;
					if (object.Equals(obj, null))
					{
						obj = new Event(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Event emptyInstance = new Event(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 定时器事件类，从EarthView::World::Core::CEvent派生
			/// </summary>
			public class TimerEvent : EarthView.World.Core.Event
			{
				/// <summary>
				/// 代参构造函数，通过定时器id和事件发送目标构造
				/// </summary>
				/// <param name="timerId">定时器id</param>
				/// <param name="dst">接受事件的对象</param>
				/// <returns></returns>
				public TimerEvent(int timerId, EarthView.World.Core.EventObject dst) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuetimerId = new BasePtr(timerId);
					list.Add("timerId", valuetimerId.PtrVal);
					BasePtr valuedst = new BasePtr(dst);
					list.Add("dst", valuedst.PtrVal);
					Create("CTimerEvent", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Core_CTimerEvent_timerID_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获得定时器事件的定时器id
				/// </summary>
				/// <param name=""></param>
				/// <returns>定时器id</returns>
				public int TimerID()
				{
					int ret=EarthView_World_Core_CTimerEvent_timerID_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CTimerEvent_receiver_CEventObject(IntPtr pNativeObject);

				/// <summary>
				/// 获得定时器事件的接收者对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>接收者对象</returns>
				public EarthView.World.Core.EventObject Receiver()
				{
					IntPtr __ptr = EarthView_World_Core_CTimerEvent_receiver_CEventObject(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.EventObject csObj = new EarthView.World.Core.EventObject(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEventObject");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.EventObject;
						csObj.BindNativeObject(__ptr, "CEventObject");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core.so");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadTimerEvent = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadTimerEvent = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CTimerEvent", new TimerEventClassFactory());

				public TimerEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static TimerEvent FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TimerEvent obj = baseObj as  TimerEvent;
					if (object.Equals(obj, null))
					{
						obj = new TimerEvent(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTimerEvent");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TimerEventClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TimerEvent emptyInstance = new TimerEvent(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public enum EVENTPRIORITY
			{
						HighEventPriority = 1,
						NormalEventPriority = 0,
						LowEventPriority = 1
			
			}

			/// <summary>
			/// 事件分发器类
			/// 用户可通过该类的静态函数向对象发送同步或异步事件
			/// </summary>
			public class EventDispatcher : EarthView.World.Core.EventObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EventDispatcher() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CEventDispatcherProxy", null);
					if (!"EarthView.World.Core.EventDispatcher".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CEventDispatcher_sendEvent_ev_bool_CEventObject_CEvent(IntPtr receiver, IntPtr e);

				/// <summary>
				/// 向指定对象发送同步事件
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <param name="e">事件</param>
				/// <returns>发送成功返回true，否则返回false</returns>
				public static bool SendEvent(EarthView.World.Core.EventObject receiver, EarthView.World.Core.Event e)
				{
					byte ret=EarthView_World_Core_CEventDispatcher_sendEvent_ev_bool_CEventObject_CEvent(object.Equals(receiver, null) ? IntPtr.Zero : receiver.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CEventDispatcher_postEvent_ev_bool_CEventObject_CEvent_ev_int32(IntPtr receiver, IntPtr e, int priority);

				/// <summary>
				/// 向指定对象发送异步事件，主要用在从工作线程向主线程发送事件
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <param name="e">事件</param>
				/// <param name="priority">事件优先级，一般为NormalEventPriority</param>
				/// <returns>发送成功返回true，否则返回false</returns>
				public static bool PostEvent(EarthView.World.Core.EventObject receiver, EarthView.World.Core.Event e, int priority)
				{
					if(!object.Equals(e, null))
					{
					e.NoFree = true;
					}
					
					byte ret=EarthView_World_Core_CEventDispatcher_postEvent_ev_bool_CEventObject_CEvent_ev_int32(object.Equals(receiver, null) ? IntPtr.Zero : receiver.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject, priority);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject(IntPtr receiver);

				/// <summary>
				/// 移除异步事件接收者
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <returns></returns>
				public static void RemovePostedEvents(EarthView.World.Core.EventObject receiver)
				{
					EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject(object.Equals(receiver, null) ? IntPtr.Zero : receiver.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject_int(IntPtr receiver, int eventType);

				/// <summary>
				/// 移除指定类型的异步事件接收者
				/// </summary>
				/// <param name="receiver">事件接收者对象</param>
				/// <param name="eventType">事件类型</param>
				/// <returns></returns>
				public static void RemovePostedEvents(EarthView.World.Core.EventObject receiver, int eventType)
				{
					EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject_int(object.Equals(receiver, null) ? IntPtr.Zero : receiver.NativeObject, eventType);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CEventDispatcher_processEvents_void();

				/// <summary>
				/// 处理并发送事件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public static void ProcessEvents()
				{
					EarthView_World_Core_CEventDispatcher_processEvents_void();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CEventDispatcher_removePostedTimerEvent_void_CEventObject_ev_int32(IntPtr pObject, int timerID);

				/// <summary>
				/// 从事件队列中删除已发送的异步定时器事件
				/// </summary>
				/// <param name="object">事件接收者对象</param>
				/// <param name="timerID">定时器id</param>
				/// <returns></returns>
				public static void RemovePostedTimerEvent(EarthView.World.Core.EventObject pObject, int timerID)
				{
					EarthView_World_Core_CEventDispatcher_removePostedTimerEvent_void_CEventObject_ev_int32(object.Equals(pObject, null) ? IntPtr.Zero : pObject.NativeObject, timerID);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重载的事件处理函数
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>处理了返回true，没处理返回false</returns>
				protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 重载的事件处理函数
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns>处理了返回true，没处理返回false</returns>
				protected override bool OnEvent(EarthView.World.Core.Event e)
				{
					byte ret=EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core.so");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadEventDispatcher = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadEventDispatcher = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CEventDispatcher", new EventDispatcherClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CEventDispatcherProxy", new EventDispatcherClassFactory());

				public EventDispatcher(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
						GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
						EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
						m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
						GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
						EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
						m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
						GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
						EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
					}
				}
				protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
				{
					base.OnTimerEvent_NoVirtual(e);
				}
				protected override void OnCustomEvent(EarthView.World.Core.Event e)
				{
					base.OnCustomEvent_NoVirtual(e);
				}
				public static EventDispatcher FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					EventDispatcher obj = baseObj as  EventDispatcher;
					if (object.Equals(obj, null))
					{
						obj = new EventDispatcher(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CEventDispatcher");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EventDispatcherClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					EventDispatcher emptyInstance = new EventDispatcher(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
