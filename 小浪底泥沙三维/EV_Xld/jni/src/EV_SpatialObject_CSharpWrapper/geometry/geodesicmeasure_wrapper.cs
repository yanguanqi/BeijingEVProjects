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
				/// <summary>
				/// 大地测量
				/// </summary>
				public class GeodesicMeasure : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="dfSemiMajor">椭球长半轴</param>
					/// <param name="dfInvFlattening">椭球偏率倒数</param>
					/// <returns></returns>
					public GeodesicMeasure(double dfSemiMajor, double dfInvFlattening) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfSemiMajor = new BasePtr(dfSemiMajor);
						list.Add("dfSemiMajor", valuedfSemiMajor.PtrVal);
						BasePtr valuedfInvFlattening = new BasePtr(dfInvFlattening);
						list.Add("dfInvFlattening", valuedfInvFlattening.PtrVal);
						Create("CGeodesicMeasureProxy", list);
						if (!"EarthView.World.Spatial.Geometry.GeodesicMeasure".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(double longitude1, double latitude1, double longitude2, double latitude2, IntPtr polyline, uint count);

					protected distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32 m_distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32;

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
					private static extern double EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_NoVirtual(IntPtr pNativeObject, double longitude1, double latitude1, double longitude2, double latitude2, IntPtr polyline, uint count);

					/// <summary>
					/// 测量距离（两点）
					/// </summary>
					/// <param name="longitude1">第一个点经度</param>
					/// <param name="latitude1">第一个点纬度</param>
					/// <param name="longitude2">第二个点经度</param>
					/// <param name="latitude2">第二个点纬度</param>
					/// <param name="linestring">可为NULL，两点在球面进行加密</param>
					/// <param name="count">linestring为NULL时忽略此参数，设置加密点个数</param>
					/// <returns></returns>
					public virtual double DistanceMeasure_NoVirtual(double longitude1, double latitude1, double longitude2, double latitude2, EarthView.World.Spatial.Geometry.Polyline polyline, uint count)
					{
						double ret=EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_NoVirtual(this.NativeObject, longitude1, latitude1, longitude2, latitude2, object.Equals(polyline, null) ? IntPtr.Zero : polyline.NativeObject, count);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Function(double longitude1, double latitude1, double longitude2, double latitude2, IntPtr polyline, uint count)
					{
						EarthView.World.Spatial.Geometry.Polyline csobj_polyline = new EarthView.World.Spatial.Geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_polyline.BindNativeObject(polyline,"CPolyline");
						csobj_polyline.Delegate = true;
						IClassFactory csobj_polylineClassFactory = GlobalClassFactoryMap.Get(csobj_polyline.GetCppInstanceTypeName());
						if (csobj_polylineClassFactory != null)
						{
							csobj_polyline.Delegate = true;
							csobj_polyline = csobj_polylineClassFactory.Create() as EarthView.World.Spatial.Geometry.Polyline;
							csobj_polyline.BindNativeObject(polyline, "CPolyline");
							csobj_polyline.Delegate = true;
						}
						
						double csret=DistanceMeasure(longitude1, latitude1, longitude2, latitude2, csobj_polyline, count);
						
						return csret;
						
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
					private static extern double EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(IntPtr pNativeObject, double longitude1, double latitude1, double longitude2, double latitude2, IntPtr polyline, uint count);

					/// <summary>
					/// 测量距离（两点）
					/// </summary>
					/// <param name="longitude1">第一个点经度</param>
					/// <param name="latitude1">第一个点纬度</param>
					/// <param name="longitude2">第二个点经度</param>
					/// <param name="latitude2">第二个点纬度</param>
					/// <param name="linestring">可为NULL，两点在球面进行加密</param>
					/// <param name="count">linestring为NULL时忽略此参数，设置加密点个数</param>
					/// <returns></returns>
					public virtual double DistanceMeasure(double longitude1, double latitude1, double longitude2, double latitude2, EarthView.World.Spatial.Geometry.Polyline polyline, uint count)
					{
						double ret=EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(this.NativeObject, longitude1, latitude1, longitude2, latitude2, object.Equals(polyline, null) ? IntPtr.Zero : polyline.NativeObject, count);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void polylineMeasure_CallBack_void_CPolyline_ev_real64(IntPtr polyline, ref double distance);

					protected polylineMeasure_CallBack_void_CPolyline_ev_real64 m_polylineMeasure_CallBack_void_CPolyline_ev_real64;

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
					private static extern void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr polyline, ref double distance);

					/// <summary>
					/// 线长度测量polyline
					/// </summary>
					/// <param name="polygon">待测量线</param>
					/// <param name="periMeter">总长度</param>
					/// <returns></returns>
					public virtual void PolylineMeasure_NoVirtual(EarthView.World.Spatial.Geometry.Polyline polyline, ref double distance)
					{
						EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_NoVirtual(this.NativeObject, object.Equals(polyline, null) ? IntPtr.Zero : polyline.NativeObject, ref distance);
						
					}

					protected  void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Function(IntPtr polyline, ref double distance)
					{
						EarthView.World.Spatial.Geometry.Polyline csobj_polyline = new EarthView.World.Spatial.Geometry.Polyline(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_polyline.BindNativeObject(polyline,"CPolyline");
						csobj_polyline.Delegate = true;
						IClassFactory csobj_polylineClassFactory = GlobalClassFactoryMap.Get(csobj_polyline.GetCppInstanceTypeName());
						if (csobj_polylineClassFactory != null)
						{
							csobj_polyline.Delegate = true;
							csobj_polyline = csobj_polylineClassFactory.Create() as EarthView.World.Spatial.Geometry.Polyline;
							csobj_polyline.BindNativeObject(polyline, "CPolyline");
							csobj_polyline.Delegate = true;
						}
						
						PolylineMeasure(csobj_polyline, ref distance);
						
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
					private static extern void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(IntPtr pNativeObject, IntPtr polyline, ref double distance);

					/// <summary>
					/// 线长度测量polyline
					/// </summary>
					/// <param name="polygon">待测量线</param>
					/// <param name="periMeter">总长度</param>
					/// <returns></returns>
					public virtual void PolylineMeasure(EarthView.World.Spatial.Geometry.Polyline polyline, ref double distance)
					{
						EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(this.NativeObject, object.Equals(polyline, null) ? IntPtr.Zero : polyline.NativeObject, ref distance);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64(IntPtr polygon, ref double area, ref double periMeter);

					protected polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64 m_polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64;

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
					private static extern void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr polygon, ref double area, ref double periMeter);

					/// <summary>
					/// 多边形测量polygon
					/// </summary>
					/// <param name="polygon">待测量多边形</param>
					/// <param name="area">面积</param>
					/// <param name="periMeter">周长</param>
					/// <returns></returns>
					public virtual void PolygonMeasure_NoVirtual(EarthView.World.Spatial.Geometry.Polygon polygon, ref double area, ref double periMeter)
					{
						EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_NoVirtual(this.NativeObject, object.Equals(polygon, null) ? IntPtr.Zero : polygon.NativeObject, ref area, ref periMeter);
						
					}

					protected  void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Function(IntPtr polygon, ref double area, ref double periMeter)
					{
						EarthView.World.Spatial.Geometry.Polygon csobj_polygon = new EarthView.World.Spatial.Geometry.Polygon(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_polygon.BindNativeObject(polygon,"CPolygon");
						csobj_polygon.Delegate = true;
						IClassFactory csobj_polygonClassFactory = GlobalClassFactoryMap.Get(csobj_polygon.GetCppInstanceTypeName());
						if (csobj_polygonClassFactory != null)
						{
							csobj_polygon.Delegate = true;
							csobj_polygon = csobj_polygonClassFactory.Create() as EarthView.World.Spatial.Geometry.Polygon;
							csobj_polygon.BindNativeObject(polygon, "CPolygon");
							csobj_polygon.Delegate = true;
						}
						
						PolygonMeasure(csobj_polygon, ref area, ref periMeter);
						
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
					private static extern void EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr polygon, ref double area, ref double periMeter);

					/// <summary>
					/// 多边形测量polygon
					/// </summary>
					/// <param name="polygon">待测量多边形</param>
					/// <param name="area">面积</param>
					/// <param name="periMeter">周长</param>
					/// <returns></returns>
					public virtual void PolygonMeasure(EarthView.World.Spatial.Geometry.Polygon polygon, ref double area, ref double periMeter)
					{
						EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(this.NativeObject, object.Equals(polygon, null) ? IntPtr.Zero : polygon.NativeObject, ref area, ref periMeter);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadGeodesicMeasure = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CGeodesicMeasure", new GeodesicMeasureClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::CGeodesicMeasureProxy", new GeodesicMeasureClassFactory());

					public GeodesicMeasure(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(IntPtr pObject, distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(IntPtr pObject, polylineMeasure_CallBack_void_CPolyline_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(IntPtr pObject, polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32 = EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Function;
							GC.KeepAlive(m_distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(this.NativeObject, m_distanceMeasure_CallBack_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32);
							m_polylineMeasure_CallBack_void_CPolyline_ev_real64 = EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Function;
							GC.KeepAlive(m_polylineMeasure_CallBack_void_CPolyline_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(this.NativeObject, m_polylineMeasure_CallBack_void_CPolyline_ev_real64);
							m_polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64 = EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(this.NativeObject, m_polygonMeasure_CallBack_void_CPolygon_ev_real64_ev_real64);
						}
					}
					public static GeodesicMeasure FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GeodesicMeasure obj = baseObj as  GeodesicMeasure;
						if (object.Equals(obj, null))
						{
							obj = new GeodesicMeasure(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGeodesicMeasure");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GeodesicMeasureClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GeodesicMeasure emptyInstance = new GeodesicMeasure(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
