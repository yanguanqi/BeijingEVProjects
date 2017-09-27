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
				/// 默认高程类，继承自EarthView::World::Spatial3D::Analysis::CAltitude3DListener，
				/// 用户可根据情况重写此类
				/// </summary>
				public class AltitudeListener : EarthView.World.Spatial3D.Analysis.Altitude3DListener
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					public AltitudeListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAltitudeListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Analysis.AltitudeListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pManager">地球场景管理器</param>
					public AltitudeListener(EarthView.World.Spatial3D.GeoSceneManager ref_pManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pManager = new BasePtr(ref_pManager);
						list.Add("ref_pManager", valueref_pManager.PtrVal);
						Create("CAltitudeListenerProxy", list);
						if (!"EarthView.World.Spatial3D.Analysis.AltitudeListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					public AltitudeListener(EarthView.World.Spatial3D.Atlas.Iterrainlayer ref_pTerrainLayer) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pTerrainLayer = new BasePtr(ref_pTerrainLayer);
						list.Add("ref_pTerrainLayer", valueref_pTerrainLayer.PtrVal);
						Create("CAltitudeListenerProxy", list);
						if (!"EarthView.World.Spatial3D.Analysis.AltitudeListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double latitude, double longitude);

					/// <summary>
					/// 根据经纬度获取高程值
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">精度</param>
					/// <returns>高程值</returns>
					public new double GetAltitude_NoVirtual(double latitude, double longitude)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, latitude, longitude);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double latitude, double longitude);

					/// <summary>
					/// 根据经纬度获取高程值
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">精度</param>
					/// <returns>高程值</returns>
					public override double GetAltitude(double latitude, double longitude)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(this.NativeObject, latitude, longitude);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CAltitudeListener_setGeoSceneManager_void_CGeoSceneManager(IntPtr pNativeObject, IntPtr ref_pManager);

					/// <summary>
					/// 设置场景管理器
					/// </summary>
					/// <param name="ref_pManager">场景管理器</param>
					public void SetGeoSceneManager(EarthView.World.Spatial3D.GeoSceneManager ref_pManager)
					{
						EarthView_World_Spatial3D_Analysis_CAltitudeListener_setGeoSceneManager_void_CGeoSceneManager(this.NativeObject, object.Equals(ref_pManager, null) ? IntPtr.Zero : ref_pManager.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CAltitudeListener_setTerrainLayer_void_ITerrainLayer(IntPtr pNativeObject, IntPtr ref_pTerrainLayer);

					/// <summary>
					/// 设置地形图层或图层组
					/// </summary>
					/// <param name="ref_pTerrainLayer">地形图层或图层组</param>
					public void SetTerrainLayer(EarthView.World.Spatial3D.Atlas.Iterrainlayer ref_pTerrainLayer)
					{
						EarthView_World_Spatial3D_Analysis_CAltitudeListener_setTerrainLayer_void_ITerrainLayer(this.NativeObject, object.Equals(ref_pTerrainLayer, null) ? IntPtr.Zero : ref_pTerrainLayer.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_d.dll");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_d.so");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_d.dll");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis.dll");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis.so");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.so");

						#else 
							private static bool bLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis.dll");
							private static bool csbLoadAltitudeListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitudeListener", new AltitudeListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitudeListenerProxy", new AltitudeListenerClassFactory());

					public AltitudeListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(IntPtr pObject, getAltitude_CallBack_ev_real64_ev_real64_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial3D_Analysis_CAltitude3DListener_getAltitude_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAltitudeListener_getAltitude_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getAltitude_CallBack_ev_real64_ev_real64_ev_real64);
						}
					}
					public static AltitudeListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						AltitudeListener obj = baseObj as  AltitudeListener;
						if (object.Equals(obj, null))
						{
							obj = new AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAltitudeListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class AltitudeListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						AltitudeListener emptyInstance = new AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
