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
			namespace Controls
			{
				/// <summary>
				/// 用于通知选择集改变，三维分析结束，实时经纬度的监听类
				/// </summary>
				public class GlobeControlListener : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>					
					public GlobeControlListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGlobeControlListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Controls.GlobeControlListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onGlobeSelectionChanged_CallBack_void_CGlobeSelection(IntPtr globeSelection);

					protected onGlobeSelectionChanged_CallBack_void_CGlobeSelection m_onGlobeSelectionChanged_CallBack_void_CGlobeSelection;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_NoVirtual(IntPtr pNativeObject, IntPtr globeSelection);

					/// <summary>
					/// 选择集变化通知函数
					/// </summary>
					/// <param name="globeSelection">变化之后的选择集</param>						
					/// <returns></returns>
					public virtual void OnGlobeSelectionChanged_NoVirtual(EarthView.World.Spatial3D.GlobeSelection globeSelection)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_NoVirtual(this.NativeObject, object.Equals(globeSelection, null) ? IntPtr.Zero : globeSelection.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Function(IntPtr globeSelection)
					{
						EarthView.World.Spatial3D.GlobeSelection csobj_globeSelection = new EarthView.World.Spatial3D.GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeSelection.BindNativeObject(globeSelection,"CGlobeSelection");
						csobj_globeSelection.Delegate = true;
						IClassFactory csobj_globeSelectionClassFactory = GlobalClassFactoryMap.Get(csobj_globeSelection.GetCppInstanceTypeName());
						if (csobj_globeSelectionClassFactory != null)
						{
							csobj_globeSelection.Delegate = true;
							csobj_globeSelection = csobj_globeSelectionClassFactory.Create() as EarthView.World.Spatial3D.GlobeSelection;
							csobj_globeSelection.BindNativeObject(globeSelection, "CGlobeSelection");
							csobj_globeSelection.Delegate = true;
						}
						
						OnGlobeSelectionChanged(csobj_globeSelection);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(IntPtr pNativeObject, IntPtr globeSelection);

					/// <summary>
					/// 选择集变化通知函数
					/// </summary>
					/// <param name="globeSelection">变化之后的选择集</param>						
					/// <returns></returns>
					public virtual void OnGlobeSelectionChanged(EarthView.World.Spatial3D.GlobeSelection globeSelection)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(this.NativeObject, object.Equals(globeSelection, null) ? IntPtr.Zero : globeSelection.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onRaySceneQueryResult_CallBack_void_RaySceneQueryResult(IntPtr result);

					protected onRaySceneQueryResult_CallBack_void_RaySceneQueryResult m_onRaySceneQueryResult_CallBack_void_RaySceneQueryResult;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 射线查询通知函数
					/// </summary>
					/// <param name="result">射线查询结果</param>						
					/// <returns></returns>
					public virtual void OnRaySceneQueryResult_NoVirtual(ref EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_NoVirtual(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Function(IntPtr result)
					{
						EarthView.World.Graphic.RaySceneQueryResult csobj_result = new EarthView.World.Graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_result.BindNativeObject(result,"RaySceneQueryResult");
						csobj_result.Delegate = true;
						IClassFactory csobj_resultClassFactory = GlobalClassFactoryMap.Get(csobj_result.GetCppInstanceTypeName());
						if (csobj_resultClassFactory != null)
						{
							csobj_result.Delegate = true;
							csobj_result = csobj_resultClassFactory.Create() as EarthView.World.Graphic.RaySceneQueryResult;
							csobj_result.BindNativeObject(result, "RaySceneQueryResult");
							csobj_result.Delegate = true;
						}
						
						OnRaySceneQueryResult(ref csobj_result);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 射线查询通知函数
					/// </summary>
					/// <param name="result">射线查询结果</param>						
					/// <returns></returns>
					public virtual void OnRaySceneQueryResult(ref EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onAnalysisStart_CallBack_void_ITool(IntPtr tool);

					protected onAnalysisStart_CallBack_void_ITool m_onAnalysisStart_CallBack_void_ITool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 三维分析开始前的通知事件
					/// </summary>
					/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
					/// <returns></returns>
					public virtual void OnAnalysisStart_NoVirtual(EarthView.World.Spatial.SystemUI.Itool tool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Function(IntPtr tool)
					{
						EarthView.World.Spatial.SystemUI.Itool csobj_tool = new EarthView.World.Spatial.SystemUI.Itool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"ITool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itool;
							csobj_tool.BindNativeObject(tool, "ITool");
							csobj_tool.Delegate = true;
						}
						
						OnAnalysisStart(csobj_tool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 三维分析开始前的通知事件
					/// </summary>
					/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
					/// <returns></returns>
					public virtual void OnAnalysisStart(EarthView.World.Spatial.SystemUI.Itool tool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onAnalysisEnd_CallBack_void_ITool(IntPtr tool);

					protected onAnalysisEnd_CallBack_void_ITool m_onAnalysisEnd_CallBack_void_ITool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 三维分析结束后的通知事件
					/// </summary>
					/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
					/// <returns></returns>
					public virtual void OnAnalysisEnd_NoVirtual(EarthView.World.Spatial.SystemUI.Itool tool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Function(IntPtr tool)
					{
						EarthView.World.Spatial.SystemUI.Itool csobj_tool = new EarthView.World.Spatial.SystemUI.Itool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"ITool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itool;
							csobj_tool.BindNativeObject(tool, "ITool");
							csobj_tool.Delegate = true;
						}
						
						OnAnalysisEnd(csobj_tool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 三维分析结束后的通知事件
					/// </summary>
					/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
					/// <returns></returns>
					public virtual void OnAnalysisEnd(EarthView.World.Spatial.SystemUI.Itool tool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onMousePosition_CallBack_void_Real_Real_Real_ev_bool(double lat, double lon, double alt, bool isValid);

					protected onMousePosition_CallBack_void_Real_Real_Real_ev_bool m_onMousePosition_CallBack_void_Real_Real_Real_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_NoVirtual(IntPtr pNativeObject, double lat, double lon, double alt, byte isValid);

					/// <summary>
					/// 取得鼠标在球上实时位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">地形高度</param>					
					/// <param name="isValid">true代表与球相交，值有效</param>				
					/// <returns></returns>						
					public virtual void OnMousePosition_NoVirtual(double lat, double lon, double alt, bool isValid)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_NoVirtual(this.NativeObject, lat, lon, alt, Convert.ToByte(isValid));
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Function(double lat, double lon, double alt, bool isValid)
					{
						OnMousePosition(lat, lon, alt, isValid);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(IntPtr pNativeObject, double lat, double lon, double alt, byte isValid);

					/// <summary>
					/// 取得鼠标在球上实时位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">地形高度</param>					
					/// <param name="isValid">true代表与球相交，值有效</param>				
					/// <returns></returns>						
					public virtual void OnMousePosition(double lat, double lon, double alt, bool isValid)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(this.NativeObject, lat, lon, alt, Convert.ToByte(isValid));
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onFlyFinished_CallBack_void_CGlobeControl(IntPtr globeControl);

					protected onFlyFinished_CallBack_void_CGlobeControl m_onFlyFinished_CallBack_void_CGlobeControl;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_NoVirtual(IntPtr pNativeObject, IntPtr globeControl);

					/// <summary>
					/// 飞行播放自动结束触发的事件
					/// </summary>								
					/// <returns></returns>						
					public virtual void OnFlyFinished_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Function(IntPtr globeControl)
					{
						EarthView.World.Spatial3D.Controls.GlobeControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"CGlobeControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeControl;
							csobj_globeControl.BindNativeObject(globeControl, "CGlobeControl");
							csobj_globeControl.Delegate = true;
						}
						
						OnFlyFinished(csobj_globeControl);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(IntPtr pNativeObject, IntPtr globeControl);

					/// <summary>
					/// 飞行播放自动结束触发的事件
					/// </summary>								
					/// <returns></returns>						
					public virtual void OnFlyFinished(EarthView.World.Spatial3D.Controls.GlobeControl globeControl)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool(IntPtr globeControl, IntPtr pOldTool, IntPtr pNewTool);

					protected onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool m_onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr pOldTool, IntPtr pNewTool);

					/// <summary>
					/// 当前Tool改变的事件
					/// </summary>			
					/// <param name="globeControl">控件</param>
					/// <param name="pOldTool">改变之前的Tool</param>
					/// <param name="pNewTool">改变之后的Tool</param>		
					/// <returns></returns>
					public virtual void OnCurrentToolChanged_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, EarthView.World.Spatial.SystemUI.Itool pOldTool, EarthView.World.Spatial.SystemUI.Itool pNewTool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(pOldTool, null) ? IntPtr.Zero : pOldTool.NativeObject, object.Equals(pNewTool, null) ? IntPtr.Zero : pNewTool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Function(IntPtr globeControl, IntPtr pOldTool, IntPtr pNewTool)
					{
						EarthView.World.Spatial3D.Controls.GlobeControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"CGlobeControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeControl;
							csobj_globeControl.BindNativeObject(globeControl, "CGlobeControl");
							csobj_globeControl.Delegate = true;
						}
						EarthView.World.Spatial.SystemUI.Itool csobj_pOldTool = new EarthView.World.Spatial.SystemUI.Itool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pOldTool.BindNativeObject(pOldTool,"ITool");
						csobj_pOldTool.Delegate = true;
						IClassFactory csobj_pOldToolClassFactory = GlobalClassFactoryMap.Get(csobj_pOldTool.GetCppInstanceTypeName());
						if (csobj_pOldToolClassFactory != null)
						{
							csobj_pOldTool.Delegate = true;
							csobj_pOldTool = csobj_pOldToolClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itool;
							csobj_pOldTool.BindNativeObject(pOldTool, "ITool");
							csobj_pOldTool.Delegate = true;
						}
						EarthView.World.Spatial.SystemUI.Itool csobj_pNewTool = new EarthView.World.Spatial.SystemUI.Itool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pNewTool.BindNativeObject(pNewTool,"ITool");
						csobj_pNewTool.Delegate = true;
						IClassFactory csobj_pNewToolClassFactory = GlobalClassFactoryMap.Get(csobj_pNewTool.GetCppInstanceTypeName());
						if (csobj_pNewToolClassFactory != null)
						{
							csobj_pNewTool.Delegate = true;
							csobj_pNewTool = csobj_pNewToolClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itool;
							csobj_pNewTool.BindNativeObject(pNewTool, "ITool");
							csobj_pNewTool.Delegate = true;
						}
						
						OnCurrentToolChanged(csobj_globeControl, csobj_pOldTool, csobj_pNewTool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(IntPtr pNativeObject, IntPtr globeControl, IntPtr pOldTool, IntPtr pNewTool);

					/// <summary>
					/// 当前Tool改变的事件
					/// </summary>			
					/// <param name="globeControl">控件</param>
					/// <param name="pOldTool">改变之前的Tool</param>
					/// <param name="pNewTool">改变之后的Tool</param>		
					/// <returns></returns>
					public virtual void OnCurrentToolChanged(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, EarthView.World.Spatial.SystemUI.Itool pOldTool, EarthView.World.Spatial.SystemUI.Itool pNewTool)
					{
						EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(pOldTool, null) ? IntPtr.Zero : pOldTool.NativeObject, object.Equals(pNewTool, null) ? IntPtr.Zero : pNewTool.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadGlobeControlListener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlListener", new GlobeControlListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeControlListenerProxy", new GlobeControlListenerClassFactory());

					public GlobeControlListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(IntPtr pObject, onGlobeSelectionChanged_CallBack_void_CGlobeSelection pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(IntPtr pObject, onRaySceneQueryResult_CallBack_void_RaySceneQueryResult pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(IntPtr pObject, onAnalysisStart_CallBack_void_ITool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(IntPtr pObject, onAnalysisEnd_CallBack_void_ITool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(IntPtr pObject, onMousePosition_CallBack_void_Real_Real_Real_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(IntPtr pObject, onFlyFinished_CallBack_void_CGlobeControl pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GlobeControl_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(IntPtr pObject, onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onGlobeSelectionChanged_CallBack_void_CGlobeSelection = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Function;
							GC.KeepAlive(m_onGlobeSelectionChanged_CallBack_void_CGlobeSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(this.NativeObject, m_onGlobeSelectionChanged_CallBack_void_CGlobeSelection);
							m_onRaySceneQueryResult_CallBack_void_RaySceneQueryResult = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Function;
							GC.KeepAlive(m_onRaySceneQueryResult_CallBack_void_RaySceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(this.NativeObject, m_onRaySceneQueryResult_CallBack_void_RaySceneQueryResult);
							m_onAnalysisStart_CallBack_void_ITool = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Function;
							GC.KeepAlive(m_onAnalysisStart_CallBack_void_ITool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(this.NativeObject, m_onAnalysisStart_CallBack_void_ITool);
							m_onAnalysisEnd_CallBack_void_ITool = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Function;
							GC.KeepAlive(m_onAnalysisEnd_CallBack_void_ITool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(this.NativeObject, m_onAnalysisEnd_CallBack_void_ITool);
							m_onMousePosition_CallBack_void_Real_Real_Real_ev_bool = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Function;
							GC.KeepAlive(m_onMousePosition_CallBack_void_Real_Real_Real_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(this.NativeObject, m_onMousePosition_CallBack_void_Real_Real_Real_ev_bool);
							m_onFlyFinished_CallBack_void_CGlobeControl = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Function;
							GC.KeepAlive(m_onFlyFinished_CallBack_void_CGlobeControl);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(this.NativeObject, m_onFlyFinished_CallBack_void_CGlobeControl);
							m_onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool = EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Function;
							GC.KeepAlive(m_onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(this.NativeObject, m_onCurrentToolChanged_CallBack_void_CGlobeControl_ITool_ITool);
						}
					}
					public static GlobeControlListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeControlListener obj = baseObj as  GlobeControlListener;
						if (object.Equals(obj, null))
						{
							obj = new GlobeControlListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeControlListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeControlListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeControlListener emptyInstance = new GlobeControlListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
