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
				public class FeatureClassDriver : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_NoVirtual(IntPtr pNativeObject);

					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(IntPtr pNativeObject);

					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr openDataset_CallBack_IDataset_IFileDataSource_EVString(IntPtr pDataSource, ref IntPtr name);

					protected openDataset_CallBack_IDataset_IFileDataSource_EVString m_openDataset_CallBack_IDataset_IFileDataSource_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_NoVirtual(IntPtr pNativeObject, IntPtr pDataSource, string name);

					public virtual EarthView.World.Spatial.GeoDataset.Idataset OpenDataset_NoVirtual(EarthView.World.Spatial.GeoDataset.Ifiledatasource pDataSource, string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_NoVirtual(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject, name);
						
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

					protected  IntPtr EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Function(IntPtr pDataSource, ref IntPtr name)
					{
						EarthView.World.Spatial.GeoDataset.Ifiledatasource csobj_pDataSource = new EarthView.World.Spatial.GeoDataset.Ifiledatasource(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pDataSource.BindNativeObject(pDataSource,"IFileDataSource");
						csobj_pDataSource.Delegate = true;
						IClassFactory csobj_pDataSourceClassFactory = GlobalClassFactoryMap.Get(csobj_pDataSource.GetCppInstanceTypeName());
						if (csobj_pDataSourceClassFactory != null)
						{
							csobj_pDataSource.Delegate = true;
							csobj_pDataSource = csobj_pDataSourceClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifiledatasource;
							csobj_pDataSource.BindNativeObject(pDataSource, "IFileDataSource");
							csobj_pDataSource.Delegate = true;
						}
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						EarthView.World.Spatial.GeoDataset.Idataset csret=OpenDataset(csobj_pDataSource, strname);
						
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
					private static extern IntPtr EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(IntPtr pNativeObject, IntPtr pDataSource, string name);

					public virtual EarthView.World.Spatial.GeoDataset.Idataset OpenDataset(EarthView.World.Spatial.GeoDataset.Ifiledatasource pDataSource, string name)
					{
						IntPtr __ptr = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(this.NativeObject, object.Equals(pDataSource, null) ? IntPtr.Zero : pDataSource.NativeObject, name);
						
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
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_d.dll");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_d.so");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp_d.so");

						#else 
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_d.dll");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser.dll");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp.dll");

						#elif Linux 
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser.so");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp.so");

						#else 
							private static bool bLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser.dll");
							private static bool csbLoadFeatureClassDriver = LoadDll.Load("EV_VectorFileParser_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver", new FeatureClassDriverClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriverProxy", new FeatureClassDriverClassFactory());

					public FeatureClassDriver(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(IntPtr pObject, openDataset_CallBack_IDataset_IFileDataSource_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_openDataset_CallBack_IDataset_IFileDataSource_EVString = EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString_Function;
							GC.KeepAlive(m_openDataset_CallBack_IDataset_IFileDataSource_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_CFeatureClassDriver_openDataset_IDataset_IFileDataSource_EVString(this.NativeObject, m_openDataset_CallBack_IDataset_IFileDataSource_EVString);
						}
					}
					public static FeatureClassDriver FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						FeatureClassDriver obj = baseObj as  FeatureClassDriver;
						if (object.Equals(obj, null))
						{
							obj = new FeatureClassDriver(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFeatureClassDriver");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FeatureClassDriverClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						FeatureClassDriver emptyInstance = new FeatureClassDriver(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
