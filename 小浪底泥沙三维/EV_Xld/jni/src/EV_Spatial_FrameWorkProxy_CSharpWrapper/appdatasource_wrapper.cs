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
			public class AppDataSource : EarthView.World.Core.BaseObject
			{
				public enum DATASOURCETYPE
				{
								FileChart,
								FileKML,
								FileRaster,
								FileVector,
								FileSmart3D,
								FileMeshX,
								FileMeshXG,
								FileLas,
								DBModel,
								DBVector,
								DBEffect,
								DBRaster,
								WebEVServer,
								WebOGCWMSServer,
								WebOGCWMTSServer,
								WebOGCWFSServer
				
				}

				/// <summary>
				/// 构造函数。
				/// </summary>
				/// <returns></returns>
				public AppDataSource() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("AppDataSource",  null);
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
				private static extern byte EarthView_World_Utilities_AppDataSource_openDataSource_bool_EVString_DataSourceOption(IntPtr pNativeObject, string aliasName, IntPtr option);

				/// <summary>
				/// 打开数据源。
				/// </summary>
				/// <param name="aliasName">
				/// 给打开的数据源起的别名。
				/// 打开文件数据源时该参数不起作用，别名等于文件目录名（含路径）。
				/// </param>
				/// <param name="option">
				/// 数据源打开选项，按如下格式设置一个打开选项：
				///		DataSourceOption().open().数据库类型()【.数据库子类型()】（数据库打开参数）
				///
				/// 所有EarthView::World::Utilities::DataSourceOption选项的层级关系如下：
				///		DataSourceOption()
				///			.open()
				///				.db()
				///					.sqlite (filepath)
				///					.odbc	(ip, port, user, pasword, version)
				///					.oracle (ip, port, user, pasword)
				///				.file (dirpath)
				///				.web  (ip, port, user, pasword)
				///
				/// 例如打开一个sqlite类型的数据库数据源，使用如下代码：
				///		openDataSource("mysqlite", DataSourceOption().open().db().sqlite("c:\mysqlite.evd"));
				///	而打开一个网络数据源，使用如下代码：
				///		openDataSource("myEVServer", DataSourceOption().open().web("192.168.5.132", 8088, "ev", "ev123"));
				/// </param>
				/// <returns>打开是否成功。</returns>
				public bool OpenDataSource(string aliasName, EarthView.World.Utilities.DataSourceOption option)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_openDataSource_bool_EVString_DataSourceOption(this.NativeObject, aliasName, object.Equals(option, null) ? IntPtr.Zero : option.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Utilities_AppDataSource_getDataSource_IDataSource_EVString_DataSourceType(IntPtr pNativeObject, string dataSourceAliasName, EarthView.World.Utilities.AppDataSource.DATASOURCETYPE type);

				/// <summary>
				/// 获取数据源对象。
				/// </summary>
				/// <param name="aliasName">数据源的别名。</param>
				/// <param name="type">要获取的数据源的类型。</param>
				/// <returns>获取的数据源对象，失败返回0。</returns>
				public EarthView.World.Spatial.GeoDataset.Idatasource GetDataSource(string dataSourceAliasName, EarthView.World.Utilities.AppDataSource.DATASOURCETYPE type)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppDataSource_getDataSource_IDataSource_EVString_DataSourceType(this.NativeObject, dataSourceAliasName, type);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idatasource csObj = new EarthView.World.Spatial.GeoDataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataSource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idatasource;
						csObj.BindNativeObject(__ptr, "IDataSource");
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
				private static extern byte EarthView_World_Utilities_AppDataSource_closeDataSource_bool_EVString(IntPtr pNativeObject, string aliasName);

				/// <summary>
				/// 关闭数据源。
				/// </summary>
				/// <param name="aliasName">数据源的别名。</param>
				/// <returns>关闭是否成功。</returns>
				public bool CloseDataSource(string aliasName)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_closeDataSource_bool_EVString(this.NativeObject, aliasName);
					
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
				private static extern byte EarthView_World_Utilities_AppDataSource_deleteDataSource_bool_EVString(IntPtr pNativeObject, string aliasName);

				/// <summary>
				/// 删除数据源。
				/// </summary>
				/// <param name="aliasName">数据源的别名。</param>
				/// <returns>删除是否成功。</returns>
				public bool DeleteDataSource(string aliasName)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_deleteDataSource_bool_EVString(this.NativeObject, aliasName);
					
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
				private static extern byte EarthView_World_Utilities_AppDataSource_createDataSource_bool_EVString_DataSourceOption(IntPtr pNativeObject, string aliasName, IntPtr option);

				/// <summary>
				/// 创建数据源。
				/// </summary>
				/// <param name="aliasName">给创建的数据源起的别名。</param>
				/// <param name="option">
				/// 数据源创建选项，按如下格式设置一个创建选项：
				///		DataSourceOption().create().数据库类型()【.数据库子类型()】（数据库创建参数）
				///
				/// 所有EarthView::World::Utilities::DataSourceOption可能的设置如下：
				///		DataSourceOption()
				/// 		.create()
				///				.db()
				///					.sqlite (dirpath)
				///
				/// 例如创建一个sqlite类型的数据库数据源，使用如下代码：
				///		createDataSource("mysqlite", DataSourceOption().create().db().sqlite("c:\mysqlite.evd"));
				/// </param>
				/// <returns>创建是否成功。</returns>
				public bool CreateDataSource(string aliasName, EarthView.World.Utilities.DataSourceOption option)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_createDataSource_bool_EVString_DataSourceOption(this.NativeObject, aliasName, object.Equals(option, null) ? IntPtr.Zero : option.NativeObject);
					
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
				private static extern byte EarthView_World_Utilities_AppDataSource_createDataset_bool_EVString_EVString_DatasetOption(IntPtr pNativeObject, string dataSourceAliasName, string datasetName, IntPtr option);

				/// <summary>
				/// 创建数据集。
				/// 需要注意的是创建数据集只是在数据源中创建，不能立即获取到EarthView::World::Spatial::GeoDataset::IDataset对象，
				/// 需要调用openDataset()才能获取EarthView::World::Spatial::GeoDataset::IDataset对象。
				/// 你也可以通过getDataset()获取一个已经打开的数据集对象。
				/// </summary>
				/// <param name="dataSourceAliasName">数据源的别名。</param>
				/// <param name="datasetName">
				/// 要创建的数据集的名称。
				/// 对于KML数据集，会根据创建的KML数据集类型在数据集名称后添加后缀。
				/// </param>
				/// <param name="option">
				/// 数据集创建选项，按如下格式设置一个打开选项：
				///		DatasetOption().create().数据库类型()【.数据库子类型()】（数据集创建参数）
				///
				/// 创建数据集的层级关系如下：
				///		DatasetOption()
				///			.create()
				///				.db()
				///					.vector (EVGeometryType, EVWellKnownGeoCSType/EVWellKnownProjCSType)
				///					.model  (CFields&, ModelDatasetType, EVWellKnownGeoCSType/EVWellKnownProjCSType)
				///					.effect (EVWellKnownGeoCSType/EVWellKnownProjCSType)
				///				.file()
				///					.kml(KMLDatasetType)
				///
				/// 例如，创建一个特效（effect）类型的数据库数据源，使用如下代码：
				///		createDataset("mysqlite", "mydataset", 
				///			DatasetOption().create().db().effect(GEO_Beijing54));
				/// </param>
				/// <returns>创建是否成功。</returns>
				public bool CreateDataset(string dataSourceAliasName, string datasetName, EarthView.World.Utilities.DatasetOption option)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_createDataset_bool_EVString_EVString_DatasetOption(this.NativeObject, dataSourceAliasName, datasetName, object.Equals(option, null) ? IntPtr.Zero : option.NativeObject);
					
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
				private static extern byte EarthView_World_Utilities_AppDataSource_deleteDataset_bool_EVString_EVString(IntPtr pNativeObject, string dataSourceAliasName, string datasetName);

				/// <summary>
				/// 删除数据集。
				/// </summary>
				/// <param name="dataSourceAliasName">数据源的别名。</param>
				/// <param name="datasetName">数据集的别名。</param>
				/// <returns>删除是否成功。</returns>
				public bool DeleteDataset(string dataSourceAliasName, string datasetName)
				{
					byte ret=EarthView_World_Utilities_AppDataSource_deleteDataset_bool_EVString_EVString(this.NativeObject, dataSourceAliasName, datasetName);
					
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
				private static extern IntPtr EarthView_World_Utilities_AppDataSource_openDataset_IDataset_EVString_EVString(IntPtr pNativeObject, string dataSourceAliasName, string datasetName);

				/// <summary>
				/// 打开数据集。
				/// </summary>
				/// <param name="dataSourceAliasName">数据源的别名。</param>
				/// <param name="datasetName">数据集的别名。</param>
				/// <returns>打开的EarthView::World::Spatial::GeoDataset::IDataset数据集对象。</returns>
				public EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(string dataSourceAliasName, string datasetName)
				{
					IntPtr __ptr = EarthView_World_Utilities_AppDataSource_openDataset_IDataset_EVString_EVString(this.NativeObject, dataSourceAliasName, datasetName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDataset");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
						csObj.BindNativeObject(__ptr, "IDataset");
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
				private static extern IntPtr EarthView_World_Utilities_AppDataSource_getLastErrorString_EVString();

				/// <summary>
				/// 获取数据集对象。
				/// </summary>
				/// <param name="dataSourceAliasName">数据源的别名。</param>
				/// <param name="datasetName">数据集的别名。</param>
				/// <returns>获取的EarthView::World::Spatial::GeoDataset::IDataset数据集对象。</returns>
				//EarthView::World::Spatial::GeoDataset::IDataset* getDataset(const EVString& dataSourceAliasName, const EVString& datasetName);
				/// <summary>
				/// 获取错误信息。在任何一个方法返回false之后通过此函数获取错误信息。
				/// ***注意该函数为静态方法，意味着本类对象析构后仍然可以正确获取错误信息。
				/// </summary>
				/// <returns>错误信息。</returns>
				public static string GetLastErrorString()
				{
					IntPtr __ptr = EarthView_World_Utilities_AppDataSource_getLastErrorString_EVString();
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

					#else 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#elif Linux 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

					#else 
						private static bool bLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
						private static bool csbLoadAppDataSource = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Utilities::AppDataSource", new AppDataSourceClassFactory());

				public AppDataSource(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static AppDataSource FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AppDataSource obj = baseObj as  AppDataSource;
					if (object.Equals(obj, null))
					{
						obj = new AppDataSource(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "AppDataSource");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AppDataSourceClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AppDataSource emptyInstance = new AppDataSource(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
