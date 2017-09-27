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
				public class DataSourceTreeEvent : EarthView.World.Core.Event
				{
					public enum ACTIONTYPE
					{
										ModelManage,
										EffectManage,
										DataSourceProperty,
										DateSetProperty
					
					}

					public class DataSourcePropertyData : EarthView.World.Core.BaseObject
					{
						private EarthView.World.FrameWorkProxy.GroupStringinterfaceMap groupStringInterfaceField;
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
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface(IntPtr pObject);

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
						private static extern void Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface( IntPtr pObject, IntPtr value );

						public 						EarthView.World.FrameWorkProxy.GroupStringinterfaceMap GroupStringInterface
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface(this.NativeObject);
								
								if(__ptr==IntPtr.Zero)
								{
								return null;
								}
								if(!object.Equals(groupStringInterfaceField, null)){
									groupStringInterfaceField.NativeObject = __ptr;
									return groupStringInterfaceField;
								}
								EarthView.World.FrameWorkProxy.GroupStringinterfaceMap csObj = new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
								csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
								csObj.Delegate = true;
								IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
								if (csObjClassFactory != null)
								{
									csObj.Delegate = true;
									csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.GroupStringinterfaceMap;
									csObj.BindNativeObject(__ptr, "CGroupStringinterfaceMap");
									csObj.Delegate = true;
								}
								return csObj;
								
							}

							set
							{
								groupStringInterfaceField = value;
								Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
							}
						}

						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						public DataSourcePropertyData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("DataSourcePropertyData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadDataSourcePropertyData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData", new DataSourcePropertyDataClassFactory());

						public DataSourcePropertyData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static DataSourcePropertyData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							DataSourcePropertyData obj = baseObj as  DataSourcePropertyData;
							if (object.Equals(obj, null))
							{
								obj = new DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "DataSourcePropertyData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class DataSourcePropertyDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							DataSourcePropertyData emptyInstance = new DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class ModelManageData : EarthView.World.Core.BaseObject
					{
						private string datasourceNameField;
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
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName(IntPtr pObject);

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
						private static extern void Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName( IntPtr pObject, string value );

						public 						string DatasourceName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								datasourceNameField = value;
								Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName( this.NativeObject,value );
							}
						}

						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						public ModelManageData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("ModelManageData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadModelManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData", new ModelManageDataClassFactory());

						public ModelManageData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static ModelManageData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							ModelManageData obj = baseObj as  ModelManageData;
							if (object.Equals(obj, null))
							{
								obj = new ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "ModelManageData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class ModelManageDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							ModelManageData emptyInstance = new ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class EffectManageData : EarthView.World.Core.BaseObject
					{
						private string datasourceNameField;
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
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName(IntPtr pObject);

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
						private static extern void Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName( IntPtr pObject, string value );

						public 						string DatasourceName
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								datasourceNameField = value;
								Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName( this.NativeObject,value );
							}
						}

						private string datasourcePathField;
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
						private static extern IntPtr Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath(IntPtr pObject);

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
						private static extern void Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath( IntPtr pObject, string value );

						public 						string DatasourcePath
						{
							get
							{
								IntPtr __ptr = Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath(this.NativeObject);
								
								string ret = Marshal.PtrToStringAnsi(__ptr);
								ClassFactory.FreeString(ref __ptr);
								return ret;
								
							}

							set
							{
								datasourcePathField = value;
								Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath( this.NativeObject,value );
							}
						}

						public EffectManageData() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("EffectManageData",  null);
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						#if DEBUG 
							#if Windows 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

							#else 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#elif Linux 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

							#else 
								private static bool bLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
								private static bool csbLoadEffectManageData = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData", new EffectManageDataClassFactory());

						public EffectManageData(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
							}
						}
						public static EffectManageData FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							EffectManageData obj = baseObj as  EffectManageData;
							if (object.Equals(obj, null))
							{
								obj = new EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "EffectManageData");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class EffectManageDataClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							EffectManageData emptyInstance = new EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public DataSourceTreeEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("DataSourceTreeEvent",  null);
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
					private static extern int EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getActionType_ActionType(IntPtr pNativeObject);

					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ACTIONTYPE GetActionType()
					{
						int ret=EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getActionType_ActionType(this.NativeObject);
						
						return (EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ACTIONTYPE)ret;
						
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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getModelManageData_ModelManageData(IntPtr pNativeObject);

					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ModelManageData GetModelManageData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getModelManageData_ModelManageData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ModelManageData csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ModelManageData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ModelManageData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ModelManageData;
							csObj.BindNativeObject(__ptr, "ModelManageData");
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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getEffectManageData_EffectManageData(IntPtr pNativeObject);

					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.EffectManageData GetEffectManageData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getEffectManageData_EffectManageData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.EffectManageData csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.EffectManageData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "EffectManageData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.EffectManageData;
							csObj.BindNativeObject(__ptr, "EffectManageData");
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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getPropertyData_DataSourcePropertyData(IntPtr pNativeObject);

					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.DataSourcePropertyData GetPropertyData()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getPropertyData_DataSourcePropertyData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.DataSourcePropertyData csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.DataSourcePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourcePropertyData");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.DataSourcePropertyData;
							csObj.BindNativeObject(__ptr, "DataSourcePropertyData");
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
					private static extern IntPtr EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_data_DataSourceTreeEventData(IntPtr pNativeObject);

					public EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventData Data()
					{
						IntPtr __ptr = EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_data_DataSourceTreeEventData(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventData csObj = new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "DataSourceTreeEventData");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventData;
							csObj.BindNativeObject(__ptr, "DataSourceTreeEventData");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

						#else 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

						#else 
							private static bool bLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
							private static bool csbLoadDataSourceTreeEvent = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent", new DataSourceTreeEventClassFactory());

					public DataSourceTreeEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DataSourceTreeEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataSourceTreeEvent obj = baseObj as  DataSourceTreeEvent;
						if (object.Equals(obj, null))
						{
							obj = new DataSourceTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "DataSourceTreeEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataSourceTreeEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataSourceTreeEvent emptyInstance = new DataSourceTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
