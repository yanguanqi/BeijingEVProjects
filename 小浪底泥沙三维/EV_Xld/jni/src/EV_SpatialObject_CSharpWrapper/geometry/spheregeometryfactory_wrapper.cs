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
			namespace Geometry
			{
				public class SphereGeometryFactory : EarthView.World.Core.AllocatedObject
				{
					public SphereGeometryFactory(double dfSemiMajor, double dfInvFlattening) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfSemiMajor = new BasePtr(dfSemiMajor);
						list.Add("dfSemiMajor", valuedfSemiMajor.PtrVal);
						BasePtr valuedfInvFlattening = new BasePtr(dfInvFlattening);
						list.Add("dfInvFlattening", valuedfInvFlattening.PtrVal);
						Create("CSphereGeometryFactory", list);
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
					private static extern IntPtr EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromCircle_CLineString_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double centerLon, double centerLat, double radius);

					/// <summary>
					/// 由圆创建球面折线
					/// </summary>
					/// <param name="centerLon">圆心经度(度)</param>
					/// <param name="centerLat">圆心纬度(度)</param>
					/// <param name="radius">半径(米)</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.LineString CreateFromCircle(double centerLon, double centerLat, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromCircle_CLineString_ev_real64_ev_real64_ev_real64(this.NativeObject, centerLon, centerLat, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.LineString csObj = new EarthView.World.Spatial.Geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLineString");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.LineString;
							csObj.BindNativeObject(__ptr, "CLineString");
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
					private static extern IntPtr EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromEllipse_CLineString_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double centerLon, double centerLat, double semiMajor, double semiMinor, double majorAzimuth);

					/// <summary>
					/// 由椭圆创建球面折线
					/// </summary>
					/// <param name="centerLon">椭圆中心经度(度)</param>
					/// <param name="centerLat">椭圆中心纬度(度)</param>
					/// <param name="semiMajor">椭圆长半轴长度(米)</param>
					/// <param name="semiMinor">椭圆短半轴长度(米)</param>
					/// <param name="majorAzimuth">长半轴的大地方位角(度,正北方向为0,顺时针为正)</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.LineString CreateFromEllipse(double centerLon, double centerLat, double semiMajor, double semiMinor, double majorAzimuth)
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromEllipse_CLineString_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, centerLon, centerLat, semiMajor, semiMinor, majorAzimuth);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.LineString csObj = new EarthView.World.Spatial.Geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLineString");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.LineString;
							csObj.BindNativeObject(__ptr, "CLineString");
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
					private static extern IntPtr EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromPoints_CLineString_CCoordinate_ev_uint32(IntPtr pNativeObject, IntPtr points, uint nCount);

					/// <summary>
					/// 由点创建球面折线（暂未实现）
					/// </summary>
					/// <param name="points">点串</param>
					/// <param name="nCount">点数</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Geometry.LineString CreateFromPoints(EarthView.World.Spatial.Geometry.Coordinate points, uint nCount)
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromPoints_CLineString_CCoordinate_ev_uint32(this.NativeObject, object.Equals(points, null) ? IntPtr.Zero : points.NativeObject, nCount);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.LineString csObj = new EarthView.World.Spatial.Geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLineString");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.LineString;
							csObj.BindNativeObject(__ptr, "CLineString");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadSphereGeometryFactory = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CSphereGeometryFactory", new SphereGeometryFactoryClassFactory());

					public SphereGeometryFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SphereGeometryFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SphereGeometryFactory obj = baseObj as  SphereGeometryFactory;
						if (object.Equals(obj, null))
						{
							obj = new SphereGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSphereGeometryFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SphereGeometryFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SphereGeometryFactory emptyInstance = new SphereGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
