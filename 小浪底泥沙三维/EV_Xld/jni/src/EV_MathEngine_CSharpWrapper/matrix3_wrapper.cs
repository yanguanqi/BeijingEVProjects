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
				/// <summary>
				/// 三维矩阵类,
				/// 定义了三维矩阵操作函数
				/// </summary>
				public class Matrix3 : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Matrix3() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMatrix3",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="arr[3][3]">数组</param>
					/// <returns></returns>
					public Matrix3(double[][] arr) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuearr = new BasePtr(arr);
						list.Add("arr", valuearr.PtrVal);
						Create("CMatrix3", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rkMatrix">类对象</param>
					/// <returns></returns>
					public Matrix3(EarthView.World.Spatial.Math.Matrix3 rkMatrix) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerkMatrix = new BasePtr(rkMatrix);
						list.Add("rkMatrix", valuerkMatrix.PtrVal);
						Create("CMatrix3", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="fEntry00">数组元素</param>
					/// <param name="fEntry01">数组元素</param>
					/// <param name="fEntry02">数组元素</param>
					/// <param name="fEntry10">数组元素</param>
					/// <param name="fEntry11">数组元素</param>
					/// <param name="fEntry12">数组元素</param>
					/// <param name="fEntry20">数组元素</param>
					/// <param name="fEntry21">数组元素</param>
					/// <param name="fEntry22">数组元素</param>
					/// <returns></returns>
					public Matrix3(double fEntry00, double fEntry01, double fEntry02, double fEntry10, double fEntry11, double fEntry12, double fEntry20, double fEntry21, double fEntry22) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuefEntry00 = new BasePtr(fEntry00);
						list.Add("fEntry00", valuefEntry00.PtrVal);
						BasePtr valuefEntry01 = new BasePtr(fEntry01);
						list.Add("fEntry01", valuefEntry01.PtrVal);
						BasePtr valuefEntry02 = new BasePtr(fEntry02);
						list.Add("fEntry02", valuefEntry02.PtrVal);
						BasePtr valuefEntry10 = new BasePtr(fEntry10);
						list.Add("fEntry10", valuefEntry10.PtrVal);
						BasePtr valuefEntry11 = new BasePtr(fEntry11);
						list.Add("fEntry11", valuefEntry11.PtrVal);
						BasePtr valuefEntry12 = new BasePtr(fEntry12);
						list.Add("fEntry12", valuefEntry12.PtrVal);
						BasePtr valuefEntry20 = new BasePtr(fEntry20);
						list.Add("fEntry20", valuefEntry20.PtrVal);
						BasePtr valuefEntry21 = new BasePtr(fEntry21);
						list.Add("fEntry21", valuefEntry21.PtrVal);
						BasePtr valuefEntry22 = new BasePtr(fEntry22);
						list.Add("fEntry22", valuefEntry22.PtrVal);
						Create("CMatrix3", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_swap_void_CMatrix3(IntPtr pNativeObject, IntPtr other);

					/// <summary>
					/// 与另一矩阵元素交换
					/// </summary>
					/// <param name="other">其它矩阵</param>
					/// <returns></returns>
					public void Swap(ref EarthView.World.Spatial.Math.Matrix3 other)
					{
						EarthView_World_Spatial_Math_CMatrix3_swap_void_CMatrix3(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_GetColumn_CVector3_ev_size_t(IntPtr pNativeObject, ulong iCol);

					/// <summary>
					///获得某列元素值
					/// </summary>
					/// <param name="iCol">列标号</param>
					/// <returns>一列元素的vector集合</returns>
					public EarthView.World.Spatial.Math.Vector3 GetColumn(ulong iCol)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_GetColumn_CVector3_ev_size_t(this.NativeObject, iCol);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_SetColumn_void_ev_size_t_CVector3(IntPtr pNativeObject, ulong iCol, IntPtr vec);

					/// <summary>
					///设置某列元素值
					/// </summary>
					/// <param name="iCol">列标号</param>
					/// <param name="vec">vector元素集合</param>
					/// <returns></returns>
					public void SetColumn(ulong iCol, EarthView.World.Spatial.Math.Vector3 vec)
					{
						EarthView_World_Spatial_Math_CMatrix3_SetColumn_void_ev_size_t_CVector3(this.NativeObject, iCol, object.Equals(vec, null) ? IntPtr.Zero : vec.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromAxes_void_CVector3_CVector3_CVector3(IntPtr pNativeObject, IntPtr xAxis, IntPtr yAxis, IntPtr zAxis);

					/// <summary>
					///从坐标轴向量建立矩阵
					/// </summary>
					/// <param name="xAxis">x轴</param>
					/// <param name="yAxis">y轴</param>
					/// <param name="zAxis">z轴</param>
					/// <returns></returns>
					public void FromAxes(EarthView.World.Spatial.Math.Vector3 xAxis, EarthView.World.Spatial.Math.Vector3 yAxis, EarthView.World.Spatial.Math.Vector3 zAxis)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromAxes_void_CVector3_CVector3_CVector3(this.NativeObject, object.Equals(xAxis, null) ? IntPtr.Zero : xAxis.NativeObject, object.Equals(yAxis, null) ? IntPtr.Zero : yAxis.NativeObject, object.Equals(zAxis, null) ? IntPtr.Zero : zAxis.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorAssign_CMatrix3_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///矩阵赋值
					/// </summary>
					/// <param name="rkMatrix">源矩阵</param>
					/// <returns>赋值矩阵</returns>
					public EarthView.World.Spatial.Math.Matrix3 OperatorAssign(EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorAssign_CMatrix3_CMatrix3(this.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_OperatorEquals_ev_bool_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///判断矩阵相等
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>相等返回true，否则false</returns>
					public 					static bool operator ==(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_OperatorEquals_ev_bool_CMatrix3(mCMatrix3.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_OperatorNotEquals_ev_bool_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///判断矩阵不相等
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>不相等返回true，否则false</returns>
					public 					static bool operator !=(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_OperatorNotEquals_ev_bool_CMatrix3(mCMatrix3.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorPlus_CMatrix3_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///矩阵加操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相加结果</returns>
					public 					static EarthView.World.Spatial.Math.Matrix3 operator +(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorPlus_CMatrix3_CMatrix3(mCMatrix3.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorMinus_CMatrix3_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///矩阵减操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相减结果</returns>
					public 					static EarthView.World.Spatial.Math.Matrix3 operator -(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorMinus_CMatrix3_CMatrix3(mCMatrix3.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_CMatrix3(IntPtr pNativeObject, IntPtr rkMatrix);

					/// <summary>
					///矩阵乘操作
					/// </summary>
					/// <param name="rkMatrix">矩阵</param>
					/// <returns>矩阵相乘结果</returns>
					public 					static EarthView.World.Spatial.Math.Matrix3 operator *(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Matrix3 rkMatrix)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_CMatrix3(mCMatrix3.NativeObject, object.Equals(rkMatrix, null) ? IntPtr.Zero : rkMatrix.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CVector3_CVector3(IntPtr pNativeObject, IntPtr rkVector);

					/// <summary>
					///矩阵与3x1向量相乘
					/// </summary>
					/// <param name="rkVector">3x1向量</param>
					/// <returns>相乘后3x1向量结果</returns>
					public 					static EarthView.World.Spatial.Math.Vector3 operator *(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,EarthView.World.Spatial.Math.Vector3 rkVector)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CVector3_CVector3(mCMatrix3.NativeObject, object.Equals(rkVector, null) ? IntPtr.Zero : rkVector.NativeObject);
						
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
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_Real(IntPtr pNativeObject, double fScalar);

					/// <summary>
					///矩阵缩放
					/// </summary>
					/// <param name="fScalar">缩放系数</param>
					/// <returns>缩放后矩阵结果</returns>
					public 					static EarthView.World.Spatial.Math.Matrix3 operator *(EarthView.World.Spatial.Math.Matrix3 mCMatrix3,double fScalar)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_OperatorMultiply_CMatrix3_Real(mCMatrix3.NativeObject, fScalar);
						
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_Transpose_CMatrix3(IntPtr pNativeObject);

					/// <summary>
					///矩阵转置
					/// </summary>
					/// <param name=""></param>
					/// <returns>转置后矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix3 Transpose()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_Transpose_CMatrix3(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3_Real(IntPtr pNativeObject, IntPtr rkInverse, double fTolerance);

					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="rkInverse">求逆后矩阵结果</param>
					/// <param name="fTolerance">精确度</param>
					/// <returns>成功返回true，否则false</returns>
					public bool Inverse(ref  EarthView.World.Spatial.Math.Matrix3 rkInverse, double fTolerance)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3_Real(this.NativeObject, object.Equals(rkInverse, null) ? IntPtr.Zero : rkInverse.NativeObject, fTolerance);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3(IntPtr pNativeObject, IntPtr rkInverse);

					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="rkInverse">求逆后矩阵结果</param>
					/// <returns>成功返回true，否则false</returns>
					public bool Inverse(ref  EarthView.World.Spatial.Math.Matrix3 rkInverse)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_Inverse_ev_bool_CMatrix3(this.NativeObject, object.Equals(rkInverse, null) ? IntPtr.Zero : rkInverse.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3_Real(IntPtr pNativeObject, double fTolerance);

					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name="fTolerance">精确度</param>
					/// <returns>求逆后矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix3 Inverse(double fTolerance)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3_Real(this.NativeObject, fTolerance);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3(IntPtr pNativeObject);

					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>求逆后矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix3 Inverse()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix3_Inverse_CMatrix3(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
							csObj.BindNativeObject(__ptr, "CMatrix3");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMatrix3_Determinant_Real(IntPtr pNativeObject);

					/// <summary>
					///矩阵行列式化(求模)
					/// </summary>
					/// <param name=""></param>
					/// <returns>模结果</returns>
					public double Determinant()
					{
						double ret=EarthView_World_Spatial_Math_CMatrix3_Determinant_Real(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_SingularValueDecomposition_void_CMatrix3_CVector3_CMatrix3(IntPtr pNativeObject, IntPtr rkL, IntPtr rkS, IntPtr rkR);

					/// <summary>
					///矩阵奇异值分解
					/// </summary>
					/// <param name="rkL">左奇异矩阵</param>
					/// <param name="rkS">中奇异矩阵</param>
					/// <param name="rkR">右奇异矩阵</param>
					/// <returns></returns>
					public void SingularValueDecomposition(ref  EarthView.World.Spatial.Math.Matrix3 rkL, ref  EarthView.World.Spatial.Math.Vector3 rkS, ref  EarthView.World.Spatial.Math.Matrix3 rkR)
					{
						EarthView_World_Spatial_Math_CMatrix3_SingularValueDecomposition_void_CMatrix3_CVector3_CMatrix3(this.NativeObject, object.Equals(rkL, null) ? IntPtr.Zero : rkL.NativeObject, object.Equals(rkS, null) ? IntPtr.Zero : rkS.NativeObject, object.Equals(rkR, null) ? IntPtr.Zero : rkR.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_SingularValueComposition_void_CMatrix3_CVector3_CMatrix3(IntPtr pNativeObject, IntPtr rkL, IntPtr rkS, IntPtr rkR);

					/// <summary>
					///矩阵奇异值合并
					/// </summary>
					/// <param name="rkL">左奇异矩阵</param>
					/// <param name="rkS">中奇异矩阵</param>
					/// <param name="rkR">右奇异矩阵</param>
					/// <returns></returns>
					public void SingularValueComposition(EarthView.World.Spatial.Math.Matrix3 rkL, EarthView.World.Spatial.Math.Vector3 rkS, EarthView.World.Spatial.Math.Matrix3 rkR)
					{
						EarthView_World_Spatial_Math_CMatrix3_SingularValueComposition_void_CMatrix3_CVector3_CMatrix3(this.NativeObject, object.Equals(rkL, null) ? IntPtr.Zero : rkL.NativeObject, object.Equals(rkS, null) ? IntPtr.Zero : rkS.NativeObject, object.Equals(rkR, null) ? IntPtr.Zero : rkR.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_Orthonormalize_void(IntPtr pNativeObject);

					/// <summary>
					///矩阵正交化
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void Orthonormalize()
					{
						EarthView_World_Spatial_Math_CMatrix3_Orthonormalize_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_QDUDecomposition_void_CMatrix3_CVector3_CVector3(IntPtr pNativeObject, IntPtr rkQ, IntPtr rkD, IntPtr rkU);

					/// <summary>
					///矩阵分解出正交矩阵、对角线矩阵和上三角矩阵
					/// </summary>
					/// <param name="rkQ">正交矩阵</param>
					/// <param name="rkD">对角线矩阵</param>
					/// <param name="rkU">上三角矩阵</param>
					/// <returns></returns>
					public void QDUDecomposition(ref  EarthView.World.Spatial.Math.Matrix3 rkQ, ref  EarthView.World.Spatial.Math.Vector3 rkD, ref  EarthView.World.Spatial.Math.Vector3 rkU)
					{
						EarthView_World_Spatial_Math_CMatrix3_QDUDecomposition_void_CMatrix3_CVector3_CVector3(this.NativeObject, object.Equals(rkQ, null) ? IntPtr.Zero : rkQ.NativeObject, object.Equals(rkD, null) ? IntPtr.Zero : rkD.NativeObject, object.Equals(rkU, null) ? IntPtr.Zero : rkU.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Math_CMatrix3_SpectralNorm_Real(IntPtr pNativeObject);

					/// <summary>
					///矩阵求模
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public double SpectralNorm()
					{
						double ret=EarthView_World_Spatial_Math_CMatrix3_SpectralNorm_Real(this.NativeObject);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CRadian(IntPtr pNativeObject, IntPtr rkAxis, IntPtr rfAngle);

					/// <summary>
					///正交矩阵计算出轴向量和弧度角
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="rfAngle">轴角</param>
					/// <returns></returns>
					public void ToAngleAxis(ref  EarthView.World.Spatial.Math.Vector3 rkAxis, ref  EarthView.World.Spatial.Math.Radian rfAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CRadian(this.NativeObject, object.Equals(rkAxis, null) ? IntPtr.Zero : rkAxis.NativeObject, object.Equals(rfAngle, null) ? IntPtr.Zero : rfAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CDegree(IntPtr pNativeObject, IntPtr rkAxis, IntPtr rfAngle);

					/// <summary>
					///正交矩阵计算出轴向量和角度
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="rfAngle">轴角</param>
					/// <returns></returns>
					public void ToAngleAxis(ref EarthView.World.Spatial.Math.Vector3 rkAxis, ref EarthView.World.Spatial.Math.Degree rfAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_ToAngleAxis_void_CVector3_CDegree(this.NativeObject, object.Equals(rkAxis, null) ? IntPtr.Zero : rkAxis.NativeObject, object.Equals(rfAngle, null) ? IntPtr.Zero : rfAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromAngleAxis_void_CVector3_CRadian(IntPtr pNativeObject, IntPtr rkAxis, IntPtr fRadians);

					/// <summary>
					///由轴向量和角度转化为矩阵
					/// </summary>
					/// <param name="rkAxis">轴向量</param>
					/// <param name="fRadians">轴角</param>
					/// <returns></returns>
					public void FromAngleAxis(EarthView.World.Spatial.Math.Vector3 rkAxis, EarthView.World.Spatial.Math.Radian fRadians)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromAngleAxis_void_CVector3_CRadian(this.NativeObject, object.Equals(rkAxis, null) ? IntPtr.Zero : rkAxis.NativeObject, object.Equals(fRadians, null) ? IntPtr.Zero : fRadians.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXYZ_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为XYZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesXYZ(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXYZ_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXZY_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为XYZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesXZY(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesXZY_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYXZ_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为YXZ旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesYXZ(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYXZ_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYZX_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为YZX旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesYZX(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesYZX_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZXY_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为ZXY旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesZXY(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZXY_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZYX_ev_bool_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr rfYAngle, IntPtr rfPAngle, IntPtr rfRAngle);

					/// <summary>
					///正交化矩阵转换成为ZYX旋转角
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public bool ToEulerAnglesZYX(ref  EarthView.World.Spatial.Math.Radian rfYAngle, ref  EarthView.World.Spatial.Math.Radian rfPAngle, ref  EarthView.World.Spatial.Math.Radian rfRAngle)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_ToEulerAnglesZYX_ev_bool_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(rfYAngle, null) ? IntPtr.Zero : rfYAngle.NativeObject, object.Equals(rfPAngle, null) ? IntPtr.Zero : rfPAngle.NativeObject, object.Equals(rfRAngle, null) ? IntPtr.Zero : rfRAngle.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXYZ_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///XYZ旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesXYZ(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXYZ_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXZY_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///XZY旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesXZY(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesXZY_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYXZ_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///YXZ旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesYXZ(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYXZ_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYZX_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///YZX旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesYZX(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesYZX_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZXY_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///ZXY旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesZXY(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZXY_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZYX_void_CRadian_CRadian_CRadian(IntPtr pNativeObject, IntPtr fYAngle, IntPtr fPAngle, IntPtr fRAngle);

					/// <summary>
					///ZYX旋转角转换成为正交化矩阵
					/// </summary>
					/// <param name="rfYAngle">Yaw角度</param>
					/// <param name="rfPAngle">Pitch角度</param>
					/// <param name="rfRAngle">Roll角度</param>
					/// <returns>成功：true，否则false</returns>
					public void FromEulerAnglesZYX(EarthView.World.Spatial.Math.Radian fYAngle, EarthView.World.Spatial.Math.Radian fPAngle, EarthView.World.Spatial.Math.Radian fRAngle)
					{
						EarthView_World_Spatial_Math_CMatrix3_FromEulerAnglesZYX_void_CRadian_CRadian_CRadian(this.NativeObject, object.Equals(fYAngle, null) ? IntPtr.Zero : fYAngle.NativeObject, object.Equals(fPAngle, null) ? IntPtr.Zero : fPAngle.NativeObject, object.Equals(fRAngle, null) ? IntPtr.Zero : fRAngle.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_EigenSolveSymmetric_void_Real_CVector3(IntPtr pNativeObject, double[] afEigenvalue, IntPtr[] akEigenvector);

					/// <summary>
					///求矩阵特征值
					/// </summary>
					/// <param name="afEigenvalue[3]">特征值</param>
					/// <param name="akEigenvector">特征向量</param>
					/// <returns></returns>
					public void EigenSolveSymmetric(double[] afEigenvalue, EarthView.World.Spatial.Math.Vector3[] akEigenvector)
					{
						IntPtr[] ptrsakEigenvector = new IntPtr[akEigenvector.Length];
						for (int i = 0; i < akEigenvector.Length; i++)
						{
						ptrsakEigenvector[i]=akEigenvector[i].NativeObject;
						}
						
						EarthView_World_Spatial_Math_CMatrix3_EigenSolveSymmetric_void_Real_CVector3(this.NativeObject, afEigenvalue, ptrsakEigenvector);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Math_CMatrix3_TensorProduct_void_CVector3_CVector3_CMatrix3(IntPtr rkU, IntPtr rkV, IntPtr rkProduct);

					/// <summary>
					///张量乘积
					/// </summary>
					/// <param name="rkU">U向量</param>
					/// <param name="rkV">V向量</param>
					/// <returns></returns>
					public static void TensorProduct(EarthView.World.Spatial.Math.Vector3 rkU, EarthView.World.Spatial.Math.Vector3 rkV, ref  EarthView.World.Spatial.Math.Matrix3 rkProduct)
					{
						EarthView_World_Spatial_Math_CMatrix3_TensorProduct_void_CVector3_CVector3_CMatrix3(object.Equals(rkU, null) ? IntPtr.Zero : rkU.NativeObject, object.Equals(rkV, null) ? IntPtr.Zero : rkV.NativeObject, object.Equals(rkProduct, null) ? IntPtr.Zero : rkProduct.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Math_CMatrix3_hasScale_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///判断矩阵是否可缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>可以缩放返回true，否则false</returns>
					public bool HasScale()
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix3_hasScale_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double Get_EarthView_World_Spatial_Math_CMatrix3_EPSILON( );

					public 					static double EPSILON
					{
						get
						{
							double ret=Get_EarthView_World_Spatial_Math_CMatrix3_EPSILON();
							
							return ret;
							
						}

					}

					private static EarthView.World.Spatial.Math.Matrix3 ZEROField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix3_ZERO( );

					public 					static EarthView.World.Spatial.Math.Matrix3 ZERO
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix3_ZERO();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(ZEROField, null)){
								ZEROField.NativeObject = __ptr;
								return ZEROField;
							}
							EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix3");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
								csObj.BindNativeObject(__ptr, "CMatrix3");
							}
							return csObj;
							
						}

					}

					private static EarthView.World.Spatial.Math.Matrix3 IDENTITYField;
					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_MathEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix3_IDENTITY( );

					public 					static EarthView.World.Spatial.Math.Matrix3 IDENTITY
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix3_IDENTITY();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(IDENTITYField, null)){
								IDENTITYField.NativeObject = __ptr;
								return IDENTITYField;
							}
							EarthView.World.Spatial.Math.Matrix3 csObj = new EarthView.World.Spatial.Math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix3");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix3;
								csObj.BindNativeObject(__ptr, "CMatrix3");
							}
							return csObj;
							
						}

					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadMatrix3 = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMatrix3 = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMatrix3", new Matrix3ClassFactory());

					public Matrix3(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Matrix3 FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Matrix3 obj = baseObj as  Matrix3;
						if (object.Equals(obj, null))
						{
							obj = new Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMatrix3");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Matrix3ClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Matrix3 emptyInstance = new Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
