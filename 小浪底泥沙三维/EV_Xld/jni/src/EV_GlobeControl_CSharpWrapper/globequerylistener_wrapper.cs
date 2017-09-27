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
			namespace SystemUI
			{
				/// <summary>
				/// 三维场景查询监听器基类
				/// </summary>
				public class Iglobequerylistener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 鼠标状态
					/// </summary>
					public enum MOUSEOPTYPE
					{
										MOT_MouseDown,
										MOT_MouseMove,
										MOT_MouseUp
					
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					public Iglobequerylistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IGlobeQueryListenerProxy", null);
						if (!"EarthView.World.Spatial3D.SystemUI.Iglobequerylistener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection m_onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">所有三维图层选择集的集合</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Spatial3D.GlobeSelection result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Function(IntPtr globeControl, IntPtr result)
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
						EarthView.World.Spatial3D.GlobeSelection csobj_result = new EarthView.World.Spatial3D.GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_result.BindNativeObject(result,"CGlobeSelection");
						csobj_result.Delegate = true;
						IClassFactory csobj_resultClassFactory = GlobalClassFactoryMap.Get(csobj_result.GetCppInstanceTypeName());
						if (csobj_resultClassFactory != null)
						{
							csobj_result.Delegate = true;
							csobj_result = csobj_resultClassFactory.Create() as EarthView.World.Spatial3D.GlobeSelection;
							csobj_result.BindNativeObject(result, "CGlobeSelection");
							csobj_result.Delegate = true;
						}
						
						OnSelectionChanged(csobj_globeControl, ref csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">所有三维图层选择集的集合</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Spatial3D.GlobeSelection result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult m_onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线求交结果</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Function(IntPtr globeControl, IntPtr result)
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
						
						OnSelectionChanged(csobj_globeControl, ref csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线求交结果</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult m_onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景空间查询结果</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.SceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Function(IntPtr globeControl, IntPtr result)
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
						EarthView.World.Graphic.SceneQueryResult csobj_result = new EarthView.World.Graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_result.BindNativeObject(result,"SceneQueryResult");
						csobj_result.Delegate = true;
						IClassFactory csobj_resultClassFactory = GlobalClassFactoryMap.Get(csobj_result.GetCppInstanceTypeName());
						if (csobj_resultClassFactory != null)
						{
							csobj_result.Delegate = true;
							csobj_result = csobj_resultClassFactory.Create() as EarthView.World.Graphic.SceneQueryResult;
							csobj_result.BindNativeObject(result, "SceneQueryResult");
							csobj_result.Delegate = true;
						}
						
						OnSelectionChanged(csobj_globeControl, ref csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 通知选择集发生了变化
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景空间查询结果</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.SceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type);

					protected onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType m_onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type);

					/// <summary>
					/// 通知选中的物体被移动了
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线求交结果排序算子</param>
					/// <param name="newMatrix">物体新的世界变换矩阵</param>
					/// <param name="type">鼠标状态</param>
					/// <returns></returns>	
					public virtual void OnSelectedObjectMoved_NoVirtual(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.RaySceneQueryResultEntry entry, EarthView.World.Spatial.Math.Matrix4 newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(entry, null) ? IntPtr.Zero : entry.NativeObject, object.Equals(newMatrix, null) ? IntPtr.Zero : newMatrix.NativeObject, type);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Function(IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type)
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
						EarthView.World.Graphic.RaySceneQueryResultEntry csobj_entry = new EarthView.World.Graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_entry.BindNativeObject(entry,"RaySceneQueryResultEntry");
						csobj_entry.Delegate = true;
						IClassFactory csobj_entryClassFactory = GlobalClassFactoryMap.Get(csobj_entry.GetCppInstanceTypeName());
						if (csobj_entryClassFactory != null)
						{
							csobj_entry.Delegate = true;
							csobj_entry = csobj_entryClassFactory.Create() as EarthView.World.Graphic.RaySceneQueryResultEntry;
							csobj_entry.BindNativeObject(entry, "RaySceneQueryResultEntry");
							csobj_entry.Delegate = true;
						}
						EarthView.World.Spatial.Math.Matrix4 csobj_newMatrix = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_newMatrix.BindNativeObject(newMatrix,"CMatrix4");
						csobj_newMatrix.Delegate = true;
						IClassFactory csobj_newMatrixClassFactory = GlobalClassFactoryMap.Get(csobj_newMatrix.GetCppInstanceTypeName());
						if (csobj_newMatrixClassFactory != null)
						{
							csobj_newMatrix.Delegate = true;
							csobj_newMatrix = csobj_newMatrixClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csobj_newMatrix.BindNativeObject(newMatrix, "CMatrix4");
							csobj_newMatrix.Delegate = true;
						}
						
						OnSelectedObjectMoved(csobj_globeControl, ref csobj_entry, csobj_newMatrix, type);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(IntPtr pNativeObject, IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type);

					/// <summary>
					/// 通知选中的物体被移动了
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线求交结果排序算子</param>
					/// <param name="newMatrix">物体新的世界变换矩阵</param>
					/// <param name="type">鼠标状态</param>
					/// <returns></returns>	
					public virtual void OnSelectedObjectMoved(EarthView.World.Spatial3D.Controls.GlobeControl globeControl, ref EarthView.World.Graphic.RaySceneQueryResultEntry entry, EarthView.World.Spatial.Math.Matrix4 newMatrix, EarthView.World.Spatial3D.SystemUI.Iglobequerylistener.MOUSEOPTYPE type)
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(entry, null) ? IntPtr.Zero : entry.NativeObject, object.Equals(newMatrix, null) ? IntPtr.Zero : newMatrix.NativeObject, type);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onDeleteKeyPressed_CallBack_void();

					protected onDeleteKeyPressed_CallBack_void m_onDeleteKeyPressed_CallBack_void;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// Delete键按下事件处理
					/// </summary>
					/// <returns></returns>	
					public virtual void OnDeleteKeyPressed_NoVirtual()
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Function()
					{
						OnDeleteKeyPressed();
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(IntPtr pNativeObject);

					/// <summary>
					/// Delete键按下事件处理
					/// </summary>
					/// <returns></returns>	
					public virtual void OnDeleteKeyPressed()
					{
						EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadIglobequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener", new IglobequerylistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::IGlobeQueryListenerProxy", new IglobequerylistenerClassFactory());

					public Iglobequerylistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(IntPtr pObject, onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(IntPtr pObject, onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(IntPtr pObject, onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(IntPtr pObject, onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(IntPtr pObject, onDeleteKeyPressed_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection = EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(this.NativeObject, m_onSelectionChanged_CallBack_void_CGlobeControl_CGlobeSelection);
							m_onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult = EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(this.NativeObject, m_onSelectionChanged_CallBack_void_CGlobeControl_RaySceneQueryResult);
							m_onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult = EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(this.NativeObject, m_onSelectionChanged_CallBack_void_CGlobeControl_SceneQueryResult);
							m_onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType = EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Function;
							GC.KeepAlive(m_onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(this.NativeObject, m_onSelectedObjectMoved_CallBack_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType);
							m_onDeleteKeyPressed_CallBack_void = EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Function;
							GC.KeepAlive(m_onDeleteKeyPressed_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(this.NativeObject, m_onDeleteKeyPressed_CallBack_void);
						}
					}
					public static Iglobequerylistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iglobequerylistener obj = baseObj as  Iglobequerylistener;
						if (object.Equals(obj, null))
						{
							obj = new Iglobequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IGlobeQueryListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IglobequerylistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iglobequerylistener emptyInstance = new Iglobequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
