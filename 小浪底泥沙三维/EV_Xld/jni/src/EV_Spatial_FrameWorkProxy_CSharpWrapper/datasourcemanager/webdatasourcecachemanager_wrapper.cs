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
			namespace DataSourceManager
			{
				public class WebDataSourceCacheManager : EarthView.World.Core.AllocatedObject
				{

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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_instance_CWebDataSourceCacheManager();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static EarthView.World.FrameWorkProxy.DataSourceManager.WebDataSourceCacheManager Instance()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_instance_CWebDataSourceCacheManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.WebDataSourceCacheManager csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CWebDataSourceCacheManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.WebDataSourceCacheManager;
							csObj.BindNativeObject(__ptr, "CWebDataSourceCacheManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public WebDataSourceCacheManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CWebDataSourceCacheManager",  null);
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_setUsingCacheURL_void_EVString_ev_bool(IntPtr pNativeObject, string url, byte isUsingCache);

					/// <summary>
					/// 设置给定的url是否使用缓存，如果isUsingCache为true只用缓存中的元数据信息，否则从服务器端下载元数据信息。
					/// url格式  CDataSourceURL::getURL() 函数获取
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void SetUsingCacheURL(string url, bool isUsingCache)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_setUsingCacheURL_void_EVString_ev_bool(this.NativeObject, url, Convert.ToByte(isUsingCache));
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_isUsingCacheURL_ev_bool_EVString(IntPtr pNativeObject, string url);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public bool IsUsingCacheURL(string url)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_isUsingCacheURL_ev_bool_EVString(this.NativeObject, url);
						
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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_getCachedURLList_StringVector(IntPtr pNativeObject);

					/// <summary>
					/// 获取当前缓存路径下已经缓存过数据的web服务URL列表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Core.StringVector GetCachedURLList()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_getCachedURLList_StringVector(this.NativeObject);
						
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
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadWebDataSourceCacheManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager", new WebDataSourceCacheManagerClassFactory());

					public WebDataSourceCacheManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static WebDataSourceCacheManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						WebDataSourceCacheManager obj = baseObj as  WebDataSourceCacheManager;
						if (object.Equals(obj, null))
						{
							obj = new WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CWebDataSourceCacheManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class WebDataSourceCacheManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						WebDataSourceCacheManager emptyInstance = new WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
