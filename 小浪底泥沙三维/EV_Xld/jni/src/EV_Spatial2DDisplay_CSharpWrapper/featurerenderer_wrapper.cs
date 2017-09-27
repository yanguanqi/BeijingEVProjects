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
				/// <summary>
				/// 要素渲染类
				/// </summary>
				public class FeatureRenderer : EarthView.World.Spatial2D.Display.Ifeaturerenderer
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public FeatureRenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CFeatureRendererProxy", null);
						if (!"EarthView.World.Spatial2D.Renderer.FeatureRenderer".Equals(((Object)this).GetType().ToString()))
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
					private static extern int EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getRendererType_EVRendererType(IntPtr pNativeObject);

					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.EVRENDERERTYPE GetRendererType()
					{
						int ret=EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getRendererType_EVRendererType(this.NativeObject);
						
						return (EarthView.World.Spatial.Display.EVRENDERERTYPE)ret;
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CFeatureRenderer_startDraw_void_ISpatialDisplay_ITheme(IntPtr pNativeObject, IntPtr display, IntPtr theme);

					/// <summary>
					/// 开始绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="lableProperty">标注属性</param>
					/// <returns></returns>
					public void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay display, EarthView.World.Spatial.Theme.Itheme theme)
					{
						EarthView_World_Spatial2D_Renderer_CFeatureRenderer_startDraw_void_ISpatialDisplay_ITheme(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(theme, null) ? IntPtr.Zero : theme.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void draw_CallBack_void_IFeature(IntPtr feature);

					protected draw_CallBack_void_IFeature m_draw_CallBack_void_IFeature;

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
					private static extern void EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_NoVirtual(IntPtr pNativeObject, IntPtr feature);

					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					public virtual void Draw_NoVirtual(EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_NoVirtual(this.NativeObject, object.Equals(feature, null) ? IntPtr.Zero : feature.NativeObject);
						
					}

					protected  void EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Function(IntPtr feature)
					{
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
						
						Draw(csobj_feature);
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(IntPtr pNativeObject, IntPtr feature);

					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					public virtual void Draw(EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(this.NativeObject, object.Equals(feature, null) ? IntPtr.Zero : feature.NativeObject);
						
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
					private static extern void EarthView_World_Spatial2D_Renderer_CFeatureRenderer_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void EndDraw()
					{
						EarthView_World_Spatial2D_Renderer_CFeatureRenderer_endDraw_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadFeatureRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CFeatureRenderer", new FeatureRendererClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CFeatureRendererProxy", new FeatureRendererClassFactory());

					public FeatureRenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(IntPtr pObject, draw_CallBack_void_IFeature pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme(IntPtr pObject, getTheme_CallBack_ITheme pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme(IntPtr pObject, getStatisticesTheme_CallBack_ITheme pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature(IntPtr pObject, draw_CallBack_void_IDisplay2D_IFeature pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType(IntPtr pObject, getType_CallBack_EVRendererType pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_draw_CallBack_void_IFeature = EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature_Function;
							GC.KeepAlive(m_draw_CallBack_void_IFeature);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IFeature(this.NativeObject, m_draw_CallBack_void_IFeature);
							m_getTheme_CallBack_ITheme = EarthView_World_Spatial2D_Display_IFeatureRenderer_getTheme_ITheme_Function;
							GC.KeepAlive(m_getTheme_CallBack_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getTheme_ITheme(this.NativeObject, m_getTheme_CallBack_ITheme);
							m_getStatisticesTheme_CallBack_ITheme = EarthView_World_Spatial2D_Display_IFeatureRenderer_getStatisticesTheme_ITheme_Function;
							GC.KeepAlive(m_getStatisticesTheme_CallBack_ITheme);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getStatisticesTheme_ITheme(this.NativeObject, m_getStatisticesTheme_CallBack_ITheme);
							m_draw_CallBack_void_IDisplay2D_IFeature = EarthView_World_Spatial2D_Display_IFeatureRenderer_draw_void_IDisplay2D_IFeature_Function;
							GC.KeepAlive(m_draw_CallBack_void_IDisplay2D_IFeature);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_draw_void_IDisplay2D_IFeature(this.NativeObject, m_draw_CallBack_void_IDisplay2D_IFeature);
							m_getType_CallBack_EVRendererType = EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Function;
							GC.KeepAlive(m_getType_CallBack_EVRendererType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CFeatureRenderer_getType_EVRendererType(this.NativeObject, m_getType_CallBack_EVRendererType);
						}
					}
					public override EarthView.World.Spatial.Theme.Itheme GetTheme()
					{
						return base.GetTheme_NoVirtual();
					}
					public override EarthView.World.Spatial.Theme.Itheme GetStatisticesTheme()
					{
						return base.GetStatisticesTheme_NoVirtual();
					}
					public override void Draw(EarthView.World.Display.Idisplay2d display, EarthView.World.Spatial.GeoDataset.Ifeature feature)
					{
						base.Draw_NoVirtual(display,feature);
					}
					public override EarthView.World.Spatial.Display.EVRENDERERTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public static FeatureRenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						FeatureRenderer obj = baseObj as  FeatureRenderer;
						if (object.Equals(obj, null))
						{
							obj = new FeatureRenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CFeatureRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class FeatureRendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						FeatureRenderer emptyInstance = new FeatureRenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
