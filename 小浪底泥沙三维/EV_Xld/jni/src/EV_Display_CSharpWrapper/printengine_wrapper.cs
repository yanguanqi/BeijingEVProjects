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
		namespace Display
		{
			public class PrintEngine : EarthView.World.Core.AllocatedObject
			{
				public enum EVPRINTENGINEPROPERTYKEY
				{
								PPK_CollateCopies,
								PPK_ColorMode,
								PPK_DocumentName,
								PPK_Orientation,
								PPK_OutputFileName,
								PPK_PageOrder,
								PPK_PaperRect,
								PPK_PaperSource,
								PPK_PrinterName,
								PPK_PrinterProgram,
								PPK_Resolution,
								PPK_SupportedResolutions,
								PPK_WindowsPageSize,
								PPK_FontEmbedding,
								PPK_SuppressSystemPrintStatus,
								PPK_Duplex,
								PPK_PaperSources,
								PPK_PaperSize,
								PPK_CustomPaperSize,
								PPK_CopyCount,
								PPK_SupportsMultipleCopies,
								PPK_CustomBase = 0xff00
				
				}

				public enum TYPE
				{
								Windows,
								Linux,
								Pdf
				
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int type_CallBack_Type();

				protected type_CallBack_Type m_type_CallBack_Type;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_type_Type_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Display.PrintEngine.TYPE EVType_NoVirtual()
				{
					int ret=EarthView_World_Display_CPrintEngine_type_Type_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Display.PrintEngine.TYPE)ret;
					
				}

				protected  int EarthView_World_Display_CPrintEngine_type_Type_Function()
				{
					EarthView.World.Display.PrintEngine.TYPE csret=EVType();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_type_Type(IntPtr pNativeObject);

				public virtual EarthView.World.Display.PrintEngine.TYPE EVType()
				{
					int ret=EarthView_World_Display_CPrintEngine_type_Type(this.NativeObject);
					
					return (EarthView.World.Display.PrintEngine.TYPE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, IntPtr value);

				protected setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant m_setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, IntPtr value);

				public virtual void SetProperty_NoVirtual(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, EarthView.World.Core.Variant value)
				{
					EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_NoVirtual(this.NativeObject, key, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Function(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, IntPtr value)
				{
					EarthView.World.Core.Variant csobj_value = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_value.BindNativeObject(value,"CVariant");
					csobj_value.Delegate = true;
					IClassFactory csobj_valueClassFactory = GlobalClassFactoryMap.Get(csobj_value.GetCppInstanceTypeName());
					if (csobj_valueClassFactory != null)
					{
						csobj_value.Delegate = true;
						csobj_value = csobj_valueClassFactory.Create() as EarthView.World.Core.Variant;
						csobj_value.BindNativeObject(value, "CVariant");
						csobj_value.Delegate = true;
					}
					
					SetProperty(key, csobj_value);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(IntPtr pNativeObject, EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, IntPtr value);

				public virtual void SetProperty(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key, EarthView.World.Core.Variant value)
				{
					EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(this.NativeObject, key, object.Equals(value, null) ? IntPtr.Zero : value.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr property_CallBack_CVariant_EVPrintEnginePropertyKey(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key);

				protected property_CallBack_CVariant_EVPrintEnginePropertyKey m_property_CallBack_CVariant_EVPrintEnginePropertyKey;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key);

				public virtual EarthView.World.Core.Variant Property_NoVirtual(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key)
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_NoVirtual(this.NativeObject, key);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVariant");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
						csObj.BindNativeObject(__ptr, "CVariant");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Function(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key)
				{
					EarthView.World.Core.Variant csret=Property(key);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(IntPtr pNativeObject, EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key);

				public virtual EarthView.World.Core.Variant Property(EarthView.World.Display.PrintEngine.EVPRINTENGINEPROPERTYKEY key)
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(this.NativeObject, key);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.Variant csObj = new EarthView.World.Core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CVariant");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.Variant;
						csObj.BindNativeObject(__ptr, "CVariant");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte newPage_CallBack_bool();

				protected newPage_CallBack_bool m_newPage_CallBack_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_newPage_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool NewPage_NoVirtual()
				{
					byte ret=EarthView_World_Display_CPrintEngine_newPage_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CPrintEngine_newPage_bool_Function()
				{
					bool csret=NewPage();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_newPage_bool(IntPtr pNativeObject);

				public virtual bool NewPage()
				{
					byte ret=EarthView_World_Display_CPrintEngine_newPage_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte abort_CallBack_bool();

				protected abort_CallBack_bool m_abort_CallBack_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_abort_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool Abort_NoVirtual()
				{
					byte ret=EarthView_World_Display_CPrintEngine_abort_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CPrintEngine_abort_bool_Function()
				{
					bool csret=Abort();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_abort_bool(IntPtr pNativeObject);

				public virtual bool Abort()
				{
					byte ret=EarthView_World_Display_CPrintEngine_abort_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte begin_CallBack_ev_bool();

				protected begin_CallBack_ev_bool m_begin_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_begin_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool Begin_NoVirtual()
				{
					byte ret=EarthView_World_Display_CPrintEngine_begin_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CPrintEngine_begin_ev_bool_Function()
				{
					bool csret=Begin();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_begin_ev_bool(IntPtr pNativeObject);

				public virtual bool Begin()
				{
					byte ret=EarthView_World_Display_CPrintEngine_begin_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte end_CallBack_ev_bool();

				protected end_CallBack_ev_bool m_end_CallBack_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_end_ev_bool_NoVirtual(IntPtr pNativeObject);

				public virtual bool End_NoVirtual()
				{
					byte ret=EarthView_World_Display_CPrintEngine_end_ev_bool_NoVirtual(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Display_CPrintEngine_end_ev_bool_Function()
				{
					bool csret=End();
					
					return Convert.ToByte(csret);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern byte EarthView_World_Display_CPrintEngine_end_ev_bool(IntPtr pNativeObject);

				public virtual bool End()
				{
					byte ret=EarthView_World_Display_CPrintEngine_end_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int metric_CallBack_ev_int32_EVPrintDeviceMetric(EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm);

				protected metric_CallBack_ev_int32_EVPrintDeviceMetric m_metric_CallBack_ev_int32_EVPrintDeviceMetric;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm);

				public virtual int Metric_NoVirtual(EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm)
				{
					int ret=EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_NoVirtual(this.NativeObject, dm);
					
					return ret;
					
				}

				protected  int EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Function(EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm)
				{
					int csret=Metric(dm);
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(IntPtr pNativeObject, EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm);

				public virtual int Metric(EarthView.World.Display.Printer.EVPRINTDEVICEMETRIC dm)
				{
					int ret=EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(this.NativeObject, dm);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int printerState_CallBack_EVPrinterState();

				protected printerState_CallBack_EVPrinterState m_printerState_CallBack_EVPrinterState;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Display.Printer.EVPRINTERSTATE PrinterState_NoVirtual()
				{
					int ret=EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Display.Printer.EVPRINTERSTATE)ret;
					
				}

				protected  int EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Function()
				{
					EarthView.World.Display.Printer.EVPRINTERSTATE csret=PrinterState();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(IntPtr pNativeObject);

				public virtual EarthView.World.Display.Printer.EVPRINTERSTATE PrinterState()
				{
					int ret=EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(this.NativeObject);
					
					return (EarthView.World.Display.Printer.EVPRINTERSTATE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getPaintEngine_CallBack_void();

				protected getPaintEngine_CallBack_void m_getPaintEngine_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_getPaintEngine_void_NoVirtual(IntPtr pNativeObject);

				public virtual IntPtr GetPaintEngine_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_getPaintEngine_void_NoVirtual(this.NativeObject);
					
					return __ptr;
					
				}

				protected  IntPtr EarthView_World_Display_CPrintEngine_getPaintEngine_void_Function()
				{
					IntPtr csret=GetPaintEngine();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_getPaintEngine_void(IntPtr pNativeObject);

				public virtual IntPtr GetPaintEngine()
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_getPaintEngine_void(this.NativeObject);
					
					return __ptr;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate long getPrinterDC_CallBack_ev_int64();

				protected getPrinterDC_CallBack_ev_int64 m_getPrinterDC_CallBack_ev_int64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern long EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_NoVirtual(IntPtr pNativeObject);

				public virtual long GetPrinterDC_NoVirtual()
				{
					long ret=EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  long EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Function()
				{
					long csret=GetPrinterDC();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern long EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(IntPtr pNativeObject);

				public virtual long GetPrinterDC()
				{
					long ret=EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void releasePrinterDC_CallBack_void();

				protected releasePrinterDC_CallBack_void m_releasePrinterDC_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_releasePrinterDC_void_NoVirtual(IntPtr pNativeObject);

				public virtual void ReleasePrinterDC_NoVirtual()
				{
					EarthView_World_Display_CPrintEngine_releasePrinterDC_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Function()
				{
					ReleasePrinterDC();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_releasePrinterDC_void(IntPtr pNativeObject);

				public virtual void ReleasePrinterDC()
				{
					EarthView_World_Display_CPrintEngine_releasePrinterDC_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(double left, double top, double right, double bottom);

				protected setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, double left, double top, double right, double bottom);

				public virtual void SetPageMargins_NoVirtual(double left, double top, double right, double bottom)
				{
					EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, left, top, right, bottom);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(double left, double top, double right, double bottom)
				{
					SetPageMargins(left, top, right, bottom);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, double left, double top, double right, double bottom);

				public virtual void SetPageMargins(double left, double top, double right, double bottom)
				{
					EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, left, top, right, bottom);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);

				protected getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 m_getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(IntPtr pNativeObject, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);

				public virtual void GetPageMargins_NoVirtual(IntPtr left, IntPtr top, IntPtr right, IntPtr bottom)
				{
					EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.NativeObject, left, top, right, bottom);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Function(IntPtr left, IntPtr top, IntPtr right, IntPtr bottom)
				{
					GetPageMargins(left, top, right, bottom);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, IntPtr left, IntPtr top, IntPtr right, IntPtr bottom);

				public virtual void GetPageMargins(IntPtr left, IntPtr top, IntPtr right, IntPtr bottom)
				{
					EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, left, top, right, bottom);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getPageRect_CallBack_CPageRect();

				protected getPageRect_CallBack_CPageRect m_getPageRect_CallBack_CPageRect;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Display.PageRect GetPageRect_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Display.PageRect csObj = new EarthView.World.Display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPageRect");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Display.PageRect;
						csObj.BindNativeObject(__ptr, "CPageRect");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Function()
				{
					EarthView.World.Display.PageRect csret=GetPageRect();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(IntPtr pNativeObject);

				public virtual EarthView.World.Display.PageRect GetPageRect()
				{
					IntPtr __ptr = EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Display.PageRect csObj = new EarthView.World.Display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPageRect");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Display.PageRect;
						csObj.BindNativeObject(__ptr, "CPageRect");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPageSize_CallBack_void_CPageSize(IntPtr paperSize);

				protected setPageSize_CallBack_void_CPageSize m_setPageSize_CallBack_void_CPageSize;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_NoVirtual(IntPtr pNativeObject, IntPtr paperSize);

				public virtual void SetPageSize_NoVirtual(EarthView.World.Display.PageSize paperSize)
				{
					EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_NoVirtual(this.NativeObject, object.Equals(paperSize, null) ? IntPtr.Zero : paperSize.NativeObject);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Function(IntPtr paperSize)
				{
					EarthView.World.Display.PageSize csobj_paperSize = new EarthView.World.Display.PageSize(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_paperSize.BindNativeObject(paperSize,"CPageSize");
					csobj_paperSize.Delegate = true;
					IClassFactory csobj_paperSizeClassFactory = GlobalClassFactoryMap.Get(csobj_paperSize.GetCppInstanceTypeName());
					if (csobj_paperSizeClassFactory != null)
					{
						csobj_paperSize.Delegate = true;
						csobj_paperSize = csobj_paperSizeClassFactory.Create() as EarthView.World.Display.PageSize;
						csobj_paperSize.BindNativeObject(paperSize, "CPageSize");
						csobj_paperSize.Delegate = true;
					}
					
					SetPageSize(csobj_paperSize);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(IntPtr pNativeObject, IntPtr paperSize);

				public virtual void SetPageSize(EarthView.World.Display.PageSize paperSize)
				{
					EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(this.NativeObject, object.Equals(paperSize, null) ? IntPtr.Zero : paperSize.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getPageSize_CallBack_EVPageSize();

				protected getPageSize_CallBack_EVPageSize m_getPageSize_CallBack_EVPageSize;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Carto.EVPAGESIZE GetPageSize_NoVirtual()
				{
					int ret=EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_NoVirtual(this.NativeObject);
					
					return (EarthView.World.Spatial.Carto.EVPAGESIZE)ret;
					
				}

				protected  int EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Function()
				{
					EarthView.World.Spatial.Carto.EVPAGESIZE csret=GetPageSize();
					
					return (int)csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(IntPtr pNativeObject);

				public virtual EarthView.World.Spatial.Carto.EVPAGESIZE GetPageSize()
				{
					int ret=EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(this.NativeObject);
					
					return (EarthView.World.Spatial.Carto.EVPAGESIZE)ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setResolution_CallBack_void_ev_int32(int resolution);

				protected setResolution_CallBack_void_ev_int32 m_setResolution_CallBack_void_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_NoVirtual(IntPtr pNativeObject, int resolution);

				public virtual void SetResolution_NoVirtual(int resolution)
				{
					EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_NoVirtual(this.NativeObject, resolution);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Function(int resolution)
				{
					SetResolution(resolution);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(IntPtr pNativeObject, int resolution);

				public virtual void SetResolution(int resolution)
				{
					EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(this.NativeObject, resolution);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setPaperSources_CallBack_void_EVPaperSource(EarthView.World.Display.Printer.EVPAPERSOURCE source);

				protected setPaperSources_CallBack_void_EVPaperSource m_setPaperSources_CallBack_void_EVPaperSource;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_NoVirtual(IntPtr pNativeObject, EarthView.World.Display.Printer.EVPAPERSOURCE source);

				public virtual void SetPaperSources_NoVirtual(EarthView.World.Display.Printer.EVPAPERSOURCE source)
				{
					EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_NoVirtual(this.NativeObject, source);
					
				}

				protected  void EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Function(EarthView.World.Display.Printer.EVPAPERSOURCE source)
				{
					SetPaperSources(source);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(IntPtr pNativeObject, EarthView.World.Display.Printer.EVPAPERSOURCE source);

				public virtual void SetPaperSources(EarthView.World.Display.Printer.EVPAPERSOURCE source)
				{
					EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(this.NativeObject, source);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int setPrinterProperty_CallBack_ev_int32();

				protected setPrinterProperty_CallBack_ev_int32 m_setPrinterProperty_CallBack_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_NoVirtual(IntPtr pNativeObject);

				public virtual int SetPrinterProperty_NoVirtual()
				{
					int ret=EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Function()
				{
					int csret=SetPrinterProperty();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(IntPtr pNativeObject);

				public virtual int SetPrinterProperty()
				{
					int ret=EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(this.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display_d.so");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp_d.so");

					#else 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display_d.dll");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp.dll");

					#elif Linux 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display.so");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp.so");

					#else 
						private static bool bLoadPrintEngine = LoadDll.Load("EV_Display.dll");
						private static bool csbLoadPrintEngine = LoadDll.Load("EV_Display_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CPrintEngine", new PrintEngineClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::CPrintEngineProxy", new PrintEngineClassFactory());

				public PrintEngine(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_type_Type(IntPtr pObject, type_CallBack_Type pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(IntPtr pObject, setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(IntPtr pObject, property_CallBack_CVariant_EVPrintEnginePropertyKey pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_newPage_bool(IntPtr pObject, newPage_CallBack_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_abort_bool(IntPtr pObject, abort_CallBack_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_begin_ev_bool(IntPtr pObject, begin_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_end_ev_bool(IntPtr pObject, end_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(IntPtr pObject, metric_CallBack_ev_int32_EVPrintDeviceMetric pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(IntPtr pObject, printerState_CallBack_EVPrinterState pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPaintEngine_void(IntPtr pObject, getPaintEngine_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(IntPtr pObject, getPrinterDC_CallBack_ev_int64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_releasePrinterDC_void(IntPtr pObject, releasePrinterDC_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(IntPtr pObject, getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(IntPtr pObject, getPageRect_CallBack_CPageRect pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(IntPtr pObject, setPageSize_CallBack_void_CPageSize pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(IntPtr pObject, getPageSize_CallBack_EVPageSize pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(IntPtr pObject, setResolution_CallBack_void_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(IntPtr pObject, setPaperSources_CallBack_void_EVPaperSource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Display_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(IntPtr pObject, setPrinterProperty_CallBack_ev_int32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_type_CallBack_Type = EarthView_World_Display_CPrintEngine_type_Type_Function;
						GC.KeepAlive(m_type_CallBack_Type);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_type_Type(this.NativeObject, m_type_CallBack_Type);
						m_setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant = EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Function;
						GC.KeepAlive(m_setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(this.NativeObject, m_setProperty_CallBack_void_EVPrintEnginePropertyKey_CVariant);
						m_property_CallBack_CVariant_EVPrintEnginePropertyKey = EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Function;
						GC.KeepAlive(m_property_CallBack_CVariant_EVPrintEnginePropertyKey);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(this.NativeObject, m_property_CallBack_CVariant_EVPrintEnginePropertyKey);
						m_newPage_CallBack_bool = EarthView_World_Display_CPrintEngine_newPage_bool_Function;
						GC.KeepAlive(m_newPage_CallBack_bool);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_newPage_bool(this.NativeObject, m_newPage_CallBack_bool);
						m_abort_CallBack_bool = EarthView_World_Display_CPrintEngine_abort_bool_Function;
						GC.KeepAlive(m_abort_CallBack_bool);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_abort_bool(this.NativeObject, m_abort_CallBack_bool);
						m_begin_CallBack_ev_bool = EarthView_World_Display_CPrintEngine_begin_ev_bool_Function;
						GC.KeepAlive(m_begin_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_begin_ev_bool(this.NativeObject, m_begin_CallBack_ev_bool);
						m_end_CallBack_ev_bool = EarthView_World_Display_CPrintEngine_end_ev_bool_Function;
						GC.KeepAlive(m_end_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_end_ev_bool(this.NativeObject, m_end_CallBack_ev_bool);
						m_metric_CallBack_ev_int32_EVPrintDeviceMetric = EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Function;
						GC.KeepAlive(m_metric_CallBack_ev_int32_EVPrintDeviceMetric);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(this.NativeObject, m_metric_CallBack_ev_int32_EVPrintDeviceMetric);
						m_printerState_CallBack_EVPrinterState = EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Function;
						GC.KeepAlive(m_printerState_CallBack_EVPrinterState);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(this.NativeObject, m_printerState_CallBack_EVPrinterState);
						m_getPaintEngine_CallBack_void = EarthView_World_Display_CPrintEngine_getPaintEngine_void_Function;
						GC.KeepAlive(m_getPaintEngine_CallBack_void);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPaintEngine_void(this.NativeObject, m_getPaintEngine_CallBack_void);
						m_getPrinterDC_CallBack_ev_int64 = EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Function;
						GC.KeepAlive(m_getPrinterDC_CallBack_ev_int64);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(this.NativeObject, m_getPrinterDC_CallBack_ev_int64);
						m_releasePrinterDC_CallBack_void = EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Function;
						GC.KeepAlive(m_releasePrinterDC_CallBack_void);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_releasePrinterDC_void(this.NativeObject, m_releasePrinterDC_CallBack_void);
						m_setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_setPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						m_getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64 = EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Function;
						GC.KeepAlive(m_getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(this.NativeObject, m_getPageMargins_CallBack_void_ev_real64_ev_real64_ev_real64_ev_real64);
						m_getPageRect_CallBack_CPageRect = EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Function;
						GC.KeepAlive(m_getPageRect_CallBack_CPageRect);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(this.NativeObject, m_getPageRect_CallBack_CPageRect);
						m_setPageSize_CallBack_void_CPageSize = EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Function;
						GC.KeepAlive(m_setPageSize_CallBack_void_CPageSize);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(this.NativeObject, m_setPageSize_CallBack_void_CPageSize);
						m_getPageSize_CallBack_EVPageSize = EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Function;
						GC.KeepAlive(m_getPageSize_CallBack_EVPageSize);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(this.NativeObject, m_getPageSize_CallBack_EVPageSize);
						m_setResolution_CallBack_void_ev_int32 = EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Function;
						GC.KeepAlive(m_setResolution_CallBack_void_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(this.NativeObject, m_setResolution_CallBack_void_ev_int32);
						m_setPaperSources_CallBack_void_EVPaperSource = EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Function;
						GC.KeepAlive(m_setPaperSources_CallBack_void_EVPaperSource);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(this.NativeObject, m_setPaperSources_CallBack_void_EVPaperSource);
						m_setPrinterProperty_CallBack_ev_int32 = EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Function;
						GC.KeepAlive(m_setPrinterProperty_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(this.NativeObject, m_setPrinterProperty_CallBack_ev_int32);
					}
				}
				public static PrintEngine FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PrintEngine obj = baseObj as  PrintEngine;
					if (object.Equals(obj, null))
					{
						obj = new PrintEngine(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPrintEngine");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PrintEngineClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PrintEngine emptyInstance = new PrintEngine(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
