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
			namespace Convertor
			{
				/// <summary>
				/// 数据交换驱动类工厂
				/// </summary>
				public class DataDriverFactory : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Convertor_CDataDriverFactory_createDriver_CDataDriver_EVDataDriverType(EarthView.World.Spatial.Convertor.EVDATADRIVERTYPE type);

					/// <summary>
					/// 创建数据转换驱动
					/// </summary>
					/// <param name="type">驱动类型</param>
					/// <returns>驱动对象的指针，用factory销毁</returns>
					public static EarthView.World.Spatial.Convertor.DataDriver CreateDriver(EarthView.World.Spatial.Convertor.EVDATADRIVERTYPE type)
					{
						IntPtr __ptr = EarthView_World_Spatial_Convertor_CDataDriverFactory_createDriver_CDataDriver_EVDataDriverType(type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Convertor.DataDriver csObj = new EarthView.World.Spatial.Convertor.DataDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDataDriver");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Convertor.DataDriver;
							csObj.BindNativeObject(__ptr, "CDataDriver");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDataExchange_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Convertor_CDataDriverFactory_disposeDriver_void_CDataDriver(IntPtr driver);

					/// <summary>
					/// 销毁数据转换驱动
					/// </summary>
					/// <param name="driver">要释放的驱动</param>
					/// <returns></returns>
					public static void DisposeDriver(EarthView.World.Spatial.Convertor.DataDriver driver)
					{
						EarthView_World_Spatial_Convertor_CDataDriverFactory_disposeDriver_void_CDataDriver(object.Equals(driver, null) ? IntPtr.Zero : driver.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_d.so");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.so");

						#else 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_d.dll");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#elif Linux 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange.so");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.so");

						#else 
							private static bool bLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange.dll");
							private static bool csbLoadDataDriverFactory = LoadDll.Load("EV_Spatial2DDataExchange_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataDriverFactory", new DataDriverFactoryClassFactory());

					public DataDriverFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DataDriverFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DataDriverFactory obj = baseObj as  DataDriverFactory;
						if (object.Equals(obj, null))
						{
							obj = new DataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDataDriverFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DataDriverFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DataDriverFactory emptyInstance = new DataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
