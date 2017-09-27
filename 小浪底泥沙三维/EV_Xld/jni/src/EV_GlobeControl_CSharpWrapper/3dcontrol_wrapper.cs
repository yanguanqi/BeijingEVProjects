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
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				/// <summary>
				/// 三维普通场景控件类
				/// </summary>
				public class C3DControl : EarthView.World.Spatial.Atlas.Ispatialcontrol
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="renderWindow">内部的渲染窗体</param>
					/// <returns></returns>	
					public C3DControl(EarthView.World.Graphic.RenderWindow ref_renderWindow) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_renderWindow = new BasePtr(ref_renderWindow);
						list.Add("ref_renderWindow", valueref_renderWindow.PtrVal);
						Create("C3DControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.C3DControl".Equals(((Object)this).GetType().ToString()))
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
					/// <param name="hwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					public C3DControl(uint hwnd, uint winWidth, uint winHeight) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuehwnd = new BasePtr(hwnd);
						list.Add("hwnd", valuehwnd.PtrVal);
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						Create("C3DControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.C3DControl".Equals(((Object)this).GetType().ToString()))
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
					/// <param name="strHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					public C3DControl(string strHwnd, uint winWidth, uint winHeight) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuestrHwnd = new BasePtr(strHwnd);
						list.Add("strHwnd", valuestrHwnd.PtrVal);
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						Create("C3DControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.C3DControl".Equals(((Object)this).GetType().ToString()))
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
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="windowName">窗口名称</param>
					/// <param name="isFullScreen">是否全屏</param>
					/// <returns></returns>	
					public C3DControl(uint winWidth, uint winHeight, string windowName, bool isFullScreen) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						BasePtr valuewindowName = new BasePtr(windowName);
						list.Add("windowName", valuewindowName.PtrVal);
						BasePtr valueisFullScreen = new BasePtr(isFullScreen);
						list.Add("isFullScreen", valueisFullScreen.PtrVal);
						Create("C3DControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.C3DControl".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_addGuiHandler_void_CGUIEventHandler(IntPtr pNativeObject, IntPtr ref_guiEventHandler);

					/// <summary>
					/// 添加事件处理器
					/// </summary>
					/// <param name="guiEventHandler">事件处理器</param>
					/// <returns></returns>
					public void AddGuiHandler(EarthView.World.Spatial3D.Controls.Guieventhandler ref_guiEventHandler)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_addGuiHandler_void_CGUIEventHandler(this.NativeObject, object.Equals(ref_guiEventHandler, null) ? IntPtr.Zero : ref_guiEventHandler.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_removeHandler_void_CGUIEventHandler(IntPtr pNativeObject, IntPtr guiEventHandler);

					/// <summary>
					/// 删除事件处理器
					/// </summary>
					/// <param name="guiEventHandler">事件处理器</param>
					/// <returns></returns>
					public void RemoveHandler(EarthView.World.Spatial3D.Controls.Guieventhandler guiEventHandler)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_removeHandler_void_CGUIEventHandler(this.NativeObject, object.Equals(guiEventHandler, null) ? IntPtr.Zero : guiEventHandler.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_addMovable_void_CMovableObject_CVector3(IntPtr pNativeObject, IntPtr ref_movable, IntPtr pos);

					/// <summary>
					/// 添加可移动对象
					/// </summary>
					/// <param name="movable">可移动对象</param>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					public void AddMovable(EarthView.World.Graphic.MovableObject ref_movable, EarthView.World.Spatial.Math.Vector3 pos)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_addMovable_void_CMovableObject_CVector3(this.NativeObject, object.Equals(ref_movable, null) ? IntPtr.Zero : ref_movable.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_CMovableObject(IntPtr pNativeObject, IntPtr movable);

					/// <summary>
					/// 删除可移动对象
					/// </summary>
					/// <param name="movable">可移动对象</param>
					/// <returns></returns>
					public void RemoveMovable(EarthView.World.Graphic.MovableObject movable)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_CMovableObject(this.NativeObject, object.Equals(movable, null) ? IntPtr.Zero : movable.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 删除可移动对象
					/// </summary>
					/// <param name="name">可移动对象名称</param>
					/// <returns></returns>
					public void RemoveMovable(string name)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_removeMovable_void_EVString(this.NativeObject, name);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void windowResized_CallBack_void();

					protected windowResized_CallBack_void m_windowResized_CallBack_void;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 自动调整窗口内渲染窗体的大小
					/// </summary>
					/// <returns></returns>
					public virtual void WindowResized_NoVirtual()
					{
						EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Function()
					{
						WindowResized();
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(IntPtr pNativeObject);

					/// <summary>
					/// 自动调整窗口内渲染窗体的大小
					/// </summary>
					/// <returns></returns>
					public virtual void WindowResized()
					{
						EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_resize_void_ev_uint32_ev_uint32(IntPtr pNativeObject, uint width, uint height);

					/// <summary>
					/// 自动调整窗口内渲染窗体的大小
					/// </summary>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <returns></returns>
					public void Resize(uint width, uint height)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_resize_void_ev_uint32_ev_uint32(this.NativeObject, width, height);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32(int x, int y, uint button);

					protected mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标按下事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseButtonPress_NoVirtual(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(this.NativeObject, x, y, button);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Function(int x, int y, uint button)
					{
						MouseButtonPress(x, y, button);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标按下事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseButtonPress(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, x, y, button);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32(int x, int y, uint button);

					protected mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标双击事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseDoubleButtonPress_NoVirtual(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_NoVirtual(this.NativeObject, x, y, button);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Function(int x, int y, uint button)
					{
						MouseDoubleButtonPress(x, y, button);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标双击事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseDoubleButtonPress(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, x, y, button);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32(int x, int y, uint button);

					protected mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32 m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_NoVirtual(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标松开事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseButtonRelease_NoVirtual(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_NoVirtual(this.NativeObject, x, y, button);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Function(int x, int y, uint button)
					{
						MouseButtonRelease(x, y, button);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(IntPtr pNativeObject, int x, int y, uint button);

					/// <summary>
					///接收鼠标松开事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <param name="button">鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合</param>
					/// <returns></returns>
					public virtual void MouseButtonRelease(int x, int y, uint button)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, x, y, button);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void mouseMove_CallBack_void_ev_int32_ev_int32(int x, int y);

					protected mouseMove_CallBack_void_ev_int32_ev_int32 m_mouseMove_CallBack_void_ev_int32_ev_int32;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int x, int y);

					/// <summary>
					///接收鼠标移动事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <returns></returns>
					public virtual void MouseMove_NoVirtual(int x, int y)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_NoVirtual(this.NativeObject, x, y);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Function(int x, int y)
					{
						MouseMove(x, y);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(IntPtr pNativeObject, int x, int y);

					/// <summary>
					///接收鼠标移动事件
					/// </summary>
					/// <param name="x">鼠标的x坐标</param>
					/// <param name="y">鼠标的y坐标</param>
					/// <returns></returns>
					public virtual void MouseMove(int x, int y)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(this.NativeObject, x, y);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void mouseWheel_CallBack_void_ev_real32(float delta);

					protected mouseWheel_CallBack_void_ev_real32 m_mouseWheel_CallBack_void_ev_real32;

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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_NoVirtual(IntPtr pNativeObject, float delta);

					/// <summary>
					///接收鼠标滚轮事件
					/// </summary>
					/// <param name="delta">鼠标的滚动的值</param>
					/// <returns></returns>
					public virtual void MouseWheel_NoVirtual(float delta)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_NoVirtual(this.NativeObject, delta);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Function(float delta)
					{
						MouseWheel(delta);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(IntPtr pNativeObject, float delta);

					/// <summary>
					///接收鼠标滚轮事件
					/// </summary>
					/// <param name="delta">鼠标的滚动的值</param>
					/// <returns></returns>
					public virtual void MouseWheel(float delta)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(this.NativeObject, delta);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_keyPress_void_ev_int32_ev_int32(IntPtr pNativeObject, int key, int virtualKey);

					/// <summary>
					///接收键盘按下事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟的按键值，CGUIEvent::GUIKeySymbol的组合</param>
					/// <returns></returns>
					public void KeyPress(int key, int virtualKey)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_keyPress_void_ev_int32_ev_int32(this.NativeObject, key, virtualKey);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_keyRelease_void_ev_int32_ev_int32(IntPtr pNativeObject, int key, int virtualKey);

					/// <summary>
					///接收键盘松开事件
					/// </summary>
					/// <param name="key">按键值</param>
					/// <param name="virtualKey">虚拟的按键值，CGUIEvent::GUIKeySymbol的组合</param>
					/// <returns></returns>
					public void KeyRelease(int key, int virtualKey)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_keyRelease_void_ev_int32_ev_int32(this.NativeObject, key, virtualKey);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_windowLoseFocus_void(IntPtr pNativeObject);

					/// <summary>
					///窗体失去焦点触发
					/// </summary>
					/// <returns></returns>
					public void WindowLoseFocus()
					{
						EarthView_World_Spatial3D_Controls_C3DControl_windowLoseFocus_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte eventStage_CallBack_ev_bool();

					protected eventStage_CallBack_ev_bool m_eventStage_CallBack_ev_bool;

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
					private static extern byte EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 处理所有事件
					/// </summary>
					/// <returns>返回true</returns>
					public virtual bool EventStage_NoVirtual()
					{
						byte ret=EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Function()
					{
						bool csret=EventStage();
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 处理所有事件
					/// </summary>
					/// <returns>返回true</returns>
					public virtual bool EventStage()
					{
						byte ret=EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getRenderWindow_CRenderWindow(IntPtr pNativeObject);

					/// <summary>
					/// 获得渲染窗体
					/// </summary>
					/// <returns>渲染窗体</returns>
					public EarthView.World.Graphic.RenderWindow GetRenderWindow()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getRenderWindow_CRenderWindow(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.RenderWindow csObj = new EarthView.World.Graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRenderWindow");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.RenderWindow;
							csObj.BindNativeObject(__ptr, "CRenderWindow");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getSceneManager_CSceneManager(IntPtr pNativeObject);

					/// <summary>
					/// 获得场景管理器
					/// </summary>
					/// <returns>场景管理器</returns>
					public EarthView.World.Graphic.SceneManager GetSceneManager()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getSceneManager_CSceneManager(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneManager csObj = new EarthView.World.Graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneManager;
							csObj.BindNativeObject(__ptr, "CSceneManager");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getCamera_CCamera(IntPtr pNativeObject);

					/// <summary>
					/// 获得相机
					/// </summary>
					/// <returns>相机</returns>
					public EarthView.World.Graphic.Camera GetCamera()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getCamera_CCamera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Camera csObj = new EarthView.World.Graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Camera;
							csObj.BindNativeObject(__ptr, "CCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getViewport_CViewport(IntPtr pNativeObject);

					/// <summary>
					/// 获得视口
					/// </summary>
					/// <returns>视口</returns>
					public EarthView.World.Graphic.Viewport GetViewport()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getViewport_CViewport(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.Viewport csObj = new EarthView.World.Graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CViewport");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Viewport;
							csObj.BindNativeObject(__ptr, "CViewport");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getScene_IScene(IntPtr pNativeObject);

					/// <summary>
					/// 获得场景
					/// </summary>
					/// <returns>场景</returns>
					public EarthView.World.Spatial.Atlas.Iscene GetScene()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getScene_IScene(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Atlas.Iscene csObj = new EarthView.World.Spatial.Atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IScene");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Atlas.Iscene;
							csObj.BindNativeObject(__ptr, "IScene");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获得渲染窗体名称
					/// </summary>
					/// <returns>名称</returns>
					public new string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获得渲染窗体名称
					/// </summary>
					/// <returns>名称</returns>
					public override string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern void EarthView_World_Spatial3D_Controls_C3DControl_userEvent_void_CGUIEventPtr(IntPtr pNativeObject, IntPtr e);

					/// <summary>
					///接收自定义事件
					/// </summary>
					/// <param name="e">自定义事件</param>
					/// <returns></returns>
					public void UserEvent(EarthView.World.Spatial.SystemUI.Guieventptr e)
					{
						EarthView_World_Spatial3D_Controls_C3DControl_userEvent_void_CGUIEventPtr(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadC3DControl = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadC3DControl = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::C3DControl", new C3DControlClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::C3DControlProxy", new C3DControlClassFactory());

					public C3DControl(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(IntPtr pObject, windowResized_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(IntPtr pObject, mouseMove_CallBack_void_ev_int32_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(IntPtr pObject, mouseWheel_CallBack_void_ev_real32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(IntPtr pObject, eventStage_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType(IntPtr pObject, getType_CallBack_EVSpatialControlType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString(IntPtr pObject, getTypeString_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs(IntPtr pObject, notifyViewChanged_CallBack_void_IViewArgs pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener(IntPtr pObject, addViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32(IntPtr pObject, getViewListenerCount_CallBack_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32(IntPtr pObject, getViewListener_CallBack_IViewListener_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener(IntPtr pObject, existViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32(IntPtr pObject, removeViewListener_CallBack_ev_bool_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener(IntPtr pObject, removeViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void(IntPtr pObject, clearViewListeners_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_windowResized_CallBack_void = EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Function;
							GC.KeepAlive(m_windowResized_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void(this.NativeObject, m_windowResized_CallBack_void);
							m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseMove_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_mouseMove_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32(this.NativeObject, m_mouseMove_CallBack_void_ev_int32_ev_int32);
							m_mouseWheel_CallBack_void_ev_real32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Function;
							GC.KeepAlive(m_mouseWheel_CallBack_void_ev_real32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32(this.NativeObject, m_mouseWheel_CallBack_void_ev_real32);
							m_eventStage_CallBack_ev_bool = EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Function;
							GC.KeepAlive(m_eventStage_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool(this.NativeObject, m_eventStage_CallBack_ev_bool);
							m_getType_CallBack_EVSpatialControlType = EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Function;
							GC.KeepAlive(m_getType_CallBack_EVSpatialControlType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getType_EVSpatialControlType(this.NativeObject, m_getType_CallBack_EVSpatialControlType);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getTypeString_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Function;
							GC.KeepAlive(m_getTypeString_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getTypeString_EVString(this.NativeObject, m_getTypeString_CallBack_EVString);
							m_notifyViewChanged_CallBack_void_IViewArgs = EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Function;
							GC.KeepAlive(m_notifyViewChanged_CallBack_void_IViewArgs);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_notifyViewChanged_void_IViewArgs(this.NativeObject, m_notifyViewChanged_CallBack_void_IViewArgs);
							m_addViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_addViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_addViewListener_ev_bool_IViewListener(this.NativeObject, m_addViewListener_CallBack_ev_bool_IViewListener);
							m_getViewListenerCount_CallBack_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Function;
							GC.KeepAlive(m_getViewListenerCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListenerCount_ev_uint32(this.NativeObject, m_getViewListenerCount_CallBack_ev_uint32);
							m_getViewListener_CallBack_IViewListener_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Function;
							GC.KeepAlive(m_getViewListener_CallBack_IViewListener_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_getViewListener_IViewListener_ev_uint32(this.NativeObject, m_getViewListener_CallBack_IViewListener_ev_uint32);
							m_existViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_existViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_existViewListener_ev_bool_IViewListener(this.NativeObject, m_existViewListener_CallBack_ev_bool_IViewListener);
							m_removeViewListener_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_ev_uint32(this.NativeObject, m_removeViewListener_CallBack_ev_bool_ev_uint32);
							m_removeViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_removeViewListener_ev_bool_IViewListener(this.NativeObject, m_removeViewListener_CallBack_ev_bool_IViewListener);
							m_clearViewListeners_CallBack_void = EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Function;
							GC.KeepAlive(m_clearViewListeners_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_C3DControl_clearViewListeners_void(this.NativeObject, m_clearViewListeners_CallBack_void);
						}
					}
					public override EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override string GetTypeString()
					{
						return base.GetTypeString_NoVirtual();
					}
					public override void NotifyViewChanged(EarthView.World.Spatial.Iviewargs args)
					{
						base.NotifyViewChanged_NoVirtual(args);
					}
					public override bool AddViewListener(EarthView.World.Spatial.Iviewlistener ref_externalListener)
					{
						return base.AddViewListener_NoVirtual(ref_externalListener);
					}
					public override uint GetViewListenerCount()
					{
						return base.GetViewListenerCount_NoVirtual();
					}
					public override EarthView.World.Spatial.Iviewlistener GetViewListener(uint index)
					{
						return base.GetViewListener_NoVirtual(index);
					}
					public override bool ExistViewListener(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						return base.ExistViewListener_NoVirtual(externalListener);
					}
					public override bool RemoveViewListener(uint index)
					{
						return base.RemoveViewListener_NoVirtual(index);
					}
					public override bool RemoveViewListener(EarthView.World.Spatial.Iviewlistener externalListener)
					{
						return base.RemoveViewListener_NoVirtual(externalListener);
					}
					public override void ClearViewListeners()
					{
						base.ClearViewListeners_NoVirtual();
					}
					public static C3DControl FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						C3DControl obj = baseObj as  C3DControl;
						if (object.Equals(obj, null))
						{
							obj = new C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "C3DControl");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class C3DControlClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						C3DControl emptyInstance = new C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
