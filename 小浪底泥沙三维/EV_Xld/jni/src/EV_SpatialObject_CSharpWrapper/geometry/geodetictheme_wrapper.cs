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
				public class GeodeticTheme : EarthView.World.Core.AllocatedObject
				{
					///<summary>
					///构造函数
					///</summary>
					/// <param name="dfSemiMajor">椭球长半轴</param>
					/// <param name="dfInvFlattening">椭球偏率倒数</param>
					/// <returns></returns>
					public GeodeticTheme(double dfSemiMajor, double dfInvFlattening) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuedfSemiMajor = new BasePtr(dfSemiMajor);
						list.Add("dfSemiMajor", valuedfSemiMajor.PtrVal);
						BasePtr valuedfInvFlattening = new BasePtr(dfInvFlattening);
						list.Add("dfInvFlattening", valuedfInvFlattening.PtrVal);
						Create("CGeodeticTheme", list);
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
					private static extern void EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesForward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double lon1, double lat1, double pazi1, double s12, ref double lon2, ref double lat2, ref double pazi2);

					///<summary>
					///大地主题正算:已知椭球体，点A，AB距离，AB连线A处方位角，求点B及点B处方位角
					///</summary>
					/// <param name="lon1"> 点A经度</param>
					/// <param name="lat1"> 点A纬度</param>
					/// <param name="pazi1">点A处方位角</param>
					/// <param name="s12">  AB距离</param>
					/// <param name="lon2"> 输出：点B经度</param>
					/// <param name="lat2"> 输出：点B纬度</param>
					/// <param name="pazi2">输出：点B处方位角</param>
					/// <returns></returns>
					public void GaussSeriesForward(double lon1, double lat1, double pazi1, double s12, ref double lon2, ref double lat2, ref double pazi2)
					{
						EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesForward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, lon1, lat1, pazi1, s12, ref lon2, ref lat2, ref pazi2);
						
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
					private static extern void EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesBackward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double lon1, double lat1, double lon2, double lat2, ref double pazi1, ref double pazi2, ref double s12);

					///<summary>
					///大地主题反算：已知椭球体，点A，点B，求AB距离，AB连线上A、B处方位角
					///</summary>
					/// <param name="lon1"> 点A经度</param>
					/// <param name="lat1"> 点A纬度</param>
					/// <param name="lon2"> 点B经度</param>
					/// <param name="lat2"> 点B纬度</param>
					/// <param name="pazi1">输出：点A处方位角</param>
					/// <param name="pazi2">输出：点B处方位角</param>
					/// <param name="s12">  输出：AB距离</param>
					/// <returns></returns>
					public void GaussSeriesBackward(double lon1, double lat1, double lon2, double lat2, ref double pazi1, ref double pazi2, ref double s12)
					{
						EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesBackward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, lon1, lat1, lon2, lat2, ref pazi1, ref pazi2, ref s12);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadGeodeticTheme = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CGeodeticTheme", new GeodeticThemeClassFactory());

					public GeodeticTheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GeodeticTheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GeodeticTheme obj = baseObj as  GeodeticTheme;
						if (object.Equals(obj, null))
						{
							obj = new GeodeticTheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGeodeticTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GeodeticThemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GeodeticTheme emptyInstance = new GeodeticTheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
