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
			/// <summary>
			/// 注记算法类
			/// </summary>
			public class LabelDrawAlgorithm : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				public LabelDrawAlgorithm() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CLabelDrawAlgorithm",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_TileUtility_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_CLabelDrawAlgorithm_draw_void_IPaintDevice_ISymbol_CGeoElement_EarthView_World_Core_ev_string(IntPtr pNativeObject, IntPtr device, IntPtr symbol, IntPtr geoElement, string value);

				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name="device">绘图设备</param>
				/// <param name="symbol">风格</param>
				/// <param name="geoElement">地理元素</param>
				/// <param name="value">要素字符</param>
				/// <returns></returns>
				public void Draw(EarthView.World.Display.Ipaintdevice device, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.GeoElement geoElement, string value)
				{
					EarthView_World_Spatial_CLabelDrawAlgorithm_draw_void_IPaintDevice_ISymbol_CGeoElement_EarthView_World_Core_ev_string(this.NativeObject, object.Equals(device, null) ? IntPtr.Zero : device.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, object.Equals(geoElement, null) ? IntPtr.Zero : geoElement.NativeObject, value);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadLabelDrawAlgorithm = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CLabelDrawAlgorithm", new LabelDrawAlgorithmClassFactory());

				public LabelDrawAlgorithm(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static LabelDrawAlgorithm FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					LabelDrawAlgorithm obj = baseObj as  LabelDrawAlgorithm;
					if (object.Equals(obj, null))
					{
						obj = new LabelDrawAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLabelDrawAlgorithm");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class LabelDrawAlgorithmClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					LabelDrawAlgorithm emptyInstance = new LabelDrawAlgorithm(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
