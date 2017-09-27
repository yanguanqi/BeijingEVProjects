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
				///EVSpatialReferenceStrTypes
				///标识空间参考的文本描述的文本格式
				///导入 导出空间参考的文本描述的依据
				///</summary>
				public enum EVSPATIALREFERENCESTRINGTYPE
				{
								EV_WKT = 0,
								EV_ESRI = 1,
								EV_PROJ4 = 2,
								EV_ESPG = 3,
								EV_UNKNOWNSTR = 4
				
				}

				///<summary>
				///EarthView::World::Spatial::Utility::EVDatumType
				///标识大地水准面模型
				///一般与椭球体是一一对应的
				///</summary>
				public enum EVDATUMTYPE
				{
								EV_UNKNOWND = 0,
								EV_BEIJING54D = 6214,
								EV_XIAN80D = 6610,
								EV_WGS84D = 6326,
								EV_CGCS2000D = 7019,
								EV_WGS72D = 6322,
								EV_NSWC9Z2D = 6276
				
				}

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
			namespace Geometry
			{
				/// <summary>
				/// 空间参考系类型枚举
				/// </summary>
				public enum EVSPATIALREFERENCETYPE
				{
								SST_UNKNOWN = 0,
								SST_GEOCOORDINATESYSTEM = 1,
								SST_PROJCOORDINATESYSTEM = 2
				
				}

				/// <summary>
				/// 投影坐标系统
				/// </summary>
				public class Iellipsespheriod : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getSamiMajor_CallBack_ev_real64();

					protected getSamiMajor_CallBack_ev_real64 m_getSamiMajor_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球长半轴
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetSamiMajor_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Function()
					{
						double csret=GetSamiMajor();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球长半轴
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetSamiMajor()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getInvFlattening_CallBack_ev_real64();

					protected getInvFlattening_CallBack_ev_real64 m_getInvFlattening_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球扁率倒数
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetInvFlattening_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Function()
					{
						double csret=GetInvFlattening();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球扁率倒数
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetInvFlattening()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getSphereName_CallBack_EVString();

					protected getSphereName_CallBack_EVString m_getSphereName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体名称
					/// </summary>
					/// <returns>const string</returns>
					public virtual string GetSphereName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Function()
					{
						string csret=GetSphereName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体名称
					/// </summary>
					/// <returns>const string</returns>
					public virtual string GetSphereName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getDatumType_CallBack_EVDatumType();

					protected getDatumType_CallBack_EVDatumType m_getDatumType_CallBack_EVDatumType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体对应的大地水准面模型
					/// </summary>
					/// <returns>const EarthView::World::Spatial::Utility::EVDatumType</returns>
					public virtual EarthView.World.Spatial.Utility.EVDATUMTYPE GetDatumType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Utility.EVDATUMTYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Function()
					{
						EarthView.World.Spatial.Utility.EVDATUMTYPE csret=GetDatumType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体对应的大地水准面模型
					/// </summary>
					/// <returns>const EarthView::World::Spatial::Utility::EVDatumType</returns>
					public virtual EarthView.World.Spatial.Utility.EVDATUMTYPE GetDatumType()
					{
						int ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(this.NativeObject);
						
						return (EarthView.World.Spatial.Utility.EVDATUMTYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getFromGreenWicth_CallBack_ev_real64();

					protected getFromGreenWicth_CallBack_ev_real64 m_getFromGreenWicth_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体起始子午面与格林威治天文子午面之间的夹角
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetFromGreenWicth_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Function()
					{
						double csret=GetFromGreenWicth();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球体起始子午面与格林威治天文子午面之间的夹角
					/// </summary>
					/// <returns>const ev_real64</returns>
					public virtual double GetFromGreenWicth()
					{
						double ret=EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getAngularUnits_CallBack_void_EVString_ev_real64(ref IntPtr pszname, ref double dfunitsValue);

					protected getAngularUnits_CallBack_void_EVString_ev_real64 m_getAngularUnits_CallBack_void_EVString_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_NoVirtual(IntPtr pNativeObject, ref IntPtr pszname, ref double dfunitsValue);

					/// <summary>
					/// 获取椭球体地理坐标单位键值对
					/// </summary>
					/// <param name="name">string&</param>
					/// <param name="unitsValue">ev_real64&</param>
					public virtual void GetAngularUnits_NoVirtual(ref string pszname, ref double dfunitsValue)
					{
						IntPtr __ptrpszname=Marshal.StringToHGlobalAnsi(pszname);
						IntPtr pTmppszname=__ptrpszname;
						
						EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_NoVirtual(this.NativeObject, ref __ptrpszname,ref dfunitsValue);
						
						 Marshal.FreeHGlobal(pTmppszname);
						pszname= Marshal.PtrToStringAnsi(__ptrpszname);
						ClassFactory.FreeString(ref __ptrpszname);
						
					}

					protected  void EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Function(ref IntPtr pszname, ref double dfunitsValue)
					{
						string strpszname= Marshal.PtrToStringAnsi(pszname);
						ClassFactory.FreeString(ref pszname);
						
						GetAngularUnits(ref strpszname,ref dfunitsValue);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(IntPtr pNativeObject, ref IntPtr pszname, ref double dfunitsValue);

					/// <summary>
					/// 获取椭球体地理坐标单位键值对
					/// </summary>
					/// <param name="name">string&</param>
					/// <param name="unitsValue">ev_real64&</param>
					public virtual void GetAngularUnits(ref string pszname, ref double dfunitsValue)
					{
						IntPtr __ptrpszname = Marshal.StringToHGlobalAnsi(pszname);
						IntPtr pTmppszname = __ptrpszname;
						
						EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(this.NativeObject, ref __ptrpszname,ref dfunitsValue);
						
						 Marshal.FreeHGlobal(pTmppszname);
						pszname= Marshal.PtrToStringAnsi(__ptrpszname);
						ClassFactory.FreeString(ref __ptrpszname);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIellipsespheriod = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEllipseSpheriod", new IellipsespheriodClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEllipseSpheriodProxy", new IellipsespheriodClassFactory());

					public Iellipsespheriod(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(IntPtr pObject, getSamiMajor_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(IntPtr pObject, getInvFlattening_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(IntPtr pObject, getSphereName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(IntPtr pObject, getDatumType_CallBack_EVDatumType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(IntPtr pObject, getFromGreenWicth_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(IntPtr pObject, getAngularUnits_CallBack_void_EVString_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSamiMajor_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Function;
							GC.KeepAlive(m_getSamiMajor_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(this.NativeObject, m_getSamiMajor_CallBack_ev_real64);
							m_getInvFlattening_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Function;
							GC.KeepAlive(m_getInvFlattening_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(this.NativeObject, m_getInvFlattening_CallBack_ev_real64);
							m_getSphereName_CallBack_EVString = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Function;
							GC.KeepAlive(m_getSphereName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(this.NativeObject, m_getSphereName_CallBack_EVString);
							m_getDatumType_CallBack_EVDatumType = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Function;
							GC.KeepAlive(m_getDatumType_CallBack_EVDatumType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(this.NativeObject, m_getDatumType_CallBack_EVDatumType);
							m_getFromGreenWicth_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Function;
							GC.KeepAlive(m_getFromGreenWicth_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(this.NativeObject, m_getFromGreenWicth_CallBack_ev_real64);
							m_getAngularUnits_CallBack_void_EVString_ev_real64 = EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Function;
							GC.KeepAlive(m_getAngularUnits_CallBack_void_EVString_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(this.NativeObject, m_getAngularUnits_CallBack_void_EVString_ev_real64);
						}
					}
					public static Iellipsespheriod FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iellipsespheriod obj = baseObj as  Iellipsespheriod;
						if (object.Equals(obj, null))
						{
							obj = new Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IEllipseSpheriod");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IellipsespheriodClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iellipsespheriod emptyInstance = new Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 空间参考系统类，是一个基类，用于存储相关空间参考系统参数。
				/// </summary>
				public class Ispatialreference : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int getType_CallBack_EVSpatialReferenceType();

					protected getType_CallBack_EVSpatialReferenceType m_getType_CallBack_EVSpatialReferenceType;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考系统的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统类型</returns>
					public virtual EarthView.World.Spatial.Geometry.EVSPATIALREFERENCETYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Geometry.EVSPATIALREFERENCETYPE)ret;
						
					}

					protected  int EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Function()
					{
						EarthView.World.Spatial.Geometry.EVSPATIALREFERENCETYPE csret=GetType();
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考系统的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统类型</returns>
					public virtual EarthView.World.Spatial.Geometry.EVSPATIALREFERENCETYPE GetType()
					{
						int ret=EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(this.NativeObject);
						
						return (EarthView.World.Spatial.Geometry.EVSPATIALREFERENCETYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate uint getSRID_CallBack_ev_uint32();

					protected getSRID_CallBack_ev_uint32 m_getSRID_CallBack_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考系统的EPSG值
					/// </summary>
					/// <param name=""></param>
					/// <returns>EPSG值</returns>
					public virtual uint GetSRID_NoVirtual()
					{
						uint ret=EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  uint EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Function()
					{
						uint csret=GetSRID();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考系统的EPSG值
					/// </summary>
					/// <param name=""></param>
					/// <returns>EPSG值</returns>
					public virtual uint GetSRID()
					{
						uint ret=EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_ISpatialReference();

					protected clone_CallBack_ISpatialReference m_clone_CallBack_ISpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统对象指针</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Function()
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csret=Clone();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(IntPtr pNativeObject);

					/// <summary>
					/// 深度拷贝
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统对象指针</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getCEllipseSphere_CallBack_IEllipseSpheriod();

					protected getCEllipseSphere_CallBack_IEllipseSpheriod m_getCEllipseSphere_CallBack_IEllipseSpheriod;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_NoVirtual(IntPtr pNativeObject);

					////by jiang guo wei 2012 12 03 
					//{
					/// <summary>
					/// 获取椭球体指针
					/// </summary>
					///<returns>IEllipseShpere*椭球体指针</returns>
					public virtual EarthView.World.Spatial.Geometry.Iellipsespheriod GetCEllipseSphere_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Iellipsespheriod csObj = new EarthView.World.Spatial.Geometry.Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEllipseSpheriod");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Iellipsespheriod;
							csObj.BindNativeObject(__ptr, "IEllipseSpheriod");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Function()
					{
						EarthView.World.Spatial.Geometry.Iellipsespheriod csret=GetCEllipseSphere();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(IntPtr pNativeObject);

					////by jiang guo wei 2012 12 03 
					//{
					/// <summary>
					/// 获取椭球体指针
					/// </summary>
					///<returns>IEllipseShpere*椭球体指针</returns>
					public virtual EarthView.World.Spatial.Geometry.Iellipsespheriod GetCEllipseSphere()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Iellipsespheriod csObj = new EarthView.World.Spatial.Geometry.Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEllipseSpheriod");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Iellipsespheriod;
							csObj.BindNativeObject(__ptr, "IEllipseSpheriod");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void exportToString_CallBack_void_EVSpatialReferenceStringType_EVString(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref IntPtr pszstrText);

					protected exportToString_CallBack_void_EVSpatialReferenceStringType_EVString m_exportToString_CallBack_void_EVSpatialReferenceStringType_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref IntPtr pszstrText);

					/// <summary>
					/// 将空间参考导出成指定的字符串格式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					/// <param name="pszText"></param>
					///<returns></returns>
					public virtual void ExportToString_NoVirtual(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref string pszstrText)
					{
						IntPtr __ptrpszstrText=Marshal.StringToHGlobalAnsi(pszstrText);
						IntPtr pTmppszstrText=__ptrpszstrText;
						
						EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_NoVirtual(this.NativeObject, type, ref __ptrpszstrText);
						
						 Marshal.FreeHGlobal(pTmppszstrText);
						pszstrText= Marshal.PtrToStringAnsi(__ptrpszstrText);
						ClassFactory.FreeString(ref __ptrpszstrText);
						
					}

					protected  void EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Function(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref IntPtr pszstrText)
					{
						string strpszstrText= Marshal.PtrToStringAnsi(pszstrText);
						ClassFactory.FreeString(ref pszstrText);
						
						ExportToString(type, ref strpszstrText);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(IntPtr pNativeObject, EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref IntPtr pszstrText);

					/// <summary>
					/// 将空间参考导出成指定的字符串格式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					/// <param name="pszText"></param>
					///<returns></returns>
					public virtual void ExportToString(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref string pszstrText)
					{
						IntPtr __ptrpszstrText = Marshal.StringToHGlobalAnsi(pszstrText);
						IntPtr pTmppszstrText = __ptrpszstrText;
						
						EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(this.NativeObject, type, ref __ptrpszstrText);
						
						 Marshal.FreeHGlobal(pTmppszstrText);
						pszstrText= Marshal.PtrToStringAnsi(__ptrpszstrText);
						ClassFactory.FreeString(ref __ptrpszstrText);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getCoordUnits_CallBack_void_EVString_ev_real64(ref IntPtr pszunitsName, ref double dfvalue);

					protected getCoordUnits_CallBack_void_EVString_ev_real64 m_getCoordUnits_CallBack_void_EVString_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_NoVirtual(IntPtr pNativeObject, ref IntPtr pszunitsName, ref double dfvalue);

					/// <summary>
					/// 获取坐标的单位名称和单位值
					/// </summary>
					/// <param name="pszunitsName"></param>
					/// <param name="dfvalue"></param>
					///<returns></returns>
					public virtual void GetCoordUnits_NoVirtual(ref string pszunitsName, ref double dfvalue)
					{
						IntPtr __ptrpszunitsName=Marshal.StringToHGlobalAnsi(pszunitsName);
						IntPtr pTmppszunitsName=__ptrpszunitsName;
						
						EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_NoVirtual(this.NativeObject, ref __ptrpszunitsName,ref dfvalue);
						
						 Marshal.FreeHGlobal(pTmppszunitsName);
						pszunitsName= Marshal.PtrToStringAnsi(__ptrpszunitsName);
						ClassFactory.FreeString(ref __ptrpszunitsName);
						
					}

					protected  void EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Function(ref IntPtr pszunitsName, ref double dfvalue)
					{
						string strpszunitsName= Marshal.PtrToStringAnsi(pszunitsName);
						ClassFactory.FreeString(ref pszunitsName);
						
						GetCoordUnits(ref strpszunitsName,ref dfvalue);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(IntPtr pNativeObject, ref IntPtr pszunitsName, ref double dfvalue);

					/// <summary>
					/// 获取坐标的单位名称和单位值
					/// </summary>
					/// <param name="pszunitsName"></param>
					/// <param name="dfvalue"></param>
					///<returns></returns>
					public virtual void GetCoordUnits(ref string pszunitsName, ref double dfvalue)
					{
						IntPtr __ptrpszunitsName = Marshal.StringToHGlobalAnsi(pszunitsName);
						IntPtr pTmppszunitsName = __ptrpszunitsName;
						
						EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(this.NativeObject, ref __ptrpszunitsName,ref dfvalue);
						
						 Marshal.FreeHGlobal(pTmppszunitsName);
						pszunitsName= Marshal.PtrToStringAnsi(__ptrpszunitsName);
						ClassFactory.FreeString(ref __ptrpszunitsName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getSamiMajor_CallBack_ev_real64();

					protected getSamiMajor_CallBack_ev_real64 m_getSamiMajor_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球长半轴的值
					/// </summary>
					///<returns>ev_real64</returns>
					public virtual double GetSamiMajor_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Function()
					{
						double csret=GetSamiMajor();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球长半轴的值
					/// </summary>
					///<returns>ev_real64</returns>
					public virtual double GetSamiMajor()
					{
						double ret=EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getInvFlattening_CallBack_ev_real64();

					protected getInvFlattening_CallBack_ev_real64 m_getInvFlattening_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球扁率的倒数
					/// </summary>
					///<returns>ev_real64</returns>
					public virtual double GetInvFlattening_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Function()
					{
						double csret=GetInvFlattening();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球扁率的倒数
					/// </summary>
					///<returns>ev_real64</returns>
					public virtual double GetInvFlattening()
					{
						double ret=EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getSphereName_CallBack_EVString();

					protected getSphereName_CallBack_EVString m_getSphereName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球名称
					/// </summary>
					///<returns>ev_char*</returns>
					public virtual string GetSphereName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Function()
					{
						string csret=GetSphereName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取椭球名称
					/// </summary>
					///<returns>ev_char*</returns>
					public virtual string GetSphereName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getCoordianteSystemName_CallBack_EVString();

					protected getCoordianteSystemName_CallBack_EVString m_getCoordianteSystemName_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间坐标系统的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_char*坐标系统名称</returns>
					public virtual string GetCoordianteSystemName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Function()
					{
						string csret=GetCoordianteSystemName();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间坐标系统的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>ev_char*坐标系统名称</returns>
					public virtual string GetCoordianteSystemName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, IntPtr objStream);

					protected toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream m_toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, IntPtr objStream);

					////by jiang guo wei 2012 12 03 
					/// <summary>
					/// 将空间坐标系统 导出成流形式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					///<param name="objStream">流引用</param>
					/// <returns> </returns>
					public virtual void ToStream_NoVirtual(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref EarthView.World.Core.DataStream objStream)
					{
						EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_NoVirtual(this.NativeObject, type, object.Equals(objStream, null) ? IntPtr.Zero : objStream.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Function(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, IntPtr objStream)
					{
						EarthView.World.Core.DataStream csobj_objStream = new EarthView.World.Core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_objStream.BindNativeObject(objStream,"CDataStream");
						csobj_objStream.Delegate = true;
						IClassFactory csobj_objStreamClassFactory = GlobalClassFactoryMap.Get(csobj_objStream.GetCppInstanceTypeName());
						if (csobj_objStreamClassFactory != null)
						{
							csobj_objStream.Delegate = true;
							csobj_objStream = csobj_objStreamClassFactory.Create() as EarthView.World.Core.DataStream;
							csobj_objStream.BindNativeObject(objStream, "CDataStream");
							csobj_objStream.Delegate = true;
						}
						
						ToStream(type, ref csobj_objStream);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(IntPtr pNativeObject, EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, IntPtr objStream);

					////by jiang guo wei 2012 12 03 
					/// <summary>
					/// 将空间坐标系统 导出成流形式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					///<param name="objStream">流引用</param>
					/// <returns> </returns>
					public virtual void ToStream(EarthView.World.Spatial.Utility.EVSPATIALREFERENCESTRINGTYPE type, ref EarthView.World.Core.DataStream objStream)
					{
						EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(this.NativeObject, type, object.Equals(objStream, null) ? IntPtr.Zero : objStream.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isSameAs_CallBack_ev_bool_ISpatialReference(IntPtr pref);

					protected isSameAs_CallBack_ev_bool_ISpatialReference m_isSameAs_CallBack_ev_bool_ISpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr pref);

					///}
					//// <summary>
					//// 比较两个空间参考是否相等
					//// </summary>
					//// <param name="pref">空间参考指针</param>
					//// <returns>true ,fase</returns>
					public virtual bool IsSameAs_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference pref)
					{
						byte ret=EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_NoVirtual(this.NativeObject, object.Equals(pref, null) ? IntPtr.Zero : pref.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Function(IntPtr pref)
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_pref = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pref.BindNativeObject(pref,"ISpatialReference");
						csobj_pref.Delegate = true;
						IClassFactory csobj_prefClassFactory = GlobalClassFactoryMap.Get(csobj_pref.GetCppInstanceTypeName());
						if (csobj_prefClassFactory != null)
						{
							csobj_pref.Delegate = true;
							csobj_pref = csobj_prefClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_pref.BindNativeObject(pref, "ISpatialReference");
							csobj_pref.Delegate = true;
						}
						
						bool csret=IsSameAs(csobj_pref);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(IntPtr pNativeObject, IntPtr pref);

					///}
					//// <summary>
					//// 比较两个空间参考是否相等
					//// </summary>
					//// <param name="pref">空间参考指针</param>
					//// <returns>true ,fase</returns>
					public virtual bool IsSameAs(EarthView.World.Spatial.Geometry.Ispatialreference pref)
					{
						byte ret=EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(this.NativeObject, object.Equals(pref, null) ? IntPtr.Zero : pref.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(bool isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown);

					protected getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64 m_getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, byte isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown);

					public virtual void GetInOutputRect_NoVirtual(bool isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown)
					{
						EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, Convert.ToByte(isLatLong), ref dfLeft, ref dfTop, ref dfRight, ref dfDown);
						
					}

					protected  void EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Function(bool isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown)
					{
						GetInOutputRect(isLatLong, ref dfLeft, ref dfTop, ref dfRight, ref dfDown);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, byte isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown);

					public virtual void GetInOutputRect(bool isLatLong, ref double dfLeft, ref double dfTop, ref double dfRight, ref double dfDown)
					{
						EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, Convert.ToByte(isLatLong), ref dfLeft, ref dfTop, ref dfRight, ref dfDown);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIspatialreference = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIspatialreference = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::ISpatialReference", new IspatialreferenceClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::ISpatialReferenceProxy", new IspatialreferenceClassFactory());

					public Ispatialreference(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(IntPtr pObject, getType_CallBack_EVSpatialReferenceType pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(IntPtr pObject, getSRID_CallBack_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(IntPtr pObject, clone_CallBack_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(IntPtr pObject, getCEllipseSphere_CallBack_IEllipseSpheriod pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(IntPtr pObject, exportToString_CallBack_void_EVSpatialReferenceStringType_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(IntPtr pObject, getCoordUnits_CallBack_void_EVString_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(IntPtr pObject, getSamiMajor_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(IntPtr pObject, getInvFlattening_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(IntPtr pObject, getSphereName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(IntPtr pObject, getCoordianteSystemName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(IntPtr pObject, toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(IntPtr pObject, isSameAs_CallBack_ev_bool_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVSpatialReferenceType = EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Function;
							GC.KeepAlive(m_getType_CallBack_EVSpatialReferenceType);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(this.NativeObject, m_getType_CallBack_EVSpatialReferenceType);
							m_getSRID_CallBack_ev_uint32 = EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Function;
							GC.KeepAlive(m_getSRID_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(this.NativeObject, m_getSRID_CallBack_ev_uint32);
							m_clone_CallBack_ISpatialReference = EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Function;
							GC.KeepAlive(m_clone_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(this.NativeObject, m_clone_CallBack_ISpatialReference);
							m_getCEllipseSphere_CallBack_IEllipseSpheriod = EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Function;
							GC.KeepAlive(m_getCEllipseSphere_CallBack_IEllipseSpheriod);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(this.NativeObject, m_getCEllipseSphere_CallBack_IEllipseSpheriod);
							m_exportToString_CallBack_void_EVSpatialReferenceStringType_EVString = EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Function;
							GC.KeepAlive(m_exportToString_CallBack_void_EVSpatialReferenceStringType_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(this.NativeObject, m_exportToString_CallBack_void_EVSpatialReferenceStringType_EVString);
							m_getCoordUnits_CallBack_void_EVString_ev_real64 = EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Function;
							GC.KeepAlive(m_getCoordUnits_CallBack_void_EVString_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(this.NativeObject, m_getCoordUnits_CallBack_void_EVString_ev_real64);
							m_getSamiMajor_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Function;
							GC.KeepAlive(m_getSamiMajor_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(this.NativeObject, m_getSamiMajor_CallBack_ev_real64);
							m_getInvFlattening_CallBack_ev_real64 = EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Function;
							GC.KeepAlive(m_getInvFlattening_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(this.NativeObject, m_getInvFlattening_CallBack_ev_real64);
							m_getSphereName_CallBack_EVString = EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Function;
							GC.KeepAlive(m_getSphereName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(this.NativeObject, m_getSphereName_CallBack_EVString);
							m_getCoordianteSystemName_CallBack_EVString = EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Function;
							GC.KeepAlive(m_getCoordianteSystemName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(this.NativeObject, m_getCoordianteSystemName_CallBack_EVString);
							m_toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream = EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(this.NativeObject, m_toStream_CallBack_void_EVSpatialReferenceStringType_CDataStream);
							m_isSameAs_CallBack_ev_bool_ISpatialReference = EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Function;
							GC.KeepAlive(m_isSameAs_CallBack_ev_bool_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(this.NativeObject, m_isSameAs_CallBack_ev_bool_ISpatialReference);
							m_getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getInOutputRect_CallBack_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64);
						}
					}
					public static Ispatialreference FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ispatialreference obj = baseObj as  Ispatialreference;
						if (object.Equals(obj, null))
						{
							obj = new Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ISpatialReference");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IspatialreferenceClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ispatialreference emptyInstance = new Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
