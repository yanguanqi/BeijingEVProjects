/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 相机锁定输入交互控制器
			/// </summary>
			public class DynamicCameraLockHandler : EarthView.World.Spatial3D.Controls.Guieventhandler
			{
				/// <summary>
				/// 相机锁定输入交互控制器构造函数
				/// </summary>
				/// <param name="ref_camera">相机</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_viewport">视口</param>
				/// <param name="ref_dynamicModelManager">动态目标管理器,该参数对象的生命周期要与本对象保持一致</param>
				/// <param name="ref_globeControl">地球窗体</param>
				public DynamicCameraLockHandler(EarthView.World.Spatial3D.GlobeCamera ref_camera, EarthView.World.Graphic.SceneManager ref_sceneManager, EarthView.World.Graphic.Viewport ref_viewport, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager ref_dynamicModelManager, EarthView.World.Spatial3D.Controls.GlobeControl ref_globeControl) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_camera = new BasePtr(ref_camera);
					list.Add("ref_camera", valueref_camera.PtrVal);
					BasePtr valueref_sceneManager = new BasePtr(ref_sceneManager);
					list.Add("ref_sceneManager", valueref_sceneManager.PtrVal);
					BasePtr valueref_viewport = new BasePtr(ref_viewport);
					list.Add("ref_viewport", valueref_viewport.PtrVal);
					BasePtr valueref_dynamicModelManager = new BasePtr(ref_dynamicModelManager);
					list.Add("ref_dynamicModelManager", valueref_dynamicModelManager.PtrVal);
					BasePtr valueref_globeControl = new BasePtr(ref_globeControl);
					list.Add("ref_globeControl", valueref_globeControl.PtrVal);
					Create("CDynamicCameraLockHandlerProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicCameraLockHandler".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应处理消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应处理消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseUpEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应鼠标弹起消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleMouseUpEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseUpEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应帧事件消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应鼠标按下消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleMouseDownEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应鼠标移动消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleMouseMoveEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应滚动鼠标滑轮消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleMouseWheelEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleKeyEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

				/// <summary>
				/// 响应键盘消息
				/// </summary>
				/// <param name="guiEvent">消息事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				public bool HandleKeyEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleKeyEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicCameraLockHandler = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler", new DynamicCameraLockHandlerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandlerProxy", new DynamicCameraLockHandlerClassFactory());

				public DynamicCameraLockHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
						GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
					}
				}
				public static DynamicCameraLockHandler FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicCameraLockHandler obj = baseObj as  DynamicCameraLockHandler;
					if (object.Equals(obj, null))
					{
						obj = new DynamicCameraLockHandler(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicCameraLockHandler");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicCameraLockHandlerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicCameraLockHandler emptyInstance = new DynamicCameraLockHandler(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
