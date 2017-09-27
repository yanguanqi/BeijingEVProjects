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
		namespace Utilities
		{
			public enum WEBSERVERTYPE
			{
						EarthViewServer,
						OGC_WMTS,
						OGC_WMS,
						OGC_WFS,
						Other
			
			}

			public class DataSourceOption : EarthView.World.Core.BaseObject
			{
				/// <summary>
				/// 构造函数。
				/// </summary>
				/// <returns></returns>
				public DataSourceOption() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("DataSourceOption",  null);
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_open_DataSourceOption_Open(IntPtr pNativeObject);

				/// <summary>
				/// 设置一个打开数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOptionOpen Open()
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_open_DataSourceOption_Open(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOptionOpen csObj = new EarthView.World.Utilities.DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption_Open");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOptionOpen;
						csObj.BindNativeObject(__ptr, "DataSourceOption_Open");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_create_DataSourceOption_Create(IntPtr pNativeObject);

				/// <summary>
				/// 设置一个创建数据源的选项，具体请见AppDataSource::createDataSource()。
				/// </summary>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOptionCreate Create()
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_create_DataSourceOption_Create(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOptionCreate csObj = new EarthView.World.Utilities.DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption_Create");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOptionCreate;
						csObj.BindNativeObject(__ptr, "DataSourceOption_Create");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOption = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption", new DataSourceOptionClassFactory());

				public DataSourceOption(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataSourceOption FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceOption obj = baseObj as  DataSourceOption;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DataSourceOption");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceOptionClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceOption emptyInstance = new DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DataSourceOptionOpenDb : EarthView.World.Core.BaseObject
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_DB_sqlite_DataSourceOption_EVString(IntPtr pNativeObject, string filepath);

				/// <summary>
				/// 设置一个打开sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption Sqlite(string filepath)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_DB_sqlite_DataSourceOption_EVString(this.NativeObject, filepath);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_DB_odbc_DataSourceOption_EVString_int_EVString_EVString(IntPtr pNativeObject, string ip, int port, string user, string password);

				/// <summary>
				/// 设置一个打开odbc数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <param name="ip">服务器IP地址。</param>
				/// <param name="port">服务器端口。</param>
				/// <param name="user">数据库用户名。</param>
				/// <param name="password">数据库密码。</param>
				/// <param name="ver">SQLServer数据库的版本。</param>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption Odbc(string ip, int port, string user, string password)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_DB_odbc_DataSourceOption_EVString_int_EVString_EVString(this.NativeObject, ip, port, user, password);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_DB_oracle_DataSourceOption_EVString_int_EVString_EVString(IntPtr pNativeObject, string ip, int port, string user, string password);

				/// <summary>
				/// 设置一个打开oracle数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <param name="ip">服务器IP地址。</param>
				/// <param name="port">服务器端口。</param>
				/// <param name="user">数据库用户名。</param>
				/// <param name="password">数据库密码。</param>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption Oracle(string ip, int port, string user, string password)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_DB_oracle_DataSourceOption_EVString_int_EVString_EVString(this.NativeObject, ip, port, user, password);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionOpenDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Open_DB", new DataSourceOptionOpenDbClassFactory());

				public DataSourceOptionOpenDb(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataSourceOptionOpenDb FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceOptionOpenDb obj = baseObj as  DataSourceOptionOpenDb;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DataSourceOption_Open_DB");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceOptionOpenDbClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceOptionOpenDb emptyInstance = new DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DataSourceOptionCreateDb : EarthView.World.Core.BaseObject
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Create_DB_sqlite_DataSourceOption_EVString(IntPtr pNativeObject, string filepath);

				/// <summary>
				/// 设置一个创建sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <param name="filepath">sqlite数据库文件路径。</param>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption Sqlite(string filepath)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Create_DB_sqlite_DataSourceOption_EVString(this.NativeObject, filepath);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionCreateDb = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Create_DB", new DataSourceOptionCreateDbClassFactory());

				public DataSourceOptionCreateDb(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataSourceOptionCreateDb FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceOptionCreateDb obj = baseObj as  DataSourceOptionCreateDb;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DataSourceOption_Create_DB");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceOptionCreateDbClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceOptionCreateDb emptyInstance = new DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DataSourceOptionOpen : EarthView.World.Core.BaseObject
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_db_DataSourceOption_Open_DB(IntPtr pNativeObject);

				/// <summary>
				/// 设置一个打开数据库数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOptionOpenDb Db()
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_db_DataSourceOption_Open_DB(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOptionOpenDb csObj = new EarthView.World.Utilities.DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption_Open_DB");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOptionOpenDb;
						csObj.BindNativeObject(__ptr, "DataSourceOption_Open_DB");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_file_DataSourceOption_EVString(IntPtr pNativeObject, string dirPath);

				/// <summary>
				/// 设置一个打开文件数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <param name="dirPath">
				/// 文件数据源的目录。
				/// 需要注意的是打开文件数据源时指定别名无效，数据库的别名就是目录名。
				/// </param>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption File(string dirPath)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_file_DataSourceOption_EVString(this.NativeObject, dirPath);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_int_EVString_EVString_EVString_WebServerType(IntPtr pNativeObject, string ip, int port, string user, string password, string pluginFile, EarthView.World.Utilities.WEBSERVERTYPE serverType);

				/// <summary>
				/// 设置一个打开网络数据源的选项，具体请见AppDataSource::openDataSource()。
				/// </summary>
				/// <param name="ip">服务器IP地址。</param>
				/// <param name="port">服务器端口。</param>
				/// <param name="user">数据库用户名。</param>
				/// <param name="password">数据库密码。</param>
				/// <param name="serverType">
				/// 服务器类型，根据此类型使用相应的服务器访问插件。
				/// 对于EV的服务器，就使用EarthViewServer即可。
				/// </param>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOption Web(string ip, int port, string user, string password, string pluginFile, EarthView.World.Utilities.WEBSERVERTYPE serverType)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_int_EVString_EVString_EVString_WebServerType(this.NativeObject, ip, port, user, password, pluginFile, serverType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_EVString_EVString_EVString_WebServerType(IntPtr pNativeObject, string url, string user, string password, string pluginFile, EarthView.World.Utilities.WEBSERVERTYPE serverType);

				public EarthView.World.Utilities.DataSourceOption Web(string url, string user, string password, string pluginFile, EarthView.World.Utilities.WEBSERVERTYPE serverType)
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_EVString_EVString_EVString_WebServerType(this.NativeObject, url, user, password, pluginFile, serverType);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOption csObj = new EarthView.World.Utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOption;
						csObj.BindNativeObject(__ptr, "DataSourceOption");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionOpen = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Open", new DataSourceOptionOpenClassFactory());

				public DataSourceOptionOpen(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataSourceOptionOpen FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceOptionOpen obj = baseObj as  DataSourceOptionOpen;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DataSourceOption_Open");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceOptionOpenClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceOptionOpen emptyInstance = new DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class DataSourceOptionCreate : EarthView.World.Core.BaseObject
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
				private static extern IntPtr EarthView_World_Utilities_DataSourceOption_Create_db_DataSourceOption_Create_DB(IntPtr pNativeObject);

				/// <summary>
				/// 设置一个创建数据库数据源的选项，具体请见AppDataSource::createDataSource()。
				/// </summary>
				/// <returns></returns>
				public EarthView.World.Utilities.DataSourceOptionCreateDb Db()
				{
					IntPtr __ptr = EarthView_World_Utilities_DataSourceOption_Create_db_DataSourceOption_Create_DB(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Utilities.DataSourceOptionCreateDb csObj = new EarthView.World.Utilities.DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "DataSourceOption_Create_DB");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Utilities.DataSourceOptionCreateDb;
						csObj.BindNativeObject(__ptr, "DataSourceOption_Create_DB");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadDataSourceOptionCreate = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Create", new DataSourceOptionCreateClassFactory());

				public DataSourceOptionCreate(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DataSourceOptionCreate FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceOptionCreate obj = baseObj as  DataSourceOptionCreate;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "DataSourceOption_Create");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceOptionCreateClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceOptionCreate emptyInstance = new DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
