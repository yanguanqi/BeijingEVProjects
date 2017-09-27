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
				/// 通用场景控制类
				/// </summary>
				public class CommonSceneControl : EarthView.World.Spatial3D.Controls.C3DControl
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="uintHwnd">窗口句柄</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <returns></returns>	
					public CommonSceneControl(uint uintHwnd, uint winWidth, uint winHeight) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueuintHwnd = new BasePtr(uintHwnd);
						list.Add("uintHwnd", valueuintHwnd.PtrVal);
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						Create("CCommonSceneControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CommonSceneControl".Equals(((Object)this).GetType().ToString()))
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
					public CommonSceneControl(string strHwnd, uint winWidth, uint winHeight) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuestrHwnd = new BasePtr(strHwnd);
						list.Add("strHwnd", valuestrHwnd.PtrVal);
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						Create("CCommonSceneControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CommonSceneControl".Equals(((Object)this).GetType().ToString()))
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
					/// <param name="windowName">窗口名称</param>
					/// <param name="winWidth">窗口宽度</param>
					/// <param name="winHeight">窗口高度</param>
					/// <param name="isFullScreen">是否全屏</param>
					/// <returns></returns>	
					public CommonSceneControl(string windowName, uint winWidth, uint winHeight, bool isFullScreen) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuewindowName = new BasePtr(windowName);
						list.Add("windowName", valuewindowName.PtrVal);
						BasePtr valuewinWidth = new BasePtr(winWidth);
						list.Add("winWidth", valuewinWidth.PtrVal);
						BasePtr valuewinHeight = new BasePtr(winHeight);
						list.Add("winHeight", valuewinHeight.PtrVal);
						BasePtr valueisFullScreen = new BasePtr(isFullScreen);
						list.Add("isFullScreen", valueisFullScreen.PtrVal);
						Create("CCommonSceneControlProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CommonSceneControl".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_RaySceneQueryResult(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">射线查询结果集</param>
					/// <returns></returns>	
					public void FireSelectionChanged(EarthView.World.Graphic.RaySceneQueryResult result)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_RaySceneQueryResult(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_SceneQueryResult(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">场景查询结果集</param>
					/// <returns></returns>	
					public void FireSelectionChanged(EarthView.World.Graphic.SceneQueryResult result)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_SceneQueryResult(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_CGlobeSelection(IntPtr pNativeObject, IntPtr result);

					/// <summary>
					/// 选择处理
					/// </summary>
					/// <param name="result">选择集</param>
					/// <returns></returns>	
					public void FireSelectionChanged(EarthView.World.Spatial3D.GlobeSelection result)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectionChanged_void_CGlobeSelection(this.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectedObjectMoved_void_RaySceneQueryResultEntry_CMatrix4_GUIEventType(IntPtr pNativeObject, IntPtr entry, IntPtr newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type);

					/// <summary>
					/// 移动处理
					/// </summary>
					/// <param name="entry">射线查询结果集记录</param>
					/// <param name="newMatrix">世界变换矩阵</param>
					/// <param name="type">时间类型标识</param>
					/// <returns></returns>	
					public void FireSelectedObjectMoved(EarthView.World.Graphic.RaySceneQueryResultEntry entry, EarthView.World.Spatial.Math.Matrix4 newMatrix, EarthView.World.Spatial.SystemUI.Guievent.GUIEVENTTYPE type)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireSelectedObjectMoved_void_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.NativeObject, object.Equals(entry, null) ? IntPtr.Zero : entry.NativeObject, object.Equals(newMatrix, null) ? IntPtr.Zero : newMatrix.NativeObject, type);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireDeleteKeyPressed_void(IntPtr pNativeObject);

					/// <summary>
					/// 按下Delete键处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					public void FireDeleteKeyPressed()
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_fireDeleteKeyPressed_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneControl_setCurrentTool_ev_bool_ITool(IntPtr pNativeObject, IntPtr ref_tool);

					/// <summary>
					/// 设置当前要使用的工具
					/// </summary>
					/// <param name="tool">工具对象</param>
					/// <returns>返回true</returns>	
					public bool SetCurrentTool(EarthView.World.Spatial.SystemUI.Itool ref_tool)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneControl_setCurrentTool_ev_bool_ITool(this.NativeObject, object.Equals(ref_tool, null) ? IntPtr.Zero : ref_tool.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCommonSceneControl_getCurrentTool_ITool(IntPtr pNativeObject);

					/// <summary>
					/// 获得当前使用的工具对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工具对象</returns>	
					public EarthView.World.Spatial.SystemUI.Itool GetCurrentTool()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCommonSceneControl_getCurrentTool_ITool(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.SystemUI.Itool csObj = new EarthView.World.Spatial.SystemUI.Itool(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ITool");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.SystemUI.Itool;
							csObj.BindNativeObject(__ptr, "ITool");
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCommonSceneControl_getICommonSceneQueryListener_ICommonSceneQueryListener_ev_uint32(IntPtr pNativeObject, uint index);

					/// <summary>
					/// 获得通用场景查询Listener
					/// </summary>
					/// <param name="index">索引号</param>
					/// <returns>通用场景查询Listener</returns>	
					public EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener GetICommonSceneQueryListener(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCommonSceneControl_getICommonSceneQueryListener_ICommonSceneQueryListener_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener csObj = new EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ICommonSceneQueryListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener;
							csObj.BindNativeObject(__ptr, "ICommonSceneQueryListener");
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneControl_addQueryListener_ev_bool_ICommonSceneQueryListener(IntPtr pNativeObject, IntPtr ref_listener);

					/// <summary>
					/// 添加通用场景查询Listener
					/// </summary>
					/// <param name="listener">通用场景查询Listener</param>
					/// <returns>添加成功返回true,失败返回false</returns>	
					public bool AddQueryListener(EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener ref_listener)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneControl_addQueryListener_ev_bool_ICommonSceneQueryListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeQueryListener_ev_bool_ICommonSceneQueryListener(IntPtr pNativeObject, IntPtr listener);

					/// <summary>
					/// 删除通用场景查询Listener
					/// </summary>
					/// <param name="listener">通用场景查询Listener</param>
					/// <returns>删除成功返回true,失败返回false</returns>
					public bool RemoveQueryListener(EarthView.World.Spatial3D.SystemUI.Icommonscenequerylistener listener)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeQueryListener_ev_bool_ICommonSceneQueryListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_initCommonSceneRayQueryTool_void(IntPtr pNativeObject);

					/// <summary>
					/// 初始化通用场景射线查询工具类
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void InitCommonSceneRayQueryTool()
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_initCommonSceneRayQueryTool_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_setLightCameraMode_void_ev_bool(IntPtr pNativeObject, byte flag);

					/// <summary>
					/// 场景中默认的有向光方向与相机方向一致
					/// </summary>
					/// <param name="flag">是否一致</param>
					/// <returns></returns>
					public void SetLightCameraMode(bool flag)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_setLightCameraMode_void_ev_bool(this.NativeObject, Convert.ToByte(flag));
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneControl_isLightCameraModel_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取场景中默认的有向光方向是否与相机关联
					/// </summary>
					/// <returns>ev_bool;true，关联;false,不关联</returns>
					public bool IsLightCameraModel()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneControl_isLightCameraModel_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneControl_resetLightDirection_void(IntPtr pNativeObject);

					/// <summary>
					/// 还原场景中有向光默认朝向
					/// </summary>
					/// <returns></returns>
					public void ResetLightDirection()
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneControl_resetLightDirection_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCommonSceneControl = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneControl", new CommonSceneControlClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneControlProxy", new CommonSceneControlClassFactory());

					public CommonSceneControl(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void(IntPtr pObject, windowResized_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(IntPtr pObject, mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32(IntPtr pObject, mouseMove_CallBack_void_ev_int32_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32(IntPtr pObject, mouseWheel_CallBack_void_ev_real32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool(IntPtr pObject, eventStage_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType(IntPtr pObject, getType_CallBack_EVSpatialControlType pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString(IntPtr pObject, getTypeString_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs(IntPtr pObject, notifyViewChanged_CallBack_void_IViewArgs pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener(IntPtr pObject, addViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32(IntPtr pObject, getViewListenerCount_CallBack_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32(IntPtr pObject, getViewListener_CallBack_IViewListener_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener(IntPtr pObject, existViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32(IntPtr pObject, removeViewListener_CallBack_ev_bool_ev_uint32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener(IntPtr pObject, removeViewListener_CallBack_ev_bool_IViewListener pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void(IntPtr pObject, clearViewListeners_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_windowResized_CallBack_void = EarthView_World_Spatial3D_Controls_C3DControl_windowResized_void_Function;
							GC.KeepAlive(m_windowResized_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_windowResized_void(this.NativeObject, m_windowResized_CallBack_void);
							m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseDoubleButtonPress_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_Function;
							GC.KeepAlive(m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(this.NativeObject, m_mouseButtonRelease_CallBack_void_ev_int32_ev_int32_ev_uint32);
							m_mouseMove_CallBack_void_ev_int32_ev_int32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseMove_void_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_mouseMove_CallBack_void_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseMove_void_ev_int32_ev_int32(this.NativeObject, m_mouseMove_CallBack_void_ev_int32_ev_int32);
							m_mouseWheel_CallBack_void_ev_real32 = EarthView_World_Spatial3D_Controls_C3DControl_mouseWheel_void_ev_real32_Function;
							GC.KeepAlive(m_mouseWheel_CallBack_void_ev_real32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_mouseWheel_void_ev_real32(this.NativeObject, m_mouseWheel_CallBack_void_ev_real32);
							m_eventStage_CallBack_ev_bool = EarthView_World_Spatial3D_Controls_C3DControl_eventStage_ev_bool_Function;
							GC.KeepAlive(m_eventStage_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_eventStage_ev_bool(this.NativeObject, m_eventStage_CallBack_ev_bool);
							m_getType_CallBack_EVSpatialControlType = EarthView_World_Spatial_Atlas_ISpatialControl_getType_EVSpatialControlType_Function;
							GC.KeepAlive(m_getType_CallBack_EVSpatialControlType);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getType_EVSpatialControlType(this.NativeObject, m_getType_CallBack_EVSpatialControlType);
							m_getName_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_getTypeString_CallBack_EVString = EarthView_World_Spatial_Atlas_ISpatialControl_getTypeString_EVString_Function;
							GC.KeepAlive(m_getTypeString_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getTypeString_EVString(this.NativeObject, m_getTypeString_CallBack_EVString);
							m_notifyViewChanged_CallBack_void_IViewArgs = EarthView_World_Spatial_Atlas_ISpatialControl_notifyViewChanged_void_IViewArgs_Function;
							GC.KeepAlive(m_notifyViewChanged_CallBack_void_IViewArgs);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_notifyViewChanged_void_IViewArgs(this.NativeObject, m_notifyViewChanged_CallBack_void_IViewArgs);
							m_addViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_addViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_addViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_addViewListener_ev_bool_IViewListener(this.NativeObject, m_addViewListener_CallBack_ev_bool_IViewListener);
							m_getViewListenerCount_CallBack_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListenerCount_ev_uint32_Function;
							GC.KeepAlive(m_getViewListenerCount_CallBack_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListenerCount_ev_uint32(this.NativeObject, m_getViewListenerCount_CallBack_ev_uint32);
							m_getViewListener_CallBack_IViewListener_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_getViewListener_IViewListener_ev_uint32_Function;
							GC.KeepAlive(m_getViewListener_CallBack_IViewListener_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_getViewListener_IViewListener_ev_uint32(this.NativeObject, m_getViewListener_CallBack_IViewListener_ev_uint32);
							m_existViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_existViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_existViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_existViewListener_ev_bool_IViewListener(this.NativeObject, m_existViewListener_CallBack_ev_bool_IViewListener);
							m_removeViewListener_CallBack_ev_bool_ev_uint32 = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_ev_uint32_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_ev_uint32(this.NativeObject, m_removeViewListener_CallBack_ev_bool_ev_uint32);
							m_removeViewListener_CallBack_ev_bool_IViewListener = EarthView_World_Spatial_Atlas_ISpatialControl_removeViewListener_ev_bool_IViewListener_Function;
							GC.KeepAlive(m_removeViewListener_CallBack_ev_bool_IViewListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_removeViewListener_ev_bool_IViewListener(this.NativeObject, m_removeViewListener_CallBack_ev_bool_IViewListener);
							m_clearViewListeners_CallBack_void = EarthView_World_Spatial_Atlas_ISpatialControl_clearViewListeners_void_Function;
							GC.KeepAlive(m_clearViewListeners_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneControl_clearViewListeners_void(this.NativeObject, m_clearViewListeners_CallBack_void);
						}
					}
					public override void WindowResized()
					{
						base.WindowResized_NoVirtual();
					}
					public override void MouseButtonPress(int x, int y, uint button)
					{
						base.MouseButtonPress_NoVirtual(x,y,button);
					}
					public override void MouseDoubleButtonPress(int x, int y, uint button)
					{
						base.MouseDoubleButtonPress_NoVirtual(x,y,button);
					}
					public override void MouseButtonRelease(int x, int y, uint button)
					{
						base.MouseButtonRelease_NoVirtual(x,y,button);
					}
					public override void MouseMove(int x, int y)
					{
						base.MouseMove_NoVirtual(x,y);
					}
					public override void MouseWheel(float delta)
					{
						base.MouseWheel_NoVirtual(delta);
					}
					public override bool EventStage()
					{
						return base.EventStage_NoVirtual();
					}
					public override EarthView.World.Spatial.Atlas.EVSPATIALCONTROLTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public override string GetName()
					{
						return base.GetName_NoVirtual();
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
					public static CommonSceneControl FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CommonSceneControl obj = baseObj as  CommonSceneControl;
						if (object.Equals(obj, null))
						{
							obj = new CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCommonSceneControl");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CommonSceneControlClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CommonSceneControl emptyInstance = new CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
