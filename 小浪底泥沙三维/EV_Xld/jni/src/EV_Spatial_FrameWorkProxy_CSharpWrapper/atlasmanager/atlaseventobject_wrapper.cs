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
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				public class AtlasEventObject : EarthView.World.Core.EventObject
				{
					public AtlasEventObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAtlasEventObjectProxy", null);
						if (!"EarthView.World.FrameWorkProxy.AtlasManager.AtlasEventObject".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

					protected override bool OnEvent(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateMap_CallBack_void_CMapActiveEvent(IntPtr e);

					protected onCreateMap_CallBack_void_CMapActiveEvent m_onCreateMap_CallBack_void_CMapActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMap_NoVirtual(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapActiveEvent;
							csobj_e.BindNativeObject(e, "CMapActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateMap(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMap(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateScene_CallBack_void_CSceneActiveEvent(IntPtr e);

					protected onCreateScene_CallBack_void_CSceneActiveEvent m_onCreateScene_CallBack_void_CSceneActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateScene_NoVirtual(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateScene(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateScene(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSetCurrentMap_CallBack_void_CMapActiveEvent(IntPtr e);

					protected onSetCurrentMap_CallBack_void_CMapActiveEvent m_onSetCurrentMap_CallBack_void_CMapActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置当前地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetCurrentMap_NoVirtual(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapActiveEvent;
							csobj_e.BindNativeObject(e, "CMapActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnSetCurrentMap(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置当前地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetCurrentMap(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSetCurrentScene_CallBack_void_CSceneActiveEvent(IntPtr e);

					protected onSetCurrentScene_CallBack_void_CSceneActiveEvent m_onSetCurrentScene_CallBack_void_CSceneActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置当前场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetCurrentScene_NoVirtual(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnSetCurrentScene(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置当前场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetCurrentScene(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRemoveMap_CallBack_void_CMapActiveEvent(IntPtr e);

					protected onRemoveMap_CallBack_void_CMapActiveEvent m_onRemoveMap_CallBack_void_CMapActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveMap_NoVirtual(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapActiveEvent;
							csobj_e.BindNativeObject(e, "CMapActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnRemoveMap(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除地图
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveMap(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRemoveScene_CallBack_void_CSceneActiveEvent(IntPtr e);

					protected onRemoveScene_CallBack_void_CSceneActiveEvent m_onRemoveScene_CallBack_void_CSceneActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveScene_NoVirtual(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnRemoveScene(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除场景
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveScene(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateMapLayer_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onCreateMapLayer_CallBack_void_CMapLayerActiveEvent m_onCreateMapLayer_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMapLayer_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateMapLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMapLayer(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent m_onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMapGroupLayer_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateMapGroupLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建地图图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateMapGroupLayer(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onMoveMapLayer_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onMoveMapLayer_CallBack_void_CMapLayerActiveEvent m_onMoveMapLayer_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnMoveMapLayer_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnMoveMapLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnMoveMapLayer(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent m_onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveMapLayer_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnRemoveMapLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除地图图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveMapLayer(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onChangeMapName_CallBack_void_CMapActiveEvent(IntPtr e);

					protected onChangeMapName_CallBack_void_CMapActiveEvent m_onChangeMapName_CallBack_void_CMapActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					///added by lixiang
					//// <summary>
					//// 响应修改地图名
					//// </summary>
					//// <param name="e">事件</param>
					//// <returns></returns>
					public virtual void OnChangeMapName_NoVirtual(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapActiveEvent;
							csobj_e.BindNativeObject(e, "CMapActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnChangeMapName(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(IntPtr pNativeObject, IntPtr e);

					///added by lixiang
					//// <summary>
					//// 响应修改地图名
					//// </summary>
					//// <param name="e">事件</param>
					//// <returns></returns>
					public virtual void OnChangeMapName(EarthView.World.Spatial.SystemUI.MapActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onChangeSceneName_CallBack_void_CSceneActiveEvent(IntPtr e);

					protected onChangeSceneName_CallBack_void_CSceneActiveEvent m_onChangeSceneName_CallBack_void_CSceneActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					public virtual void OnChangeSceneName_NoVirtual(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnChangeSceneName(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(IntPtr pNativeObject, IntPtr e);

					public virtual void OnChangeSceneName(EarthView.World.Spatial.SystemUI.SceneActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onChangeLayerName_CallBack_void_CEvent(IntPtr e);

					protected onChangeLayerName_CallBack_void_CEvent m_onChangeLayerName_CallBack_void_CEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图图层名
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerName_NoVirtual(EarthView.World.Core.Event e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Function(IntPtr e)
					{
						EarthView.World.Core.Event csobj_e = new EarthView.World.Core.Event(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Core.Event;
							csobj_e.BindNativeObject(e, "CEvent");
							csobj_e.Delegate = true;
						}
						
						OnChangeLayerName(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图图层名
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerName(EarthView.World.Core.Event e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent m_onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置地图图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerVisible_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnChangeLayerVisible(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置地图图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerVisible(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent(IntPtr e);

					protected onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent m_onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerTheme_NoVirtual(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.MapLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CMapLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.MapLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CMapLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnChangeLayerTheme(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改地图风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnChangeLayerTheme(EarthView.World.Spatial.SystemUI.MapLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent m_onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建创建图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateSceneLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateSceneLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建创建图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateSceneLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent m_onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建场景图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateSceneGroupLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnCreateSceneGroupLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应创建场景图层组
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnCreateSceneGroupLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent m_onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应实现贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSwitchSceneLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnSwitchSceneLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应实现贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSwitchSceneLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent m_onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改场景图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnMoveSceneLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnMoveSceneLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应修改场景图层顺序
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnMoveSceneLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent m_onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除场景图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveSceneLayer_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnRemoveSceneLayer(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应移除场景图层
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnRemoveSceneLayer(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent m_onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置场景图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetSceneLayerVisible_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnSetSceneLayerVisible(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置场景图层可见性
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetSceneLayerVisible(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent(IntPtr e);

					protected onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent m_onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置场景图层风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetSceneLayerTheme_NoVirtual(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Function(IntPtr e)
					{
						EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent csobj_e = new EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_e.BindNativeObject(e,"CSceneLayerActiveEvent");
						csobj_e.Delegate = true;
						IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
						if (csobj_eClassFactory != null)
						{
							csobj_e.Delegate = true;
							csobj_e = csobj_eClassFactory.Create() as EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent;
							csobj_e.BindNativeObject(e, "CSceneLayerActiveEvent");
							csobj_e.Delegate = true;
						}
						
						OnSetSceneLayerTheme(csobj_e);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 响应设置场景图层风格
					/// </summary>
					/// <param name="e">事件</param>
					/// <returns></returns>
					public virtual void OnSetSceneLayerTheme(EarthView.World.Spatial.SystemUI.SceneLayerActiveEvent e)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMap_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 用户触发显示图层详细事件。
					/// </summary>
					/// <param name="layer">图层对象</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					// ev_void userTriggerLayerDetial(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* layerGroup);
					/// <summary>
					/// 用户触发显示图层简略属性事件。
					/// </summary>
					/// <param name="layer">图层对象</param>
					/// <param name="layer">图层所属图层组对象指针。</param>
					/// <returns></returns>
					// ev_void userTriggerLayerProperty(EarthView::World::Spatial::Atlas::ILayer* layer, EarthView::World::Spatial::Atlas::ILayer* layerGroup);
					/// <summary>
					/// 创建地图
					/// </summary>
					/// <param name="name">地图名</param>
					/// <returns></returns>
					public void CreateMap(string name)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMap_void_EVString(this.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentMap_void_IMap(IntPtr pNativeObject, IntPtr map);

					/// <summary>
					/// 设置当前地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					public void SetCurrentMap(EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentMap_void_IMap(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentScene_void_IScene(IntPtr pNativeObject, IntPtr scene);

					/// <summary>
					/// 设置当前场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					public void SetCurrentScene(EarthView.World.Spatial.Atlas.Iscene scene)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setCurrentScene_void_IScene(this.NativeObject, object.Equals(scene, null) ? IntPtr.Zero : scene.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMap_void_IMap(IntPtr pNativeObject, IntPtr map);

					/// <summary>
					/// 移除地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					public void RemoveMap(EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMap_void_IMap(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeScene_void_IScene(IntPtr pNativeObject, IntPtr scene);

					/// <summary>
					/// 移除场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					public void RemoveScene(EarthView.World.Spatial.Atlas.Iscene scene)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeScene_void_IScene(this.NativeObject, object.Equals(scene, null) ? IntPtr.Zero : scene.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyMap_void_IMap(IntPtr pNativeObject, IntPtr map);

					/// <summary>
					/// 销毁地图
					/// </summary>
					/// <param name="map">地图</param>
					/// <returns></returns>
					public void DestroyMap(EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyMap_void_IMap(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyScene_void_IScene(IntPtr pNativeObject, IntPtr scene);

					/// <summary>
					/// 销毁场景
					/// </summary>
					/// <param name="scene">场景</param>
					/// <returns></returns>
					public void DestroyScene(EarthView.World.Spatial.Atlas.Iscene scene)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyScene_void_IScene(this.NativeObject, object.Equals(scene, null) ? IntPtr.Zero : scene.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyLayer_ev_bool_ILayer(IntPtr pNativeObject, IntPtr layer);

					/// <summary>
					/// 销毁图层
					/// </summary>
					/// <param name="layer">图层</param>
					/// <returns></returns>
					public bool DestroyLayer(EarthView.World.Spatial.Atlas.Ilayer layer)
					{
						byte ret=EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_destroyLayer_ev_bool_ILayer(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_getSupportedType_EVDatasetTypeSet_EVLayerType(IntPtr pNativeObject, EarthView.World.Spatial.Atlas.EVLAYERTYPE grouplayerType);

					///set<EVDatasetType> getSupportedType(EarthView::World::Spatial::Atlas::EVLayerType grouplayerType);
					//// <summary>
					//// 根据图层组获取支持的数据集类别
					//// </summary>
					//// <param name="e">事件</param>
					//// <returns></returns>
					public EarthView.World.FrameWorkProxy.AtlasManager.Evdatasettypeset GetSupportedType(EarthView.World.Spatial.Atlas.EVLAYERTYPE grouplayerType)
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_getSupportedType_EVDatasetTypeSet_EVLayerType(this.NativeObject, grouplayerType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.AtlasManager.Evdatasettypeset csObj = new EarthView.World.FrameWorkProxy.AtlasManager.Evdatasettypeset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "EVDatasetTypeSet");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.AtlasManager.Evdatasettypeset;
							csObj.BindNativeObject(__ptr, "EVDatasetTypeSet");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IMap_EVString_EVString(IntPtr pNativeObject, IntPtr map, string datasourceName, string datasetName);

					/// <summary>
					/// 创建地图图层。
					/// </summary>
					/// <param name="datasourceName">数据源名称。</param>
					/// <param name="datasetName">数据集名称。</param>
					/// <returns></returns>
					public void CreateMapLayer(EarthView.World.Spatial.Atlas.Imap map, string datasourceName, string datasetName)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IMap_EVString_EVString(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, datasourceName, datasetName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IGroupLayer_IDataset_IMap(IntPtr pNativeObject, IntPtr grouplayer, IntPtr dataset, IntPtr map);

					/// <summary>
					/// 创建地图图层。
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="dataset">数据集指针</param>
					/// <returns></returns>
					public void CreateMapLayer(EarthView.World.Spatial.Atlas.Igrouplayer grouplayer, EarthView.World.Spatial.GeoDataset.Idataset dataset, EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapLayer_void_IGroupLayer_IDataset_IMap(this.NativeObject, object.Equals(grouplayer, null) ? IntPtr.Zero : grouplayer.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IMap_EVString(IntPtr pNativeObject, IntPtr map, string groupName);

					/// <summary>
					/// 创建地图图层组图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					public void CreateMapGroupLayer(EarthView.World.Spatial.Atlas.Imap map, string groupName)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IMap_EVString(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, groupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IGroupLayer_EVString_IMap(IntPtr pNativeObject, IntPtr grouplayer, string groupName, IntPtr map);

					/// <summary>
					/// 创建地图图层组图层
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					public void CreateMapGroupLayer(EarthView.World.Spatial.Atlas.Igrouplayer grouplayer, string groupName, EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createMapGroupLayer_void_IGroupLayer_EVString_IMap(this.NativeObject, object.Equals(grouplayer, null) ? IntPtr.Zero : grouplayer.NativeObject, groupName, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr map, uint oldIndex, uint newIndex);

					/// <summary>
					/// 更改地图图层顺序
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="oldIndex">旧索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					public void MoveMapLayer(EarthView.World.Spatial.Atlas.Imap map, uint oldIndex, uint newIndex)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_ev_uint32_ev_uint32(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, oldIndex, newIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr map, IntPtr grouplayer, uint oldIndex, uint newIndex);

					/// <summary>
					/// 更改地图图层顺序
					/// </summary>
					///<param name="grouplayer">地图图层组</param>
					/// <param name="oldIndex">旧索引</param>
					/// <param name="newIndex">新索引</param>
					/// <returns></returns>
					public void MoveMapLayer(EarthView.World.Spatial.Atlas.Imap map, EarthView.World.Spatial.Atlas.Igrouplayer grouplayer, uint oldIndex, uint newIndex)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_ev_uint32(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, object.Equals(grouplayer, null) ? IntPtr.Zero : grouplayer.NativeObject, oldIndex, newIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(IntPtr pNativeObject, IntPtr pMap, IntPtr dragGroupLayer, uint dragIndex, IntPtr hoverGroupLayer, uint hoverIndex);

					///<summary>
					///移动图层
					///</summary>
					///<param name="pMap">地图</param>
					///<param name="dragGroupLayer">拖拽图层的父节点</param>
					///<param name="dragIndex">拖拽图层在父节点中的索引</param>
					///<param name="hoverGroupLayer">拖拽点图层的父节点</param>
					///<param name="hoverIndex">拖拽点图层在父节点中的索引</param>
					public void MoveMapLayer(EarthView.World.Spatial.Atlas.Imap pMap, EarthView.World.Spatial.Atlas.Igrouplayer dragGroupLayer, uint dragIndex, EarthView.World.Spatial.Atlas.Igrouplayer hoverGroupLayer, uint hoverIndex)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveMapLayer_void_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(this.NativeObject, object.Equals(pMap, null) ? IntPtr.Zero : pMap.NativeObject, object.Equals(dragGroupLayer, null) ? IntPtr.Zero : dragGroupLayer.NativeObject, dragIndex, object.Equals(hoverGroupLayer, null) ? IntPtr.Zero : hoverGroupLayer.NativeObject, hoverIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IMap_ev_uint32(IntPtr pNativeObject, IntPtr map, uint index);

					/// <summary>
					/// 移除地图图层
					/// </summary>
					/// <param name="map">地图</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public void RemoveMapLayer(EarthView.World.Spatial.Atlas.Imap map, uint index)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IMap_ev_uint32(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, index);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IGroupLayer_ev_uint32_IMap(IntPtr pNativeObject, IntPtr grouplayer, uint index, IntPtr map);

					/// <summary>
					/// 移除地图图层
					/// </summary>
					/// <param name="grouplayer">图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public void RemoveMapLayer(EarthView.World.Spatial.Atlas.Igrouplayer grouplayer, uint index, EarthView.World.Spatial.Atlas.Imap map)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeMapLayer_void_IGroupLayer_ev_uint32_IMap(this.NativeObject, object.Equals(grouplayer, null) ? IntPtr.Zero : grouplayer.NativeObject, index, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeMapName_void_IMap_EVString(IntPtr pNativeObject, IntPtr map, string name);

					///added by lixiang
					//// <summary>
					//// 修改地图名
					//// </summary>
					//// <param name="map">地图</param>
					//// <param name="name">地图名</param>
					//// <returns></returns>
					public void ChangeMapName(EarthView.World.Spatial.Atlas.Imap map, string name)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeMapName_void_IMap_EVString(this.NativeObject, object.Equals(map, null) ? IntPtr.Zero : map.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerName_void_ILayer_EVString(IntPtr pNativeObject, IntPtr layer, string name);

					/// <summary>
					/// 修改图层名
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					public void ChangeLayerName(EarthView.World.Spatial.Atlas.Ilayer layer, string name)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerName_void_ILayer_EVString(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, name);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerVisible_void_ILayer_ev_bool(IntPtr pNativeObject, IntPtr layer, byte visible);

					/// <summary>
					/// 修改图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">true可见，false不可见</param>
					/// <returns></returns>
					public void ChangeLayerVisible(EarthView.World.Spatial.Atlas.Ilayer layer, bool visible)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_changeLayerVisible_void_ILayer_ev_bool(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneLayer_void_IGlobeLayer_EVString_EVString(IntPtr pNativeObject, IntPtr pParentGrouplayer, string datasourceName, string datasetName);

					/// <summary>
					/// 创建场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					public void CreateSceneLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer pParentGrouplayer, string datasourceName, string datasetName)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneLayer_void_IGlobeLayer_EVString_EVString(this.NativeObject, object.Equals(pParentGrouplayer, null) ? IntPtr.Zero : pParentGrouplayer.NativeObject, datasourceName, datasetName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneGroupLayer_void_IGlobeLayer_EVString(IntPtr pNativeObject, IntPtr pParentGrouplayer, string groupName);

					/// <summary>
					/// 创建场景图层组
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="groupName">组名</param>
					/// <returns></returns>
					public void CreateSceneGroupLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer pParentGrouplayer, string groupName)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_createSceneGroupLayer_void_IGlobeLayer_EVString(this.NativeObject, object.Equals(pParentGrouplayer, null) ? IntPtr.Zero : pParentGrouplayer.NativeObject, groupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveSceneLayer_void_IGlobeLayer_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pParentGrouplayer, uint index, uint pos);

					/// <summary>
					/// 移除场景图层
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <param name="pos">移动后位置</param>
					/// <returns></returns>
					public void MoveSceneLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer pParentGrouplayer, uint index, uint pos)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_moveSceneLayer_void_IGlobeLayer_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pParentGrouplayer, null) ? IntPtr.Zero : pParentGrouplayer.NativeObject, index, pos);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_switchSceneLayer_void_IGlobeLayer_ev_uint32_IGlobeLayer(IntPtr pNativeObject, IntPtr pParentGrouplayer, uint index, IntPtr newLayer);

					/// <summary>
					/// 贴地矢量与非贴地矢量的转换
					/// </summary>
					/// <param name="pParentGrouplayer">父图层组</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					public void SwitchSceneLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer pParentGrouplayer, uint index, EarthView.World.Spatial3D.Atlas.Iglobelayer newLayer)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_switchSceneLayer_void_IGlobeLayer_ev_uint32_IGlobeLayer(this.NativeObject, object.Equals(pParentGrouplayer, null) ? IntPtr.Zero : pParentGrouplayer.NativeObject, index, object.Equals(newLayer, null) ? IntPtr.Zero : newLayer.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeSceneLayer_void_IGlobeLayer_ev_uint32(IntPtr pNativeObject, IntPtr pParentGrouplayer, uint index);

					///矢量数据库图层(贴地与非贴地的转换)
					//// <summary>
					//// 移除场景图层
					//// </summary>
					//// <param name="pParentGrouplayer">父图层组</param>
					//// <param name="index">索引</param>
					//// <returns></returns>
					public void RemoveSceneLayer(EarthView.World.Spatial3D.Atlas.Iglobelayer pParentGrouplayer, uint index)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_removeSceneLayer_void_IGlobeLayer_ev_uint32(this.NativeObject, object.Equals(pParentGrouplayer, null) ? IntPtr.Zero : pParentGrouplayer.NativeObject, index);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerVisible_void_IGlobeLayer_ev_bool(IntPtr pNativeObject, IntPtr layer, byte visible);

					/// <summary>
					/// 设置场景图层可见性
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					public void SetSceneLayerVisible(EarthView.World.Spatial3D.Atlas.Iglobelayer layer, bool visible)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerVisible_void_IGlobeLayer_ev_bool(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, Convert.ToByte(visible));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerTheme_void_IGlobeLayer_ITheme(IntPtr pNativeObject, IntPtr layer, IntPtr theme);

					/// <summary>
					/// 设置场景图层风格
					/// </summary>
					/// <param name="layer">图层</param>
					/// <param name="theme">网络</param>
					/// <returns></returns>
					public void SetSceneLayerTheme(EarthView.World.Spatial3D.Atlas.Iglobelayer layer, EarthView.World.Spatial.Theme.Itheme theme)
					{
						EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_setSceneLayerTheme_void_IGlobeLayer_ITheme(this.NativeObject, object.Equals(layer, null) ? IntPtr.Zero : layer.NativeObject, object.Equals(theme, null) ? IntPtr.Zero : theme.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadAtlasEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject", new AtlasEventObjectClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObjectProxy", new AtlasEventObjectClassFactory());

					public AtlasEventObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(IntPtr pObject, onCreateMap_CallBack_void_CMapActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(IntPtr pObject, onCreateScene_CallBack_void_CSceneActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(IntPtr pObject, onSetCurrentMap_CallBack_void_CMapActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(IntPtr pObject, onSetCurrentScene_CallBack_void_CSceneActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(IntPtr pObject, onRemoveMap_CallBack_void_CMapActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(IntPtr pObject, onRemoveScene_CallBack_void_CSceneActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(IntPtr pObject, onCreateMapLayer_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(IntPtr pObject, onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(IntPtr pObject, onMoveMapLayer_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(IntPtr pObject, onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(IntPtr pObject, onChangeMapName_CallBack_void_CMapActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(IntPtr pObject, onChangeSceneName_CallBack_void_CSceneActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(IntPtr pObject, onChangeLayerName_CallBack_void_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(IntPtr pObject, onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(IntPtr pObject, onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(IntPtr pObject, onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(IntPtr pObject, onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(IntPtr pObject, onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(IntPtr pObject, onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(IntPtr pObject, onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(IntPtr pObject, onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(IntPtr pObject, onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onCreateMap_CallBack_void_CMapActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent_Function;
							GC.KeepAlive(m_onCreateMap_CallBack_void_CMapActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMap_void_CMapActiveEvent(this.NativeObject, m_onCreateMap_CallBack_void_CMapActiveEvent);
							m_onCreateScene_CallBack_void_CSceneActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent_Function;
							GC.KeepAlive(m_onCreateScene_CallBack_void_CSceneActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateScene_void_CSceneActiveEvent(this.NativeObject, m_onCreateScene_CallBack_void_CSceneActiveEvent);
							m_onSetCurrentMap_CallBack_void_CMapActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent_Function;
							GC.KeepAlive(m_onSetCurrentMap_CallBack_void_CMapActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentMap_void_CMapActiveEvent(this.NativeObject, m_onSetCurrentMap_CallBack_void_CMapActiveEvent);
							m_onSetCurrentScene_CallBack_void_CSceneActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent_Function;
							GC.KeepAlive(m_onSetCurrentScene_CallBack_void_CSceneActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetCurrentScene_void_CSceneActiveEvent(this.NativeObject, m_onSetCurrentScene_CallBack_void_CSceneActiveEvent);
							m_onRemoveMap_CallBack_void_CMapActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent_Function;
							GC.KeepAlive(m_onRemoveMap_CallBack_void_CMapActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMap_void_CMapActiveEvent(this.NativeObject, m_onRemoveMap_CallBack_void_CMapActiveEvent);
							m_onRemoveScene_CallBack_void_CSceneActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent_Function;
							GC.KeepAlive(m_onRemoveScene_CallBack_void_CSceneActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveScene_void_CSceneActiveEvent(this.NativeObject, m_onRemoveScene_CallBack_void_CSceneActiveEvent);
							m_onCreateMapLayer_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onCreateMapLayer_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapLayer_void_CMapLayerActiveEvent(this.NativeObject, m_onCreateMapLayer_CallBack_void_CMapLayerActiveEvent);
							m_onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateMapGroupLayer_void_CMapLayerActiveEvent(this.NativeObject, m_onCreateMapGroupLayer_CallBack_void_CMapLayerActiveEvent);
							m_onMoveMapLayer_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onMoveMapLayer_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveMapLayer_void_CMapLayerActiveEvent(this.NativeObject, m_onMoveMapLayer_CallBack_void_CMapLayerActiveEvent);
							m_onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveMapLayer_void_CMapLayerActiveEvent(this.NativeObject, m_onRemoveMapLayer_CallBack_void_CMapLayerActiveEvent);
							m_onChangeMapName_CallBack_void_CMapActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent_Function;
							GC.KeepAlive(m_onChangeMapName_CallBack_void_CMapActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeMapName_void_CMapActiveEvent(this.NativeObject, m_onChangeMapName_CallBack_void_CMapActiveEvent);
							m_onChangeSceneName_CallBack_void_CSceneActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent_Function;
							GC.KeepAlive(m_onChangeSceneName_CallBack_void_CSceneActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeSceneName_void_CSceneActiveEvent(this.NativeObject, m_onChangeSceneName_CallBack_void_CSceneActiveEvent);
							m_onChangeLayerName_CallBack_void_CEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent_Function;
							GC.KeepAlive(m_onChangeLayerName_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerName_void_CEvent(this.NativeObject, m_onChangeLayerName_CallBack_void_CEvent);
							m_onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerVisible_void_CMapLayerActiveEvent(this.NativeObject, m_onChangeLayerVisible_CallBack_void_CMapLayerActiveEvent);
							m_onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent_Function;
							GC.KeepAlive(m_onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onChangeLayerTheme_void_CMapLayerActiveEvent(this.NativeObject, m_onChangeLayerTheme_CallBack_void_CMapLayerActiveEvent);
							m_onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, m_onCreateSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							m_onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCreateSceneGroupLayer_void_CSceneLayerActiveEvent(this.NativeObject, m_onCreateSceneGroupLayer_CallBack_void_CSceneLayerActiveEvent);
							m_onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSwitchSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, m_onSwitchSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							m_onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onMoveSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, m_onMoveSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							m_onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onRemoveSceneLayer_void_CSceneLayerActiveEvent(this.NativeObject, m_onRemoveSceneLayer_CallBack_void_CSceneLayerActiveEvent);
							m_onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerVisible_void_CSceneLayerActiveEvent(this.NativeObject, m_onSetSceneLayerVisible_CallBack_void_CSceneLayerActiveEvent);
							m_onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent = EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent_Function;
							GC.KeepAlive(m_onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onSetSceneLayerTheme_void_CSceneLayerActiveEvent(this.NativeObject, m_onSetSceneLayerTheme_CallBack_void_CSceneLayerActiveEvent);
							m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
							GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
							m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
							GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
							m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
							GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_AtlasManager_CAtlasEventObject_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
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
					public static AtlasEventObject FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AtlasEventObject obj = baseObj as  AtlasEventObject;
						if (object.Equals(obj, null))
						{
							obj = new AtlasEventObject(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAtlasEventObject");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AtlasEventObjectClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AtlasEventObject emptyInstance = new AtlasEventObject(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
