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
				/// 四维矩阵类,
				/// 定义了四维矩阵操作函数
				/// </summary>
				public class Matrix4 : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public Matrix4() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMatrix4",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="m00">数组元素</param>
					/// <param name="m01">数组元素</param>
					/// <param name="m02">数组元素</param>
					/// <param name="m03">数组元素</param>
					/// <param name="m10">数组元素</param>
					/// <param name="m11">数组元素</param>
					/// <param name="m12">数组元素</param>
					/// <param name="m13">数组元素</param>
					/// <param name="m20">数组元素</param>
					/// <param name="m21">数组元素</param>
					/// <param name="m22">数组元素</param>
					/// <param name="m23">数组元素</param>
					/// <param name="m30">数组元素</param>
					/// <param name="m31">数组元素</param>
					/// <param name="m32">数组元素</param>
					/// <param name="m33">数组元素</param>
					/// <returns></returns>
					public Matrix4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuem00 = new BasePtr(m00);
						list.Add("m00", valuem00.PtrVal);
						BasePtr valuem01 = new BasePtr(m01);
						list.Add("m01", valuem01.PtrVal);
						BasePtr valuem02 = new BasePtr(m02);
						list.Add("m02", valuem02.PtrVal);
						BasePtr valuem03 = new BasePtr(m03);
						list.Add("m03", valuem03.PtrVal);
						BasePtr valuem10 = new BasePtr(m10);
						list.Add("m10", valuem10.PtrVal);
						BasePtr valuem11 = new BasePtr(m11);
						list.Add("m11", valuem11.PtrVal);
						BasePtr valuem12 = new BasePtr(m12);
						list.Add("m12", valuem12.PtrVal);
						BasePtr valuem13 = new BasePtr(m13);
						list.Add("m13", valuem13.PtrVal);
						BasePtr valuem20 = new BasePtr(m20);
						list.Add("m20", valuem20.PtrVal);
						BasePtr valuem21 = new BasePtr(m21);
						list.Add("m21", valuem21.PtrVal);
						BasePtr valuem22 = new BasePtr(m22);
						list.Add("m22", valuem22.PtrVal);
						BasePtr valuem23 = new BasePtr(m23);
						list.Add("m23", valuem23.PtrVal);
						BasePtr valuem30 = new BasePtr(m30);
						list.Add("m30", valuem30.PtrVal);
						BasePtr valuem31 = new BasePtr(m31);
						list.Add("m31", valuem31.PtrVal);
						BasePtr valuem32 = new BasePtr(m32);
						list.Add("m32", valuem32.PtrVal);
						BasePtr valuem33 = new BasePtr(m33);
						list.Add("m33", valuem33.PtrVal);
						Create("CMatrix4", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 从三维矩阵扩展成四维矩阵构造函数
					/// </summary>
					/// <param name="m3x3">三维矩阵</param>
					/// <returns></returns>
					public Matrix4(EarthView.World.Spatial.Math.Matrix3 m3x3) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuem3x3 = new BasePtr(m3x3);
						list.Add("m3x3", valuem3x3.PtrVal);
						Create("CMatrix4", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 从四元数扩展成四维矩阵构造函数
					/// </summary>
					/// <param name="rot">四元数</param>
					/// <returns></returns>
					public Matrix4(EarthView.World.Spatial.Math.Quaternion rot) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuerot = new BasePtr(rot);
						list.Add("rot", valuerot.PtrVal);
						Create("CMatrix4", list);
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_swap_void_CMatrix4(IntPtr pNativeObject, IntPtr other);

					/// <summary>
					/// 与另一矩阵元素交换
					/// </summary>
					/// <param name="other">其它矩阵</param>
					/// <returns></returns>
					public void Swap(ref EarthView.World.Spatial.Math.Matrix4 other)
					{
						EarthView_World_Spatial_Math_CMatrix4_swap_void_CMatrix4(this.NativeObject, object.Equals(other, null) ? IntPtr.Zero : other.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_concatenate_CMatrix4_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 与其它矩阵相乘连接
					/// </summary>
					/// <param name="m2">其它矩阵</param>
					/// <returns>连接后结果矩阵</returns>
					public EarthView.World.Spatial.Math.Matrix4 Concatenate(EarthView.World.Spatial.Math.Matrix4 m2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_concatenate_CMatrix4_CMatrix4(this.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 矩阵乘法
					/// </summary>
					/// <param name="m2">其它矩阵</param>
					/// <returns>相乘后结果矩阵</returns>
					public 					static EarthView.World.Spatial.Math.Matrix4 operator *(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Matrix4 m2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_CMatrix4(mCMatrix4.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector3_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					/// 矩阵与三维向量相乘
					/// </summary>
					/// <param name="v">三维向量</param>
					/// <returns>结果向量</returns>
					public 					static EarthView.World.Spatial.Math.Vector3 operator *(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector3_CVector3(mCMatrix4.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector4_CVector4(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					/// 矩阵与四维向量相乘
					/// </summary>
					/// <param name="v">四维向量</param>
					/// <returns>结果向量</returns>
					public 					static EarthView.World.Spatial.Math.Vector4 operator *(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Vector4 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CVector4_CVector4(mCMatrix4.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						EarthView.World.Spatial.Math.Vector4 csObj = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
							csObj.BindNativeObject(__ptr, "CVector4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CPlane_CPlane(IntPtr pNativeObject, IntPtr p);

					/// <summary>
					/// 矩阵与平面相乘
					/// </summary>
					/// <param name="p">平面对象</param>
					/// <returns>结果平面</returns>
					public 					static EarthView.World.Spatial.Math.Plane operator *(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Plane p)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CPlane_CPlane(mCMatrix4.NativeObject, object.Equals(p, null) ? IntPtr.Zero : p.NativeObject);
						
						EarthView.World.Spatial.Math.Plane csObj = new EarthView.World.Spatial.Math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CPlane");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Plane;
							csObj.BindNativeObject(__ptr, "CPlane");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorPlus_CMatrix4_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 矩阵加法
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>结果矩阵</returns>
					public 					static EarthView.World.Spatial.Math.Matrix4 operator +(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Matrix4 m2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorPlus_CMatrix4_CMatrix4(mCMatrix4.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMinus_CMatrix4_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 矩阵减法
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>结果矩阵</returns>
					public 					static EarthView.World.Spatial.Math.Matrix4 operator -(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Matrix4 m2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMinus_CMatrix4_CMatrix4(mCMatrix4.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern byte EarthView_World_Spatial_Math_CMatrix4_OperatorEquals_ev_bool_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 判断矩阵相等
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>相等返回true，否则false</returns>
					public 					static bool operator ==(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Matrix4 m2)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix4_OperatorEquals_ev_bool_CMatrix4(mCMatrix4.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial_Math_CMatrix4_OperatorNotEquals_ev_bool_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					/// 判断矩阵非相等
					/// </summary>
					/// <param name="m2">其它四维矩阵</param>
					/// <returns>非相等返回true，否则false</returns>
					public 					static bool operator !=(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,EarthView.World.Spatial.Math.Matrix4 m2)
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix4_OperatorNotEquals_ev_bool_CMatrix4(mCMatrix4.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_OperatorAssign_void_CMatrix3(IntPtr pNativeObject, IntPtr mat3);

					/// <summary>
					/// 从三维矩阵赋值
					/// </summary>
					/// <param name="mat3">三维矩阵</param>
					/// <returns></returns>
					public void OperatorAssign(EarthView.World.Spatial.Math.Matrix3 mat3)
					{
						EarthView_World_Spatial_Math_CMatrix4_OperatorAssign_void_CMatrix3(this.NativeObject, object.Equals(mat3, null) ? IntPtr.Zero : mat3.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_transpose_CMatrix4(IntPtr pNativeObject);

					/// <summary>
					///矩阵转置
					/// </summary>
					/// <param name=""></param>
					/// <returns>转置后矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix4 Transpose()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_transpose_CMatrix4(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_setTrans_void_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///设置变换矩阵中平移部分
					/// </summary>
					/// <param name="v">平移的三维向量</param>
					/// <returns></returns>
					public void SetTrans(EarthView.World.Spatial.Math.Vector3 v)
					{
						EarthView_World_Spatial_Math_CMatrix4_setTrans_void_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_getTrans_CVector3(IntPtr pNativeObject);

					/// <summary>
					///提取变换矩阵中平移部分
					/// </summary>
					/// <param name=""></param>
					/// <returns>平移向量</returns>
					public EarthView.World.Spatial.Math.Vector3 GetTrans()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_getTrans_CVector3(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///构建平移变换矩阵
					/// </summary>
					/// <param name="v">平移三维向量</param>
					/// <returns></returns>
					public void MakeTrans(EarthView.World.Spatial.Math.Vector3 v)
					{
						EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_Real_Real_Real(IntPtr pNativeObject, double tx, double ty, double tz);

					/// <summary>
					///构建平移变换矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns></returns>
					public void MakeTrans(double tx, double ty, double tz)
					{
						EarthView_World_Spatial_Math_CMatrix4_makeTrans_void_Real_Real_Real(this.NativeObject, tx, ty, tz);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_CVector3(IntPtr v);

					/// <summary>
					///由三维向量获得平移矩阵
					/// </summary>
					/// <param name="v">向量</param>
					/// <returns>平移矩阵</returns>
					public static EarthView.World.Spatial.Math.Matrix4 GetTrans(EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_CVector3(object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_Real_Real_Real(double t_x, double t_y, double t_z);

					/// <summary>
					///由实数获得平移矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns>平移矩阵</returns>
					public static EarthView.World.Spatial.Math.Matrix4 GetTrans(double t_x, double t_y, double t_z)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_getTrans_CMatrix4_Real_Real_Real(t_x, t_y, t_z);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_setScale_void_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///设置矩阵缩放部分
					/// </summary>
					/// <param name="v"></param>
					/// <returns></returns>
					public void SetScale(EarthView.World.Spatial.Math.Vector3 v)
					{
						EarthView_World_Spatial_Math_CMatrix4_setScale_void_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_CVector3(IntPtr v);

					/// <summary>
					///由三维向量获得缩放矩阵
					/// </summary>
					/// <param name="v">向量</param>
					/// <returns>缩放矩阵</returns>
					public static EarthView.World.Spatial.Math.Matrix4 GetScale(EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_CVector3(object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_Real_Real_Real(double s_x, double s_y, double s_z);

					/// <summary>
					///由实数获得缩放矩阵
					/// </summary>
					/// <param name="tx">x方向值</param>
					/// <param name="ty">y方向值</param>
					/// <param name="tz">z方向值</param>
					/// <returns>缩放矩阵</returns>
					public static EarthView.World.Spatial.Math.Matrix4 GetScale(double s_x, double s_y, double s_z)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_getScale_CMatrix4_Real_Real_Real(s_x, s_y, s_z);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_extract3x3Matrix_void_CMatrix3(IntPtr pNativeObject, IntPtr m3x3);

					/// <summary>
					///由矩阵析出旋转和缩放三维矩阵
					/// </summary>
					/// <param name="m3x3">结果三维矩阵</param>
					/// <returns></returns>
					public void Extract3x3Matrix(ref  EarthView.World.Spatial.Math.Matrix3 m3x3)
					{
						EarthView_World_Spatial_Math_CMatrix4_extract3x3Matrix_void_CMatrix3(this.NativeObject, object.Equals(m3x3, null) ? IntPtr.Zero : m3x3.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial_Math_CMatrix4_hasScale_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///判断矩阵是否可缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>可以缩放返回true，否则false</returns>
					public bool HasScale()
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix4_hasScale_ev_bool(this.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial_Math_CMatrix4_hasNegativeScale_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///判断矩阵是否可负值缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>可以返回true，否则false</returns>
					public bool HasNegativeScale()
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix4_hasNegativeScale_ev_bool(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_get_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(IntPtr pNativeObject, ref double m00, ref double m01, ref double m02, ref double m03, ref double m10, ref double m11, ref double m12, ref double m13, ref double m20, ref double m21, ref double m22, ref double m23, ref double m30, ref double m31, ref double m32, ref double m33);

					public void Get(ref double m00, ref double m01, ref double m02, ref double m03, ref double m10, ref double m11, ref double m12, ref double m13, ref double m20, ref double m21, ref double m22, ref double m23, ref double m30, ref double m31, ref double m32, ref double m33)
					{
						EarthView_World_Spatial_Math_CMatrix4_get_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(this.NativeObject, ref m00, ref m01, ref m02, ref m03, ref m10, ref m11, ref m12, ref m13, ref m20, ref m21, ref m22, ref m23, ref m30, ref m31, ref m32, ref m33);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_set_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(IntPtr pNativeObject, double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33);

					public void Set(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
					{
						EarthView_World_Spatial_Math_CMatrix4_set_void_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(this.NativeObject, m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_extractQuaternion_CQuaternion(IntPtr pNativeObject);

					/// <summary>
					///由矩阵析出旋转和缩放四元数
					/// </summary>
					/// <param name=""></param>
					/// <returns>四元数结果</returns>
					public EarthView.World.Spatial.Math.Quaternion ExtractQuaternion()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_extractQuaternion_CQuaternion(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Quaternion csObj = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CQuaternion");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
							csObj.BindNativeObject(__ptr, "CQuaternion");
						}
						return csObj;
						
					}

					private static EarthView.World.Spatial.Math.Matrix4 ZEROField;
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
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix4_ZERO( );

					public 					static EarthView.World.Spatial.Math.Matrix4 ZERO
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix4_ZERO();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(ZEROField, null)){
								ZEROField.NativeObject = __ptr;
								return ZEROField;
							}
							EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix4");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
								csObj.BindNativeObject(__ptr, "CMatrix4");
							}
							return csObj;
							
						}

					}

					private static EarthView.World.Spatial.Math.Matrix4 ZEROAFFINEField;
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
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix4_ZEROAFFINE( );

					public 					static EarthView.World.Spatial.Math.Matrix4 ZEROAFFINE
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix4_ZEROAFFINE();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(ZEROAFFINEField, null)){
								ZEROAFFINEField.NativeObject = __ptr;
								return ZEROAFFINEField;
							}
							EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix4");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
								csObj.BindNativeObject(__ptr, "CMatrix4");
							}
							return csObj;
							
						}

					}

					private static EarthView.World.Spatial.Math.Matrix4 IDENTITYField;
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
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix4_IDENTITY( );

					public 					static EarthView.World.Spatial.Math.Matrix4 IDENTITY
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix4_IDENTITY();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(IDENTITYField, null)){
								IDENTITYField.NativeObject = __ptr;
								return IDENTITYField;
							}
							EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix4");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
								csObj.BindNativeObject(__ptr, "CMatrix4");
							}
							return csObj;
							
						}

					}

					private static EarthView.World.Spatial.Math.Matrix4 CLIPSPACE2DTOIMAGESPACEField;
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
					private static extern IntPtr Get_EarthView_World_Spatial_Math_CMatrix4_CLIPSPACE2DTOIMAGESPACE( );

					public 					static EarthView.World.Spatial.Math.Matrix4 CLIPSPACE2DTOIMAGESPACE
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Spatial_Math_CMatrix4_CLIPSPACE2DTOIMAGESPACE();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(CLIPSPACE2DTOIMAGESPACEField, null)){
								CLIPSPACE2DTOIMAGESPACEField.NativeObject = __ptr;
								return CLIPSPACE2DTOIMAGESPACEField;
							}
							EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CMatrix4");
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
								csObj.BindNativeObject(__ptr, "CMatrix4");
							}
							return csObj;
							
						}

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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_Real(IntPtr pNativeObject, double scalar);

					/// <summary>
					///由矩阵与实数相乘，缩放
					/// </summary>
					/// <param name="scalar">实数系数</param>
					/// <returns>结果矩阵</returns>
					public 					static EarthView.World.Spatial.Math.Matrix4 operator *(EarthView.World.Spatial.Math.Matrix4 mCMatrix4,double scalar)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_OperatorMultiply_CMatrix4_Real(mCMatrix4.NativeObject, scalar);
						
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_adjoint_CMatrix4(IntPtr pNativeObject);

					/// <summary>
					///求伴随矩阵
					/// </summary>
					/// <param name="">输出流对象</param>
					/// <returns>伴随矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix4 Adjoint()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_adjoint_CMatrix4(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern double EarthView_World_Spatial_Math_CMatrix4_determinant_Real(IntPtr pNativeObject);

					/// <summary>
					///矩阵行列式化(求模)
					/// </summary>
					/// <param name=""></param>
					/// <returns>模结果</returns>
					public double Determinant()
					{
						double ret=EarthView_World_Spatial_Math_CMatrix4_determinant_Real(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_inverse_CMatrix4(IntPtr pNativeObject);

					/// <summary>
					///矩阵求逆
					/// </summary>
					/// <param name=""></param>
					/// <returns>求逆后矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix4 Inverse()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_inverse_CMatrix4(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_makeTransform_void_CVector3_CVector3_CQuaternion(IntPtr pNativeObject, IntPtr position, IntPtr scale, IntPtr orientation);

					/// <summary>
					///构建方向/缩放/位置变换矩阵，变换顺序为缩放、旋转、平移
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					public void MakeTransform(EarthView.World.Spatial.Math.Vector3 position, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Quaternion orientation)
					{
						EarthView_World_Spatial_Math_CMatrix4_makeTransform_void_CVector3_CVector3_CQuaternion(this.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_makeInverseTransform_void_CVector3_CVector3_CQuaternion(IntPtr pNativeObject, IntPtr position, IntPtr scale, IntPtr orientation);

					/// <summary>
					///构建方向/缩放/位置变换逆矩阵，变换顺序为缩放、旋转、平移
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					public void MakeInverseTransform(EarthView.World.Spatial.Math.Vector3 position, EarthView.World.Spatial.Math.Vector3 scale, EarthView.World.Spatial.Math.Quaternion orientation)
					{
						EarthView_World_Spatial_Math_CMatrix4_makeInverseTransform_void_CVector3_CVector3_CQuaternion(this.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Math_CMatrix4_decomposition_void_CVector3_CVector3_CQuaternion(IntPtr pNativeObject, IntPtr position, IntPtr scale, IntPtr orientation);

					/// <summary>
					///分解矩阵为缩放、旋转、平移向量
					/// </summary>
					/// <param name="position">平移向量</param>
					/// <param name="scale">缩放向量</param>
					/// <param name="orientation">旋转四元数</param>
					/// <returns></returns>
					public void Decomposition(ref  EarthView.World.Spatial.Math.Vector3 position, ref  EarthView.World.Spatial.Math.Vector3 scale, ref  EarthView.World.Spatial.Math.Quaternion orientation)
					{
						EarthView_World_Spatial_Math_CMatrix4_decomposition_void_CVector3_CVector3_CQuaternion(this.NativeObject, object.Equals(position, null) ? IntPtr.Zero : position.NativeObject, object.Equals(scale, null) ? IntPtr.Zero : scale.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial_Math_CMatrix4_isAffine_ev_bool(IntPtr pNativeObject);

					/// <summary>
					///判断矩阵是否为相似矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>是返回true，否则false</returns>
					public bool IsAffine()
					{
						byte ret=EarthView_World_Spatial_Math_CMatrix4_isAffine_ev_bool(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_inverseAffine_CMatrix4(IntPtr pNativeObject);

					/// <summary>
					///求相似矩阵逆矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回相似矩阵逆矩阵结果</returns>
					public EarthView.World.Spatial.Math.Matrix4 InverseAffine()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_inverseAffine_CMatrix4(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_concatenateAffine_CMatrix4_CMatrix4(IntPtr pNativeObject, IntPtr m2);

					/// <summary>
					///与相似矩阵相乘连接
					/// </summary>
					/// <param name="m2">其它相似矩阵</param>
					/// <returns>返回连接结果</returns>
					public EarthView.World.Spatial.Math.Matrix4 ConcatenateAffine(EarthView.World.Spatial.Math.Matrix4 m2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_concatenateAffine_CMatrix4_CMatrix4(this.NativeObject, object.Equals(m2, null) ? IntPtr.Zero : m2.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector3_CVector3(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///用相似矩阵变换三维向量
					/// </summary>
					/// <param name="v">三维向量</param>
					/// <returns>返回结果向量</returns>
					public EarthView.World.Spatial.Math.Vector3 TransformAffine(EarthView.World.Spatial.Math.Vector3 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector3_CVector3(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector4_CVector4(IntPtr pNativeObject, IntPtr v);

					/// <summary>
					///用相似矩阵变换四维向量
					/// </summary>
					/// <param name="v">四维向量</param>
					/// <returns>返回结果向量</returns>
					public EarthView.World.Spatial.Math.Vector4 TransformAffine(EarthView.World.Spatial.Math.Vector4 v)
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_transformAffine_CVector4_CVector4(this.NativeObject, object.Equals(v, null) ? IntPtr.Zero : v.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector4 csObj = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
							csObj.BindNativeObject(__ptr, "CVector4");
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
					private static extern IntPtr EarthView_World_Spatial_Math_CMatrix4_toMatrix4f_CMatrix4(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Matrix4 ToMatrix4f()
					{
						IntPtr __ptr = EarthView_World_Spatial_Math_CMatrix4_toMatrix4f_CMatrix4(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Matrix4 csObj = new EarthView.World.Spatial.Math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMatrix4");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Matrix4;
							csObj.BindNativeObject(__ptr, "CMatrix4");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadMatrix4 = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadMatrix4 = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMatrix4", new Matrix4ClassFactory());

					public Matrix4(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Matrix4 FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Matrix4 obj = baseObj as  Matrix4;
						if (object.Equals(obj, null))
						{
							obj = new Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMatrix4");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class Matrix4ClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Matrix4 emptyInstance = new Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
