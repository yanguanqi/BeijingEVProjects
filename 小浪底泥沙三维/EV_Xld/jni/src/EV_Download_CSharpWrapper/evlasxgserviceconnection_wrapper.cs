/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Spatial.GeoDataset;
using EarthView.World.Core;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				public class Evlasxgserviceconnection : EarthView.World.Spatial.Download.WebServiceConnection
				{
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Evlasxgserviceconnection(ref string name, ref string url, ref string pluginFile) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						BasePtr valueurl = new BasePtr(url);
						list.Add("url", valueurl.PtrVal);
						BasePtr valuepluginFile = new BasePtr(pluginFile);
						list.Add("pluginFile", valuepluginFile.PtrVal);
						Create("EVLasXGServiceConnectionProxy", list);
						if (!"EarthView.World.Spatial.Download.Evlasxgserviceconnection".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_NoVirtual(IntPtr pNativeObject, IntPtr ref_pImp);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void SetConnectionImp_NoVirtual(EarthView.World.Spatial.Download.ConnectionImp ref_pImp)
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp_NoVirtual(this.NativeObject, object.Equals(ref_pImp, null) ? IntPtr.Zero : ref_pImp.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(IntPtr pNativeObject, IntPtr ref_pImp);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void SetConnectionImp(EarthView.World.Spatial.Download.ConnectionImp ref_pImp)
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(this.NativeObject, object.Equals(ref_pImp, null) ? IntPtr.Zero : ref_pImp.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 断开与web服务器的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					public new void CloseConnect_NoVirtual()
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(IntPtr pNativeObject);

					/// <summary>
					/// 断开与web服务器的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					public override void CloseConnect()
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					public new void OpenConnect_NoVirtual()
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(IntPtr pNativeObject);

					/// <summary>
					/// 连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>		
					public override void OpenConnect()
					{
						EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr(ref IntPtr servicename, IntPtr streamPackage);

					protected readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr streamPackage);

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadInitData_NoVirtual(string servicename, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadInitData(strservicename,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, IntPtr streamPackage);

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadInitData(string servicename, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage);

					protected readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadTileData_NoVirtual(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						string strurl= Marshal.PtrToStringAnsi(url);
						ClassFactory.FreeString(ref url);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadTileData(strservicename,strurl,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadTileData(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage);

					protected readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadDem_NoVirtual(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						string strurl= Marshal.PtrToStringAnsi(url);
						ClassFactory.FreeString(ref url);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadDem(strservicename,strurl,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadDem(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo(ref IntPtr servicename, IntPtr metadata);

					protected getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr metadata);

					/// <summary>
					/// 读取WFS元数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetWFSMetaData_NoVirtual(string servicename, ref  DataMetaInfo metadata)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(this.NativeObject, servicename, object.Equals(metadata, null) ? IntPtr.Zero : metadata.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Function(ref IntPtr servicename, IntPtr metadata)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						DataMetaInfo csobj_metadata = new DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_metadata.BindNativeObject(metadata,"CDataMetaInfo");
						csobj_metadata.Delegate = true;
						IClassFactory csobj_metadataClassFactory = GlobalClassFactoryMap.Get(csobj_metadata.GetCppInstanceTypeName());
						if (csobj_metadataClassFactory != null)
						{
							csobj_metadata.Delegate = true;
							csobj_metadata = csobj_metadataClassFactory.Create() as DataMetaInfo;
							csobj_metadata.BindNativeObject(metadata, "CDataMetaInfo");
							csobj_metadata.Delegate = true;
						}
						
						int csret=GetWFSMetaData(strservicename,ref csobj_metadata);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(IntPtr pNativeObject, string servicename, IntPtr metadata);

					/// <summary>
					/// 读取WFS元数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetWFSMetaData(string servicename, ref  DataMetaInfo metadata)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(this.NativeObject, servicename, object.Equals(metadata, null) ? IntPtr.Zero : metadata.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getFields_CallBack_ev_int32_EVString_CFields(ref IntPtr servicename, IntPtr fields);

					protected getFields_CallBack_ev_int32_EVString_CFields m_getFields_CallBack_ev_int32_EVString_CFields;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr fields);

					/// <summary>
					/// 读取字段数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFields_NoVirtual(string servicename, ref  Fields fields)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_NoVirtual(this.NativeObject, servicename, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Function(ref IntPtr servicename, IntPtr fields)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						Fields csobj_fields = new Fields(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_fields.BindNativeObject(fields,"CFields");
						csobj_fields.Delegate = true;
						IClassFactory csobj_fieldsClassFactory = GlobalClassFactoryMap.Get(csobj_fields.GetCppInstanceTypeName());
						if (csobj_fieldsClassFactory != null)
						{
							csobj_fields.Delegate = true;
							csobj_fields = csobj_fieldsClassFactory.Create() as Fields;
							csobj_fields.BindNativeObject(fields, "CFields");
							csobj_fields.Delegate = true;
						}
						
						int csret=GetFields(strservicename,ref csobj_fields);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(IntPtr pNativeObject, string servicename, IntPtr fields);

					/// <summary>
					/// 读取字段数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFields(string servicename, ref  Fields fields)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(this.NativeObject, servicename, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector(ref IntPtr servicename, int type, IntPtr featurevector);

					protected getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(IntPtr pNativeObject, string servicename, int type, IntPtr featurevector);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFeatures_NoVirtual(string servicename, int type, ref  EarthView.World.Spatial.Download.Evlasfeaturevector featurevector)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(this.NativeObject, servicename, type, object.Equals(featurevector, null) ? IntPtr.Zero : featurevector.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Function(ref IntPtr servicename, int type, IntPtr featurevector)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						EarthView.World.Spatial.Download.Evlasfeaturevector csobj_featurevector = new EarthView.World.Spatial.Download.Evlasfeaturevector(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_featurevector.BindNativeObject(featurevector,"EVLasFeatureVector");
						csobj_featurevector.Delegate = true;
						IClassFactory csobj_featurevectorClassFactory = GlobalClassFactoryMap.Get(csobj_featurevector.GetCppInstanceTypeName());
						if (csobj_featurevectorClassFactory != null)
						{
							csobj_featurevector.Delegate = true;
							csobj_featurevector = csobj_featurevectorClassFactory.Create() as EarthView.World.Spatial.Download.Evlasfeaturevector;
							csobj_featurevector.BindNativeObject(featurevector, "EVLasFeatureVector");
							csobj_featurevector.Delegate = true;
						}
						
						int csret=GetFeatures(strservicename,type, ref csobj_featurevector);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(IntPtr pNativeObject, string servicename, int type, IntPtr featurevector);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFeatures(string servicename, int type, ref  EarthView.World.Spatial.Download.Evlasfeaturevector featurevector)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(this.NativeObject, servicename, type, object.Equals(featurevector, null) ? IntPtr.Zero : featurevector.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_d.so");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp_d.so");

						#else 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp.dll");

						#elif Linux 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download.so");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp.so");

						#else 
							private static bool bLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadEvlasxgserviceconnection = LoadDll.Load("EV_Download_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnection", new EvlasxgserviceconnectionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionProxy", new EvlasxgserviceconnectionClassFactory());

					public Evlasxgserviceconnection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(IntPtr pObject, readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pObject, readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pObject, readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(IntPtr pObject, getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(IntPtr pObject, getFields_CallBack_ev_int32_EVString_CFields pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(IntPtr pObject, getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(IntPtr pObject, setConnectionImp_CallBack_void_ConnectionImp pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(IntPtr pObject, closeConnect_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(IntPtr pObject, openConnect_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readInitData_ev_int32_EVString_MemoryDataStreamPtr(this.NativeObject, m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr);
							m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo = EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Function;
							GC.KeepAlive(m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(this.NativeObject, m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo);
							m_getFields_CallBack_ev_int32_EVString_CFields = EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields_Function;
							GC.KeepAlive(m_getFields_CallBack_ev_int32_EVString_CFields);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFields_ev_int32_EVString_CFields(this.NativeObject, m_getFields_CallBack_ev_int32_EVString_CFields);
							m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector = EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Function;
							GC.KeepAlive(m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(this.NativeObject, m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector);
							m_setConnectionImp_CallBack_void_ConnectionImp = EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Function;
							GC.KeepAlive(m_setConnectionImp_CallBack_void_ConnectionImp);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_setConnectionImp_void_ConnectionImp(this.NativeObject, m_setConnectionImp_CallBack_void_ConnectionImp);
							m_closeConnect_CallBack_void = EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Function;
							GC.KeepAlive(m_closeConnect_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_closeConnect_void(this.NativeObject, m_closeConnect_CallBack_void);
							m_openConnect_CallBack_void = EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Function;
							GC.KeepAlive(m_openConnect_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnection_openConnect_void(this.NativeObject, m_openConnect_CallBack_void);
						}
					}
					public static Evlasxgserviceconnection FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Evlasxgserviceconnection obj = baseObj as  Evlasxgserviceconnection;
						if (object.Equals(obj, null))
						{
							obj = new Evlasxgserviceconnection(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "EVLasXGServiceConnection");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EvlasxgserviceconnectionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Evlasxgserviceconnection emptyInstance = new Evlasxgserviceconnection(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Evlasxgserviceconnectionimp : EarthView.World.Spatial.Download.ConnectionImp
				{
					public Evlasxgserviceconnectionimp() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("EVLasXGServiceConnectionImpProxy", null);
						if (!"EarthView.World.Spatial.Download.Evlasxgserviceconnectionimp".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr(ref IntPtr servicename, IntPtr streamPackage);

					protected readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr streamPackage);

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadInitData_NoVirtual(string servicename, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadInitData(strservicename,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, IntPtr streamPackage);

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadInitData(string servicename, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage);

					protected readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadTileData_NoVirtual(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, ref IntPtr url, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						string strurl= Marshal.PtrToStringAnsi(url);
						ClassFactory.FreeString(ref url);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadTileData(strservicename,strurl,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, string url, IntPtr streamPackage);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadTileData(string servicename, string url, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, url, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr(ref IntPtr servicename, ref IntPtr levelrowcols, IntPtr streamPackage);

					protected readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(IntPtr pNativeObject, string servicename, string levelrowcols, IntPtr streamPackage);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadDem_NoVirtual(string servicename, string levelrowcols, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.NativeObject, servicename, levelrowcols, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function(ref IntPtr servicename, ref IntPtr levelrowcols, IntPtr streamPackage)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						string strlevelrowcols= Marshal.PtrToStringAnsi(levelrowcols);
						ClassFactory.FreeString(ref levelrowcols);
						EarthView.World.Core.MemoryDataStreamPtr csobj_streamPackage = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_streamPackage.BindNativeObject(streamPackage,"MemoryDataStreamPtr");
						csobj_streamPackage.Delegate = true;
						IClassFactory csobj_streamPackageClassFactory = GlobalClassFactoryMap.Get(csobj_streamPackage.GetCppInstanceTypeName());
						if (csobj_streamPackageClassFactory != null)
						{
							csobj_streamPackage.Delegate = true;
							csobj_streamPackage = csobj_streamPackageClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csobj_streamPackage.BindNativeObject(streamPackage, "MemoryDataStreamPtr");
							csobj_streamPackage.Delegate = true;
						}
						
						int csret=ReadDem(strservicename,strlevelrowcols,ref csobj_streamPackage);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string servicename, string levelrowcols, IntPtr streamPackage);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int ReadDem(string servicename, string levelrowcols, ref  EarthView.World.Core.MemoryDataStreamPtr streamPackage)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, servicename, levelrowcols, object.Equals(streamPackage, null) ? IntPtr.Zero : streamPackage.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo(ref IntPtr servicename, IntPtr metadata);

					protected getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr metadata);

					/// <summary>
					/// 读取WFS元数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetWFSMetaData_NoVirtual(string servicename, ref  DataMetaInfo metadata)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(this.NativeObject, servicename, object.Equals(metadata, null) ? IntPtr.Zero : metadata.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Function(ref IntPtr servicename, IntPtr metadata)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						DataMetaInfo csobj_metadata = new DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_metadata.BindNativeObject(metadata,"CDataMetaInfo");
						csobj_metadata.Delegate = true;
						IClassFactory csobj_metadataClassFactory = GlobalClassFactoryMap.Get(csobj_metadata.GetCppInstanceTypeName());
						if (csobj_metadataClassFactory != null)
						{
							csobj_metadata.Delegate = true;
							csobj_metadata = csobj_metadataClassFactory.Create() as DataMetaInfo;
							csobj_metadata.BindNativeObject(metadata, "CDataMetaInfo");
							csobj_metadata.Delegate = true;
						}
						
						int csret=GetWFSMetaData(strservicename,ref csobj_metadata);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(IntPtr pNativeObject, string servicename, IntPtr metadata);

					/// <summary>
					/// 读取WFS元数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetWFSMetaData(string servicename, ref  DataMetaInfo metadata)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(this.NativeObject, servicename, object.Equals(metadata, null) ? IntPtr.Zero : metadata.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getFields_CallBack_ev_int32_EVString_CFields(ref IntPtr servicename, IntPtr fields);

					protected getFields_CallBack_ev_int32_EVString_CFields m_getFields_CallBack_ev_int32_EVString_CFields;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_NoVirtual(IntPtr pNativeObject, string servicename, IntPtr fields);

					/// <summary>
					/// 读取字段数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFields_NoVirtual(string servicename, ref  Fields fields)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_NoVirtual(this.NativeObject, servicename, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Function(ref IntPtr servicename, IntPtr fields)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						Fields csobj_fields = new Fields(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_fields.BindNativeObject(fields,"CFields");
						csobj_fields.Delegate = true;
						IClassFactory csobj_fieldsClassFactory = GlobalClassFactoryMap.Get(csobj_fields.GetCppInstanceTypeName());
						if (csobj_fieldsClassFactory != null)
						{
							csobj_fields.Delegate = true;
							csobj_fields = csobj_fieldsClassFactory.Create() as Fields;
							csobj_fields.BindNativeObject(fields, "CFields");
							csobj_fields.Delegate = true;
						}
						
						int csret=GetFields(strservicename,ref csobj_fields);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(IntPtr pNativeObject, string servicename, IntPtr fields);

					/// <summary>
					/// 读取字段数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFields(string servicename, ref  Fields fields)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(this.NativeObject, servicename, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector(ref IntPtr servicename, int type, IntPtr featurevector);

					protected getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector;

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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(IntPtr pNativeObject, string servicename, int type, IntPtr featurevector);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFeatures_NoVirtual(string servicename, int type, ref  EarthView.World.Spatial.Download.Evlasfeaturevector featurevector)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_NoVirtual(this.NativeObject, servicename, type, object.Equals(featurevector, null) ? IntPtr.Zero : featurevector.NativeObject);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Function(ref IntPtr servicename, int type, IntPtr featurevector)
					{
						string strservicename= Marshal.PtrToStringAnsi(servicename);
						ClassFactory.FreeString(ref servicename);
						EarthView.World.Spatial.Download.Evlasfeaturevector csobj_featurevector = new EarthView.World.Spatial.Download.Evlasfeaturevector(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_featurevector.BindNativeObject(featurevector,"EVLasFeatureVector");
						csobj_featurevector.Delegate = true;
						IClassFactory csobj_featurevectorClassFactory = GlobalClassFactoryMap.Get(csobj_featurevector.GetCppInstanceTypeName());
						if (csobj_featurevectorClassFactory != null)
						{
							csobj_featurevector.Delegate = true;
							csobj_featurevector = csobj_featurevectorClassFactory.Create() as EarthView.World.Spatial.Download.Evlasfeaturevector;
							csobj_featurevector.BindNativeObject(featurevector, "EVLasFeatureVector");
							csobj_featurevector.Delegate = true;
						}
						
						int csret=GetFeatures(strservicename,type, ref csobj_featurevector);
						
						return csret;
						
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
					private static extern int EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(IntPtr pNativeObject, string servicename, int type, IntPtr featurevector);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					public virtual int GetFeatures(string servicename, int type, ref  EarthView.World.Spatial.Download.Evlasfeaturevector featurevector)
					{
						int ret=EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(this.NativeObject, servicename, type, object.Equals(featurevector, null) ? IntPtr.Zero : featurevector.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_d.so");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp_d.so");

						#else 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_d.dll");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp.dll");

						#elif Linux 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download.so");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp.so");

						#else 
							private static bool bLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download.dll");
							private static bool csbLoadEvlasxgserviceconnectionimp = LoadDll.Load("EV_Download_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp", new EvlasxgserviceconnectionimpClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionImpProxy", new EvlasxgserviceconnectionimpClassFactory());

					public Evlasxgserviceconnectionimp(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(IntPtr pObject, readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pObject, readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(IntPtr pObject, readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(IntPtr pObject, getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(IntPtr pObject, getFields_CallBack_ev_int32_EVString_CFields pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(IntPtr pObject, getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool(IntPtr pObject, openConnection_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool(IntPtr pObject, closeConnection_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32(IntPtr pObject, setConnectTimeout_CallBack_void_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readInitData_ev_int32_EVString_MemoryDataStreamPtr(this.NativeObject, m_readInitData_CallBack_ev_int32_EVString_MemoryDataStreamPtr);
							m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readTileData_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, m_readTileData_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr_Function;
							GC.KeepAlive(m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_readDem_ev_int32_EVString_EVString_MemoryDataStreamPtr(this.NativeObject, m_readDem_CallBack_ev_int32_EVString_EVString_MemoryDataStreamPtr);
							m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Function;
							GC.KeepAlive(m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(this.NativeObject, m_getWFSMetaData_CallBack_ev_int32_EVString_CDataMetaInfo);
							m_getFields_CallBack_ev_int32_EVString_CFields = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields_Function;
							GC.KeepAlive(m_getFields_CallBack_ev_int32_EVString_CFields);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFields_ev_int32_EVString_CFields(this.NativeObject, m_getFields_CallBack_ev_int32_EVString_CFields);
							m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector = EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector_Function;
							GC.KeepAlive(m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_getFeatures_ev_int32_EVString_ev_int32_EVLasFeatureVector(this.NativeObject, m_getFeatures_CallBack_ev_int32_EVString_ev_int32_EVLasFeatureVector);
							m_openConnection_CallBack_ev_bool = EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Function;
							GC.KeepAlive(m_openConnection_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_openConnection_ev_bool(this.NativeObject, m_openConnection_CallBack_ev_bool);
							m_closeConnection_CallBack_ev_bool = EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Function;
							GC.KeepAlive(m_closeConnection_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_closeConnection_ev_bool(this.NativeObject, m_closeConnection_CallBack_ev_bool);
							m_setConnectTimeout_CallBack_void_ev_int32 = EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Function;
							GC.KeepAlive(m_setConnectTimeout_CallBack_void_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Download_EVLasXGServiceConnectionImp_setConnectTimeout_void_ev_int32(this.NativeObject, m_setConnectTimeout_CallBack_void_ev_int32);
						}
					}
					public override bool OpenConnection()
					{
						return base.OpenConnection_NoVirtual();
					}
					public override bool CloseConnection()
					{
						return base.CloseConnection_NoVirtual();
					}
					public override void SetConnectTimeout(int timeout)
					{
						base.SetConnectTimeout_NoVirtual(timeout);
					}
					public static Evlasxgserviceconnectionimp FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Evlasxgserviceconnectionimp obj = baseObj as  Evlasxgserviceconnectionimp;
						if (object.Equals(obj, null))
						{
							obj = new Evlasxgserviceconnectionimp(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "EVLasXGServiceConnectionImp");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EvlasxgserviceconnectionimpClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Evlasxgserviceconnectionimp emptyInstance = new Evlasxgserviceconnectionimp(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
