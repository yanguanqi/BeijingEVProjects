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
			namespace Theme
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
			namespace GeoDataset
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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				/// <summary>
				/// 专题图渲染基类
				/// </summary>
				public class DrawTheme : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void startDraw_CallBack_void_ISpatialDisplay_ITheme(IntPtr ref_display, IntPtr ref_theme);

					protected startDraw_CallBack_void_ISpatialDisplay_ITheme m_startDraw_CallBack_void_ISpatialDisplay_ITheme;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme_NoVirtual(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_theme);

					/// <summary>
					/// 开始绘制专题图
					/// </summary>
					/// <param name="display">显示器</param>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					public virtual void StartDraw_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Theme.Itheme ref_theme)
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme_NoVirtual(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_theme, null) ? IntPtr.Zero : ref_theme.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme_Function(IntPtr ref_display, IntPtr ref_theme)
					{
						EarthView.World.Spatial.Display.Ispatialdisplay csobj_ref_display = new EarthView.World.Spatial.Display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_display.BindNativeObject(ref_display,"ISpatialDisplay");
						csobj_ref_display.Delegate = true;
						IClassFactory csobj_ref_displayClassFactory = GlobalClassFactoryMap.Get(csobj_ref_display.GetCppInstanceTypeName());
						if (csobj_ref_displayClassFactory != null)
						{
							csobj_ref_display.Delegate = true;
							csobj_ref_display = csobj_ref_displayClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialdisplay;
							csobj_ref_display.BindNativeObject(ref_display, "ISpatialDisplay");
							csobj_ref_display.Delegate = true;
						}
						EarthView.World.Spatial.Theme.Itheme csobj_ref_theme = new EarthView.World.Spatial.Theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_theme.BindNativeObject(ref_theme,"ITheme");
						csobj_ref_theme.Delegate = true;
						IClassFactory csobj_ref_themeClassFactory = GlobalClassFactoryMap.Get(csobj_ref_theme.GetCppInstanceTypeName());
						if (csobj_ref_themeClassFactory != null)
						{
							csobj_ref_theme.Delegate = true;
							csobj_ref_theme = csobj_ref_themeClassFactory.Create() as EarthView.World.Spatial.Theme.Itheme;
							csobj_ref_theme.BindNativeObject(ref_theme, "ITheme");
							csobj_ref_theme.Delegate = true;
						}
						
						StartDraw(csobj_ref_display, csobj_ref_theme);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_theme);

					/// <summary>
					/// 开始绘制专题图
					/// </summary>
					/// <param name="display">显示器</param>
					/// <param name="theme">专题图</param>
					/// <returns></returns>
					public virtual void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Theme.Itheme ref_theme)
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_theme, null) ? IntPtr.Zero : ref_theme.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte draw_CallBack_ev_bool_IFeatureClass_IQueryFilter(IntPtr featureClass, IntPtr filter);

					protected draw_CallBack_ev_bool_IFeatureClass_IQueryFilter m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter_NoVirtual(IntPtr pNativeObject, IntPtr featureClass, IntPtr filter);

					/// <summary>
					/// 绘制专题图
					/// </summary>
					/// <param name="feature">几何要素</param>
					/// <param name="filter">查询过滤</param>
					/// <returns></returns>
					public virtual bool Draw_NoVirtual(EarthView.World.Spatial.GeoDataset.Ifeatureclass featureClass, EarthView.World.Spatial.GeoDataset.Iqueryfilter filter)
					{
						byte ret=EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter_NoVirtual(this.NativeObject, object.Equals(featureClass, null) ? IntPtr.Zero : featureClass.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Function(IntPtr featureClass, IntPtr filter)
					{
						EarthView.World.Spatial.GeoDataset.Ifeatureclass csobj_featureClass = new EarthView.World.Spatial.GeoDataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_featureClass.BindNativeObject(featureClass,"IFeatureClass");
						csobj_featureClass.Delegate = true;
						IClassFactory csobj_featureClassClassFactory = GlobalClassFactoryMap.Get(csobj_featureClass.GetCppInstanceTypeName());
						if (csobj_featureClassClassFactory != null)
						{
							csobj_featureClass.Delegate = true;
							csobj_featureClass = csobj_featureClassClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeatureclass;
							csobj_featureClass.BindNativeObject(featureClass, "IFeatureClass");
							csobj_featureClass.Delegate = true;
						}
						EarthView.World.Spatial.GeoDataset.Iqueryfilter csobj_filter = new EarthView.World.Spatial.GeoDataset.Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_filter.BindNativeObject(filter,"IQueryFilter");
						csobj_filter.Delegate = true;
						IClassFactory csobj_filterClassFactory = GlobalClassFactoryMap.Get(csobj_filter.GetCppInstanceTypeName());
						if (csobj_filterClassFactory != null)
						{
							csobj_filter.Delegate = true;
							csobj_filter = csobj_filterClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Iqueryfilter;
							csobj_filter.BindNativeObject(filter, "IQueryFilter");
							csobj_filter.Delegate = true;
						}
						
						bool csret=Draw(csobj_featureClass, csobj_filter);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter(IntPtr pNativeObject, IntPtr featureClass, IntPtr filter);

					/// <summary>
					/// 绘制专题图
					/// </summary>
					/// <param name="feature">几何要素</param>
					/// <param name="filter">查询过滤</param>
					/// <returns></returns>
					public virtual bool Draw(EarthView.World.Spatial.GeoDataset.Ifeatureclass featureClass, EarthView.World.Spatial.GeoDataset.Iqueryfilter filter)
					{
						byte ret=EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter(this.NativeObject, object.Equals(featureClass, null) ? IntPtr.Zero : featureClass.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature(IntPtr ref_display, IntPtr symbol, IntPtr feature);

					protected draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_NoVirtual(IntPtr pNativeObject, IntPtr ref_display, IntPtr symbol, IntPtr feature);

					public virtual void Draw_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_NoVirtual(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, object.Equals(feature, null) ? IntPtr.Zero : feature.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Function(IntPtr ref_display, IntPtr symbol, IntPtr feature)
					{
						EarthView.World.Spatial.Display.Ispatialdisplay csobj_ref_display = new EarthView.World.Spatial.Display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_display.BindNativeObject(ref_display,"ISpatialDisplay");
						csobj_ref_display.Delegate = true;
						IClassFactory csobj_ref_displayClassFactory = GlobalClassFactoryMap.Get(csobj_ref_display.GetCppInstanceTypeName());
						if (csobj_ref_displayClassFactory != null)
						{
							csobj_ref_display.Delegate = true;
							csobj_ref_display = csobj_ref_displayClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialdisplay;
							csobj_ref_display.BindNativeObject(ref_display, "ISpatialDisplay");
							csobj_ref_display.Delegate = true;
						}
						EarthView.World.Spatial.Display.Isymbol csobj_symbol = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_symbol.BindNativeObject(symbol,"ISymbol");
						csobj_symbol.Delegate = true;
						IClassFactory csobj_symbolClassFactory = GlobalClassFactoryMap.Get(csobj_symbol.GetCppInstanceTypeName());
						if (csobj_symbolClassFactory != null)
						{
							csobj_symbol.Delegate = true;
							csobj_symbol = csobj_symbolClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csobj_symbol.BindNativeObject(symbol, "ISymbol");
							csobj_symbol.Delegate = true;
						}
						EarthView.World.Spatial.GeoDataset.Ifeature csobj_feature = new EarthView.World.Spatial.GeoDataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_feature.BindNativeObject(feature,"IFeature");
						csobj_feature.Delegate = true;
						IClassFactory csobj_featureClassFactory = GlobalClassFactoryMap.Get(csobj_feature.GetCppInstanceTypeName());
						if (csobj_featureClassFactory != null)
						{
							csobj_feature.Delegate = true;
							csobj_feature = csobj_featureClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeature;
							csobj_feature.BindNativeObject(feature, "IFeature");
							csobj_feature.Delegate = true;
						}
						
						Draw(csobj_ref_display, csobj_symbol, csobj_feature);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(IntPtr pNativeObject, IntPtr ref_display, IntPtr symbol, IntPtr feature);

					public virtual void Draw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject, object.Equals(feature, null) ? IntPtr.Zero : feature.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void endDraw_CallBack_void();

					protected endDraw_CallBack_void m_endDraw_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 绘制完毕
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw_NoVirtual()
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void_Function()
					{
						EndDraw();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 绘制完毕
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw()
					{
						EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawTheme", new DrawThemeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeProxy", new DrawThemeClassFactory());

					public DrawTheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme(IntPtr pObject, startDraw_CallBack_void_ISpatialDisplay_ITheme pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter(IntPtr pObject, draw_CallBack_ev_bool_IFeatureClass_IQueryFilter pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(IntPtr pObject, draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DDisplay_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void(IntPtr pObject, endDraw_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_startDraw_CallBack_void_ISpatialDisplay_ITheme = EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme_Function;
							GC.KeepAlive(m_startDraw_CallBack_void_ISpatialDisplay_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme(this.NativeObject, m_startDraw_CallBack_void_ISpatialDisplay_ITheme);
							m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter = EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter(this.NativeObject, m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter);
							m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature = EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Function;
							GC.KeepAlive(m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(this.NativeObject, m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature);
							m_endDraw_CallBack_void = EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void_Function;
							GC.KeepAlive(m_endDraw_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void(this.NativeObject, m_endDraw_CallBack_void);
						}
					}
					public static DrawTheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawTheme obj = baseObj as  DrawTheme;
						if (object.Equals(obj, null))
						{
							obj = new DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawThemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawTheme emptyInstance = new DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
