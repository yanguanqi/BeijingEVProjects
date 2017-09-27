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
				/// 符号渲染类
				/// 提供方法如下：
				/// 虚方法：绘制前设置、绘制符号、绘制完成、绘制图例
				/// </summary>
				public class SymbolRenderer : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public SymbolRenderer() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSymbolRendererProxy", null);
						if (!"EarthView.World.Spatial.Display.SymbolRenderer".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void startDraw_CallBack_void_IDisplay2D_ISymbol(IntPtr ref_display, IntPtr ref_pSymbol);

					protected startDraw_CallBack_void_IDisplay2D_ISymbol m_startDraw_CallBack_void_IDisplay2D_ISymbol;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_NoVirtual(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_pSymbol);

					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					public virtual void StartDraw_NoVirtual(EarthView.World.Display.Idisplay2d ref_display, EarthView.World.Spatial.Display.Isymbol ref_pSymbol)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_NoVirtual(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_pSymbol, null) ? IntPtr.Zero : ref_pSymbol.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Function(IntPtr ref_display, IntPtr ref_pSymbol)
					{
						EarthView.World.Display.Idisplay2d csobj_ref_display = new EarthView.World.Display.Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_display.BindNativeObject(ref_display,"IDisplay2D");
						csobj_ref_display.Delegate = true;
						IClassFactory csobj_ref_displayClassFactory = GlobalClassFactoryMap.Get(csobj_ref_display.GetCppInstanceTypeName());
						if (csobj_ref_displayClassFactory != null)
						{
							csobj_ref_display.Delegate = true;
							csobj_ref_display = csobj_ref_displayClassFactory.Create() as EarthView.World.Display.Idisplay2d;
							csobj_ref_display.BindNativeObject(ref_display, "IDisplay2D");
							csobj_ref_display.Delegate = true;
						}
						EarthView.World.Spatial.Display.Isymbol csobj_ref_pSymbol = new EarthView.World.Spatial.Display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_pSymbol.BindNativeObject(ref_pSymbol,"ISymbol");
						csobj_ref_pSymbol.Delegate = true;
						IClassFactory csobj_ref_pSymbolClassFactory = GlobalClassFactoryMap.Get(csobj_ref_pSymbol.GetCppInstanceTypeName());
						if (csobj_ref_pSymbolClassFactory != null)
						{
							csobj_ref_pSymbol.Delegate = true;
							csobj_ref_pSymbol = csobj_ref_pSymbolClassFactory.Create() as EarthView.World.Spatial.Display.Isymbol;
							csobj_ref_pSymbol.BindNativeObject(ref_pSymbol, "ISymbol");
							csobj_ref_pSymbol.Delegate = true;
						}
						
						StartDraw(csobj_ref_display, csobj_ref_pSymbol);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(IntPtr pNativeObject, IntPtr ref_display, IntPtr ref_pSymbol);

					/// <summary>
					/// 绘制前设置
					/// </summary>
					/// <param name="pDevice">设备</param>
					/// <param name="pSymbol">符号</param>
					/// <returns></returns>
					public virtual void StartDraw(EarthView.World.Display.Idisplay2d ref_display, EarthView.World.Spatial.Display.Isymbol ref_pSymbol)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(this.NativeObject, object.Equals(ref_display, null) ? IntPtr.Zero : ref_display.NativeObject, object.Equals(ref_pSymbol, null) ? IntPtr.Zero : ref_pSymbol.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount);

					protected draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32 m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount);

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <returns></returns>
					public virtual void Draw_NoVirtual(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_NoVirtual(this.NativeObject, dx, dy, pSegments, nCount);
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Function(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount)
					{
						Draw(dx, dy, pSegments, nCount);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr pNativeObject, IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount);

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <returns></returns>
					public virtual void Draw(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(this.NativeObject, dx, dy, pSegments, nCount);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, bool bUseOutline);

					protected draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, byte bUseOutline);

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <param name="bUseOutline">是否使用外边框</param>
					/// <returns></returns>
					public virtual void Draw_NoVirtual(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, bool bUseOutline)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_NoVirtual(this.NativeObject, dx, dy, pSegments, nCount, Convert.ToByte(bUseOutline));
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Function(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, bool bUseOutline)
					{
						Draw(dx, dy, pSegments, nCount, bUseOutline);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, byte bUseOutline);

					/// <summary>
					/// 绘制符号
					/// </summary>
					/// <param name="dx">x坐标数组</param>
					/// <param name="dy">y坐标数组</param>
					/// <param name="pSegments">分割数组</param>
					/// <param name="nCount">分割数目</param>
					/// <param name="bUseOutline">是否使用外边框</param>
					/// <returns></returns>
					public virtual void Draw(IntPtr dx, IntPtr dy, IntPtr pSegments, int nCount, bool bUseOutline)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(this.NativeObject, dx, dy, pSegments, nCount, Convert.ToByte(bUseOutline));
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void drawPath_CallBack_void_CDataPath(IntPtr pPath);

					protected drawPath_CallBack_void_CDataPath m_drawPath_CallBack_void_CDataPath;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_NoVirtual(IntPtr pNativeObject, IntPtr pPath);

					public virtual void DrawPath_NoVirtual(EarthView.World.Display.DataPath pPath)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_NoVirtual(this.NativeObject, object.Equals(pPath, null) ? IntPtr.Zero : pPath.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Function(IntPtr pPath)
					{
						EarthView.World.Display.DataPath csobj_pPath = new EarthView.World.Display.DataPath(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pPath.BindNativeObject(pPath,"CDataPath");
						csobj_pPath.Delegate = true;
						IClassFactory csobj_pPathClassFactory = GlobalClassFactoryMap.Get(csobj_pPath.GetCppInstanceTypeName());
						if (csobj_pPathClassFactory != null)
						{
							csobj_pPath.Delegate = true;
							csobj_pPath = csobj_pPathClassFactory.Create() as EarthView.World.Display.DataPath;
							csobj_pPath.BindNativeObject(pPath, "CDataPath");
							csobj_pPath.Delegate = true;
						}
						
						DrawPath(csobj_pPath);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(IntPtr pNativeObject, IntPtr pPath);

					public virtual void DrawPath(EarthView.World.Display.DataPath pPath)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(this.NativeObject, object.Equals(pPath, null) ? IntPtr.Zero : pPath.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void drawPath_CallBack_void_CDataPath_ev_bool(IntPtr pPath, bool bUseOutline);

					protected drawPath_CallBack_void_CDataPath_ev_bool m_drawPath_CallBack_void_CDataPath_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_NoVirtual(IntPtr pNativeObject, IntPtr pPath, byte bUseOutline);

					public virtual void DrawPath_NoVirtual(EarthView.World.Display.DataPath pPath, bool bUseOutline)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_NoVirtual(this.NativeObject, object.Equals(pPath, null) ? IntPtr.Zero : pPath.NativeObject, Convert.ToByte(bUseOutline));
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Function(IntPtr pPath, bool bUseOutline)
					{
						EarthView.World.Display.DataPath csobj_pPath = new EarthView.World.Display.DataPath(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_pPath.BindNativeObject(pPath,"CDataPath");
						csobj_pPath.Delegate = true;
						IClassFactory csobj_pPathClassFactory = GlobalClassFactoryMap.Get(csobj_pPath.GetCppInstanceTypeName());
						if (csobj_pPathClassFactory != null)
						{
							csobj_pPath.Delegate = true;
							csobj_pPath = csobj_pPathClassFactory.Create() as EarthView.World.Display.DataPath;
							csobj_pPath.BindNativeObject(pPath, "CDataPath");
							csobj_pPath.Delegate = true;
						}
						
						DrawPath(csobj_pPath, bUseOutline);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(IntPtr pNativeObject, IntPtr pPath, byte bUseOutline);

					public virtual void DrawPath(EarthView.World.Display.DataPath pPath, bool bUseOutline)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(this.NativeObject, object.Equals(pPath, null) ? IntPtr.Zero : pPath.NativeObject, Convert.ToByte(bUseOutline));
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void endDraw_CallBack_void();

					protected endDraw_CallBack_void m_endDraw_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw_NoVirtual()
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Function()
					{
						EndDraw();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(IntPtr pNativeObject);

					/// <summary>
					/// 绘制完成
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public virtual void EndDraw()
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(double left, double top, double width, double height);

					protected drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double left, double top, double width, double height);

					/// <summary>
					/// 绘制图例
					/// </summary>
					/// <param name="left">距左边距离</param>
					/// <param name="top">距上部距离</param>
					/// <param name="width">图例宽度</param>
					/// <param name="height">图例高度</param>
					/// <returns></returns>
					public virtual void DrawLegend_NoVirtual(double left, double top, double width, double height)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, left, top, width, height);
						
					}

					protected  void EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(double left, double top, double width, double height)
					{
						DrawLegend(left, top, width, height);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double left, double top, double width, double height);

					/// <summary>
					/// 绘制图例
					/// </summary>
					/// <param name="left">距左边距离</param>
					/// <param name="top">距上部距离</param>
					/// <param name="width">图例宽度</param>
					/// <param name="height">图例高度</param>
					/// <returns></returns>
					public virtual void DrawLegend(double left, double top, double width, double height)
					{
						EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, left, top, width, height);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol_d.so");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp_d.so");

						#else 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp.dll");

						#elif Linux 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol.so");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp.so");

						#else 
							private static bool bLoadSymbolRenderer = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadSymbolRenderer = LoadDll.Load("EV_Symbol_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSymbolRenderer", new SymbolRendererClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSymbolRendererProxy", new SymbolRendererClassFactory());

					public SymbolRenderer(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(IntPtr pObject, startDraw_CallBack_void_IDisplay2D_ISymbol pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr pObject, draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32 pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(IntPtr pObject, draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(IntPtr pObject, drawPath_CallBack_void_CDataPath pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(IntPtr pObject, drawPath_CallBack_void_CDataPath_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(IntPtr pObject, endDraw_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Symbol_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_startDraw_CallBack_void_IDisplay2D_ISymbol = EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol_Function;
							GC.KeepAlive(m_startDraw_CallBack_void_IDisplay2D_ISymbol);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_startDraw_void_IDisplay2D_ISymbol(this.NativeObject, m_startDraw_CallBack_void_IDisplay2D_ISymbol);
							m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32 = EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_Function;
							GC.KeepAlive(m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(this.NativeObject, m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32);
							m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool = EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_Function;
							GC.KeepAlive(m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_draw_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(this.NativeObject, m_draw_CallBack_void_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool);
							m_drawPath_CallBack_void_CDataPath = EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_Function;
							GC.KeepAlive(m_drawPath_CallBack_void_CDataPath);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath(this.NativeObject, m_drawPath_CallBack_void_CDataPath);
							m_drawPath_CallBack_void_CDataPath_ev_bool = EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool_Function;
							GC.KeepAlive(m_drawPath_CallBack_void_CDataPath_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawPath_void_CDataPath_ev_bool(this.NativeObject, m_drawPath_CallBack_void_CDataPath_ev_bool);
							m_endDraw_CallBack_void = EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void_Function;
							GC.KeepAlive(m_endDraw_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_endDraw_void(this.NativeObject, m_endDraw_CallBack_void);
							m_drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
							GC.KeepAlive(m_drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolRenderer_drawLegend_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_drawLegend_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						}
					}
					public static SymbolRenderer FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SymbolRenderer obj = baseObj as  SymbolRenderer;
						if (object.Equals(obj, null))
						{
							obj = new SymbolRenderer(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSymbolRenderer");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SymbolRendererClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SymbolRenderer emptyInstance = new SymbolRenderer(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
