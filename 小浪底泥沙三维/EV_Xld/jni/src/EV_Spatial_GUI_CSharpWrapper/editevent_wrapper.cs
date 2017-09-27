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
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				public class DatasetEditEvent : EarthView.World.Core.Event
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="dataset">关联的数据集</param>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					public DatasetEditEvent(EarthView.World.Spatial.GeoDataset.Idataset ref_dataset, ushort eventtype) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_dataset = new BasePtr(ref_dataset);
						list.Add("ref_dataset", valueref_dataset.PtrVal);
						BasePtr valueeventtype = new BasePtr(eventtype);
						list.Add("eventtype", valueeventtype.PtrVal);
						Create("CDatasetEditEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_CDatasetEditEvent_getDataset_IDataset(IntPtr pNativeObject);

					/// <summary>
					/// 获取与事件所关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.GeoDataset.Idataset GetDataset()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_CDatasetEditEvent_getDataset_IDataset(this.NativeObject);
						
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
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadDatasetEditEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CDatasetEditEvent", new DatasetEditEventClassFactory());

					public DatasetEditEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DatasetEditEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DatasetEditEvent obj = baseObj as  DatasetEditEvent;
						if (object.Equals(obj, null))
						{
							obj = new DatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDatasetEditEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DatasetEditEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DatasetEditEvent emptyInstance = new DatasetEditEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class LayerEditingEvent : EarthView.World.Core.Event
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ctrl">关联的图层</param>
					/// <param name="type">事件类型</param>
					/// <returns></returns>
					public LayerEditingEvent(EarthView.World.Spatial.Atlas.Ilayer ref_layer, ushort eventtype) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_layer = new BasePtr(ref_layer);
						list.Add("ref_layer", valueref_layer.PtrVal);
						BasePtr valueeventtype = new BasePtr(eventtype);
						list.Add("eventtype", valueeventtype.PtrVal);
						Create("CLayerEditingEvent", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_CLayerEditingEvent_getEditingLayer_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 获取与该事件所关联的图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层</returns>
					public EarthView.World.Spatial.Atlas.Ilayer GetEditingLayer()
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_CLayerEditingEvent_getEditingLayer_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadLayerEditingEvent = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CLayerEditingEvent", new LayerEditingEventClassFactory());

					public LayerEditingEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LayerEditingEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LayerEditingEvent obj = baseObj as  LayerEditingEvent;
						if (object.Equals(obj, null))
						{
							obj = new LayerEditingEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLayerEditingEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LayerEditingEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LayerEditingEvent emptyInstance = new LayerEditingEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
