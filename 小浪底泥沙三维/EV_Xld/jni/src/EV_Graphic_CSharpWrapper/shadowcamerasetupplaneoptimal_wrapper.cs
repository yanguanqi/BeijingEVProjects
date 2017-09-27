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
			public class PlaneOptimalShadowCameraSetup : EarthView.World.Graphic.ShadowCameraSetup
			{
				public PlaneOptimalShadowCameraSetup(EarthView.World.Graphic.MovablePlane plane) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueplane = new BasePtr(plane);
					list.Add("plane", valueplane.PtrVal);
					Create("CPlaneOptimalShadowCameraSetupProxy", list);
					if (!"EarthView.World.Graphic.PlaneOptimalShadowCameraSetup".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public new void GetShadowCamera_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
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
				private static extern void EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public override void GetShadowCamera(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPlaneOptimalShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup", new PlaneOptimalShadowCameraSetupClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPlaneOptimalShadowCameraSetupProxy", new PlaneOptimalShadowCameraSetupClassFactory());

				public PlaneOptimalShadowCameraSetup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pObject, getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Function;
						GC.KeepAlive(m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CPlaneOptimalShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
					}
				}
				public static PlaneOptimalShadowCameraSetup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PlaneOptimalShadowCameraSetup obj = baseObj as  PlaneOptimalShadowCameraSetup;
					if (object.Equals(obj, null))
					{
						obj = new PlaneOptimalShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPlaneOptimalShadowCameraSetup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PlaneOptimalShadowCameraSetupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PlaneOptimalShadowCameraSetup emptyInstance = new PlaneOptimalShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
