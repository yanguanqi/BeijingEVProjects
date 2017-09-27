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
			/// <summary>
			/// 
			/// </summary>
			public class Evspatialserverurlcachevisitor : BaseObject
			{

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_instance_CEVSpatialServerURLCacheVisitor();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public static EarthView.World.Spatial.Evspatialserverurlcachevisitor Instance()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_instance_CEVSpatialServerURLCacheVisitor();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Evspatialserverurlcachevisitor csObj = new EarthView.World.Spatial.Evspatialserverurlcachevisitor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CEVSpatialServerURLCacheVisitor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Evspatialserverurlcachevisitor;
						csObj.BindNativeObject(__ptr, "CEVSpatialServerURLCacheVisitor");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_addUsingCacheURL_void_EVString_EVString(IntPtr pNativeObject, string url, string servername);

				/// <summary>
				/// url<ip:port>
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void AddUsingCacheURL(string url, string servername)
				{
					EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_addUsingCacheURL_void_EVString_EVString(this.NativeObject, url, servername);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_removeUsingCacheURL_void_EVString_EVString(IntPtr pNativeObject, string url, string servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void RemoveUsingCacheURL(string url, string servername)
				{
					EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_removeUsingCacheURL_void_EVString_EVString(this.NativeObject, url, servername);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_isUsingCacheURL_ev_bool_EVString_EVString(IntPtr pNativeObject, string url, string servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public bool IsUsingCacheURL(string url, string servername)
				{
					byte ret=EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_isUsingCacheURL_ev_bool_EVString_EVString(this.NativeObject, url, servername);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_readURLListFromCache_StringVector(IntPtr pNativeObject);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns>servernameu@url</returns>
				public EarthView.World.Core.StringVector ReadURLListFromCache()
				{
					IntPtr __ptr = EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_readURLListFromCache_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialServerClient_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_writeURLToCache_void_EVString_EVString(IntPtr pNativeObject, string url, string servername);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void WriteURLToCache(string url, string servername)
				{
					EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_writeURLToCache_void_EVString_EVString(this.NativeObject, url, servername);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadEvspatialserverurlcachevisitor = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor", new EvspatialserverurlcachevisitorClassFactory());

				public Evspatialserverurlcachevisitor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Evspatialserverurlcachevisitor FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Evspatialserverurlcachevisitor obj = baseObj as  Evspatialserverurlcachevisitor;
					if (object.Equals(obj, null))
					{
						obj = new Evspatialserverurlcachevisitor(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CEVSpatialServerURLCacheVisitor");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class EvspatialserverurlcachevisitorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Evspatialserverurlcachevisitor emptyInstance = new Evspatialserverurlcachevisitor(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
