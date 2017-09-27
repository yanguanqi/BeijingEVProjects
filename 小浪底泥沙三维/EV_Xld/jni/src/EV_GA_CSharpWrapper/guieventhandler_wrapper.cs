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
		namespace Spatial
		{
			namespace SystemUI
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				public class Guieventhandler : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public Guieventhandler() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGUIEventHandlerProxy", null);
						if (!"EarthView.World.Spatial3D.Controls.Guieventhandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleEvent_CallBack_ev_bool_CGUIEvent(IntPtr guiEvent);

					protected handleEvent_CallBack_ev_bool_CGUIEvent m_handleEvent_CallBack_ev_bool_CGUIEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function(IntPtr guiEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_guiEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_guiEvent.BindNativeObject(guiEvent,"CGUIEvent");
						csobj_guiEvent.Delegate = true;
						IClassFactory csobj_guiEventClassFactory = GlobalClassFactoryMap.Get(csobj_guiEvent.GetCppInstanceTypeName());
						if (csobj_guiEventClassFactory != null)
						{
							csobj_guiEvent.Delegate = true;
							csobj_guiEvent = csobj_guiEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_guiEvent.BindNativeObject(guiEvent, "CGUIEvent");
							csobj_guiEvent.Delegate = true;
						}
						
						bool csret=HandleEvent(csobj_guiEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGuieventhandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGuieventhandler = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGUIEventHandler", new GuieventhandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGUIEventHandlerProxy", new GuieventhandlerClassFactory());

					public Guieventhandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public static Guieventhandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Guieventhandler obj = baseObj as  Guieventhandler;
						if (object.Equals(obj, null))
						{
							obj = new Guieventhandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGUIEventHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GuieventhandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Guieventhandler emptyInstance = new Guieventhandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
