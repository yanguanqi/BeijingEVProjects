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
			namespace GeoDataset
			{
				///<summary>
				///工作命令类
				///</summary>
				public class WorkCommand : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///默认构造函数
					///</summary>
					public WorkCommand() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CWorkCommand",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_GeoDataset_CWorkCommand_getData_CBaseObject(IntPtr pNativeObject);

					/// <summary>
					/// 获取"工作命令"中的数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据</returns>
					public EarthView.World.Core.BaseObject GetData()
					{
						IntPtr __ptr = EarthView_World_Spatial_GeoDataset_CWorkCommand_getData_CBaseObject(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.BaseObject csObj = new EarthView.World.Core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CBaseObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.BaseObject;
							csObj.BindNativeObject(__ptr, "CBaseObject");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDatabase_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_GeoDataset_CWorkCommand_setData_void_CBaseObject(IntPtr pNativeObject, IntPtr ref_data);

					/// <summary>
					/// 设置"工作命令"数据
					/// </summary>
					/// <param name="data">数据</param>
					/// <returns></returns>
					public void SetData(EarthView.World.Core.BaseObject ref_data)
					{
						EarthView_World_Spatial_GeoDataset_CWorkCommand_setData_void_CBaseObject(this.NativeObject, object.Equals(ref_data, null) ? IntPtr.Zero : ref_data.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_d.so");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp_d.so");

						#else 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_d.dll");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#elif Linux 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase.so");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp.so");

						#else 
							private static bool bLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase.dll");
							private static bool csbLoadWorkCommand = LoadDll.Load("EV_SpatialDatabase_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CWorkCommand", new WorkCommandClassFactory());

					public WorkCommand(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static WorkCommand FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						WorkCommand obj = baseObj as  WorkCommand;
						if (object.Equals(obj, null))
						{
							obj = new WorkCommand(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CWorkCommand");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class WorkCommandClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						WorkCommand emptyInstance = new WorkCommand(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
