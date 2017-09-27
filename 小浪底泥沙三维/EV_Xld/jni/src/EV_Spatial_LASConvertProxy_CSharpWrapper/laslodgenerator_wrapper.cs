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
		namespace SpatialLASConvertProxy
		{
			public class LasLODGenerateListener : EarthView.World.Core.BaseObject
			{
				public LasLODGenerateListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLasLODGenerateListenerProxy", null);
					if (!"EarthView.World.SpatialLASConvertProxy.LasLODGenerateListener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void processMsg_CallBack_void_EVString(ref IntPtr msg);

				protected processMsg_CallBack_void_EVString m_processMsg_CallBack_void_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_NoVirtual(IntPtr pNativeObject, string msg);

				public virtual void ProcessMsg_NoVirtual(string msg)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_NoVirtual(this.NativeObject, msg);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Function(ref IntPtr msg)
				{
					string strmsg= Marshal.PtrToStringAnsi(msg);
					ClassFactory.FreeString(ref msg);
					
					ProcessMsg(strmsg);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(IntPtr pNativeObject, string msg);

				public virtual void ProcessMsg(string msg)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(this.NativeObject, msg);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void paused_CallBack_void();

				protected paused_CallBack_void m_paused_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Paused_NoVirtual()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Function()
				{
					Paused();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(IntPtr pNativeObject);

				public virtual void Paused()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void finished_CallBack_void();

				protected finished_CallBack_void m_finished_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_NoVirtual(IntPtr pNativeObject);

				public virtual void Finished_NoVirtual()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Function()
				{
					Finished();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(IntPtr pNativeObject);

				public virtual void Finished()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void processProgress_CallBack_void_ev_uint32_ev_uint32(uint total, uint current);

				protected processProgress_CallBack_void_ev_uint32_ev_uint32 m_processProgress_CallBack_void_ev_uint32_ev_uint32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, uint total, uint current);

				public virtual void ProcessProgress_NoVirtual(uint total, uint current)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, total, current);
					
				}

				protected  void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Function(uint total, uint current)
				{
					ProcessProgress(total, current);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(IntPtr pNativeObject, uint total, uint current);

				public virtual void ProcessProgress(uint total, uint current)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(this.NativeObject, total, current);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODGenerateListener = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener", new LasLODGenerateListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListenerProxy", new LasLODGenerateListenerClassFactory());

				public LasLODGenerateListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(IntPtr pObject, processMsg_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(IntPtr pObject, paused_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(IntPtr pObject, finished_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(IntPtr pObject, processProgress_CallBack_void_ev_uint32_ev_uint32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_processMsg_CallBack_void_EVString = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString_Function;
						GC.KeepAlive(m_processMsg_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processMsg_void_EVString(this.NativeObject, m_processMsg_CallBack_void_EVString);
						m_paused_CallBack_void = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void_Function;
						GC.KeepAlive(m_paused_CallBack_void);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_paused_void(this.NativeObject, m_paused_CallBack_void);
						m_finished_CallBack_void = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void_Function;
						GC.KeepAlive(m_finished_CallBack_void);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_finished_void(this.NativeObject, m_finished_CallBack_void);
						m_processProgress_CallBack_void_ev_uint32_ev_uint32 = EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32_Function;
						GC.KeepAlive(m_processProgress_CallBack_void_ev_uint32_ev_uint32);
						EV_RegisterCallback_EarthView_World_SpatialLASConvertProxy_CLasLODGenerateListener_processProgress_void_ev_uint32_ev_uint32(this.NativeObject, m_processProgress_CallBack_void_ev_uint32_ev_uint32);
					}
				}
				public static LasLODGenerateListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LasLODGenerateListener obj = baseObj as  LasLODGenerateListener;
					if (object.Equals(obj, null))
					{
						obj = new LasLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLasLODGenerateListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasLODGenerateListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LasLODGenerateListener emptyInstance = new LasLODGenerateListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class LasLODParam : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public LasLODParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLasLODParam",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setBuildQuadtree_void_ev_bool(IntPtr pNativeObject, byte buildQuadTree);

				public void SetBuildQuadtree(bool buildQuadTree)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setBuildQuadtree_void_ev_bool(this.NativeObject, Convert.ToByte(buildQuadTree));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getBuildQuadtree_ev_bool(IntPtr pNativeObject);

				public bool GetBuildQuadtree()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getBuildQuadtree_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseDoubleSideLight_void_ev_bool(IntPtr pNativeObject, byte useDoubleSideLight);

				public void SetUseDoubleSideLight(bool useDoubleSideLight)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseDoubleSideLight_void_ev_bool(this.NativeObject, Convert.ToByte(useDoubleSideLight));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseDoubleSideLight_ev_bool(IntPtr pNativeObject);

				public bool GetUseDoubleSideLight()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseDoubleSideLight_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setCombineSubmesh_void_ev_bool(IntPtr pNativeObject, byte combineSubMesh);

				public void SetCombineSubmesh(bool combineSubMesh)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setCombineSubmesh_void_ev_bool(this.NativeObject, Convert.ToByte(combineSubMesh));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getCombineSubmesh_ev_bool(IntPtr pNativeObject);

				public bool GetCombineSubmesh()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getCombineSubmesh_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setToDDS_void_ev_bool(IntPtr pNativeObject, byte toDDS);

				public void SetToDDS(bool toDDS)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setToDDS_void_ev_bool(this.NativeObject, Convert.ToByte(toDDS));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getToDDS_ev_bool(IntPtr pNativeObject);

				public bool GetToDDS()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getToDDS_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setEncode7z_void_ev_bool(IntPtr pNativeObject, byte encode7z);

				public void SetEncode7z(bool encode7z)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setEncode7z_void_ev_bool(this.NativeObject, Convert.ToByte(encode7z));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getEncode7z_ev_bool(IntPtr pNativeObject);

				public bool GetEncode7z()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getEncode7z_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseShareMaterial_void_ev_bool(IntPtr pNativeObject, byte useshareMaterial);

				public void SetUseShareMaterial(bool useshareMaterial)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setUseShareMaterial_void_ev_bool(this.NativeObject, Convert.ToByte(useshareMaterial));
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseShareMaterial_ev_bool(IntPtr pNativeObject);

				public bool GetUseShareMaterial()
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getUseShareMaterial_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_SpatialLASConvertProxy_CLasLODParam_existLODParam_ev_bool_ev_uint8_CLasOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

				public bool ExistLODParam(byte level, ref EarthView.World.SpatialLASConvertProxy.LasOptimizeParams param)
				{
					byte ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_existLODParam_ev_bool_ev_uint8_CLasOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_updateLODParam_void_ev_uint8_CLasOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

				public void UpdateLODParam(byte level, EarthView.World.SpatialLASConvertProxy.LasOptimizeParams param)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_updateLODParam_void_ev_uint8_CLasOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_addLODParam_void_ev_uint8_CLasOptimizeParams(IntPtr pNativeObject, byte level, IntPtr param);

				public void AddLODParam(byte level, EarthView.World.SpatialLASConvertProxy.LasOptimizeParams param)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_addLODParam_void_ev_uint8_CLasOptimizeParams(this.NativeObject, level, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_removeLODParam_void_ev_uint8(IntPtr pNativeObject, byte level);

				public void RemoveLODParam(byte level)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_removeLODParam_void_ev_uint8(this.NativeObject, level);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParam_CLasOptimizeParams_ev_uint8(IntPtr pNativeObject, byte level);

				public EarthView.World.SpatialLASConvertProxy.LasOptimizeParams GetLODParam(byte level)
				{
					IntPtr __ptr = EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParam_CLasOptimizeParams_ev_uint8(this.NativeObject, level);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.SpatialLASConvertProxy.LasOptimizeParams csObj = new EarthView.World.SpatialLASConvertProxy.LasOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLasOptimizeParams");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.SpatialLASConvertProxy.LasOptimizeParams;
						csObj.BindNativeObject(__ptr, "CLasOptimizeParams");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParamSize_ev_int32(IntPtr pNativeObject);

				public int GetLODParamSize()
				{
					int ret=EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLODParamSize_ev_int32(this.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_clearLODParam_void(IntPtr pNativeObject);

				public void ClearLODParam()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_clearLODParam_void(this.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_fromXml_void_EVString(IntPtr pNativeObject, string filePath);

				public void FromXml(string filePath)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_fromXml_void_EVString(this.NativeObject, filePath);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_toXml_void_EVString(IntPtr pNativeObject, string filePath);

				public void ToXml(string filePath)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_toXml_void_EVString(this.NativeObject, filePath);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double lat, double lon, double alt);

				public void SetLocation(double lat, double lon, double alt)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocation_void_ev_real64_ev_real64_ev_real64(this.NativeObject, lat, lon, alt);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double lat, ref double lon, ref double alt);

				public void GetLocation(ref double lat, ref double lon, ref double alt)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocation_void_ev_real64_ev_real64_ev_real64(this.NativeObject, ref lat, ref lon, ref alt);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double rotW, double rotX, double rotY, double rotZ);

				public void SetRotation(double rotW, double rotX, double rotY, double rotZ)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, rotW, rotX, rotY, rotZ);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_getRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, ref double rotW, ref double rotX, ref double rotY, ref double rotZ);

				public void GetRotation(ref double rotW, ref double rotX, ref double rotY, ref double rotZ)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_getRotation_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, ref rotW, ref rotX, ref rotY, ref rotZ);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr scale, IntPtr rotate, IntPtr translate);

				public void SetLocalTranform(EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Vector3 rotate, EarthView.World.Spatial.Math.Vector3 translate)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setLocalTranform_void_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr scale, IntPtr rotate, IntPtr translate);

				public void GetLocalTransform(ref EarthView.World.Spatial.Math.Vector3 scale, ref EarthView.World.Spatial.Math.Vector3 rotate, ref EarthView.World.Spatial.Math.Vector3 translate)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_getLocalTransform_void_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(rotate, null) ? IntPtr.Zero : rotate.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_setElevationMinMaxZ_void_ev_real64_ev_real64(IntPtr pNativeObject, double elevationMinZ, double elevationMaxZ);

				public void SetElevationMinMaxZ(double elevationMinZ, double elevationMaxZ)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_setElevationMinMaxZ_void_ev_real64_ev_real64(this.NativeObject, elevationMinZ, elevationMaxZ);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODParam_getElevationMinMaxZ_void_ev_real64_ev_real64(IntPtr pNativeObject, ref double elevationMinZ, ref double elevationMaxZ);

				public void GetElevationMinMaxZ(ref double elevationMinZ, ref double elevationMaxZ)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODParam_getElevationMinMaxZ_void_ev_real64_ev_real64(this.NativeObject, ref elevationMinZ, ref elevationMaxZ);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODParam = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODParam", new LasLODParamClassFactory());

				public LasLODParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LasLODParam FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LasLODParam obj = baseObj as  LasLODParam;
					if (object.Equals(obj, null))
					{
						obj = new LasLODParam(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLasLODParam");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasLODParamClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LasLODParam emptyInstance = new LasLODParam(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class LasLODGenerator : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				public LasLODGenerator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLasLODGenerator",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_generate_void_StringVector_EVString_EVString_EVString_EVString_ev_bool_CAxisAlignedBox(IntPtr pNativeObject, IntPtr dataFiles, string outputPath, string name, string grpName, string matName, byte isAsyn, IntPtr box);

				public void Generate(EarthView.World.Core.StringVector dataFiles, string outputPath, string name, string grpName, string matName, bool isAsyn, EarthView.World.Spatial.Math.AxisAlignedBox box)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_generate_void_StringVector_EVString_EVString_EVString_EVString_ev_bool_CAxisAlignedBox(this.NativeObject, object.Equals(dataFiles, null) ? IntPtr.Zero : dataFiles.NativeObject, outputPath, name, grpName, matName, Convert.ToByte(isAsyn), object.Equals(box, null) ? IntPtr.Zero : box.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_addListener_void_CLasLODGenerateListener(IntPtr pNativeObject, IntPtr observer);

				public void AddListener(EarthView.World.SpatialLASConvertProxy.LasLODGenerateListener observer)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_addListener_void_CLasLODGenerateListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_removeListener_void_CLasLODGenerateListener(IntPtr pNativeObject, IntPtr observer);

				public void RemoveListener(EarthView.World.SpatialLASConvertProxy.LasLODGenerateListener observer)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_removeListener_void_CLasLODGenerateListener(this.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_setParam_void_CLasLODParam(IntPtr pNativeObject, IntPtr param);

				public void SetParam(ref EarthView.World.SpatialLASConvertProxy.LasLODParam param)
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_setParam_void_CLasLODParam(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_getParam_CLasLODParam(IntPtr pNativeObject);

				public EarthView.World.SpatialLASConvertProxy.LasLODParam GetParam()
				{
					IntPtr __ptr = EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_getParam_CLasLODParam(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.SpatialLASConvertProxy.LasLODParam csObj = new EarthView.World.SpatialLASConvertProxy.LasLODParam(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLasLODParam");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.SpatialLASConvertProxy.LasLODParam;
						csObj.BindNativeObject(__ptr, "CLasLODParam");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_LASConvertProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_stop_void(IntPtr pNativeObject);

				public void Stop()
				{
					EarthView_World_SpatialLASConvertProxy_CLasLODGenerator_stop_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_d.so");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.so");

					#else 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_d.dll");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy.so");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.so");

					#else 
						private static bool bLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy.dll");
						private static bool csbLoadLasLODGenerator = LoadDll.Load("EV_Spatial_LASConvertProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerator", new LasLODGeneratorClassFactory());

				public LasLODGenerator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LasLODGenerator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LasLODGenerator obj = baseObj as  LasLODGenerator;
					if (object.Equals(obj, null))
					{
						obj = new LasLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLasLODGenerator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LasLODGeneratorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LasLODGenerator emptyInstance = new LasLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
