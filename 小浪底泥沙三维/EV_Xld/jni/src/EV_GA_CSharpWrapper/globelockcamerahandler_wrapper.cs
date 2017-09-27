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
		}
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				public class GlobeLockCameraHandler : EarthView.World.Spatial3D.Controls.Guieventhandler
				{
					public enum ROTATIONMODE
					{
										ROTATIONBYUP = 0,
										ROTATIONBYLOOK
					
					}

					public enum LOCKMODE
					{
										FirstPersonMode = 0,
										ThirdPersonMode
					
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					public GlobeLockCameraHandler(EarthView.World.Spatial3D.GlobeCamera globeCamera, EarthView.World.Spatial3D.GeoSceneManager sceneManager, EarthView.World.Graphic.Viewport viewport) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueglobeCamera = new BasePtr(globeCamera);
						list.Add("globeCamera", valueglobeCamera.PtrVal);
						BasePtr valuesceneManager = new BasePtr(sceneManager);
						list.Add("sceneManager", valuesceneManager.PtrVal);
						BasePtr valueviewport = new BasePtr(viewport);
						list.Add("viewport", valueviewport.PtrVal);
						Create("CGlobeLockCameraHandlerProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleUseEvent_CallBack_ev_bool_CGUIEvent(IntPtr userEvent);

					protected handleUseEvent_CallBack_ev_bool_CGUIEvent m_handleUseEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleUseEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Function(IntPtr userEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_userEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_userEvent.BindNativeObject(userEvent,"CGUIEvent");
						csobj_userEvent.Delegate = true;
						IClassFactory csobj_userEventClassFactory = GlobalClassFactoryMap.Get(csobj_userEvent.GetCppInstanceTypeName());
						if (csobj_userEventClassFactory != null)
						{
							csobj_userEvent.Delegate = true;
							csobj_userEvent = csobj_userEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_userEvent.BindNativeObject(userEvent, "CGUIEvent");
							csobj_userEvent.Delegate = true;
						}
						
						bool csret=HandleUseEvent(csobj_userEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleUseEvent(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleFrameEvent_CallBack_ev_bool_CGUIEvent(IntPtr guiEvent);

					protected handleFrameEvent_CallBack_ev_bool_CGUIEvent m_handleFrameEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleFrameEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Function(IntPtr guiEvent)
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
						
						bool csret=HandleFrameEvent(csobj_guiEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleMouseDownEvent_CallBack_ev_bool_CGUIEvent(IntPtr mouseEvent);

					protected handleMouseDownEvent_CallBack_ev_bool_CGUIEvent m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseDownEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Function(IntPtr mouseEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_mouseEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mouseEvent.BindNativeObject(mouseEvent,"CGUIEvent");
						csobj_mouseEvent.Delegate = true;
						IClassFactory csobj_mouseEventClassFactory = GlobalClassFactoryMap.Get(csobj_mouseEvent.GetCppInstanceTypeName());
						if (csobj_mouseEventClassFactory != null)
						{
							csobj_mouseEvent.Delegate = true;
							csobj_mouseEvent = csobj_mouseEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_mouseEvent.BindNativeObject(mouseEvent, "CGUIEvent");
							csobj_mouseEvent.Delegate = true;
						}
						
						bool csret=HandleMouseDownEvent(csobj_mouseEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标按下事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseDownEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent(IntPtr mouseEvent);

					protected handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseMoveEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Function(IntPtr mouseEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_mouseEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mouseEvent.BindNativeObject(mouseEvent,"CGUIEvent");
						csobj_mouseEvent.Delegate = true;
						IClassFactory csobj_mouseEventClassFactory = GlobalClassFactoryMap.Get(csobj_mouseEvent.GetCppInstanceTypeName());
						if (csobj_mouseEventClassFactory != null)
						{
							csobj_mouseEvent.Delegate = true;
							csobj_mouseEvent = csobj_mouseEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_mouseEvent.BindNativeObject(mouseEvent, "CGUIEvent");
							csobj_mouseEvent.Delegate = true;
						}
						
						bool csret=HandleMouseMoveEvent(csobj_mouseEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标移动事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseMoveEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleMouseUp_CallBack_ev_bool_CGUIEvent(IntPtr mouseEvent);

					protected handleMouseUp_CallBack_ev_bool_CGUIEvent m_handleMouseUp_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseUp_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Function(IntPtr mouseEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_mouseEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mouseEvent.BindNativeObject(mouseEvent,"CGUIEvent");
						csobj_mouseEvent.Delegate = true;
						IClassFactory csobj_mouseEventClassFactory = GlobalClassFactoryMap.Get(csobj_mouseEvent.GetCppInstanceTypeName());
						if (csobj_mouseEventClassFactory != null)
						{
							csobj_mouseEvent.Delegate = true;
							csobj_mouseEvent = csobj_mouseEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_mouseEvent.BindNativeObject(mouseEvent, "CGUIEvent");
							csobj_mouseEvent.Delegate = true;
						}
						
						bool csret=HandleMouseUp(csobj_mouseEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标松开事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseUp(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent(IntPtr mouseEvent);

					protected handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent;

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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseWheelEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Function(IntPtr mouseEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_mouseEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mouseEvent.BindNativeObject(mouseEvent,"CGUIEvent");
						csobj_mouseEvent.Delegate = true;
						IClassFactory csobj_mouseEventClassFactory = GlobalClassFactoryMap.Get(csobj_mouseEvent.GetCppInstanceTypeName());
						if (csobj_mouseEventClassFactory != null)
						{
							csobj_mouseEvent.Delegate = true;
							csobj_mouseEvent = csobj_mouseEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_mouseEvent.BindNativeObject(mouseEvent, "CGUIEvent");
							csobj_mouseEvent.Delegate = true;
						}
						
						bool csret=HandleMouseWheelEvent(csobj_mouseEvent);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 处理鼠标滚轮事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseWheelEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(IntPtr pNativeObject, IntPtr firstEvent, IntPtr secondEvent);

					/// <summary>
					/// 计算鼠标是否移动
					/// </summary>
					/// <param name="firstEvent">前一个鼠标事件对象</param>
					/// <param name="secondEvent">当前鼠标事件对象</param>
					/// <returns></returns>
					public bool CalculateMoveable(EarthView.World.Spatial.SystemUI.Guievent firstEvent, EarthView.World.Spatial.SystemUI.Guievent secondEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(this.NativeObject, object.Equals(firstEvent, null) ? IntPtr.Zero : firstEvent.NativeObject, object.Equals(secondEvent, null) ? IntPtr.Zero : secondEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double computeAltitudeDelta_CallBack_ev_real64_CVector3(IntPtr v);

					protected computeAltitudeDelta_CallBack_ev_real64_CVector3 m_computeAltitudeDelta_CallBack_ev_real64_CVector3;

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
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///计逄相机的海拔差
					/// </summary>
					/// <param name="v">相机的位置</param>
					/// <returns></returns>
					public virtual double ComputeAltitudeDelta_NoVirtual(EarthView.World.Spatial.Math.Vector3 v)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Function(IntPtr v)
					{
						EarthView.World.Spatial.Math.Vector3 csobj_v = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_v.BindNativeObject(v,"CVector3");
						csobj_v.Delegate = true;
						IClassFactory csobj_vClassFactory = GlobalClassFactoryMap.Get(csobj_v.GetCppInstanceTypeName());
						if (csobj_vClassFactory != null)
						{
							csobj_v.Delegate = true;
							csobj_v = csobj_vClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csobj_v.BindNativeObject(v, "CVector3");
							csobj_v.Delegate = true;
						}
						
						double csret=ComputeAltitudeDelta(csobj_v);
						
						return csret;
						
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
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///计逄相机的海拔差
					/// </summary>
					/// <param name="v">相机的位置</param>
					/// <returns></returns>
					public virtual double ComputeAltitudeDelta(EarthView.World.Spatial.Math.Vector3 v)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						return ret;
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_needResetCamera_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///需要重置相机
					/// </summary>
					/// <returns></returns>
					public bool NeedResetCamera()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_needResetCamera_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateZoomFactor_ev_real64_ev_real32(IntPtr pNativeObject, float mouseWheelDelta);

					/// <summary>
					///计逄相机的缩放比例
					/// </summary>
					/// <param name="mouseWheelDelta">鼠标滚轮的变化量</param>
					/// <returns></returns>
					public double CalculateZoomFactor(float mouseWheelDelta)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateZoomFactor_ev_real64_ev_real32(this.NativeObject, mouseWheelDelta);
						
						return ret;
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_reset_void(IntPtr pNativeObject);

					/// <summary>
					///重置
					/// </summary>
					/// <returns></returns>
					public void Reset()
					{
						EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_reset_void(this.NativeObject);
						
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
					private static extern int EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getRotationMode_RotationMode(IntPtr pNativeObject);

					/// <summary>
					///获取旋转方式
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler.ROTATIONMODE GetRotationMode()
					{
						int ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getRotationMode_RotationMode(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler.ROTATIONMODE)ret;
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setRotationMode_void_RotationMode(IntPtr pNativeObject, EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler.ROTATIONMODE rotationMode);

					/// <summary>
					///设置旋转方式
					/// <param name="rotationMode">旋转方式</param>
					/// </summary>
					/// <returns></returns>
					public void SetRotationMode(EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler.ROTATIONMODE rotationMode)
					{
						EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setRotationMode_void_RotationMode(this.NativeObject, rotationMode);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setEnable_void_ev_bool(IntPtr pNativeObject, byte enbale);

					/// <summary>
					///设置是否可用
					/// <param name="enbale">是否可用</param>
					/// </summary>
					/// <returns></returns>
					public void SetEnable(bool enbale)
					{
						EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setEnable_void_ev_bool(this.NativeObject, Convert.ToByte(enbale));
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getEnable_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///获取是否可用
					/// </summary>
					/// <returns>是否可用</returns>
					public bool GetEnable()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getEnable_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeLockCameraHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler", new GlobeLockCameraHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandlerProxy", new GlobeLockCameraHandlerClassFactory());

					public GlobeLockCameraHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUseEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(IntPtr pObject, handleMouseUp_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(IntPtr pObject, computeAltitudeDelta_CallBack_ev_real64_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleUseEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseUp_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseUp_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseUp_CallBack_ev_bool_CGUIEvent);
							m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							m_computeAltitudeDelta_CallBack_ev_real64_CVector3 = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Function;
							GC.KeepAlive(m_computeAltitudeDelta_CallBack_ev_real64_CVector3);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(this.NativeObject, m_computeAltitudeDelta_CallBack_ev_real64_CVector3);
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public static GlobeLockCameraHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeLockCameraHandler obj = baseObj as  GlobeLockCameraHandler;
						if (object.Equals(obj, null))
						{
							obj = new GlobeLockCameraHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeLockCameraHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeLockCameraHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeLockCameraHandler emptyInstance = new GlobeLockCameraHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
