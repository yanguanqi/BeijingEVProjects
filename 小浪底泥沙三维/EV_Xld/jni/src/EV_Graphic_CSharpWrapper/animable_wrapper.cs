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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			/// <summary>
			/// 动画的值
			/// 管理动画的值类型
			/// </summary>
			public class AnimableValue : EarthView.World.Core.AllocatedObject
			{
				public enum VALUETYPE
				{
								INT,
								REAL,
								VECTOR2,
								VECTOR3,
								VECTOR4,
								QUATERNION,
								COLOUR,
								RADIAN,
								DEGREE
				
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_ev_int32(int val);

				protected setAsBaseValue_CallBack_void_ev_int32 m_setAsBaseValue_CallBack_void_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32_NoVirtual(IntPtr pNativeObject, int val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值int32</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(int val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32_Function(int val)
				{
					SetAsBaseValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32(IntPtr pNativeObject, int val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值int32</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(int val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_Real(double val);

				protected setAsBaseValue_CallBack_void_Real m_setAsBaseValue_CallBack_void_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real_NoVirtual(IntPtr pNativeObject, double val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值real</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(double val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real_Function(double val)
				{
					SetAsBaseValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real(IntPtr pNativeObject, double val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值real</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(double val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CVector2(IntPtr val);

				protected setAsBaseValue_CallBack_void_CVector2 m_setAsBaseValue_CallBack_void_CVector2;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vactor2</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector2 csobj_val = new EarthView.World.Spatial.Math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector2");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector2;
						csobj_val.BindNativeObject(val, "CVector2");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vactor2</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CVector3(IntPtr val);

				protected setAsBaseValue_CallBack_void_CVector3 m_setAsBaseValue_CallBack_void_CVector3;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vector3</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_val = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector3");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_val.BindNativeObject(val, "CVector3");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vector3</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CVector4(IntPtr val);

				protected setAsBaseValue_CallBack_void_CVector4 m_setAsBaseValue_CallBack_void_CVector4;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vector4</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_val = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector4");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_val.BindNativeObject(val, "CVector4");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值vector4</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CQuaternion(IntPtr val);

				protected setAsBaseValue_CallBack_void_CQuaternion m_setAsBaseValue_CallBack_void_CQuaternion;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值quaternion</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Quaternion csobj_val = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CQuaternion");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_val.BindNativeObject(val, "CQuaternion");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值quaternion</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CColourValue(IntPtr val);

				protected setAsBaseValue_CallBack_void_CColourValue m_setAsBaseValue_CallBack_void_CColourValue;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值colovalue</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue_Function(IntPtr val)
				{
					EarthView.World.Graphic.ColourValue csobj_val = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CColourValue");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csobj_val.BindNativeObject(val, "CColourValue");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值colovalue</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CRadian(IntPtr val);

				protected setAsBaseValue_CallBack_void_CRadian m_setAsBaseValue_CallBack_void_CRadian;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值radian</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Radian csobj_val = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CRadian");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
						csobj_val.BindNativeObject(val, "CRadian");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值radian</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setAsBaseValue_CallBack_void_CDegree(IntPtr val);

				protected setAsBaseValue_CallBack_void_CDegree m_setAsBaseValue_CallBack_void_CDegree;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值degree</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue_NoVirtual(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Degree csobj_val = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CDegree");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csobj_val.BindNativeObject(val, "CDegree");
						csobj_val.Delegate = true;
					}
					
					SetAsBaseValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画基值
				/// </summary>
				/// <param name="val">动画的值degree</param>
				/// <returns></returns>
				protected virtual void SetAsBaseValue(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="t">动画的值类型</param>
				/// <returns></returns>
				public AnimableValue(EarthView.World.Graphic.AnimableValue.VALUETYPE t) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuet = new BasePtr(t);
					list.Add("t", valuet.PtrVal);
					Create("CAnimableValueProxy", list);
					if (!"EarthView.World.Graphic.AnimableValue".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Graphic_CAnimableValue_getType_ValueType(IntPtr pNativeObject);

				/// <summary>
				/// 获得动画的值类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画的值类型</returns>
				public EarthView.World.Graphic.AnimableValue.VALUETYPE GetType()
				{
					int ret=EarthView_World_Graphic_CAnimableValue_getType_ValueType(this.NativeObject);
					
					return (EarthView.World.Graphic.AnimableValue.VALUETYPE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setCurrentStateAsBaseValue_CallBack_void();

				protected setCurrentStateAsBaseValue_CallBack_void m_setCurrentStateAsBaseValue_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 在数值动画中设置当前值类型为基值类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画的值类型</returns>
				public virtual void SetCurrentStateAsBaseValue_NoVirtual()
				{
					EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void_Function()
				{
					SetCurrentStateAsBaseValue();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void(IntPtr pNativeObject);

				/// <summary>
				/// 在数值动画中设置当前值类型为基值类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>动画的值类型</returns>
				public virtual void SetCurrentStateAsBaseValue()
				{
					EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_ev_int32(int val);

				protected setValue_CallBack_void_ev_int32 m_setValue_CallBack_void_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32_NoVirtual(IntPtr pNativeObject, int val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(int val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32_Function(int val)
				{
					SetValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32(IntPtr pNativeObject, int val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(int val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_Real(double val);

				protected setValue_CallBack_void_Real m_setValue_CallBack_void_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_Real_NoVirtual(IntPtr pNativeObject, double val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(double val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_Real_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_Real_Function(double val)
				{
					SetValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_Real(IntPtr pNativeObject, double val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(double val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_Real(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CVector2(IntPtr val);

				protected setValue_CallBack_void_CVector2 m_setValue_CallBack_void_CVector2;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector2 csobj_val = new EarthView.World.Spatial.Math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector2");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector2;
						csobj_val.BindNativeObject(val, "CVector2");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CVector3(IntPtr val);

				protected setValue_CallBack_void_CVector3 m_setValue_CallBack_void_CVector3;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_val = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector3");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_val.BindNativeObject(val, "CVector3");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CVector4(IntPtr val);

				protected setValue_CallBack_void_CVector4 m_setValue_CallBack_void_CVector4;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_val = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector4");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_val.BindNativeObject(val, "CVector4");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CQuaternion(IntPtr val);

				protected setValue_CallBack_void_CQuaternion m_setValue_CallBack_void_CQuaternion;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Quaternion csobj_val = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CQuaternion");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_val.BindNativeObject(val, "CQuaternion");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CColourValue(IntPtr val);

				protected setValue_CallBack_void_CColourValue m_setValue_CallBack_void_CColourValue;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue_Function(IntPtr val)
				{
					EarthView.World.Graphic.ColourValue csobj_val = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CColourValue");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csobj_val.BindNativeObject(val, "CColourValue");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CRadian(IntPtr val);

				protected setValue_CallBack_void_CRadian m_setValue_CallBack_void_CRadian;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Radian csobj_val = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CRadian");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
						csobj_val.BindNativeObject(val, "CRadian");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setValue_CallBack_void_CDegree(IntPtr val);

				protected setValue_CallBack_void_CDegree m_setValue_CallBack_void_CDegree;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue_NoVirtual(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Degree csobj_val = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CDegree");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csobj_val.BindNativeObject(val, "CDegree");
						csobj_val.Delegate = true;
					}
					
					SetValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 设置动画值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void SetValue(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void resetToBaseValue_CallBack_void();

				protected resetToBaseValue_CallBack_void m_resetToBaseValue_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 重新设置动画的值为动画基值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ResetToBaseValue_NoVirtual()
				{
					EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void_Function()
				{
					ResetToBaseValue();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void(IntPtr pNativeObject);

				/// <summary>
				/// 重新设置动画的值为动画基值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ResetToBaseValue()
				{
					EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_ev_int32(int val);

				protected applyDeltaValue_CallBack_void_ev_int32 m_applyDeltaValue_CallBack_void_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32_NoVirtual(IntPtr pNativeObject, int val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(int val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32_Function(int val)
				{
					ApplyDeltaValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32(IntPtr pNativeObject, int val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(int val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_Real(double val);

				protected applyDeltaValue_CallBack_void_Real m_applyDeltaValue_CallBack_void_Real;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real_NoVirtual(IntPtr pNativeObject, double val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(double val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real_NoVirtual(this.NativeObject, val);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real_Function(double val)
				{
					ApplyDeltaValue(val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real(IntPtr pNativeObject, double val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(double val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real(this.NativeObject, val);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CVector2(IntPtr val);

				protected applyDeltaValue_CallBack_void_CVector2 m_applyDeltaValue_CallBack_void_CVector2;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector2 csobj_val = new EarthView.World.Spatial.Math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector2");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector2;
						csobj_val.BindNativeObject(val, "CVector2");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Vector2 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CVector3(IntPtr val);

				protected applyDeltaValue_CallBack_void_CVector3 m_applyDeltaValue_CallBack_void_CVector3;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector3 csobj_val = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector3");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
						csobj_val.BindNativeObject(val, "CVector3");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Vector3 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CVector4(IntPtr val);

				protected applyDeltaValue_CallBack_void_CVector4 m_applyDeltaValue_CallBack_void_CVector4;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Vector4 csobj_val = new EarthView.World.Spatial.Math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CVector4");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Vector4;
						csobj_val.BindNativeObject(val, "CVector4");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Vector4 val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CQuaternion(IntPtr val);

				protected applyDeltaValue_CallBack_void_CQuaternion m_applyDeltaValue_CallBack_void_CQuaternion;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion_NoVirtual(IntPtr pNativeObject, IntPtr val);

				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Quaternion csobj_val = new EarthView.World.Spatial.Math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CQuaternion");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Quaternion;
						csobj_val.BindNativeObject(val, "CQuaternion");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion(IntPtr pNativeObject, IntPtr val);

				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Quaternion val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CColourValue(IntPtr val);

				protected applyDeltaValue_CallBack_void_CColourValue m_applyDeltaValue_CallBack_void_CColourValue;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue_Function(IntPtr val)
				{
					EarthView.World.Graphic.ColourValue csobj_val = new EarthView.World.Graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CColourValue");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Graphic.ColourValue;
						csobj_val.BindNativeObject(val, "CColourValue");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Graphic.ColourValue val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CDegree(IntPtr val);

				protected applyDeltaValue_CallBack_void_CDegree m_applyDeltaValue_CallBack_void_CDegree;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Degree csobj_val = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CDegree");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
						csobj_val.BindNativeObject(val, "CDegree");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Degree val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void applyDeltaValue_CallBack_void_CRadian(IntPtr val);

				protected applyDeltaValue_CallBack_void_CRadian m_applyDeltaValue_CallBack_void_CRadian;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue_NoVirtual(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian_Function(IntPtr val)
				{
					EarthView.World.Spatial.Math.Radian csobj_val = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"CRadian");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
						csobj_val.BindNativeObject(val, "CRadian");
						csobj_val.Delegate = true;
					}
					
					ApplyDeltaValue(csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 应用增量数值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void ApplyDeltaValue(EarthView.World.Spatial.Math.Radian val)
				{
					EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadAnimableValue = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableValue = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimableValue", new AnimableValueClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimableValueProxy", new AnimableValueClassFactory());

				public AnimableValue(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32(IntPtr pObject, setAsBaseValue_CallBack_void_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real(IntPtr pObject, setAsBaseValue_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2(IntPtr pObject, setAsBaseValue_CallBack_void_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3(IntPtr pObject, setAsBaseValue_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4(IntPtr pObject, setAsBaseValue_CallBack_void_CVector4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion(IntPtr pObject, setAsBaseValue_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue(IntPtr pObject, setAsBaseValue_CallBack_void_CColourValue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian(IntPtr pObject, setAsBaseValue_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree(IntPtr pObject, setAsBaseValue_CallBack_void_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void(IntPtr pObject, setCurrentStateAsBaseValue_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32(IntPtr pObject, setValue_CallBack_void_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_Real(IntPtr pObject, setValue_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2(IntPtr pObject, setValue_CallBack_void_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3(IntPtr pObject, setValue_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4(IntPtr pObject, setValue_CallBack_void_CVector4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion(IntPtr pObject, setValue_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue(IntPtr pObject, setValue_CallBack_void_CColourValue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian(IntPtr pObject, setValue_CallBack_void_CRadian pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree(IntPtr pObject, setValue_CallBack_void_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void(IntPtr pObject, resetToBaseValue_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32(IntPtr pObject, applyDeltaValue_CallBack_void_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real(IntPtr pObject, applyDeltaValue_CallBack_void_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2(IntPtr pObject, applyDeltaValue_CallBack_void_CVector2 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3(IntPtr pObject, applyDeltaValue_CallBack_void_CVector3 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4(IntPtr pObject, applyDeltaValue_CallBack_void_CVector4 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion(IntPtr pObject, applyDeltaValue_CallBack_void_CQuaternion pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue(IntPtr pObject, applyDeltaValue_CallBack_void_CColourValue pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree(IntPtr pObject, applyDeltaValue_CallBack_void_CDegree pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian(IntPtr pObject, applyDeltaValue_CallBack_void_CRadian pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_setAsBaseValue_CallBack_void_ev_int32 = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_ev_int32(this.NativeObject, m_setAsBaseValue_CallBack_void_ev_int32);
						m_setAsBaseValue_CallBack_void_Real = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_Real(this.NativeObject, m_setAsBaseValue_CallBack_void_Real);
						m_setAsBaseValue_CallBack_void_CVector2 = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector2(this.NativeObject, m_setAsBaseValue_CallBack_void_CVector2);
						m_setAsBaseValue_CallBack_void_CVector3 = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector3(this.NativeObject, m_setAsBaseValue_CallBack_void_CVector3);
						m_setAsBaseValue_CallBack_void_CVector4 = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CVector4(this.NativeObject, m_setAsBaseValue_CallBack_void_CVector4);
						m_setAsBaseValue_CallBack_void_CQuaternion = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CQuaternion(this.NativeObject, m_setAsBaseValue_CallBack_void_CQuaternion);
						m_setAsBaseValue_CallBack_void_CColourValue = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CColourValue(this.NativeObject, m_setAsBaseValue_CallBack_void_CColourValue);
						m_setAsBaseValue_CallBack_void_CRadian = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CRadian(this.NativeObject, m_setAsBaseValue_CallBack_void_CRadian);
						m_setAsBaseValue_CallBack_void_CDegree = EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree_Function;
						GC.KeepAlive(m_setAsBaseValue_CallBack_void_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setAsBaseValue_void_CDegree(this.NativeObject, m_setAsBaseValue_CallBack_void_CDegree);
						m_setCurrentStateAsBaseValue_CallBack_void = EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void_Function;
						GC.KeepAlive(m_setCurrentStateAsBaseValue_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setCurrentStateAsBaseValue_void(this.NativeObject, m_setCurrentStateAsBaseValue_CallBack_void);
						m_setValue_CallBack_void_ev_int32 = EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32_Function;
						GC.KeepAlive(m_setValue_CallBack_void_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_ev_int32(this.NativeObject, m_setValue_CallBack_void_ev_int32);
						m_setValue_CallBack_void_Real = EarthView_World_Graphic_CAnimableValue_setValue_void_Real_Function;
						GC.KeepAlive(m_setValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_Real(this.NativeObject, m_setValue_CallBack_void_Real);
						m_setValue_CallBack_void_CVector2 = EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector2(this.NativeObject, m_setValue_CallBack_void_CVector2);
						m_setValue_CallBack_void_CVector3 = EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector3(this.NativeObject, m_setValue_CallBack_void_CVector3);
						m_setValue_CallBack_void_CVector4 = EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CVector4(this.NativeObject, m_setValue_CallBack_void_CVector4);
						m_setValue_CallBack_void_CQuaternion = EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CQuaternion(this.NativeObject, m_setValue_CallBack_void_CQuaternion);
						m_setValue_CallBack_void_CColourValue = EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CColourValue(this.NativeObject, m_setValue_CallBack_void_CColourValue);
						m_setValue_CallBack_void_CRadian = EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CRadian(this.NativeObject, m_setValue_CallBack_void_CRadian);
						m_setValue_CallBack_void_CDegree = EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree_Function;
						GC.KeepAlive(m_setValue_CallBack_void_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_setValue_void_CDegree(this.NativeObject, m_setValue_CallBack_void_CDegree);
						m_resetToBaseValue_CallBack_void = EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void_Function;
						GC.KeepAlive(m_resetToBaseValue_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_resetToBaseValue_void(this.NativeObject, m_resetToBaseValue_CallBack_void);
						m_applyDeltaValue_CallBack_void_ev_int32 = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_ev_int32);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_ev_int32(this.NativeObject, m_applyDeltaValue_CallBack_void_ev_int32);
						m_applyDeltaValue_CallBack_void_Real = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_Real(this.NativeObject, m_applyDeltaValue_CallBack_void_Real);
						m_applyDeltaValue_CallBack_void_CVector2 = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CVector2);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector2(this.NativeObject, m_applyDeltaValue_CallBack_void_CVector2);
						m_applyDeltaValue_CallBack_void_CVector3 = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CVector3);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector3(this.NativeObject, m_applyDeltaValue_CallBack_void_CVector3);
						m_applyDeltaValue_CallBack_void_CVector4 = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CVector4);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CVector4(this.NativeObject, m_applyDeltaValue_CallBack_void_CVector4);
						m_applyDeltaValue_CallBack_void_CQuaternion = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CQuaternion);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CQuaternion(this.NativeObject, m_applyDeltaValue_CallBack_void_CQuaternion);
						m_applyDeltaValue_CallBack_void_CColourValue = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CColourValue);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CColourValue(this.NativeObject, m_applyDeltaValue_CallBack_void_CColourValue);
						m_applyDeltaValue_CallBack_void_CDegree = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CDegree);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CDegree(this.NativeObject, m_applyDeltaValue_CallBack_void_CDegree);
						m_applyDeltaValue_CallBack_void_CRadian = EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian_Function;
						GC.KeepAlive(m_applyDeltaValue_CallBack_void_CRadian);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableValue_applyDeltaValue_void_CRadian(this.NativeObject, m_applyDeltaValue_CallBack_void_CRadian);
					}
				}
				public static AnimableValue FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimableValue obj = baseObj as  AnimableValue;
					if (object.Equals(obj, null))
					{
						obj = new AnimableValue(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAnimableValue");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimableValueClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimableValue emptyInstance = new AnimableValue(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class AnimableValuePtr : EarthView.World.Core.BaseObject
			{
				public AnimableValuePtr() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("AnimableValuePtr",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public AnimableValuePtr(EarthView.World.Graphic.AnimableValue ref_rep) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_rep = new BasePtr(ref_rep);
					list.Add("ref_rep", valueref_rep.PtrVal);
					if(!object.Equals(ref_rep, null))
					{
					ref_rep.NoFree = true;
					}
					Create("AnimableValuePtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public AnimableValuePtr(EarthView.World.Graphic.AnimableValue ref_rep, EarthView.World.Core.SHAREDPTRFREEMETHOD inFreeMethod) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_rep = new BasePtr(ref_rep);
					list.Add("ref_rep", valueref_rep.PtrVal);
					if(!object.Equals(ref_rep, null))
					{
					ref_rep.NoFree = true;
					}
					BasePtr valueinFreeMethod = new BasePtr(inFreeMethod);
					list.Add("inFreeMethod", valueinFreeMethod.PtrVal);
					Create("AnimableValuePtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				public AnimableValuePtr(EarthView.World.Graphic.AnimableValuePtr r) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valuer = new BasePtr(r);
					list.Add("r", valuer.PtrVal);
					Create("AnimableValuePtr", list);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_AnimableValuePtr_get_CAnimableValue(IntPtr pNativeObject);

				public EarthView.World.Graphic.AnimableValue Get()
				{
					IntPtr __ptr = EarthView_World_Graphic_AnimableValuePtr_get_CAnimableValue(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.AnimableValue csObj = new EarthView.World.Graphic.AnimableValue(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CAnimableValue");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.AnimableValue;
						csObj.BindNativeObject(__ptr, "CAnimableValue");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadAnimableValuePtr = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableValuePtr = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::AnimableValuePtr", new AnimableValuePtrClassFactory());

				public AnimableValuePtr(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static AnimableValuePtr FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimableValuePtr obj = baseObj as  AnimableValuePtr;
					if (object.Equals(obj, null))
					{
						obj = new AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "AnimableValuePtr");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimableValuePtrClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimableValuePtr emptyInstance = new AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			/// <summary>
			/// 访问AnimableValues的抽象接口类，
			/// 供访问AnimableValues的任何类进行扩展
			/// </summary>
			public class AnimableObject : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void initialiseAnimableDictionary_CallBack_void_StringVector(IntPtr val);

				protected initialiseAnimableDictionary_CallBack_void_StringVector m_initialiseAnimableDictionary_CallBack_void_StringVector;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector_NoVirtual(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 初始化可动画路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void InitialiseAnimableDictionary_NoVirtual(ref EarthView.World.Core.StringVector val)
				{
					EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector_NoVirtual(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector_Function(IntPtr val)
				{
					EarthView.World.Core.StringVector csobj_val = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_val.BindNativeObject(val,"StringVector");
					csobj_val.Delegate = true;
					IClassFactory csobj_valClassFactory = GlobalClassFactoryMap.Get(csobj_val.GetCppInstanceTypeName());
					if (csobj_valClassFactory != null)
					{
						csobj_val.Delegate = true;
						csobj_val = csobj_valClassFactory.Create() as EarthView.World.Core.StringVector;
						csobj_val.BindNativeObject(val, "StringVector");
						csobj_val.Delegate = true;
					}
					
					InitialiseAnimableDictionary(ref csobj_val);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector(IntPtr pNativeObject, IntPtr val);

				/// <summary>
				/// 初始化可动画路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected virtual void InitialiseAnimableDictionary(ref EarthView.World.Core.StringVector val)
				{
					EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector(this.NativeObject, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getAnimableDictionaryName_CallBack_EVString();

				protected getAnimableDictionaryName_CallBack_EVString m_getAnimableDictionaryName_CallBack_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获得可动画路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回路径名称</returns>
				protected virtual string GetAnimableDictionaryName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString_Function()
				{
					string csret=GetAnimableDictionaryName();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 获得可动画路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回路径名称</returns>
				protected virtual string GetAnimableDictionaryName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public AnimableObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CAnimableObjectProxy", null);
					if (!"EarthView.World.Graphic.AnimableObject".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimableObject_getAnimableValueNames_StringVector(IntPtr pNativeObject);

				/// <summary>
				/// 获得可动画的值名称的集合
				/// </summary>
				/// <param name=""></param>
				/// <returns>可动画的值名称集合</returns>
				public EarthView.World.Core.StringVector GetAnimableValueNames()
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimableObject_getAnimableValueNames_StringVector(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "StringVector");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
						csObj.BindNativeObject(__ptr, "StringVector");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createAnimableValue_CallBack_AnimableValuePtr_EVString(ref IntPtr valueName);

				protected createAnimableValue_CallBack_AnimableValuePtr_EVString m_createAnimableValue_CallBack_AnimableValuePtr_EVString;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString_NoVirtual(IntPtr pNativeObject, string valueName);

				/// <summary>
				/// 为可动画的值名称创建公共指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>可动画值名称公共指针</returns>
				public virtual EarthView.World.Graphic.AnimableValuePtr CreateAnimableValue_NoVirtual(string valueName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString_NoVirtual(this.NativeObject, valueName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.AnimableValuePtr csObj = new EarthView.World.Graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.AnimableValuePtr;
						csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString_Function(ref IntPtr valueName)
				{
					string strvalueName= Marshal.PtrToStringAnsi(valueName);
					ClassFactory.FreeString(ref valueName);
					
					EarthView.World.Graphic.AnimableValuePtr csret=CreateAnimableValue(strvalueName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString(IntPtr pNativeObject, string valueName);

				/// <summary>
				/// 为可动画的值名称创建公共指针
				/// </summary>
				/// <param name=""></param>
				/// <returns>可动画值名称公共指针</returns>
				public virtual EarthView.World.Graphic.AnimableValuePtr CreateAnimableValue(string valueName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString(this.NativeObject, valueName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.AnimableValuePtr csObj = new EarthView.World.Graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.AnimableValuePtr;
						csObj.BindNativeObject(__ptr, "AnimableValuePtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadAnimableObject = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadAnimableObject = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimableObject", new AnimableObjectClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CAnimableObjectProxy", new AnimableObjectClassFactory());

				public AnimableObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector(IntPtr pObject, initialiseAnimableDictionary_CallBack_void_StringVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString(IntPtr pObject, getAnimableDictionaryName_CallBack_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString(IntPtr pObject, createAnimableValue_CallBack_AnimableValuePtr_EVString pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_initialiseAnimableDictionary_CallBack_void_StringVector = EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector_Function;
						GC.KeepAlive(m_initialiseAnimableDictionary_CallBack_void_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_initialiseAnimableDictionary_void_StringVector(this.NativeObject, m_initialiseAnimableDictionary_CallBack_void_StringVector);
						m_getAnimableDictionaryName_CallBack_EVString = EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString_Function;
						GC.KeepAlive(m_getAnimableDictionaryName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_getAnimableDictionaryName_EVString(this.NativeObject, m_getAnimableDictionaryName_CallBack_EVString);
						m_createAnimableValue_CallBack_AnimableValuePtr_EVString = EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString_Function;
						GC.KeepAlive(m_createAnimableValue_CallBack_AnimableValuePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CAnimableObject_createAnimableValue_AnimableValuePtr_EVString(this.NativeObject, m_createAnimableValue_CallBack_AnimableValuePtr_EVString);
					}
				}
				public static AnimableObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AnimableObject obj = baseObj as  AnimableObject;
					if (object.Equals(obj, null))
					{
						obj = new AnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAnimableObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AnimableObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AnimableObject emptyInstance = new AnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
