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
				/// 空间分析监听类
				/// 用户根据需求重写此类已达到监听效果
				/// </summary>
				public class Analysis3DListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					public Analysis3DListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CAnalysis3DListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Analysis.Analysis3DListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onAnalysisStart_CallBack_void_IAnalysis3DTool(IntPtr tool);

					protected onAnalysisStart_CallBack_void_IAnalysis3DTool m_onAnalysisStart_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在启动空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnAnalysisStart_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Function(IntPtr tool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						OnAnalysisStart(csobj_tool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在启动空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnAnalysisStart(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onAnalysisEnd_CallBack_void_IAnalysis3DTool(IntPtr tool);

					protected onAnalysisEnd_CallBack_void_IAnalysis3DTool m_onAnalysisEnd_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在结束空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnAnalysisEnd_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Function(IntPtr tool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						OnAnalysisEnd(csobj_tool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在结束空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnAnalysisEnd(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onEventStart_CallBack_void_IAnalysis3DTool(IntPtr tool);

					protected onEventStart_CallBack_void_IAnalysis3DTool m_onEventStart_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在触发ITool事件的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnEventStart_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Function(IntPtr tool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						OnEventStart(csobj_tool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在触发ITool事件的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnEventStart(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onEventEnd_CallBack_void_IAnalysis3DTool(IntPtr tool);

					protected onEventEnd_CallBack_void_IAnalysis3DTool m_onEventEnd_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnEventEnd_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Function(IntPtr tool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						OnEventEnd(csobj_tool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void OnEventEnd(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void prepareParma_CallBack_void_IAnalysis3DTool(IntPtr tool);

					protected prepareParma_CallBack_void_IAnalysis3DTool m_prepareParma_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在开始分析前调用的函数，用于准备数据
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void PrepareParma_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Function(IntPtr tool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						PrepareParma(csobj_tool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr tool);

					/// <summary>
					/// 在开始分析前调用的函数，用于准备数据
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					public virtual void PrepareParma(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onStepChanged_CallBack_void_IAnalysis3DTool_EVString(IntPtr tool, ref IntPtr info);

					protected onStepChanged_CallBack_void_IAnalysis3DTool_EVString m_onStepChanged_CallBack_void_IAnalysis3DTool_EVString;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_NoVirtual(IntPtr pNativeObject, IntPtr tool, string info);

					/// <summary>
					/// 空间分析中步骤发生改变调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="info">给出的提示</param>
					public virtual void OnStepChanged_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool, string info)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject, info);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Function(IntPtr tool, ref IntPtr info)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						string strinfo= Marshal.PtrToStringAnsi(info);
						ClassFactory.FreeString(ref info);
						
						OnStepChanged(csobj_tool, strinfo);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(IntPtr pNativeObject, IntPtr tool, string info);

					/// <summary>
					/// 空间分析中步骤发生改变调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="info">给出的提示</param>
					public virtual void OnStepChanged(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool, string info)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject, info);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32(IntPtr tool, uint value, uint count);

					protected onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32 m_onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr tool, uint value, uint count);

					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="value">当前处理的值</param>
					/// <param name="count">总值</param>
					public virtual void OnProgressChanged_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool, uint value, uint count)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_NoVirtual(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject, value, count);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Function(IntPtr tool, uint value, uint count)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_tool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_tool.BindNativeObject(tool,"IAnalysis3DTool");
						csobj_tool.Delegate = true;
						IClassFactory csobj_toolClassFactory = GlobalClassFactoryMap.Get(csobj_tool.GetCppInstanceTypeName());
						if (csobj_toolClassFactory != null)
						{
							csobj_tool.Delegate = true;
							csobj_tool = csobj_toolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_tool.BindNativeObject(tool, "IAnalysis3DTool");
							csobj_tool.Delegate = true;
						}
						
						OnProgressChanged(csobj_tool, value, count);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr tool, uint value, uint count);

					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="value">当前处理的值</param>
					/// <param name="count">总值</param>
					public virtual void OnProgressChanged(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool tool, uint value, uint count)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(this.NativeObject, object.Equals(tool, null) ? IntPtr.Zero : tool.NativeObject, value, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onMouseClicked_CallBack_void_IAnalysis3DTool(IntPtr pTool);

					protected onMouseClicked_CallBack_void_IAnalysis3DTool m_onMouseClicked_CallBack_void_IAnalysis3DTool;

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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_NoVirtual(IntPtr pNativeObject, IntPtr pTool);

					/// <summary>
					/// 空间分析中鼠标点击后调用的函数
					/// </summary>
					/// <param name="pTool">空间分析的指针</param>
					public virtual void OnMouseClicked_NoVirtual(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool pTool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_NoVirtual(this.NativeObject, object.Equals(pTool, null) ? IntPtr.Zero : pTool.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Function(IntPtr pTool)
					{
						EarthView.World.Spatial3D.Analysis.Ianalysis3dtool csobj_pTool = new EarthView.World.Spatial3D.Analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pTool.BindNativeObject(pTool,"IAnalysis3DTool");
						csobj_pTool.Delegate = true;
						IClassFactory csobj_pToolClassFactory = GlobalClassFactoryMap.Get(csobj_pTool.GetCppInstanceTypeName());
						if (csobj_pToolClassFactory != null)
						{
							csobj_pTool.Delegate = true;
							csobj_pTool = csobj_pToolClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Ianalysis3dtool;
							csobj_pTool.BindNativeObject(pTool, "IAnalysis3DTool");
							csobj_pTool.Delegate = true;
						}
						
						OnMouseClicked(csobj_pTool);
						
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
					private static extern void EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(IntPtr pNativeObject, IntPtr pTool);

					/// <summary>
					/// 空间分析中鼠标点击后调用的函数
					/// </summary>
					/// <param name="pTool">空间分析的指针</param>
					public virtual void OnMouseClicked(EarthView.World.Spatial3D.Analysis.Ianalysis3dtool pTool)
					{
						EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(this.NativeObject, object.Equals(pTool, null) ? IntPtr.Zero : pTool.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_d.dll");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_d.so");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.so");

						#else 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_d.dll");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis.dll");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.dll");

						#elif Linux 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis.so");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.so");

						#else 
							private static bool bLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis.dll");
							private static bool csbLoadAnalysis3DListener = LoadDll.Load("EV_Spatial3DAnalysis_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAnalysis3DListener", new Analysis3DListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAnalysis3DListenerProxy", new Analysis3DListenerClassFactory());

					public Analysis3DListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(IntPtr pObject, onAnalysisStart_CallBack_void_IAnalysis3DTool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(IntPtr pObject, onAnalysisEnd_CallBack_void_IAnalysis3DTool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(IntPtr pObject, onEventStart_CallBack_void_IAnalysis3DTool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(IntPtr pObject, onEventEnd_CallBack_void_IAnalysis3DTool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(IntPtr pObject, prepareParma_CallBack_void_IAnalysis3DTool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(IntPtr pObject, onStepChanged_CallBack_void_IAnalysis3DTool_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(IntPtr pObject, onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(IntPtr pObject, onMouseClicked_CallBack_void_IAnalysis3DTool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onAnalysisStart_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_onAnalysisStart_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisStart_void_IAnalysis3DTool(this.NativeObject, m_onAnalysisStart_CallBack_void_IAnalysis3DTool);
							m_onAnalysisEnd_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_onAnalysisEnd_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onAnalysisEnd_void_IAnalysis3DTool(this.NativeObject, m_onAnalysisEnd_CallBack_void_IAnalysis3DTool);
							m_onEventStart_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_onEventStart_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventStart_void_IAnalysis3DTool(this.NativeObject, m_onEventStart_CallBack_void_IAnalysis3DTool);
							m_onEventEnd_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_onEventEnd_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onEventEnd_void_IAnalysis3DTool(this.NativeObject, m_onEventEnd_CallBack_void_IAnalysis3DTool);
							m_prepareParma_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_prepareParma_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_prepareParma_void_IAnalysis3DTool(this.NativeObject, m_prepareParma_CallBack_void_IAnalysis3DTool);
							m_onStepChanged_CallBack_void_IAnalysis3DTool_EVString = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString_Function;
							GC.KeepAlive(m_onStepChanged_CallBack_void_IAnalysis3DTool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onStepChanged_void_IAnalysis3DTool_EVString(this.NativeObject, m_onStepChanged_CallBack_void_IAnalysis3DTool_EVString);
							m_onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32 = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32_Function;
							GC.KeepAlive(m_onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onProgressChanged_void_IAnalysis3DTool_ev_uint32_ev_uint32(this.NativeObject, m_onProgressChanged_CallBack_void_IAnalysis3DTool_ev_uint32_ev_uint32);
							m_onMouseClicked_CallBack_void_IAnalysis3DTool = EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool_Function;
							GC.KeepAlive(m_onMouseClicked_CallBack_void_IAnalysis3DTool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DListener_onMouseClicked_void_IAnalysis3DTool(this.NativeObject, m_onMouseClicked_CallBack_void_IAnalysis3DTool);
						}
					}
					public static Analysis3DListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Analysis3DListener obj = baseObj as  Analysis3DListener;
						if (object.Equals(obj, null))
						{
							obj = new Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CAnalysis3DListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Analysis3DListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Analysis3DListener emptyInstance = new Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
