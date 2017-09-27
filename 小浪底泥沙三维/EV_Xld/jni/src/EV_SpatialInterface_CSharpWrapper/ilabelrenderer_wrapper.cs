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
				public class Ilabelrenderer : EarthView.World.Spatial.Display.Irenderer
				{
					public Ilabelrenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("ILabelRendererProxy", null);
						if (!"EarthView.World.Spatial.Display.Ilabelrenderer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Display_ILabelRenderer_getRendererType_EVRendererType(IntPtr pNativeObject);

					/// <summary>
					/// 获取渲染类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.EVRENDERERTYPE GetRendererType()
					{
						int ret=EarthView_World_Spatial_Display_ILabelRenderer_getRendererType_EVRendererType(this.NativeObject);
						
						return (EarthView.World.Spatial.Display.EVRENDERERTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ILabelRenderer_startDraw_void_IDisplay2D_ISymbol(IntPtr pNativeObject, IntPtr ref_display, IntPtr symbol);

					/// <summary>
					/// 开始绘制
					/// </summary>
					/// <param name="display">空间显示参数</param>
					/// <param name="lableProperty">标注属性</param>
					/// <returns></returns>
					public void StartDraw(EarthView.World.Display.Idisplay2d ref_display, EarthView.World.Spatial.Display.Isymbol symbol)
					{
						EarthView_World_Spatial_Display_ILabelRenderer_startDraw_void_IDisplay2D_ISymbol(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ILabelRenderer_draw_void_CLabelElement(IntPtr pNativeObject, IntPtr element);

					/// <summary>
					/// 绘制要素
					/// </summary>
					/// <param name="feature">待绘制的要素</param>
					/// <returns></returns>
					public void Draw(EarthView.World.Spatial.Display.LabelElement element)
					{
						EarthView_World_Spatial_Display_ILabelRenderer_draw_void_CLabelElement(this.NativeObject, object.Equals(element, null) ? IntPtr.Zero : element.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_ILabelRenderer_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 结束绘制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public void EndDraw()
					{
						EarthView_World_Spatial_Display_ILabelRenderer_endDraw_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_d.so");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

						#else 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_d.dll");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#elif Linux 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface.so");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.so");

						#else 
							private static bool bLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface.dll");
							private static bool csbLoadIlabelrenderer = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelRenderer", new IlabelrendererClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelRendererProxy", new IlabelrendererClassFactory());

					public Ilabelrenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType(IntPtr pObject, getType_CallBack_EVRendererType pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVRendererType = EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Function;
							GC.KeepAlive(m_getType_CallBack_EVRendererType);
							EV_RegisterCallback_EarthView_World_Spatial_Display_ILabelRenderer_getType_EVRendererType(this.NativeObject, m_getType_CallBack_EVRendererType);
						}
					}
					public override EarthView.World.Spatial.Display.EVRENDERERTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public static Ilabelrenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Ilabelrenderer obj = baseObj as  Ilabelrenderer;
						if (object.Equals(obj, null))
						{
							obj = new Ilabelrenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "ILabelRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class IlabelrendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Ilabelrenderer emptyInstance = new Ilabelrenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
