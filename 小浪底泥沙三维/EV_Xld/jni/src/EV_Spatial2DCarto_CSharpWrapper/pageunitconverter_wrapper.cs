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
			namespace Carto
			{
				public class PageUnitConverter : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public PageUnitConverter() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CPageUnitConverter",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Carto_CPageUnitConverter_othersUnitToPixel_ev_real64_EVPageUnits_ev_real64(IntPtr pNativeObject, EarthView.World.Spatial.Carto.EVPAGEUNITS pageUnits, double dValue);

					/// <summary>
					///将其他单位的数据转换成像素
					/// </summary>
					/// <param name="pageUnits">当前数据的单位</param>
					/// <param name="dValue">当前数据</param>
					/// <returns>其他单位的数据</returns>
					public double OthersUnitToPixel(EarthView.World.Spatial.Carto.EVPAGEUNITS pageUnits, double dValue)
					{
						double ret=EarthView_World_Spatial_Carto_CPageUnitConverter_othersUnitToPixel_ev_real64_EVPageUnits_ev_real64(this.NativeObject, pageUnits, dValue);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern double EarthView_World_Spatial_Carto_CPageUnitConverter_pixelToOthersUnit_ev_real64_EVPageUnits_ev_real64(IntPtr pNativeObject, EarthView.World.Spatial.Carto.EVPAGEUNITS pageUnits, double dValue);

					/// <summary>
					///将像素转换成其他单位的数据
					/// </summary>
					/// <param name="pageUnits">需从像素转换成的目标单位</param>
					/// <param name="dValue">当前单位为像素的数据</param>
					/// <returns>其他单位的数据</returns>
					public double PixelToOthersUnit(EarthView.World.Spatial.Carto.EVPAGEUNITS pageUnits, double dValue)
					{
						double ret=EarthView_World_Spatial_Carto_CPageUnitConverter_pixelToOthersUnit_ev_real64_EVPageUnits_ev_real64(this.NativeObject, pageUnits, dValue);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitString_EVString_EVPageUnits(IntPtr pNativeObject, EarthView.World.Spatial.Carto.EVPAGEUNITS lengthUnit);

					/// <summary>
					/// 获取纸张单位字符
					/// </summary>
					/// <param name="mapUnit">纸张单位类型</param>
					/// <returns>纸张单位字符</returns>
					public string GetPageUnitString(EarthView.World.Spatial.Carto.EVPAGEUNITS lengthUnit)
					{
						IntPtr __ptr = EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitString_EVString_EVPageUnits(this.NativeObject, lengthUnit);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial2DCarto_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitType_EVPageUnits_EVString(IntPtr pNativeObject, string strUnit);

					/// <summary>
					/// 获取纸张单位类型
					/// </summary>
					/// <param name="strUnit">纸张单位字符</param>
					/// <returns>纸张单位类型</returns>
					public EarthView.World.Spatial.Carto.EVPAGEUNITS GetPageUnitType(string strUnit)
					{
						int ret=EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitType_EVPageUnits_EVString(this.NativeObject, strUnit);
						
						return (EarthView.World.Spatial.Carto.EVPAGEUNITS)ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_d.dll");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_d.so");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.so");

						#else 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_d.dll");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto.dll");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp.dll");

						#elif Linux 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto.so");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp.so");

						#else 
							private static bool bLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto.dll");
							private static bool csbLoadPageUnitConverter = LoadDll.Load("EV_Spatial2DCarto_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPageUnitConverter", new PageUnitConverterClassFactory());

					public PageUnitConverter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static PageUnitConverter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						PageUnitConverter obj = baseObj as  PageUnitConverter;
						if (object.Equals(obj, null))
						{
							obj = new PageUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CPageUnitConverter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class PageUnitConverterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						PageUnitConverter emptyInstance = new PageUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
