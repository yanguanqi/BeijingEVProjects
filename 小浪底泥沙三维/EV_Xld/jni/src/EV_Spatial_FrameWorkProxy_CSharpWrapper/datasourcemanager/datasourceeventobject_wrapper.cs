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
				public class DataSourceEventObject : EarthView.World.Core.EventObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public DataSourceEventObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDataSourceEventObjectProxy", null);
						if (!"EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceEventObject".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_deleteDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool DeleteDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_deleteDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onDeleteDataSource_CallBack_void_CDataSourceActiveEvent(IntPtr pe);

					protected onDeleteDataSource_CallBack_void_CDataSourceActiveEvent m_onDeleteDataSource_CallBack_void_CDataSourceActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 删除数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>
					public virtual void OnDeleteDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDataSourceActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDataSourceActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnDeleteDataSource(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 删除数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>
					public virtual void OnDeleteDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 关闭数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, IntPtr fields, byte isTemplate, int coordSysType, int coordSys);

					/// <summary>
					/// 创建模型数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="fields">数据集属性字段</param>
					/// <param name="isTemplate">是否为模板数据集</param>
					/// <param name="coordSysType">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateModelDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, ref EarthView.World.Spatial.GeoDataset.Fields fields, bool isTemplate, int coordSysType, int coordSys)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject, Convert.ToByte(isTemplate), coordSysType, coordSys);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, int coordsys);

					/// <summary>
					/// 创建特效数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="coordsys">坐标系统</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateEffectDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, int coordsys)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, coordsys);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, ref EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, ref int coordSys, IntPtr fields);

					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="datasourceURL">数据集描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateVectorDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, EarthView.World.Spatial.Geometry.EVGEOMETRYTYPE type, int coordSys, ref EarthView.World.Spatial.GeoDataset.Fields fields)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, ref type, ref coordSys, object.Equals(fields, null) ? IntPtr.Zero : fields.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createKmlDataset_ev_bool_CDataSourceURL_EVString(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName);

					/// <summary>
					/// 创建kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CreateKmlDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createKmlDataset_ev_bool_CDataSourceURL_EVString(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_addKmlDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr datasource, IntPtr dataset);

					/// <summary>
					/// 添加kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool AddKmlDataset(ref EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent datasource, ref EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataset)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_addKmlDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(datasource, null) ? IntPtr.Zero : datasource.NativeObject, object.Equals(dataset, null) ? IntPtr.Zero : dataset.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(IntPtr pNativeObject, IntPtr datasourceURL, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE sourcetype, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE datasettype);

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="sourcetype">数据源类型</param>
					/// <param name="datasettype">数据集类型</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE sourcetype, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE datasettype)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasetName, sourcetype, datasettype);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(IntPtr pNativeObject, IntPtr datasourceURL, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE datasourcetype);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasourcetype">数据源类型</param>
					/// <returns>成功返回true否则返回false</returns>
					public bool CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE datasourcetype)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject, datasourcetype);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataSource_void_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns></returns>					
					public void CreateDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataSource_void_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateDataSource_CallBack_void_CDataSourceActiveEvent(IntPtr pe);

					protected onCreateDataSource_CallBack_void_CDataSourceActiveEvent m_onCreateDataSource_CallBack_void_CDataSourceActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 创建数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCreateDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDataSourceActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDataSourceActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnCreateDataSource(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 创建数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCreateDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_openDataSource_void_CDataSourceURL(IntPtr pNativeObject, IntPtr datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns></returns>					
					public void OpenDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURL datasourceURL)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_openDataSource_void_CDataSourceURL(this.NativeObject, object.Equals(datasourceURL, null) ? IntPtr.Zero : datasourceURL.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onOpenDataSource_CallBack_void_CDataSourceActiveEvent(IntPtr pe);

					protected onOpenDataSource_CallBack_void_CDataSourceActiveEvent m_onOpenDataSource_CallBack_void_CDataSourceActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 打开数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnOpenDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDataSourceActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDataSourceActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnOpenDataSource(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 打开数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnOpenDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭数据源事件响应函数
					/// </summary>
					/// <param name="dataSourceEvent">事件对象</param>
					/// <returns></returns>					
					public bool CloseDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCloseDataSource_CallBack_void_CDataSourceActiveEvent(IntPtr pe);

					protected onCloseDataSource_CallBack_void_CDataSourceActiveEvent m_onCloseDataSource_CallBack_void_CDataSourceActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseDataSource_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDataSourceActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDataSourceActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnCloseDataSource(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseDataSource(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 创建数据集
					/// </summary>
					/// <param name="dataSource">需要新建数据集的数据源</param>
					/// <param name="dataSet">需要新建数据集信息</param>
					/// <returns></returns>					
					public void CreateDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCreateDataset_CallBack_void_CDatasetActiveEvent(IntPtr pe);

					protected onCreateDataset_CallBack_void_CDatasetActiveEvent m_onCreateDataset_CallBack_void_CDatasetActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 创建数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCreateDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDatasetActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDatasetActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnCreateDataset(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 创建数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCreateDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onOpenDataset_CallBack_void_CDatasetActiveEvent(IntPtr pe);

					protected onOpenDataset_CallBack_void_CDatasetActiveEvent m_onOpenDataset_CallBack_void_CDatasetActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 打开数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnOpenDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDatasetActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDatasetActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnOpenDataset(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 打开数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnOpenDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					public void CloseDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCloseDataset_CallBack_void_CDatasetActiveEvent(IntPtr pe);

					protected onCloseDataset_CallBack_void_CDatasetActiveEvent m_onCloseDataset_CallBack_void_CDatasetActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseDataset_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDatasetActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDatasetActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnCloseDataset(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseDataset(EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">事件对象</param>
					/// <returns></returns>					
					public void CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent_EVDataSourceType(IntPtr pNativeObject, IntPtr dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSourceType">数据源类别</param>
					/// <returns></returns>
					public void CloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.Spatial.GeoDataset.EVDATASOURCETYPE dataSourceType)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent_EVDataSourceType(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, dataSourceType);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent(IntPtr pe);

					protected onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent m_onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_NoVirtual(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭所有数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseAllDatasets_NoVirtual(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_NoVirtual(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Function(IntPtr pe)
					{
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent csobj_pe = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pe.BindNativeObject(pe,"CDataSourceActiveEvent");
						csobj_pe.Delegate = true;
						IClassFactory csobj_peClassFactory = GlobalClassFactoryMap.Get(csobj_pe.GetCppInstanceTypeName());
						if (csobj_peClassFactory != null)
						{
							csobj_pe.Delegate = true;
							csobj_pe = csobj_peClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent;
							csobj_pe.BindNativeObject(pe, "CDataSourceActiveEvent");
							csobj_pe.Delegate = true;
						}
						
						OnCloseAllDatasets(csobj_pe);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(IntPtr pNativeObject, IntPtr pe);

					/// <summary>
					/// 关闭所有数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					public virtual void OnCloseAllDatasets(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent pe)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(this.NativeObject, object.Equals(pe, null) ? IntPtr.Zero : pe.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_importData_void_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 数据导入
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					public void ImportData(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_importData_void_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onImportData_CallBack_void();

					protected onImportData_CallBack_void m_onImportData_CallBack_void;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 数据导入响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual void OnImportData_NoVirtual()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Function()
					{
						OnImportData();
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(IntPtr pNativeObject);

					/// <summary>
					/// 数据导入响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual void OnImportData()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(this.NativeObject);
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_exportData_void_CDataSourceActiveEvent_CDatasetActiveEvent(IntPtr pNativeObject, IntPtr dataSourceEvent, IntPtr dataSetEvent);

					/// <summary>
					/// 数据导出
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					public void ExportData(EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEvent dataSourceEvent, EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEvent dataSetEvent)
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_exportData_void_CDataSourceActiveEvent_CDatasetActiveEvent(this.NativeObject, object.Equals(dataSourceEvent, null) ? IntPtr.Zero : dataSourceEvent.NativeObject, object.Equals(dataSetEvent, null) ? IntPtr.Zero : dataSetEvent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onExportData_CallBack_void();

					protected onExportData_CallBack_void m_onExportData_CallBack_void;

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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 数据导出响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual void OnExportData_NoVirtual()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Function()
					{
						OnExportData();
						
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
					private static extern void EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(IntPtr pNativeObject);

					/// <summary>
					/// 数据导出响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					public virtual void OnExportData()
					{
						EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_NoVirtual(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 事件处理函数
					/// </summary>
					/// <param name="e">事件对象</param>
					/// <returns>成功返回true否则返回false</returns>					
					protected new bool OnEvent_NoVirtual(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
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
					private static extern byte EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					/// 事件处理函数
					/// </summary>
					/// <param name="e">事件对象</param>
					/// <returns>成功返回true否则返回false</returns>					
					protected override bool OnEvent(EarthView.World.Core.Event e)
					{
						byte ret=EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceEventObject = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject", new DataSourceEventObjectClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObjectProxy", new DataSourceEventObjectClassFactory());

					public DataSourceEventObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(IntPtr pObject, onDeleteDataSource_CallBack_void_CDataSourceActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(IntPtr pObject, onCreateDataSource_CallBack_void_CDataSourceActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(IntPtr pObject, onOpenDataSource_CallBack_void_CDataSourceActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(IntPtr pObject, onCloseDataSource_CallBack_void_CDataSourceActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(IntPtr pObject, onCreateDataset_CallBack_void_CDatasetActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(IntPtr pObject, onOpenDataset_CallBack_void_CDatasetActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(IntPtr pObject, onCloseDataset_CallBack_void_CDatasetActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(IntPtr pObject, onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(IntPtr pObject, onImportData_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(IntPtr pObject, onExportData_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(IntPtr pObject, onEvent_CallBack_ev_bool_CEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent(IntPtr pObject, onTimerEvent_CallBack_void_CTimerEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent(IntPtr pObject, onCustomEvent_CallBack_void_CEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onDeleteDataSource_CallBack_void_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_onDeleteDataSource_CallBack_void_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(this.NativeObject, m_onDeleteDataSource_CallBack_void_CDataSourceActiveEvent);
							m_onCreateDataSource_CallBack_void_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_onCreateDataSource_CallBack_void_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(this.NativeObject, m_onCreateDataSource_CallBack_void_CDataSourceActiveEvent);
							m_onOpenDataSource_CallBack_void_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_onOpenDataSource_CallBack_void_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(this.NativeObject, m_onOpenDataSource_CallBack_void_CDataSourceActiveEvent);
							m_onCloseDataSource_CallBack_void_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_onCloseDataSource_CallBack_void_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(this.NativeObject, m_onCloseDataSource_CallBack_void_CDataSourceActiveEvent);
							m_onCreateDataset_CallBack_void_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_onCreateDataset_CallBack_void_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(this.NativeObject, m_onCreateDataset_CallBack_void_CDatasetActiveEvent);
							m_onOpenDataset_CallBack_void_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_onOpenDataset_CallBack_void_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(this.NativeObject, m_onOpenDataset_CallBack_void_CDatasetActiveEvent);
							m_onCloseDataset_CallBack_void_CDatasetActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Function;
							GC.KeepAlive(m_onCloseDataset_CallBack_void_CDatasetActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(this.NativeObject, m_onCloseDataset_CallBack_void_CDatasetActiveEvent);
							m_onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Function;
							GC.KeepAlive(m_onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(this.NativeObject, m_onCloseAllDatasets_CallBack_void_CDataSourceActiveEvent);
							m_onImportData_CallBack_void = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Function;
							GC.KeepAlive(m_onImportData_CallBack_void);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(this.NativeObject, m_onImportData_CallBack_void);
							m_onExportData_CallBack_void = EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Function;
							GC.KeepAlive(m_onExportData_CallBack_void);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(this.NativeObject, m_onExportData_CallBack_void);
							m_onEvent_CallBack_ev_bool_CEvent = EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Function;
							GC.KeepAlive(m_onEvent_CallBack_ev_bool_CEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(this.NativeObject, m_onEvent_CallBack_ev_bool_CEvent);
							m_onTimerEvent_CallBack_void_CTimerEvent = EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Function;
							GC.KeepAlive(m_onTimerEvent_CallBack_void_CTimerEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent(this.NativeObject, m_onTimerEvent_CallBack_void_CTimerEvent);
							m_onCustomEvent_CallBack_void_CEvent = EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Function;
							GC.KeepAlive(m_onCustomEvent_CallBack_void_CEvent);
							EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent(this.NativeObject, m_onCustomEvent_CallBack_void_CEvent);
						}
					}
					protected override void OnTimerEvent(EarthView.World.Core.TimerEvent e)
					{
						base.OnTimerEvent_NoVirtual(e);
					}
					protected override void OnCustomEvent(EarthView.World.Core.Event e)
					{
						base.OnCustomEvent_NoVirtual(e);
					}
					public static DataSourceEventObject FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataSourceEventObject obj = baseObj as  DataSourceEventObject;
						if (object.Equals(obj, null))
						{
							obj = new DataSourceEventObject(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDataSourceEventObject");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataSourceEventObjectClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataSourceEventObject emptyInstance = new DataSourceEventObject(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
