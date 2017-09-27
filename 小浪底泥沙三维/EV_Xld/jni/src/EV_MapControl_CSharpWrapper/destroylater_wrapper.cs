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
		namespace Spatial2D
		{
			namespace Controls
			{
				/// <summary>
				/// 删除对象延迟器.其工作原理与QT中QObject::deleteLater()一致.用户在一段代码中可以在调用该方法之后,仍然可以
				///				   使用对象,其内存只有在回到主线程的消息路由之后,才会被真正删除.
				/// </summary>
				public class DestroyLater : EarthView.World.Core.EventObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Controls_CDestroyLater_getInstance_CDestroyLater();

					/// <summary>
					/// 获取静态实例
					/// </summary>
					public static EarthView.World.Spatial2D.Controls.DestroyLater GetInstance()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Controls_CDestroyLater_getInstance_CDestroyLater();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Controls.DestroyLater csObj = new EarthView.World.Spatial2D.Controls.DestroyLater(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDestroyLater");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Controls.DestroyLater;
							csObj.BindNativeObject(__ptr, "CDestroyLater");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Controls_CDestroyLater_destroy_void_CBaseObject(IntPtr pNativeObject, IntPtr obj);

					/// <summary>
					/// 消毁对象(延迟消毁)
					/// </summary>
					public void Destroy(EarthView.World.Core.BaseObject obj)
					{
						EarthView_World_Spatial2D_Controls_CDestroyLater_destroy_void_CBaseObject(this.NativeObject, object.Equals(obj, null) ? IntPtr.Zero : obj.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl_d.so");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp_d.so");

						#else 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl_d.dll");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl.so");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp.so");

						#else 
							private static bool bLoadDestroyLater = LoadDll.Load("EV_MapControl.dll");
							private static bool csbLoadDestroyLater = LoadDll.Load("EV_MapControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CDestroyLater", new DestroyLaterClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CDestroyLaterProxy", new DestroyLaterClassFactory());

					public DestroyLater(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MapControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
							GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
							m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
							GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
							m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
							GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
						}
					}
					protected override bool OnEvent(EarthView.World.Core.Event e)
					{
						return base.OnEvent_NoVirtual(e);
					}
					protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
					{
						base.OnTimerEvent_NoVirtual(e);
					}
					protected override void OnCustomEvent(EarthView.World.Core.Event e)
					{
						base.OnCustomEvent_NoVirtual(e);
					}
					public static DestroyLater FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DestroyLater obj = baseObj as  DestroyLater;
						if (object.Equals(obj, null))
						{
							obj = new DestroyLater(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDestroyLater");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DestroyLaterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DestroyLater emptyInstance = new DestroyLater(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
