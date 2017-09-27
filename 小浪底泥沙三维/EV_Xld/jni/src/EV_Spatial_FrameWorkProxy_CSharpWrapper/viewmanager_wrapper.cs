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
			namespace Controls
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
public class ViewManager : EarthView.World.Core.BaseObject
{
	public enum VIEWTYPE
	{
		Globe,
		Map,
		None
	
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openGlobe_CControlSpace_EVString_EVString(IntPtr pNativeObject, string name, string windowHandle);

	/// <summary>
	/// 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	/// </summary>
	/// <param name="name">场景名称。</param>
	/// <param name="windowHandle">
	/// 创建场景对象需要的window句柄。
	/// 对于Windows，windowHandle的值只有一个，即WId，
	/// 对于Linux，windowHandle的值为"display:screen:WId"
	/// </param>
	/// <returns>创建的CGlobeControl对象。</returns>
	public ControlSpace OpenGlobe(string name, string windowHandle)
	{
		IntPtr __ptr = CViewManager_openGlobe_CControlSpace_EVString_EVString(this.NativeObject, name, windowHandle);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openGlobe_CControlSpace_EVString_ev_uint32_ev_uint32_EVString(IntPtr pNativeObject, string name, uint winWidth, uint winHeight, string windowHandle);

	public ControlSpace OpenGlobe(string name, uint winWidth, uint winHeight, string windowHandle)
	{
		IntPtr __ptr = CViewManager_openGlobe_CControlSpace_EVString_ev_uint32_ev_uint32_EVString(this.NativeObject, name, winWidth, winHeight, windowHandle);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openGlobe_CControlSpace_EVString_EVString_ev_uint32(IntPtr pNativeObject, string name, string windowHandle, uint toolbarEnabled);

	/// <summary>
	/// 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	/// </summary>
	/// <param name="name">场景名称。</param>
	/// <param name="windowHandle">
	/// 创建场景对象需要的window句柄。
	/// 对于Windows，windowHandle的值只有一个，即WId，
	/// 对于Linux，windowHandle的值为"display:screen:WId"
	/// </param>
	/// <param name="toolbarEnabled">指定要创建的工具栏的枚举(EV_ToolBarType)。</param>
	/// <returns>创建的CGlobeControl对象。</returns>
	public ControlSpace OpenGlobe(string name, string windowHandle, uint toolbarEnabled)
	{
		IntPtr __ptr = CViewManager_openGlobe_CControlSpace_EVString_EVString_ev_uint32(this.NativeObject, name, windowHandle, toolbarEnabled);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getViewType_ViewType_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 获取指定名称的窗口的类型。
	/// </summary>
	/// <param name="name">窗口名称</param>
	/// <returns>CViewManager::ViewType</returns>
	public ViewManager.VIEWTYPE GetViewType(string name)
	{
		int ret=CViewManager_getViewType_ViewType_EVString(this.NativeObject, name);
		
		return (ViewManager.VIEWTYPE)ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getActiveViewType_ViewType(IntPtr pNativeObject);

	/// <summary>
	/// 获取当前激活的窗口的类型。
	/// </summary>
	/// <returns>CViewManager::ViewType</returns>
	public ViewManager.VIEWTYPE GetActiveViewType()
	{
		int ret=CViewManager_getActiveViewType_ViewType(this.NativeObject);
		
		return (ViewManager.VIEWTYPE)ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CViewManager_closeGlobe_void_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 关闭球。
	/// </summary>
	/// <param name="name">球名。</param>
	/// <returns></returns>
	public void CloseGlobe(string name)
	{
		CViewManager_closeGlobe_void_EVString(this.NativeObject, name);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openMap_CControlSpace_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	/// </summary>
	/// <param name="name">地图名称。</param>
	/// <returns>创建的CControlSpace对象。</returns>
	public ControlSpace OpenMap(string name)
	{
		IntPtr __ptr = CViewManager_openMap_CControlSpace_EVString(this.NativeObject, name);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openMap_CControlSpace_EVString_ev_uint32(IntPtr pNativeObject, string name, uint toolbarEnabled);

	/// <summary>
	/// 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	/// </summary>
	/// <param name="name">地图名称。</param>
	/// <param name="toolbarEnabled">指定要创建的工具栏的枚举(EV_ToolBarType)。</param>
	/// <returns>创建的CControlSpace对象。</returns>
	public ControlSpace OpenMap(string name, uint toolbarEnabled)
	{
		IntPtr __ptr = CViewManager_openMap_CControlSpace_EVString_ev_uint32(this.NativeObject, name, toolbarEnabled);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CViewManager_closeMap_void_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 关闭地图。
	/// </summary>
	/// <param name="name">地图名。</param>
	/// <returns></returns>
	public void CloseMap(string name)
	{
		CViewManager_closeMap_void_EVString(this.NativeObject, name);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_openLayout_CControlSpace_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 打开布局
	/// </summary>
	/// <param name="name">布局名称</param>
	/// <returns></returns>
	public ControlSpace OpenLayout(string name)
	{
		IntPtr __ptr = CViewManager_openLayout_CControlSpace_EVString(this.NativeObject, name);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern void CViewManager_closeLayout_void_EVString(IntPtr pNativeObject, string name);

	/// <summary>
	/// 关闭布局
	/// </summary>
	/// <param name="name">布局名称</param>
	/// <returns></returns>
	public void CloseLayout(string name)
	{
		CViewManager_closeLayout_void_EVString(this.NativeObject, name);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getActiveControlSpace_CControlSpace(IntPtr pNativeObject);

	/// <summary>
	/// <summary>
	/// 获取当前激活的CControlSpace对象。
	/// </summary>
	/// <returns>CControlSpace对象指针。</returns>
	public ControlSpace GetActiveControlSpace()
	{
		IntPtr __ptr = CViewManager_getActiveControlSpace_CControlSpace(this.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getLastActiveControlSpace_CControlSpace(IntPtr pNativeObject);

	/// <summary>
	/// 获取上一个激活的CControlSpace对象。
	/// </summary>
	/// <returns>CControlSpace对象指针。</returns>
	public ControlSpace GetLastActiveControlSpace()
	{
		IntPtr __ptr = CViewManager_getLastActiveControlSpace_CControlSpace(this.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getActiveControlName_EVString(IntPtr pNativeObject);

	/// <summary>
	/// 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象名称。</returns>
	public string GetActiveControlName()
	{
		IntPtr __ptr = CViewManager_getActiveControlName_EVString(this.NativeObject);
		
		string ret = Marshal.PtrToStringAnsi(__ptr);
		ClassFactory.FreeString(ref __ptr);
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getLastActiveControlName_EVString(IntPtr pNativeObject);

	/// <summary>
	/// 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象名称。</returns>
	public string GetLastActiveControlName()
	{
		IntPtr __ptr = CViewManager_getLastActiveControlName_EVString(this.NativeObject);
		
		string ret = Marshal.PtrToStringAnsi(__ptr);
		ClassFactory.FreeString(ref __ptr);
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getActiveSpatialControl_ISpatialControl(IntPtr pNativeObject);

	/// <summary>
	/// 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	public EarthView.World.Spatial.Atlas.Ispatialcontrol GetActiveSpatialControl()
	{
		IntPtr __ptr = CViewManager_getActiveSpatialControl_ISpatialControl(this.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "ISpatialControl");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
			csObj.BindNativeObject(__ptr, "ISpatialControl");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getLastActiveSpatialControl_ISpatialControl(IntPtr pNativeObject);

	/// <summary>
	/// 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	public EarthView.World.Spatial.Atlas.Ispatialcontrol GetLastActiveSpatialControl()
	{
		IntPtr __ptr = CViewManager_getLastActiveSpatialControl_ISpatialControl(this.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "ISpatialControl");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
			csObj.BindNativeObject(__ptr, "ISpatialControl");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getSpatialControlByName_ISpatialControl_EVString(IntPtr pNativeObject, string spatialControlName);

	/// <summary>
	/// 获取指定名称的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	public EarthView.World.Spatial.Atlas.Ispatialcontrol GetSpatialControlByName(string spatialControlName)
	{
		IntPtr __ptr = CViewManager_getSpatialControlByName_ISpatialControl_EVString(this.NativeObject, spatialControlName);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "ISpatialControl");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
			csObj.BindNativeObject(__ptr, "ISpatialControl");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getControlSpaceByName_CControlSpace_EVString(IntPtr pNativeObject, string spatialControlName);

	/// <summary>
	/// 获取指定名称的CControlSpace对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>CControlSpace对象指针。</returns>
	public ControlSpace GetControlSpaceByName(string spatialControlName)
	{
		IntPtr __ptr = CViewManager_getControlSpaceByName_CControlSpace_EVString(this.NativeObject, spatialControlName);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getControlSpaceByControl_CControlSpace_ISpatialControl(IntPtr pNativeObject, IntPtr ctrl);

	/// <summary>
	/// 获取指定EarthView::World::Spatial::Atlas::ISpatialControl的CControlSpace对象。
	/// </summary>
	/// <param name="ctrl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>CControlSpace对象指针。</returns>
	public ControlSpace GetControlSpaceByControl(EarthView.World.Spatial.Atlas.Ispatialcontrol ctrl)
	{
		IntPtr __ptr = CViewManager_getControlSpaceByControl_CControlSpace_ISpatialControl(this.NativeObject, object.Equals(ctrl, null) ? IntPtr.Zero : ctrl.NativeObject);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ControlSpace csObj = new ControlSpace(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CControlSpace");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ControlSpace;
			csObj.BindNativeObject(__ptr, "CControlSpace");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern byte CViewManager_setActiveSpatialControl_ev_bool_ISpatialControl(IntPtr pNativeObject, IntPtr spatialControl);

	/// <summary>
	/// 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>设置是否成功。</returns>
	public bool SetActiveSpatialControl(EarthView.World.Spatial.Atlas.Ispatialcontrol spatialControl)
	{
		byte ret=CViewManager_setActiveSpatialControl_ev_bool_ISpatialControl(this.NativeObject, object.Equals(spatialControl, null) ? IntPtr.Zero : spatialControl.NativeObject);
		
		return Convert.ToBoolean(ret);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern byte CViewManager_setActiveSpatialControl_ev_bool_EVString(IntPtr pNativeObject, string spatialControlName);

	/// <summary>
	/// 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>设置是否成功。</returns>
	public bool SetActiveSpatialControl(string spatialControlName)
	{
		byte ret=CViewManager_setActiveSpatialControl_ev_bool_EVString(this.NativeObject, spatialControlName);
		
		return Convert.ToBoolean(ret);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getControlCount_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 获取EarthView::World::Spatial::Atlas::ISpatialControl个数。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl个数。</returns>
	public int GetControlCount()
	{
		int ret=CViewManager_getControlCount_ev_int32(this.NativeObject);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getMapControlCount_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 获取地图的个数。
	/// </summary>
	/// <returns>地图的个数。</returns>
	public int GetMapControlCount()
	{
		int ret=CViewManager_getMapControlCount_ev_int32(this.NativeObject);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getGlobeControlCount_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 获取球的个数。
	/// </summary>
	/// <returns>球的个数。</returns>
	public int GetGlobeControlCount()
	{
		int ret=CViewManager_getGlobeControlCount_ev_int32(this.NativeObject);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern int CViewManager_getLayoutControlCount_ev_int32(IntPtr pNativeObject);

	/// <summary>
	/// 获取纸张布局的个数
	/// </summary>
	/// <returns>纸张布局的个数</returns>
	public int GetLayoutControlCount()
	{
		int ret=CViewManager_getLayoutControlCount_ev_int32(this.NativeObject);
		
		return ret;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getControl_ISpatialControl_int(IntPtr pNativeObject, int index);

	/// <summary>
	/// 获取指定index的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="index">index。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	public EarthView.World.Spatial.Atlas.Ispatialcontrol GetControl(int index)
	{
		IntPtr __ptr = CViewManager_getControl_ISpatialControl_int(this.NativeObject, index);
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		EarthView.World.Spatial.Atlas.Ispatialcontrol csObj = new EarthView.World.Spatial.Atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "ISpatialControl");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Ispatialcontrol;
			csObj.BindNativeObject(__ptr, "ISpatialControl");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern byte CViewManager_isSpatialExists_ev_bool_ISpatialControl(IntPtr pNativeObject, IntPtr ctrl);

	/// <summary>
	/// 判断某EarthView::World::Spatial::Atlas::ISpatialControl是否存在，如果不在就不要弄它。
	/// </summary>
	/// <param name="ctrl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl是否存在。</returns>
	public bool IsSpatialExists(EarthView.World.Spatial.Atlas.Ispatialcontrol ctrl)
	{
		byte ret=CViewManager_isSpatialExists_ev_bool_ISpatialControl(this.NativeObject, object.Equals(ctrl, null) ? IntPtr.Zero : ctrl.NativeObject);
		
		return Convert.ToBoolean(ret);
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getSingleton_CViewManager();

	/// <summary>
	/// 获取单例对象引用。
	/// </summary>
	/// <returns></returns>
	public static ViewManager GetSingleton()
	{
		IntPtr __ptr = CViewManager_getSingleton_CViewManager();
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ViewManager csObj = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CViewManager");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ViewManager;
			csObj.BindNativeObject(__ptr, "CViewManager");
			csObj.Delegate = true;
		}
		return csObj;
		
	}


	#if DEBUG 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#else 
		#if Windows 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#elif Linux 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Android 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.so", CallingConvention = CallingConvention.StdCall)]
		#elif Apple 
			[System.Runtime.InteropServices.DllImport("__Internal")]
		#else 
			[System.Runtime.InteropServices.DllImport("EV_Spatial_FrameWorkProxy_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
		#endif 
	#endif 
	private static extern IntPtr CViewManager_getSingletonPtr_CViewManager();

	/// <summary>
	/// 获取单例对象指针。
	/// </summary>
	/// <returns></returns>
	public static ViewManager GetSingletonPtr()
	{
		IntPtr __ptr = CViewManager_getSingletonPtr_CViewManager();
		
		if(__ptr==IntPtr.Zero)
		{
		return null;
		}
		ViewManager csObj = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
		csObj.BindNativeObject(__ptr, "CViewManager");
		csObj.Delegate = true;
		IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
		if (csObjClassFactory != null)
		{
			csObj.Delegate = true;
			csObj = csObjClassFactory.Create() as ViewManager;
			csObj.BindNativeObject(__ptr, "CViewManager");
			csObj.Delegate = true;
		}
		return csObj;
		
	}

	#if DEBUG 
		#if Windows 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#elif Linux 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.so");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.so");

		#else 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_d.dll");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp_d.dll");

		#endif 
	#else 
		#if Windows 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#elif Linux 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.so");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.so");

		#else 
			private static bool bLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy.dll");
			private static bool csbLoadViewManager = LoadDll.Load("EV_Spatial_FrameWorkProxy_CSharp.dll");

		#endif 
	#endif 

	private static bool registerStatus = GlobalClassFactoryMap.Put("CViewManager", new ViewManagerClassFactory());

	public ViewManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
	{
	}

	public override void RegisterCallBack()
	{
		if (this.NativeObject != IntPtr.Zero)
		{
		}
	}
	public static ViewManager FromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
			return null;
		ViewManager obj = baseObj as  ViewManager;
		if (object.Equals(obj, null))
		{
			obj = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.BindNativeObject(baseObj.NativeObject, "CViewManager");
			obj.IncreaseCast();
		}

		return obj;
	}
}

public class ViewManagerClassFactory : IClassFactory
{
	public BaseObject Create()
	{
		ViewManager emptyInstance = new ViewManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}

