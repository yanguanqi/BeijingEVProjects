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
			namespace Display
			{
				/// <summary>
				/// 空间坐标转换基类
				/// </summary>
				public class Ispatialtransformer : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isValid_CallBack_ev_bool();

					protected isValid_CallBack_ev_bool m_isValid_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 检测转换器是否可用
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果可用,返回true,反之则否</returns>
					public virtual bool IsValid_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Function()
					{
						bool csret=IsValid();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 检测转换器是否可用
					/// </summary>
					/// <param name=" "></param>
					/// <returns>如果可用,返回true,反之则否</returns>
					public virtual bool IsValid()
					{
						byte ret=EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getSpatialReference_CallBack_ISpatialReference();

					protected getSpatialReference_CallBack_ISpatialReference m_getSpatialReference_CallBack_ISpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考信息
					/// </summary>
					/// <returns>返回空间参考信息</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Function()
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csret=GetSpatialReference();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(IntPtr pNativeObject);

					/// <summary>
					/// 获取空间参考信息
					/// </summary>
					/// <returns>返回空间参考信息</returns>
					public virtual EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setSpatialReference_CallBack_void_ISpatialReference(IntPtr sr);

					protected setSpatialReference_CallBack_void_ISpatialReference m_setSpatialReference_CallBack_void_ISpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr sr);

					/// <summary>
					///设置空间参考信息
					/// </summary>
					/// <param name="sr">空间参考信息</param>
					/// <returns></returns>
					public virtual void SetSpatialReference_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference sr)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_NoVirtual(this.NativeObject, object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Function(IntPtr sr)
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_sr = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_sr.BindNativeObject(sr,"ISpatialReference");
						csobj_sr.Delegate = true;
						IClassFactory csobj_srClassFactory = GlobalClassFactoryMap.Get(csobj_sr.GetCppInstanceTypeName());
						if (csobj_srClassFactory != null)
						{
							csobj_sr.Delegate = true;
							csobj_sr = csobj_srClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_sr.BindNativeObject(sr, "ISpatialReference");
							csobj_sr.Delegate = true;
						}
						
						SetSpatialReference(csobj_sr);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(IntPtr pNativeObject, IntPtr sr);

					/// <summary>
					///设置空间参考信息
					/// </summary>
					/// <param name="sr">空间参考信息</param>
					/// <returns></returns>
					public virtual void SetSpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference sr)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(this.NativeObject, object.Equals(sr, null) ? IntPtr.Zero : sr.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDataExtent_CallBack_IEnvelope();

					protected getDataExtent_CallBack_IEnvelope m_getDataExtent_CallBack_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图范围
					/// </summary>
					/// <returns>包围盒对象</returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetDataExtent_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Function()
					{
						EarthView.World.Spatial.Geometry.Ienvelope csret=GetDataExtent();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图范围
					/// </summary>
					/// <returns>包围盒对象</returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetDataExtent()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getGeographicDataExtent_CallBack_IEnvelope();

					protected getGeographicDataExtent_CallBack_IEnvelope m_getGeographicDataExtent_CallBack_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图范围(经纬度范围)
					/// </summary>
					/// <returns>包围盒对象</returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetGeographicDataExtent_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Function()
					{
						EarthView.World.Spatial.Geometry.Ienvelope csret=GetGeographicDataExtent();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// 获取地图范围(经纬度范围)
					/// </summary>
					/// <returns>包围盒对象</returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetGeographicDataExtent()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setDataExtent_CallBack_void_IEnvelope(IntPtr extent);

					protected setDataExtent_CallBack_void_IEnvelope m_setDataExtent_CallBack_void_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr extent);

					/// <summary>
					/// 设置地图范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					public virtual void SetDataExtent_NoVirtual(EarthView.World.Spatial.Geometry.Ienvelope extent)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_NoVirtual(this.NativeObject, object.Equals(extent, null) ? IntPtr.Zero : extent.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Function(IntPtr extent)
					{
						EarthView.World.Spatial.Geometry.Ienvelope csobj_extent = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_extent.BindNativeObject(extent,"IEnvelope");
						csobj_extent.Delegate = true;
						IClassFactory csobj_extentClassFactory = GlobalClassFactoryMap.Get(csobj_extent.GetCppInstanceTypeName());
						if (csobj_extentClassFactory != null)
						{
							csobj_extent.Delegate = true;
							csobj_extent = csobj_extentClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_extent.BindNativeObject(extent, "IEnvelope");
							csobj_extent.Delegate = true;
						}
						
						SetDataExtent(csobj_extent);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(IntPtr pNativeObject, IntPtr extent);

					/// <summary>
					/// 设置地图范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					public virtual void SetDataExtent(EarthView.World.Spatial.Geometry.Ienvelope extent)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(this.NativeObject, object.Equals(extent, null) ? IntPtr.Zero : extent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getDeviceExtent_CallBack_IEnvelope();

					protected getDeviceExtent_CallBack_IEnvelope m_getDeviceExtent_CallBack_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取设备范围
					/// </summary>
					/// <param name=" "></param>
					/// <returns>包围盒对象 </returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetDeviceExtent_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Function()
					{
						EarthView.World.Spatial.Geometry.Ienvelope csret=GetDeviceExtent();
						
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
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(IntPtr pNativeObject);

					/// <summary>
					/// 获取设备范围
					/// </summary>
					/// <param name=" "></param>
					/// <returns>包围盒对象 </returns>
					public virtual EarthView.World.Spatial.Geometry.Ienvelope GetDeviceExtent()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csObj = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IEnvelope");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csObj.BindNativeObject(__ptr, "IEnvelope");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setDeviceExtent_CallBack_void_IEnvelope(IntPtr extent);

					protected setDeviceExtent_CallBack_void_IEnvelope m_setDeviceExtent_CallBack_void_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr extent);

					/// <summary>
					/// 设置设备范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					public virtual void SetDeviceExtent_NoVirtual(EarthView.World.Spatial.Geometry.Ienvelope extent)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_NoVirtual(this.NativeObject, object.Equals(extent, null) ? IntPtr.Zero : extent.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Function(IntPtr extent)
					{
						EarthView.World.Spatial.Geometry.Ienvelope csobj_extent = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_extent.BindNativeObject(extent,"IEnvelope");
						csobj_extent.Delegate = true;
						IClassFactory csobj_extentClassFactory = GlobalClassFactoryMap.Get(csobj_extent.GetCppInstanceTypeName());
						if (csobj_extentClassFactory != null)
						{
							csobj_extent.Delegate = true;
							csobj_extent = csobj_extentClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_extent.BindNativeObject(extent, "IEnvelope");
							csobj_extent.Delegate = true;
						}
						
						SetDeviceExtent(csobj_extent);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(IntPtr pNativeObject, IntPtr extent);

					/// <summary>
					/// 设置设备范围
					/// </summary>
					/// <param name=" extent">包围盒对象</param>
					/// <returns> </returns>
					public virtual void SetDeviceExtent(EarthView.World.Spatial.Geometry.Ienvelope extent)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(this.NativeObject, object.Equals(extent, null) ? IntPtr.Zero : extent.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getRotation_CallBack_ev_real64();

					protected getRotation_CallBack_ev_real64 m_getRotation_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <returns>返回旋转角度</returns>
					public virtual double GetRotation_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Function()
					{
						double csret=GetRotation();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <returns>返回旋转角度</returns>
					public virtual double GetRotation()
					{
						double ret=EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void rotate_CallBack_void_ev_real64(double angle);

					protected rotate_CallBack_void_ev_real64 m_rotate_CallBack_void_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_NoVirtual(IntPtr pNativeObject, double angle);

					/// <summary>
					///将坐标进行旋转
					/// </summary>
					/// <param name="angle">旋转角度</param>
					/// <returns></returns>
					public virtual void Rotate_NoVirtual(double angle)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_NoVirtual(this.NativeObject, angle);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Function(double angle)
					{
						Rotate(angle);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(IntPtr pNativeObject, double angle);

					/// <summary>
					///将坐标进行旋转
					/// </summary>
					/// <param name="angle">旋转角度</param>
					/// <returns></returns>
					public virtual void Rotate(double angle)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(this.NativeObject, angle);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64(double angle, double x, double y);

					protected rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64 m_rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double angle, double x, double y);

					/// <summary>
					/// 旋转位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" x">旋转的x坐标</param>
					/// <param name=" y ">旋转的y坐标</param>
					/// <returns> </returns>
					public virtual void RotateAt_NoVirtual(double angle, double x, double y)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, angle, x, y);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Function(double angle, double x, double y)
					{
						RotateAt(angle, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double angle, double x, double y);

					/// <summary>
					/// 旋转位置
					/// </summary>
					/// <param name=" angle ">旋转的角度</param>
					/// <param name=" x">旋转的x坐标</param>
					/// <param name=" y ">旋转的y坐标</param>
					/// <returns> </returns>
					public virtual void RotateAt(double angle, double x, double y)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(this.NativeObject, angle, x, y);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getCurrentScale_CallBack_ev_real64();

					protected getCurrentScale_CallBack_ev_real64 m_getCurrentScale_CallBack_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取当前比例尺
					/// </summary>
					/// <returns>返回当前比例尺</returns>
					public virtual double GetCurrentScale_NoVirtual()
					{
						double ret=EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Function()
					{
						double csret=GetCurrentScale();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(IntPtr pNativeObject);

					/// <summary>
					/// 获取当前比例尺
					/// </summary>
					/// <returns>返回当前比例尺</returns>
					public virtual double GetCurrentScale()
					{
						double ret=EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setCurrentScale_CallBack_void_ev_real64(double scale);

					protected setCurrentScale_CallBack_void_ev_real64 m_setCurrentScale_CallBack_void_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_NoVirtual(IntPtr pNativeObject, double scale);

					/// <summary>
					///设置当前比例尺
					/// </summary>
					/// <param name="scale">当前比例尺</param>
					/// <returns></returns>
					public virtual void SetCurrentScale_NoVirtual(double scale)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_NoVirtual(this.NativeObject, scale);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Function(double scale)
					{
						SetCurrentScale(scale);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(IntPtr pNativeObject, double scale);

					/// <summary>
					///设置当前比例尺
					/// </summary>
					/// <param name="scale">当前比例尺</param>
					/// <returns></returns>
					public virtual void SetCurrentScale(double scale)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(this.NativeObject, scale);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64(double scale, double x, double y);

					protected setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64 m_setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double scale, double x, double y);

					/// <summary>
					///  设置当前比例及位置
					/// </summary>
					/// <param name="scale">设置比例的值</param>
					/// <param name=" x">设置x坐标</param>
					/// <param name=" y ">设置y坐标</param>
					/// <returns> </returns>
					public virtual void SetCurrentScale_NoVirtual(double scale, double x, double y)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, scale, x, y);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Function(double scale, double x, double y)
					{
						SetCurrentScale(scale, x, y);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double scale, double x, double y);

					/// <summary>
					///  设置当前比例及位置
					/// </summary>
					/// <param name="scale">设置比例的值</param>
					/// <param name=" x">设置x坐标</param>
					/// <param name=" y ">设置y坐标</param>
					/// <returns> </returns>
					public virtual void SetCurrentScale(double scale, double x, double y)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(this.NativeObject, scale, x, y);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getCenter_CallBack_void_ev_real64_ev_real64(IntPtr cx, IntPtr cy);

					protected getCenter_CallBack_void_ev_real64_ev_real64 m_getCenter_CallBack_void_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr cx, IntPtr cy);

					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					public virtual void GetCenter_NoVirtual(IntPtr cx, IntPtr cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_NoVirtual(this.NativeObject, cx, cy);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Function(IntPtr cx, IntPtr cy)
					{
						GetCenter(cx, cy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr cx, IntPtr cy);

					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					public virtual void GetCenter(IntPtr cx, IntPtr cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(this.NativeObject, cx, cy);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getGeographicCenter_CallBack_void_ev_real64_ev_real64(IntPtr cx, IntPtr cy);

					protected getGeographicCenter_CallBack_void_ev_real64_ev_real64 m_getGeographicCenter_CallBack_void_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr cx, IntPtr cy);

					/// <summary>
					/// 获取中心点(地理坐标系下)
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					public virtual void GetGeographicCenter_NoVirtual(IntPtr cx, IntPtr cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_NoVirtual(this.NativeObject, cx, cy);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Function(IntPtr cx, IntPtr cy)
					{
						GetGeographicCenter(cx, cy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr cx, IntPtr cy);

					/// <summary>
					/// 获取中心点(地理坐标系下)
					/// </summary>
					/// <param name="cx">输出：中心点x坐标</param>
					/// <param name="cy">输出：中心点y坐标</param>
					/// <returns>返回当前比例尺</returns>
					public virtual void GetGeographicCenter(IntPtr cx, IntPtr cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(this.NativeObject, cx, cy);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setCenter_CallBack_void_ev_real64_ev_real64(double cx, double cy);

					protected setCenter_CallBack_void_ev_real64_ev_real64 m_setCenter_CallBack_void_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double cx, double cy);

					/// <summary>
					///设置中心点
					/// </summary>
					/// <param name="x">中心点x坐标</param>
					/// <param name="y">中心点y坐标</param>
					/// <returns></returns>
					public virtual void SetCenter_NoVirtual(double cx, double cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_NoVirtual(this.NativeObject, cx, cy);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Function(double cx, double cy)
					{
						SetCenter(cx, cy);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(IntPtr pNativeObject, double cx, double cy);

					/// <summary>
					///设置中心点
					/// </summary>
					/// <param name="x">中心点x坐标</param>
					/// <param name="y">中心点y坐标</param>
					/// <returns></returns>
					public virtual void SetCenter(double cx, double cy)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(this.NativeObject, cx, cy);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void translate_CallBack_void_ev_real64_ev_real64(double offsetX, double offsetY);

					protected translate_CallBack_void_ev_real64_ev_real64 m_translate_CallBack_void_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double offsetX, double offsetY);

					/// <summary>
					///平移
					/// </summary>
					/// <param name="offsetX">x方向偏移量</param>
					/// <param name="offsetY">y方向偏移量</param>
					/// <returns></returns>
					public virtual void Translate_NoVirtual(double offsetX, double offsetY)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_NoVirtual(this.NativeObject, offsetX, offsetY);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Function(double offsetX, double offsetY)
					{
						Translate(offsetX, offsetY);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(IntPtr pNativeObject, double offsetX, double offsetY);

					/// <summary>
					///平移
					/// </summary>
					/// <param name="offsetX">x方向偏移量</param>
					/// <param name="offsetY">y方向偏移量</param>
					/// <returns></returns>
					public virtual void Translate(double offsetX, double offsetY)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(this.NativeObject, offsetX, offsetY);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void reset_CallBack_void();

					protected reset_CallBack_void m_reset_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///重置
					/// </summary>
					/// <returns></returns>
					public virtual void Reset_NoVirtual()
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Function()
					{
						Reset();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(IntPtr pNativeObject);

					/// <summary>
					///重置
					/// </summary>
					/// <returns></returns>
					public virtual void Reset()
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32(IntPtr x, IntPtr y, uint count);

					protected toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 m_toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将地图坐标转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					public virtual void ToDevicePoints_NoVirtual(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(this.NativeObject, x, y, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Function(IntPtr x, IntPtr y, uint count)
					{
						ToDevicePoints(x, y, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将地图坐标转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					public virtual void ToDevicePoints(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, x, y, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32(IntPtr x, IntPtr y, uint count);

					protected toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 m_toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将设备坐标转换为地图坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					public virtual void ToMapPoints_NoVirtual(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(this.NativeObject, x, y, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Function(IntPtr x, IntPtr y, uint count)
					{
						ToMapPoints(x, y, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将设备坐标转换为地图坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					public virtual void ToMapPoints(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, x, y, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32(IntPtr x, IntPtr y, uint count);

					protected geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 m_geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将地图坐标（地理坐标：经纬度）转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					public virtual void GeographicToDevicePoints_NoVirtual(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(this.NativeObject, x, y, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Function(IntPtr x, IntPtr y, uint count)
					{
						GeographicToDevicePoints(x, y, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将地图坐标（地理坐标：经纬度）转换为设备坐标
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为设备点的数目</param>
					/// <returns></returns>
					public virtual void GeographicToDevicePoints(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, x, y, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32(IntPtr x, IntPtr y, uint count);

					protected deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 m_deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将设备坐标转换为地图坐标(地理坐标：经纬度)
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					public virtual void DeviceToGeographicPoints_NoVirtual(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_NoVirtual(this.NativeObject, x, y, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Function(IntPtr x, IntPtr y, uint count)
					{
						DeviceToGeographicPoints(x, y, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pNativeObject, IntPtr x, IntPtr y, uint count);

					/// <summary>
					///将设备坐标转换为地图坐标(地理坐标：经纬度)
					/// </summary>
					/// <param name="offsetX">输入输出：x坐标</param>
					/// <param name="offsetY">输入输出：y坐标</param>
					/// <param name="count">转换为地图点的数目</param>
					/// <returns></returns>
					public virtual void DeviceToGeographicPoints(IntPtr x, IntPtr y, uint count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, x, y, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toDeviceLength_CallBack_void_ev_real64_int(IntPtr len, int count);

					protected toDeviceLength_CallBack_void_ev_real64_int m_toDeviceLength_CallBack_void_ev_real64_int;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_NoVirtual(IntPtr pNativeObject, IntPtr len, int count);

					/// <summary>
					///  转换为设备的长度
					/// </summary>
					/// <param name="len">设备的长度</param>
					/// <param name="count ">转换为设备长度的数目</param>
					/// <returns> </returns>
					public virtual void ToDeviceLength_NoVirtual(IntPtr len, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_NoVirtual(this.NativeObject, len, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Function(IntPtr len, int count)
					{
						ToDeviceLength(len, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(IntPtr pNativeObject, IntPtr len, int count);

					/// <summary>
					///  转换为设备的长度
					/// </summary>
					/// <param name="len">设备的长度</param>
					/// <param name="count ">转换为设备长度的数目</param>
					/// <returns> </returns>
					public virtual void ToDeviceLength(IntPtr len, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(this.NativeObject, len, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toMapLength_CallBack_void_ev_real64_int(IntPtr len, int count);

					protected toMapLength_CallBack_void_ev_real64_int m_toMapLength_CallBack_void_ev_real64_int;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_NoVirtual(IntPtr pNativeObject, IntPtr len, int count);

					/// <summary>
					///  转换为地图的长度
					/// </summary>
					/// <param name="len">地图的长度</param>
					/// <param name="count ">转换为地图长度的数目</param>
					/// <returns> </returns>
					public virtual void ToMapLength_NoVirtual(IntPtr len, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_NoVirtual(this.NativeObject, len, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Function(IntPtr len, int count)
					{
						ToMapLength(len, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(IntPtr pNativeObject, IntPtr len, int count);

					/// <summary>
					///  转换为地图的长度
					/// </summary>
					/// <param name="len">地图的长度</param>
					/// <param name="count ">转换为地图长度的数目</param>
					/// <returns> </returns>
					public virtual void ToMapLength(IntPtr len, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(this.NativeObject, len, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toMapRect_CallBack_void_IEnvelope_IEnvelope(IntPtr devRect, IntPtr mapRect);

					protected toMapRect_CallBack_void_IEnvelope_IEnvelope m_toMapRect_CallBack_void_IEnvelope_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr devRect, IntPtr mapRect);

					/// <summary>
					/// 转换为地图矩形
					/// </summary>
					/// <param name="devRect ">输入的设备矩形</param>
					/// <param name="mapRect ">输出的地图矩形</param>
					/// <returns> </returns>
					public virtual void ToMapRect_NoVirtual(EarthView.World.Spatial.Geometry.Ienvelope devRect, EarthView.World.Spatial.Geometry.Ienvelope mapRect)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_NoVirtual(this.NativeObject, object.Equals(devRect, null) ? IntPtr.Zero : devRect.NativeObject, object.Equals(mapRect, null) ? IntPtr.Zero : mapRect.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Function(IntPtr devRect, IntPtr mapRect)
					{
						EarthView.World.Spatial.Geometry.Ienvelope csobj_devRect = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_devRect.BindNativeObject(devRect,"IEnvelope");
						csobj_devRect.Delegate = true;
						IClassFactory csobj_devRectClassFactory = GlobalClassFactoryMap.Get(csobj_devRect.GetCppInstanceTypeName());
						if (csobj_devRectClassFactory != null)
						{
							csobj_devRect.Delegate = true;
							csobj_devRect = csobj_devRectClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_devRect.BindNativeObject(devRect, "IEnvelope");
							csobj_devRect.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csobj_mapRect = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mapRect.BindNativeObject(mapRect,"IEnvelope");
						csobj_mapRect.Delegate = true;
						IClassFactory csobj_mapRectClassFactory = GlobalClassFactoryMap.Get(csobj_mapRect.GetCppInstanceTypeName());
						if (csobj_mapRectClassFactory != null)
						{
							csobj_mapRect.Delegate = true;
							csobj_mapRect = csobj_mapRectClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_mapRect.BindNativeObject(mapRect, "IEnvelope");
							csobj_mapRect.Delegate = true;
						}
						
						ToMapRect(csobj_devRect, csobj_mapRect);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(IntPtr pNativeObject, IntPtr devRect, IntPtr mapRect);

					/// <summary>
					/// 转换为地图矩形
					/// </summary>
					/// <param name="devRect ">输入的设备矩形</param>
					/// <param name="mapRect ">输出的地图矩形</param>
					/// <returns> </returns>
					public virtual void ToMapRect(EarthView.World.Spatial.Geometry.Ienvelope devRect, EarthView.World.Spatial.Geometry.Ienvelope mapRect)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(this.NativeObject, object.Equals(devRect, null) ? IntPtr.Zero : devRect.NativeObject, object.Equals(mapRect, null) ? IntPtr.Zero : mapRect.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toDeviceRect_CallBack_void_IEnvelope_IEnvelope(IntPtr mapRect, IntPtr devRect);

					protected toDeviceRect_CallBack_void_IEnvelope_IEnvelope m_toDeviceRect_CallBack_void_IEnvelope_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr mapRect, IntPtr devRect);

					/// <summary>
					/// 转换为设备矩形
					/// </summary>
					/// <param name="devRect ">输入的地图矩形</param>
					/// <param name="mapRect ">输出的设备矩形</param>
					/// <returns> </returns>
					public virtual void ToDeviceRect_NoVirtual(EarthView.World.Spatial.Geometry.Ienvelope mapRect, EarthView.World.Spatial.Geometry.Ienvelope devRect)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_NoVirtual(this.NativeObject, object.Equals(mapRect, null) ? IntPtr.Zero : mapRect.NativeObject, object.Equals(devRect, null) ? IntPtr.Zero : devRect.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Function(IntPtr mapRect, IntPtr devRect)
					{
						EarthView.World.Spatial.Geometry.Ienvelope csobj_mapRect = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_mapRect.BindNativeObject(mapRect,"IEnvelope");
						csobj_mapRect.Delegate = true;
						IClassFactory csobj_mapRectClassFactory = GlobalClassFactoryMap.Get(csobj_mapRect.GetCppInstanceTypeName());
						if (csobj_mapRectClassFactory != null)
						{
							csobj_mapRect.Delegate = true;
							csobj_mapRect = csobj_mapRectClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_mapRect.BindNativeObject(mapRect, "IEnvelope");
							csobj_mapRect.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csobj_devRect = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_devRect.BindNativeObject(devRect,"IEnvelope");
						csobj_devRect.Delegate = true;
						IClassFactory csobj_devRectClassFactory = GlobalClassFactoryMap.Get(csobj_devRect.GetCppInstanceTypeName());
						if (csobj_devRectClassFactory != null)
						{
							csobj_devRect.Delegate = true;
							csobj_devRect = csobj_devRectClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_devRect.BindNativeObject(devRect, "IEnvelope");
							csobj_devRect.Delegate = true;
						}
						
						ToDeviceRect(csobj_mapRect, csobj_devRect);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(IntPtr pNativeObject, IntPtr mapRect, IntPtr devRect);

					/// <summary>
					/// 转换为设备矩形
					/// </summary>
					/// <param name="devRect ">输入的地图矩形</param>
					/// <param name="mapRect ">输出的设备矩形</param>
					/// <returns> </returns>
					public virtual void ToDeviceRect(EarthView.World.Spatial.Geometry.Ienvelope mapRect, EarthView.World.Spatial.Geometry.Ienvelope devRect)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(this.NativeObject, object.Equals(mapRect, null) ? IntPtr.Zero : mapRect.NativeObject, object.Equals(devRect, null) ? IntPtr.Zero : devRect.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope(IntPtr src, IntPtr dest, IntPtr enve);

					protected transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope m_transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr enve);

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src ">空间源参考系</param>
					/// <param name="dest ">空间目标参考系</param>
					/// <param name="enve ">包围盒对象</param>
					/// <returns> </returns>
					public virtual void Transform_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference src, EarthView.World.Spatial.Geometry.Ispatialreference dest, EarthView.World.Spatial.Geometry.Ienvelope enve)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_NoVirtual(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(enve, null) ? IntPtr.Zero : enve.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Function(IntPtr src, IntPtr dest, IntPtr enve)
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_src = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_src.BindNativeObject(src,"ISpatialReference");
						csobj_src.Delegate = true;
						IClassFactory csobj_srcClassFactory = GlobalClassFactoryMap.Get(csobj_src.GetCppInstanceTypeName());
						if (csobj_srcClassFactory != null)
						{
							csobj_src.Delegate = true;
							csobj_src = csobj_srcClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_src.BindNativeObject(src, "ISpatialReference");
							csobj_src.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_dest = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dest.BindNativeObject(dest,"ISpatialReference");
						csobj_dest.Delegate = true;
						IClassFactory csobj_destClassFactory = GlobalClassFactoryMap.Get(csobj_dest.GetCppInstanceTypeName());
						if (csobj_destClassFactory != null)
						{
							csobj_dest.Delegate = true;
							csobj_dest = csobj_destClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_dest.BindNativeObject(dest, "ISpatialReference");
							csobj_dest.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ienvelope csobj_enve = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_enve.BindNativeObject(enve,"IEnvelope");
						csobj_enve.Delegate = true;
						IClassFactory csobj_enveClassFactory = GlobalClassFactoryMap.Get(csobj_enve.GetCppInstanceTypeName());
						if (csobj_enveClassFactory != null)
						{
							csobj_enve.Delegate = true;
							csobj_enve = csobj_enveClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_enve.BindNativeObject(enve, "IEnvelope");
							csobj_enve.Delegate = true;
						}
						
						Transform(csobj_src, csobj_dest, csobj_enve);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr enve);

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src ">空间源参考系</param>
					/// <param name="dest ">空间目标参考系</param>
					/// <param name="enve ">包围盒对象</param>
					/// <returns> </returns>
					public virtual void Transform(EarthView.World.Spatial.Geometry.Ispatialreference src, EarthView.World.Spatial.Geometry.Ispatialreference dest, EarthView.World.Spatial.Geometry.Ienvelope enve)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, object.Equals(enve, null) ? IntPtr.Zero : enve.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(IntPtr src, IntPtr dest, IntPtr x, IntPtr y, int count);

					protected transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32 m_transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr x, IntPtr y, int count);

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src">空间源参考系</param>
					/// <param name="dest">空间目标参考系</param>
					/// <param name="x">空间x坐标值</param>
					/// <param name="y">空间y坐标值</param>
					/// <param name="count">转化的数目</param>
					/// <returns> </returns>
					public virtual void Transform_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference src, EarthView.World.Spatial.Geometry.Ispatialreference dest, IntPtr x, IntPtr y, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_NoVirtual(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, x, y, count);
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Function(IntPtr src, IntPtr dest, IntPtr x, IntPtr y, int count)
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_src = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_src.BindNativeObject(src,"ISpatialReference");
						csobj_src.Delegate = true;
						IClassFactory csobj_srcClassFactory = GlobalClassFactoryMap.Get(csobj_src.GetCppInstanceTypeName());
						if (csobj_srcClassFactory != null)
						{
							csobj_src.Delegate = true;
							csobj_src = csobj_srcClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_src.BindNativeObject(src, "ISpatialReference");
							csobj_src.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_dest = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dest.BindNativeObject(dest,"ISpatialReference");
						csobj_dest.Delegate = true;
						IClassFactory csobj_destClassFactory = GlobalClassFactoryMap.Get(csobj_dest.GetCppInstanceTypeName());
						if (csobj_destClassFactory != null)
						{
							csobj_dest.Delegate = true;
							csobj_dest = csobj_destClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_dest.BindNativeObject(dest, "ISpatialReference");
							csobj_dest.Delegate = true;
						}
						
						Transform(csobj_src, csobj_dest, x, y, count);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(IntPtr pNativeObject, IntPtr src, IntPtr dest, IntPtr x, IntPtr y, int count);

					/// <summary>
					/// 转化
					/// </summary>
					/// <param name="src">空间源参考系</param>
					/// <param name="dest">空间目标参考系</param>
					/// <param name="x">空间x坐标值</param>
					/// <param name="y">空间y坐标值</param>
					/// <param name="count">转化的数目</param>
					/// <returns> </returns>
					public virtual void Transform(EarthView.World.Spatial.Geometry.Ispatialreference src, EarthView.World.Spatial.Geometry.Ispatialreference dest, IntPtr x, IntPtr y, int count)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, object.Equals(dest, null) ? IntPtr.Zero : dest.NativeObject, x, y, count);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(IntPtr src, int nCount, IntPtr pdfX, IntPtr pdfY, bool pForwardFlag);

					protected transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool m_transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr src, int nCount, IntPtr pdfX, IntPtr pdfY, byte pForwardFlag);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					/// <param name="pForwardFlag">正算标记,true表示从地理坐标到投影坐标</param>
					///<returns>0表示成功 正常</returns>
					public virtual void Transform_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference src, int nCount, IntPtr pdfX, IntPtr pdfY, bool pForwardFlag)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, nCount, pdfX, pdfY, Convert.ToByte(pForwardFlag));
						
					}

					protected  void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Function(IntPtr src, int nCount, IntPtr pdfX, IntPtr pdfY, bool pForwardFlag)
					{
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_src = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_src.BindNativeObject(src,"ISpatialReference");
						csobj_src.Delegate = true;
						IClassFactory csobj_srcClassFactory = GlobalClassFactoryMap.Get(csobj_src.GetCppInstanceTypeName());
						if (csobj_srcClassFactory != null)
						{
							csobj_src.Delegate = true;
							csobj_src = csobj_srcClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_src.BindNativeObject(src, "ISpatialReference");
							csobj_src.Delegate = true;
						}
						
						Transform(csobj_src, nCount, pdfX, pdfY, pForwardFlag);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(IntPtr pNativeObject, IntPtr src, int nCount, IntPtr pdfX, IntPtr pdfY, byte pForwardFlag);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					/// <param name="pForwardFlag">正算标记,true表示从地理坐标到投影坐标</param>
					///<returns>0表示成功 正常</returns>
					public virtual void Transform(EarthView.World.Spatial.Geometry.Ispatialreference src, int nCount, IntPtr pdfX, IntPtr pdfY, bool pForwardFlag)
					{
						EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(this.NativeObject, object.Equals(src, null) ? IntPtr.Zero : src.NativeObject, nCount, pdfX, pdfY, Convert.ToByte(pForwardFlag));
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIspatialtransformer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialTransformer", new IspatialtransformerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialTransformerProxy", new IspatialtransformerClassFactory());

					public Ispatialtransformer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(IntPtr pObject, isValid_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(IntPtr pObject, getSpatialReference_CallBack_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(IntPtr pObject, setSpatialReference_CallBack_void_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(IntPtr pObject, getDataExtent_CallBack_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(IntPtr pObject, getGeographicDataExtent_CallBack_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(IntPtr pObject, setDataExtent_CallBack_void_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(IntPtr pObject, getDeviceExtent_CallBack_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(IntPtr pObject, setDeviceExtent_CallBack_void_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(IntPtr pObject, getRotation_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(IntPtr pObject, rotate_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(IntPtr pObject, rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(IntPtr pObject, getCurrentScale_CallBack_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(IntPtr pObject, setCurrentScale_CallBack_void_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(IntPtr pObject, setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(IntPtr pObject, getCenter_CallBack_void_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(IntPtr pObject, getGeographicCenter_CallBack_void_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(IntPtr pObject, setCenter_CallBack_void_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(IntPtr pObject, translate_CallBack_void_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(IntPtr pObject, reset_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pObject, toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pObject, toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pObject, geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(IntPtr pObject, deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(IntPtr pObject, toDeviceLength_CallBack_void_ev_real64_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(IntPtr pObject, toMapLength_CallBack_void_ev_real64_int pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(IntPtr pObject, toMapRect_CallBack_void_IEnvelope_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(IntPtr pObject, toDeviceRect_CallBack_void_IEnvelope_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(IntPtr pObject, transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(IntPtr pObject, transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(IntPtr pObject, transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_isValid_CallBack_ev_bool = EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool_Function;
							GC.KeepAlive(m_isValid_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_isValid_ev_bool(this.NativeObject, m_isValid_CallBack_ev_bool);
							m_getSpatialReference_CallBack_ISpatialReference = EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReference_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getSpatialReference_ISpatialReference(this.NativeObject, m_getSpatialReference_CallBack_ISpatialReference);
							m_setSpatialReference_CallBack_void_ISpatialReference = EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference_Function;
							GC.KeepAlive(m_setSpatialReference_CallBack_void_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setSpatialReference_void_ISpatialReference(this.NativeObject, m_setSpatialReference_CallBack_void_ISpatialReference);
							m_getDataExtent_CallBack_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope_Function;
							GC.KeepAlive(m_getDataExtent_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDataExtent_IEnvelope(this.NativeObject, m_getDataExtent_CallBack_IEnvelope);
							m_getGeographicDataExtent_CallBack_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope_Function;
							GC.KeepAlive(m_getGeographicDataExtent_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicDataExtent_IEnvelope(this.NativeObject, m_getGeographicDataExtent_CallBack_IEnvelope);
							m_setDataExtent_CallBack_void_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope_Function;
							GC.KeepAlive(m_setDataExtent_CallBack_void_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDataExtent_void_IEnvelope(this.NativeObject, m_setDataExtent_CallBack_void_IEnvelope);
							m_getDeviceExtent_CallBack_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope_Function;
							GC.KeepAlive(m_getDeviceExtent_CallBack_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getDeviceExtent_IEnvelope(this.NativeObject, m_getDeviceExtent_CallBack_IEnvelope);
							m_setDeviceExtent_CallBack_void_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope_Function;
							GC.KeepAlive(m_setDeviceExtent_CallBack_void_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setDeviceExtent_void_IEnvelope(this.NativeObject, m_setDeviceExtent_CallBack_void_IEnvelope);
							m_getRotation_CallBack_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64_Function;
							GC.KeepAlive(m_getRotation_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getRotation_ev_real64(this.NativeObject, m_getRotation_CallBack_ev_real64);
							m_rotate_CallBack_void_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64_Function;
							GC.KeepAlive(m_rotate_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotate_void_ev_real64(this.NativeObject, m_rotate_CallBack_void_ev_real64);
							m_rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_rotateAt_void_ev_real64_ev_real64_ev_real64(this.NativeObject, m_rotateAt_CallBack_void_ev_real64_ev_real64_ev_real64);
							m_getCurrentScale_CallBack_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64_Function;
							GC.KeepAlive(m_getCurrentScale_CallBack_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCurrentScale_ev_real64(this.NativeObject, m_getCurrentScale_CallBack_ev_real64);
							m_setCurrentScale_CallBack_void_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_Function;
							GC.KeepAlive(m_setCurrentScale_CallBack_void_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64(this.NativeObject, m_setCurrentScale_CallBack_void_ev_real64);
							m_setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCurrentScale_void_ev_real64_ev_real64_ev_real64(this.NativeObject, m_setCurrentScale_CallBack_void_ev_real64_ev_real64_ev_real64);
							m_getCenter_CallBack_void_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getCenter_CallBack_void_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getCenter_void_ev_real64_ev_real64(this.NativeObject, m_getCenter_CallBack_void_ev_real64_ev_real64);
							m_getGeographicCenter_CallBack_void_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_getGeographicCenter_CallBack_void_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_getGeographicCenter_void_ev_real64_ev_real64(this.NativeObject, m_getGeographicCenter_CallBack_void_ev_real64_ev_real64);
							m_setCenter_CallBack_void_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_setCenter_CallBack_void_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_setCenter_void_ev_real64_ev_real64(this.NativeObject, m_setCenter_CallBack_void_ev_real64_ev_real64);
							m_translate_CallBack_void_ev_real64_ev_real64 = EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_translate_CallBack_void_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_translate_void_ev_real64_ev_real64(this.NativeObject, m_translate_CallBack_void_ev_real64_ev_real64);
							m_reset_CallBack_void = EarthView_World_Spatial_Display_ISpatialTransformer_reset_void_Function;
							GC.KeepAlive(m_reset_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_reset_void(this.NativeObject, m_reset_CallBack_void);
							m_toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 = EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32_Function;
							GC.KeepAlive(m_toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDevicePoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, m_toDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							m_toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 = EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32_Function;
							GC.KeepAlive(m_toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapPoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, m_toMapPoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							m_geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32 = EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32_Function;
							GC.KeepAlive(m_geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_geographicToDevicePoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, m_geographicToDevicePoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							m_deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32 = EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32_Function;
							GC.KeepAlive(m_deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_deviceToGeographicPoints_void_ev_real64_ev_real64_ev_uint32(this.NativeObject, m_deviceToGeographicPoints_CallBack_void_ev_real64_ev_real64_ev_uint32);
							m_toDeviceLength_CallBack_void_ev_real64_int = EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int_Function;
							GC.KeepAlive(m_toDeviceLength_CallBack_void_ev_real64_int);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceLength_void_ev_real64_int(this.NativeObject, m_toDeviceLength_CallBack_void_ev_real64_int);
							m_toMapLength_CallBack_void_ev_real64_int = EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int_Function;
							GC.KeepAlive(m_toMapLength_CallBack_void_ev_real64_int);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapLength_void_ev_real64_int(this.NativeObject, m_toMapLength_CallBack_void_ev_real64_int);
							m_toMapRect_CallBack_void_IEnvelope_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope_Function;
							GC.KeepAlive(m_toMapRect_CallBack_void_IEnvelope_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toMapRect_void_IEnvelope_IEnvelope(this.NativeObject, m_toMapRect_CallBack_void_IEnvelope_IEnvelope);
							m_toDeviceRect_CallBack_void_IEnvelope_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope_Function;
							GC.KeepAlive(m_toDeviceRect_CallBack_void_IEnvelope_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_toDeviceRect_void_IEnvelope_IEnvelope(this.NativeObject, m_toDeviceRect_CallBack_void_IEnvelope_IEnvelope);
							m_transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope = EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope_Function;
							GC.KeepAlive(m_transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_IEnvelope(this.NativeObject, m_transform_CallBack_void_ISpatialReference_ISpatialReference_IEnvelope);
							m_transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32 = EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_Function;
							GC.KeepAlive(m_transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32(this.NativeObject, m_transform_CallBack_void_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32);
							m_transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool = EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_Function;
							GC.KeepAlive(m_transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialTransformer_transform_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(this.NativeObject, m_transform_CallBack_void_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool);
						}
					}
					public static Ispatialtransformer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ispatialtransformer obj = baseObj as  Ispatialtransformer;
						if (object.Equals(obj, null))
						{
							obj = new Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ISpatialTransformer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IspatialtransformerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ispatialtransformer emptyInstance = new Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
