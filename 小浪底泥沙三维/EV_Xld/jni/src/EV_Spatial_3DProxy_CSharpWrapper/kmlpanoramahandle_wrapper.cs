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
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				public class Gui360EventHandler : EarthView.World.Spatial3D.Controls.Guieventhandler
				{
					public Gui360EventHandler(EarthView.World.Spatial3D.Controls.GlobeControl globeControl) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueglobeControl = new BasePtr(globeControl);
						list.Add("globeControl", valueglobeControl.PtrVal);
						Create("CGui360EventHandlerProxy", list);
						if (!"EarthView.World.Spatial3DProxy.KmlManager.Gui360EventHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_create_void_CPanoramaTile(IntPtr pNativeObject, IntPtr tile);

					public void Create(EarthView.World.Spatial3D.Atlas.PanoramaTile tile)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_create_void_CPanoramaTile(this.NativeObject, object.Equals(tile, null) ? IntPtr.Zero : tile.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_setCameraInPanorama_void_ev_bool(IntPtr pNativeObject, byte isIn);

					public void SetCameraInPanorama(bool isIn)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_setCameraInPanorama_void_ev_bool(this.NativeObject, Convert.ToByte(isIn));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_isCameraInPanorama_ev_bool(IntPtr pNativeObject);

					public bool IsCameraInPanorama()
					{
						byte ret=EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_isCameraInPanorama_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_d.so");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

						#else 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy.so");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

						#else 
							private static bool bLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadGui360EventHandler = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler", new Gui360EventHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandlerProxy", new Gui360EventHandlerClassFactory());

					public Gui360EventHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public static Gui360EventHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Gui360EventHandler obj = baseObj as  Gui360EventHandler;
						if (object.Equals(obj, null))
						{
							obj = new Gui360EventHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGui360EventHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Gui360EventHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Gui360EventHandler emptyInstance = new Gui360EventHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GotoListener360 : EarthView.World.Spatial3D.Controls.GoToTargetListener
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GotoListener360(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, EarthView.World.Spatial3DProxy.KmlManager.Gui360EventHandler handler) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueglobeControl = new BasePtr(globeControl);
						list.Add("globeControl", valueglobeControl.PtrVal);
						BasePtr valuehandler = new BasePtr(handler);
						list.Add("handler", valuehandler.PtrVal);
						Create("CGotoListener360Proxy", list);
						if (!"EarthView.World.Spatial3DProxy.KmlManager.GotoListener360".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 相机到达ＧＯＴＯ终点外触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public new void CameraHasGetAtTarget_NoVirtual(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 相机到达ＧＯＴＯ终点外触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public override void CameraHasGetAtTarget(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_create_void_CPanoramaTile(IntPtr pNativeObject, IntPtr tile);

					public void Create(EarthView.World.Spatial3D.Atlas.PanoramaTile tile)
					{
						EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_create_void_CPanoramaTile(this.NativeObject, object.Equals(tile, null) ? IntPtr.Zero : tile.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_d.so");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.so");

						#else 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_d.dll");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy.so");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp.so");

						#else 
							private static bool bLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy.dll");
							private static bool csbLoadGotoListener360 = LoadDll.Load("EV_Spatial_3DProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360", new GotoListener360ClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360Proxy", new GotoListener360ClassFactory());

					public GotoListener360(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(IntPtr pObject, cameraHasGetAtTarget_CallBack_void_CGlobeCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_3DProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera(IntPtr pObject, stopGoto_CallBack_void_CGlobeCamera pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera = EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Function;
							GC.KeepAlive(m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(this.NativeObject, m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera);
							m_stopGoto_CallBack_void_CGlobeCamera = EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Function;
							GC.KeepAlive(m_stopGoto_CallBack_void_CGlobeCamera);
							EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera(this.NativeObject, m_stopGoto_CallBack_void_CGlobeCamera);
						}
					}
					public override void StopGoto(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						base.StopGoto_NoVirtual(globeCamera);
					}
					public static GotoListener360 FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GotoListener360 obj = baseObj as  GotoListener360;
						if (object.Equals(obj, null))
						{
							obj = new GotoListener360(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGotoListener360");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GotoListener360ClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GotoListener360 emptyInstance = new GotoListener360(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
