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
			/// 摄像机阴影类
			/// 可以使用该类通过定义摄像机参数来渲染和改变投射的阴影纹理
			/// </summary>
			public class ShadowCameraSetup : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ShadowCameraSetup() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CShadowCameraSetupProxy", null);
					if (!"EarthView.World.Graphic.ShadowCameraSetup".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				protected getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t;

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
				private static extern void EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				//// CFunction to implement -- must set the shadow camera properties
				/// <summary>
				/// 摄像机阴影类默认函数
				/// </summary>
				/// <param name="sm"></param>
				/// <param name="cam"></param>
				/// <param name="vp"></param>
				/// <param name="light"></param>
				/// <param name="texCam"></param>
				/// <param name="iteration"></param>
				/// <returns></returns>
				public virtual void GetShadowCamera_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
				}

				protected  void EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Function(IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration)
				{
					EarthView.World.Graphic.SceneManager csobj_sm = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_sm.BindNativeObject(sm,"CSceneManager");
					csobj_sm.Delegate = true;
					IClassFactory csobj_smClassFactory = GlobalClassFactoryMap.Get(csobj_sm.GetCppInstanceTypeName());
					if (csobj_smClassFactory != null)
					{
						csobj_sm.Delegate = true;
						csobj_sm = csobj_smClassFactory.Create() as EarthView.World.Graphic.SceneManager;
						csobj_sm.BindNativeObject(sm, "CSceneManager");
						csobj_sm.Delegate = true;
					}
					EarthView.World.Graphic.Camera csobj_cam = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_cam.BindNativeObject(cam,"CCamera");
					csobj_cam.Delegate = true;
					IClassFactory csobj_camClassFactory = GlobalClassFactoryMap.Get(csobj_cam.GetCppInstanceTypeName());
					if (csobj_camClassFactory != null)
					{
						csobj_cam.Delegate = true;
						csobj_cam = csobj_camClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_cam.BindNativeObject(cam, "CCamera");
						csobj_cam.Delegate = true;
					}
					EarthView.World.Graphic.Viewport csobj_vp = new EarthView.World.Graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_vp.BindNativeObject(vp,"CViewport");
					csobj_vp.Delegate = true;
					IClassFactory csobj_vpClassFactory = GlobalClassFactoryMap.Get(csobj_vp.GetCppInstanceTypeName());
					if (csobj_vpClassFactory != null)
					{
						csobj_vp.Delegate = true;
						csobj_vp = csobj_vpClassFactory.Create() as EarthView.World.Graphic.Viewport;
						csobj_vp.BindNativeObject(vp, "CViewport");
						csobj_vp.Delegate = true;
					}
					EarthView.World.Graphic.Light csobj_light = new EarthView.World.Graphic.Light(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_light.BindNativeObject(light,"CLight");
					csobj_light.Delegate = true;
					IClassFactory csobj_lightClassFactory = GlobalClassFactoryMap.Get(csobj_light.GetCppInstanceTypeName());
					if (csobj_lightClassFactory != null)
					{
						csobj_light.Delegate = true;
						csobj_light = csobj_lightClassFactory.Create() as EarthView.World.Graphic.Light;
						csobj_light.BindNativeObject(light, "CLight");
						csobj_light.Delegate = true;
					}
					EarthView.World.Graphic.Camera csobj_texCam = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_texCam.BindNativeObject(texCam,"CCamera");
					csobj_texCam.Delegate = true;
					IClassFactory csobj_texCamClassFactory = GlobalClassFactoryMap.Get(csobj_texCam.GetCppInstanceTypeName());
					if (csobj_texCamClassFactory != null)
					{
						csobj_texCam.Delegate = true;
						csobj_texCam = csobj_texCamClassFactory.Create() as EarthView.World.Graphic.Camera;
						csobj_texCam.BindNativeObject(texCam, "CCamera");
						csobj_texCam.Delegate = true;
					}
					
					GetShadowCamera(csobj_sm, csobj_cam, csobj_vp, csobj_light, csobj_texCam, iteration);
					
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
				private static extern void EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				//// CFunction to implement -- must set the shadow camera properties
				/// <summary>
				/// 摄像机阴影类默认函数
				/// </summary>
				/// <param name="sm"></param>
				/// <param name="cam"></param>
				/// <param name="vp"></param>
				/// <param name="light"></param>
				/// <param name="texCam"></param>
				/// <param name="iteration"></param>
				/// <returns></returns>
				public virtual void GetShadowCamera(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CShadowCameraSetup", new ShadowCameraSetupClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CShadowCameraSetupProxy", new ShadowCameraSetupClassFactory());

				public ShadowCameraSetup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pObject, getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Function;
						GC.KeepAlive(m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
					}
				}
				public static ShadowCameraSetup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ShadowCameraSetup obj = baseObj as  ShadowCameraSetup;
					if (object.Equals(obj, null))
					{
						obj = new ShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CShadowCameraSetup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ShadowCameraSetupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ShadowCameraSetup emptyInstance = new ShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 默认摄像机阴影类
			/// 可以使用该类实现默认摄像机阴影的设置
			/// </summary>
			public class DefaultShadowCameraSetup : EarthView.World.Graphic.ShadowCameraSetup
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public DefaultShadowCameraSetup() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDefaultShadowCameraSetupProxy", null);
					if (!"EarthView.World.Graphic.DefaultShadowCameraSetup".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern void EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public new void GetShadowCamera_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
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
				private static extern void EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public override void GetShadowCamera(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadDefaultShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultShadowCameraSetup", new DefaultShadowCameraSetupClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CDefaultShadowCameraSetupProxy", new DefaultShadowCameraSetupClassFactory());

				public DefaultShadowCameraSetup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pObject, getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Function;
						GC.KeepAlive(m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CDefaultShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
					}
				}
				public static DefaultShadowCameraSetup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DefaultShadowCameraSetup obj = baseObj as  DefaultShadowCameraSetup;
					if (object.Equals(obj, null))
					{
						obj = new DefaultShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDefaultShadowCameraSetup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DefaultShadowCameraSetupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DefaultShadowCameraSetup emptyInstance = new DefaultShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ShadowCameraSetupPtr : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ShadowCameraSetupPtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ShadowCameraSetupPtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public ShadowCameraSetupPtr(EarthView.World.Graphic.ShadowCameraSetup ref_rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_rep = new BasePtr(ref_rep);
					list.Add("ref_rep", valueref_rep.PtrVal);
					if(!object.Equals(ref_rep, null))
					{
					ref_rep.NoFree = true;
					}
					Create("ShadowCameraSetupPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public ShadowCameraSetupPtr(EarthView.World.Graphic.ShadowCameraSetup ref_rep, EarthView.World.Core.SHAREDPTRFREEMETHOD inFreeMethod) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_rep = new BasePtr(ref_rep);
					list.Add("ref_rep", valueref_rep.PtrVal);
					if(!object.Equals(ref_rep, null))
					{
					ref_rep.NoFree = true;
					}
					BasePtr valueinFreeMethod = new BasePtr(inFreeMethod);
					list.Add("inFreeMethod", valueinFreeMethod.PtrVal);
					Create("ShadowCameraSetupPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public ShadowCameraSetupPtr(EarthView.World.Graphic.ShadowCameraSetupPtr r) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuer = new BasePtr(r);
					list.Add("r", valuer.PtrVal);
					Create("ShadowCameraSetupPtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
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
				private static extern IntPtr EarthView_World_Graphic_ShadowCameraSetupPtr_get_CShadowCameraSetup(IntPtr pNativeObject);

				public EarthView.World.Graphic.ShadowCameraSetup Get()
				{
					IntPtr __ptr = EarthView_World_Graphic_ShadowCameraSetupPtr_get_CShadowCameraSetup(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShadowCameraSetup csObj = new EarthView.World.Graphic.ShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CShadowCameraSetup");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShadowCameraSetup;
						csObj.BindNativeObject(__ptr, "CShadowCameraSetup");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadShadowCameraSetupPtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::ShadowCameraSetupPtr", new ShadowCameraSetupPtrClassFactory());

				public ShadowCameraSetupPtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static ShadowCameraSetupPtr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ShadowCameraSetupPtr obj = baseObj as  ShadowCameraSetupPtr;
					if (object.Equals(obj, null))
					{
						obj = new ShadowCameraSetupPtr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ShadowCameraSetupPtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ShadowCameraSetupPtrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ShadowCameraSetupPtr emptyInstance = new ShadowCameraSetupPtr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
