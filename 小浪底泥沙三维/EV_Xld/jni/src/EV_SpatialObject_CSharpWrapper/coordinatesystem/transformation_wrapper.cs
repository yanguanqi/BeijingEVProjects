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
			namespace Utility
			{
				///<summary>
				///CCoordinateTransformation
				///同一椭球基准的投影正反算
				///不同椭球基准之间的转换，需要设置转换参数，否者可能
				///结果不能满足精度要求
				public class CoordinateTransformation : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					public CoordinateTransformation() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCoordinateTransformationProxy", null);
						if (!"EarthView.World.Spatial.Utility.CoordinateTransformation".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setSourceCS_CallBack_void_CSpatialReference(IntPtr ref_objSrcCrdSys);

					protected setSourceCS_CallBack_void_CSpatialReference m_setSourceCS_CallBack_void_CSpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr ref_objSrcCrdSys);

					///<summary>
					/// 设置源坐标参考,；坐标转换结束，外边释放
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					public virtual void SetSourceCS_NoVirtual(EarthView.World.Spatial.Utility.SpatialReference ref_objSrcCrdSys)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_NoVirtual(this.NativeObject, object.Equals(ref_objSrcCrdSys, null) ? IntPtr.Zero : ref_objSrcCrdSys.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Function(IntPtr ref_objSrcCrdSys)
					{
						EarthView.World.Spatial.Utility.SpatialReference csobj_ref_objSrcCrdSys = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_objSrcCrdSys.BindNativeObject(ref_objSrcCrdSys,"CSpatialReference");
						csobj_ref_objSrcCrdSys.Delegate = true;
						IClassFactory csobj_ref_objSrcCrdSysClassFactory = GlobalClassFactoryMap.Get(csobj_ref_objSrcCrdSys.GetCppInstanceTypeName());
						if (csobj_ref_objSrcCrdSysClassFactory != null)
						{
							csobj_ref_objSrcCrdSys.Delegate = true;
							csobj_ref_objSrcCrdSys = csobj_ref_objSrcCrdSysClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csobj_ref_objSrcCrdSys.BindNativeObject(ref_objSrcCrdSys, "CSpatialReference");
							csobj_ref_objSrcCrdSys.Delegate = true;
						}
						
						SetSourceCS(csobj_ref_objSrcCrdSys);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(IntPtr pNativeObject, IntPtr ref_objSrcCrdSys);

					///<summary>
					/// 设置源坐标参考,；坐标转换结束，外边释放
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					public virtual void SetSourceCS(EarthView.World.Spatial.Utility.SpatialReference ref_objSrcCrdSys)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(this.NativeObject, object.Equals(ref_objSrcCrdSys, null) ? IntPtr.Zero : ref_objSrcCrdSys.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setTargetCS_CallBack_void_CSpatialReference(IntPtr ref_objDstCrdSys);

					protected setTargetCS_CallBack_void_CSpatialReference m_setTargetCS_CallBack_void_CSpatialReference;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr ref_objDstCrdSys);

					///<summary>
					/// 设置目标坐标参考，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objDstCrdSys">目标坐标参考指针</param>
					public virtual void SetTargetCS_NoVirtual(EarthView.World.Spatial.Utility.SpatialReference ref_objDstCrdSys)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_NoVirtual(this.NativeObject, object.Equals(ref_objDstCrdSys, null) ? IntPtr.Zero : ref_objDstCrdSys.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Function(IntPtr ref_objDstCrdSys)
					{
						EarthView.World.Spatial.Utility.SpatialReference csobj_ref_objDstCrdSys = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_objDstCrdSys.BindNativeObject(ref_objDstCrdSys,"CSpatialReference");
						csobj_ref_objDstCrdSys.Delegate = true;
						IClassFactory csobj_ref_objDstCrdSysClassFactory = GlobalClassFactoryMap.Get(csobj_ref_objDstCrdSys.GetCppInstanceTypeName());
						if (csobj_ref_objDstCrdSysClassFactory != null)
						{
							csobj_ref_objDstCrdSys.Delegate = true;
							csobj_ref_objDstCrdSys = csobj_ref_objDstCrdSysClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csobj_ref_objDstCrdSys.BindNativeObject(ref_objDstCrdSys, "CSpatialReference");
							csobj_ref_objDstCrdSys.Delegate = true;
						}
						
						SetTargetCS(csobj_ref_objDstCrdSys);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(IntPtr pNativeObject, IntPtr ref_objDstCrdSys);

					///<summary>
					/// 设置目标坐标参考，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objDstCrdSys">目标坐标参考指针</param>
					public virtual void SetTargetCS(EarthView.World.Spatial.Utility.SpatialReference ref_objDstCrdSys)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(this.NativeObject, object.Equals(ref_objDstCrdSys, null) ? IntPtr.Zero : ref_objDstCrdSys.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setTransParameter_CallBack_void_CTransParameter(IntPtr objTransParameter);

					protected setTransParameter_CallBack_void_CTransParameter m_setTransParameter_CallBack_void_CTransParameter;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_NoVirtual(IntPtr pNativeObject, IntPtr objTransParameter);

					///<summary>
					/// 设置基准转换参数，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objTransParameter">转换参数指针</param>
					public virtual void SetTransParameter_NoVirtual(EarthView.World.Spatial.Utility.TransParameter objTransParameter)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_NoVirtual(this.NativeObject, object.Equals(objTransParameter, null) ? IntPtr.Zero : objTransParameter.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Function(IntPtr objTransParameter)
					{
						EarthView.World.Spatial.Utility.TransParameter csobj_objTransParameter = new EarthView.World.Spatial.Utility.TransParameter(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_objTransParameter.BindNativeObject(objTransParameter,"CTransParameter");
						csobj_objTransParameter.Delegate = true;
						IClassFactory csobj_objTransParameterClassFactory = GlobalClassFactoryMap.Get(csobj_objTransParameter.GetCppInstanceTypeName());
						if (csobj_objTransParameterClassFactory != null)
						{
							csobj_objTransParameter.Delegate = true;
							csobj_objTransParameter = csobj_objTransParameterClassFactory.Create() as EarthView.World.Spatial.Utility.TransParameter;
							csobj_objTransParameter.BindNativeObject(objTransParameter, "CTransParameter");
							csobj_objTransParameter.Delegate = true;
						}
						
						SetTransParameter(csobj_objTransParameter);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(IntPtr pNativeObject, IntPtr objTransParameter);

					///<summary>
					/// 设置基准转换参数，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objTransParameter">转换参数指针</param>
					public virtual void SetTransParameter(EarthView.World.Spatial.Utility.TransParameter objTransParameter)
					{
						EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(this.NativeObject, object.Equals(objTransParameter, null) ? IntPtr.Zero : objTransParameter.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateTransformation_getSourceCS_CSpatialReference(IntPtr pNativeObject);

					///<summary>
					/// 获取源坐标参考
					/// </summary>
					/// <returns>源坐标空间参考指针</returns>
					public EarthView.World.Spatial.Utility.SpatialReference GetSourceCS()
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateTransformation_getSourceCS_CSpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateTransformation_getTargetCS_CSpatialReference(IntPtr pNativeObject);

					///<summary>
					/// 获取目标坐标参考
					/// </summary>
					/// <returns>目标坐标参考指针</returns>
					public EarthView.World.Spatial.Utility.SpatialReference GetTargetCS()
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateTransformation_getTargetCS_CSpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.SpatialReference csObj = new EarthView.World.Spatial.Utility.SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.SpatialReference;
							csObj.BindNativeObject(__ptr, "CSpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Utility_CCoordinateTransformation_getTransParameter_CTransParameter(IntPtr pNativeObject);

					///<summary>
					/// 获取基准转换参数
					/// </summary>
					/// <returns>转换参数指针</returns>
					public EarthView.World.Spatial.Utility.TransParameter GetTransParameter()
					{
						IntPtr __ptr = EarthView_World_Spatial_Utility_CCoordinateTransformation_getTransParameter_CTransParameter(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Utility.TransParameter csObj = new EarthView.World.Spatial.Utility.TransParameter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTransParameter");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Utility.TransParameter;
							csObj.BindNativeObject(__ptr, "CTransParameter");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ);

					protected transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64 m_transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					///<returns>0表示成功 正常</returns>
					public virtual int Transform_NoVirtual(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ)
					{
						int ret=EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, nCount, pdfX, pdfY, pdfZ);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Function(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ)
					{
						int csret=Transform(nCount, pdfX, pdfY, pdfZ);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					///<returns>0表示成功 正常</returns>
					public virtual int Transform(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ)
					{
						int ret=EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.NativeObject, nCount, pdfX, pdfY, pdfZ);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss);

					protected transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool m_transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(IntPtr pNativeObject, int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针，北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针，椭球高度（m）</param>
					/// <param name="pBSuccesss">每个坐标点转换成功标记</param>
					///<returns>0表示成功 正常,-1至少一个投影参考为空</returns>
					public virtual int TransfromEx_NoVirtual(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss)
					{
						int ret=EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(this.NativeObject, nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						
						return ret;
						
					}

					protected  int EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Function(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss)
					{
						int csret=TransfromEx(nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(IntPtr pNativeObject, int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss);

					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针，北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针，椭球高度（m）</param>
					/// <param name="pBSuccesss">每个坐标点转换成功标记</param>
					///<returns>0表示成功 正常,-1至少一个投影参考为空</returns>
					public virtual int TransfromEx(int nCount, IntPtr pdfX, IntPtr pdfY, IntPtr pdfZ, IntPtr pBSuccesss)
					{
						int ret=EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(this.NativeObject, nCount, pdfX, pdfY, pdfZ, pBSuccesss);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_CSpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(IntPtr objSrcCrdSys, int nCount, IntPtr pdfX, IntPtr pdfY, byte pForwardFlag);

					///<summary>
					/// 提供某个投影坐标系下椭球面经纬度坐标和投影坐标之间的转换
					/// </summary>
					/// <param name="objSrcCrdSys">坐标空间参考指针，如果传入地理坐标系则不进行转换</param>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pForwardFlag">正算标记,true表示从球面坐标到投影平面坐标</param>
					///<returns>0表示成功 正常</returns>
					public static int Transform(EarthView.World.Spatial.Utility.SpatialReference objSrcCrdSys, int nCount, IntPtr pdfX, IntPtr pdfY, bool pForwardFlag)
					{
						int ret=EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_CSpatialReference_ev_int32_ev_real64_ev_real64_ev_bool(object.Equals(objSrcCrdSys, null) ? IntPtr.Zero : objSrcCrdSys.NativeObject, nCount, pdfX, pdfY, Convert.ToByte(pForwardFlag));
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_d.so");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp_d.so");

						#else 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_d.dll");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#elif Linux 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject.so");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp.so");

						#else 
							private static bool bLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject.dll");
							private static bool csbLoadCoordinateTransformation = LoadDll.Load("EV_SpatialObject_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CCoordinateTransformation", new CoordinateTransformationClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CCoordinateTransformationProxy", new CoordinateTransformationClassFactory());

					public CoordinateTransformation(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(IntPtr pObject, setSourceCS_CallBack_void_CSpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(IntPtr pObject, setTargetCS_CallBack_void_CSpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(IntPtr pObject, setTransParameter_CallBack_void_CTransParameter pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(IntPtr pObject, transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialObject_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(IntPtr pObject, transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setSourceCS_CallBack_void_CSpatialReference = EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference_Function;
							GC.KeepAlive(m_setSourceCS_CallBack_void_CSpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setSourceCS_void_CSpatialReference(this.NativeObject, m_setSourceCS_CallBack_void_CSpatialReference);
							m_setTargetCS_CallBack_void_CSpatialReference = EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference_Function;
							GC.KeepAlive(m_setTargetCS_CallBack_void_CSpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTargetCS_void_CSpatialReference(this.NativeObject, m_setTargetCS_CallBack_void_CSpatialReference);
							m_setTransParameter_CallBack_void_CTransParameter = EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter_Function;
							GC.KeepAlive(m_setTransParameter_CallBack_void_CTransParameter);
							EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_setTransParameter_void_CTransParameter(this.NativeObject, m_setTransParameter_CallBack_void_CTransParameter);
							m_transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transform_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.NativeObject, m_transform_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64);
							m_transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool = EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool_Function;
							GC.KeepAlive(m_transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Utility_CCoordinateTransformation_transfromEx_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool(this.NativeObject, m_transfromEx_CallBack_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_bool);
						}
					}
					public static CoordinateTransformation FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CoordinateTransformation obj = baseObj as  CoordinateTransformation;
						if (object.Equals(obj, null))
						{
							obj = new CoordinateTransformation(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCoordinateTransformation");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CoordinateTransformationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CoordinateTransformation emptyInstance = new CoordinateTransformation(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
