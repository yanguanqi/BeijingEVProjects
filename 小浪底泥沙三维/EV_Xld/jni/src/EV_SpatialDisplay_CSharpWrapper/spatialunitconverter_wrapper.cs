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
				public enum LENGTHUNITTYPE
				{
								LUT_KILOMETERS = 0,
								LUT_METERS = 1,
								LUT_DECIMETERS = 2,
								LUT_CENTIMETERS = 3,
								LUT_MILLIMETER = 4,
								LUT_LI = 5,
								LUT_ZHANG = 6,
								LUT_CHI = 7,
								LUT_CUN = 8,
								LUT_FEET = 9,
								LUT_INCHES = 10,
								LUT_YARDS = 11,
								LUT_MILES = 12,
								LUT_NAUTICALMILES = 13,
								LUT_DECIMALDEGREES = 14,
								LUT_POINTS = 15,
								LUT_UNKNOWN = 16
				
				}

				public enum AREAUNITTYPE
				{
								AUT_SQUARE_KILOMETERS = 0,
								AUT_SQUARE_METERS = 1,
								AUT_SQUARE_DECIMETERS = 2,
								AUT_SQUARE_CENTIMETERS = 3,
								AUT_SQUARE_MILLIMETER = 4,
								AUT_HECTARE = 5,
								AUT_ARE = 6,
								AUT_QING = 7,
								AUT_MU = 8,
								AUT_SQUARE_ZHANG = 9,
								AUT_SQUARE_CHI = 10,
								AUT_SQUARE_CUN = 11,
								AUT_ACRE = 12,
								AUT_SQUARE_MILES = 13,
								AUT_SQUARE_FEET = 14,
								AUT_SQUARE_INCHES = 15,
								AUT_SQUARE_YARDS = 16,
								AUT_UNKNOWN = 17
				
				}

				public class SpatialUnitConverter : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					public SpatialUnitConverter() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialUnitConverter",  null);
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
					private static extern double EarthView_World_Spatial_Display_CSpatialUnitConverter_otherLengthUnitTokm_ev_real64_ev_real64_EVMapUnits(IntPtr pNativeObject, double defaultUnitValue, EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit);

					/// <summary>
					/// 其他长度单位转化为千米
					/// </summary>
					/// <param name="defaultUnitValue">地图默认单位值</param>
					/// <param name="mapUnit">地图默认单位</param>
					/// <returns> 转化为千米后所对应的值</returns>
					public double OtherLengthUnitTokm(double defaultUnitValue, EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit)
					{
						double ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_otherLengthUnitTokm_ev_real64_ev_real64_EVMapUnits(this.NativeObject, defaultUnitValue, mapUnit);
						
						return ret;
						
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
					private static extern double EarthView_World_Spatial_Display_CSpatialUnitConverter_kmToOtherLengthUnit_ev_real64_ev_real64_LengthUnitType(IntPtr pNativeObject, double kiloValuve, EarthView.World.Spatial.Display.LENGTHUNITTYPE uintType);

					/// <summary>
					/// 千米转化为其他长度单位
					/// </summary>
					/// <param name="kiloValuve ">单位为千米的值</param>
					/// <param name="uintType ">需要转化成的长度单位类型</param>
					/// <returns>转化后的单位对应的值</returns>
					public double KmToOtherLengthUnit(double kiloValuve, EarthView.World.Spatial.Display.LENGTHUNITTYPE uintType)
					{
						double ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_kmToOtherLengthUnit_ev_real64_ev_real64_LengthUnitType(this.NativeObject, kiloValuve, uintType);
						
						return ret;
						
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
					private static extern double EarthView_World_Spatial_Display_CSpatialUnitConverter_otherAreaUnitTokm2_ev_real64_ev_real64_EVMapUnits(IntPtr pNativeObject, double defaultUnitValue, EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit);

					/// <summary>
					/// 其他面积单位转化为平方千米
					/// </summary>
					/// <param name="defaultUnitValue">地图默认面积单位的值</param>
					/// <param name="mapUnit">地图默认的面积单位类型</param>
					/// <returns>转化为平方千米后所对应的值</returns>
					public double OtherAreaUnitTokm2(double defaultUnitValue, EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit)
					{
						double ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_otherAreaUnitTokm2_ev_real64_ev_real64_EVMapUnits(this.NativeObject, defaultUnitValue, mapUnit);
						
						return ret;
						
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
					private static extern double EarthView_World_Spatial_Display_CSpatialUnitConverter_km2ToOtherAreaUnit_ev_real64_ev_real64_AreaUnitType(IntPtr pNativeObject, double squareKiloValuve, EarthView.World.Spatial.Display.AREAUNITTYPE unitType);

					/// <summary>
					/// 平方千米转化为其他面积单位
					/// </summary>
					/// <param name="squareKiloValuve">单位为平方千米的值</param>
					/// <param name="uintType ">需要转化成的面积单位类型</param>
					/// <returns>转化后的面积单位类型所对应的值</returns>
					public double Km2ToOtherAreaUnit(double squareKiloValuve, EarthView.World.Spatial.Display.AREAUNITTYPE unitType)
					{
						double ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_km2ToOtherAreaUnit_ev_real64_ev_real64_AreaUnitType(this.NativeObject, squareKiloValuve, unitType);
						
						return ret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitString_EVString_EVMapUnits(IntPtr pNativeObject, EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit);

					/// <summary>
					/// 获取地图单位字符
					/// </summary>
					/// <param name="mapUnit">地图单位类型</param>
					/// <returns>地图单位字符</returns>
					public string GetMapUnitString(EarthView.World.Spatial.Atlas.EVMAPUNITS mapUnit)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitString_EVString_EVMapUnits(this.NativeObject, mapUnit);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern int EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitType_EVMapUnits_EVString(IntPtr pNativeObject, string strUnit);

					/// <summary>
					/// 获取地图单位类型
					/// </summary>
					/// <param name="strUnit">地图单位字符</param>
					/// <returns>地图单位类型</returns>
					public EarthView.World.Spatial.Atlas.EVMAPUNITS GetMapUnitType(string strUnit)
					{
						int ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitType_EVMapUnits_EVString(this.NativeObject, strUnit);
						
						return (EarthView.World.Spatial.Atlas.EVMAPUNITS)ret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitString_EVString_LengthUnitType(IntPtr pNativeObject, EarthView.World.Spatial.Display.LENGTHUNITTYPE lengthUnit);

					/// <summary>
					/// 获取长度单位字符
					/// </summary>
					/// <param name="mapUnit">长度单位类型</param>
					/// <returns>长度单位字符</returns>
					public string GetLengthUnitString(EarthView.World.Spatial.Display.LENGTHUNITTYPE lengthUnit)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitString_EVString_LengthUnitType(this.NativeObject, lengthUnit);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern int EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitType_LengthUnitType_EVString(IntPtr pNativeObject, string strUnit);

					/// <summary>
					/// 获取长度单位类型
					/// </summary>
					/// <param name="strUnit">长度单位字符</param>
					/// <returns>长度单位类型</returns>
					public EarthView.World.Spatial.Display.LENGTHUNITTYPE GetLengthUnitType(string strUnit)
					{
						int ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitType_LengthUnitType_EVString(this.NativeObject, strUnit);
						
						return (EarthView.World.Spatial.Display.LENGTHUNITTYPE)ret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitString_EVString_AreaUnitType(IntPtr pNativeObject, EarthView.World.Spatial.Display.AREAUNITTYPE areaUnit);

					/// <summary>
					/// 获取面积单位字符
					/// </summary>
					/// <param name="mapUnit">面积单位类型</param>
					/// <returns>面积单位字符</returns>
					public string GetAreaUnitString(EarthView.World.Spatial.Display.AREAUNITTYPE areaUnit)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitString_EVString_AreaUnitType(this.NativeObject, areaUnit);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern int EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitType_AreaUnitType_EVString(IntPtr pNativeObject, string strUnit);

					/// <summary>
					/// 获取面积单位类型
					/// </summary>
					/// <param name="strUnit">面积单位字符</param>
					/// <returns>面积单位类型</returns>
					public EarthView.World.Spatial.Display.AREAUNITTYPE GetAreaUnitType(string strUnit)
					{
						int ret=EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitType_AreaUnitType_EVString(this.NativeObject, strUnit);
						
						return (EarthView.World.Spatial.Display.AREAUNITTYPE)ret;
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialUnitConverter_toDMS_void_ev_real64_int_int_ev_real64(IntPtr pNativeObject, double dDecimal, ref int nDeg, ref int nMin, ref double dSec);

					/// <summary>
					/// 由十进制度格式转化成度分秒
					/// </summary>
					/// <param name="dDecimal">十进制度的值</param>
					/// <param name="nDgr">度</param>
					/// <param name="nMin">分</param>
					/// <param name="dSec">秒</param>
					/// <returns></returns>
					public void ToDMS(double dDecimal, ref int nDeg, ref int nMin, ref double dSec)
					{
						EarthView_World_Spatial_Display_CSpatialUnitConverter_toDMS_void_ev_real64_int_int_ev_real64(this.NativeObject, dDecimal, ref nDeg, ref nMin, ref dSec);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialUnitConverter_toDecimal_void_int_int_ev_real64_ev_real64(IntPtr pNativeObject, int nDgr, int nMin, double dSec, ref double dDecimal);

					/// <summary>
					/// 由度分秒格式转化成十进制度
					/// </summary>
					/// <param name="nDgr">度</param>
					/// <param name="nMin">分</param>
					/// <param name="dSec">秒</param>
					/// <param name="dDecimal">十进制度的值</param>
					/// <returns></returns>
					public void ToDecimal(int nDgr, int nMin, double dSec, ref double dDecimal)
					{
						EarthView_World_Spatial_Display_CSpatialUnitConverter_toDecimal_void_int_int_ev_real64_ev_real64(this.NativeObject, nDgr, nMin, dSec, ref dDecimal);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialUnitConverter_getOrientationString_EVString_ev_bool_ev_real64(IntPtr pNativeObject, byte bXCoord, double dCoordinate);

					/// <summary>
					/// 获取经纬所在的半球
					/// </summary>
					/// <param name="bXCoord">如果是X坐标，输入true,如果为Y坐标，输入false</param>
					/// <param name="dCoordinate">十进制度的值</param>
					/// <returns>坐标值所在的半球</returns>
					public string GetOrientationString(bool bXCoord, double dCoordinate)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialUnitConverter_getOrientationString_EVString_ev_bool_ev_real64(this.NativeObject, Convert.ToByte(bXCoord), dCoordinate);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialUnitConverter_toWGS84Point_void_ISpatialReference_ev_real64_ev_real64_ev_int32(IntPtr pNativeObject, IntPtr pPointRef, IntPtr dPX, IntPtr dPY, int nCount);

					/// <summary>
					/// 转化为WGS84坐标系的点
					/// </summary>
					/// <param name="pPointRef">当前点对应的坐标系</param>
					/// <param name="dPX">点的X坐标值</param>
					/// <param name="dPY">点的Y坐标值</param>
					/// <param name="nCount">进行转化的点的个数</param>
					/// <returns>坐标值所在的半球</returns>
					public void ToWGS84Point(EarthView.World.Spatial.Geometry.Ispatialreference pPointRef, IntPtr dPX, IntPtr dPY, int nCount)
					{
						EarthView_World_Spatial_Display_CSpatialUnitConverter_toWGS84Point_void_ISpatialReference_ev_real64_ev_real64_ev_int32(this.NativeObject, object.Equals(pPointRef, null) ? IntPtr.Zero : pPointRef.NativeObject, dPX, dPY, nCount);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_d.so");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp_d.so");

						#else 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay.so");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp.so");

						#else 
							private static bool bLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadSpatialUnitConverter = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialUnitConverter", new SpatialUnitConverterClassFactory());

					public SpatialUnitConverter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SpatialUnitConverter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialUnitConverter obj = baseObj as  SpatialUnitConverter;
						if (object.Equals(obj, null))
						{
							obj = new SpatialUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialUnitConverter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialUnitConverterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialUnitConverter emptyInstance = new SpatialUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
