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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				public class GeometryRenderer : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public GeometryRenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CGeometryRenderer",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_startDraw_void_ISpatialDisplay_ISymbol(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_pSymbol);

					/// <summary>
					/// 开始渲染
					/// </summary>
					/// <param name="display">设备</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					public void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Display.Isymbol ref_pSymbol)
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_startDraw_void_ISpatialDisplay_ISymbol(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_pSymbol, null) ? IntPtr.Zero : ref_pSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 停止渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void EndDraw()
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_endDraw_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometry_void_IGeometry(IntPtr pNativeObject, IntPtr pGeometry);

					/// <summary>
					/// 渲染几何图形
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <returns></returns>
					public void DrawGeometry(EarthView.World.Spatial.Geometry.Igeometry pGeometry)
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometry_void_IGeometry(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_drawEditingGeometry_void_IGeometry_ISymbol(IntPtr pNativeObject, IntPtr pGeometry, IntPtr pVertexSymbol);

					/// <summary>
					/// 渲染可编辑的几何图形
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <param name="pVertexSymbol">渲染符号</param>
					/// <returns></returns>
					public void DrawEditingGeometry(EarthView.World.Spatial.Geometry.Igeometry pGeometry, EarthView.World.Spatial.Display.Isymbol pVertexSymbol)
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_drawEditingGeometry_void_IGeometry_ISymbol(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject, object.Equals(pVertexSymbol, null) ? IntPtr.Zero : pVertexSymbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometryCenter_void_IGeometry(IntPtr pNativeObject, IntPtr pGeometry);

					/// <summary>
					/// 渲染几何中心点
					/// </summary>
					/// <param name="pGeometry">几何图形</param>
					/// <returns></returns>
					public void DrawGeometryCenter(EarthView.World.Spatial.Geometry.Igeometry pGeometry)
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometryCenter_void_IGeometry(this.NativeObject, object.Equals(pGeometry, null) ? IntPtr.Zero : pGeometry.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CGeometryRenderer_drawEnvelope_void_IEnvelope_ISymbol(IntPtr pNativeObject, IntPtr pEnvelope, IntPtr pSymbol);

					/// <summary>
					/// 渲染包围盒
					/// </summary>
					/// <param name="pEnvelope">包围盒</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					public void DrawEnvelope(EarthView.World.Spatial.Geometry.Ienvelope pEnvelope, EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial_Display_CGeometryRenderer_drawEnvelope_void_IEnvelope_ISymbol(this.NativeObject, object.Equals(pEnvelope, null) ? IntPtr.Zero : pEnvelope.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_d.so");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp_d.so");

						#else 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay.so");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp.so");

						#else 
							private static bool bLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadGeometryRenderer = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CGeometryRenderer", new GeometryRendererClassFactory());

					public GeometryRenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GeometryRenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GeometryRenderer obj = baseObj as  GeometryRenderer;
						if (object.Equals(obj, null))
						{
							obj = new GeometryRenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CGeometryRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GeometryRendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GeometryRenderer emptyInstance = new GeometryRenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
