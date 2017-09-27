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
			namespace SystemUI
			{
				public class Iactionfactory : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createToolBar_CallBack_IToolBar_ev_uint32(uint type);

					protected createToolBar_CallBack_IToolBar_ev_uint32 m_createToolBar_CallBack_IToolBar_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_NoVirtual(IntPtr pNativeObject, uint type);

					/// <summary>
					/// 根据指定类型创建工具栏
					/// </summary>
					/// <param name="type">工具栏类型</param>
					/// <returns>工具栏</returns>
					public virtual EarthView.World.Spatial.SystemUI.Itoolbar CreateToolBar_NoVirtual(uint type)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_NoVirtual(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Itoolbar csObj = new EarthView.World.Spatial.SystemUI.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IToolBar");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itoolbar;
							csObj.BindNativeObject(__ptr, "IToolBar");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Function(uint type)
					{
						EarthView.World.Spatial.SystemUI.Itoolbar csret=CreateToolBar(type);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(IntPtr pNativeObject, uint type);

					/// <summary>
					/// 根据指定类型创建工具栏
					/// </summary>
					/// <param name="type">工具栏类型</param>
					/// <returns>工具栏</returns>
					public virtual EarthView.World.Spatial.SystemUI.Itoolbar CreateToolBar(uint type)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Itoolbar csObj = new EarthView.World.Spatial.SystemUI.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IToolBar");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itoolbar;
							csObj.BindNativeObject(__ptr, "IToolBar");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createMenu_CallBack_IMenu_ev_uint32(uint type);

					protected createMenu_CallBack_IMenu_ev_uint32 m_createMenu_CallBack_IMenu_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_NoVirtual(IntPtr pNativeObject, uint type);

					/// <summary>
					/// 根据指定类型创建菜单
					/// </summary>
					/// <param name="type">菜单类型</param>
					/// <returns>菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu CreateMenu_NoVirtual(uint type)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_NoVirtual(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Function(uint type)
					{
						EarthView.World.Spatial.SystemUI.Imenu csret=CreateMenu(type);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(IntPtr pNativeObject, uint type);

					/// <summary>
					/// 根据指定类型创建菜单
					/// </summary>
					/// <param name="type">菜单类型</param>
					/// <returns>菜单</returns>
					public virtual EarthView.World.Spatial.SystemUI.Imenu CreateMenu(uint type)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(this.NativeObject, type);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Imenu csObj = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IMenu");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csObj.BindNativeObject(__ptr, "IMenu");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destoryToolBar_CallBack_void_IToolBar(IntPtr bar);

					protected destoryToolBar_CallBack_void_IToolBar m_destoryToolBar_CallBack_void_IToolBar;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_NoVirtual(IntPtr pNativeObject, IntPtr bar);

					/// <summary>
					/// 删除工具栏
					/// </summary>
					/// <param name="bar">待删除的工具栏</param>
					/// <returns></returns>
					public virtual void DestoryToolBar_NoVirtual(EarthView.World.Spatial.SystemUI.Itoolbar bar)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_NoVirtual(this.NativeObject, object.Equals(bar, null) ? IntPtr.Zero : bar.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Function(IntPtr bar)
					{
						EarthView.World.Spatial.SystemUI.Itoolbar csobj_bar = new EarthView.World.Spatial.SystemUI.Itoolbar(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_bar.BindNativeObject(bar,"IToolBar");
						csobj_bar.Delegate = true;
						IClassFactory csobj_barClassFactory = GlobalClassFactoryMap.Get(csobj_bar.GetCppInstanceTypeName());
						if (csobj_barClassFactory != null)
						{
							csobj_bar.Delegate = true;
							csobj_bar = csobj_barClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itoolbar;
							csobj_bar.BindNativeObject(bar, "IToolBar");
							csobj_bar.Delegate = true;
						}
						
						DestoryToolBar(csobj_bar);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(IntPtr pNativeObject, IntPtr bar);

					/// <summary>
					/// 删除工具栏
					/// </summary>
					/// <param name="bar">待删除的工具栏</param>
					/// <returns></returns>
					public virtual void DestoryToolBar(EarthView.World.Spatial.SystemUI.Itoolbar bar)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(this.NativeObject, object.Equals(bar, null) ? IntPtr.Zero : bar.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void destoryMenu_CallBack_void_IMenu(IntPtr menu);

					protected destoryMenu_CallBack_void_IMenu m_destoryMenu_CallBack_void_IMenu;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_NoVirtual(IntPtr pNativeObject, IntPtr menu);

					/// <summary>
					/// 删除菜单
					/// </summary>
					/// <param name="menu">待删除的菜单</param>
					/// <returns></returns>
					public virtual void DestoryMenu_NoVirtual(EarthView.World.Spatial.SystemUI.Imenu menu)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_NoVirtual(this.NativeObject, object.Equals(menu, null) ? IntPtr.Zero : menu.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Function(IntPtr menu)
					{
						EarthView.World.Spatial.SystemUI.Imenu csobj_menu = new EarthView.World.Spatial.SystemUI.Imenu(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_menu.BindNativeObject(menu,"IMenu");
						csobj_menu.Delegate = true;
						IClassFactory csobj_menuClassFactory = GlobalClassFactoryMap.Get(csobj_menu.GetCppInstanceTypeName());
						if (csobj_menuClassFactory != null)
						{
							csobj_menu.Delegate = true;
							csobj_menu = csobj_menuClassFactory.Create() as EarthView.World.Spatial.SystemUI.Imenu;
							csobj_menu.BindNativeObject(menu, "IMenu");
							csobj_menu.Delegate = true;
						}
						
						DestoryMenu(csobj_menu);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(IntPtr pNativeObject, IntPtr menu);

					/// <summary>
					/// 删除菜单
					/// </summary>
					/// <param name="menu">待删除的菜单</param>
					/// <returns></returns>
					public virtual void DestoryMenu(EarthView.World.Spatial.SystemUI.Imenu menu)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(this.NativeObject, object.Equals(menu, null) ? IntPtr.Zero : menu.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getItem_CallBack_IItem_ICommand(IntPtr cmd);

					protected getItem_CallBack_IItem_ICommand m_getItem_CallBack_IItem_ICommand;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_NoVirtual(IntPtr pNativeObject, IntPtr cmd);

					/// <summary>
					/// 获取与command相关联的item
					/// </summary>
					/// <param name="cmd">命令项</param>
					/// <returns>显示项</returns>
					public virtual EarthView.World.Spatial.SystemUI.Iitem GetItem_NoVirtual(EarthView.World.Spatial.SystemUI.Icommand cmd)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_NoVirtual(this.NativeObject, object.Equals(cmd, null) ? IntPtr.Zero : cmd.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Iitem csObj = new EarthView.World.Spatial.SystemUI.Iitem(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IItem");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Iitem;
							csObj.BindNativeObject(__ptr, "IItem");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Function(IntPtr cmd)
					{
						EarthView.World.Spatial.SystemUI.Icommand csobj_cmd = new EarthView.World.Spatial.SystemUI.Icommand(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_cmd.BindNativeObject(cmd,"ICommand");
						csobj_cmd.Delegate = true;
						IClassFactory csobj_cmdClassFactory = GlobalClassFactoryMap.Get(csobj_cmd.GetCppInstanceTypeName());
						if (csobj_cmdClassFactory != null)
						{
							csobj_cmd.Delegate = true;
							csobj_cmd = csobj_cmdClassFactory.Create() as EarthView.World.Spatial.SystemUI.Icommand;
							csobj_cmd.BindNativeObject(cmd, "ICommand");
							csobj_cmd.Delegate = true;
						}
						
						EarthView.World.Spatial.SystemUI.Iitem csret=GetItem(csobj_cmd);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(IntPtr pNativeObject, IntPtr cmd);

					/// <summary>
					/// 获取与command相关联的item
					/// </summary>
					/// <param name="cmd">命令项</param>
					/// <returns>显示项</returns>
					public virtual EarthView.World.Spatial.SystemUI.Iitem GetItem(EarthView.World.Spatial.SystemUI.Icommand cmd)
					{
						IntPtr __ptr = EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(this.NativeObject, object.Equals(cmd, null) ? IntPtr.Zero : cmd.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Iitem csObj = new EarthView.World.Spatial.SystemUI.Iitem(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IItem");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Iitem;
							csObj.BindNativeObject(__ptr, "IItem");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte question_CallBack_ev_bool_EVString(ref IntPtr text);

					protected question_CallBack_ev_bool_EVString m_question_CallBack_ev_bool_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string text);

					/// <summary>
					/// 弹出"询问"对话框
					/// </summary>
					/// <param name="text">"询问"的内容</param>
					/// <returns>如果用户点击"确定"则返回true,反之则否</returns>
					public virtual bool Question_NoVirtual(string text)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_NoVirtual(this.NativeObject, text);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Function(ref IntPtr text)
					{
						string strtext= Marshal.PtrToStringAnsi(text);
						ClassFactory.FreeString(ref text);
						
						bool csret=Question(strtext);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(IntPtr pNativeObject, string text);

					/// <summary>
					/// 弹出"询问"对话框
					/// </summary>
					/// <param name="text">"询问"的内容</param>
					/// <returns>如果用户点击"确定"则返回true,反之则否</returns>
					public virtual bool Question(string text)
					{
						byte ret=EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(this.NativeObject, text);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void information_CallBack_void_EVString(ref IntPtr text);

					protected information_CallBack_void_EVString m_information_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_NoVirtual(IntPtr pNativeObject, string text);

					/// <summary>
					/// 弹出"信息"对话框
					/// </summary>
					/// <param name="text">信息</param>
					/// <returns></returns>
					public virtual void Information_NoVirtual(string text)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_NoVirtual(this.NativeObject, text);
						
					}

					protected  void EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Function(ref IntPtr text)
					{
						string strtext= Marshal.PtrToStringAnsi(text);
						ClassFactory.FreeString(ref text);
						
						Information(strtext);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(IntPtr pNativeObject, string text);

					/// <summary>
					/// 弹出"信息"对话框
					/// </summary>
					/// <param name="text">信息</param>
					/// <returns></returns>
					public virtual void Information(string text)
					{
						EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(this.NativeObject, text);
						
					}

					public Iactionfactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("IActionFactoryProxy", null);
						if (!"EarthView.World.Spatial.SystemUI.Iactionfactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_d.so");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

						#else 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_d.dll");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#elif Linux 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI.so");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

						#else 
							private static bool bLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI.dll");
							private static bool csbLoadIactionfactory = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IActionFactory", new IactionfactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IActionFactoryProxy", new IactionfactoryClassFactory());

					public Iactionfactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(IntPtr pObject, createToolBar_CallBack_IToolBar_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(IntPtr pObject, createMenu_CallBack_IMenu_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(IntPtr pObject, destoryToolBar_CallBack_void_IToolBar pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(IntPtr pObject, destoryMenu_CallBack_void_IMenu pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(IntPtr pObject, getItem_CallBack_IItem_ICommand pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(IntPtr pObject, question_CallBack_ev_bool_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(IntPtr pObject, information_CallBack_void_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_createToolBar_CallBack_IToolBar_ev_uint32 = EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Function;
							GC.KeepAlive(m_createToolBar_CallBack_IToolBar_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(this.NativeObject, m_createToolBar_CallBack_IToolBar_ev_uint32);
							m_createMenu_CallBack_IMenu_ev_uint32 = EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Function;
							GC.KeepAlive(m_createMenu_CallBack_IMenu_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(this.NativeObject, m_createMenu_CallBack_IMenu_ev_uint32);
							m_destoryToolBar_CallBack_void_IToolBar = EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Function;
							GC.KeepAlive(m_destoryToolBar_CallBack_void_IToolBar);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(this.NativeObject, m_destoryToolBar_CallBack_void_IToolBar);
							m_destoryMenu_CallBack_void_IMenu = EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Function;
							GC.KeepAlive(m_destoryMenu_CallBack_void_IMenu);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(this.NativeObject, m_destoryMenu_CallBack_void_IMenu);
							m_getItem_CallBack_IItem_ICommand = EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Function;
							GC.KeepAlive(m_getItem_CallBack_IItem_ICommand);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(this.NativeObject, m_getItem_CallBack_IItem_ICommand);
							m_question_CallBack_ev_bool_EVString = EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Function;
							GC.KeepAlive(m_question_CallBack_ev_bool_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(this.NativeObject, m_question_CallBack_ev_bool_EVString);
							m_information_CallBack_void_EVString = EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Function;
							GC.KeepAlive(m_information_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(this.NativeObject, m_information_CallBack_void_EVString);
						}
					}
					public static Iactionfactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Iactionfactory obj = baseObj as  Iactionfactory;
						if (object.Equals(obj, null))
						{
							obj = new Iactionfactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "IActionFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IactionfactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Iactionfactory emptyInstance = new Iactionfactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
