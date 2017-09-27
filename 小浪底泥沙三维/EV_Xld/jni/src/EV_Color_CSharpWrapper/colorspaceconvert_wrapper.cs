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
				/// 结构体 CIEYxy的值
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct CCIEYXY
				{
					public double Y;
					public double x;
					public double y;
				}

				/// <summary>
				/// 结构体 CIEXYZ的值
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct CCIEXYZ
				{
					public double X;
					public double Y;
					public double Z;
				}

				/// <summary>
				/// 结构体 CIERGB的值
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct CCIERGB
				{
					public double R;
					public double G;
					public double B;
				}

				/// <summary>
				/// 结构体 CIELab的值
				/// </summary>
				[StructLayout( LayoutKind.Sequential )]
				public struct CCIELAB
				{
					public double L;
					public double a;
					public double b;
				}

				/// <summary>
				/// 颜色空间进行转换类
				/// 提供方法如下：
				/// 设置转换参数、查找“显示参数文件”的路径、是否能转换
				/// Lab 转成 RGB、RGB 转换 Lab、Lab 转成 HSV、Hsv 转成 Lab、RGB 转成 Hsv、HSV 转成 RGB
				/// 计算三色刺激值、初始化矩阵、从CIERGB中获取RGB值
				/// CIEYxy转成CIEXYZ、CIERGB转成CIEXYZ、CIEXYZ转成CIELab、CIELab转成CIEXYZ、CIEXYZ转成CIERGB
				/// rgb转成CIERGB、CIERGB转成rgb、rgb转成hsv、hsv 转成 rgb
				/// </summary>
				public class ColorSpaceConvert : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public ColorSpaceConvert() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CColorSpaceConvert",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="param">显示器参数</param>
					/// <returns></returns>
					public ColorSpaceConvert(EarthView.World.Spatial.Display.MonitorParameter param) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueparam = new BasePtr(param);
						list.Add("param", valueparam.PtrVal);
						Create("CColorSpaceConvert", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_setMonitorParameter_void_CMonitorParameter(IntPtr pNativeObject, IntPtr param);

					/// <summary>
					/// 设置转换参数
					/// </summary>
					/// <param name="param">显示参数类对象</param>
					/// <returns></returns>
					public void SetMonitorParameter(EarthView.World.Spatial.Display.MonitorParameter param)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_setMonitorParameter_void_CMonitorParameter(this.NativeObject, object.Equals(param, null) ? IntPtr.Zero : param.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Display_CColorSpaceConvert_getMonitorParameter_CMonitorParameter(IntPtr pNativeObject);

					/// <summary>
					/// 查找“显示参数文件”的路径
					/// 内存需要外部释放
					/// </summary>
					/// <param name="param">显示参数类对象</param>
					/// <returns>EarthView::World::Spatial::Display::CMonitorParameter 类型指针</returns>
					public EarthView.World.Spatial.Display.MonitorParameter GetMonitorParameter()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CColorSpaceConvert_getMonitorParameter_CMonitorParameter(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.MonitorParameter csObj = new EarthView.World.Spatial.Display.MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMonitorParameter");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.MonitorParameter;
							csObj.BindNativeObject(__ptr, "CMonitorParameter");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToRGB_void_ev_real64_ev_real64_ev_real64_ev_uint8_ev_uint8_ev_uint8(IntPtr pNativeObject, double CIELab_L, double CIELab_a, double CIELab_b, ref byte RGB_r, ref byte RGB_g, ref byte RGB_b);

					/// <summary>
					/// Lab 转成 RGB
					/// </summary>
					/// <param name="CIELab_L">L值</param>
					/// <param name="CIELab_a">a值</param>
					/// <param name="CIELab_b">b值</param>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <returns></returns>
					public void CIELabToRGB(double CIELab_L, double CIELab_a, double CIELab_b, ref byte RGB_r, ref byte RGB_g, ref byte RGB_b)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToRGB_void_ev_real64_ev_real64_ev_real64_ev_uint8_ev_uint8_ev_uint8(this.NativeObject, CIELab_L, CIELab_a, CIELab_b, ref RGB_r, ref RGB_g, ref RGB_b);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToCIELab_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, int RGB_r, int RGB_g, int RGB_b, ref double CIELab_L, ref double CIELab_a, ref double CIELab_b);

					/// <summary>
					/// RGB 转换 Lab
					/// </summary>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <param name="CIELab_L">L值</param>
					/// <param name="CIELab_a">a值</param>
					/// <param name="CIELab_b">b值</param>
					/// <returns></returns>
					public void RgbToCIELab(int RGB_r, int RGB_g, int RGB_b, ref double CIELab_L, ref double CIELab_a, ref double CIELab_b)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToCIELab_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.NativeObject, RGB_r, RGB_g, RGB_b, ref CIELab_L, ref CIELab_a, ref CIELab_b);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToHsv_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double L, double a, double b, ref double h, ref double s, ref double v);

					/// <summary>
					/// Lab 转成 HSV
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <returns></returns>
					public void CIELabToHsv(double L, double a, double b, ref double h, ref double s, ref double v)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToHsv_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, L, a, b, ref h, ref s, ref v);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToCIELab_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double h, double s, double v, ref double L, ref double a, ref double b);

					/// <summary>
					/// Hsv 转成 Lab
					/// </summary>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					public void HsvToCIELab(double h, double s, double v, ref double L, ref double a, ref double b)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToCIELab_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, h, s, v, ref L, ref a, ref b);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToHsv_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, int RGB_r, int RGB_g, int RGB_b, ref double Hsv_h, ref double Hsv_s, ref double Hsv_v);

					/// <summary>
					/// RGB 转成 Hsv
					/// </summary>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <param name="Hsv_h">h值</param>
					/// <param name="Hsv_s">s值</param>
					/// <param name="Hsv_v">v值</param>
					/// <returns></returns>
					public void RgbToHsv(int RGB_r, int RGB_g, int RGB_b, ref double Hsv_h, ref double Hsv_s, ref double Hsv_v)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToHsv_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(this.NativeObject, RGB_r, RGB_g, RGB_b, ref Hsv_h, ref Hsv_s, ref Hsv_v);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToRGB_void_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_int32(IntPtr pNativeObject, double Hsv_h, double Hsv_s, double Hsv_v, ref int RGB_r, ref int RGB_g, ref int RGB_b);

					/// <summary>
					/// HSV 转成 RGB
					/// </summary>
					/// <param name="Hsv_h">h值</param>
					/// <param name="Hsv_s">s值</param>
					/// <param name="Hsv_v">v值</param>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <returns></returns>
					public void HsvToRGB(double Hsv_h, double Hsv_s, double Hsv_v, ref int RGB_r, ref int RGB_g, ref int RGB_b)
					{
						EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToRGB_void_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_int32(this.NativeObject, Hsv_h, Hsv_s, Hsv_v, ref RGB_r, ref RGB_g, ref RGB_b);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Color_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial_Display_CColorSpaceConvert_canConvert_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否能转换
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public bool CanConvert()
					{
						byte ret=EarthView_World_Spatial_Display_CColorSpaceConvert_canConvert_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color_d.dll");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color_d.so");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp_d.so");

						#else 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color_d.dll");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color.dll");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp.dll");

						#elif Linux 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color.so");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp.so");

						#else 
							private static bool bLoadColorSpaceConvert = LoadDll.Load("EV_Color.dll");
							private static bool csbLoadColorSpaceConvert = LoadDll.Load("EV_Color_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorSpaceConvert", new ColorSpaceConvertClassFactory());

					public ColorSpaceConvert(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ColorSpaceConvert FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ColorSpaceConvert obj = baseObj as  ColorSpaceConvert;
						if (object.Equals(obj, null))
						{
							obj = new ColorSpaceConvert(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CColorSpaceConvert");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ColorSpaceConvertClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ColorSpaceConvert emptyInstance = new ColorSpaceConvert(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
