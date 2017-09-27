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
			namespace Analysis
			{
				/// <summary>
				/// 获取高程枚举
				/// </summary>
				public enum GETALTITUDESTYLE
				{
								GAS_Draw,
								GAS_CalcuHighest,
								GAS_CalcuAdapt
				
				}

				/// <summary>
				/// 根据坐标值(经纬度)获取DEM数据
				/// </summary>
				public class Altitude3DListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					public Altitude3DListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAltitude3DListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Analysis.Altitude3DListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getAltitude_CallBack_ev_real64_ev_real64_ev_real64(double latitude, double longitude);

					protected getAltitude_CallBack_ev_real64_ev_real64_ev_real64 m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude);

					/// <summary>
					/// 根据经纬度获取指定点的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns>高程值</returns>
					public virtual double GetAltitude_NoVirtual(double latitude, double longitude)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Function(double latitude, double longitude)
					{
						double csret=GetAltitude(latitude, longitude);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude);

					/// <summary>
					/// 根据经纬度获取指定点的高程
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <returns>高程值</returns>
					public virtual double GetAltitude(double latitude, double longitude)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getDemMode_GetAltitudeStyle(IntPtr pNativeObject);

					/// <summary>
					/// 获取高程模式
					/// </summary>
					/// <returns>获取高程模式</returns>
					public EarthView.World.Spatial3D.Analysis.GETALTITUDESTYLE GetDemMode()
					{
						int ret=EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getDemMode_GetAltitudeStyle(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Analysis.GETALTITUDESTYLE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setDemMode_void_GetAltitudeStyle(IntPtr pNativeObject, EarthView.World.Spatial3D.Analysis.GETALTITUDESTYLE value);

					/// <summary>
					/// 设置获取高程模式
					/// </summary>
					/// <param name="value">获取高程模式</param>
					public void SetDemMode(EarthView.World.Spatial3D.Analysis.GETALTITUDESTYLE value)
					{
						EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setDemMode_void_GetAltitudeStyle(this.NativeObject, value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getInterval_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取插值间隔距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>插值间隔距离</returns>
					public double GetInterval()
					{
						double ret=EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getInterval_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setInterval_void_ev_real64(IntPtr pNativeObject, double value);

					/// <summary>
					/// 设置插值间隔距离
					/// </summary>
					/// <param name="value">插值间隔距离</param>
					public void SetInterval(double value)
					{
						EarthView_World_Spatial3D_Analysis_CAltitude3DListener_setInterval_void_ev_real64(this.NativeObject, value);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadAltitude3DListener = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitude3DListener", new Altitude3DListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitude3DListenerProxy", new Altitude3DListenerClassFactory());

					public Altitude3DListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(IntPtr pObject, getAltitude_CallBack_ev_real64_ev_real64_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64);
						}
					}
					public static Altitude3DListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Altitude3DListener obj = baseObj as  Altitude3DListener;
						if (object.Equals(obj, null))
						{
							obj = new Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAltitude3DListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Altitude3DListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Altitude3DListener emptyInstance = new Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
