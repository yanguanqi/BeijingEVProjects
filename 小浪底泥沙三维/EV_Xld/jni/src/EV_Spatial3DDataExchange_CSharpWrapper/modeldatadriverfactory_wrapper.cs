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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换驱动类工厂
				/// </summary>
				public class ModelDataDriverFactory : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_createDriver_CModelDataDriver_EVModelDataDriverType(EarthView.World.Spatial3D.DataExchange.EVMODELDATADRIVERTYPE type);

					/// <summary>
					/// 创建数据转换驱动
					/// </summary>
					/// <param name="type">驱动类型</param>
					/// <returns>驱动对象的指针，用factory销毁</returns>
					public static EarthView.World.Spatial3D.DataExchange.ModelDataDriver CreateDriver(EarthView.World.Spatial3D.DataExchange.EVMODELDATADRIVERTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_createDriver_CModelDataDriver_EVModelDataDriverType(type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.DataExchange.ModelDataDriver csObj = new EarthView.World.Spatial3D.DataExchange.ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelDataDriver");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.DataExchange.ModelDataDriver;
							csObj.BindNativeObject(__ptr, "CModelDataDriver");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_disposeDriver_void_CModelDataDriver(IntPtr driver);

					/// <summary>
					/// 销毁数据转换驱动
					/// </summary>
					/// <param name="driver">要释放的驱动</param>
					/// <returns></returns>
					public static void DisposeDriver(EarthView.World.Spatial3D.DataExchange.ModelDataDriver driver)
					{
						EarthView_World_Spatial3D_DataExchange_CModelDataDriverFactory_disposeDriver_void_CModelDataDriver(object.Equals(driver, null) ? IntPtr.Zero : driver.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_d.so");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_d.dll");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange.so");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.so");

						#else 
							private static bool bLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange.dll");
							private static bool csbLoadModelDataDriverFactory = LoadDll.Load("EV_Spatial3DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory", new ModelDataDriverFactoryClassFactory());

					public ModelDataDriverFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelDataDriverFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelDataDriverFactory obj = baseObj as  ModelDataDriverFactory;
						if (object.Equals(obj, null))
						{
							obj = new ModelDataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelDataDriverFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelDataDriverFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelDataDriverFactory emptyInstance = new ModelDataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
