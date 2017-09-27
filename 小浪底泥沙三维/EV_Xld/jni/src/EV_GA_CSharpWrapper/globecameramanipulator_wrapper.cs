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
			namespace Math
			{
			}
		}
		namespace Spatial3D
		{
		}
	}
}
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
				public class GoToTargetListener : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					public GoToTargetListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGoToTargetListenerProxy", null);
						if (!"EarthView.World.Spatial3D.Controls.GoToTargetListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void cameraHasGetAtTarget_CallBack_void_CGlobeCamera(IntPtr globeCamera);

					protected cameraHasGetAtTarget_CallBack_void_CGlobeCamera m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 相机到达Goto终点时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public virtual void CameraHasGetAtTarget_NoVirtual(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Function(IntPtr globeCamera)
					{
						EarthView.World.Spatial3D.GlobeCamera csobj_globeCamera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeCamera.BindNativeObject(globeCamera,"CGlobeCamera");
						csobj_globeCamera.Delegate = true;
						IClassFactory csobj_globeCameraClassFactory = GlobalClassFactoryMap.Get(csobj_globeCamera.GetCppInstanceTypeName());
						if (csobj_globeCameraClassFactory != null)
						{
							csobj_globeCamera.Delegate = true;
							csobj_globeCamera = csobj_globeCameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
							csobj_globeCamera.BindNativeObject(globeCamera, "CGlobeCamera");
							csobj_globeCamera.Delegate = true;
						}
						
						CameraHasGetAtTarget(csobj_globeCamera);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 相机到达Goto终点时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public virtual void CameraHasGetAtTarget(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void stopGoto_CallBack_void_CGlobeCamera(IntPtr globeCamera);

					protected stopGoto_CallBack_void_CGlobeCamera m_stopGoto_CallBack_void_CGlobeCamera;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 停止Goto时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public virtual void StopGoto_NoVirtual(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Function(IntPtr globeCamera)
					{
						EarthView.World.Spatial3D.GlobeCamera csobj_globeCamera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_globeCamera.BindNativeObject(globeCamera,"CGlobeCamera");
						csobj_globeCamera.Delegate = true;
						IClassFactory csobj_globeCameraClassFactory = GlobalClassFactoryMap.Get(csobj_globeCamera.GetCppInstanceTypeName());
						if (csobj_globeCameraClassFactory != null)
						{
							csobj_globeCamera.Delegate = true;
							csobj_globeCamera = csobj_globeCameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
							csobj_globeCamera.BindNativeObject(globeCamera, "CGlobeCamera");
							csobj_globeCamera.Delegate = true;
						}
						
						StopGoto(csobj_globeCamera);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(IntPtr pNativeObject, IntPtr globeCamera);

					/// <summary>
					/// 停止Goto时触发
					/// </summary>
					/// <param name="globeCamera">相机</param>
					/// <returns></returns>
					public virtual void StopGoto(EarthView.World.Spatial3D.GlobeCamera globeCamera)
					{
						EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(this.NativeObject, object.Equals(globeCamera, null) ? IntPtr.Zero : globeCamera.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGoToTargetListener = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGoToTargetListener = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGoToTargetListener", new GoToTargetListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGoToTargetListenerProxy", new GoToTargetListenerClassFactory());

					public GoToTargetListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(IntPtr pObject, cameraHasGetAtTarget_CallBack_void_CGlobeCamera pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(IntPtr pObject, stopGoto_CallBack_void_CGlobeCamera pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera = EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera_Function;
							GC.KeepAlive(m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_cameraHasGetAtTarget_void_CGlobeCamera(this.NativeObject, m_cameraHasGetAtTarget_CallBack_void_CGlobeCamera);
							m_stopGoto_CallBack_void_CGlobeCamera = EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera_Function;
							GC.KeepAlive(m_stopGoto_CallBack_void_CGlobeCamera);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGoToTargetListener_stopGoto_void_CGlobeCamera(this.NativeObject, m_stopGoto_CallBack_void_CGlobeCamera);
						}
					}
					public static GoToTargetListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GoToTargetListener obj = baseObj as  GoToTargetListener;
						if (object.Equals(obj, null))
						{
							obj = new GoToTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGoToTargetListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GoToTargetListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GoToTargetListener emptyInstance = new GoToTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeCameraManipulator : EarthView.World.Spatial3D.Controls.CameraManipulator
				{
					public enum INTERSECTMODE
					{
										RAY_INTERSECT = 0,
										CIRCLE_INTERSECT = 1
					
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="manager">场景管理器</param>
					/// <param name="globecamera">相机</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					public GlobeCameraManipulator(EarthView.World.Spatial3D.GeoSceneManager manager, EarthView.World.Spatial3D.GlobeCamera globecamera, EarthView.World.Graphic.Viewport viewport) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuemanager = new BasePtr(manager);
						list.Add("manager", valuemanager.PtrVal);
						BasePtr valueglobecamera = new BasePtr(globecamera);
						list.Add("globecamera", valueglobecamera.PtrVal);
						BasePtr valueviewport = new BasePtr(viewport);
						list.Add("viewport", valueviewport.PtrVal);
						Create("CGlobeCameraManipulatorProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.GlobeCameraManipulator".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(IntPtr pNativeObject, float x, float y);

					/// <summary>
					/// 由屏幕上的点计算出射线
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Math.Ray ScreenToScene(float x, float y)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(this.NativeObject, x, y);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Ray csObj = new EarthView.World.Spatial.Math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRay");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Ray;
							csObj.BindNativeObject(__ptr, "CRay");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_createOverlay_void(IntPtr pNativeObject);

					/// <summary>
					///创建屏幕渲染对象
					/// </summary>
					/// <returns></returns>
					public void CreateOverlay()
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_createOverlay_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectModel_void_ev_bool(IntPtr pNativeObject, byte intersectModel);

					/// <summary>
					/// 设置是否与模型求交
					/// </summary>
					/// <param name="intersectModel">是否与模型求交</param>
					/// <returns></returns>
					public void SetIntersectModel(bool intersectModel)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectModel_void_ev_bool(this.NativeObject, Convert.ToByte(intersectModel));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectModel_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否与模型求交
					/// </summary>
					/// <returns></returns>
					public bool GetIntersectModel()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectModel_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectOBQ_void_ev_bool(IntPtr pNativeObject, byte intersectOBQ);

					/// <summary>
					/// 设置是否与摄影测量模型求交
					/// </summary>
					/// <param name="intersectModel">是否与摄影测量模型求交</param>
					/// <returns></returns>
					public void SetIntersectOBQ(bool intersectOBQ)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectOBQ_void_ev_bool(this.NativeObject, Convert.ToByte(intersectOBQ));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectOBQ_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否与摄影测量模型求交
					/// </summary>
					/// <returns></returns>
					public bool GetIntersectOBQ()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectOBQ_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectMode_void_IntersectMode(IntPtr pNativeObject, EarthView.World.Spatial3D.Controls.GlobeCameraManipulator.INTERSECTMODE intersectMode);

					/// <summary>
					/// 设置求交模式
					/// </summary>
					/// <param name="intersectMode">RAY_INTERSECT，射线求交。CIRCLE_INTERSECT，大圆求交</param>
					/// <returns></returns>
					public void SetIntersectMode(EarthView.World.Spatial3D.Controls.GlobeCameraManipulator.INTERSECTMODE intersectMode)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setIntersectMode_void_IntersectMode(this.NativeObject, intersectMode);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectMode_IntersectMode(IntPtr pNativeObject);

					/// <summary>
					/// 获取求交模式
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.Controls.GlobeCameraManipulator.INTERSECTMODE GetIntersectMode()
					{
						int ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getIntersectMode_IntersectMode(this.NativeObject);
						
						return (EarthView.World.Spatial3D.Controls.GlobeCameraManipulator.INTERSECTMODE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3(IntPtr pNativeObject, float x, float y, IntPtr interectPoint);

					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">相交中的点</param>
					/// <returns></returns>
					public bool Intersect(float x, float y, EarthView.World.Spatial.Math.Vector3 interectPoint)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3(this.NativeObject, x, y, object.Equals(interectPoint, null) ? IntPtr.Zero : interectPoint.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool(IntPtr pNativeObject, float x, float y, IntPtr interectPoint, byte intersecModel, byte intersectSea, byte positiveSide, byte negativeSide);

					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">射线交中的点</param>
					/// <param name="intersecModel">是否与模型求交</param>
					/// <param name="intersectSea">是否与海水求交</param>
					/// <param name="positiveSide">是否与正面求交</param>
					/// <param name="negativeSide">是否与反面求交</param>
					/// <returns></returns>
					public bool Intersect(float x, float y, EarthView.World.Spatial.Math.Vector3 interectPoint, bool intersecModel, bool intersectSea, bool positiveSide, bool negativeSide)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool(this.NativeObject, x, y, object.Equals(interectPoint, null) ? IntPtr.Zero : interectPoint.NativeObject, Convert.ToByte(intersecModel), Convert.ToByte(intersectSea), Convert.ToByte(positiveSide), Convert.ToByte(negativeSide));
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(IntPtr pNativeObject, float x, float y, IntPtr interectPoint, byte intersecModel, byte intersectSea, byte positiveSide, byte negativeSide, ref bool modelIntersected);

					/// <summary>
					///由屏幕上的点返回与场景相交的点
					/// </summary>
					/// <param name="x">屏幕上的Ｘ坐标</param>
					/// <param name="y">屏幕上的Y坐标</param>
					/// <param name="interectPoint">射线交中的点</param>
					/// <param name="intersecModel">是否与模型求交</param>
					/// <param name="intersectSea">是否与海水求交</param>
					/// <param name="positiveSide">是否与正面求交</param>
					/// <param name="negativeSide">是否与反面求交</param>
					/// <param name="modelIntersected">是否是模型的点</param>
					/// <returns></returns>
					public bool Intersect(float x, float y, EarthView.World.Spatial.Math.Vector3 interectPoint, bool intersecModel, bool intersectSea, bool positiveSide, bool negativeSide, ref bool modelIntersected)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_intersect_ev_bool_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(this.NativeObject, x, y, object.Equals(interectPoint, null) ? IntPtr.Zero : interectPoint.NativeObject, Convert.ToByte(intersecModel), Convert.ToByte(intersectSea), Convert.ToByte(positiveSide), Convert.ToByte(negativeSide), ref modelIntersected);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setCameraTiltRange_void_CDegree_CDegree(IntPtr pNativeObject, IntPtr min, IntPtr max);

					/// <summary>
					///设置相机倾角的范围
					/// </summary>
					/// <param name="min">最小值</param>
					/// <param name="max">最大值</param>
					/// <returns></returns>
					public void SetCameraTiltRange(EarthView.World.Spatial.Math.Degree min, EarthView.World.Spatial.Math.Degree max)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setCameraTiltRange_void_CDegree_CDegree(this.NativeObject, object.Equals(min, null) ? IntPtr.Zero : min.NativeObject, object.Equals(max, null) ? IntPtr.Zero : max.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeAltitudeDelta_ev_real64_CVector3_CGeoSceneManager(IntPtr pNativeObject, IntPtr v, IntPtr manager);

					/// <summary>
					///计算海拔的容差
					/// </summary>
					/// <param name="v">坐标点</param>
					/// <param name="manager">场景管理器/param>
					/// <returns></returns>
					public double ComputeAltitudeDelta(EarthView.World.Spatial.Math.Vector3 v, EarthView.World.Spatial3D.GeoSceneManager manager)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeAltitudeDelta_ev_real64_CVector3_CGeoSceneManager(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject, object.Equals(manager, null) ? IntPtr.Zero : manager.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4(IntPtr pNativeObject, IntPtr m);

					/// <summary>
					///是否需要重置相机
					/// </summary>
					/// <param name="m">相机的矩阵</param>
					/// <returns></returns>
					public bool NeedResetCamera(EarthView.World.Spatial.Math.Matrix4 m)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4(this.NativeObject, object.Equals(m, null) ? IntPtr.Zero : m.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4_ev_real64(IntPtr pNativeObject, IntPtr m, ref double distance);

					/// <summary>
					///是否需要重置相机
					/// </summary>
					/// <param name="m">相机的矩阵</param>
					/// <param name="distance">相机的距离</param>
					/// <returns></returns>
					public bool NeedResetCamera(EarthView.World.Spatial.Math.Matrix4 m, ref double distance)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_needResetCamera_ev_bool_CMatrix4_ev_real64(this.NativeObject, object.Equals(m, null) ? IntPtr.Zero : m.NativeObject, ref distance);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRotationRatio_ev_real64_ev_real64(IntPtr pNativeObject, double cameraAltitude);

					/// <summary>
					///根据相机的海拔计算出旋转的比率
					/// </summary>
					/// <param name="cameraAltitude">相机的海拔</param>
					/// <returns></returns>
					public double ComputeRotationRatio(double cameraAltitude)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRotationRatio_ev_real64_ev_real64(this.NativeObject, cameraAltitude);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					///处理鼠标事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleMouseEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					///处理鼠标事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleMouseEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr frameEvent);

					/// <summary>
					///处理帧事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleFrameEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent frameEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(frameEvent, null) ? IntPtr.Zero : frameEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr frameEvent);

					/// <summary>
					///处理帧事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent frameEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(frameEvent, null) ? IntPtr.Zero : frameEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr keyEvent);

					/// <summary>
					///处理键盘事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleKeyEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent keyEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(keyEvent, null) ? IntPtr.Zero : keyEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr keyEvent);

					/// <summary>
					///处理键盘事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleKeyEvent(EarthView.World.Spatial.SystemUI.Guievent keyEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(keyEvent, null) ? IntPtr.Zero : keyEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent(IntPtr mouseEvent);

					protected handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					///处理鼠标滚轮事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseWheelEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Function(IntPtr mouseEvent)
					{
						EarthView.World.Spatial.SystemUI.Guievent csobj_mouseEvent = new EarthView.World.Spatial.SystemUI.Guievent(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mouseEvent.BindNativeObject(mouseEvent,"CGUIEvent");
						csobj_mouseEvent.Delegate = true;
						IClassFactory csobj_mouseEventClassFactory = GlobalClassFactoryMap.Get(csobj_mouseEvent.GetCppInstanceTypeName());
						if (csobj_mouseEventClassFactory != null)
						{
							csobj_mouseEvent.Delegate = true;
							csobj_mouseEvent = csobj_mouseEventClassFactory.Create() as EarthView.World.Spatial.SystemUI.Guievent;
							csobj_mouseEvent.BindNativeObject(mouseEvent, "CGUIEvent");
							csobj_mouseEvent.Delegate = true;
						}
						
						bool csret=HandleMouseWheelEvent(csobj_mouseEvent);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					///处理鼠标滚轮事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public virtual bool HandleMouseWheelEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr useEvent);

					/// <summary>
					///处理自定义事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public new bool HandleUserEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent useEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(useEvent, null) ? IntPtr.Zero : useEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr useEvent);

					/// <summary>
					///处理自定义事件
					/// </summary>
					/// <param name="mouseEvent">事件对象</param>
					/// <returns></returns>
					public override bool HandleUserEvent(EarthView.World.Spatial.SystemUI.Guievent useEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(useEvent, null) ? IntPtr.Zero : useEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtCameraRight_void_CRadian(IntPtr pNativeObject, IntPtr angleRadian);

					/// <summary>
					///在相机处旋转
					/// </summary>
					/// <param name="angleRadian">转动的角度</param>
					/// <returns></returns>
					public void RotationAtCameraRight(EarthView.World.Spatial.Math.Radian angleRadian)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtCameraRight_void_CRadian(this.NativeObject, object.Equals(angleRadian, null) ? IntPtr.Zero : angleRadian.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtTargetRight_void_CRadian(IntPtr pNativeObject, IntPtr angleRadian);

					/// <summary>
					///在目标点处旋转
					/// </summary>
					/// <param name="angleRadian">转动的角度</param>
					/// <returns></returns>
					public void RotationAtTargetRight(EarthView.World.Spatial.Math.Radian angleRadian)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAtTargetRight_void_CRadian(this.NativeObject, object.Equals(angleRadian, null) ? IntPtr.Zero : angleRadian.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rightButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(IntPtr pNativeObject, IntPtr lastEvent, IntPtr mouseEvent);

					/// <summary>
					///鼠标右键移动的处理
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					public bool RightButtonMoveImpl(EarthView.World.Spatial.SystemUI.Guievent lastEvent, EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rightButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(this.NativeObject, object.Equals(lastEvent, null) ? IntPtr.Zero : lastEvent.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_leftButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(IntPtr pNativeObject, IntPtr lastEvent, IntPtr mouseEvent);

					/// <summary>
					///鼠标左键移动的处理
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					public bool LeftButtonMoveImpl(EarthView.World.Spatial.SystemUI.Guievent lastEvent, EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_leftButtonMoveImpl_ev_bool_CGUIEvent_CGUIEvent(this.NativeObject, object.Equals(lastEvent, null) ? IntPtr.Zero : lastEvent.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(IntPtr pNativeObject, IntPtr firstEvent, IntPtr secondEvent);

					/// <summary>
					///指示鼠标是否移动
					/// </summary>
					/// <param name="lastEvent">前一个鼠标事件</param>
					/// <param name="mouseEvent">当前鼠标事件</param>
					/// <returns></returns>
					public bool CalculateMoveable(EarthView.World.Spatial.SystemUI.Guievent firstEvent, EarthView.World.Spatial.SystemUI.Guievent secondEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(this.NativeObject, object.Equals(firstEvent, null) ? IntPtr.Zero : firstEvent.NativeObject, object.Equals(secondEvent, null) ? IntPtr.Zero : secondEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(IntPtr pNativeObject, float mouseWheelDelta);

					/// <summary>
					///计算缩放比率
					/// </summary>
					/// <param name="mouseWheelDelta">滚轮变化量</param>
					/// <returns></returns>
					public double CalculateZoomFactor(float mouseWheelDelta)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(this.NativeObject, mouseWheelDelta);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRoll_ev_real64_CVector3(IntPtr pNativeObject, IntPtr currentVector);

					///ev_bool pickingRayIntersection(ev_int32 screenX,ev_int32 screenY,ev_real64 worldradius,ev_bool isOutside,ev_real64& latitude,ev_real64& longitude);
					///ev_bool pickingRayIntersection(const EarthView::World::Spatial::Math::CVector3& lookVector,const EarthView::World::Spatial::Math::CVector3& observerPostion,ev_real64 worldradius,EarthView::World::Spatial::Math::CVector3& intersectionPostion);
					//// <summary>
					////计算旋转角
					//// </summary>
					//// <param name="currentVector">当前方向</param>
					//// <returns></returns>
					public double ComputeRoll(EarthView.World.Spatial.Math.Vector3 currentVector)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeRoll_ev_real64_CVector3(this.NativeObject, object.Equals(currentVector, null) ? IntPtr.Zero : currentVector.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGlobeCamera_CGlobeCamera(IntPtr pNativeObject);

					/// <summary>
					///返回相机
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Spatial3D.GlobeCamera GetGlobeCamera()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGlobeCamera_CGlobeCamera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.GlobeCamera csObj = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CGlobeCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
							csObj.BindNativeObject(__ptr, "CGlobeCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAndZoomCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double degree, double zoomRatio);

					/// <summary>
					///在指定屏幕点处旋转和缩放
					/// </summary>
					/// <param name="x">屏幕点的Ｘ坐标</param>
					/// <param name="y">屏幕点的Y坐标</param>
					/// <param name="degree">旋转的角度</param>
					/// <param name="zoomRatio">缩放比例</param>
					/// <returns></returns>
					public void RotationAndZoomCamera(double x, double y, double degree, double zoomRatio)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_rotationAndZoomCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, degree, zoomRatio);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double degree);

					/// <summary>
					///在指定屏幕点处倾斜
					/// </summary>
					/// <param name="x">屏幕点的Ｘ坐标</param>
					/// <param name="y">屏幕点的Y坐标</param>
					/// <param name="degree">倾斜的角度</param>
					/// <returns></returns>
					public void TiltCamera(double x, double y, double degree)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, degree);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_enterUnderGroundMode_void(IntPtr pNativeObject);

					/// <summary>
					///进入地下模式
					/// </summary>
					/// <returns></returns>
					public void EnterUnderGroundMode()
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_enterUnderGroundMode_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_exitUnderGroundMode_void(IntPtr pNativeObject);

					/// <summary>
					///退出地下模式
					/// </summary>
					/// <returns></returns>
					public void ExitUnderGroundMode()
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_exitUnderGroundMode_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_resetCamAltitude_void(IntPtr pNativeObject);

					/// <summary>
					///重设相机的海拔
					/// </summary>
					/// <returns></returns>
					public void ResetCamAltitude()
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_resetCamAltitude_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_fadeInOut_void_ev_real64(IntPtr pNativeObject, double time);

					/// <summary>
					///开启淡入淡出合成器
					/// </summary>
					/// <param name="time">合成器开启后的持续时间（秒）</param>
					/// <returns></returns>
					public void FadeInOut(double time)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_fadeInOut_void_ev_real64(this.NativeObject, time);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_addGotoListener_void_CGoToTargetListener(IntPtr pNativeObject, IntPtr ref_listener);

					/// <summary>
					///添加Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					public void AddGotoListener(EarthView.World.Spatial3D.Controls.GoToTargetListener ref_listener)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_addGotoListener_void_CGoToTargetListener(this.NativeObject, object.Equals(ref_listener, null) ? IntPtr.Zero : ref_listener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_removeGotoListener_void_CGoToTargetListener(IntPtr pNativeObject, IntPtr listener);

					/// <summary>
					///移除Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					public void RemoveGotoListener(EarthView.World.Spatial3D.Controls.GoToTargetListener listener)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_removeGotoListener_void_CGoToTargetListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_stopInertiaPan_void(IntPtr pNativeObject);

					/// <summary>
					/// 停止惯性
					/// </summary>
					/// <returns></returns>
					public void StopInertiaPan()
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_stopInertiaPan_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setInertialPanEnabled_void_ev_bool(IntPtr pNativeObject, byte enable);

					/// <summary>
					/// 启用/禁用惯性
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					public void SetInertialPanEnabled(bool enable)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setInertialPanEnabled_void_ev_bool(this.NativeObject, Convert.ToByte(enable));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMoveToEnable_void_ev_bool(IntPtr pNativeObject, byte enable);

					/// <summary>
					/// 启用/禁用双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					public void SetMoveToEnable(bool enable)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMoveToEnable_void_ev_bool(this.NativeObject, Convert.ToByte(enable));
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMoveToEnable_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否开启双击移动
					/// </summary>
					/// <param name="enable"></param>
					/// <returns></returns>
					public bool GetMoveToEnable()
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMoveToEnable_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMouseWheelRatio_void_ev_real64(IntPtr pNativeObject, double mouseWheelRatio);

					/// <summary>
					/// 设置磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio"></param>
					/// <returns></returns>
					public void SetMouseWheelRatio(double mouseWheelRatio)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setMouseWheelRatio_void_ev_real64(this.NativeObject, mouseWheelRatio);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMouseWheelRatio_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取磙轮缩放的比率
					/// </summary>
					/// <param name="mouseWheelRatio"></param>
					/// <returns></returns>
					public double GetMouseWheelRatio()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getMouseWheelRatio_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setGotoTimeRatio_void_ev_real64(IntPtr pNativeObject, double gotoRatio);

					/// <summary>
					/// 设置相机goto的比率
					/// </summary>
					/// <param name="gotoRatio"></param>
					/// <returns></returns>
					public void SetGotoTimeRatio(double gotoRatio)
					{
						EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_setGotoTimeRatio_void_ev_real64(this.NativeObject, gotoRatio);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGotoTimeRatio_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取相机goto的比率
					/// </summary>
					/// <returns></returns>
					public double GetGotoTimeRatio()
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_getGotoTimeRatio_ev_real64(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateTiltAble_ev_bool_CVector3_CMatrix3(IntPtr pNativeObject, IntPtr cameraZAxis, IntPtr rotation);

					public bool CalculateTiltAble(EarthView.World.Spatial.Math.Vector3 cameraZAxis, EarthView.World.Spatial.Math.Matrix3 rotation)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_calculateTiltAble_ev_bool_CVector3_CMatrix3(this.NativeObject, object.Equals(cameraZAxis, null) ? IntPtr.Zero : cameraZAxis.NativeObject, object.Equals(rotation, null) ? IntPtr.Zero : rotation.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeCameraManipulator = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeCameraManipulator = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator", new GlobeCameraManipulatorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCameraManipulatorProxy", new GlobeCameraManipulatorClassFactory());

					public GlobeCameraManipulator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUserEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void(IntPtr pObject, reset_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4(IntPtr pObject, computeViewportMatrix_CallBack_CMatrix4 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseEvent_CallBack_ev_bool_CGUIEvent);
							m_handleUserEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							m_reset_CallBack_void = EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Function;
							GC.KeepAlive(m_reset_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_reset_void(this.NativeObject, m_reset_CallBack_void);
							m_computeViewportMatrix_CallBack_CMatrix4 = EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Function;
							GC.KeepAlive(m_computeViewportMatrix_CallBack_CMatrix4);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_computeViewportMatrix_CMatrix4(this.NativeObject, m_computeViewportMatrix_CallBack_CMatrix4);
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCameraManipulator_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public override void Reset()
					{
						base.Reset_NoVirtual();
					}
					public override EarthView.World.Spatial.Math.Matrix4 ComputeViewportMatrix()
					{
						return base.ComputeViewportMatrix_NoVirtual();
					}
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						return base.HandleEvent_NoVirtual(guiEvent);
					}
					public static GlobeCameraManipulator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeCameraManipulator obj = baseObj as  GlobeCameraManipulator;
						if (object.Equals(obj, null))
						{
							obj = new GlobeCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeCameraManipulator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeCameraManipulatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeCameraManipulator emptyInstance = new GlobeCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GlobeCamUnderGroundHandler : EarthView.World.Spatial3D.Controls.GlobeLockCameraHandler
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="cameraManipulator">相机漫游器</param>
					/// <returns></returns>
					public GlobeCamUnderGroundHandler(EarthView.World.Spatial3D.GlobeCamera camera, EarthView.World.Spatial3D.GeoSceneManager sceneManager, EarthView.World.Graphic.Viewport viewport, EarthView.World.Spatial3D.Controls.GlobeCameraManipulator cameraManipulator) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuecamera = new BasePtr(camera);
						list.Add("camera", valuecamera.PtrVal);
						BasePtr valuesceneManager = new BasePtr(sceneManager);
						list.Add("sceneManager", valuesceneManager.PtrVal);
						BasePtr valueviewport = new BasePtr(viewport);
						list.Add("viewport", valueviewport.PtrVal);
						BasePtr valuecameraManipulator = new BasePtr(cameraManipulator);
						list.Add("cameraManipulator", valuecameraManipulator.PtrVal);
						Create("CGlobeCamUnderGroundHandlerProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.GlobeCamUnderGroundHandler".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					/// 判断传入点高程是否大于指定高程
					/// </summary>
					/// <param name="v">传入点</param>
					/// <returns>传入点高程与指定高程的高差</returns>
					public new double ComputeAltitudeDelta_NoVirtual(EarthView.World.Spatial.Math.Vector3 v)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					/// 判断传入点高程是否大于指定高程
					/// </summary>
					/// <param name="v">传入点</param>
					/// <returns>传入点高程与指定高程的高差</returns>
					public override double ComputeAltitudeDelta(EarthView.World.Spatial.Math.Vector3 v)
					{
						double ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标移动事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public new bool HandleMouseMoveEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标移动事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public override bool HandleMouseMoveEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标滚轮事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public new bool HandleMouseWheelEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标滚轮事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public override bool HandleMouseWheelEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标按下事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public new bool HandleMouseDownEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标按下事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public override bool HandleMouseDownEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标抬起事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public new bool HandleMouseUp_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr mouseEvent);

					/// <summary>
					/// 鼠标抬起事件处理
					/// </summary>
					/// <param name="mouseEvent">鼠标事件对象</param>
					/// <returns>事件是否已被处理</returns>
					public override bool HandleMouseUp(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(this.NativeObject, object.Equals(mouseEvent, null) ? IntPtr.Zero : mouseEvent.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA.so");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadGlobeCamUnderGroundHandler = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler", new GlobeCamUnderGroundHandlerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandlerProxy", new GlobeCamUnderGroundHandlerClassFactory());

					public GlobeCamUnderGroundHandler(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUseEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseDownEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(IntPtr pObject, handleMouseUp_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(IntPtr pObject, computeAltitudeDelta_CallBack_ev_real64_CVector3 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_GA_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleUseEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleUseEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUseEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseDownEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseDownEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseMoveEvent_CallBack_ev_bool_CGUIEvent);
							m_handleMouseUp_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseUp_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseUp_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseUp_CallBack_ev_bool_CGUIEvent);
							m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseWheelEvent_CallBack_ev_bool_CGUIEvent);
							m_computeAltitudeDelta_CallBack_ev_real64_CVector3 = EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Function;
							GC.KeepAlive(m_computeAltitudeDelta_CallBack_ev_real64_CVector3);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_computeAltitudeDelta_ev_real64_CVector3(this.NativeObject, m_computeAltitudeDelta_CallBack_ev_real64_CVector3);
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCamUnderGroundHandler_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public override bool HandleUseEvent(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						return base.HandleUseEvent_NoVirtual(userEvent);
					}
					public override bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						return base.HandleFrameEvent_NoVirtual(guiEvent);
					}
					public static GlobeCamUnderGroundHandler FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GlobeCamUnderGroundHandler obj = baseObj as  GlobeCamUnderGroundHandler;
						if (object.Equals(obj, null))
						{
							obj = new GlobeCamUnderGroundHandler(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGlobeCamUnderGroundHandler");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GlobeCamUnderGroundHandlerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GlobeCamUnderGroundHandler emptyInstance = new GlobeCamUnderGroundHandler(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
