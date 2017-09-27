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
			namespace Math
			{
				public class MathUtility : EarthView.World.Core.BaseObject
				{
					public MathUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMathUtility",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);

					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(double latitude, double longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(latitude, longitude, radius);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CDegree_CDegree_ev_real64(IntPtr latitude, IntPtr longitude, double radius);

					/// <summary>
					/// 由经纬度和到球心的距离计算笛卡尔坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">到球心的距离</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CDegree_CDegree_ev_real64(object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject, radius);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CRadian_CRadian_ev_real64(IntPtr latitude, IntPtr longitude, double radius);

					/// <summary>
					/// 由经纬度和到球心的距离计算笛卡尔坐标
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="radius">到球心的距离</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(EarthView.World.Spatial.Math.Radian latitude, EarthView.World.Spatial.Math.Radian longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CRadian_CRadian_ev_real64(object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject, radius);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_cartesianToSpherical_CVector3_CVector3(IntPtr v);

					/// <summary>
					/// 由笛卡尔坐标转极坐标
					/// </summary>
					/// <param name="v">笛卡尔坐标系坐标点</param>
					/// <returns>极坐标(x:到球心的距离；y：纬度，以弧度为单位；z：经度,以弧度为单位)</returns>
					public static EarthView.World.Spatial.Math.Vector3 CartesianToSpherical(EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_cartesianToSpherical_CVector3_CVector3(object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 球面上两点求距离
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <returns>球面上的距离，弧度为单位</returns>
					public static double SphericalDistance(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_Azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 给定两点经纬度计算方位角（正北方向偏角）
					/// </summary>
					/// <param name="latA">A点纬度(度)</param>
					/// <param name="lonA">A点经度(度)</param>
					/// <param name="latB">B点纬度(度)</param>
					/// <param name="lonB">B点经度(度)</param>
					/// <returns>方位角 (度) </returns>
					public static double Azimuth(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_Azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(double latA, double lonA, double latB, double lonB, ref double frkAngle, IntPtr raxis);

					/// <summary>
					/// 球面上两点的矩离和两点的转轴
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="frkAngle">两点的间距（弧度）</param>
					/// <param name="raxis">转轴（已单位化）</param>
					///<returns>有无旋转</returns>
					public static bool GetRotationAngleAxis(double latA, double lonA, double latB, double lonB, ref double frkAngle, ref EarthView.World.Spatial.Math.Vector3 raxis)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(latA, lonA, latB, lonB, ref frkAngle, object.Equals(raxis, null) ? IntPtr.Zero : raxis.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB, double ratio, ref double latitude, ref double longitude);

					public static bool GetInterpolaterLatitudeLongitude(double latA, double lonA, double latB, double lonB, double ratio, ref double latitude, ref double longitude)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB, ratio, ref latitude, ref longitude);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree(IntPtr latA, IntPtr lonA, IntPtr latB, IntPtr lonB, double ratio, IntPtr latitude, IntPtr longitude);

					public static bool GetInterpolaterLatitudeLongitude(EarthView.World.Spatial.Math.Degree latA, EarthView.World.Spatial.Math.Degree lonA, EarthView.World.Spatial.Math.Degree latB, EarthView.World.Spatial.Math.Degree lonB, double ratio, ref EarthView.World.Spatial.Math.Degree latitude, ref EarthView.World.Spatial.Math.Degree longitude)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree(object.Equals(latA, null) ? IntPtr.Zero : latA.NativeObject, object.Equals(lonA, null) ? IntPtr.Zero : lonA.NativeObject, object.Equals(latB, null) ? IntPtr.Zero : latB.NativeObject, object.Equals(lonB, null) ? IntPtr.Zero : lonB.NativeObject, ratio, object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CVector3(IntPtr latA, IntPtr lonA, IntPtr latB, IntPtr lonB, ref double frkAngle, IntPtr raxis);

					/// <summary>
					/// 球面上两点的矩离和两点的转轴
					/// </summary>
					/// <param name="latA">第一个的点的纬度（度）</param>
					/// <param name="lonA">第一个的点的经度（度）</param>
					/// <param name="latB">第二个的点的纬度（度）</param>
					/// <param name="lonB">第二个的点的经度（度）</param>
					/// <param name="ev_real64">两点的间距（弧度）</param>
					/// <param name="raxis">转轴（已单位化）</param>
					///<returns>有无旋转</returns>
					public static bool GetRotationAngleAxis(EarthView.World.Spatial.Math.Degree latA, EarthView.World.Spatial.Math.Degree lonA, EarthView.World.Spatial.Math.Degree latB, EarthView.World.Spatial.Math.Degree lonB, ref double frkAngle, ref EarthView.World.Spatial.Math.Vector3 raxis)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CVector3(object.Equals(latA, null) ? IntPtr.Zero : latA.NativeObject, object.Equals(lonA, null) ? IntPtr.Zero : lonA.NativeObject, object.Equals(latB, null) ? IntPtr.Zero : latB.NativeObject, object.Equals(lonB, null) ? IntPtr.Zero : lonB.NativeObject, ref frkAngle, object.Equals(raxis, null) ? IntPtr.Zero : raxis.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_unProject_void_CVector3_CMatrix4_CMatrix4_CMatrix4_CVector3(IntPtr scenePoint, IntPtr modelViewMatrix, IntPtr projectMatrix, IntPtr viewportMatrix, IntPtr worldPoint);

					/// <summary>
					/// 计屏幕上的点在世界坐标系中的坐标
					/// </summary>
					/// <param name="scenePoint">屏幕坐标系中的点的坐标。z值在(0-1)</param>
					/// <param name="modelViewMatrix">模型视图变换矩阵</param>
					/// <param name="projectMatrix">投影变换矩阵</param>
					/// <param name="viewportMatrix">视口变换矩阵</param>
					/// <param name="worldPoint">世界坐标系中的点</param
					///<returns></returns>
					public static void UnProject(EarthView.World.Spatial.Math.Vector3 scenePoint, EarthView.World.Spatial.Math.Matrix4 modelViewMatrix, EarthView.World.Spatial.Math.Matrix4 projectMatrix, EarthView.World.Spatial.Math.Matrix4 viewportMatrix, ref EarthView.World.Spatial.Math.Vector3 worldPoint)
					{
						EarthView_World_Spatial_Math_CMathUtility_unProject_void_CVector3_CMatrix4_CMatrix4_CMatrix4_CVector3(object.Equals(scenePoint, null) ? IntPtr.Zero : scenePoint.NativeObject, object.Equals(modelViewMatrix, null) ? IntPtr.Zero : modelViewMatrix.NativeObject, object.Equals(projectMatrix, null) ? IntPtr.Zero : projectMatrix.NativeObject, object.Equals(viewportMatrix, null) ? IntPtr.Zero : viewportMatrix.NativeObject, object.Equals(worldPoint, null) ? IntPtr.Zero : worldPoint.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_ev_real64_ev_real64(int screenX, int screenY, double worldradius, byte isOutside, IntPtr modelViewMatrix, IntPtr projectMatrix, IntPtr viewportMatrix, ref double latitude, ref double longitude);

					/// <summary>
					/// 计屏幕上的点计逄经纬度
					/// </summary>
					/// <param name="screenX">点的x坐标</param>
					/// <param name="screenY">点的y坐标阵</param>
					/// <param name="worldradius">球的斗径</param>
					/// <param name="isOutside">是否是外面的点</param>
					/// <param name="modelViewMatrix">模型视图变换矩阵</param>
					/// <param name="projectMatrix">投影变换矩阵</param>
					/// <param name="viewportMatrix">视口变换矩阵</param>
					/// <param name="latitude">球面上的经度</param>
					/// <param name="longitude">球面上的纬度</param>
					///<returns>是否相交</returns>
					public static bool PickingRayIntersection(int screenX, int screenY, double worldradius, bool isOutside, EarthView.World.Spatial.Math.Matrix4 modelViewMatrix, EarthView.World.Spatial.Math.Matrix4 projectMatrix, EarthView.World.Spatial.Math.Matrix4 viewportMatrix, ref double latitude, ref double longitude)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_ev_real64_ev_real64(screenX, screenY, worldradius, Convert.ToByte(isOutside), object.Equals(modelViewMatrix, null) ? IntPtr.Zero : modelViewMatrix.NativeObject, object.Equals(projectMatrix, null) ? IntPtr.Zero : projectMatrix.NativeObject, object.Equals(viewportMatrix, null) ? IntPtr.Zero : viewportMatrix.NativeObject, ref latitude, ref longitude);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_CVector3_CVector3(int screenX, int screenY, double worldradius, byte isOutside, IntPtr modelViewMatrix, IntPtr projectMatrix, IntPtr viewportMatrix, IntPtr pointA, IntPtr pointB);

					public static bool PickingRayIntersection(int screenX, int screenY, double worldradius, bool isOutside, EarthView.World.Spatial.Math.Matrix4 modelViewMatrix, EarthView.World.Spatial.Math.Matrix4 projectMatrix, EarthView.World.Spatial.Math.Matrix4 viewportMatrix, ref EarthView.World.Spatial.Math.Vector3 pointA, ref EarthView.World.Spatial.Math.Vector3 pointB)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_CVector3_CVector3(screenX, screenY, worldradius, Convert.ToByte(isOutside), object.Equals(modelViewMatrix, null) ? IntPtr.Zero : modelViewMatrix.NativeObject, object.Equals(projectMatrix, null) ? IntPtr.Zero : projectMatrix.NativeObject, object.Equals(viewportMatrix, null) ? IntPtr.Zero : viewportMatrix.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(IntPtr lookVector, IntPtr observerPostion, double worldradius, IntPtr intersectionPostion);

					/// <summary>
					/// 射线与球面上相交的点
					/// </summary>
					/// <param name="lookVector">射线方向</param>
					/// <param name="observerPostion">射线的起始点</param>
					/// <param name="worldradius">球的半径</param>
					/// <param name="isOutside">交点</param>
					///<returns>是否相交</returns>
					public static bool PickingRayIntersection(EarthView.World.Spatial.Math.Vector3 lookVector, EarthView.World.Spatial.Math.Vector3 observerPostion, double worldradius, ref EarthView.World.Spatial.Math.Vector3 intersectionPostion)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(object.Equals(lookVector, null) ? IntPtr.Zero : lookVector.NativeObject, object.Equals(observerPostion, null) ? IntPtr.Zero : observerPostion.NativeObject, worldradius, object.Equals(intersectionPostion, null) ? IntPtr.Zero : intersectionPostion.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMathUtility_pickingRayWithLookDirIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(IntPtr lookVector, IntPtr observerPostion, double worldradius, IntPtr intersectionPostion);

					public static bool PickingRayWithLookDirIntersection(EarthView.World.Spatial.Math.Vector3 lookVector, EarthView.World.Spatial.Math.Vector3 observerPostion, double worldradius, ref EarthView.World.Spatial.Math.Vector3 intersectionPostion)
					{
						byte ret=EarthView_World_Spatial_Math_CMathUtility_pickingRayWithLookDirIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(object.Equals(lookVector, null) ? IntPtr.Zero : lookVector.NativeObject, object.Equals(observerPostion, null) ? IntPtr.Zero : observerPostion.NativeObject, worldradius, object.Equals(intersectionPostion, null) ? IntPtr.Zero : intersectionPostion.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(double latitude, double longitude, double height, IntPtr quaternion, IntPtr scale);

					public static EarthView.World.Spatial.Math.Matrix4 ComputeWorldMatrix(double latitude, double longitude, double height, EarthView.World.Spatial.Math.Quaternion quaternion, EarthView.World.Spatial.Math.Vector3 scale)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(latitude, longitude, height, object.Equals(quaternion, null) ? IntPtr.Zero : quaternion.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(IntPtr mat4, ref double latitude, ref double longitude, ref double height, IntPtr quaternion, IntPtr scale);

					public static void DecomputeWorldMatrix(EarthView.World.Spatial.Math.Matrix4 mat4, ref double latitude, ref double longitude, ref double height, ref  EarthView.World.Spatial.Math.Quaternion quaternion, ref  EarthView.World.Spatial.Math.Vector3 scale)
					{
						EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject, ref latitude, ref longitude, ref height, object.Equals(quaternion, null) ? IntPtr.Zero : quaternion.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(double latitude, double longitude, double height, float rotationXDegree, float rotationYDegree, float rotationZDegree, IntPtr scale);

					public static EarthView.World.Spatial.Math.Matrix4 ComputeWorldMatrix(double latitude, double longitude, double height, float rotationXDegree, float rotationYDegree, float rotationZDegree, EarthView.World.Spatial.Math.Vector3 scale)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(latitude, longitude, height, rotationXDegree, rotationYDegree, rotationZDegree, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(IntPtr mat4, ref double latitude, ref double longitude, ref double height, ref float rotationXDegree, ref float rotationYDegree, ref float rotationZDegree, IntPtr scale);

					public static void DecomputeWorldMatrix(EarthView.World.Spatial.Math.Matrix4 mat4, ref double latitude, ref double longitude, ref double height, ref float rotationXDegree, ref float rotationYDegree, ref float rotationZDegree, ref  EarthView.World.Spatial.Math.Vector3 scale)
					{
						EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(object.Equals(mat4, null) ? IntPtr.Zero : mat4.NativeObject, ref latitude, ref longitude, ref height, ref rotationXDegree, ref rotationYDegree, ref rotationZDegree, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_CVector3_CQuaternion_CVector3(IntPtr postion, IntPtr quaternion, IntPtr scale);

					public static EarthView.World.Spatial.Math.Matrix4 ComputeWorldMatrix(EarthView.World.Spatial.Math.Vector3 postion, EarthView.World.Spatial.Math.Quaternion quaternion, EarthView.World.Spatial.Math.Vector3 scale)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_CVector3_CQuaternion_CVector3(object.Equals(postion, null) ? IntPtr.Zero : postion.NativeObject, object.Equals(quaternion, null) ? IntPtr.Zero : quaternion.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_latitudeDegreeToMercator_ev_real64_ev_real64(double degree);

					public static double LatitudeDegreeToMercator(double degree)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_latitudeDegreeToMercator_ev_real64_ev_real64(degree);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_longitudeDegreeToMercator_ev_real64_ev_real64(double degree);

					public static double LongitudeDegreeToMercator(double degree)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_longitudeDegreeToMercator_ev_real64_ev_real64(degree);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_mercatorToLatitudeDegree_ev_real64_ev_real64(double radian);

					public static double MercatorToLatitudeDegree(double radian)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_mercatorToLatitudeDegree_ev_real64_ev_real64(radian);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_mercatorToLongitudeDegree_ev_real64_ev_real64(double radian);

					public static double MercatorToLongitudeDegree(double radian)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_mercatorToLongitudeDegree_ev_real64_ev_real64(radian);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern long EarthView_World_Spatial_Math_CMathUtility_getColFromLongitude_ev_int64_ev_real64_ev_real64(double longitude, double tileSize);

					/// <summary>
					/// 从经度获取瓦片所在列
					/// </summary>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="tileSize">瓦片大小</param>
					///<returns>瓦片所在列</returns>
					public static long GetColFromLongitude(double longitude, double tileSize)
					{
						long ret=EarthView_World_Spatial_Math_CMathUtility_getColFromLongitude_ev_int64_ev_real64_ev_real64(longitude, tileSize);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern long EarthView_World_Spatial_Math_CMathUtility_getRowFromLatitude_ev_int64_ev_real64_ev_real64(double latitude, double tileSize);

					/// <summary>
					/// 从纬度获取瓦片所在行
					/// </summary>
					/// <param name="longitude">纬度，单位为度</param>
					/// <param name="tileSize">瓦片大小</param>
					///<returns>瓦片所在行</returns>
					public static long GetRowFromLatitude(double latitude, double tileSize)
					{
						long ret=EarthView_World_Spatial_Math_CMathUtility_getRowFromLatitude_ev_int64_ev_real64_ev_real64(latitude, tileSize);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMathUtility_computeAxisMatrix_CMatrix3_CDegree_CDegree_ev_real64(IntPtr latitude, IntPtr longitude, double radius);

					public static EarthView.World.Spatial.Math.Matrix3 ComputeAxisMatrix(EarthView.World.Spatial.Math.Degree latitude, EarthView.World.Spatial.Math.Degree longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMathUtility_computeAxisMatrix_CMatrix3_CDegree_CDegree_ev_real64(object.Equals(latitude, null) ? IntPtr.Zero : latitude.NativeObject, object.Equals(longitude, null) ? IntPtr.Zero : longitude.NativeObject, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_computeCameraTilt_ev_real64_CVector3_CVector3_CVector3_CVector3(IntPtr target, IntPtr observer, IntPtr upVector, IntPtr localCenter);

					public static double ComputeCameraTilt(EarthView.World.Spatial.Math.Vector3 target, EarthView.World.Spatial.Math.Vector3 observer, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Vector3 localCenter)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_computeCameraTilt_ev_real64_CVector3_CVector3_CVector3_CVector3(object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMathUtility_computeCameraHeading_ev_real64_CVector3_CVector3_ev_real64_CVector3_CVector3(IntPtr up, IntPtr look, double tiltRadious, IntPtr target, IntPtr localCenter);

					public static double ComputeCameraHeading(EarthView.World.Spatial.Math.Vector3 up, EarthView.World.Spatial.Math.Vector3 look, double tiltRadious, EarthView.World.Spatial.Math.Vector3 target, EarthView.World.Spatial.Math.Vector3 localCenter)
					{
						double ret=EarthView_World_Spatial_Math_CMathUtility_computeCameraHeading_ev_real64_CVector3_CVector3_ev_real64_CVector3_CVector3(object.Equals(up, null) ? IntPtr.Zero : up.NativeObject, object.Equals(look, null) ? IntPtr.Zero : look.NativeObject, tiltRadious, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_adjustTarget_void_CVector3_CVector3_CVector3_CVector3_ev_real64(IntPtr oldTarget, IntPtr observer, IntPtr target, IntPtr localCenter, double worldradius);

					public static void AdjustTarget(EarthView.World.Spatial.Math.Vector3 oldTarget, EarthView.World.Spatial.Math.Vector3 observer, ref EarthView.World.Spatial.Math.Vector3 target, EarthView.World.Spatial.Math.Vector3 localCenter, double worldradius)
					{
						EarthView_World_Spatial_Math_CMathUtility_adjustTarget_void_CVector3_CVector3_CVector3_CVector3_ev_real64(object.Equals(oldTarget, null) ? IntPtr.Zero : oldTarget.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject, worldradius);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_transformKMLCameraTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_CVector3_CVector3_CVector3(IntPtr cameraLatitude, IntPtr cameraLongitude, double radius, IntPtr heading, IntPtr tilt, IntPtr roll, IntPtr target, IntPtr observer, IntPtr upVector);

					public static void TransformKMLCameraTag(EarthView.World.Spatial.Math.Degree cameraLatitude, EarthView.World.Spatial.Math.Degree cameraLongitude, double radius, EarthView.World.Spatial.Math.Degree heading, EarthView.World.Spatial.Math.Degree tilt, EarthView.World.Spatial.Math.Degree roll, ref EarthView.World.Spatial.Math.Vector3 target, ref EarthView.World.Spatial.Math.Vector3 observer, ref EarthView.World.Spatial.Math.Vector3 upVector)
					{
						EarthView_World_Spatial_Math_CMathUtility_transformKMLCameraTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_CVector3_CVector3_CVector3(object.Equals(cameraLatitude, null) ? IntPtr.Zero : cameraLatitude.NativeObject, object.Equals(cameraLongitude, null) ? IntPtr.Zero : cameraLongitude.NativeObject, radius, object.Equals(heading, null) ? IntPtr.Zero : heading.NativeObject, object.Equals(tilt, null) ? IntPtr.Zero : tilt.NativeObject, object.Equals(roll, null) ? IntPtr.Zero : roll.NativeObject, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_transformKMLLookAtTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64_CVector3_CVector3_CVector3(IntPtr targetLatitude, IntPtr targetLongitude, double radius, IntPtr heading, IntPtr tilt, double range, IntPtr target, IntPtr observer, IntPtr upVector);

					public static void TransformKMLLookAtTag(EarthView.World.Spatial.Math.Degree targetLatitude, EarthView.World.Spatial.Math.Degree targetLongitude, double radius, EarthView.World.Spatial.Math.Degree heading, EarthView.World.Spatial.Math.Degree tilt, double range, ref EarthView.World.Spatial.Math.Vector3 target, ref EarthView.World.Spatial.Math.Vector3 observer, ref EarthView.World.Spatial.Math.Vector3 upVector)
					{
						EarthView_World_Spatial_Math_CMathUtility_transformKMLLookAtTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64_CVector3_CVector3_CVector3(object.Equals(targetLatitude, null) ? IntPtr.Zero : targetLatitude.NativeObject, object.Equals(targetLongitude, null) ? IntPtr.Zero : targetLongitude.NativeObject, radius, object.Equals(heading, null) ? IntPtr.Zero : heading.NativeObject, object.Equals(tilt, null) ? IntPtr.Zero : tilt.NativeObject, range, object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double(IntPtr target, IntPtr observer, IntPtr up, double worldradius, ref double latitude, ref double longitude, ref double heading, ref double tilt, ref double altitude, ref double moditifAltitude);

					public static void TransformToCameraPostion(EarthView.World.Spatial.Math.Vector3 target, EarthView.World.Spatial.Math.Vector3 observer, EarthView.World.Spatial.Math.Vector3 up, double worldradius, ref double latitude, ref double longitude, ref double heading, ref double tilt, ref double altitude, ref double moditifAltitude)
					{
						EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double(object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(up, null) ? IntPtr.Zero : up.NativeObject, worldradius, ref latitude, ref longitude, ref heading, ref tilt, ref altitude, ref moditifAltitude);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double_ev_real64(IntPtr target, IntPtr observer, IntPtr up, double worldradius, ref double latitude, ref double longitude, ref double heading, ref double tilt, ref double altitude, ref double moditifAltitude, ref double distance);

					public static void TransformToCameraPostion(EarthView.World.Spatial.Math.Vector3 target, EarthView.World.Spatial.Math.Vector3 observer, EarthView.World.Spatial.Math.Vector3 up, double worldradius, ref double latitude, ref double longitude, ref double heading, ref double tilt, ref double altitude, ref double moditifAltitude, ref double distance)
					{
						EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double_ev_real64(object.Equals(target, null) ? IntPtr.Zero : target.NativeObject, object.Equals(observer, null) ? IntPtr.Zero : observer.NativeObject, object.Equals(up, null) ? IntPtr.Zero : up.NativeObject, worldradius, ref latitude, ref longitude, ref heading, ref tilt, ref altitude, ref moditifAltitude, ref distance);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadMathUtility = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMathUtility = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMathUtility", new MathUtilityClassFactory());

					public MathUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MathUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MathUtility obj = baseObj as  MathUtility;
						if (object.Equals(obj, null))
						{
							obj = new MathUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMathUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MathUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MathUtility emptyInstance = new MathUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
