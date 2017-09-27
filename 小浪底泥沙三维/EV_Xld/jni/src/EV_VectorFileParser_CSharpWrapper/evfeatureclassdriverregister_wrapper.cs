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
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
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
			namespace VectorFileParser
			{
				public class Evfeatureclassdriverregister : EarthView.World.Core.AllocatedObject
				{

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getRegisterDrivers_EVFeatureClassDriverRegister();

					public static EarthView.World.Spatial.VectorFileParser.Evfeatureclassdriverregister GetRegisterDrivers()
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getRegisterDrivers_EVFeatureClassDriverRegister();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.VectorFileParser.Evfeatureclassdriverregister csObj = new EarthView.World.Spatial.VectorFileParser.Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "EVFeatureClassDriverRegister");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.VectorFileParser.Evfeatureclassdriverregister;
							csObj.BindNativeObject(__ptr, "EVFeatureClassDriverRegister");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_openDataset_IDataset_IFileDataSource_EVString(IntPtr pNativeObject, IntPtr pDataSource, string name);

					public EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(EarthView.World.Spatial.GeoDataset.Ifiledatasource pDataSource, string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_openDataset_IDataset_IFileDataSource_EVString(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject, name);
						
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
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_EVRegisterDriver_void_CFeatureClassDriver(IntPtr pNativeObject, IntPtr pDriver);

					public void EVRegisterDriver(EarthView.World.Spatial.VectorFileParser.FeatureClassDriver pDriver)
					{
						EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_EVRegisterDriver_void_CFeatureClassDriver(this.NativeObject, object.Equals(pDriver, null) ? IntPtr.Zero : pDriver.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_VectorFileParser_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getDriverByName_CFeatureClassDriver_EVString(IntPtr pNativeObject, string driverName);

					public EarthView.World.Spatial.VectorFileParser.FeatureClassDriver GetDriverByName(string driverName)
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getDriverByName_CFeatureClassDriver_EVString(this.NativeObject, driverName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.VectorFileParser.FeatureClassDriver csObj = new EarthView.World.Spatial.VectorFileParser.FeatureClassDriver(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CFeatureClassDriver");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.VectorFileParser.FeatureClassDriver;
							csObj.BindNativeObject(__ptr, "CFeatureClassDriver");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_d.dll");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_d.so");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp_d.so");

						#else 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_d.dll");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser.dll");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp.dll");

						#elif Linux 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser.so");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp.so");

						#else 
							private static bool bLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser.dll");
							private static bool csbLoadEvfeatureclassdriverregister = LoadDll.Load("EV_VectorFileParser_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister", new EvfeatureclassdriverregisterClassFactory());

					public Evfeatureclassdriverregister(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Evfeatureclassdriverregister FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Evfeatureclassdriverregister obj = baseObj as  Evfeatureclassdriverregister;
						if (object.Equals(obj, null))
						{
							obj = new Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "EVFeatureClassDriverRegister");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EvfeatureclassdriverregisterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Evfeatureclassdriverregister emptyInstance = new Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
