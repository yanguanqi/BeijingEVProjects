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
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Utility
			{
				public class SpatialCalculator : EarthView.World.Core.BaseObject
				{
					public SpatialCalculator() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialCalculator",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public enum EVAXISUPTYPE
					{
										AUT_XAxisUP = 0,
										AUT_YAxisUP,
										AUT_ZAxisUP
					
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Utility_CSpatialCalculator_intersect_ev_bool_CRay_CViewport_CMatrix4_CVertexData_CIndexData_OperationType_CullingMode_CVector3(IntPtr ray, IntPtr viewport, IntPtr worldMatrix, IntPtr vData, IntPtr iData, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE ot, EarthView.World.Graphic.CULLINGMODE mode, IntPtr point);

					public static bool Intersect(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Graphic.Viewport viewport, EarthView.World.Spatial.Math.Matrix4 worldMatrix, EarthView.World.Graphic.VertexData vData, EarthView.World.Graphic.IndexData iData, EarthView.World.Graphic.RenderOperation.OPERATIONTYPE ot, EarthView.World.Graphic.CULLINGMODE mode, ref EarthView.World.Spatial.Math.Vector3 point)
					{
						byte ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_intersect_ev_bool_CRay_CViewport_CMatrix4_CVertexData_CIndexData_OperationType_CullingMode_CVector3(object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(viewport, null) ? IntPtr.Zero : viewport.NativeObject, object.Equals(worldMatrix, null) ? IntPtr.Zero : worldMatrix.NativeObject, object.Equals(vData, null) ? IntPtr.Zero : vData.NativeObject, object.Equals(iData, null) ? IntPtr.Zero : iData.NativeObject, ot, mode, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);

					/// <summary>
					/// 由经纬度和地球半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">点到球心的距离</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(double latitude, double longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(latitude, longitude, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CRadian_CRadian_Real(IntPtr latitude, IntPtr longitude, double radius);

					/// <summary>
					/// 由经纬度和地球半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">点到球心的距离</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(EarthView.World.Spatial.Math.Radian latitude, EarthView.World.Spatial.Math.Radian longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CRadian_CRadian_Real(object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CDegree_CDegree_Real(IntPtr latitude, IntPtr longitude, double radius);

					/// <summary>
					/// 由经纬度和地球半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">点到球心的距离</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CDegree_CDegree_Real(object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartesianToSpherical_CVector3_CVector3(IntPtr v);

					/// <summary>
					/// 笛卡尔坐标转极坐标
					/// </summary>
					/// <param name="EarthView::World::Spatial::Math::CVector3">笛卡尔坐标系坐标点</param>
					/// <returns>极坐标系 x:点到球心的距离; y:纬度(单位为弧度); z:经度(单位为弧度)</returns>
					public static EarthView.World.Spatial.Math.Vector3 CartesianToSpherical(EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartesianToSpherical_CVector3_CVector3(object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 球面上两点求距离
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <returns>球面上的距离，单位为弧度</returns>
					public static double SphericalDistance(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Utility_CSpatialCalculator_distance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double altA, double latB, double lonB, double altB);

					/// <summary>
					/// 空间两点求距离
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="altA">第一个的高程（米）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="altB">第二个的高程（米）</param>
					/// <returns>空间距离,单位为米</returns>
					public static double Distance(double latA, double lonA, double altA, double latB, double lonB, double altB)
					{
						double ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_distance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, altA, latB, lonB, altB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_getRotationAngleAxis_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(double latA, double lonA, double latB, double lonB, ref double frkAngle, IntPtr raxis);

					/// <summary>
					/// 球面上两点的矩离和两点的转轴
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="ev_real64">两点的间距（弧度）</param>
					/// <param name="raxis">转轴（已单位化）</param>
					public static void GetRotationAngleAxis(double latA, double lonA, double latB, double lonB, ref double frkAngle, ref EarthView.World.Spatial.Math.Vector3 raxis)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_getRotationAngleAxis_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(latA, lonA, latB, lonB, ref frkAngle, object.Equals(raxis, null) ? IntPtr.Zero : raxis.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr sr, ref double in_x, ref double in_y, ref double in_z, ref double latitude, ref double longitude, ref double radius);

					/// <summary>
					/// 由投影坐标转换成地理坐标
					/// </summary>
					/// <param name="sr">空间参考系统参数</param>
					/// <param name="in_x">东坐标(m)</param>
					/// <param name="in_y">北坐标(m)</param>
					/// <param name="in_z">高程(m)</param>                   
					/// <param name="latitude">纬度(°)</param>
					/// <param name="longitude">经度(°)</param>
					/// <param name="radius">高程</param>
					/// <returns>true表示成功</returns>
					public static void ProjCoordinateToGeoCoordinate(EarthView.World.Spatial.Geometry.Ispatialreference sr, double in_x, double in_y, double in_z, ref double latitude, ref double longitude, ref double radius)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, ref in_x, ref in_y, ref in_z, ref latitude, ref longitude, ref radius);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64(IntPtr sr, ref double x, ref double y, ref double z);

					/// <summary>
					/// 由投影坐标转换成地理坐标
					/// </summary>
					/// <param name="sr">空间参考系统参数</param>
					/// <param name="x">东坐标</param>
					/// <param name="y">北坐标</param>
					/// <param name="z">高程</param>                    
					/// <returns>true表示成功</returns>
					public static void ProjCoordinateToGeoCoordinate(EarthView.World.Spatial.Geometry.Ispatialreference sr, ref double x, ref double y, ref double z)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, ref x, ref y, ref z);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_uint32_ev_real64_ev_real64_ev_real64(IntPtr sr, uint nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ);

					/// <summary>
					/// 由投影坐标转换成地理坐标
					/// </summary>
					/// <param name="sr">空间参考系统参数</param>
					/// <param name="nCount">坐标个数</param>   
					/// <param name="pdfX">东坐标</param>
					/// <param name="pdfY">北坐标</param>
					/// <param name="pdfZ">高程</param>        
					/// <returns>true表示成功</returns>
					public static void ProjCoordinateToGeoCoordinate(EarthView.World.Spatial.Geometry.Ispatialreference sr, uint nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_uint32_ev_real64_ev_real64_ev_real64(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, nCount, pdfX, pdfY, pdfZ);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_geoCoordinateToProjCoordinate_void_CVector3_CVector3_ISpatialReference(IntPtr srcCoordinate, IntPtr resCoordinate, IntPtr sr);

					/// <summary>
					/// 地理坐标转投影坐标，相同椭球体
					/// </summary>					
					/// <param name="srcCoordinate">源地理坐标</param>
					/// <param name="resCoordinate">目标投影坐标</param>
					/// <param name="sr">目标参考</param>
					/// <returns></returns>
					public static void GeoCoordinateToProjCoordinate(EarthView.World.Spatial.Math.Vector3 srcCoordinate, ref EarthView.World.Spatial.Math.Vector3 resCoordinate, EarthView.World.Spatial.Geometry.Ispatialreference sr)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_geoCoordinateToProjCoordinate_void_CVector3_CVector3_ISpatialReference(object.Equals(srcCoordinate, null) ? IntPtr.Zero : srcCoordinate.NativeObject, object.Equals(resCoordinate, null) ? IntPtr.Zero : resCoordinate.NativeObject, object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_coordinateToCartesian_void_ISpatialReference_CVector3_CVector3(IntPtr sr, IntPtr srcCoordinate, IntPtr resCoordinate);

					/// <summary>
					/// 地理坐标或投影坐标转换为笛卡尔坐标
					/// </summary>
					/// <param name="sr">空间参考</param>
					/// <param name="srcCoordinate">源坐标</param>
					/// <param name="resCoordinate">目标坐标</param>
					/// <returns>三维图形转换信息</returns>
					public static void CoordinateToCartesian(EarthView.World.Spatial.Geometry.Ispatialreference sr, EarthView.World.Spatial.Math.Vector3 srcCoordinate, ref EarthView.World.Spatial.Math.Vector3 resCoordinate)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_coordinateToCartesian_void_ISpatialReference_CVector3_CVector3(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, object.Equals(srcCoordinate, null) ? IntPtr.Zero : srcCoordinate.NativeObject, object.Equals(resCoordinate, null) ? IntPtr.Zero : resCoordinate.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartensionToCoordinate_void_ISpatialReference_CVector3_CVector3(IntPtr sr, IntPtr srcCoordinate, IntPtr resCoordinate);

					/// <summary>
					/// 笛卡尔坐标转地理坐标或投影坐标
					/// </summary>
					/// <param name="sr">参考</param>
					/// <param name="srcCoordinate">源坐标</param>
					/// <param name="resCoordinate">目标坐标</param>
					/// <returns>三维图形转换信息</returns>
					public static void CartensionToCoordinate(EarthView.World.Spatial.Geometry.Ispatialreference sr, EarthView.World.Spatial.Math.Vector3 srcCoordinate, ref EarthView.World.Spatial.Math.Vector3 resCoordinate)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartensionToCoordinate_void_ISpatialReference_CVector3_CVector3(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, object.Equals(srcCoordinate, null) ? IntPtr.Zero : srcCoordinate.NativeObject, object.Equals(resCoordinate, null) ? IntPtr.Zero : resCoordinate.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Utility_CSpatialCalculator_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(IntPtr node0, IntPtr node1, IntPtr node2, IntPtr node3);

					/// <summary>
					/// 判断两条线段是否相交，不包含边界，输入点为经纬度坐标
					/// </summary>
					/// <param name="node0">线段1端点,地理坐标</param>
					/// <param name="node1">线段1端点,地理坐标</param>
					/// <param name="node2">线段2端点,地理坐标</param>
					/// <param name="node3">线段2端点,地理坐标</param>
					/// <returns>两条线段是否相交</returns>
					public static bool CalculateIntersection(EarthView.World.Spatial.Math.Vector3 node0, EarthView.World.Spatial.Math.Vector3 node1, EarthView.World.Spatial.Math.Vector3 node2, EarthView.World.Spatial.Math.Vector3 node3)
					{
						byte ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(object.Equals(node0, null) ? IntPtr.Zero : node0.NativeObject, object.Equals(node1, null) ? IntPtr.Zero : node1.NativeObject, object.Equals(node2, null) ? IntPtr.Zero : node2.NativeObject, object.Equals(node3, null) ? IntPtr.Zero : node3.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Utility_CSpatialCalculator_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 由两点间的经纬度计算出两点的圆心的夹角
					/// </summary>
					/// <param name="latA">第一点的纬度，角度制</param>
					/// <param name="lonA">第一点的经度，角度制</param>
					/// <param name="latB">第二点的纬度，角度制</param>
					/// <param name="lonB">第二点的经度，角度制</param>
					/// <returns>两点间圆心角的大小，弧度制</returns>
					public static double ApproxAngularDistance(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Utility_CSpatialCalculator_interpolate_ev_real64_CVector3_VertexList_ev_int32(IntPtr point, IntPtr arry, int power);

					/// <summary>
					/// 反距离权重插值
					/// </summary>
					/// <param name="point">需要插值的点</param>
					/// <param name="arry">离计算点最近的插值点</param>
					/// <param name="power">采用的幂次方</param>
					/// <returns>插值结果值</returns>
					public static double Interpolate(EarthView.World.Spatial.Math.Vector3 point, EarthView.World.Spatial.Math.VertexList arry, int power)
					{
						double ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_interpolate_ev_real64_CVector3_VertexList_ev_int32(object.Equals(point, null) ? IntPtr.Zero : point.NativeObject, object.Equals(arry, null) ? IntPtr.Zero : arry.NativeObject, power);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(double lat, double lon, double alt, IntPtr scaleInLocal, IntPtr orientInLocal);

					public static EarthView.World.Spatial.Math.Matrix4 ComposeWorldMatrix(double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 scaleInLocal, EarthView.World.Spatial.Math.Quaternion orientInLocal)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(lat, lon, alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(IntPtr worldMatrix, ref double lat, ref double lon, ref double alt, IntPtr scaleInLocal, IntPtr orientInLocal);

					public static void DecomposeWorldMatrix(EarthView.World.Spatial.Math.Matrix4 worldMatrix, ref double lat, ref double lon, ref double alt, ref EarthView.World.Spatial.Math.Vector3 scaleInLocal, ref EarthView.World.Spatial.Math.Quaternion orientInLocal)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(object.Equals(worldMatrix, null) ? IntPtr.Zero : worldMatrix.NativeObject, ref lat, ref lon, ref alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(double lat, double lon, double alt, IntPtr scaleInLocal, IntPtr orientInLocal, EarthView.World.Spatial3D.Utility.SpatialCalculator.EVAXISUPTYPE axisUpType);

					public static EarthView.World.Spatial.Math.Matrix4 ComposeWorldMatrix(double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 scaleInLocal, EarthView.World.Spatial.Math.Quaternion orientInLocal, EarthView.World.Spatial3D.Utility.SpatialCalculator.EVAXISUPTYPE axisUpType)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(lat, lon, alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject, axisUpType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(IntPtr worldMatrix, ref double lat, ref double lon, ref double alt, IntPtr scaleInLocal, IntPtr orientInLocal, EarthView.World.Spatial3D.Utility.SpatialCalculator.EVAXISUPTYPE axisUpType);

					public static void DecomposeWorldMatrix(EarthView.World.Spatial.Math.Matrix4 worldMatrix, ref double lat, ref double lon, ref double alt, ref EarthView.World.Spatial.Math.Vector3 scaleInLocal, ref EarthView.World.Spatial.Math.Quaternion orientInLocal, EarthView.World.Spatial3D.Utility.SpatialCalculator.EVAXISUPTYPE axisUpType)
					{
						EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(object.Equals(worldMatrix, null) ? IntPtr.Zero : worldMatrix.NativeObject, ref lat, ref lon, ref alt, object.Equals(scaleInLocal, null) ? IntPtr.Zero : scaleInLocal.NativeObject, object.Equals(orientInLocal, null) ? IntPtr.Zero : orientInLocal.NativeObject, axisUpType);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Utility_CSpatialCalculator_visibleDistance_Real_CVector3(IntPtr vCamera);

					/// <summary>
					/// 球面视距计算(目的:剔除海平面以下的物体)
					///         /----------------
					///  d =   /  h ^2 + 2 h r           (h > 0)
					///      \/
					/// </summary>
					/// <param name="vCamera">相机向量</param>
					/// <returns>当前镜头高度下的视距</returns>
					public static double VisibleDistance(EarthView.World.Spatial.Math.Vector3 vCamera)
					{
						double ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_visibleDistance_Real_CVector3(object.Equals(vCamera, null) ? IntPtr.Zero : vCamera.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64_ev_real64(IntPtr sr, IntPtr pEnvelope, double minz, double maxz, double ex);

					public static EarthView.World.Spatial.Math.AxisAlignedBox Envelope2Box(EarthView.World.Spatial.Geometry.Ispatialreference sr, EarthView.World.Spatial.Geometry.Ienvelope pEnvelope, double minz, double maxz, double ex)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64_ev_real64(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, object.Equals(pEnvelope, null) ? IntPtr.Zero : pEnvelope.NativeObject, minz, maxz, ex);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
							csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64(IntPtr sr, IntPtr pEnvelope, double minz, double maxz);

					public static EarthView.World.Spatial.Math.AxisAlignedBox Envelope2Box(EarthView.World.Spatial.Geometry.Ispatialreference sr, EarthView.World.Spatial.Geometry.Ienvelope pEnvelope, double minz, double maxz)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64(object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject, object.Equals(pEnvelope, null) ? IntPtr.Zero : pEnvelope.NativeObject, minz, maxz);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.AxisAlignedBox csObj = new EarthView.World.Spatial.Math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.AxisAlignedBox;
							csObj.BindNativeObject(__ptr, "CAxisAlignedBox");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Utility_CSpatialCalculator_upwardsHorizon_ev_bool_CVector3_CVector3(IntPtr vCamera, IntPtr vPoint);

					public static bool UpwardsHorizon(EarthView.World.Spatial.Math.Vector3 vCamera, EarthView.World.Spatial.Math.Vector3 vPoint)
					{
						byte ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_upwardsHorizon_ev_bool_CVector3_CVector3(object.Equals(vCamera, null) ? IntPtr.Zero : vCamera.NativeObject, object.Equals(vPoint, null) ? IntPtr.Zero : vPoint.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DCalculator_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Utility_CSpatialCalculator_getGeometryCenter_ev_bool_IGeometry_CVector3(IntPtr geometry, IntPtr center);

					/// <summary>
					/// 获取geometry中心点
					/// </summary>
					/// <param name="geometry">geometry</param>
					/// <param name="center">中心点，坐标系同geometry</param>
					/// <returns>正确获取</returns>
					public static bool GetGeometryCenter(EarthView.World.Spatial.Geometry.Igeometry geometry, ref EarthView.World.Spatial.Math.Vector3 center)
					{
						byte ret=EarthView_World_Spatial3D_Utility_CSpatialCalculator_getGeometryCenter_ev_bool_IGeometry_CVector3(object.Equals(geometry, null) ? IntPtr.Zero : geometry.NativeObject, object.Equals(center, null) ? IntPtr.Zero : center.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_d.dll");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_d.so");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp_d.so");

						#else 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_d.dll");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator.dll");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator.so");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp.so");

						#else 
							private static bool bLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator.dll");
							private static bool csbLoadSpatialCalculator = LoadDll.Load("EV_Spatial3DCalculator_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Utility::CSpatialCalculator", new SpatialCalculatorClassFactory());

					public SpatialCalculator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SpatialCalculator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialCalculator obj = baseObj as  SpatialCalculator;
						if (object.Equals(obj, null))
						{
							obj = new SpatialCalculator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialCalculator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialCalculatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialCalculator emptyInstance = new SpatialCalculator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
