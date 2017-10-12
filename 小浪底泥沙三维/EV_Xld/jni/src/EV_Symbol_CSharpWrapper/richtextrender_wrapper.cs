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
				public class RichTextRenderMeasure : EarthView.World.Core.AllocatedObject
				{
					public RichTextRenderMeasure() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRichTextRenderMeasure",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public RichTextRenderMeasure(string str, EarthView.World.Spatial.Display.Isymbol symbol) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuestr = new BasePtr(str);
						list.Add("str", valuestr.PtrVal);
						BasePtr valuesymbol = new BasePtr(symbol);
						list.Add("symbol", valuesymbol.PtrVal);
						Create("CRichTextRenderMeasure", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRenderMeasure_measureRichText_void_EVString_ISymbol(IntPtr pNativeObject, string str, IntPtr symbol);

					public void MeasureRichText(string str, EarthView.World.Spatial.Display.Isymbol symbol)
					{
						EarthView_World_Spatial_Display_CRichTextRenderMeasure_measureRichText_void_EVString_ISymbol(this.NativeObject, str, object.Equals(symbol, null) ? IntPtr.Zero : symbol.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_double_double(IntPtr pNativeObject, ref double w, ref double h);

					public void GetTextSize(ref double w, ref double h)
					{
						EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_double_double(this.NativeObject, ref w, ref h);
						
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_EarthView_World_Display_EVDeviceUnits_double_double(IntPtr pNativeObject, IntPtr unit, ref double w, ref double h);

					public void GetTextSize(EarthView.World.Display.Evdeviceunits unit, ref double w, ref double h)
					{
						EarthView_World_Spatial_Display_CRichTextRenderMeasure_getTextSize_void_EarthView_World_Display_EVDeviceUnits_double_double(this.NativeObject, object.Equals(unit, null) ? IntPtr.Zero : unit.NativeObject, ref w, ref h);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_d.so");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp_d.so");

						#else 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp.dll");

						#elif Linux 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol.so");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp.so");

						#else 
							private static bool bLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadRichTextRenderMeasure = LoadDll.Load("EV_Symbol_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRichTextRenderMeasure", new RichTextRenderMeasureClassFactory());

					public RichTextRenderMeasure(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RichTextRenderMeasure FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RichTextRenderMeasure obj = baseObj as  RichTextRenderMeasure;
						if (object.Equals(obj, null))
						{
							obj = new RichTextRenderMeasure(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRichTextRenderMeasure");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RichTextRenderMeasureClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RichTextRenderMeasure emptyInstance = new RichTextRenderMeasure(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class RichTextRender : EarthView.World.Core.AllocatedObject
				{
					public RichTextRender() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CRichTextRender",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRender_startDraw_void_IDisplay2D_ISymbol(IntPtr pNativeObject, IntPtr display, IntPtr pSymbol);

					public void StartDraw(EarthView.World.Display.Idisplay2d display, EarthView.World.Spatial.Display.Isymbol pSymbol)
					{
						EarthView_World_Spatial_Display_CRichTextRender_startDraw_void_IDisplay2D_ISymbol(this.NativeObject, object.Equals(display, null) ? IntPtr.Zero : display.NativeObject, object.Equals(pSymbol, null) ? IntPtr.Zero : pSymbol.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRender_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(IntPtr pNativeObject, double[] dx, double[] dy, int[] pSegments, int nCount);

					public void Draw(double[] dx, double[] dy, int[] pSegments, int nCount)
					{
						EarthView_World_Spatial_Display_CRichTextRender_draw_void_ev_real64_ev_real64_ev_int32_ev_int32(this.NativeObject, dx, dy, pSegments, nCount);
						
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
					private static extern void EarthView_World_Spatial_Display_CRichTextRender_endDraw_void(IntPtr pNativeObject);

					public void EndDraw()
					{
						EarthView_World_Spatial_Display_CRichTextRender_endDraw_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol_d.so");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp_d.so");

						#else 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp.dll");

						#elif Linux 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol.so");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp.so");

						#else 
							private static bool bLoadRichTextRender = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadRichTextRender = LoadDll.Load("EV_Symbol_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CRichTextRender", new RichTextRenderClassFactory());

					public RichTextRender(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RichTextRender FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RichTextRender obj = baseObj as  RichTextRender;
						if (object.Equals(obj, null))
						{
							obj = new RichTextRender(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRichTextRender");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RichTextRenderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RichTextRender emptyInstance = new RichTextRender(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
