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
			namespace Analysis
			{
				/// <summary>
				/// 三维分析、三维测量算法类,为提高算法精度，均以EarthView::World::Spatial::Math::CVector3点为计算
				/// static函数算法不带高程
				/// 非static函数带高程，需要重载获取高程函数
				/// </summary>
				public class MathUtility3D : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					public MathUtility3D() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMathUtility3DProxy", null);
						if (!"EarthView.World.Spatial3D.Analysis.MathUtility3D".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getAltitudeListener_CallBack_CAltitude3DListener();

					protected getAltitudeListener_CallBack_CAltitude3DListener m_getAltitudeListener_CallBack_CAltitude3DListener;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取高程控件指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>高程控件</returns>
					public virtual EarthView.World.Spatial3D.Analysis.Altitude3DListener GetAltitudeListener_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Analysis.Altitude3DListener csObj = new EarthView.World.Spatial3D.Analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAltitude3DListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Altitude3DListener;
							csObj.BindNativeObject(__ptr, "CAltitude3DListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Function()
					{
						EarthView.World.Spatial3D.Analysis.Altitude3DListener csret=GetAltitudeListener();
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(IntPtr pNativeObject);

					/// <summary>
					/// 获取高程控件指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>高程控件</returns>
					public virtual EarthView.World.Spatial3D.Analysis.Altitude3DListener GetAltitudeListener()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Analysis.Altitude3DListener csObj = new EarthView.World.Spatial3D.Analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CAltitude3DListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Altitude3DListener;
							csObj.BindNativeObject(__ptr, "CAltitude3DListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setAltitudeListener_CallBack_void_CAltitude3DListener(IntPtr ref_pListener);

					protected setAltitudeListener_CallBack_void_CAltitude3DListener m_setAltitudeListener_CallBack_void_CAltitude3DListener;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_pListener);

					/// <summary>
					/// 设置高程控件指针
					/// </summary>
					/// <param name="pListener">高程控件</param>
					/// <returns></returns>
					public virtual void SetAltitudeListener_NoVirtual(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pListener)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_NoVirtual(this.NativeObject, object.Equals(ref_pListener, null) ? IntPtr.Zero : ref_pListener.NativeObject);
						
					}

					protected  void EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Function(IntPtr ref_pListener)
					{
						EarthView.World.Spatial3D.Analysis.Altitude3DListener csobj_ref_pListener = new EarthView.World.Spatial3D.Analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_pListener.BindNativeObject(ref_pListener,"CAltitude3DListener");
						csobj_ref_pListener.Delegate = true;
						IClassFactory csobj_ref_pListenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_pListener.GetCppInstanceTypeName());
						if (csobj_ref_pListenerClassFactory != null)
						{
							csobj_ref_pListener.Delegate = true;
							csobj_ref_pListener = csobj_ref_pListenerClassFactory.Create() as EarthView.World.Spatial3D.Analysis.Altitude3DListener;
							csobj_ref_pListener.BindNativeObject(ref_pListener, "CAltitude3DListener");
							csobj_ref_pListener.Delegate = true;
						}
						
						SetAltitudeListener(csobj_ref_pListener);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(IntPtr pNativeObject, IntPtr ref_pListener);

					/// <summary>
					/// 设置高程控件指针
					/// </summary>
					/// <param name="pListener">高程控件</param>
					/// <returns></returns>
					public virtual void SetAltitudeListener(EarthView.World.Spatial3D.Analysis.Altitude3DListener ref_pListener)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(this.NativeObject, object.Equals(ref_pListener, null) ? IntPtr.Zero : ref_pListener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_getNeedStop_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否中断了计算
					/// </summary>
					/// <returns>是否停止计算</returns>
					public bool GetNeedStop()
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_getNeedStop_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_setNeedStop_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 中断计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					public void SetNeedStop(bool value)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_setNeedStop_void_ev_bool(this.NativeObject, ref value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressV_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取计算进度值
					/// </summary>
					/// <returns>计算进度值</returns>
					public int GetProgressV()
					{
						int ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressV_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressM_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取进度值的最大值
					/// </summary>
					/// <returns>进度值的最大值</returns>
					public int GetProgressM()
					{
						int ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressM_ev_int32(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_setProgressV_void_ev_int32_ev_int32(IntPtr pNativeObject, ref int progressV, ref int progressM);

					/// <summary>
					/// 设置进度值及进度值的最大值
					/// </summary>
					/// <param name="progressV">进度值</param>
					/// <param name="progressM">进度值的最大值</param>
					/// <returns></returns>
					public void SetProgressV(int progressV, int progressM)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_setProgressV_void_ev_int32_ev_int32(this.NativeObject, ref progressV, ref progressM);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real32_ev_real32_ev_real32(float latitude, float longitude, float radius);

					/// <summary>
					/// 由经纬度和半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">半径</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(float latitude, float longitude, float radius)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real32_ev_real32_ev_real32(latitude, longitude, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);

					/// <summary>
					/// 由经纬度和半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">半径</param>
					/// <returns>空间坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 SphericalToCartesian(double latitude, double longitude, double radius)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(latitude, longitude, radius);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Analysis_CMathUtility3D_mod_ev_int32_ev_int32_ev_int32(int i, int n);

					/// <summary>
					/// 计算i对应n范围内的值
					/// </summary>
					/// <param name="i">i的值</param>
					/// <param name="n">n的值</param>
					/// <returns>i对应n范围内的值</returns>
					public static int Mod(int i, int n)
					{
						int ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_mod_ev_int32_ev_int32_ev_int32(i, n);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateInsertNum_void_CVector3_CVector3_ev_real64_ev_uint32_ev_uint32(IntPtr pNativeObject, IntPtr pointA, IntPtr pointB, double givenInterval, ref uint givenInsertNum, ref uint suggestInsertNum);

					/// <summary>
					/// 根据空间两点距离计算采样点个数
					/// </summary>
					/// <param name="pointA">顶点A（经度，纬度，高程）,地理坐标</param>
					/// <param name="pointB">顶点B（经度，纬度，高程）,地理坐标</param>
					/// <param name="givenInterval">给定的插值间隔距离</param>
					/// <param name="givenInsertNum">根据给定的插值间隔距离计算出的插值个数</param>
					/// <param name="suggestInsertNum">建议的插值个数</param>
					public void CalculateInsertNum(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, double givenInterval, ref uint givenInsertNum, ref uint suggestInsertNum)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateInsertNum_void_CVector3_CVector3_ev_real64_ev_uint32_ev_uint32(this.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, givenInterval, ref givenInsertNum, ref suggestInsertNum);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDeasil_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB, double latC, double lonC);

					/// <summary>
					/// 判断三角形三个点顺序是否为顺时针
					/// </summary>
					/// <param name="latA">第一个点纬度</param>
					/// <param name="lonA">第一个点经度</param>
					/// <param name="latB">第二个点纬度</param>
					/// <param name="lonB">第二个点经度</param>
					/// <param name="latC">第三个点纬度</param>
					/// <param name="lonC">第三个点经度</param>
					/// <returns>三个点顺序是否为顺时针</returns>
					public static bool IsDeasil(double latA, double lonA, double latB, double lonB, double latC, double lonC)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDeasil_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB, latC, lonC);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_isInPolygon_ev_bool_VertexList_CVector3(IntPtr inList, IntPtr node);

					/// <summary>
					/// 判断一点是否在多边形内部
					/// </summary>
					/// <param name="list">多边形各个闭合边界顶点(经度,纬度,0)数组的列表</param>
					/// <param name="node">判断的点，地理坐标(经度,纬度,0)</param>
					/// <returns>点是否在多边形内部</returns>
					public static bool IsInPolygon(EarthView.World.Spatial.Math.VertexList inList, EarthView.World.Spatial.Math.Vector3 node)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_isInPolygon_ev_bool_VertexList_CVector3(object.Equals(inList, null) ? IntPtr.Zero : inList.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDiagonal_ev_bool_VertexList_ev_int32_ev_int32(IntPtr list, int i0, int i1);

					/// <summary>
					/// 判断线段是否为多边形内的对角线
					/// </summary>
					/// <param name="list">多边形顶点(经度,纬度,0)列表</param>
					/// <param name="i0">线段的顶点0索引</param>
					/// <param name="i1">线段的顶点1索引</param>
					/// <returns>线段是否为多边形内的对角线</returns>
					public static bool IsDiagonal(ref EarthView.World.Spatial.Math.VertexList list, int i0, int i1)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDiagonal_ev_bool_VertexList_ev_int32_ev_int32(object.Equals(list, null) ? IntPtr.Zero : list.NativeObject, i0, i1);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_isTriangulable_ev_bool_VertexList(IntPtr pointList);

					/// <summary>
					/// 多边形是否可以剖分（非自相交）
					/// </summary>
					/// <param name="pointList">多边形顶点(经度,纬度,0)列表</param>
					/// <returns>多边形是否可以剖分</returns>
					public static bool IsTriangulable(ref EarthView.World.Spatial.Math.VertexList pointList)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_isTriangulable_ev_bool_VertexList(object.Equals(pointList, null) ? IntPtr.Zero : pointList.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial3D_Analysis_CMathUtility3D_getEffectAddPoint_ev_int32_VertexList_CVector3_ev_bool(IntPtr pointList, IntPtr point, byte isMoved);

					/// <summary>
					/// 获取多边形形成过程中，新加点对原来没有永久自相交多边形的影响
					/// </summary>
					/// <param name="pointList">原多边形顶点地理坐标列表</param>
					/// <param name="point">新加点地理坐标</param>
					/// <param name="isMoved">新加的点是否为移动点，即只判断是否自相交</param>
					/// <returns>0:无相交，1:临时自相交，2:永久自相交</returns>
					public static int GetEffectAddPoint(ref EarthView.World.Spatial.Math.VertexList pointList, EarthView.World.Spatial.Math.Vector3 point, bool isMoved)
					{
						int ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_getEffectAddPoint_ev_int32_VertexList_CVector3_ev_bool(object.Equals(pointList, null) ? IntPtr.Zero : pointList.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject, Convert.ToByte(isMoved));
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(IntPtr node0, IntPtr node1, IntPtr node2, IntPtr node3);

					/// <summary>
					/// 判断两条线段是否相交，不包含边界，输入点为经纬度坐标
					/// </summary>
					/// <param name="node0">线段1端点,地理坐标</param>
					/// <param name="node1">线段1端点,地理坐标</param>
					/// <param name="node2">线段2端点,地理坐标</param>
					/// <param name="node3">线段2端点,地理坐标</param>
					/// <returns>两条线段是否相交</returns>
					public static bool CalculateIntersection(EarthView.World.Spatial.Math.Vector3 node0, EarthView.World.Spatial.Math.Vector3 node1, EarthView.World.Spatial.Math.Vector3 node2, EarthView.World.Spatial.Math.Vector3 node3)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(object.Equals(node0, null) ? IntPtr.Zero : node0.NativeObject, object.Equals(node1, null) ? IntPtr.Zero : node1.NativeObject, object.Equals(node2, null) ? IntPtr.Zero : node2.NativeObject, object.Equals(node3, null) ? IntPtr.Zero : node3.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(float f, double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间
					/// 输出对应插值的地理坐标（经度，纬度，0）。       
					/// </summary>
					/// <param name="f"></param>
					/// <param name="latA">首点纬度,角度值</param>
					/// <param name="lonA">首点经度,角度值</param>
					/// <param name="latB">尾点纬度,角度值</param>
					/// <param name="lonB">尾点经度,角度值</param>
					/// <returns>插值的Vector3d（经度，纬度，0）</returns>
					public static EarthView.World.Spatial.Math.Vector3 CalcuInterGeoPositionWithoutAltitude(float f, double latA, double lonA, double latB, double lonB)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(f, latA, lonA, latB, lonB);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterWorldPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(float f, double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间
					/// 输出对应插值的世界坐标。       
					/// </summary>
					/// <param name="f"></param>
					/// <param name="latA">首点纬度,角度值</param>
					/// <param name="lonA">首点经度,角度值</param>
					/// <param name="latB">尾点纬度,角度值</param>
					/// <param name="lonB">尾点经度,角度值</param>
					/// <returns>插值的世界坐标</returns>
					public static EarthView.World.Spatial.Math.Vector3 CalcuInterWorldPositionWithoutAltitude(float f, double latA, double lonA, double latB, double lonB)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterWorldPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(f, latA, lonA, latB, lonB);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPosition_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, float f, double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 计算两地理坐标点间的任一点
					/// </summary>
					/// <param name="f">在线段间位置的百分比</param>
					/// <param name="latA">点A纬度</param>
					/// <param name="lonA">点A经度</param>
					/// <param name="latB">点B纬度</param>
					/// <param name="lonB">点B经度</param>
					/// <returns>点坐标</returns>
					public EarthView.World.Spatial.Math.Vector3 CalcuInterGeoPosition(float f, double latA, double lonA, double latB, double lonB)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPosition_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, f, latA, lonA, latB, lonB);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 给定两点经纬度计算方位角（正北方向偏角）
					/// </summary>
					/// <param name="latA">A点纬度,角度值</param>
					/// <param name="lonA">A点经度,角度值</param>
					/// <param name="latB">B点纬度,角度值</param>
					/// <param name="lonB">B点经度,角度值</param>
					/// <returns>方位角,弧度制</returns>
					public static double Azimuth(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);

					/// <summary>
					/// 由两点间的经纬度计算出两点的圆心的夹角
					/// </summary>
					/// <param name="latA">第一点的纬度，角度值</param>
					/// <param name="lonA">第一点的经度，角度值</param>
					/// <param name="latB">第二点的纬度，角度值</param>
					/// <param name="lonB">第二点的经度，角度值</param>
					/// <returns>两点间圆心角的大小，角度值</returns>
					public static double ApproxAngularDistance(double latA, double lonA, double latB, double lonB)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latA, lonA, latB, lonB);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineStraightMeasure_ev_real64_CVector3_CVector3(IntPtr pointStart, IntPtr pointEnd);

					/// <summary>
					/// 计算两世界坐标点之间的直线距离
					/// </summary>
					/// <param name="pointStart">顶点（世界坐标）</param>
					/// <param name="pointEnd">顶点（世界坐标）</param>
					/// <returns>直线距离</returns>
					public static double LineStraightMeasure(EarthView.World.Spatial.Math.Vector3 pointStart, EarthView.World.Spatial.Math.Vector3 pointEnd)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineStraightMeasure_ev_real64_CVector3_CVector3(object.Equals(pointStart, null) ? IntPtr.Zero : pointStart.NativeObject, object.Equals(pointEnd, null) ? IntPtr.Zero : pointEnd.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineProjectMeasure_ev_real64_CVector3_CVector3(IntPtr point0, IntPtr point1);

					/// <summary>
					/// 计算两点的投影距离，球体大圆的一部分
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，0）</param>
					/// <param name="point1">顶点（经度，纬度，0）</param>
					/// <returns>投影距离</returns>
					public static double LineProjectMeasure(EarthView.World.Spatial.Math.Vector3 point0, EarthView.World.Spatial.Math.Vector3 point1)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineProjectMeasure_ev_real64_CVector3_CVector3(object.Equals(point0, null) ? IntPtr.Zero : point0.NativeObject, object.Equals(point1, null) ? IntPtr.Zero : point1.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3(IntPtr pNativeObject, IntPtr pointA, IntPtr pointB);

					/// <summary>
					/// 计算两地理坐标点间的贴地距离，不插值
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，高程）</param>
					/// <param name="point1">顶点（经度，纬度，高程）</param>
					/// <returns>贴地距离</returns>
					public double GeoLineDistanceMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3(this.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3_ev_int32(IntPtr pNativeObject, IntPtr pointA, IntPtr pointB, int number);

					/// <summary>
					/// 计算两地理坐标点间的贴地距离，可控制插值个数
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，高程）,地理坐标</param>
					/// <param name="point1">顶点（经度，纬度，高程）,地理坐标</param>
					/// <param name="num">拆分线段的插值个数,1表示两点间距离</param>
					/// <returns>贴地距离</returns>
					public double GeoLineDistanceMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, int number)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3_ev_int32(this.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, number);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangulate_ev_bool_VertexList_VertexList(IntPtr nodeList, IntPtr pointList);

					/// <summary>
					/// 三角剖分函数
					/// </summary>
					/// <param name="NodeList">多边形顶点列表，地理坐标(经度,纬度,0)</param>
					/// <param name="PointList">拆分后各三角形顶点列表(地理坐标)</param>
					/// <returns>是否剖分成功</returns>
					public static bool Triangulate(EarthView.World.Spatial.Math.VertexList nodeList, ref EarthView.World.Spatial.Math.VertexList pointList)
					{
						byte ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangulate_ev_bool_VertexList_VertexList(object.Equals(nodeList, null) ? IntPtr.Zero : nodeList.NativeObject, object.Equals(pointList, null) ? IntPtr.Zero : pointList.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriangle2GeoPosition_void_ev_int32_VertexList_ev_bool_VertexList_ev_int32_ev_int32(IntPtr pNativeObject, int num, IntPtr nodeList, byte isGetAlti, IntPtr outPoints, ref int maxAltiIndex, ref int minAltiIndex);

					/// <summary>
					/// 分割三角形为若干小相似三角形，输出分割后小三角形各顶点
					/// </summary>
					/// <param name="num">每条边要分割的段数</param>
					/// <param name="nodeList">三角形三个顶点（经度，纬度，高程）</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">地理坐标列表（经度，纬度，高程）</param>
					/// <param name="maxAltiIndex">最大高程索引</param>
					/// <param name="minAltiIndex">最小高程索引</param>
					/// <returns></returns>
					public void SplitTriangle2GeoPosition(int num, EarthView.World.Spatial.Math.VertexList nodeList, bool isGetAlti, ref  EarthView.World.Spatial.Math.VertexList outPoints, ref int maxAltiIndex, ref int minAltiIndex)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriangle2GeoPosition_void_ev_int32_VertexList_ev_bool_VertexList_ev_int32_ev_int32(this.NativeObject, num, object.Equals(nodeList, null) ? IntPtr.Zero : nodeList.NativeObject, Convert.ToByte(isGetAlti), object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject, ref maxAltiIndex, ref minAltiIndex);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriang2Indices_void_ev_int32_IntVector(IntPtr pNativeObject, int num, IntPtr indices);

					/// <summary>
					/// 三角形按照确定数目拆分后为所有小三角形建立索引，
					/// 与splitTriangle2GeoPosition配套使用
					/// </summary>
					/// <param name="num">每条边拆分的个数</param>
					/// <param name="indices">索引数组</param>
					public void SplitTriang2Indices(int num, ref  EarthView.World.Core.IntVector indices)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriang2Indices_void_ev_int32_IntVector(this.NativeObject, num, object.Equals(indices, null) ? IntPtr.Zero : indices.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleAreaMeasure_ev_real64_CVector3_CVector3_CVector3(IntPtr pointA, IntPtr pointB, IntPtr pointC);

					/// <summary>
					/// 直接计算三角形平面面积，不进行拆分
					/// </summary>
					/// <param name="pointA">三角形顶点（世界坐标）</param>
					/// <param name="pointB">三角形顶点（世界坐标）</param>
					/// <param name="pointC">三角形顶点（世界坐标）</param>
					/// <returns>三角形平面面积</returns>
					public static double TriangleAreaMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, EarthView.World.Spatial.Math.Vector3 pointC)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleAreaMeasure_ev_real64_CVector3_CVector3_CVector3(object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, object.Equals(pointC, null) ? IntPtr.Zero : pointC.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3(IntPtr pointA, IntPtr pointB, IntPtr pointC);

					/// <summary>
					/// 计算三角形投影到球体上的面积
					/// 根据范围的不同判断是否需要使用球面面积计算或者平面面积计算
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <returns>投影面积</returns>
					public static double TriangleProjectMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, EarthView.World.Spatial.Math.Vector3 pointC)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3(object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, object.Equals(pointC, null) ? IntPtr.Zero : pointC.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleSurfaceMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(IntPtr pNativeObject, IntPtr pointA, IntPtr pointB, IntPtr pointC, int insertNum);

					/// <summary>
					///  计算三角形区域地表贴地面积,可控制计算精度
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <param name="insertNum">每条边的插值个数</param>
					/// <returns>三角形区域地表贴地面积</returns>
					public double SpiltTriangleSurfaceMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, EarthView.World.Spatial.Math.Vector3 pointC, int insertNum)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleSurfaceMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(this.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, object.Equals(pointC, null) ? IntPtr.Zero : pointC.NativeObject, insertNum);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(IntPtr pNativeObject, IntPtr pointA, IntPtr pointB, IntPtr pointC, int insertNum);

					/// <summary>
					///  计算三角形区域地表投影面积,可控制计算精度
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <param name="insertNum">每条边的插值个数</param>
					/// <returns>三角形区域地表投影面积</returns>
					public double SpiltTriangleProjectMeasure(EarthView.World.Spatial.Math.Vector3 pointA, EarthView.World.Spatial.Math.Vector3 pointB, EarthView.World.Spatial.Math.Vector3 pointC, int insertNum)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(this.NativeObject, object.Equals(pointA, null) ? IntPtr.Zero : pointA.NativeObject, object.Equals(pointB, null) ? IntPtr.Zero : pointB.NativeObject, object.Equals(pointC, null) ? IntPtr.Zero : pointC.NativeObject, insertNum);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial3D_Analysis_CMathUtility3D_polygonSurfaceMeasure_ev_real64_VertexList(IntPtr pNativeObject, IntPtr pointList);

					/// <summary>
					/// 多边形区域地表面积
					/// </summary>
					/// <param name="pointList">多边形顶点列表（经度，纬度，0）</param>
					/// <returns>地表面积，-1表示无法完成计算</returns>
					public double PolygonSurfaceMeasure(ref EarthView.World.Spatial.Math.VertexList pointList)
					{
						double ret=EarthView_World_Spatial3D_Analysis_CMathUtility3D_polygonSurfaceMeasure_ev_real64_VertexList(this.NativeObject, object.Equals(pointList, null) ? IntPtr.Zero : pointList.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2GeoPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(IntPtr pNativeObject, int number, double latA, double lonA, double latB, double lonB, byte isGetAlti, IntPtr outPoints);

					/// <summary>
					/// 线段内插值，分成若干段，输出拆分后所有点的地理坐标
					/// </summary>
					/// <param name="number">插值个数</param>
					/// <param name="latA">线段端点1纬度,角度值</param>
					/// <param name="lonA">线段端点1经度,角度值</param>
					/// <param name="latB">线段端点2纬度,角度值</param>
					/// <param name="lonB">线段端点2经度,角度值</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">拆分后所有点的地理坐标（经度，纬度，高程）的数组</param>
					/// <returns></returns>
					public void SplitLine2GeoPosition(int number, double latA, double lonA, double latB, double lonB, bool isGetAlti, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2GeoPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(this.NativeObject, number, latA, lonA, latB, lonB, Convert.ToByte(isGetAlti), object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2WorldPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(IntPtr pNativeObject, int number, double latA, double lonA, double latB, double lonB, byte isGetAlti, IntPtr outPoints);

					/// <summary>
					/// 线段内插值，分成若干段，输出拆分后所有点的世界坐标
					/// </summary>
					/// <param name="number">拆分段数</param>
					/// <param name="latA">线段端点1纬度,角度值</param>
					/// <param name="lonA">线段端点1经度,角度值</param>
					/// <param name="latB">线段端点2纬度,角度值</param>
					/// <param name="lonB">线段端点2经度,角度值</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">拆分后所有点的世界坐标（x,y,高程）的数组</param>
					/// <returns></returns>
					public void SplitLine2WorldPosition(int number, double latA, double lonA, double latB, double lonB, bool isGetAlti, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2WorldPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(this.NativeObject, number, latA, lonA, latB, lonB, Convert.ToByte(isGetAlti), object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineGeoPosition_void_VertexList_ev_int32_ev_bool_VertexList(IntPtr pNativeObject, IntPtr inpoints, int insertNum, byte isGetAlti, IntPtr outPoints);

					/// <summary>
					/// 折线插值，分成若干段，输出拆分后所有点的地理坐标
					/// </summary>
					/// <param name="inpoints">输入点列表</param>
					/// <param name="insertNum">插值个数</param>
					/// <param name="isGetAlti">是否获取高度</param>
					/// <param name="outpoints">输出点列表</param>
					public void SplitPolylineGeoPosition(EarthView.World.Spatial.Math.VertexList inpoints, int insertNum, bool isGetAlti, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineGeoPosition_void_VertexList_ev_int32_ev_bool_VertexList(this.NativeObject, object.Equals(inpoints, null) ? IntPtr.Zero : inpoints.NativeObject, insertNum, Convert.ToByte(isGetAlti), object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineWorPosition_void_VertexList_ev_int32_ev_bool_VertexList(IntPtr pNativeObject, IntPtr inpoints, int insertNum, byte isGetAlti, IntPtr outPoints);

					/// <summary>
					/// 折线插值，分成若干段，输出拆分后所有点的世界坐标
					/// </summary>
					/// <param name="inpoints">输入点列表</param>
					/// <param name="insertNum">插值个数</param>
					/// <param name="isGetAlti">是否获取高度</param>
					/// <param name="outpoints">输出点列表</param>
					public void SplitPolylineWorPosition(EarthView.World.Spatial.Math.VertexList inpoints, int insertNum, bool isGetAlti, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineWorPosition_void_VertexList_ev_int32_ev_bool_VertexList(this.NativeObject, object.Equals(inpoints, null) ? IntPtr.Zero : inpoints.NativeObject, insertNum, Convert.ToByte(isGetAlti), object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2GeoPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(IntPtr pNativeObject, double lati, double longi, double radius, int insertNum, IntPtr outPoints);

					/// <summary>
					/// 给定中心点和半径得出一个圆形区域的地理坐标链表
					/// </summary>
					/// <param name="lati">中心点纬度,角度值</param>
					/// <param name="longi">中心点经度,角度值</param>
					/// <param name="radius">半径,单位：米</param>
					/// <param name="insertNum">圆弧上分成的段数</param>
					/// <param name="outPoints">圆弧上的点的集合,地理坐标(经度，纬度，高程)</param>
					public void SplitCircle2GeoPosition(double lati, double longi, double radius, int insertNum, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2GeoPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(this.NativeObject, lati, longi, radius, insertNum, object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2WorldPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(IntPtr pNativeObject, double lati, double longi, double radius, int insertNum, IntPtr outPoints);

					/// <summary>
					/// 给定中心点和半径得出一个圆形区域的世界坐标链表
					/// </summary>
					/// <param name="lati">中心点纬度,角度值</param>
					/// <param name="longi">中心点经度,角度值</param>
					/// <param name="radius">半径,单位：米</param>
					/// <param name="insertNum">圆弧上分成的段数</param>
					/// <param name="outPoints">圆弧上的点的集合,世界坐标</param>
					public void SplitCircle2WorldPosition(double lati, double longi, double radius, int insertNum, ref  EarthView.World.Spatial.Math.VertexList outPoints)
					{
						EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2WorldPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(this.NativeObject, lati, longi, radius, insertNum, object.Equals(outPoints, null) ? IntPtr.Zero : outPoints.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_d.so");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.so");

						#else 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_d.dll");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject.so");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.so");

						#else 
							private static bool bLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject.dll");
							private static bool csbLoadMathUtility3D = LoadDll.Load("EV_Spatial3DAnalysisObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMathUtility3D", new MathUtility3DClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMathUtility3DProxy", new MathUtility3DClassFactory());

					public MathUtility3D(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(IntPtr pObject, getAltitudeListener_CallBack_CAltitude3DListener pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DAnalysisObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(IntPtr pObject, setAltitudeListener_CallBack_void_CAltitude3DListener pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getAltitudeListener_CallBack_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Function;
							GC.KeepAlive(m_getAltitudeListener_CallBack_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(this.NativeObject, m_getAltitudeListener_CallBack_CAltitude3DListener);
							m_setAltitudeListener_CallBack_void_CAltitude3DListener = EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Function;
							GC.KeepAlive(m_setAltitudeListener_CallBack_void_CAltitude3DListener);
							EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(this.NativeObject, m_setAltitudeListener_CallBack_void_CAltitude3DListener);
						}
					}
					public static MathUtility3D FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MathUtility3D obj = baseObj as  MathUtility3D;
						if (object.Equals(obj, null))
						{
							obj = new MathUtility3D(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMathUtility3D");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MathUtility3DClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MathUtility3D emptyInstance = new MathUtility3D(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
