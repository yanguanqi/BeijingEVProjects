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
			namespace Utility
			{
				///<summary>
				///CCoordinateSystemFactory
				///根据给定的参数或枚举值 创建相应的坐标系统
				///</summary>
				public class CoordinateSystemFactory : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CoordinateSystemFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCoordinateSystemFactory",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownGeoCSType(EarthView.World.Spatial.Utility.EVWELLKNOWNGEOCSTYPE eWellKnownCS);

					///<summary>
					///根据常见的坐标系统枚举 创建常见地理坐标系统
					///</summary>
					/// <param name="eWellKnownCS">EarthView::World::Spatial::Utility::EVWellKnownGeoCSType常见地理坐标系统枚举</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(EarthView.World.Spatial.Utility.EVWELLKNOWNGEOCSTYPE eWellKnownCS)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownGeoCSType(eWellKnownCS);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownProjCSType(EarthView.World.Spatial.Utility.EVWELLKNOWNPROJCSTYPE eWelKnProjCS);

					///<summary>
					///根据常见的坐标系统枚举 创建常见投影坐标系统
					///</summary>
					/// <param name="eWelKnProjCS">EarthView::World::Spatial::Utility::EVWellKnownProjCSType常见投影坐标系统枚举</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(EarthView.World.Spatial.Utility.EVWELLKNOWNPROJCSTYPE eWelKnProjCS)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVWellKnownProjCSType(eWelKnProjCS);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_IEllipseSpheriod_CProjParameter(IntPtr pobjEllipseSphere, IntPtr pObjProjParameter);

					///<summary>
					///根据给定椭球体和投影参数 创建坐标系统 如果pObjProjParameter = NULL则
					///创建地理坐标系统 否则创建投影坐标系统
					///</summary>
					/// <param name="pobjEllipseSphere">CEllipseShpere指针</param>
					/// <param name="pObjProjParameter">EarthView::World::Spatial::Utility::CProjParameter指针,为NULL时表示创建地理坐标系统</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(EarthView.World.Spatial.Geometry.Iellipsespheriod pobjEllipseSphere, EarthView.World.Spatial.Utility.ProjParameter pObjProjParameter)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_IEllipseSpheriod_CProjParameter(object.Equals(pobjEllipseSphere, null) ? IntPtr.Zero : pobjEllipseSphere.NativeObject, object.Equals(pObjProjParameter, null) ? IntPtr.Zero : pObjProjParameter.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVSpatialReferenceStringType_EVString(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE eStrType, string pszReference);

					///<summary>
					///根据给定格式的投影参考文本 创建相应的坐标系统
					///</summary>
					/// <param name="eStrType">EVSpatialReferenceStrTypes文本格式</param>
					/// <param name="strReference">空间参考的字符串描述</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE eStrType, string pszReference)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_EVSpatialReferenceStringType_EVString(eStrType, pszReference);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_ev_int32(int ESPG);

					///<summary>
					///根据给ESPG代号创建相应的坐标系统
					///</summary>
					/// <param name="ESPG">int ESPG带号</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(int ESPG)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_ev_int32(ESPG);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_CDataStream(IntPtr objStream);

					///<summary>
					///从流创建一个坐标参考系统
					///</summary>
					/// <param name="objStream">流</param>
					/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*从流创建指针</returns>
					public static EarthView.World.Spatial.Utility.SpatialReference CreateCoordSys(ref EarthView.World.Core.DataStream objStream)
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateSystemFactory_createCoordSys_CSpatialReference_CDataStream(object.Equals(objStream, null) ? IntPtr.Zero : objStream.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateSystemFactory_releaseCoordSys_void_CSpatialReference(IntPtr pCorSys);

					///<summary>
					///释放坐标系统
					///</summary>
					/// <param name="pCorSys">坐标系统指针</param>
					/// <returns></returns>
					public static void ReleaseCoordSys(EarthView.World.Spatial.Utility.SpatialReference pCorSys)
					{
						EarthView_World_Spatial_Utility_CCoordinateSystemFactory_releaseCoordSys_void_CSpatialReference(object.Equals(pCorSys, null) ? IntPtr.Zero : pCorSys.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadCoordinateSystemFactory = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CCoordinateSystemFactory", new CoordinateSystemFactoryClassFactory());

					public CoordinateSystemFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static CoordinateSystemFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CoordinateSystemFactory obj = baseObj as  CoordinateSystemFactory;
						if (object.Equals(obj, null))
						{
							obj = new CoordinateSystemFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCoordinateSystemFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CoordinateSystemFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CoordinateSystemFactory emptyInstance = new CoordinateSystemFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
