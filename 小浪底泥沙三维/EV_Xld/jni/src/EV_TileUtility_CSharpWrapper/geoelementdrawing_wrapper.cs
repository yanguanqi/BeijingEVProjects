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
			/// 几何要素渲染类
			/// </summary>
			public class GeoElementDrawing : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				public GeoElementDrawing() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGeoElementDrawing",  null);
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
				private static extern void EarthView_World_Spatial_CGeoElementDrawing_startDrawing_void_ISpatialDisplay(IntPtr pNativeObject, IntPtr ref_display);

				/// <summary>
				/// 开始绘制。
				/// </summary>
				/// <param name="display">绘图参数</param>
				/// <returns></returns>
				public void StartDrawing(EarthView.World.Spatial.Display.Ispatialdisplay ref_display)
				{
					EarthView_World_Spatial_CGeoElementDrawing_startDrawing_void_ISpatialDisplay(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CGeoElementDrawing_endDrawing_void(IntPtr pNativeObject);

				/// <summary>
				/// 结束绘制。析构绘图设备，并保存绘制到绘图设备
				/// </summary>
				/// <returns></returns>
				public void EndDrawing()
				{
					EarthView_World_Spatial_CGeoElementDrawing_endDrawing_void(this.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CGeoElementDrawing_setSymbol_void_ISymbol(IntPtr pNativeObject, IntPtr pSymbol);

				/// <summary>
				/// 设置绘制的风格
				/// </summary>
				/// <param name="symbol">绘制风格</param>
				/// <returns></returns>
				public void SetSymbol(EarthView.World.Spatial.Display.Isymbol pSymbol)
				{
					EarthView_World_Spatial_CGeoElementDrawing_setSymbol_void_ISymbol(this.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
					
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
				private static extern void EarthView_World_Spatial_CGeoElementDrawing_draw_void_CGeoElement(IntPtr pNativeObject, IntPtr geoElement);

				///// <summary>
				///// 设置标注绘制算法
				///// </summary>
				///// <param name="algorithm">标注绘制算法</param>
				///// <returns></returns>
				//ev_void setLabelDrawingAlgorithm(_in const CLabelDrawAlgorithm * algorithm);
				/// <summary>
				/// 绘制地理要素
				/// </summary>
				/// <param name="geoElement">地理要素</param>
				/// <returns></returns>
				public void Draw(EarthView.World.Spatial.GeoElement geoElement)
				{
					EarthView_World_Spatial_CGeoElementDrawing_draw_void_CGeoElement(this.NativeObject, object.Equals(geoElement, null) ? IntPtr.Zero : geoElement.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_d.so");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp_d.so");

					#else 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_d.dll");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#elif Linux 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility.so");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp.so");

					#else 
						private static bool bLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility.dll");
						private static bool csbLoadGeoElementDrawing = LoadDll.Load("EV_TileUtility_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::CGeoElementDrawing", new GeoElementDrawingClassFactory());

				public GeoElementDrawing(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static GeoElementDrawing FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GeoElementDrawing obj = baseObj as  GeoElementDrawing;
					if (object.Equals(obj, null))
					{
						obj = new GeoElementDrawing(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGeoElementDrawing");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GeoElementDrawingClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GeoElementDrawing emptyInstance = new GeoElementDrawing(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
