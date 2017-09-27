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
		namespace Graphic
		{
			public class UtilityCalculator : EarthView.World.Core.BaseObject
			{
				public UtilityCalculator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CUtilityCalculator",  null);
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
				private static extern double EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera(IntPtr nodePos, IntPtr cam);

				/// <summary>
				/// 计算当前渲染窗口尺寸下,保持固定屏幕尺寸的物体所需变换的缩放比例
				/// </summary>
				/// <param name="nodePos">物体所在场景节点位置</param>
				/// <param name="cam">当前相机</param>
				/// <returns>缩放比例值</returns> 
				public static double Screensizefix_scale(EarthView.World.Spatial.Math.Vector3 nodePos, EarthView.World.Graphic.Camera cam)
				{
					double ret=EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera(object.Equals(nodePos, null) ? IntPtr.Zero : nodePos.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
					return ret;
					
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
				private static extern double EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera_Real(IntPtr nodePos, IntPtr cam, ref double node2camDis);

				public static double Screensizefix_scale(EarthView.World.Spatial.Math.Vector3 nodePos, EarthView.World.Graphic.Camera cam, ref double node2camDis)
				{
					double ret=EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_CVector3_CCamera_Real(object.Equals(nodePos, null) ? IntPtr.Zero : nodePos.NativeObject, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject, ref node2camDis);
					
					return ret;
					
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
				private static extern double EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_Real_CCamera(double distance, IntPtr cam);

				public static double Screensizefix_scale(double distance, EarthView.World.Graphic.Camera cam)
				{
					double ret=EarthView_World_Graphic_CUtilityCalculator_screensizefix_scale_Real_Real_CCamera(distance, object.Equals(cam, null) ? IntPtr.Zero : cam.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadUtilityCalculator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadUtilityCalculator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CUtilityCalculator", new UtilityCalculatorClassFactory());

				public UtilityCalculator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static UtilityCalculator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					UtilityCalculator obj = baseObj as  UtilityCalculator;
					if (object.Equals(obj, null))
					{
						obj = new UtilityCalculator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CUtilityCalculator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class UtilityCalculatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					UtilityCalculator emptyInstance = new UtilityCalculator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
