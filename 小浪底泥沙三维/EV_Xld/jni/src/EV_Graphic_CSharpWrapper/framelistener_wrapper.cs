/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/// <summary>
			/// 包含帧事件的信息
			/// </summary>
			[StructLayout( LayoutKind.Sequential )]
			public struct FRAMEEVENT
			{
				public double timeSinceLastEvent;
				public double timeSinceLastFrame;
			}

			/// <summary>
			/// 接口类，定义了一个帧监听器，用来获得帧事件的通知
			/// </summary>
			public class FrameListener : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte frameStarted_CallBack_ev_bool_FrameEvent(ref EarthView.World.Graphic.FRAMEEVENT evt);

				protected frameStarted_CallBack_ev_bool_FrameEvent m_frameStarted_CallBack_ev_bool_FrameEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameStarted_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					bool csret=FrameStarted(ref evt);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte frameRenderingQueued_CallBack_ev_bool_FrameEvent(ref EarthView.World.Graphic.FRAMEEVENT evt);

				protected frameRenderingQueued_CallBack_ev_bool_FrameEvent m_frameRenderingQueued_CallBack_ev_bool_FrameEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 视口更新之后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameRenderingQueued_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					bool csret=FrameRenderingQueued(ref evt);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 视口更新之后调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte frameEnded_CallBack_ev_bool_FrameEvent(ref EarthView.World.Graphic.FRAMEEVENT evt);

				protected frameEnded_CallBack_ev_bool_FrameEvent m_frameEnded_CallBack_ev_bool_FrameEvent;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameEnded_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					bool csret=FrameEnded(ref evt);
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public virtual bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public FrameListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CFrameListenerProxy", null);
					if (!"EarthView.World.Graphic.FrameListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadFrameListener = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFrameListener = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameListener", new FrameListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFrameListenerProxy", new FrameListenerClassFactory());

				public FrameListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
					}
				}
				public static FrameListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FrameListener obj = baseObj as  FrameListener;
					if (object.Equals(obj, null))
					{
						obj = new FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFrameListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FrameListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FrameListener emptyInstance = new FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
