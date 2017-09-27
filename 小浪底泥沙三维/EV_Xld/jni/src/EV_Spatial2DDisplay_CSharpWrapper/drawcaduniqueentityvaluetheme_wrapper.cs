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
		namespace Spatial2D
		{
			namespace Renderer
			{
				public class DrawCADUniqueEntityValueTheme : EarthView.World.Spatial2D.Renderer.DrawTheme
				{
					public DrawCADUniqueEntityValueTheme() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawCADUniqueEntityValueThemeProxy", null);
						if (!"EarthView.World.Spatial2D.Renderer.DrawCADUniqueEntityValueTheme".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_NoVirtual(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_theme);

					public new void StartDraw_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Theme.Itheme ref_theme)
					{
						EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme_NoVirtual(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_theme, null) ? IntPtr.Zero : ref_theme.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_theme);

					public override void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Theme.Itheme ref_theme)
					{
						EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_theme, null) ? IntPtr.Zero : ref_theme.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_NoVirtual(IntPtr pNativeObject, IntPtr featureClass, IntPtr filter);

					public new bool Draw_NoVirtual(EarthView.World.Spatial.GeoDataset.Ifeatureclass featureClass, EarthView.World.Spatial.GeoDataset.Iqueryfilter filter)
					{
						byte ret=EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter_NoVirtual(this.NativeObject, object.Equals(featureClass, null) ? IntPtr.Zero : featureClass.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(IntPtr pNativeObject, IntPtr featureClass, IntPtr filter);

					public override bool Draw(EarthView.World.Spatial.GeoDataset.Ifeatureclass featureClass, EarthView.World.Spatial.GeoDataset.Iqueryfilter filter)
					{
						byte ret=EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(this.NativeObject, object.Equals(featureClass, null) ? IntPtr.Zero : featureClass.NativeObject, object.Equals(filter, null) ? IntPtr.Zero : filter.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_NoVirtual(IntPtr pNativeObject);

					public new void EndDraw_NoVirtual()
					{
						EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(IntPtr pNativeObject);

					public override void EndDraw()
					{
						EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadDrawCADUniqueEntityValueTheme = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme", new DrawCADUniqueEntityValueThemeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueThemeProxy", new DrawCADUniqueEntityValueThemeClassFactory());

					public DrawCADUniqueEntityValueTheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(IntPtr pObject, startDraw_CallBack_void_ISpatialDisplay_ITheme pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(IntPtr pObject, draw_CallBack_ev_bool_IFeatureClass_IQueryFilter pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(IntPtr pObject, draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(IntPtr pObject, endDraw_CallBack_void pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_startDraw_CallBack_void_ISpatialDisplay_ITheme = EarthView_World_Spatial2D_Renderer_CDrawTheme_startDraw_void_ISpatialDisplay_ITheme_Function;
							GC.KeepAlive(m_startDraw_CallBack_void_ISpatialDisplay_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_startDraw_void_ISpatialDisplay_ITheme(this.NativeObject, m_startDraw_CallBack_void_ISpatialDisplay_ITheme);
							m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter = EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_ev_bool_IFeatureClass_IQueryFilter_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_ev_bool_IFeatureClass_IQueryFilter(this.NativeObject, m_draw_CallBack_ev_bool_IFeatureClass_IQueryFilter);
							m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature = EarthView_World_Spatial2D_Renderer_CDrawTheme_draw_void_ISpatialDisplay_ISymbol_IFeature_Function;
							GC.KeepAlive(m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_draw_void_ISpatialDisplay_ISymbol_IFeature(this.NativeObject, m_draw_CallBack_void_ISpatialDisplay_ISymbol_IFeature);
							m_endDraw_CallBack_void = EarthView_World_Spatial2D_Renderer_CDrawTheme_endDraw_void_Function;
							GC.KeepAlive(m_endDraw_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawCADUniqueEntityValueTheme_endDraw_void(this.NativeObject, m_endDraw_CallBack_void);
						}
					}
					public override void Draw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, EarthView.World.Spatial.Display.Isymbol symbol, EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						base.Draw_NoVirtual(ref_display,symbol,feature);
					}
					public static DrawCADUniqueEntityValueTheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawCADUniqueEntityValueTheme obj = baseObj as  DrawCADUniqueEntityValueTheme;
						if (object.Equals(obj, null))
						{
							obj = new DrawCADUniqueEntityValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawCADUniqueEntityValueTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawCADUniqueEntityValueThemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawCADUniqueEntityValueTheme emptyInstance = new DrawCADUniqueEntityValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
