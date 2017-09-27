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
			///class  CControlPointBuffer;
			//// <summary>
			//// 动态目标轨迹动画
			//// </summary>
			public class DynamicGlobeNodeTrackAnimation : EarthView.World.Spatial3D.GlobeNodeTrackAnimation
			{
				/// <summary>
				/// 动态目标轨迹动画构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_eventManager">事件管理器，该参数对象的生命周期要保持大于本对象的生命周期</param>
				public DynamicGlobeNodeTrackAnimation(string name, EarthView.World.Graphic.SceneManager ref_sceneManager, EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventManager ref_eventManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuename = new BasePtr(name);
					list.Add("name", valuename.PtrVal);
					BasePtr valueref_sceneManager = new BasePtr(ref_sceneManager);
					list.Add("ref_sceneManager", valueref_sceneManager.PtrVal);
					BasePtr valueref_eventManager = new BasePtr(ref_eventManager);
					list.Add("ref_eventManager", valueref_eventManager.PtrVal);
					Create("CDynamicGlobeNodeTrackAnimationProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimation".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void createAnimation_CallBack_void();

				protected createAnimation_CallBack_void m_createAnimation_CallBack_void;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 生成轨迹动画
				/// </summary>
				public virtual void CreateAnimation_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Function()
				{
					CreateAnimation();
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 生成轨迹动画
				/// </summary>
				public virtual void CreateAnimation()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void refreshAnimation_CallBack_void_CGlobeControlPointMap(IntPtr refreshPoints);

				protected refreshAnimation_CallBack_void_CGlobeControlPointMap m_refreshAnimation_CallBack_void_CGlobeControlPointMap;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_NoVirtual(IntPtr pNativeObject, IntPtr refreshPoints);

				/// <summary>
				/// 动态刷新轨迹动画
				/// </summary>
				/// <param name="refreshPoints">控制点参数</param>
				public virtual void RefreshAnimation_NoVirtual(EarthView.World.Spatial3D.GlobeControlPointMap refreshPoints)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_NoVirtual(this.NativeObject, object.Equals(refreshPoints, null) ? IntPtr.Zero : refreshPoints.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Function(IntPtr refreshPoints)
				{
					EarthView.World.Spatial3D.GlobeControlPointMap csobj_refreshPoints = new EarthView.World.Spatial3D.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_refreshPoints.BindNativeObject(refreshPoints,"CGlobeControlPointMap");
					csobj_refreshPoints.Delegate = true;
					IClassFactory csobj_refreshPointsClassFactory = GlobalClassFactoryMap.Get(csobj_refreshPoints.GetCppInstanceTypeName());
					if (csobj_refreshPointsClassFactory != null)
					{
						csobj_refreshPoints.Delegate = true;
						csobj_refreshPoints = csobj_refreshPointsClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPointMap;
						csobj_refreshPoints.BindNativeObject(refreshPoints, "CGlobeControlPointMap");
						csobj_refreshPoints.Delegate = true;
					}
					
					RefreshAnimation(csobj_refreshPoints);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(IntPtr pNativeObject, IntPtr refreshPoints);

				/// <summary>
				/// 动态刷新轨迹动画
				/// </summary>
				/// <param name="refreshPoints">控制点参数</param>
				public virtual void RefreshAnimation(EarthView.World.Spatial3D.GlobeControlPointMap refreshPoints)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(this.NativeObject, object.Equals(refreshPoints, null) ? IntPtr.Zero : refreshPoints.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCurrentFrameTime_CallBack_void_ev_real64(ref double time);

				protected setCurrentFrameTime_CallBack_void_ev_real64 m_setCurrentFrameTime_CallBack_void_ev_real64;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_NoVirtual(IntPtr pNativeObject, ref double time);

				/// <summary>
				/// 设置当前帧时间
				/// </summary>
				/// <param name="time">当前动画帧时间</param>
				public virtual void SetCurrentFrameTime_NoVirtual(double time)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_NoVirtual(this.NativeObject, ref time);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Function(ref double time)
				{
					SetCurrentFrameTime(time);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(IntPtr pNativeObject, ref double time);

				/// <summary>
				/// 设置当前帧时间
				/// </summary>
				/// <param name="time">当前动画帧时间</param>
				public virtual void SetCurrentFrameTime(double time)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(this.NativeObject, ref time);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getCurrentFrameTime_CallBack_ev_real64();

				protected getCurrentFrameTime_CallBack_ev_real64 m_getCurrentFrameTime_CallBack_ev_real64;

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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前帧时间
				/// </summary>
				/// <returns>当前动画帧时间</returns>
				public virtual double GetCurrentFrameTime_NoVirtual()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Function()
				{
					double csret=GetCurrentFrameTime();
					
					return csret;
					
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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前帧时间
				/// </summary>
				/// <returns>当前动画帧时间</returns>
				public virtual double GetCurrentFrameTime()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getCurrentFrameControlPoint_CallBack_CGlobeControlPoint();

				protected getCurrentFrameControlPoint_CallBack_CGlobeControlPoint m_getCurrentFrameControlPoint_CallBack_CGlobeControlPoint;

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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前帧的控制点参数
				/// </summary>
				/// <returns>控制点参数</returns>
				public virtual EarthView.World.Spatial3D.GlobeControlPoint GetCurrentFrameControlPoint_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Function()
				{
					EarthView.World.Spatial3D.GlobeControlPoint csret=GetCurrentFrameControlPoint();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(IntPtr pNativeObject);

				/// <summary>
				/// 获取当前帧的控制点参数
				/// </summary>
				/// <returns>控制点参数</returns>
				public virtual EarthView.World.Spatial3D.GlobeControlPoint GetCurrentFrameControlPoint()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64(ref double time);

				protected getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64 m_getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64;

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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_NoVirtual(IntPtr pNativeObject, ref double time);

				/// <summary>
				/// 获取指定关键帧时间对应的控制点参数
				/// </summary>
				/// <param name="time">指定关键帧时间</param>
				/// <returns>控制点参数</returns>
				public virtual EarthView.World.Spatial3D.GlobeControlPoint GetKeyFrameControlPoint_NoVirtual(double time)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_NoVirtual(this.NativeObject, ref time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Function(ref double time)
				{
					EarthView.World.Spatial3D.GlobeControlPoint csret=GetKeyFrameControlPoint(time);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(IntPtr pNativeObject, ref double time);

				/// <summary>
				/// 获取指定关键帧时间对应的控制点参数
				/// </summary>
				/// <param name="time">指定关键帧时间</param>
				/// <returns>控制点参数</returns>
				public virtual EarthView.World.Spatial3D.GlobeControlPoint GetKeyFrameControlPoint(double time)
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(this.NativeObject, ref time);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPoint csObj = new EarthView.World.Spatial3D.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPoint;
						csObj.BindNativeObject(__ptr, "CGlobeControlPoint");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getAnimationIsLooping_CallBack_ev_bool();

				protected getAnimationIsLooping_CallBack_ev_bool m_getAnimationIsLooping_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画是否要进入循环播放状态
				/// </summary>
				/// <returns>动画是否要进入循环播放状态</returns>
				public virtual bool GetAnimationIsLooping_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Function()
				{
					bool csret=GetAnimationIsLooping();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画是否要进入循环播放状态
				/// </summary>
				/// <returns>动画是否要进入循环播放状态</returns>
				public virtual bool GetAnimationIsLooping()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAltitudeMode_CallBack_void_AltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				protected setAltitudeMode_CallBack_void_AltitudeMode m_setAltitudeMode_CallBack_void_AltitudeMode;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_NoVirtual(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetAltitudeMode_NoVirtual(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_NoVirtual(this.NativeObject, altitudeMode);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Function(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					SetAltitudeMode(altitudeMode);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(IntPtr pNativeObject, EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode);

				/// <summary>
				/// 设置高度模式
				/// </summary>
				/// <param name="altitudeMode">高度模式</param>
				public virtual void SetAltitudeMode(EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE altitudeMode)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(this.NativeObject, altitudeMode);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getAltitudeMode_CallBack_AltitudeMode();

				protected getAltitudeMode_CallBack_AltitudeMode m_getAltitudeMode_CallBack_AltitudeMode;

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
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetAltitudeMode_NoVirtual()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}

				protected  int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Function()
				{
					EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE csret=GetAltitudeMode();
					
					return (int)csret;
					
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
				private static extern int EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(IntPtr pNativeObject);

				/// <summary>
				/// 获取高度模式
				/// </summary>
				/// <returns>高度模式</returns>
				public virtual EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE GetAltitudeMode()
				{
					int ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(this.NativeObject);
					
					return (EarthView.World.Spatial3D.Flyparam.ALTITUDEMODE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener(IntPtr ref_globeNodeTrackAnimationListener);

				protected setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener m_setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_globeNodeTrackAnimationListener);

				/// <summary>
				/// 设置动画监听
				/// </summary>
				/// <param name="ref_globeNodeTrackAnimationListener">动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void SetGlobeNodeTrackAnimationListener_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(this.NativeObject, object.Equals(ref_globeNodeTrackAnimationListener, null) ? IntPtr.Zero : ref_globeNodeTrackAnimationListener.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Function(IntPtr ref_globeNodeTrackAnimationListener)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csobj_ref_globeNodeTrackAnimationListener = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_globeNodeTrackAnimationListener.BindNativeObject(ref_globeNodeTrackAnimationListener,"CDynamicGlobeNodeTrackAnimationListener");
					csobj_ref_globeNodeTrackAnimationListener.Delegate = true;
					IClassFactory csobj_ref_globeNodeTrackAnimationListenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_globeNodeTrackAnimationListener.GetCppInstanceTypeName());
					if (csobj_ref_globeNodeTrackAnimationListenerClassFactory != null)
					{
						csobj_ref_globeNodeTrackAnimationListener.Delegate = true;
						csobj_ref_globeNodeTrackAnimationListener = csobj_ref_globeNodeTrackAnimationListenerClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener;
						csobj_ref_globeNodeTrackAnimationListener.BindNativeObject(ref_globeNodeTrackAnimationListener, "CDynamicGlobeNodeTrackAnimationListener");
						csobj_ref_globeNodeTrackAnimationListener.Delegate = true;
					}
					
					SetGlobeNodeTrackAnimationListener(csobj_ref_globeNodeTrackAnimationListener);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject, IntPtr ref_globeNodeTrackAnimationListener);

				/// <summary>
				/// 设置动画监听
				/// </summary>
				/// <param name="ref_globeNodeTrackAnimationListener">动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void SetGlobeNodeTrackAnimationListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject, object.Equals(ref_globeNodeTrackAnimationListener, null) ? IntPtr.Zero : ref_globeNodeTrackAnimationListener.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener();

				protected getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener m_getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener;

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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画监听
				/// </summary>
				/// <returns>动画监听</returns>
				public virtual EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener GetGlobeNodeTrackAnimationListener_NoVirtual()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener;
						csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Function()
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csret=GetGlobeNodeTrackAnimationListener();
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画监听
				/// </summary>
				/// <returns>动画监听</returns>
				public virtual EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener GetGlobeNodeTrackAnimationListener()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListener;
						csObj.BindNativeObject(__ptr, "CDynamicGlobeNodeTrackAnimationListener");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public new bool FrameStarted_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public override bool FrameStarted(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 在所有的渲染目标已经获得渲染命令，渲染窗体被要求跳出缓存之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public new bool FrameRenderingQueued_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 在所有的渲染目标已经获得渲染命令，渲染窗体被要求跳出缓存之前调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public override bool FrameRenderingQueued(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_NoVirtual(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public new bool FrameEnded_NoVirtual(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent_NoVirtual(this.NativeObject, ref evt);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(IntPtr pNativeObject, ref EarthView.World.Graphic.FRAMEEVENT evt);

				/// <summary>
				/// 帧渲染之后被调用
				/// </summary>
				/// <param name="evt"></param>
				/// <returns></returns>
				public override bool FrameEnded(ref EarthView.World.Graphic.FRAMEEVENT evt)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(this.NativeObject, ref evt);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void clearAllGlobeNodeTrackPoints_CallBack_void();

				protected clearAllGlobeNodeTrackPoints_CallBack_void m_clearAllGlobeNodeTrackPoints_CallBack_void;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 清除所有动画关键控制点
				/// </summary>
				public virtual void ClearAllGlobeNodeTrackPoints_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Function()
				{
					ClearAllGlobeNodeTrackPoints();
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(IntPtr pNativeObject);

				/// <summary>
				/// 清除所有动画关键控制点
				/// </summary>
				public virtual void ClearAllGlobeNodeTrackPoints()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte canStart_CallBack_ev_bool();

				protected canStart_CallBack_ev_bool m_canStart_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否可以开始轨迹动画
				/// </summary>
				public virtual bool CanStart_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Function()
				{
					bool csret=CanStart();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否可以开始轨迹动画
				/// </summary>
				public virtual bool CanStart()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte hasRequestCreateAnimation_CallBack_ev_bool();

				protected hasRequestCreateAnimation_CallBack_ev_bool m_hasRequestCreateAnimation_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否发送过创建动画请求
				/// </summary>
				public virtual bool HasRequestCreateAnimation_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Function()
				{
					bool csret=HasRequestCreateAnimation();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否发送过创建动画请求
				/// </summary>
				public virtual bool HasRequestCreateAnimation()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte hasCreatedAnimation_CallBack_ev_bool();

				protected hasCreatedAnimation_CallBack_ev_bool m_hasCreatedAnimation_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 是否已经完成创建动画
				/// </summary>
				public virtual bool HasCreatedAnimation_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Function()
				{
					bool csret=HasCreatedAnimation();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 是否已经完成创建动画
				/// </summary>
				public virtual bool HasCreatedAnimation()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setOnLineModeEnabled_CallBack_void_ev_bool(ref byte enable);

				protected setOnLineModeEnabled_CallBack_void_ev_bool m_setOnLineModeEnabled_CallBack_void_ev_bool;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <param name="enable">是否开启在线</param>
				/// <returns></returns>
				public virtual void SetOnLineModeEnabled_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetOnLineModeEnabled(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <param name="enable">是否开启在线</param>
				/// <returns></returns>
				public virtual void SetOnLineModeEnabled(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getOnLineModeEnabled_CallBack_ev_bool();

				protected getOnLineModeEnabled_CallBack_ev_bool m_getOnLineModeEnabled_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <returns>是否开启在线，如果开启该模式则会定时清除轨迹点，优化内存管理，但是开启该功能后不可以进行轨迹重播功能</returns>
				public virtual bool GetOnLineModeEnabled_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Function()
				{
					bool csret=GetOnLineModeEnabled();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否开启在线模式（优化内存管理，不可以进行动画重播功能）
				/// </summary>
				/// <returns>是否开启在线，如果开启该模式则会定时清除轨迹点，优化内存管理，但是开启该功能后不可以进行轨迹重播功能</returns>
				public virtual bool GetOnLineModeEnabled()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAnimationsetEnabled_CallBack_void_ev_bool(ref byte enable);

				protected setAnimationsetEnabled_CallBack_void_ev_bool m_setAnimationsetEnabled_CallBack_void_ev_bool;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用动画
				/// </summary>
				/// <param name="enable">是否启用动画</param>
				/// <returns></returns>
				public virtual void SetAnimationsetEnabled_NoVirtual(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_NoVirtual(this.NativeObject, ref enable);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Function(ref byte enable)
				{
					bool enableBool = Convert.ToBoolean(enable);
					
					SetAnimationsetEnabled(enableBool);
					
					enable = Convert.ToByte(enableBool);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(IntPtr pNativeObject, ref bool enable);

				/// <summary>
				/// 设置是否启用动画
				/// </summary>
				/// <param name="enable">是否启用动画</param>
				/// <returns></returns>
				public virtual void SetAnimationsetEnabled(bool enable)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(this.NativeObject, ref enable);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte getAnimationsetEnabled_CallBack_ev_bool();

				protected getAnimationsetEnabled_CallBack_ev_bool m_getAnimationsetEnabled_CallBack_ev_bool;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用动画
				/// </summary>
				/// <returns>是否启用动画</returns>
				public virtual bool GetAnimationsetEnabled_NoVirtual()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Function()
				{
					bool csret=GetAnimationsetEnabled();
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获取是否启用动画
				/// </summary>
				/// <returns>是否启用动画</returns>
				public virtual bool GetAnimationsetEnabled()
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setArouseFrequency_CallBack_void_ev_real64(ref double frequency);

				protected setArouseFrequency_CallBack_void_ev_real64 m_setArouseFrequency_CallBack_void_ev_real64;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_NoVirtual(IntPtr pNativeObject, ref double frequency);

				/// <summary>
				/// 设置动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				public virtual void SetArouseFrequency_NoVirtual(double frequency)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_NoVirtual(this.NativeObject, ref frequency);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Function(ref double frequency)
				{
					SetArouseFrequency(frequency);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(IntPtr pNativeObject, ref double frequency);

				/// <summary>
				/// 设置动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <param name="frequency">唤醒频率</param>
				/// <returns></returns>
				public virtual void SetArouseFrequency(double frequency)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(this.NativeObject, ref frequency);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getArouseFrequency_CallBack_ev_real64();

				protected getArouseFrequency_CallBack_ev_real64 m_getArouseFrequency_CallBack_ev_real64;

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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				public virtual double GetArouseFrequency_NoVirtual()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Function()
				{
					double csret=GetArouseFrequency();
					
					return csret;
					
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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(IntPtr pNativeObject);

				/// <summary>
				/// 获取动画处于休眠状态时的自动唤醒频率
				/// </summary>
				/// <returns>唤醒频率</returns>
				public virtual double GetArouseFrequency()
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void forceArouseAnimation_CallBack_void();

				protected forceArouseAnimation_CallBack_void m_forceArouseAnimation_CallBack_void;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 强制唤醒动画
				/// </summary>
				/// <returns></returns>
				public virtual void ForceArouseAnimation_NoVirtual()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Function()
				{
					ForceArouseAnimation();
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(IntPtr pNativeObject);

				/// <summary>
				/// 强制唤醒动画
				/// </summary>
				/// <returns></returns>
				public virtual void ForceArouseAnimation()
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getControlPointMap_CGlobeControlPointMap(IntPtr pNativeObject);

				/// <summary>
				/// 获取控制点容器
				/// </summary>
				/// <returns>控制点容器</returns>
				public EarthView.World.Spatial3D.GlobeControlPointMap GetControlPointMap()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getControlPointMap_CGlobeControlPointMap(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.GlobeControlPointMap csObj = new EarthView.World.Spatial3D.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControlPointMap");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.GlobeControlPointMap;
						csObj.BindNativeObject(__ptr, "CGlobeControlPointMap");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicGlobeNodeTrackAnimation = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation", new DynamicGlobeNodeTrackAnimationClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationProxy", new DynamicGlobeNodeTrackAnimationClassFactory());

				public DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(IntPtr pObject, createAnimation_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(IntPtr pObject, refreshAnimation_CallBack_void_CGlobeControlPointMap pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(IntPtr pObject, setCurrentFrameTime_CallBack_void_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(IntPtr pObject, getCurrentFrameTime_CallBack_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(IntPtr pObject, getCurrentFrameControlPoint_CallBack_CGlobeControlPoint pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(IntPtr pObject, getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(IntPtr pObject, getAnimationIsLooping_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(IntPtr pObject, setAltitudeMode_CallBack_void_AltitudeMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(IntPtr pObject, getAltitudeMode_CallBack_AltitudeMode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(IntPtr pObject, setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(IntPtr pObject, getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(IntPtr pObject, clearAllGlobeNodeTrackPoints_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(IntPtr pObject, canStart_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(IntPtr pObject, hasRequestCreateAnimation_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(IntPtr pObject, hasCreatedAnimation_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(IntPtr pObject, setOnLineModeEnabled_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(IntPtr pObject, getOnLineModeEnabled_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(IntPtr pObject, setAnimationsetEnabled_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(IntPtr pObject, getAnimationsetEnabled_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(IntPtr pObject, setArouseFrequency_CallBack_void_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(IntPtr pObject, getArouseFrequency_CallBack_ev_real64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(IntPtr pObject, forceArouseAnimation_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(IntPtr pObject, createAnimation_CallBack_void_CSceneNode pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void(IntPtr pObject, destoryAnimation_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(IntPtr pObject, frameStarted_CallBack_ev_bool_FrameEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(IntPtr pObject, frameRenderingQueued_CallBack_ev_bool_FrameEvent pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(IntPtr pObject, frameEnded_CallBack_ev_bool_FrameEvent pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createAnimation_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_Function;
						GC.KeepAlive(m_createAnimation_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void(this.NativeObject, m_createAnimation_CallBack_void);
						m_refreshAnimation_CallBack_void_CGlobeControlPointMap = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap_Function;
						GC.KeepAlive(m_refreshAnimation_CallBack_void_CGlobeControlPointMap);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_refreshAnimation_void_CGlobeControlPointMap(this.NativeObject, m_refreshAnimation_CallBack_void_CGlobeControlPointMap);
						m_setCurrentFrameTime_CallBack_void_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64_Function;
						GC.KeepAlive(m_setCurrentFrameTime_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setCurrentFrameTime_void_ev_real64(this.NativeObject, m_setCurrentFrameTime_CallBack_void_ev_real64);
						m_getCurrentFrameTime_CallBack_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64_Function;
						GC.KeepAlive(m_getCurrentFrameTime_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameTime_ev_real64(this.NativeObject, m_getCurrentFrameTime_CallBack_ev_real64);
						m_getCurrentFrameControlPoint_CallBack_CGlobeControlPoint = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint_Function;
						GC.KeepAlive(m_getCurrentFrameControlPoint_CallBack_CGlobeControlPoint);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getCurrentFrameControlPoint_CGlobeControlPoint(this.NativeObject, m_getCurrentFrameControlPoint_CallBack_CGlobeControlPoint);
						m_getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64_Function;
						GC.KeepAlive(m_getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getKeyFrameControlPoint_CGlobeControlPoint_ev_real64(this.NativeObject, m_getKeyFrameControlPoint_CallBack_CGlobeControlPoint_ev_real64);
						m_getAnimationIsLooping_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool_Function;
						GC.KeepAlive(m_getAnimationIsLooping_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationIsLooping_ev_bool(this.NativeObject, m_getAnimationIsLooping_CallBack_ev_bool);
						m_setAltitudeMode_CallBack_void_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode_Function;
						GC.KeepAlive(m_setAltitudeMode_CallBack_void_AltitudeMode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAltitudeMode_void_AltitudeMode(this.NativeObject, m_setAltitudeMode_CallBack_void_AltitudeMode);
						m_getAltitudeMode_CallBack_AltitudeMode = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode_Function;
						GC.KeepAlive(m_getAltitudeMode_CallBack_AltitudeMode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAltitudeMode_AltitudeMode(this.NativeObject, m_getAltitudeMode_CallBack_AltitudeMode);
						m_setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener_Function;
						GC.KeepAlive(m_setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject, m_setGlobeNodeTrackAnimationListener_CallBack_void_CDynamicGlobeNodeTrackAnimationListener);
						m_getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_Function;
						GC.KeepAlive(m_getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.NativeObject, m_getGlobeNodeTrackAnimationListener_CallBack_CDynamicGlobeNodeTrackAnimationListener);
						m_clearAllGlobeNodeTrackPoints_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void_Function;
						GC.KeepAlive(m_clearAllGlobeNodeTrackPoints_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_clearAllGlobeNodeTrackPoints_void(this.NativeObject, m_clearAllGlobeNodeTrackPoints_CallBack_void);
						m_canStart_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool_Function;
						GC.KeepAlive(m_canStart_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_canStart_ev_bool(this.NativeObject, m_canStart_CallBack_ev_bool);
						m_hasRequestCreateAnimation_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool_Function;
						GC.KeepAlive(m_hasRequestCreateAnimation_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasRequestCreateAnimation_ev_bool(this.NativeObject, m_hasRequestCreateAnimation_CallBack_ev_bool);
						m_hasCreatedAnimation_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool_Function;
						GC.KeepAlive(m_hasCreatedAnimation_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_hasCreatedAnimation_ev_bool(this.NativeObject, m_hasCreatedAnimation_CallBack_ev_bool);
						m_setOnLineModeEnabled_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setOnLineModeEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setOnLineModeEnabled_void_ev_bool(this.NativeObject, m_setOnLineModeEnabled_CallBack_void_ev_bool);
						m_getOnLineModeEnabled_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool_Function;
						GC.KeepAlive(m_getOnLineModeEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getOnLineModeEnabled_ev_bool(this.NativeObject, m_getOnLineModeEnabled_CallBack_ev_bool);
						m_setAnimationsetEnabled_CallBack_void_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool_Function;
						GC.KeepAlive(m_setAnimationsetEnabled_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setAnimationsetEnabled_void_ev_bool(this.NativeObject, m_setAnimationsetEnabled_CallBack_void_ev_bool);
						m_getAnimationsetEnabled_CallBack_ev_bool = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool_Function;
						GC.KeepAlive(m_getAnimationsetEnabled_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getAnimationsetEnabled_ev_bool(this.NativeObject, m_getAnimationsetEnabled_CallBack_ev_bool);
						m_setArouseFrequency_CallBack_void_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64_Function;
						GC.KeepAlive(m_setArouseFrequency_CallBack_void_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_setArouseFrequency_void_ev_real64(this.NativeObject, m_setArouseFrequency_CallBack_void_ev_real64);
						m_getArouseFrequency_CallBack_ev_real64 = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64_Function;
						GC.KeepAlive(m_getArouseFrequency_CallBack_ev_real64);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_getArouseFrequency_ev_real64(this.NativeObject, m_getArouseFrequency_CallBack_ev_real64);
						m_forceArouseAnimation_CallBack_void = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void_Function;
						GC.KeepAlive(m_forceArouseAnimation_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_forceArouseAnimation_void(this.NativeObject, m_forceArouseAnimation_CallBack_void);
						m_createAnimation_CallBack_void_CSceneNode = EarthView_World_Spatial3D_CTrackAnimation_createAnimation_void_CSceneNode_Function;
						GC.KeepAlive(m_createAnimation_CallBack_void_CSceneNode);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_createAnimation_void_CSceneNode(this.NativeObject, m_createAnimation_CallBack_void_CSceneNode);
						m_destoryAnimation_CallBack_void = EarthView_World_Spatial3D_CTrackAnimation_destoryAnimation_void_Function;
						GC.KeepAlive(m_destoryAnimation_CallBack_void);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_destoryAnimation_void(this.NativeObject, m_destoryAnimation_CallBack_void);
						m_frameStarted_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameStarted_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameStarted_ev_bool_FrameEvent(this.NativeObject, m_frameStarted_CallBack_ev_bool_FrameEvent);
						m_frameRenderingQueued_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameRenderingQueued_ev_bool_FrameEvent(this.NativeObject, m_frameRenderingQueued_CallBack_ev_bool_FrameEvent);
						m_frameEnded_CallBack_ev_bool_FrameEvent = EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Function;
						GC.KeepAlive(m_frameEnded_CallBack_ev_bool_FrameEvent);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimation_frameEnded_ev_bool_FrameEvent(this.NativeObject, m_frameEnded_CallBack_ev_bool_FrameEvent);
					}
				}
				public override void CreateAnimation(EarthView.World.Graphic.SceneNode ref_node)
				{
					base.CreateAnimation_NoVirtual(ref_node);
				}
				public override void DestoryAnimation()
				{
					base.DestoryAnimation_NoVirtual();
				}
				public static DynamicGlobeNodeTrackAnimation FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicGlobeNodeTrackAnimation obj = baseObj as  DynamicGlobeNodeTrackAnimation;
					if (object.Equals(obj, null))
					{
						obj = new DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicGlobeNodeTrackAnimation");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicGlobeNodeTrackAnimationClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicGlobeNodeTrackAnimation emptyInstance = new DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
