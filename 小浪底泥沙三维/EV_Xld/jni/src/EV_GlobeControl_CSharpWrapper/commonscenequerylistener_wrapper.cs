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
				public class Icommonscenequerylistener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					public Icommonscenequerylistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ICommonSceneQueryListenerProxy", null);
						if (!"EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection m_onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">选择集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Spatial3D.GlobeSelection result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Function(IntPtr globeControl, IntPtr result)
					{
						EarthView.World.Spatial3D.Controls.C3DControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"C3DControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.C3DControl;
							csobj_globeControl.BindNativeObject(globeControl, "C3DControl");
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
						
						OnSelectionChanged(csobj_globeControl, csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">选择集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Spatial3D.GlobeSelection result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_RaySceneQueryResult(IntPtr result);

					protected onSelectionChanged_CallBack_void_RaySceneQueryResult m_onSelectionChanged_CallBack_void_RaySceneQueryResult;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_NoVirtual(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Function(IntPtr result)
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
						
						OnSelectionChanged(csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult m_onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Function(IntPtr globeControl, IntPtr result)
					{
						EarthView.World.Spatial3D.Controls.C3DControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"C3DControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.C3DControl;
							csobj_globeControl.BindNativeObject(globeControl, "C3DControl");
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
						
						OnSelectionChanged(csobj_globeControl, csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult(IntPtr globeControl, IntPtr result);

					protected onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult m_onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景查询选择集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged_NoVirtual(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.SceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Function(IntPtr globeControl, IntPtr result)
					{
						EarthView.World.Spatial3D.Controls.C3DControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"C3DControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.C3DControl;
							csobj_globeControl.BindNativeObject(globeControl, "C3DControl");
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
						
						OnSelectionChanged(csobj_globeControl, csobj_result);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(IntPtr pNativeObject, IntPtr globeControl, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="result">场景查询选择集</param>
					/// <returns></returns>	
					public virtual void OnSelectionChanged(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.SceneQueryResult result)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type);

					protected onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType m_onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType;

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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_NoVirtual(IntPtr pNativeObject, IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线查询结果集记录</param>
					/// <param name="newMatrix">世界变换矩阵</param>
					/// <param name="type">类型标识</param>
					/// <returns></returns>	
					public virtual void OnSelectedObjectMoved_NoVirtual(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.RaySceneQueryResultEntry entry, EarthView.World.Spatial.Math.Matrix4 newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_NoVirtual(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(entry, null) ? IntPtr.Zero : entry.NativeObject, object.Equals(newMatrix, null) ? IntPtr.Zero : newMatrix.NativeObject, type);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Function(IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type)
					{
						EarthView.World.Spatial3D.Controls.C3DControl csobj_globeControl = new EarthView.World.Spatial3D.Controls.C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeControl.BindNativeObject(globeControl,"C3DControl");
						csobj_globeControl.Delegate = true;
						IClassFactory csobj_globeControlClassFactory = GlobalClassFactoryMap.Get(csobj_globeControl.GetCppInstanceTypeName());
						if (csobj_globeControlClassFactory != null)
						{
							csobj_globeControl.Delegate = true;
							csobj_globeControl = csobj_globeControlClassFactory.Create() as EarthView.World.Spatial3D.Controls.C3DControl;
							csobj_globeControl.BindNativeObject(globeControl, "C3DControl");
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
						
						OnSelectedObjectMoved(csobj_globeControl, csobj_entry, csobj_newMatrix, type);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(IntPtr pNativeObject, IntPtr globeControl, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="globeControl">场景控件</param>
					/// <param name="entry">射线查询结果集记录</param>
					/// <param name="newMatrix">世界变换矩阵</param>
					/// <param name="type">类型标识</param>
					/// <returns></returns>	
					public virtual void OnSelectedObjectMoved(EarthView.World.Spatial3D.Controls.C3DControl globeControl, EarthView.World.Graphic.RaySceneQueryResultEntry entry, EarthView.World.Spatial.Math.Matrix4 newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type)
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.NativeObject, object.Equals(globeControl, null) ? IntPtr.Zero : globeControl.NativeObject, object.Equals(entry, null) ? IntPtr.Zero : entry.NativeObject, object.Equals(newMatrix, null) ? IntPtr.Zero : newMatrix.NativeObject, type);
						
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 按下删除键处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					public virtual void OnDeleteKeyPressed_NoVirtual()
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Function()
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
					private static extern void EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(IntPtr pNativeObject);

					/// <summary>
					/// 按下删除键处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					public virtual void OnDeleteKeyPressed()
					{
						EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadIcommonscenequerylistener = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener", new IcommonscenequerylistenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListenerProxy", new IcommonscenequerylistenerClassFactory());

					public Icommonscenequerylistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(IntPtr pObject, onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(IntPtr pObject, onSelectionChanged_CallBack_void_RaySceneQueryResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(IntPtr pObject, onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(IntPtr pObject, onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(IntPtr pObject, onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(IntPtr pObject, onDeleteKeyPressed_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(this.NativeObject, m_onSelectionChanged_CallBack_void_C3DControl_CGlobeSelection);
							m_onSelectionChanged_CallBack_void_RaySceneQueryResult = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_RaySceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(this.NativeObject, m_onSelectionChanged_CallBack_void_RaySceneQueryResult);
							m_onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(this.NativeObject, m_onSelectionChanged_CallBack_void_C3DControl_RaySceneQueryResult);
							m_onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Function;
							GC.KeepAlive(m_onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(this.NativeObject, m_onSelectionChanged_CallBack_void_C3DControl_SceneQueryResult);
							m_onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Function;
							GC.KeepAlive(m_onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.NativeObject, m_onSelectedObjectMoved_CallBack_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType);
							m_onDeleteKeyPressed_CallBack_void = EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Function;
							GC.KeepAlive(m_onDeleteKeyPressed_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(this.NativeObject, m_onDeleteKeyPressed_CallBack_void);
						}
					}
					public static Icommonscenequerylistener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Icommonscenequerylistener obj = baseObj as  Icommonscenequerylistener;
						if (object.Equals(obj, null))
						{
							obj = new Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ICommonSceneQueryListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IcommonscenequerylistenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Icommonscenequerylistener emptyInstance = new Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
