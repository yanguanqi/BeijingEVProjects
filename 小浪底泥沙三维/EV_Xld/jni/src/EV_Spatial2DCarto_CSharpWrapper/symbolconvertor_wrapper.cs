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
				/// <summary>
				/// 符号转换类
				/// </summary>
				public class SymbolConvertor : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public SymbolConvertor() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSymbolConvertor",  null);
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
					private static extern IntPtr EarthView_World_Spatial_Carto_CSymbolConvertor_resetLineSymbolWidth_CLineSymbol_CLineSymbol_ev_real64(IntPtr pNativeObject, IntPtr pLineSymbol, double dPageScale);

					/// <summary>
					/// 线状符号的转化
					/// </summary>
					/// <param name="pLineSymbol">线状符号</param>
					/// <param name="dPageScale">纸张比例尺</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.LineSymbol ResetLineSymbolWidth(EarthView.World.Spatial.Display.LineSymbol pLineSymbol, double dPageScale)
					{
						IntPtr __ptr = EarthView_World_Spatial_Carto_CSymbolConvertor_resetLineSymbolWidth_CLineSymbol_CLineSymbol_ev_real64(this.NativeObject, object.Equals(pLineSymbol, null) ? IntPtr.Zero : pLineSymbol.NativeObject, dPageScale);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.LineSymbol csObj = new EarthView.World.Spatial.Display.LineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLineSymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.LineSymbol;
							csObj.BindNativeObject(__ptr, "CLineSymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Carto_CSymbolConvertor_resetTextSymbolSize_CTextSymbol_CTextSymbol_ev_real64(IntPtr pNativeObject, IntPtr pTextSymbol, double dPageScale);

					/// <summary>
					/// 文本符号的转化
					/// </summary>
					/// <param name="pTextSymbol">文本符号</param>
					/// <param name="dPageScale">纸张比例尺</param>
					/// <returns></returns>
					public EarthView.World.Spatial.Display.TextSymbol ResetTextSymbolSize(EarthView.World.Spatial.Display.TextSymbol pTextSymbol, double dPageScale)
					{
						IntPtr __ptr = EarthView_World_Spatial_Carto_CSymbolConvertor_resetTextSymbolSize_CTextSymbol_CTextSymbol_ev_real64(this.NativeObject, object.Equals(pTextSymbol, null) ? IntPtr.Zero : pTextSymbol.NativeObject, dPageScale);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.TextSymbol csObj = new EarthView.World.Spatial.Display.TextSymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CTextSymbol");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.TextSymbol;
							csObj.BindNativeObject(__ptr, "CTextSymbol");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_d.dll");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_d.so");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.so");

						#else 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_d.dll");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto.dll");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp.dll");

						#elif Linux 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto.so");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp.so");

						#else 
							private static bool bLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto.dll");
							private static bool csbLoadSymbolConvertor = LoadDll.Load("EV_Spatial2DCarto_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CSymbolConvertor", new SymbolConvertorClassFactory());

					public SymbolConvertor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SymbolConvertor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SymbolConvertor obj = baseObj as  SymbolConvertor;
						if (object.Equals(obj, null))
						{
							obj = new SymbolConvertor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSymbolConvertor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SymbolConvertorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SymbolConvertor emptyInstance = new SymbolConvertor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
