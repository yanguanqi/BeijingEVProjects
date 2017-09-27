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
				/// <summary>
				/// 网络分析：路径图层
				/// </summary>
				public class RouteLayer : EarthView.World.Spatial2D.Analyst.NetworkAnalystLayer
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="dataset">数据集</param>
					/// <returns></returns>
					public RouteLayer(EarthView.World.Spatial2D.GeoDataset.NetworkDataset ref_dataset) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_dataset = new BasePtr(ref_dataset);
						list.Add("ref_dataset", valueref_dataset.PtrVal);
						Create("CRouteLayerProxy", list);
						if (!"EarthView.World.Spatial2D.Analyst.RouteLayer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RouteLayer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRouteLayerProxy", null);
						if (!"EarthView.World.Spatial2D.Analyst.RouteLayer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 求解最短路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果求解成功，则返回true；否则，返回false</returns>
					public new bool Solve_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 求解最短路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果求解成功，则返回true；否则，返回false</returns>
					public override bool Solve()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method);

					/// <summary>
					/// 设置路径分析时查找停靠点方法
					/// </summary>
					/// <param name="">查找停靠点方法枚举</param>
					/// <returns></returns>
					public new void SetAnalystMethod_NoVirtual(EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod_NoVirtual(this.NativeObject, method);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(IntPtr pNativeObject, EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method);

					/// <summary>
					/// 设置路径分析时查找停靠点方法
					/// </summary>
					/// <param name="">查找停靠点方法枚举</param>
					/// <returns></returns>
					public override void SetAnalystMethod(EarthView.World.Spatial2D.Analyst.EVNAANALYSTMETHOD method)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(this.NativeObject, method);
						
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
					private static extern int EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_NoVirtual(IntPtr pNativeObject);

					/// ILayer Interface
					//// <summary>
					//// 获取图层类型
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回图层类型</returns>
					public new EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType_NoVirtual()
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType_NoVirtual(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
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
					private static extern int EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(IntPtr pNativeObject);

					/// ILayer Interface
					//// <summary>
					//// 获取图层类型
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回图层类型</returns>
					public override EarthView.World.Spatial.Atlas.EVLAYERTYPE GetType()
					{
						int ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(this.NativeObject);
						
						return (EarthView.World.Spatial.Atlas.EVLAYERTYPE)ret;
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层名称</returns>
					public new string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层名称</returns>
					public override string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					public new void SetName_NoVirtual(string name)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString_NoVirtual(this.NativeObject, name);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置图层名称
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					public override void SetName(string name)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(this.NativeObject, name);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回描述信息</returns>
					public new string GetDescription_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回描述信息</returns>
					public override string GetDescription()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_NoVirtual(IntPtr pNativeObject, string value);

					/// <summary>
					/// 设置图层描述信息
					/// </summary>
					/// <param name="value">描述信息</param>
					/// <returns></returns>
					public new void SetDescription_NoVirtual(string value)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString_NoVirtual(this.NativeObject, value);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(IntPtr pNativeObject, string value);

					/// <summary>
					/// 设置图层描述信息
					/// </summary>
					/// <param name="value">描述信息</param>
					/// <returns></returns>
					public override void SetDescription(string value)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(this.NativeObject, value);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层不能被编辑，返回false</returns>
					public new bool CanEdit_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层不能被编辑，返回false</returns>
					public override bool CanEdit()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否正在编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层不能被编辑，返回false</returns>
					public new bool IsEditing_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否正在编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层不能被编辑，返回false</returns>
					public override bool IsEditing()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte editing);

					/// <summary>
					/// 设置图层编辑状态（无效）
					/// </summary>
					/// <param name="editing">是否编辑</param>
					/// <returns></returns>
					public new void SetEditing_NoVirtual(bool editing)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(editing));
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(IntPtr pNativeObject, byte editing);

					/// <summary>
					/// 设置图层编辑状态（无效）
					/// </summary>
					/// <param name="editing">是否编辑</param>
					/// <returns></returns>
					public override void SetEditing(bool editing)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(this.NativeObject, Convert.ToByte(editing));
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可见，返回true；否则，返回false</returns>
					public new bool IsVisible_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层可见，返回true；否则，返回false</returns>
					public override bool IsVisible()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte visible);

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="editing">可见性</param>
					/// <returns></returns>
					public new void SetVisible_NoVirtual(bool visible)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(visible));
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(IntPtr pNativeObject, byte visible);

					/// <summary>
					/// 设置图层可见性
					/// </summary>
					/// <param name="editing">可见性</param>
					/// <returns></returns>
					public override void SetVisible(bool visible)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(this.NativeObject, Convert.ToByte(visible));
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层有效，返回true；否则，返回false</returns>
					public new bool IsValid_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果图层有效，返回true；否则，返回false</returns>
					public override bool IsValid()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isSelected_CallBack_ev_bool();

					protected isSelected_CallBack_ev_bool m_isSelected_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层要素是否可选
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可选，返回true；否则，返回false</returns>			
					public virtual bool IsSelected_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Function()
					{
						bool csret=IsSelected();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层要素是否可选
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果可选，返回true；否则，返回false</returns>			
					public virtual bool IsSelected()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setSelected_CallBack_void_ev_bool(bool selected);

					protected setSelected_CallBack_void_ev_bool m_setSelected_CallBack_void_ev_bool;

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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte selected);

					/// <summary>
					/// 设置图层可选性
					/// </summary>
					/// <param name="editing">可见性</param>
					/// <returns></returns>
					public virtual void SetSelected_NoVirtual(bool selected)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(selected));
						
					}

					protected  void EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Function(bool selected)
					{
						SetSelected(selected);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(IntPtr pNativeObject, byte selected);

					/// <summary>
					/// 设置图层可选性
					/// </summary>
					/// <param name="editing">可见性</param>
					/// <returns></returns>
					public virtual void SetSelected(bool selected)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(this.NativeObject, Convert.ToByte(selected));
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否忽略其设置的最大最小比例尺范围进行显示
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是，返回true；否则，返回false</returns>
					public new bool IgnoreScale_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 图层是否忽略其设置的最大最小比例尺范围进行显示
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果是，返回true；否则，返回false</returns>
					public override bool IgnoreScale()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte bIgnore);

					/// <summary>
					/// 设置图层是否忽略其设置的最大最小比例尺范围进行显示
					/// </summary>
					/// <param name="bIgnore">true为忽略，false为按比例次范围进行约束显示</param>
					/// <returns></returns>
					public new void SetIgnoreScale_NoVirtual(bool bIgnore)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(bIgnore));
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(IntPtr pNativeObject, byte bIgnore);

					/// <summary>
					/// 设置图层是否忽略其设置的最大最小比例尺范围进行显示
					/// </summary>
					/// <param name="bIgnore">true为忽略，false为按比例次范围进行约束显示</param>
					/// <returns></returns>
					public override void SetIgnoreScale(bool bIgnore)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(this.NativeObject, Convert.ToByte(bIgnore));
						
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
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层显示的最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回最大比例尺</returns>
					public new double GetDisplayMaxScale_NoVirtual()
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64_NoVirtual(this.NativeObject);
						
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
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层显示的最大比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回最大比例尺</returns>
					public override double GetDisplayMaxScale()
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(IntPtr pNativeObject, double scale);

					/// <summary>
					/// 设置图层显示的最大比例尺
					/// </summary>
					/// <param name="scale">最大比例尺</param>
					/// <returns></returns>
					public new void SetDisplayMaxScale_NoVirtual(double scale)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64_NoVirtual(this.NativeObject, scale);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(IntPtr pNativeObject, double scale);

					/// <summary>
					/// 设置图层显示的最大比例尺
					/// </summary>
					/// <param name="scale">最大比例尺</param>
					/// <returns></returns>
					public override void SetDisplayMaxScale(double scale)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(this.NativeObject, scale);
						
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
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层显示的最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回最小比例尺</returns>		
					public new double GetDisplayMinScale_NoVirtual()
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64_NoVirtual(this.NativeObject);
						
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
					private static extern double EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层显示的最小比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回最小比例尺</returns>		
					public override double GetDisplayMinScale()
					{
						double ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_NoVirtual(IntPtr pNativeObject, double scale);

					/// <summary>
					/// 设置图层显示的最小比例尺
					/// </summary>
					/// <param name="scale">最小比例尺</param>
					/// <returns></returns>
					public new void SetDisplayMinScale_NoVirtual(double scale)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64_NoVirtual(this.NativeObject, scale);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(IntPtr pNativeObject, double scale);

					/// <summary>
					/// 设置图层显示的最小比例尺
					/// </summary>
					/// <param name="scale">最小比例尺</param>
					/// <returns></returns>
					public override void SetDisplayMinScale(double scale)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(this.NativeObject, scale);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层空间参考信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回空间参考信息</returns>		
					public new EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层空间参考信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回空间参考信息</returns>		
					public override EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr ref_sr);

					/// <summary>
					/// 设置图层空间参考信息
					/// </summary>
					/// <param name="sr">空间参考信息</param>
					/// <returns></returns>
					public new void SetSpatialReference_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference_NoVirtual(this.NativeObject, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(IntPtr pNativeObject, IntPtr ref_sr);

					/// <summary>
					/// 设置图层空间参考信息
					/// </summary>
					/// <param name="sr">空间参考信息</param>
					/// <returns></returns>
					public override void SetSpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(this.NativeObject, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层范围</returns>		
					public new EarthView.World.Spatial.Geometry.Ienvelope GetExtent_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// 获取图层范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回图层范围</returns>		
					public override EarthView.World.Spatial.Geometry.Ienvelope GetExtent()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(IntPtr pNativeObject, IntPtr display, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type);

					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					///<param name="type">绘制类型</param>
					/// <returns>绘制成功，返回true；否则返回false</returns>
					public new bool Draw_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, type);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(IntPtr pNativeObject, IntPtr display, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type);

					/// <summary>
					/// 绘制图层
					/// </summary>
					/// <param name="display">空间显示参数</param>
					///<param name="type">绘制类型</param>
					/// <returns>绘制成功，返回true；否则返回false</returns>
					public override bool Draw(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Atlas.EVVECTORLAYERRENDERERTYPE type)
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, type);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 复制图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制后的图层</returns>
					public new EarthView.World.Spatial.Atlas.Ilayer Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(IntPtr pNativeObject);

					/// <summary>
					/// 复制图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制后的图层</returns>
					public override EarthView.World.Spatial.Atlas.Ilayer Clone()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Ilayer csObj = new EarthView.World.Spatial.Atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILayer");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ilayer;
							csObj.BindNativeObject(__ptr, "ILayer");
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 输出为流
					/// </summary>
					/// <param name="stream">输出参数</param>
					/// <returns></returns>
					public new void ToStream_NoVirtual(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 输出为流
					/// </summary>
					/// <param name="stream">输出参数</param>
					/// <returns></returns>
					public override void ToStream(ref  EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 输出xml格式
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回xml格式字符串</returns>
					public new string ToXML_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 输出xml格式
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回xml格式字符串</returns>
					public override string ToXML()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_NoVirtual(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml格读取图层
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					public new void FromXmlElement_NoVirtual(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement_NoVirtual(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 从xml格读取图层
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					public override void FromXmlElement(EarthView.World.Core.XmlElement element)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 将图层输出为xml元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					public new EarthView.World.Core.XmlElement ToXmlElement_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(IntPtr pNativeObject);

					/// <summary>
					/// 将图层输出为xml元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					public override EarthView.World.Core.XmlElement ToXmlElement()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.XmlElement csObj = new EarthView.World.Core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CXmlElement");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.XmlElement;
							csObj.BindNativeObject(__ptr, "CXmlElement");
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_NoVirtual(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流构建图层
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					protected new void FromStream_NoVirtual(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream_NoVirtual(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(IntPtr pNativeObject, IntPtr stream);

					/// <summary>
					/// 从流构建图层
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					protected override void FromStream(ref EarthView.World.Core.DataStream stream)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_NoVirtual(IntPtr pNativeObject);

					/// IVectorLayer Interface
					//// <summary>
					//// 获取要素集
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回要素集</returns>
					public new EarthView.World.Spatial.GeoDataset.Idataset GetDataset_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csObj.BindNativeObject(__ptr, "IDataset");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(IntPtr pNativeObject);

					/// IVectorLayer Interface
					//// <summary>
					//// 获取要素集
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回要素集</returns>
					public override EarthView.World.Spatial.GeoDataset.Idataset GetDataset()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Idataset csObj = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IDataset");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csObj.BindNativeObject(__ptr, "IDataset");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setDateset_CallBack_void_IDataset(IntPtr ref_dataset);

					protected setDateset_CallBack_void_IDataset m_setDateset_CallBack_void_IDataset;

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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr ref_dataset);

					/// <summary>
					/// 设置要素集
					/// </summary>
					/// <param name="dataset">要素集</param>
					/// <returns></returns>
					public virtual void SetDateset_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset ref_dataset)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_NoVirtual(this.NativeObject, object.Equals(ref_dataset, null) ? IntPtr.Zero : ref_dataset.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Function(IntPtr ref_dataset)
					{
						EarthView.World.Spatial.GeoDataset.Idataset csobj_ref_dataset = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_dataset.BindNativeObject(ref_dataset,"IDataset");
						csobj_ref_dataset.Delegate = true;
						IClassFactory csobj_ref_datasetClassFactory = GlobalClassFactoryMap.Get(csobj_ref_dataset.GetCppInstanceTypeName());
						if (csobj_ref_datasetClassFactory != null)
						{
							csobj_ref_dataset.Delegate = true;
							csobj_ref_dataset = csobj_ref_datasetClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csobj_ref_dataset.BindNativeObject(ref_dataset, "IDataset");
							csobj_ref_dataset.Delegate = true;
						}
						
						SetDateset(csobj_ref_dataset);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(IntPtr pNativeObject, IntPtr ref_dataset);

					/// <summary>
					/// 设置要素集
					/// </summary>
					/// <param name="dataset">要素集</param>
					/// <returns></returns>
					public virtual void SetDateset(EarthView.World.Spatial.GeoDataset.Idataset ref_dataset)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(this.NativeObject, object.Equals(ref_dataset, null) ? IntPtr.Zero : ref_dataset.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isShowTip_CallBack_ev_bool();

					protected isShowTip_CallBack_ev_bool m_isShowTip_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否显示提示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool IsShowTip_NoVirtual()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Function()
					{
						bool csret=IsShowTip();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否显示提示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual bool IsShowTip()
					{
						byte ret=EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setShowTip_CallBack_void_ev_bool(bool show);

					protected setShowTip_CallBack_void_ev_bool m_setShowTip_CallBack_void_ev_bool;

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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_NoVirtual(IntPtr pNativeObject, byte show);

					/// <summary>
					/// 设置是否显示提示
					/// </summary>
					/// <param name="show">是否显示</param>
					/// <returns></returns>
					public virtual void SetShowTip_NoVirtual(bool show)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_NoVirtual(this.NativeObject, Convert.ToByte(show));
						
					}

					protected  void EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Function(bool show)
					{
						SetShowTip(show);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(IntPtr pNativeObject, byte show);

					/// <summary>
					/// 设置是否显示提示
					/// </summary>
					/// <param name="show">是否显示</param>
					/// <returns></returns>
					public virtual void SetShowTip(bool show)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(this.NativeObject, Convert.ToByte(show));
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(IntPtr pNativeObject, IntPtr filter, EarthView.World.Spatial.Atlas.EVSELECTIONRESULTTYPE type);

					/// <summary>
					/// 图层选择（无效）
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					public new void Select_NoVirtual(EarthView.World.Spatial.GeoDataset.Iqueryfilter filter, EarthView.World.Spatial.Atlas.EVSELECTIONRESULTTYPE type)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType_NoVirtual(this.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject, type);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(IntPtr pNativeObject, IntPtr filter, EarthView.World.Spatial.Atlas.EVSELECTIONRESULTTYPE type);

					/// <summary>
					/// 图层选择（无效）
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					public override void Select(EarthView.World.Spatial.GeoDataset.Iqueryfilter filter, EarthView.World.Spatial.Atlas.EVSELECTIONRESULTTYPE type)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(this.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject, type);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void ClearSelection_NoVirtual()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(IntPtr pNativeObject);

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void ClearSelection()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_NoVirtual(IntPtr pNativeObject, IntPtr pt);

					///CNetworkAnalystLayer interfaces
					//// <summary>
					//// 添加停靠点
					//// </summary>
					//// <param name="pt">停靠点</param>
					//// <returns></returns>
					public new void AddStop_NoVirtual(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint_NoVirtual(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(IntPtr pNativeObject, IntPtr pt);

					///CNetworkAnalystLayer interfaces
					//// <summary>
					//// 添加停靠点
					//// </summary>
					//// <param name="pt">停靠点</param>
					//// <returns></returns>
					public override void AddStop(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_NoVirtual(IntPtr pNativeObject, IntPtr pt);

					/// <summary>
					/// 添加障碍点
					/// </summary>
					/// <param name="pt">障碍点</param>
					/// <returns></returns>
					public new void AddBarriar_NoVirtual(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint_NoVirtual(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(IntPtr pNativeObject, IntPtr pt);

					/// <summary>
					/// 添加障碍点
					/// </summary>
					/// <param name="pt">障碍点</param>
					/// <returns></returns>
					public override void AddBarriar(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_NoVirtual(IntPtr pNativeObject, IntPtr pt);

					/// <summary>
					/// 移动选中的元素至目标点
					/// </summary>
					/// <param name="pt">目标点</param>
					/// <returns></returns>
					public new void MoveTo_NoVirtual(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint_NoVirtual(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(IntPtr pNativeObject, IntPtr pt);

					/// <summary>
					/// 移动选中的元素至目标点
					/// </summary>
					/// <param name="pt">目标点</param>
					/// <returns></returns>
					public override void MoveTo(EarthView.World.Spatial.Geometry.Point pt)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr pt, double threshold);

					/// <summary>
					/// 点选路径分析的元素
					/// </summary>
					/// <param name="pt">点</param>
					/// <param name="threshold">范围</param>
					/// <returns></returns>
					public new void SelectResult_NoVirtual(EarthView.World.Spatial.Geometry.Point pt, double threshold)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64_NoVirtual(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject, threshold);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(IntPtr pNativeObject, IntPtr pt, double threshold);

					/// <summary>
					/// 点选路径分析的元素
					/// </summary>
					/// <param name="pt">点</param>
					/// <param name="threshold">范围</param>
					/// <returns></returns>
					public override void SelectResult(EarthView.World.Spatial.Geometry.Point pt, double threshold)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(this.NativeObject, object.Equals(pt, null) ? IntPtr.Zero : pt.NativeObject, threshold);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_NoVirtual(IntPtr pNativeObject, IntPtr rect);

					/// <summary>
					/// 框选路径分析的元素
					/// </summary>
					/// <param name="rect">范围</param>
					/// <returns></returns>
					public new void SelectResult_NoVirtual(EarthView.World.Spatial.Geometry.Rectangle rect)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle_NoVirtual(this.NativeObject, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(IntPtr pNativeObject, IntPtr rect);

					/// <summary>
					/// 框选路径分析的元素
					/// </summary>
					/// <param name="rect">范围</param>
					/// <returns></returns>
					public override void SelectResult(EarthView.World.Spatial.Geometry.Rectangle rect)
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(this.NativeObject, object.Equals(rect, null) ? IntPtr.Zero : rect.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 移除选中的元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void RemoveResult_NoVirtual()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(IntPtr pNativeObject);

					/// <summary>
					/// 移除选中的元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void RemoveResult()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 移除选中的元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new void Remove_NoVirtual()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(IntPtr pNativeObject);

					/// <summary>
					/// 移除选中的元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override void Remove()
					{
						EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_NoVirtual(IntPtr pNativeObject);

					/// CNetworkAnalystLayer interface
					//// <summary>
					//// 获取符号
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回符号</returns>
					public new EarthView.World.Spatial.Display.Isymbol GetLockedSymbol_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(IntPtr pNativeObject);

					/// CNetworkAnalystLayer interface
					//// <summary>
					//// 获取符号
					//// </summary>
					//// <param name=""></param>
					//// <returns>返回符号</returns>
					public override EarthView.World.Spatial.Display.Isymbol GetLockedSymbol()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Isymbol csObj = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csObj.BindNativeObject(__ptr, "ISymbol");
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
					private static extern IntPtr EarthView_World_Spatial2D_Analyst_CRouteLayer_getRouteResult_CRouteResult(IntPtr pNativeObject);

					/// <summary>
					/// 获取路径分析结果
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回结果</returns>
					public EarthView.World.Spatial2D.Analyst.RouteResult GetRouteResult()
					{
						IntPtr __ptr = EarthView_World_Spatial2D_Analyst_CRouteLayer_getRouteResult_CRouteResult(this.NativeObject);
						
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
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_d.so");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_d.dll");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis.so");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp.so");

						#else 
							private static bool bLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis.dll");
							private static bool csbLoadRouteLayer = LoadDll.Load("EV_NetworkAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayer", new RouteLayerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayerProxy", new RouteLayerClassFactory());

					public RouteLayer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(IntPtr pObject, isSelected_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(IntPtr pObject, setSelected_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(IntPtr pObject, setDateset_CallBack_void_IDataset pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(IntPtr pObject, isShowTip_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(IntPtr pObject, setShowTip_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(IntPtr pObject, addStop_CallBack_void_CPoint pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(IntPtr pObject, addBarriar_CallBack_void_CPoint pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64(IntPtr pObject, attach_CallBack_EVNAAttachType_CPoint_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle(IntPtr pObject, select_CallBack_void_CRectangle pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(IntPtr pObject, moveTo_CallBack_void_CPoint pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(IntPtr pObject, remove_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void(IntPtr pObject, clear_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(IntPtr pObject, getLockedSymbol_CallBack_ISymbol pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(IntPtr pObject, selectResult_CallBack_void_CPoint_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(IntPtr pObject, selectResult_CallBack_void_CRectangle pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(IntPtr pObject, removeResult_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(IntPtr pObject, solve_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(IntPtr pObject, setAnalystMethod_CallBack_void_EVNAAnalystMethod pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(IntPtr pObject, getType_CallBack_EVLayerType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(IntPtr pObject, getDataset_CallBack_IDataset pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString(IntPtr pObject, getDatasetName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource(IntPtr pObject, getDataSource_CallBack_IDataSource pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(IntPtr pObject, select_CallBack_void_IQueryFilter_EVSelectionResultType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(IntPtr pObject, clearSelection_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection(IntPtr pObject, setLayerSelection_CallBack_void_ILayerSelection pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection(IntPtr pObject, getLayerSelection_CallBack_ILayerSelection pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(IntPtr pObject, getDescription_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(IntPtr pObject, setDescription_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(IntPtr pObject, canEdit_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool(IntPtr pObject, setCanEdit_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(IntPtr pObject, isEditing_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(IntPtr pObject, setEditing_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(IntPtr pObject, isVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool(IntPtr pObject, isSelectable_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool(IntPtr pObject, setSelectable_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(IntPtr pObject, ignoreScale_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(IntPtr pObject, setIgnoreScale_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(IntPtr pObject, getDisplayMaxScale_CallBack_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(IntPtr pObject, setDisplayMaxScale_CallBack_void_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(IntPtr pObject, getDisplayMinScale_CallBack_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(IntPtr pObject, setDisplayMinScale_CallBack_void_ev_real64 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(IntPtr pObject, getSpatialReference_CallBack_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(IntPtr pObject, setSpatialReference_CallBack_void_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8(IntPtr pObject, setTransparentValue_CallBack_void_ev_uint8 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8(IntPtr pObject, getTransparentValue_CallBack_ev_uint8 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(IntPtr pObject, getExtent_CallBack_IEnvelope pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(IntPtr pObject, draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(IntPtr pObject, clone_CallBack_ILayer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(IntPtr pObject, toStream_CallBack_void_CDataStream pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(IntPtr pObject, toXML_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(IntPtr pObject, fromXmlElement_CallBack_void_CXmlElement pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(IntPtr pObject, toXmlElement_CallBack_CXmlElement pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(IntPtr pObject, fromStream_CallBack_void_CDataStream pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_isSelected_CallBack_ev_bool = EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool_Function;
							GC.KeepAlive(m_isSelected_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelected_ev_bool(this.NativeObject, m_isSelected_CallBack_ev_bool);
							m_setSelected_CallBack_void_ev_bool = EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool_Function;
							GC.KeepAlive(m_setSelected_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelected_void_ev_bool(this.NativeObject, m_setSelected_CallBack_void_ev_bool);
							m_setDateset_CallBack_void_IDataset = EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset_Function;
							GC.KeepAlive(m_setDateset_CallBack_void_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDateset_void_IDataset(this.NativeObject, m_setDateset_CallBack_void_IDataset);
							m_isShowTip_CallBack_ev_bool = EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool_Function;
							GC.KeepAlive(m_isShowTip_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isShowTip_ev_bool(this.NativeObject, m_isShowTip_CallBack_ev_bool);
							m_setShowTip_CallBack_void_ev_bool = EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool_Function;
							GC.KeepAlive(m_setShowTip_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setShowTip_void_ev_bool(this.NativeObject, m_setShowTip_CallBack_void_ev_bool);
							m_addStop_CallBack_void_CPoint = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addStop_void_CPoint_Function;
							GC.KeepAlive(m_addStop_CallBack_void_CPoint);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addStop_void_CPoint(this.NativeObject, m_addStop_CallBack_void_CPoint);
							m_addBarriar_CallBack_void_CPoint = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_addBarriar_void_CPoint_Function;
							GC.KeepAlive(m_addBarriar_CallBack_void_CPoint);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_addBarriar_void_CPoint(this.NativeObject, m_addBarriar_CallBack_void_CPoint);
							m_attach_CallBack_EVNAAttachType_CPoint_ev_real64 = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_attach_EVNAAttachType_CPoint_ev_real64_Function;
							GC.KeepAlive(m_attach_CallBack_EVNAAttachType_CPoint_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_attach_EVNAAttachType_CPoint_ev_real64(this.NativeObject, m_attach_CallBack_EVNAAttachType_CPoint_ev_real64);
							m_select_CallBack_void_CRectangle = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_select_void_CRectangle_Function;
							GC.KeepAlive(m_select_CallBack_void_CRectangle);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_CRectangle(this.NativeObject, m_select_CallBack_void_CRectangle);
							m_moveTo_CallBack_void_CPoint = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_moveTo_void_CPoint_Function;
							GC.KeepAlive(m_moveTo_CallBack_void_CPoint);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_moveTo_void_CPoint(this.NativeObject, m_moveTo_CallBack_void_CPoint);
							m_remove_CallBack_void = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_remove_void_Function;
							GC.KeepAlive(m_remove_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_remove_void(this.NativeObject, m_remove_CallBack_void);
							m_clear_CallBack_void = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_clear_void_Function;
							GC.KeepAlive(m_clear_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clear_void(this.NativeObject, m_clear_CallBack_void);
							m_getLockedSymbol_CallBack_ISymbol = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_getLockedSymbol_ISymbol_Function;
							GC.KeepAlive(m_getLockedSymbol_CallBack_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLockedSymbol_ISymbol(this.NativeObject, m_getLockedSymbol_CallBack_ISymbol);
							m_selectResult_CallBack_void_CPoint_ev_real64 = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CPoint_ev_real64_Function;
							GC.KeepAlive(m_selectResult_CallBack_void_CPoint_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CPoint_ev_real64(this.NativeObject, m_selectResult_CallBack_void_CPoint_ev_real64);
							m_selectResult_CallBack_void_CRectangle = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_selectResult_void_CRectangle_Function;
							GC.KeepAlive(m_selectResult_CallBack_void_CRectangle);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_selectResult_void_CRectangle(this.NativeObject, m_selectResult_CallBack_void_CRectangle);
							m_removeResult_CallBack_void = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_removeResult_void_Function;
							GC.KeepAlive(m_removeResult_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_removeResult_void(this.NativeObject, m_removeResult_CallBack_void);
							m_solve_CallBack_ev_bool = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_solve_ev_bool_Function;
							GC.KeepAlive(m_solve_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_solve_ev_bool(this.NativeObject, m_solve_CallBack_ev_bool);
							m_setAnalystMethod_CallBack_void_EVNAAnalystMethod = EarthView_World_Spatial2D_Analyst_CNetworkAnalystLayer_setAnalystMethod_void_EVNAAnalystMethod_Function;
							GC.KeepAlive(m_setAnalystMethod_CallBack_void_EVNAAnalystMethod);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setAnalystMethod_void_EVNAAnalystMethod(this.NativeObject, m_setAnalystMethod_CallBack_void_EVNAAnalystMethod);
							m_getType_CallBack_EVLayerType = EarthView_World_Spatial_Atlas_ILayer_getType_EVLayerType_Function;
							GC.KeepAlive(m_getType_CallBack_EVLayerType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getType_EVLayerType(this.NativeObject, m_getType_CallBack_EVLayerType);
							m_getDataset_CallBack_IDataset = EarthView_World_Spatial_Atlas_ILayer_getDataset_IDataset_Function;
							GC.KeepAlive(m_getDataset_CallBack_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataset_IDataset(this.NativeObject, m_getDataset_CallBack_IDataset);
							m_getDatasetName_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getDatasetName_EVString_Function;
							GC.KeepAlive(m_getDatasetName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDatasetName_EVString(this.NativeObject, m_getDatasetName_CallBack_EVString);
							m_getDataSource_CallBack_IDataSource = EarthView_World_Spatial_Atlas_ILayer_getDataSource_IDataSource_Function;
							GC.KeepAlive(m_getDataSource_CallBack_IDataSource);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDataSource_IDataSource(this.NativeObject, m_getDataSource_CallBack_IDataSource);
							m_select_CallBack_void_IQueryFilter_EVSelectionResultType = EarthView_World_Spatial_Atlas_ILayer_select_void_IQueryFilter_EVSelectionResultType_Function;
							GC.KeepAlive(m_select_CallBack_void_IQueryFilter_EVSelectionResultType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_select_void_IQueryFilter_EVSelectionResultType(this.NativeObject, m_select_CallBack_void_IQueryFilter_EVSelectionResultType);
							m_clearSelection_CallBack_void = EarthView_World_Spatial_Atlas_ILayer_clearSelection_void_Function;
							GC.KeepAlive(m_clearSelection_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clearSelection_void(this.NativeObject, m_clearSelection_CallBack_void);
							m_setLayerSelection_CallBack_void_ILayerSelection = EarthView_World_Spatial_Atlas_ILayer_setLayerSelection_void_ILayerSelection_Function;
							GC.KeepAlive(m_setLayerSelection_CallBack_void_ILayerSelection);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setLayerSelection_void_ILayerSelection(this.NativeObject, m_setLayerSelection_CallBack_void_ILayerSelection);
							m_getLayerSelection_CallBack_ILayerSelection = EarthView_World_Spatial_Atlas_ILayer_getLayerSelection_ILayerSelection_Function;
							GC.KeepAlive(m_getLayerSelection_CallBack_ILayerSelection);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getLayerSelection_ILayerSelection(this.NativeObject, m_getLayerSelection_CallBack_ILayerSelection);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_World_Spatial_Atlas_ILayer_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_getDescription_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_getDescription_EVString_Function;
							GC.KeepAlive(m_getDescription_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDescription_EVString(this.NativeObject, m_getDescription_CallBack_EVString);
							m_setDescription_CallBack_void_EVString = EarthView_World_Spatial_Atlas_ILayer_setDescription_void_EVString_Function;
							GC.KeepAlive(m_setDescription_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDescription_void_EVString(this.NativeObject, m_setDescription_CallBack_void_EVString);
							m_canEdit_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_canEdit_ev_bool_Function;
							GC.KeepAlive(m_canEdit_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_canEdit_ev_bool(this.NativeObject, m_canEdit_CallBack_ev_bool);
							m_setCanEdit_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setCanEdit_void_ev_bool_Function;
							GC.KeepAlive(m_setCanEdit_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setCanEdit_void_ev_bool(this.NativeObject, m_setCanEdit_CallBack_void_ev_bool);
							m_isEditing_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isEditing_ev_bool_Function;
							GC.KeepAlive(m_isEditing_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isEditing_ev_bool(this.NativeObject, m_isEditing_CallBack_ev_bool);
							m_setEditing_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setEditing_void_ev_bool_Function;
							GC.KeepAlive(m_setEditing_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setEditing_void_ev_bool(this.NativeObject, m_setEditing_CallBack_void_ev_bool);
							m_isVisible_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isVisible_ev_bool_Function;
							GC.KeepAlive(m_isVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isVisible_ev_bool(this.NativeObject, m_isVisible_CallBack_ev_bool);
							m_setVisible_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_isSelectable_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_isSelectable_ev_bool_Function;
							GC.KeepAlive(m_isSelectable_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_isSelectable_ev_bool(this.NativeObject, m_isSelectable_CallBack_ev_bool);
							m_setSelectable_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setSelectable_void_ev_bool_Function;
							GC.KeepAlive(m_setSelectable_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSelectable_void_ev_bool(this.NativeObject, m_setSelectable_CallBack_void_ev_bool);
							m_ignoreScale_CallBack_ev_bool = EarthView_World_Spatial_Atlas_ILayer_ignoreScale_ev_bool_Function;
							GC.KeepAlive(m_ignoreScale_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_ignoreScale_ev_bool(this.NativeObject, m_ignoreScale_CallBack_ev_bool);
							m_setIgnoreScale_CallBack_void_ev_bool = EarthView_World_Spatial_Atlas_ILayer_setIgnoreScale_void_ev_bool_Function;
							GC.KeepAlive(m_setIgnoreScale_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setIgnoreScale_void_ev_bool(this.NativeObject, m_setIgnoreScale_CallBack_void_ev_bool);
							m_getDisplayMaxScale_CallBack_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_getDisplayMaxScale_ev_real64_Function;
							GC.KeepAlive(m_getDisplayMaxScale_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMaxScale_ev_real64(this.NativeObject, m_getDisplayMaxScale_CallBack_ev_real64);
							m_setDisplayMaxScale_CallBack_void_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_setDisplayMaxScale_void_ev_real64_Function;
							GC.KeepAlive(m_setDisplayMaxScale_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMaxScale_void_ev_real64(this.NativeObject, m_setDisplayMaxScale_CallBack_void_ev_real64);
							m_getDisplayMinScale_CallBack_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_getDisplayMinScale_ev_real64_Function;
							GC.KeepAlive(m_getDisplayMinScale_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getDisplayMinScale_ev_real64(this.NativeObject, m_getDisplayMinScale_CallBack_ev_real64);
							m_setDisplayMinScale_CallBack_void_ev_real64 = EarthView_World_Spatial_Atlas_ILayer_setDisplayMinScale_void_ev_real64_Function;
							GC.KeepAlive(m_setDisplayMinScale_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setDisplayMinScale_void_ev_real64(this.NativeObject, m_setDisplayMinScale_CallBack_void_ev_real64);
							m_getSpatialReference_CallBack_ISpatialReference = EarthView_World_Spatial_Atlas_ILayer_getSpatialReference_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReference_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getSpatialReference_ISpatialReference(this.NativeObject, m_getSpatialReference_CallBack_ISpatialReference);
							m_setSpatialReference_CallBack_void_ISpatialReference = EarthView_World_Spatial_Atlas_ILayer_setSpatialReference_void_ISpatialReference_Function;
							GC.KeepAlive(m_setSpatialReference_CallBack_void_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setSpatialReference_void_ISpatialReference(this.NativeObject, m_setSpatialReference_CallBack_void_ISpatialReference);
							m_setTransparentValue_CallBack_void_ev_uint8 = EarthView_World_Spatial_Atlas_ILayer_setTransparentValue_void_ev_uint8_Function;
							GC.KeepAlive(m_setTransparentValue_CallBack_void_ev_uint8);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_setTransparentValue_void_ev_uint8(this.NativeObject, m_setTransparentValue_CallBack_void_ev_uint8);
							m_getTransparentValue_CallBack_ev_uint8 = EarthView_World_Spatial_Atlas_ILayer_getTransparentValue_ev_uint8_Function;
							GC.KeepAlive(m_getTransparentValue_CallBack_ev_uint8);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getTransparentValue_ev_uint8(this.NativeObject, m_getTransparentValue_CallBack_ev_uint8);
							m_getExtent_CallBack_IEnvelope = EarthView_World_Spatial_Atlas_ILayer_getExtent_IEnvelope_Function;
							GC.KeepAlive(m_getExtent_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_getExtent_IEnvelope(this.NativeObject, m_getExtent_CallBack_IEnvelope);
							m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType = EarthView_World_Spatial_Atlas_ILayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(this.NativeObject, m_draw_CallBack_ev_bool_ISpatialDisplay_EVVectorLayerRendererType);
							m_clone_CallBack_ILayer = EarthView_World_Spatial_Atlas_ILayer_clone_ILayer_Function;
							GC.KeepAlive(m_clone_CallBack_ILayer);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_clone_ILayer(this.NativeObject, m_clone_CallBack_ILayer);
							m_toStream_CallBack_void_CDataStream = EarthView_World_Spatial_Atlas_ILayer_toStream_void_CDataStream_Function;
							GC.KeepAlive(m_toStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toStream_void_CDataStream(this.NativeObject, m_toStream_CallBack_void_CDataStream);
							m_toXML_CallBack_EVString = EarthView_World_Spatial_Atlas_ILayer_toXML_EVString_Function;
							GC.KeepAlive(m_toXML_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXML_EVString(this.NativeObject, m_toXML_CallBack_EVString);
							m_fromXmlElement_CallBack_void_CXmlElement = EarthView_World_Spatial_Atlas_ILayer_fromXmlElement_void_CXmlElement_Function;
							GC.KeepAlive(m_fromXmlElement_CallBack_void_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromXmlElement_void_CXmlElement(this.NativeObject, m_fromXmlElement_CallBack_void_CXmlElement);
							m_toXmlElement_CallBack_CXmlElement = EarthView_World_Spatial_Atlas_ILayer_toXmlElement_CXmlElement_Function;
							GC.KeepAlive(m_toXmlElement_CallBack_CXmlElement);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_toXmlElement_CXmlElement(this.NativeObject, m_toXmlElement_CallBack_CXmlElement);
							m_fromStream_CallBack_void_CDataStream = EarthView_World_Spatial_Atlas_ILayer_fromStream_void_CDataStream_Function;
							GC.KeepAlive(m_fromStream_CallBack_void_CDataStream);
							EV_RegisterCallback_EarthView_World_Spatial2D_Analyst_CRouteLayer_fromStream_void_CDataStream(this.NativeObject, m_fromStream_CallBack_void_CDataStream);
						}
					}
					public override EarthView.World.Spatial2D.Analyst.EVNAATTACHTYPE Attach(EarthView.World.Spatial.Geometry.Point pt, double threshold)
					{
						return base.Attach_NoVirtual(pt,threshold);
					}
					public override void Select(EarthView.World.Spatial.Geometry.Rectangle rect)
					{
						base.Select_NoVirtual(rect);
					}
					public override void Clear()
					{
						base.Clear_NoVirtual();
					}
					public override string GetDatasetName()
					{
						return base.GetDatasetName_NoVirtual();
					}
					public override EarthView.World.Spatial.GeoDataset.Idatasource GetDataSource()
					{
						return base.GetDataSource_NoVirtual();
					}
					public override void SetLayerSelection(EarthView.World.Spatial.Atlas.Ilayerselection selection)
					{
						base.SetLayerSelection_NoVirtual(selection);
					}
					public override EarthView.World.Spatial.Atlas.Ilayerselection GetLayerSelection()
					{
						return base.GetLayerSelection_NoVirtual();
					}
					public override void SetCanEdit(bool can)
					{
						base.SetCanEdit_NoVirtual(can);
					}
					public override bool IsSelectable()
					{
						return base.IsSelectable_NoVirtual();
					}
					public override void SetSelectable(bool selectable)
					{
						base.SetSelectable_NoVirtual(selectable);
					}
					public override void SetTransparentValue(byte transparent)
					{
						base.SetTransparentValue_NoVirtual(transparent);
					}
					public override byte GetTransparentValue()
					{
						return base.GetTransparentValue_NoVirtual();
					}
					public static RouteLayer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RouteLayer obj = baseObj as  RouteLayer;
						if (object.Equals(obj, null))
						{
							obj = new RouteLayer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRouteLayer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RouteLayerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RouteLayer emptyInstance = new RouteLayer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
