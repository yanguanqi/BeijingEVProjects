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
				public class RecordEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>	
					public RecordEvent() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRecordEvent",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadRecordEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadRecordEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CRecordEvent", new RecordEventClassFactory());

					public RecordEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RecordEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RecordEvent obj = baseObj as  RecordEvent;
						if (object.Equals(obj, null))
						{
							obj = new RecordEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRecordEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RecordEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RecordEvent emptyInstance = new RecordEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class ControlPointEvent : EarthView.World.Spatial.SystemUI.Guievent
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="second">当前时间</param>
					/// <returns></returns>	
					public ControlPointEvent(float second) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuesecond = new BasePtr(second);
						list.Add("second", valuesecond.PtrVal);
						Create("CControlPointEvent", list);
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
					private static extern float Get_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond( IntPtr pObject, float value );

					public 					float Msecond
					{
						get
						{
							float ret=Get_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Spatial3D_Controls_CControlPointEvent_msecond(this.NativeObject,value);
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA.so");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadControlPointEvent = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadControlPointEvent = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CControlPointEvent", new ControlPointEventClassFactory());

					public ControlPointEvent(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ControlPointEvent FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ControlPointEvent obj = baseObj as  ControlPointEvent;
						if (object.Equals(obj, null))
						{
							obj = new ControlPointEvent(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CControlPointEvent");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ControlPointEventClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ControlPointEvent emptyInstance = new ControlPointEvent(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 通用场景相机漫游器类
				/// 此类用来控制相机在场景中的漫游：平移、旋转、缩放。
				/// </summary>
				public class CommonSceneCameraManipulator : EarthView.World.Spatial3D.Controls.CameraManipulator
				{
					/// <summary>
					/// 构造函数。
					/// </summary>
					/// <param name="manager">场景管理器</param>
					/// <param name="commonscenecamera">相机</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					public CommonSceneCameraManipulator(EarthView.World.Spatial3D.CommonSceneManager ref_manager, EarthView.World.Spatial3D.CommonSceneCamera ref_commonscenecamera, EarthView.World.Graphic.Viewport ref_viewport) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_manager = new BasePtr(ref_manager);
						list.Add("ref_manager", valueref_manager.PtrVal);
						BasePtr valueref_commonscenecamera = new BasePtr(ref_commonscenecamera);
						list.Add("ref_commonscenecamera", valueref_commonscenecamera.PtrVal);
						BasePtr valueref_viewport = new BasePtr(ref_viewport);
						list.Add("ref_viewport", valueref_viewport.PtrVal);
						Create("CCommonSceneCameraManipulatorProxy", list);
						if (!"EarthView.World.Spatial3D.Controls.CommonSceneCameraManipulator".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(IntPtr pNativeObject, float x, float y);

					/// <summary>
					/// 求屏幕点在世界空间中所在的射线
					/// </summary>
					/// <param name="x">屏幕点的x坐标</param>
					/// <param name="y">屏幕点的y坐标</param>
					/// <returns>EarthView::World::Spatial::Math::CRay，结果射线</returns>
					public EarthView.World.Spatial.Math.Ray ScreenToScene(float x, float y)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_screenToScene_CRay_ev_real32_ev_real32(this.NativeObject, x, y);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CPlane_CVector3(IntPtr pNativeObject, IntPtr ray, IntPtr plane, IntPtr intersectPoint);

					/// <summary>
					/// 射线跟平面求交
					/// </summary>
					/// <param name="ray">射线</param>
					/// <param name="plane">平面</param>
					/// <param name="normal">法线</param>
					/// <param name="point">平面上的点</param>
					/// <returns>intersectPoint，所求的交点</returns>
					public bool Intersect(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Spatial.Math.Plane plane, ref  EarthView.World.Spatial.Math.Vector3 intersectPoint)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CPlane_CVector3(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, object.Equals(intersectPoint, null) ? IntPtr.Zero : intersectPoint.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr ray, IntPtr normal, IntPtr point, IntPtr intersectPoint);

					public bool Intersect(EarthView.World.Spatial.Math.Ray ray, EarthView.World.Spatial.Math.Vector3 normal, EarthView.World.Spatial.Math.Vector3 point, ref  EarthView.World.Spatial.Math.Vector3 intersectPoint)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_intersect_ev_bool_CRay_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(ray, null) ? IntPtr.Zero : ray.NativeObject, object.Equals(normal, null) ? IntPtr.Zero : normal.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject, object.Equals(intersectPoint, null) ? IntPtr.Zero : intersectPoint.NativeObject);
						
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
					private static extern double EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeRotationRatio_ev_real64_ev_real64(IntPtr pNativeObject, double cameraAltitude);

					/// <summary>
					/// 计算旋转量
					/// </summary>
					/// <param name="cameraAltitude">相机的高度</param>
					/// <returns>ev_real64，旋转量</returns>
					public double ComputeRotationRatio(double cameraAltitude)
					{
						double ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeRotationRatio_ev_real64_ev_real64(this.NativeObject, cameraAltitude);
						
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
					private static extern double EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(IntPtr pNativeObject, float mouseWheelDelta);

					/// <summary>
					/// 计算缩放因子
					/// </summary>
					/// <param name="mouseWheelDelta">鼠标滚动量</param>
					/// <returns>ev_real64，缩放因子</returns>
					public double CalculateZoomFactor(float mouseWheelDelta)
					{
						double ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateZoomFactor_ev_real64_ev_real32(this.NativeObject, mouseWheelDelta);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(IntPtr pNativeObject, IntPtr firstEvent, IntPtr secondEvent);

					/// <summary>
					/// 判断是否发生平移
					/// </summary>
					/// <param name="firstEvent">平移之前的事件</param>
					/// <param name="secondEvent">平移之后的事件</param>
					/// <returns></returns>
					public bool CalculateMoveable(EarthView.World.Spatial.SystemUI.Guievent firstEvent, EarthView.World.Spatial.SystemUI.Guievent secondEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(this.NativeObject, object.Equals(firstEvent, null) ? IntPtr.Zero : firstEvent.NativeObject, object.Equals(secondEvent, null) ? IntPtr.Zero : secondEvent.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_roamCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double moriginX, double moriginY, double mlastX, double mlastY);

					/// <summary>
					/// 平移
					/// </summary>
					/// <param name="moriginX">平移之前鼠标所在点的x坐标</param>
					/// <param name="moriginY">平移之前鼠标所在点的y坐标</param>
					/// <param name="mlastX">平移之后鼠标所在点的x坐标</param>
					/// <param name="mlastY">平移之后鼠标所在点的y坐标</param>
					/// <returns></returns>
					public void RoamCamera(double moriginX, double moriginY, double mlastX, double mlastY)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_roamCamera_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, moriginX, moriginY, mlastX, mlastY);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_zoomCamera_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double zoomRatio);

					/// <summary>
					/// 缩放
					/// </summary>
					/// <param name="x">进行缩放的中心点x坐标</param>
					/// <param name="y">进行缩放的中心点y坐标</param>
					/// <param name="zoomRatio">缩放因子</param>
					/// <returns></returns>
					public void ZoomCamera(double x, double y, double zoomRatio)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_zoomCamera_void_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, zoomRatio);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationCamera_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double degree);

					/// <summary>
					/// 旋转
					/// </summary>
					/// <param name="x">旋转所围绕点的x坐标</param>
					/// <param name="y">旋转所围绕点的y坐标</param>
					/// <param name="degree">旋转角度</param>
					/// <returns></returns>
					public void RotationCamera(double x, double y, double degree)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationCamera_void_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, degree);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double x, double y, double degree);

					/// <summary>
					/// 相机的俯仰
					/// </summary>
					/// <param name="x">旋转所围绕点的x坐标</param>
					/// <param name="y">旋转所围绕点的y坐标</param>
					/// <param name="degree">旋转角度</param>
					/// <returns></returns>
					public void TiltCamera(double x, double y, double degree)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_tiltCamera_void_ev_real64_ev_real64_ev_real64(this.NativeObject, x, y, degree);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationAtPoint_ev_bool_CVector3_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr ratationPoint, double head, double tilt);

					/// <summary>
					/// 绕已知点旋转
					/// </summary>
					/// <param name="ratationPoint">已知点的坐标</param>
					/// <param name="head">相机的偏航角</param>
					/// <param name="tilt">相机的俯仰角</param>
					/// <returns></returns>
					public bool RotationAtPoint(EarthView.World.Spatial.Math.Vector3 ratationPoint, double head, double tilt)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_rotationAtPoint_ev_bool_CVector3_ev_real64_ev_real64(this.NativeObject, object.Equals(ratationPoint, null) ? IntPtr.Zero : ratationPoint.NativeObject, head, tilt);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr useEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件</param>
					/// <returns></returns>	
					public new bool HandleFrameEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent useEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(useEvent, null) ? IntPtr.Zero : useEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr useEvent);

					/// <summary>
					/// 处理帧事件
					/// </summary>
					/// <param name="guiEvent">事件</param>
					/// <returns></returns>	
					public override bool HandleFrameEvent(EarthView.World.Spatial.SystemUI.Guievent useEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(useEvent, null) ? IntPtr.Zero : useEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理函数
					/// </summary>
					/// <param name="guiEvent">所接受到的事件</param>
					/// <returns></returns>
					public new bool HandleEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr guiEvent);

					/// <summary>
					/// 事件处理函数
					/// </summary>
					/// <param name="guiEvent">所接受到的事件</param>
					/// <returns></returns>
					public override bool HandleEvent(EarthView.World.Spatial.SystemUI.Guievent guiEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(guiEvent, null) ? IntPtr.Zero : guiEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">自定义事件</param>
					/// <returns></returns>
					public new bool HandleUserEvent_NoVirtual(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(IntPtr pNativeObject, IntPtr userEvent);

					/// <summary>
					/// 处理自定义事件
					/// </summary>
					/// <param name="userEvent">自定义事件</param>
					/// <returns></returns>
					public override bool HandleUserEvent(EarthView.World.Spatial.SystemUI.Guievent userEvent)
					{
						byte ret=EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, object.Equals(userEvent, null) ? IntPtr.Zero : userEvent.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_createAnimation_void(IntPtr pNativeObject);

					/// <summary>
					/// 创建动画
					/// <returns></returns>
					public void CreateAnimation()
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_createAnimation_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_addControlPoint_void_ev_real32(IntPtr pNativeObject, float second);

					/// <summary>
					/// 增加控制点
					/// </summary>
					/// <param name="second">时间</param>
					/// <returns></returns>
					public void AddControlPoint(float second)
					{
						EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_addControlPoint_void_ev_real32(this.NativeObject, second);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_getCommonSceneCamera_CCommonSceneCamera(IntPtr pNativeObject);

					/// <summary>
					/// 获取所操纵的相机
					/// </summary>
					/// <param name=""></param>
					/// <returns>CCommonSceneCamera，指向相机的指针</returns>
					public EarthView.World.Spatial3D.CommonSceneCamera GetCommonSceneCamera()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_getCommonSceneCamera_CCommonSceneCamera(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.CommonSceneCamera csObj = new EarthView.World.Spatial3D.CommonSceneCamera(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CCommonSceneCamera");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.CommonSceneCamera;
							csObj.BindNativeObject(__ptr, "CCommonSceneCamera");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_d.so");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.so");

						#else 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_d.dll");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp.dll");

						#elif Linux 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA.so");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp.so");

						#else 
							private static bool bLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA.dll");
							private static bool csbLoadCommonSceneCameraManipulator = LoadDll.Load("EV_GA_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator", new CommonSceneCameraManipulatorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulatorProxy", new CommonSceneCameraManipulatorClassFactory());

					public CommonSceneCameraManipulator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(IntPtr pObject, handleMouseEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(IntPtr pObject, handleUserEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(IntPtr pObject, handleKeyEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(IntPtr pObject, handleFrameEvent_CallBack_ev_bool_CGUIEvent pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void(IntPtr pObject, reset_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4(IntPtr pObject, computeViewportMatrix_CallBack_CMatrix4 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(IntPtr pObject, handleEvent_CallBack_ev_bool_CGUIEvent pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_handleMouseEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleMouseEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleMouseEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleMouseEvent_CallBack_ev_bool_CGUIEvent);
							m_handleUserEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleUserEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleUserEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleUserEvent_CallBack_ev_bool_CGUIEvent);
							m_handleKeyEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleKeyEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleKeyEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleKeyEvent_CallBack_ev_bool_CGUIEvent);
							m_handleFrameEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleFrameEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleFrameEvent_CallBack_ev_bool_CGUIEvent);
							m_reset_CallBack_void = EarthView_World_Spatial3D_Controls_CCameraManipulator_reset_void_Function;
							GC.KeepAlive(m_reset_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_reset_void(this.NativeObject, m_reset_CallBack_void);
							m_computeViewportMatrix_CallBack_CMatrix4 = EarthView_World_Spatial3D_Controls_CCameraManipulator_computeViewportMatrix_CMatrix4_Function;
							GC.KeepAlive(m_computeViewportMatrix_CallBack_CMatrix4);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_computeViewportMatrix_CMatrix4(this.NativeObject, m_computeViewportMatrix_CallBack_CMatrix4);
							m_handleEvent_CallBack_ev_bool_CGUIEvent = EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Function;
							GC.KeepAlive(m_handleEvent_CallBack_ev_bool_CGUIEvent);
							EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCommonSceneCameraManipulator_handleEvent_ev_bool_CGUIEvent(this.NativeObject, m_handleEvent_CallBack_ev_bool_CGUIEvent);
						}
					}
					public override bool HandleMouseEvent(EarthView.World.Spatial.SystemUI.Guievent mouseEvent)
					{
						return base.HandleMouseEvent_NoVirtual(mouseEvent);
					}
					public override bool HandleKeyEvent(EarthView.World.Spatial.SystemUI.Guievent keyEvent)
					{
						return base.HandleKeyEvent_NoVirtual(keyEvent);
					}
					public override void Reset()
					{
						base.Reset_NoVirtual();
					}
					public override EarthView.World.Spatial.Math.Matrix4 ComputeViewportMatrix()
					{
						return base.ComputeViewportMatrix_NoVirtual();
					}
					public static CommonSceneCameraManipulator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CommonSceneCameraManipulator obj = baseObj as  CommonSceneCameraManipulator;
						if (object.Equals(obj, null))
						{
							obj = new CommonSceneCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCommonSceneCameraManipulator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CommonSceneCameraManipulatorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CommonSceneCameraManipulator emptyInstance = new CommonSceneCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
