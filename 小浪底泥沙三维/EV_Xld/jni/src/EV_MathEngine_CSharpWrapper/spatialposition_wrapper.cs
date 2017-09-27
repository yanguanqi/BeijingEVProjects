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
				public class SpatialPosition : EarthView.World.Core.AllocatedObject
				{
					public SpatialPosition() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialPosition",  null);
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_setPos_void_double_double_double(IntPtr pNativeObject, double x, double y, double z);

					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="x">x轴位置</param>
					/// <param name="y">y轴位置</param>
					/// <param name="z">z轴位置</param>
					/// <returns></returns>
					public void SetPos(double x, double y, double z)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_setPos_void_double_double_double(this.NativeObject, x, y, z);
						
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_getPos_void_double_double_double(IntPtr pNativeObject, ref double x, ref double y, ref double z);

					/// <summary>
					/// 获取位置
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <param name="z">z坐标</param>
					/// <returns></returns>
					public void GetPos(ref double x, ref double y, ref double z)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_getPos_void_double_double_double(this.NativeObject, ref x, ref y, ref z);
						
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_setScale_void_double_double_double(IntPtr pNativeObject, double x, double y, double z);

					/// <summary>
					/// 设置缩放
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <returns></returns>
					public void SetScale(double x, double y, double z)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_setScale_void_double_double_double(this.NativeObject, x, y, z);
						
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_getScale_void_double_double_double(IntPtr pNativeObject, ref double x, ref double y, ref double z);

					/// <summary>
					/// 获取缩放
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <returns></returns>
					public void GetScale(ref double x, ref double y, ref double z)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_getScale_void_double_double_double(this.NativeObject, ref x, ref y, ref z);
						
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_setRotation_void_double_double_double_double(IntPtr pNativeObject, double x, double y, double z, double w);

					/// <summary>
					/// 设置旋转
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					public void SetRotation(double x, double y, double z, double w)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_setRotation_void_double_double_double_double(this.NativeObject, x, y, z, w);
						
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
					private static extern void EarthView_World_Spatial_Math_CSpatialPosition_getRotation_void_double_double_double_double(IntPtr pNativeObject, ref double x, ref double y, ref double z, ref double w);

					/// <summary>
					/// 获取旋转
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					public void GetRotation(ref double x, ref double y, ref double z, ref double w)
					{
						EarthView_World_Spatial_Math_CSpatialPosition_getRotation_void_double_double_double_double(this.NativeObject, ref x, ref y, ref z, ref w);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine_d.so");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp_d.so");

						#else 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine_d.dll");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine.so");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp.so");

						#else 
							private static bool bLoadSpatialPosition = LoadDll.Load("EV_MathEngine.dll");
							private static bool csbLoadSpatialPosition = LoadDll.Load("EV_MathEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CSpatialPosition", new SpatialPositionClassFactory());

					public SpatialPosition(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SpatialPosition FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialPosition obj = baseObj as  SpatialPosition;
						if (object.Equals(obj, null))
						{
							obj = new SpatialPosition(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialPosition");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialPositionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialPosition emptyInstance = new SpatialPosition(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
