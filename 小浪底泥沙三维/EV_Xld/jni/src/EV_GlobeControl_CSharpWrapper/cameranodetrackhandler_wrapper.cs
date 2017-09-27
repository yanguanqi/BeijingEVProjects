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
		namespace Spatial3D
		{
			namespace Controls
			{
				public class CameraAnimationHandler : EarthView.World.Spatial3D.Controls.Guieventhandler
				{
					/// <summary>
					///构造函数
					/// </summary>
					/// <param name="animationName">镜头动画的名字</param>
					/// <param name="camera">镜头</param>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="parentNode">相机挂接节点的父节点</param>
					/// <param name="localCenter">parentNode的中心点</param>
					/// <param name="controlPointMap">控制点集合</param>
					//CCameraAnimationHandler(_in const EVString& animationName,_in EarthView::World::Graphic::CCamera* ref_camera,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::World::Graphic::CSceneNode* ref_parentNode,_in const EarthView::World::Spatial::Math::CVector3& localCenter,_in const EarthView::World::Spatial3D::CControlPointMap& controlPointMap);
					/// <summary>
					///构造函数
					/// </summary>
					/// <param name="animationName">镜头动画的名字</param>
					/// <param name="ref_globeControl"></param>
					public CameraAnimationHandler(string animationName, EarthView.World.Spatial3D.Controls.GlobeControl ref_globeControl) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueanimationName = new BasePtr(animationName);
						list.Add("animationName", valueanimationName.PtrVal);
						BasePtr valueref_globeControl = new BasePtr(ref_globeControl);
						list.Add("ref_globeControl", valueref_globeControl.PtrVal);
						Create("CCameraAnimationHandlerProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CameraAnimationHandler".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_getAnimationName_EVString(IntPtr pNativeObject);

					/// <summary>
					///返回节点的名字
					/// </summary>
					public string GetAnimationName()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_getAnimationName_EVString(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_EVString(IntPtr pNativeObject, IntPtr ref_parentNode, string filePath);

					/// <summary>
					///初始化
					/// </summary>
					/// <param name="ref_parentNode">要观察的节点</param>
					/// <param name="filePath">镜头动画的文件</param>
					public bool Init(EarthView.World.Graphic.SceneNode ref_parentNode, string filePath)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_EVString(this.NativeObject, object.Equals(ref_parentNode, null) ? IntPtr.Zero : ref_parentNode.NativeObject, filePath);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_CVector3_CControlPointMap(IntPtr pNativeObject, IntPtr ref_parentNode, IntPtr localCenter, IntPtr controlPointMap);

					/// <summary>
					///初始化
					/// </summary>
					/// <param name="ref_parentNode">要观察的节点</param>
					/// <param name="localCenter">模型的几何中心点的坐标</param>
					/// <param name="controlPointMap">控制点列表</param>
					public bool Init(EarthView.World.Graphic.SceneNode ref_parentNode, EarthView.World.Spatial.Math.Vector3 localCenter, EarthView.World.Spatial3D.ControlPointMap controlPointMap)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_CVector3_CControlPointMap(this.NativeObject, object.Equals(ref_parentNode, null) ? IntPtr.Zero : ref_parentNode.NativeObject, object.Equals(localCenter, null) ? IntPtr.Zero : localCenter.NativeObject, object.Equals(controlPointMap, null) ? IntPtr.Zero : controlPointMap.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 处理事件
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_startAnimation_void(IntPtr pNativeObject);

					/// <summary>
					/// 开始镜头动画
					/// </summary>
					/// <returns></returns>
					public void StartAnimation()
					{
						EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_startAnimation_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_stopAnimation_void(IntPtr pNativeObject);

					/// <summary>
					/// 停止镜头动画
					/// </summary>
					/// <returns></returns>
					public void StopAnimation()
					{
						EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_stopAnimation_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_pauseAnimation_void(IntPtr pNativeObject);

					/// <summary>
					/// 暂停镜头动画
					/// </summary>
					/// <returns></returns>
					public void PauseAnimation()
					{
						EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_pauseAnimation_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_continueAnimation_void(IntPtr pNativeObject);

					/// <summary>
					/// 继续镜头动画
					/// </summary>
					/// <returns></returns>
					public void ContinueAnimation()
					{
						EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_continueAnimation_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_d.so");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp_d.so");

						#else 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_d.dll");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#elif Linux 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl.so");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp.so");

						#else 
							private static bool bLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl.dll");
							private static bool csbLoadCameraAnimationHandler = LoadDll.Load("EV_GlobeControl_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCameraAnimationHandler", new CameraAnimationHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCameraAnimationHandlerProxy", new CameraAnimationHandlerClassFactory());

					public CameraAnimationHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public static CameraAnimationHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CameraAnimationHandler obj = baseObj as  CameraAnimationHandler;
						if (object.Equals(obj, null))
						{
							obj = new CameraAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCameraAnimationHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CameraAnimationHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CameraAnimationHandler emptyInstance = new CameraAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
