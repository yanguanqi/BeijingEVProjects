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
				/// 服务器图层渲染器基类
				/// </summary>
				public class DrawServerLayerTheme : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(IntPtr ref_display, byte transparent, IntPtr ref_pTheme, int mode);

					protected startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32 m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32;

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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_NoVirtual(IntPtr pNativeObject, IntPtr ref_display, byte transparent, IntPtr ref_pTheme, int mode);

					/// <summary>
					/// 开始渲染
					/// </summary>
					/// <param name="display">设备</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					public virtual void StartDraw_NoVirtual(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, byte transparent, EarthView.World.Spatial.Theme.Itheme ref_pTheme, int mode)
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_NoVirtual(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, transparent, object.Equals(ref_pTheme, null) ? IntPtr.Zero : ref_pTheme.NativeObject, mode);
						
					}

					protected  void EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Function(IntPtr ref_display, byte transparent, IntPtr ref_pTheme, int mode)
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
						EarthView.World.Spatial.Theme.Itheme csobj_ref_pTheme = new EarthView.World.Spatial.Theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_pTheme.BindNativeObject(ref_pTheme,"ITheme");
						csobj_ref_pTheme.Delegate = true;
						IClassFactory csobj_ref_pThemeClassFactory = GlobalClassFactoryMap.Get(csobj_ref_pTheme.GetCppInstanceTypeName());
						if (csobj_ref_pThemeClassFactory != null)
						{
							csobj_ref_pTheme.Delegate = true;
							csobj_ref_pTheme = csobj_ref_pThemeClassFactory.Create() as EarthView.World.Spatial.Theme.Itheme;
							csobj_ref_pTheme.BindNativeObject(ref_pTheme, "ITheme");
							csobj_ref_pTheme.Delegate = true;
						}
						
						StartDraw(csobj_ref_display, transparent, csobj_ref_pTheme, mode);
						
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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(IntPtr pNativeObject, IntPtr ref_display, byte transparent, IntPtr ref_pTheme, int mode);

					/// <summary>
					/// 开始渲染
					/// </summary>
					/// <param name="display">设备</param>
					/// <param name="pSymbol">渲染符号</param>
					/// <returns></returns>
					public virtual void StartDraw(EarthView.World.Spatial.Display.Ispatialdisplay ref_display, byte transparent, EarthView.World.Spatial.Theme.Itheme ref_pTheme, int mode)
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, transparent, object.Equals(ref_pTheme, null) ? IntPtr.Zero : ref_pTheme.NativeObject, mode);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void endDraw_CallBack_void();

					protected endDraw_CallBack_void m_endDraw_CallBack_void;

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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 停止渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw_NoVirtual()
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Function()
					{
						EndDraw();
						
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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 停止渲染
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw()
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte draw_CallBack_ev_bool_IDataset(IntPtr pDataset);

					protected draw_CallBack_ev_bool_IDataset m_draw_CallBack_ev_bool_IDataset;

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
					private static extern byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_NoVirtual(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name="pDataset">数据集</param>
					/// <returns></returns>
					public virtual bool Draw_NoVirtual(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_NoVirtual(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Function(IntPtr pDataset)
					{
						EarthView.World.Spatial.GeoDataset.Idataset csobj_pDataset = new EarthView.World.Spatial.GeoDataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pDataset.BindNativeObject(pDataset,"IDataset");
						csobj_pDataset.Delegate = true;
						IClassFactory csobj_pDatasetClassFactory = GlobalClassFactoryMap.Get(csobj_pDataset.GetCppInstanceTypeName());
						if (csobj_pDatasetClassFactory != null)
						{
							csobj_pDataset.Delegate = true;
							csobj_pDataset = csobj_pDatasetClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Idataset;
							csobj_pDataset.BindNativeObject(pDataset, "IDataset");
							csobj_pDataset.Delegate = true;
						}
						
						bool csret=Draw(csobj_pDataset);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(IntPtr pNativeObject, IntPtr pDataset);

					/// <summary>
					/// 渲染
					/// </summary>
					/// <param name="pDataset">数据集</param>
					/// <returns></returns>
					public virtual bool Draw(EarthView.World.Spatial.GeoDataset.Idataset pDataset)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(this.NativeObject, object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(ref IntPtr datasetName, ref IntPtr datasourceName, IntPtr pEnv, IntPtr pSRS);

					protected draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference;

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
					private static extern byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_NoVirtual(IntPtr pNativeObject, string datasetName, string datasourceName, IntPtr pEnv, IntPtr pSRS);

					/// <summary>
					/// 渲染（仅使用缓存的情况）
					/// </summary>
					/// <param name="pGeometry">数据集名字</param>
					/// <returns></returns>
					public virtual bool Draw_NoVirtual(string datasetName, string datasourceName, EarthView.World.Spatial.Geometry.Ienvelope pEnv, EarthView.World.Spatial.Geometry.Ispatialreference pSRS)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_NoVirtual(this.NativeObject, datasetName, datasourceName, object.Equals(pEnv, null) ? IntPtr.Zero : pEnv.NativeObject, object.Equals(pSRS, null) ? IntPtr.Zero : pSRS.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Function(ref IntPtr datasetName, ref IntPtr datasourceName, IntPtr pEnv, IntPtr pSRS)
					{
						string strdatasetName= Marshal.PtrToStringAnsi(datasetName);
						ClassFactory.FreeString(ref datasetName);
						string strdatasourceName= Marshal.PtrToStringAnsi(datasourceName);
						ClassFactory.FreeString(ref datasourceName);
						EarthView.World.Spatial.Geometry.Ienvelope csobj_pEnv = new EarthView.World.Spatial.Geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pEnv.BindNativeObject(pEnv,"IEnvelope");
						csobj_pEnv.Delegate = true;
						IClassFactory csobj_pEnvClassFactory = GlobalClassFactoryMap.Get(csobj_pEnv.GetCppInstanceTypeName());
						if (csobj_pEnvClassFactory != null)
						{
							csobj_pEnv.Delegate = true;
							csobj_pEnv = csobj_pEnvClassFactory.Create() as EarthView.World.Spatial.Geometry.Ienvelope;
							csobj_pEnv.BindNativeObject(pEnv, "IEnvelope");
							csobj_pEnv.Delegate = true;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csobj_pSRS = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pSRS.BindNativeObject(pSRS,"ISpatialReference");
						csobj_pSRS.Delegate = true;
						IClassFactory csobj_pSRSClassFactory = GlobalClassFactoryMap.Get(csobj_pSRS.GetCppInstanceTypeName());
						if (csobj_pSRSClassFactory != null)
						{
							csobj_pSRS.Delegate = true;
							csobj_pSRS = csobj_pSRSClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csobj_pSRS.BindNativeObject(pSRS, "ISpatialReference");
							csobj_pSRS.Delegate = true;
						}
						
						bool csret=Draw(strdatasetName,strdatasourceName,csobj_pEnv, csobj_pSRS);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(IntPtr pNativeObject, string datasetName, string datasourceName, IntPtr pEnv, IntPtr pSRS);

					/// <summary>
					/// 渲染（仅使用缓存的情况）
					/// </summary>
					/// <param name="pGeometry">数据集名字</param>
					/// <returns></returns>
					public virtual bool Draw(string datasetName, string datasourceName, EarthView.World.Spatial.Geometry.Ienvelope pEnv, EarthView.World.Spatial.Geometry.Ispatialreference pSRS)
					{
						byte ret=EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(this.NativeObject, datasetName, datasourceName, object.Equals(pEnv, null) ? IntPtr.Zero : pEnv.NativeObject, object.Equals(pSRS, null) ? IntPtr.Zero : pSRS.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void drawTile_CallBack_void_RequestPara(IntPtr req);

					protected drawTile_CallBack_void_RequestPara m_drawTile_CallBack_void_RequestPara;

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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_NoVirtual(IntPtr pNativeObject, IntPtr req);

					public virtual void DrawTile_NoVirtual(EarthView.World.Core.WorkQueue.RequestPara req)
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_NoVirtual(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Function(IntPtr req)
					{
						EarthView.World.Core.WorkQueue.RequestPara csobj_req = new EarthView.World.Core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_req.BindNativeObject(req,"RequestPara");
						csobj_req.Delegate = true;
						IClassFactory csobj_reqClassFactory = GlobalClassFactoryMap.Get(csobj_req.GetCppInstanceTypeName());
						if (csobj_reqClassFactory != null)
						{
							csobj_req.Delegate = true;
							csobj_req = csobj_reqClassFactory.Create() as EarthView.World.Core.WorkQueue.RequestPara;
							csobj_req.BindNativeObject(req, "RequestPara");
							csobj_req.Delegate = true;
						}
						
						DrawTile(csobj_req);
						
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
					private static extern void EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(IntPtr pNativeObject, IntPtr req);

					public virtual void DrawTile(EarthView.World.Core.WorkQueue.RequestPara req)
					{
						EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(this.NativeObject, object.Equals(req, null) ? IntPtr.Zero : req.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_d.so");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.so");

						#else 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_d.dll");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#elif Linux 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer.so");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.so");

						#else 
							private static bool bLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer.dll");
							private static bool csbLoadDrawServerLayerTheme = LoadDll.Load("EV_Spatial2DServer_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerTheme", new DrawServerLayerThemeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeProxy", new DrawServerLayerThemeClassFactory());

					public DrawServerLayerTheme(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(IntPtr pObject, startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(IntPtr pObject, endDraw_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(IntPtr pObject, draw_CallBack_ev_bool_IDataset pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(IntPtr pObject, draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(IntPtr pObject, drawTile_CallBack_void_RequestPara pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32 = EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32_Function;
							GC.KeepAlive(m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_startDraw_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32(this.NativeObject, m_startDraw_CallBack_void_ISpatialDisplay_ev_uint8_ITheme_ev_int32);
							m_endDraw_CallBack_void = EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void_Function;
							GC.KeepAlive(m_endDraw_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_endDraw_void(this.NativeObject, m_endDraw_CallBack_void);
							m_draw_CallBack_ev_bool_IDataset = EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_IDataset);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_IDataset(this.NativeObject, m_draw_CallBack_ev_bool_IDataset);
							m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference = EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference_Function;
							GC.KeepAlive(m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_draw_ev_bool_EVString_EVString_IEnvelope_ISpatialReference(this.NativeObject, m_draw_CallBack_ev_bool_EVString_EVString_IEnvelope_ISpatialReference);
							m_drawTile_CallBack_void_RequestPara = EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara_Function;
							GC.KeepAlive(m_drawTile_CallBack_void_RequestPara);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerTheme_drawTile_void_RequestPara(this.NativeObject, m_drawTile_CallBack_void_RequestPara);
						}
					}
					public static DrawServerLayerTheme FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DrawServerLayerTheme obj = baseObj as  DrawServerLayerTheme;
						if (object.Equals(obj, null))
						{
							obj = new DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDrawServerLayerTheme");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DrawServerLayerThemeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DrawServerLayerTheme emptyInstance = new DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
