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
		namespace Spatial2D
		{
			namespace Analyst
			{
				[StructLayout( LayoutKind.Sequential )]
				public struct CHANGEDEDGE
				{
					public int formerEID;
					public double formerLength;
					public int newFEID;
					public double newFLength;
					public int newTEID;
					public double newTLength;
					public int inter_ID;
				}

				[StructLayout( LayoutKind.Sequential )]
				public struct INTER
				{
					public int lastNum;
					public IntPtr inter;
				}

				/// <summary>
				/// 路径分析参数（已转换为关联的边、交点）
				/// </summary>
				public class RouteParam : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RouteParam() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRouteParam",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParam_addStopJunction_void_ev_uint32(IntPtr pNativeObject, uint jID);

					/// <summary>
					/// 添加停靠点
					/// </summary>
					/// <param name="jID">相关联的交点ID</param>
					/// <returns></returns>
					public void AddStopJunction(uint jID)
					{
						EarthView_World_Spatial2D_Analyst_CRouteParam_addStopJunction_void_ev_uint32(this.NativeObject, jID);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParam_addBarriarEdge_void_ev_uint32(IntPtr pNativeObject, uint eID);

					/// <summary>
					/// 添加障碍
					/// </summary>
					/// <param name="eID">相关联的边ID</param>
					/// <returns></returns>
					public void AddBarriarEdge(uint eID)
					{
						EarthView_World_Spatial2D_Analyst_CRouteParam_addBarriarEdge_void_ev_uint32(this.NativeObject, eID);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParam_clearStop_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有停靠点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearStop()
					{
						EarthView_World_Spatial2D_Analyst_CRouteParam_clearStop_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParam_clearBarriar_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有障碍点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearBarriar()
					{
						EarthView_World_Spatial2D_Analyst_CRouteParam_clearBarriar_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteParam = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteParam", new RouteParamClassFactory());

					public RouteParam(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RouteParam FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RouteParam obj = baseObj as  RouteParam;
						if (object.Equals(obj, null))
						{
							obj = new RouteParam(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRouteParam");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RouteParamClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RouteParam emptyInstance = new RouteParam(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 路径分析参数（原始点）
				/// </summary>
				public class RouteParamI : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RouteParamI() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRouteParamI",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParamI_addStop_void_CPoint(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 添加停靠点
					/// </summary>
					/// <param name="point">停靠点</param>
					/// <returns></returns>
					public void AddStop(EarthView.World.Spatial.Geometry.Point point)
					{
						EarthView_World_Spatial2D_Analyst_CRouteParamI_addStop_void_CPoint(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParamI_addBarriar_void_CPoint(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 添加障碍点
					/// </summary>
					/// <param name="point">障碍点</param>
					/// <returns></returns>
					public void AddBarriar(EarthView.World.Spatial.Geometry.Point point)
					{
						EarthView_World_Spatial2D_Analyst_CRouteParamI_addBarriar_void_CPoint(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParamI_clearStop_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有停靠点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearStop()
					{
						EarthView_World_Spatial2D_Analyst_CRouteParamI_clearStop_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteParamI_clearBarriar_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有障碍点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ClearBarriar()
					{
						EarthView_World_Spatial2D_Analyst_CRouteParamI_clearBarriar_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteParamI = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteParamI", new RouteParamIClassFactory());

					public RouteParamI(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RouteParamI FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RouteParamI obj = baseObj as  RouteParamI;
						if (object.Equals(obj, null))
						{
							obj = new RouteParamI(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRouteParamI");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RouteParamIClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RouteParamI emptyInstance = new RouteParamI(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 路径分析结果
				/// </summary>
				public class RouteResult : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RouteResult() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRouteResult",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除分析结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Clear()
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_clear_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_addGeometry_void_IGeometry(IntPtr pNativeObject, IntPtr geom);

					/// <summary>
					/// 添加分析结果几何体
					/// </summary>
					/// <param name="geom">几何体</param>
					/// <returns></returns>
					public void AddGeometry(EarthView.World.Spatial.Geometry.Igeometry geom)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_addGeometry_void_IGeometry(this.NativeObject, object.Equals(geom, null) ? IntPtr.Zero : geom.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_arrangeGeometry_void_CPoint(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 为结果几何体重排序
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void ArrangeGeometry(EarthView.World.Spatial.Geometry.Point point)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_arrangeGeometry_void_CPoint(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_addRouteID_void_ev_uint32(IntPtr pNativeObject, uint id);

					/// <summary>
					/// 添加分析结果子路段id
					/// </summary>
					/// <param name="geom">几何体</param>
					/// <returns></returns>
					public void AddRouteID(uint id)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_addRouteID_void_ev_uint32(this.NativeObject, id);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteResult_getGeometryRef_IGeometry_ev_int32(IntPtr pNativeObject, int index);

					/// <summary>
					/// 获取分析结果几何体
					/// </summary>
					/// <param name="index">index</param>
					/// <returns>返回几何体</returns>
					public EarthView.World.Spatial.Geometry.Igeometry GetGeometryRef(int index)
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteResult_getGeometryRef_IGeometry_ev_int32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Igeometry csObj = new EarthView.World.Spatial.Geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IGeometry");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Igeometry;
							csObj.BindNativeObject(__ptr, "IGeometry");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRouteResult_getRouteID_ev_int32_ev_int32(IntPtr pNativeObject, int index);

					/// <summary>
					/// 获取分析结果子路段id
					/// </summary>
					/// <param name="index">index</param>
					/// <returns>返回子路段id</returns>
					public int GetRouteID(int index)
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRouteResult_getRouteID_ev_int32_ev_int32(this.NativeObject, index);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial2D_Analyst_CRouteResult_count_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取分析结果路径数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回数量</returns>
					public int Count()
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRouteResult_count_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_select_void_IGeometry(IntPtr pNativeObject, IntPtr geom);

					/// <summary>
					/// 选择
					/// </summary>
					/// <param name="geom">几何体</param>
					/// <returns></returns>
					public void Select(EarthView.World.Spatial.Geometry.Igeometry geom)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_select_void_IGeometry(this.NativeObject, object.Equals(geom, null) ? IntPtr.Zero : geom.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteResult_isSelected_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否被选
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是返回true；否则返回false</returns>
					public bool IsSelected()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteResult_isSelected_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_addSkipStop_void_ev_uint32(IntPtr pNativeObject, uint id);

					/// <summary>
					/// 跳过停靠点
					/// </summary>
					/// <param name="id">停靠点</param>
					/// <returns></returns>
					public void AddSkipStop(uint id)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_addSkipStop_void_ev_uint32(this.NativeObject, id);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_setTotalCost_void_ev_real64(IntPtr pNativeObject, double cost);

					/// <summary>
					/// 设置总成本
					/// </summary>
					/// <param name="cost">成本</param>
					/// <returns></returns>
					public void SetTotalCost(double cost)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_setTotalCost_void_ev_real64(this.NativeObject, cost);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteResult_getTotalCost_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取总成本
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回花费成本</returns>
					public double GetTotalCost()
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteResult_getTotalCost_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CPoint_ev_real64(IntPtr pNativeObject, IntPtr pt, double threshold);

					/// <summary>
					/// 点选
					/// </summary>
					/// <param name="pt">点</param>
					/// <param name="threshold">范围</param>
					/// <returns></returns>
					public void SelectResult(EarthView.World.Spatial.Geometry.Point pt, double threshold)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CPoint_ev_real64(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject, threshold);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CRectangle(IntPtr pNativeObject, IntPtr rect);

					/// <summary>
					/// 框选
					/// </summary>
					/// <param name="rect">范围</param>
					/// <returns></returns>
					public void SelectResult(EarthView.World.Spatial.Geometry.Rectangle rect)
					{
						EarthView_World_Spatial2D_Analyst_CRouteResult_selectResult_void_CRectangle(this.NativeObject, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteResult_clone_CRouteResult(IntPtr pNativeObject);

					/// <summary>
					/// 复制结果
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制后的结果</returns>
					public EarthView.World.Spatial2D.Analyst.RouteResult Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteResult_clone_CRouteResult(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial2D.Analyst.RouteResult csObj = new EarthView.World.Spatial2D.Analyst.RouteResult(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRouteResult");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial2D.Analyst.RouteResult;
							csObj.BindNativeObject(__ptr, "CRouteResult");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteResult = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteResult", new RouteResultClassFactory());

					public RouteResult(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RouteResult FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RouteResult obj = baseObj as  RouteResult;
						if (object.Equals(obj, null))
						{
							obj = new RouteResult(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRouteResult");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RouteResultClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RouteResult emptyInstance = new RouteResult(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 路径分析
				/// </summary>
				public class RouteAnalyst : EarthView.World.Spatial2D.Analyst.NetworkAnalyst
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ds">数据集</param>
					/// <returns></returns>
					public RouteAnalyst(EarthView.World.Spatial2D.GeoDataset.NetworkDataset ds) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueds = new BasePtr(ds);
						list.Add("ds", valueds.PtrVal);
						Create("CRouteAnalyst", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParam_CRouteResult(IntPtr pNativeObject, IntPtr param, IntPtr result);

					/// <summary>
					/// 求解
					/// </summary>
					/// <param name="param">停靠点、障碍参数（已转换为关联的边、交点）</param>
					/// <param name="result">输出参数，求解结果集</param>
					/// <returns>如果求解成功，则返回true；否则，返回false</returns>
					public bool Solve(EarthView.World.Spatial2D.Analyst.RouteParam param, ref EarthView.World.Spatial2D.Analyst.RouteResult result)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParam_CRouteResult(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParamI_CRouteResult(IntPtr pNativeObject, IntPtr param, IntPtr result);

					/// <summary>
					/// 求解
					/// </summary>
					/// <param name="param">停靠点、障碍参数（原始点）</param>
					/// <param name="result">输出参数，求解结果集</param>
					/// <returns>如果求解成功，则返回true；否则，返回false</returns>
					public bool Solve(EarthView.World.Spatial2D.Analyst.RouteParamI param, ref EarthView.World.Spatial2D.Analyst.RouteResult result)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteAnalyst_solve_ev_bool_CRouteParamI_CRouteResult(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteAnalyst_setAnalystMethod_void_EVNAAnalystMethod(IntPtr pNativeObject, EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method);

					/// <summary>
					/// 设置路径分析时查找停靠点方法
					/// </summary>
					/// <param name="">查找停靠点方法枚举</param>
					/// <returns></returns>
					public void SetAnalystMethod(EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method)
					{
						EarthView_World_Spatial2D_Analyst_CRouteAnalyst_setAnalystMethod_void_EVNAAnalystMethod(this.NativeObject, method);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_NetworkAnalysis_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteAnalyst_getImpedance_ev_real64_ev_uint32_ev_bool(IntPtr pNativeObject, uint edgeID, byte FT);

					/// <summary>
					/// 获取阻抗值
					/// </summary>
					/// <param name="edgeID">边id</param>
					/// <param name="FT">方向</param>
					/// <returns>返回阻抗值</returns>
					public double GetImpedance(uint edgeID, bool FT)
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteAnalyst_getImpedance_ev_real64_ev_uint32_ev_bool(this.NativeObject, edgeID, Convert.ToByte(FT));
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteAnalyst = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteAnalyst", new RouteAnalystClassFactory());

					public RouteAnalyst(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RouteAnalyst FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RouteAnalyst obj = baseObj as  RouteAnalyst;
						if (object.Equals(obj, null))
						{
							obj = new RouteAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRouteAnalyst");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RouteAnalystClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RouteAnalyst emptyInstance = new RouteAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
