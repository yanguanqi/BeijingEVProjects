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
			/// 服务连接类工厂
			/// </summary>
			public class DataSourceServerFactory : EarthView.World.Spatial.GeoDataset.Idatasourcefactory
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
				private static extern byte EarthView_World_Spatial_CDataSourceServerFactory_close_ev_bool_IDataSource(IntPtr pNativeObject, IntPtr server);

				/// <summary>
				/// 关闭服务
				/// </summary>
				/// <param name="server">所要关闭的服务</param>
				/// <returns>成功返回true，否则返回false</returns>
				public bool Close(EarthView.World.Spatial.GeoDataset.Idatasource server)
				{
					byte ret=EarthView_World_Spatial_CDataSourceServerFactory_close_ev_bool_IDataSource(this.NativeObject, object.Equals(server, null) ? IntPtr.Zero : server.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public new void DestroyDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public override void DestroyDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern int EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public new int GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public override int GetType()
				{
					int ret=EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML_NoVirtual(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(this.NativeObject, xml);
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, xml);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr open_CallBack_IDataSource_CServerConnection(IntPtr connection);

				protected open_CallBack_IDataSource_CServerConnection m_open_CallBack_IDataSource_CServerConnection;

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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open_NoVirtual(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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

				protected  IntPtr EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Function(IntPtr connection)
				{
					EarthView.World.Spatial.ServerConnection csobj_connection = new EarthView.World.Spatial.ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_connection.BindNativeObject(connection,"CServerConnection");
					csobj_connection.Delegate = true;
					IClassFactory csobj_connectionClassFactory = GlobalClassFactoryMap.Get(csobj_connection.GetCppInstanceTypeName());
					if (csobj_connectionClassFactory != null)
					{
						csobj_connection.Delegate = true;
						csobj_connection = csobj_connectionClassFactory.Create() as EarthView.World.Spatial.ServerConnection;
						csobj_connection.BindNativeObject(connection, "CServerConnection");
						csobj_connection.Delegate = true;
					}
					
					EarthView.World.Spatial.GeoDataset.Idatasource csret=Open(csobj_connection);
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_CDataSourceServerFactory_getInstance_CDataSourceServerFactory();

				/// <summary>
				/// 获取对象指针
				/// </summary>
				/// <returns>对象指针</returns>
				public static EarthView.World.Spatial.DataSourceServerFactory GetInstance()
				{
					IntPtr __ptr = EarthView_World_Spatial_CDataSourceServerFactory_getInstance_CDataSourceServerFactory();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.DataSourceServerFactory csObj = new EarthView.World.Spatial.DataSourceServerFactory(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDataSourceServerFactory");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.DataSourceServerFactory;
						csObj.BindNativeObject(__ptr, "CDataSourceServerFactory");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadDataSourceServerFactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CDataSourceServerFactory", new DataSourceServerFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CDataSourceServerFactoryProxy", new DataSourceServerFactoryClassFactory());

				public DataSourceServerFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pObject, open_CallBack_IDataSource_CServerConnection pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pObject, createFromXML_CallBack_IDataSource_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(IntPtr pObject, openDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(IntPtr pObject, openDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(IntPtr pObject, createDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pObject, createDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pObject, destroyDataSource_CallBack_void_IDataSource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource(IntPtr pObject, existDataSource_CallBack_ev_bool_IDataSource pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_open_CallBack_IDataSource_CServerConnection = EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Function;
						GC.KeepAlive(m_open_CallBack_IDataSource_CServerConnection);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, m_open_CallBack_IDataSource_CServerConnection);
						m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Function;
						GC.KeepAlive(m_getType_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
						m_createFromXML_CallBack_IDataSource_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Function;
						GC.KeepAlive(m_createFromXML_CallBack_IDataSource_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, m_createFromXML_CallBack_IDataSource_EVString);
						m_openDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(this.NativeObject, m_openDataSource_CallBack_IDataSource_EVString_EVString);
						m_openDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(this.NativeObject, m_openDataSource_CallBack_IDataSource_IPropertySet);
						m_createDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(this.NativeObject, m_createDataSource_CallBack_IDataSource_EVString_EVString);
						m_createDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, m_createDataSource_CallBack_IDataSource_IPropertySet);
						m_destroyDataSource_CallBack_void_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Function;
						GC.KeepAlive(m_destroyDataSource_CallBack_void_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, m_destroyDataSource_CallBack_void_IDataSource);
						m_existDataSource_CallBack_ev_bool_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Function;
						GC.KeepAlive(m_existDataSource_CallBack_ev_bool_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource(this.NativeObject, m_existDataSource_CallBack_ev_bool_IDataSource);
					}
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(string path, string fileName)
				{
					return base.OpenDataSource_NoVirtual(path,fileName);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					return base.OpenDataSource_NoVirtual(connection);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(string path, string fileName)
				{
					return base.CreateDataSource_NoVirtual(path,fileName);
				}
				public override bool ExistDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					return base.ExistDataSource_NoVirtual(pDataSource);
				}
				public static DataSourceServerFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DataSourceServerFactory obj = baseObj as  DataSourceServerFactory;
					if (object.Equals(obj, null))
					{
						obj = new DataSourceServerFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDataSourceServerFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DataSourceServerFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DataSourceServerFactory emptyInstance = new DataSourceServerFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class Ogcwmsdatasourceserverfactory : EarthView.World.Spatial.GeoDataset.Idatasourcefactory
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
				private static extern byte EarthView_World_Spatial_COGCWMSDataSourceServerFactory_close_ev_bool_IDataSource(IntPtr pNativeObject, IntPtr server);

				/// <summary>
				/// 关闭服务
				/// </summary>
				/// <param name="server">所要关闭的服务</param>
				/// <returns>成功返回true，否则返回false</returns>
				public bool Close(EarthView.World.Spatial.GeoDataset.Idatasource server)
				{
					byte ret=EarthView_World_Spatial_COGCWMSDataSourceServerFactory_close_ev_bool_IDataSource(this.NativeObject, object.Equals(server, null) ? IntPtr.Zero : server.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public new void DestroyDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public override void DestroyDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern int EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public new int GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public override int GetType()
				{
					int ret=EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML_NoVirtual(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(this.NativeObject, xml);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, xml);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr open_CallBack_IDataSource_CServerConnection(IntPtr connection);

				protected open_CallBack_IDataSource_CServerConnection m_open_CallBack_IDataSource_CServerConnection;

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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open_NoVirtual(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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

				protected  IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Function(IntPtr connection)
				{
					EarthView.World.Spatial.ServerConnection csobj_connection = new EarthView.World.Spatial.ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_connection.BindNativeObject(connection,"CServerConnection");
					csobj_connection.Delegate = true;
					IClassFactory csobj_connectionClassFactory = GlobalClassFactoryMap.Get(csobj_connection.GetCppInstanceTypeName());
					if (csobj_connectionClassFactory != null)
					{
						csobj_connection.Delegate = true;
						csobj_connection = csobj_connectionClassFactory.Create() as EarthView.World.Spatial.ServerConnection;
						csobj_connection.BindNativeObject(connection, "CServerConnection");
						csobj_connection.Delegate = true;
					}
					
					EarthView.World.Spatial.GeoDataset.Idatasource csret=Open(csobj_connection);
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getInstance_COGCWMSDataSourceServerFactory();

				/// <summary>
				/// 获取对象指针
				/// </summary>
				/// <returns>对象指针</returns>
				public static EarthView.World.Spatial.Ogcwmsdatasourceserverfactory GetInstance()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getInstance_COGCWMSDataSourceServerFactory();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmsdatasourceserverfactory csObj = new EarthView.World.Spatial.Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMSDataSourceServerFactory");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmsdatasourceserverfactory;
						csObj.BindNativeObject(__ptr, "COGCWMSDataSourceServerFactory");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMSDataSourceServerFactory", new OgcwmsdatasourceserverfactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMSDataSourceServerFactoryProxy", new OgcwmsdatasourceserverfactoryClassFactory());

				public Ogcwmsdatasourceserverfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pObject, open_CallBack_IDataSource_CServerConnection pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pObject, createFromXML_CallBack_IDataSource_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(IntPtr pObject, openDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(IntPtr pObject, openDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(IntPtr pObject, createDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pObject, createDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pObject, destroyDataSource_CallBack_void_IDataSource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(IntPtr pObject, existDataSource_CallBack_ev_bool_IDataSource pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_open_CallBack_IDataSource_CServerConnection = EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Function;
						GC.KeepAlive(m_open_CallBack_IDataSource_CServerConnection);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, m_open_CallBack_IDataSource_CServerConnection);
						m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Function;
						GC.KeepAlive(m_getType_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
						m_createFromXML_CallBack_IDataSource_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Function;
						GC.KeepAlive(m_createFromXML_CallBack_IDataSource_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, m_createFromXML_CallBack_IDataSource_EVString);
						m_openDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(this.NativeObject, m_openDataSource_CallBack_IDataSource_EVString_EVString);
						m_openDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(this.NativeObject, m_openDataSource_CallBack_IDataSource_IPropertySet);
						m_createDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(this.NativeObject, m_createDataSource_CallBack_IDataSource_EVString_EVString);
						m_createDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, m_createDataSource_CallBack_IDataSource_IPropertySet);
						m_destroyDataSource_CallBack_void_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Function;
						GC.KeepAlive(m_destroyDataSource_CallBack_void_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, m_destroyDataSource_CallBack_void_IDataSource);
						m_existDataSource_CallBack_ev_bool_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Function;
						GC.KeepAlive(m_existDataSource_CallBack_ev_bool_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(this.NativeObject, m_existDataSource_CallBack_ev_bool_IDataSource);
					}
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(string path, string fileName)
				{
					return base.OpenDataSource_NoVirtual(path,fileName);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					return base.OpenDataSource_NoVirtual(connection);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(string path, string fileName)
				{
					return base.CreateDataSource_NoVirtual(path,fileName);
				}
				public override bool ExistDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					return base.ExistDataSource_NoVirtual(pDataSource);
				}
				public static Ogcwmsdatasourceserverfactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmsdatasourceserverfactory obj = baseObj as  Ogcwmsdatasourceserverfactory;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMSDataSourceServerFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmsdatasourceserverfactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmsdatasourceserverfactory emptyInstance = new Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class Ogcwmtsdatasourceserverfactory : EarthView.World.Spatial.GeoDataset.Idatasourcefactory
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
				private static extern byte EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_close_ev_bool_IDataSource(IntPtr pNativeObject, IntPtr server);

				/// <summary>
				/// 关闭服务
				/// </summary>
				/// <param name="server">所要关闭的服务</param>
				/// <returns>成功返回true，否则返回false</returns>
				public bool Close(EarthView.World.Spatial.GeoDataset.Idatasource server)
				{
					byte ret=EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_close_ev_bool_IDataSource(this.NativeObject, object.Equals(server, null) ? IntPtr.Zero : server.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public new void DestroyDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public override void DestroyDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern int EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public new int GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public override int GetType()
				{
					int ret=EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML_NoVirtual(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(this.NativeObject, xml);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, xml);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr open_CallBack_IDataSource_CServerConnection(IntPtr connection);

				protected open_CallBack_IDataSource_CServerConnection m_open_CallBack_IDataSource_CServerConnection;

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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open_NoVirtual(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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

				protected  IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Function(IntPtr connection)
				{
					EarthView.World.Spatial.ServerConnection csobj_connection = new EarthView.World.Spatial.ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_connection.BindNativeObject(connection,"CServerConnection");
					csobj_connection.Delegate = true;
					IClassFactory csobj_connectionClassFactory = GlobalClassFactoryMap.Get(csobj_connection.GetCppInstanceTypeName());
					if (csobj_connectionClassFactory != null)
					{
						csobj_connection.Delegate = true;
						csobj_connection = csobj_connectionClassFactory.Create() as EarthView.World.Spatial.ServerConnection;
						csobj_connection.BindNativeObject(connection, "CServerConnection");
						csobj_connection.Delegate = true;
					}
					
					EarthView.World.Spatial.GeoDataset.Idatasource csret=Open(csobj_connection);
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getInstance_COGCWMTSDataSourceServerFactory();

				/// <summary>
				/// 获取对象指针
				/// </summary>
				/// <returns>对象指针</returns>
				public static EarthView.World.Spatial.Ogcwmtsdatasourceserverfactory GetInstance()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getInstance_COGCWMTSDataSourceServerFactory();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwmtsdatasourceserverfactory csObj = new EarthView.World.Spatial.Ogcwmtsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWMTSDataSourceServerFactory");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwmtsdatasourceserverfactory;
						csObj.BindNativeObject(__ptr, "COGCWMTSDataSourceServerFactory");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwmtsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMTSDataSourceServerFactory", new OgcwmtsdatasourceserverfactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWMTSDataSourceServerFactoryProxy", new OgcwmtsdatasourceserverfactoryClassFactory());

				public Ogcwmtsdatasourceserverfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pObject, open_CallBack_IDataSource_CServerConnection pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pObject, createFromXML_CallBack_IDataSource_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(IntPtr pObject, openDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(IntPtr pObject, openDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(IntPtr pObject, createDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pObject, createDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pObject, destroyDataSource_CallBack_void_IDataSource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(IntPtr pObject, existDataSource_CallBack_ev_bool_IDataSource pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_open_CallBack_IDataSource_CServerConnection = EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Function;
						GC.KeepAlive(m_open_CallBack_IDataSource_CServerConnection);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, m_open_CallBack_IDataSource_CServerConnection);
						m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Function;
						GC.KeepAlive(m_getType_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
						m_createFromXML_CallBack_IDataSource_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Function;
						GC.KeepAlive(m_createFromXML_CallBack_IDataSource_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, m_createFromXML_CallBack_IDataSource_EVString);
						m_openDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(this.NativeObject, m_openDataSource_CallBack_IDataSource_EVString_EVString);
						m_openDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(this.NativeObject, m_openDataSource_CallBack_IDataSource_IPropertySet);
						m_createDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(this.NativeObject, m_createDataSource_CallBack_IDataSource_EVString_EVString);
						m_createDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, m_createDataSource_CallBack_IDataSource_IPropertySet);
						m_destroyDataSource_CallBack_void_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Function;
						GC.KeepAlive(m_destroyDataSource_CallBack_void_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, m_destroyDataSource_CallBack_void_IDataSource);
						m_existDataSource_CallBack_ev_bool_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Function;
						GC.KeepAlive(m_existDataSource_CallBack_ev_bool_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(this.NativeObject, m_existDataSource_CallBack_ev_bool_IDataSource);
					}
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(string path, string fileName)
				{
					return base.OpenDataSource_NoVirtual(path,fileName);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					return base.OpenDataSource_NoVirtual(connection);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(string path, string fileName)
				{
					return base.CreateDataSource_NoVirtual(path,fileName);
				}
				public override bool ExistDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					return base.ExistDataSource_NoVirtual(pDataSource);
				}
				public static Ogcwmtsdatasourceserverfactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwmtsdatasourceserverfactory obj = baseObj as  Ogcwmtsdatasourceserverfactory;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwmtsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWMTSDataSourceServerFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwmtsdatasourceserverfactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwmtsdatasourceserverfactory emptyInstance = new Ogcwmtsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class Ogcwfsdatasourceserverfactory : EarthView.World.Spatial.GeoDataset.Idatasourcefactory
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
				private static extern byte EarthView_World_Spatial_COGCWFSDataSourceServerFactory_close_ev_bool_IDataSource(IntPtr pNativeObject, IntPtr server);

				/// <summary>
				/// 关闭服务
				/// </summary>
				/// <param name="server">所要关闭的服务</param>
				/// <returns>成功返回true，否则返回false</returns>
				public bool Close(EarthView.World.Spatial.GeoDataset.Idatasource server)
				{
					byte ret=EarthView_World_Spatial_COGCWFSDataSourceServerFactory_close_ev_bool_IDataSource(this.NativeObject, object.Equals(server, null) ? IntPtr.Zero : server.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public new void DestroyDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pNativeObject, IntPtr pDataSource);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				public override void DestroyDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject);
					
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
				private static extern int EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public new int GetType_NoVirtual()
				{
					int ret=EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
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
				private static extern int EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				public override int GetType()
				{
					int ret=EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(this.NativeObject);
					
					return ret;
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML_NoVirtual(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(this.NativeObject, xml);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pNativeObject, string xml);

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateFromXML(string xml)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, xml);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr open_CallBack_IDataSource_CServerConnection(IntPtr connection);

				protected open_CallBack_IDataSource_CServerConnection m_open_CallBack_IDataSource_CServerConnection;

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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open_NoVirtual(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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

				protected  IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Function(IntPtr connection)
				{
					EarthView.World.Spatial.ServerConnection csobj_connection = new EarthView.World.Spatial.ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_connection.BindNativeObject(connection,"CServerConnection");
					csobj_connection.Delegate = true;
					IClassFactory csobj_connectionClassFactory = GlobalClassFactoryMap.Get(csobj_connection.GetCppInstanceTypeName());
					if (csobj_connectionClassFactory != null)
					{
						csobj_connection.Delegate = true;
						csobj_connection = csobj_connectionClassFactory.Create() as EarthView.World.Spatial.ServerConnection;
						csobj_connection.BindNativeObject(connection, "CServerConnection");
						csobj_connection.Delegate = true;
					}
					
					EarthView.World.Spatial.GeoDataset.Idatasource csret=Open(csobj_connection);
					
					if (!object.Equals(csret, null))
					{
					    csret.Delegate = true;
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pNativeObject, IntPtr connection);

				///const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);
				//// <summary>
				//// 打开一个请求的服务
				//// </summary>
				//// <param name="connection">连接参数</param>
				//// <returns>请求的服务对象指针，需用factory释放</returns>
				public virtual EarthView.World.Spatial.GeoDataset.Idatasource Open(EarthView.World.Spatial.ServerConnection connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public new EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource_NoVirtual(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pNativeObject, IntPtr connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, object.Equals(connection, null) ? IntPtr.Zero : connection.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getInstance_COGCWFSDataSourceServerFactory();

				/// <summary>
				/// 获取对象指针
				/// </summary>
				/// <returns>对象指针</returns>
				public static EarthView.World.Spatial.Ogcwfsdatasourceserverfactory GetInstance()
				{
					IntPtr __ptr = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getInstance_COGCWFSDataSourceServerFactory();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial.Ogcwfsdatasourceserverfactory csObj = new EarthView.World.Spatial.Ogcwfsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "COGCWFSDataSourceServerFactory");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Ogcwfsdatasourceserverfactory;
						csObj.BindNativeObject(__ptr, "COGCWFSDataSourceServerFactory");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.so");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.so");

					#else 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_d.dll");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#elif Linux 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.so");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.so");

					#else 
						private static bool bLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient.dll");
						private static bool csbLoadOgcwfsdatasourceserverfactory = LoadDll.Load("EV_SpatialServerClient_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWFSDataSourceServerFactory", new OgcwfsdatasourceserverfactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::COGCWFSDataSourceServerFactoryProxy", new OgcwfsdatasourceserverfactoryClassFactory());

				public Ogcwfsdatasourceserverfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(IntPtr pObject, open_CallBack_IDataSource_CServerConnection pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(IntPtr pObject, getType_CallBack_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(IntPtr pObject, createFromXML_CallBack_IDataSource_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(IntPtr pObject, openDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(IntPtr pObject, openDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(IntPtr pObject, createDataSource_CallBack_IDataSource_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(IntPtr pObject, createDataSource_CallBack_IDataSource_IPropertySet pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(IntPtr pObject, destroyDataSource_CallBack_void_IDataSource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(IntPtr pObject, existDataSource_CallBack_ev_bool_IDataSource pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_open_CallBack_IDataSource_CServerConnection = EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Function;
						GC.KeepAlive(m_open_CallBack_IDataSource_CServerConnection);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(this.NativeObject, m_open_CallBack_IDataSource_CServerConnection);
						m_getType_CallBack_ev_int32 = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Function;
						GC.KeepAlive(m_getType_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(this.NativeObject, m_getType_CallBack_ev_int32);
						m_createFromXML_CallBack_IDataSource_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Function;
						GC.KeepAlive(m_createFromXML_CallBack_IDataSource_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(this.NativeObject, m_createFromXML_CallBack_IDataSource_EVString);
						m_openDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(this.NativeObject, m_openDataSource_CallBack_IDataSource_EVString_EVString);
						m_openDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_openDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(this.NativeObject, m_openDataSource_CallBack_IDataSource_IPropertySet);
						m_createDataSource_CallBack_IDataSource_EVString_EVString = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(this.NativeObject, m_createDataSource_CallBack_IDataSource_EVString_EVString);
						m_createDataSource_CallBack_IDataSource_IPropertySet = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Function;
						GC.KeepAlive(m_createDataSource_CallBack_IDataSource_IPropertySet);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(this.NativeObject, m_createDataSource_CallBack_IDataSource_IPropertySet);
						m_destroyDataSource_CallBack_void_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Function;
						GC.KeepAlive(m_destroyDataSource_CallBack_void_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(this.NativeObject, m_destroyDataSource_CallBack_void_IDataSource);
						m_existDataSource_CallBack_ev_bool_IDataSource = EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Function;
						GC.KeepAlive(m_existDataSource_CallBack_ev_bool_IDataSource);
						EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(this.NativeObject, m_existDataSource_CallBack_ev_bool_IDataSource);
					}
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(string path, string fileName)
				{
					return base.OpenDataSource_NoVirtual(path,fileName);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource OpenDataSource(EarthView.World.Spatial.GeoDataset.Ipropertyset connection)
				{
					return base.OpenDataSource_NoVirtual(connection);
				}
				public override EarthView.World.Spatial.GeoDataset.Idatasource CreateDataSource(string path, string fileName)
				{
					return base.CreateDataSource_NoVirtual(path,fileName);
				}
				public override bool ExistDataSource(EarthView.World.Spatial.GeoDataset.Idatasource pDataSource)
				{
					return base.ExistDataSource_NoVirtual(pDataSource);
				}
				public static Ogcwfsdatasourceserverfactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Ogcwfsdatasourceserverfactory obj = baseObj as  Ogcwfsdatasourceserverfactory;
					if (object.Equals(obj, null))
					{
						obj = new Ogcwfsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "COGCWFSDataSourceServerFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class OgcwfsdatasourceserverfactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Ogcwfsdatasourceserverfactory emptyInstance = new Ogcwfsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
