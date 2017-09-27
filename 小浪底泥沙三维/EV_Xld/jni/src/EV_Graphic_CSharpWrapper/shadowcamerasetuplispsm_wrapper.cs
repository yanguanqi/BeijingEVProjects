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
			public class LiSPSMShadowCameraSetup : EarthView.World.Graphic.FocusedShadowCameraSetup
			{
				public LiSPSMShadowCameraSetup() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLiSPSMShadowCameraSetupProxy", null);
					if (!"EarthView.World.Graphic.LiSPSMShadowCameraSetup".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public new void GetShadowCamera_NoVirtual(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pNativeObject, IntPtr sm, IntPtr cam, IntPtr vp, IntPtr light, IntPtr texCam, ulong iteration);

				public override void GetShadowCamera(EarthView.World.Graphic.SceneManager sm, EarthView.World.Graphic.Camera cam, EarthView.World.Graphic.Viewport vp, EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera texCam, ulong iteration)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, object.Equals(sm, null) ? IntPtr.Zero : sm.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, object.Equals(vp, null) ? IntPtr.Zero : vp.NativeObject, object.Equals(light, null) ? IntPtr.Zero : light.NativeObject, object.Equals(texCam, null) ? IntPtr.Zero : texCam.NativeObject, iteration);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setOptimalAdjustFactor_CallBack_void_Real(double n);

				protected setOptimalAdjustFactor_CallBack_void_Real m_setOptimalAdjustFactor_CallBack_void_Real;

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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_NoVirtual(IntPtr pNativeObject, double n);

				public virtual void SetOptimalAdjustFactor_NoVirtual(double n)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_NoVirtual(this.NativeObject, n);
					
				}

				protected  void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Function(double n)
				{
					SetOptimalAdjustFactor(n);
					
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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(IntPtr pNativeObject, double n);

				public virtual void SetOptimalAdjustFactor(double n)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(this.NativeObject, n);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getOptimalAdjustFactor_CallBack_Real();

				protected getOptimalAdjustFactor_CallBack_Real m_getOptimalAdjustFactor_CallBack_Real;

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
				private static extern double EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_NoVirtual(IntPtr pNativeObject);

				public virtual double GetOptimalAdjustFactor_NoVirtual()
				{
					double ret=EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Function()
				{
					double csret=GetOptimalAdjustFactor();
					
					return csret;
					
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
				private static extern double EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(IntPtr pNativeObject);

				public virtual double GetOptimalAdjustFactor()
				{
					double ret=EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setUseSimpleOptimalAdjust_CallBack_void_ev_bool(bool s);

				protected setUseSimpleOptimalAdjust_CallBack_void_ev_bool m_setUseSimpleOptimalAdjust_CallBack_void_ev_bool;

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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte s);

				public virtual void SetUseSimpleOptimalAdjust_NoVirtual(bool s)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(s));
					
				}

				protected  void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Function(bool s)
				{
					SetUseSimpleOptimalAdjust(s);
					
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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(IntPtr pNativeObject, byte s);

				public virtual void SetUseSimpleOptimalAdjust(bool s)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(this.NativeObject, Convert.ToByte(s));
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getUseSimpleOptimalAdjust_CallBack_ev_bool();

				protected getUseSimpleOptimalAdjust_CallBack_ev_bool m_getUseSimpleOptimalAdjust_CallBack_ev_bool;

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
				private static extern byte EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool GetUseSimpleOptimalAdjust_NoVirtual()
				{
					byte ret=EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Function()
				{
					bool csret=GetUseSimpleOptimalAdjust();
					
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
				private static extern byte EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(IntPtr pNativeObject);

				public virtual bool GetUseSimpleOptimalAdjust()
				{
					byte ret=EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCameraLightDirectionThreshold_CallBack_void_CDegree(IntPtr angle);

				protected setCameraLightDirectionThreshold_CallBack_void_CDegree m_setCameraLightDirectionThreshold_CallBack_void_CDegree;

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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr angle);

				public virtual void SetCameraLightDirectionThreshold_NoVirtual(EarthView.World.Spatial.Math.Degree angle)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_NoVirtual(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Function(IntPtr angle)
				{
					EarthView.World.Spatial.Math.Degree csobj_angle = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_angle.BindNativeObject(angle,"CDegree");
					IClassFactory csobj_angleClassFactory = GlobalClassFactoryMap.Get(csobj_angle.GetCppInstanceTypeName());
					if (csobj_angleClassFactory != null)
					{
						csobj_angle.Delegate = true;
						csobj_angle = csobj_angleClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csobj_angle.BindNativeObject(angle, "CDegree");
					}
					
					SetCameraLightDirectionThreshold(csobj_angle);
					
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
				private static extern void EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(IntPtr pNativeObject, IntPtr angle);

				public virtual void SetCameraLightDirectionThreshold(EarthView.World.Spatial.Math.Degree angle)
				{
					EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCameraLightDirectionThreshold_CallBack_CDegree();

				protected getCameraLightDirectionThreshold_CallBack_CDegree m_getCameraLightDirectionThreshold_CallBack_CDegree;

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
				private static extern IntPtr EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Math.Degree GetCameraLightDirectionThreshold_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDegree");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csObj.BindNativeObject(__ptr, "CDegree");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Function()
				{
					EarthView.World.Spatial.Math.Degree csret=GetCameraLightDirectionThreshold();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Math.Degree GetCameraLightDirectionThreshold()
				{
					IntPtr __ptr = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDegree");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csObj.BindNativeObject(__ptr, "CDegree");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadLiSPSMShadowCameraSetup = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLiSPSMShadowCameraSetup", new LiSPSMShadowCameraSetupClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CLiSPSMShadowCameraSetupProxy", new LiSPSMShadowCameraSetupClassFactory());

				public LiSPSMShadowCameraSetup(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(IntPtr pObject, setOptimalAdjustFactor_CallBack_void_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(IntPtr pObject, getOptimalAdjustFactor_CallBack_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(IntPtr pObject, setUseSimpleOptimalAdjust_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(IntPtr pObject, getUseSimpleOptimalAdjust_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(IntPtr pObject, setCameraLightDirectionThreshold_CallBack_void_CDegree pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(IntPtr pObject, getCameraLightDirectionThreshold_CallBack_CDegree pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(IntPtr pObject, getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setOptimalAdjustFactor_CallBack_void_Real = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real_Function;
						GC.KeepAlive(m_setOptimalAdjustFactor_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setOptimalAdjustFactor_void_Real(this.NativeObject, m_setOptimalAdjustFactor_CallBack_void_Real);
						m_getOptimalAdjustFactor_CallBack_Real = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real_Function;
						GC.KeepAlive(m_getOptimalAdjustFactor_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getOptimalAdjustFactor_Real(this.NativeObject, m_getOptimalAdjustFactor_CallBack_Real);
						m_setUseSimpleOptimalAdjust_CallBack_void_ev_bool = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool_Function;
						GC.KeepAlive(m_setUseSimpleOptimalAdjust_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setUseSimpleOptimalAdjust_void_ev_bool(this.NativeObject, m_setUseSimpleOptimalAdjust_CallBack_void_ev_bool);
						m_getUseSimpleOptimalAdjust_CallBack_ev_bool = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool_Function;
						GC.KeepAlive(m_getUseSimpleOptimalAdjust_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getUseSimpleOptimalAdjust_ev_bool(this.NativeObject, m_getUseSimpleOptimalAdjust_CallBack_ev_bool);
						m_setCameraLightDirectionThreshold_CallBack_void_CDegree = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree_Function;
						GC.KeepAlive(m_setCameraLightDirectionThreshold_CallBack_void_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_setCameraLightDirectionThreshold_void_CDegree(this.NativeObject, m_setCameraLightDirectionThreshold_CallBack_void_CDegree);
						m_getCameraLightDirectionThreshold_CallBack_CDegree = EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree_Function;
						GC.KeepAlive(m_getCameraLightDirectionThreshold_CallBack_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getCameraLightDirectionThreshold_CDegree(this.NativeObject, m_getCameraLightDirectionThreshold_CallBack_CDegree);
						m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_Function;
						GC.KeepAlive(m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CLiSPSMShadowCameraSetup_getShadowCamera_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.NativeObject, m_getShadowCamera_CallBack_void_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t);
					}
				}
				public static LiSPSMShadowCameraSetup FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LiSPSMShadowCameraSetup obj = baseObj as  LiSPSMShadowCameraSetup;
					if (object.Equals(obj, null))
					{
						obj = new LiSPSMShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLiSPSMShadowCameraSetup");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LiSPSMShadowCameraSetupClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LiSPSMShadowCameraSetup emptyInstance = new LiSPSMShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
