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
				/// 栅格渲染类
				/// </summary>
				public class RasterRenderer : EarthView.World.Spatial.Display.Irenderer
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public RasterRenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRasterRendererProxy", null);
						if (!"EarthView.World.Spatial2D.Renderer.RasterRenderer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.so");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.so");

						#else 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_d.dll");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay.so");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.so");

						#else 
							private static bool bLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay.dll");
							private static bool csbLoadRasterRenderer = LoadDll.Load("EV_Spatial2DDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CRasterRenderer", new RasterRendererClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CRasterRendererProxy", new RasterRendererClassFactory());

					public RasterRenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType(IntPtr pObject, getType_CallBack_EVRendererType pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getType_CallBack_EVRendererType = EarthView_World_Spatial_Display_IRenderer_getType_EVRendererType_Function;
							GC.KeepAlive(m_getType_CallBack_EVRendererType);
							EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CRasterRenderer_getType_EVRendererType(this.NativeObject, m_getType_CallBack_EVRendererType);
						}
					}
					public override EarthView.World.Spatial.Display.EVRENDERERTYPE GetType()
					{
						return base.GetType_NoVirtual();
					}
					public static RasterRenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RasterRenderer obj = baseObj as  RasterRenderer;
						if (object.Equals(obj, null))
						{
							obj = new RasterRenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRasterRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RasterRendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RasterRenderer emptyInstance = new RasterRenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
