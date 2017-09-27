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
				/// <summary>
				/// ev wms地图渲染器基类
				/// </summary>
				public class DrawWMSVectorTheme : EarthView.World.Spatial.Display.DrawServerLayerTheme
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public DrawWMSVectorTheme() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDrawWMSVectorThemeProxy", null);
						if (!"EarthView.World.Spatial.Display.DrawWMSVectorTheme".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public new bool Draw_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public override bool Draw(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_d.so");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.so");

						#else 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer.so");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.so");

						#else 
							private static bool bLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawWMSVectorTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawWMSVectorTheme", new DrawWMSVectorThemeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawWMSVectorThemeProxy", new DrawWMSVectorThemeClassFactory());

					public DrawWMSVectorTheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(IntPtr pObject, startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_endDraw_void(IntPtr pObject, endDraw_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset(IntPtr pObject, draw_CallBack_ev_bool_IDataset pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(IntPtr pObject, draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DServer_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_drawTile_void_RequestPara(IntPtr pObject, drawTile_CallBack_void_RequestPara pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32 = EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Function;
							GC.KeepAlive(m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(this.NativeObject, m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32);
							m_endDraw_CallBack_void = EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Function;
							GC.KeepAlive(m_endDraw_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_endDraw_void(this.NativeObject, m_endDraw_CallBack_void);
							m_draw_CallBack_ev_bool_IDataset = EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_IDataset(this.NativeObject, m_draw_CallBack_ev_bool_IDataset);
							m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference = EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(this.NativeObject, m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference);
							m_drawTile_CallBack_void_RequestPara = EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Function;
							GC.KeepAlive(m_drawTile_CallBack_void_RequestPara);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawWMSVectorTheme_drawTile_void_RequestPara(this.NativeObject, m_drawTile_CallBack_void_RequestPara);
						}
					}
					public override void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, byte transparent, EarthView.World.Spatial.Theme.Itheme ref_pTheme, int mode)
					{
						base.StartDraw_NoVirtual(ref_display,transparent,ref_pTheme,mode);
					}
					public override void EndDraw()
					{
						base.EndDraw_NoVirtual();
					}
					public override bool Draw(string datasetName, string datasourceName, EarthView.World.Spatial.Geometry.Ienvelope pEnv, EarthView.World.Spatial.Geometry.Ispatialreference pSRS)
					{
						return base.Draw_NoVirtual(datasetName,datasourceName,pEnv,pSRS);
					}
					public override void DrawTile(EarthView.World.Core.WorkQueue.RequestPara req)
					{
						base.DrawTile_NoVirtual(req);
					}
					public static DrawWMSVectorTheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawWMSVectorTheme obj = baseObj as  DrawWMSVectorTheme;
						if (object.Equals(obj, null))
						{
							obj = new DrawWMSVectorTheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawWMSVectorTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawWMSVectorThemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawWMSVectorTheme emptyInstance = new DrawWMSVectorTheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
