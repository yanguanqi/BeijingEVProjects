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
			namespace Download
			{
				public class DownloadInterface : BaseObject
				{
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public DownloadInterface() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDownloadInterface",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Download_CDownloadInterface_instance_CDownloadInterface();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static EarthView.World.Spatial.Download.DownloadInterface Instance()
					{
						IntPtr __ptr = EarthView_World_Spatial_Download_CDownloadInterface_instance_CDownloadInterface();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Download.DownloadInterface csObj = new EarthView.World.Spatial.Download.DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDownloadInterface");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Download.DownloadInterface;
							csObj.BindNativeObject(__ptr, "CDownloadInterface");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void(IntPtr pNativeObject, string url, IntPtr pData);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns>retuen data length, release 'pData' by releaseHttpGetData function</returns>
					public uint HttpGet(string url, IntPtr pData)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void(this.NativeObject, url, pData);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32(IntPtr pNativeObject, string url, IntPtr pData, ref int retCode);

					public uint HttpGet(string url, IntPtr pData, ref int retCode)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32(this.NativeObject, url, pData, ref retCode);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32_ev_int32(IntPtr pNativeObject, string url, IntPtr pData, ref int retCode, ref int responseTime);

					public uint HttpGet(string url, IntPtr pData, ref int retCode, ref int responseTime)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32_ev_int32(this.NativeObject, url, pData, ref retCode, ref responseTime);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32(IntPtr pNativeObject, string url, IntPtr pData, uint timeout_ms);

					public uint HttpGet(string url, IntPtr pData, uint timeout_ms)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32(this.NativeObject, url, pData, timeout_ms);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32(IntPtr pNativeObject, string url, IntPtr pData, uint timeout_ms, ref int retCode);

					public uint HttpGet(string url, IntPtr pData, uint timeout_ms, ref int retCode)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32(this.NativeObject, url, pData, timeout_ms, ref retCode);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32_ev_int32(IntPtr pNativeObject, string url, IntPtr pData, uint timeout_ms, ref int retCode, ref int responseTime);

					public uint HttpGet(string url, IntPtr pData, uint timeout_ms, ref int retCode, ref int responseTime)
					{
						uint ret=EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32_ev_int32(this.NativeObject, url, pData, timeout_ms, ref retCode, ref responseTime);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_CDownloadInterface_releaseHttpGetData_void_void(IntPtr pNativeObject, IntPtr pData);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ReleaseHttpGetData(IntPtr pData)
					{
						EarthView_World_Spatial_Download_CDownloadInterface_releaseHttpGetData_void_void(this.NativeObject, pData);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_CDownloadInterface_init_void(IntPtr pNativeObject);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Init()
					{
						EarthView_World_Spatial_Download_CDownloadInterface_init_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download_d.so");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp_d.so");

						#else 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp.dll");

						#elif Linux 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download.so");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp.so");

						#else 
							private static bool bLoadDownloadInterface = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadDownloadInterface = LoadDll.Load("EV_Download_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CDownloadInterface", new DownloadInterfaceClassFactory());

					public DownloadInterface(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DownloadInterface FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DownloadInterface obj = baseObj as  DownloadInterface;
						if (object.Equals(obj, null))
						{
							obj = new DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDownloadInterface");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DownloadInterfaceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DownloadInterface emptyInstance = new DownloadInterface(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Urlspeedmanager : BaseObject
				{
					public Urlspeedmanager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("URLSpeedManager",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_URLSpeedManager_addUrl_void_EVString(IntPtr pNativeObject, string url);

					public void AddUrl(string url)
					{
						EarthView_World_Spatial_Download_URLSpeedManager_addUrl_void_EVString(this.NativeObject, url);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_URLSpeedManager_getMaxSpeedUrl_void_EVString_ev_int32(IntPtr pNativeObject, ref IntPtr url, ref int speed);

					public void GetMaxSpeedUrl(ref string url, ref int speed)
					{
						IntPtr __ptrurl = Marshal.StringToHGlobalAnsi(url);
						IntPtr pTmpurl = __ptrurl;
						
						EarthView_World_Spatial_Download_URLSpeedManager_getMaxSpeedUrl_void_EVString_ev_int32(this.NativeObject, ref __ptrurl,ref speed);
						
						 Marshal.FreeHGlobal(pTmpurl);
						url= Marshal.PtrToStringAnsi(__ptrurl);
						ClassFactory.FreeString(ref __ptrurl);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_URLSpeedManager_getMinSpeedUrl_void_EVString_ev_int32(IntPtr pNativeObject, ref IntPtr url, ref int speed);

					public void GetMinSpeedUrl(ref string url, ref int speed)
					{
						IntPtr __ptrurl = Marshal.StringToHGlobalAnsi(url);
						IntPtr pTmpurl = __ptrurl;
						
						EarthView_World_Spatial_Download_URLSpeedManager_getMinSpeedUrl_void_EVString_ev_int32(this.NativeObject, ref __ptrurl,ref speed);
						
						 Marshal.FreeHGlobal(pTmpurl);
						url= Marshal.PtrToStringAnsi(__ptrurl);
						ClassFactory.FreeString(ref __ptrurl);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Download_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Download_URLSpeedManager_updateUrlSpeed_void_EVString_ev_int32(IntPtr pNativeObject, string url, int lastReqSpeed);

					public void UpdateUrlSpeed(string url, int lastReqSpeed)
					{
						EarthView_World_Spatial_Download_URLSpeedManager_updateUrlSpeed_void_EVString_ev_int32(this.NativeObject, url, lastReqSpeed);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download_d.so");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp_d.so");

						#else 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp.dll");

						#elif Linux 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download.so");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp.so");

						#else 
							private static bool bLoadUrlspeedmanager = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadUrlspeedmanager = LoadDll.Load("EV_Download_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::URLSpeedManager", new UrlspeedmanagerClassFactory());

					public Urlspeedmanager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Urlspeedmanager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Urlspeedmanager obj = baseObj as  Urlspeedmanager;
						if (object.Equals(obj, null))
						{
							obj = new Urlspeedmanager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "URLSpeedManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class UrlspeedmanagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Urlspeedmanager emptyInstance = new Urlspeedmanager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
