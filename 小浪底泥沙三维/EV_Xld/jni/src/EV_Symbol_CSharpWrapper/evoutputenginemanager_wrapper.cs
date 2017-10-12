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
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				public class OutputEngine : EarthView.World.Core.AllocatedObject
				{
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_getName_EVString_NoVirtual(IntPtr pNativeObject);

					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_getName_EVString(IntPtr pNativeObject);

					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createDrawSymbol_CallBack_CDrawSymbol_ev_int32(int symbolType);

					protected createDrawSymbol_CallBack_CDrawSymbol_ev_int32 m_createDrawSymbol_CallBack_CDrawSymbol_ev_int32;

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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_NoVirtual(IntPtr pNativeObject, int symbolType);

					public virtual EarthView.World.Spatial.Display.DrawSymbol CreateDrawSymbol_NoVirtual(int symbolType)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_NoVirtual(this.NativeObject, symbolType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawSymbol csObj = new EarthView.World.Spatial.Display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawSymbol");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawSymbol;
							csObj.BindNativeObject(__ptr, "CDrawSymbol");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Function(int symbolType)
					{
						EarthView.World.Spatial.Display.DrawSymbol csret=CreateDrawSymbol(symbolType);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(IntPtr pNativeObject, int symbolType);

					public virtual EarthView.World.Spatial.Display.DrawSymbol CreateDrawSymbol(int symbolType)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(this.NativeObject, symbolType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.DrawSymbol csObj = new EarthView.World.Spatial.Display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDrawSymbol");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.DrawSymbol;
							csObj.BindNativeObject(__ptr, "CDrawSymbol");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isSupportDevice_CallBack_ev_bool_IPaintDevice(IntPtr device);

					protected isSupportDevice_CallBack_ev_bool_IPaintDevice m_isSupportDevice_CallBack_ev_bool_IPaintDevice;

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
					private static extern byte EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_NoVirtual(IntPtr pNativeObject, IntPtr device);

					public virtual bool IsSupportDevice_NoVirtual(EarthView.World.Display.Ipaintdevice device)
					{
						byte ret=EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_NoVirtual(this.NativeObject, object.Equals(device, null) ? IntPtr.Zero : device.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Function(IntPtr device)
					{
						EarthView.World.Display.Ipaintdevice csobj_device = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_device.BindNativeObject(device,"IPaintDevice");
						csobj_device.Delegate = true;
						IClassFactory csobj_deviceClassFactory = GlobalClassFactoryMap.Get(csobj_device.GetCppInstanceTypeName());
						if (csobj_deviceClassFactory != null)
						{
							csobj_device.Delegate = true;
							csobj_device = csobj_deviceClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csobj_device.BindNativeObject(device, "IPaintDevice");
							csobj_device.Delegate = true;
						}
						
						bool csret=IsSupportDevice(csobj_device);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(IntPtr pNativeObject, IntPtr device);

					public virtual bool IsSupportDevice(EarthView.World.Display.Ipaintdevice device)
					{
						byte ret=EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(this.NativeObject, object.Equals(device, null) ? IntPtr.Zero : device.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void getSupportedFormat_CallBack_void_CStringArray(IntPtr array);

					protected getSupportedFormat_CallBack_void_CStringArray m_getSupportedFormat_CallBack_void_CStringArray;

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
					private static extern void EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_NoVirtual(IntPtr pNativeObject, IntPtr array);

					public virtual void GetSupportedFormat_NoVirtual(ref EarthView.World.Core.StringArray array)
					{
						EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_NoVirtual(this.NativeObject, object.Equals(array, null) ? IntPtr.Zero : array.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Function(IntPtr array)
					{
						EarthView.World.Core.StringArray csobj_array = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_array.BindNativeObject(array,"CStringArray");
						csobj_array.Delegate = true;
						IClassFactory csobj_arrayClassFactory = GlobalClassFactoryMap.Get(csobj_array.GetCppInstanceTypeName());
						if (csobj_arrayClassFactory != null)
						{
							csobj_array.Delegate = true;
							csobj_array = csobj_arrayClassFactory.Create() as EarthView.World.Core.StringArray;
							csobj_array.BindNativeObject(array, "CStringArray");
							csobj_array.Delegate = true;
						}
						
						GetSupportedFormat(ref csobj_array);
						
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
					private static extern void EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(IntPtr pNativeObject, IntPtr array);

					public virtual void GetSupportedFormat(ref EarthView.World.Core.StringArray array)
					{
						EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(this.NativeObject, object.Equals(array, null) ? IntPtr.Zero : array.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double(ref IntPtr format, IntPtr fileName, double w_in_p, double h_in_p);

					protected createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double m_createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double;

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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_NoVirtual(IntPtr pNativeObject, string format, IntPtr fileName, double w_in_p, double h_in_p);

					public virtual EarthView.World.Display.Ipaintdevice CreateOutputDevice_NoVirtual(string format, IntPtr fileName, double w_in_p, double h_in_p)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_NoVirtual(this.NativeObject, format, fileName, w_in_p, h_in_p);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Function(ref IntPtr format, IntPtr fileName, double w_in_p, double h_in_p)
					{
						string strformat= Marshal.PtrToStringAnsi(format);
						ClassFactory.FreeString(ref format);
						
						EarthView.World.Display.Ipaintdevice csret=CreateOutputDevice(strformat,fileName, w_in_p, h_in_p);
						
						if (!object.Equals(csret, null))
						{
						    csret.Delegate = true;
						    return csret.NativeObject;
						}
						else
						{
						    return IntPtr.Zero;
						}
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(IntPtr pNativeObject, string format, IntPtr fileName, double w_in_p, double h_in_p);

					public virtual EarthView.World.Display.Ipaintdevice CreateOutputDevice(string format, IntPtr fileName, double w_in_p, double h_in_p)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(this.NativeObject, format, fileName, w_in_p, h_in_p);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol_d.so");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp_d.so");

						#else 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp.dll");

						#elif Linux 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol.so");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp.so");

						#else 
							private static bool bLoadOutputEngine = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadOutputEngine = LoadDll.Load("EV_Symbol_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::COutputEngine", new OutputEngineClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::COutputEngineProxy", new OutputEngineClassFactory());

					public OutputEngine(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(IntPtr pObject, createDrawSymbol_CallBack_CDrawSymbol_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(IntPtr pObject, isSupportDevice_CallBack_ev_bool_IPaintDevice pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(IntPtr pObject, getSupportedFormat_CallBack_void_CStringArray pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(IntPtr pObject, createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_createDrawSymbol_CallBack_CDrawSymbol_ev_int32 = EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Function;
							GC.KeepAlive(m_createDrawSymbol_CallBack_CDrawSymbol_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(this.NativeObject, m_createDrawSymbol_CallBack_CDrawSymbol_ev_int32);
							m_isSupportDevice_CallBack_ev_bool_IPaintDevice = EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Function;
							GC.KeepAlive(m_isSupportDevice_CallBack_ev_bool_IPaintDevice);
							EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(this.NativeObject, m_isSupportDevice_CallBack_ev_bool_IPaintDevice);
							m_getSupportedFormat_CallBack_void_CStringArray = EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Function;
							GC.KeepAlive(m_getSupportedFormat_CallBack_void_CStringArray);
							EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(this.NativeObject, m_getSupportedFormat_CallBack_void_CStringArray);
							m_createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double = EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Function;
							GC.KeepAlive(m_createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double);
							EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(this.NativeObject, m_createOutputDevice_CallBack_IPaintDevice_EVString_char_double_double);
						}
					}
					public static OutputEngine FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						OutputEngine obj = baseObj as  OutputEngine;
						if (object.Equals(obj, null))
						{
							obj = new OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "COutputEngine");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class OutputEngineClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						OutputEngine emptyInstance = new OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class Evoutputenginemanager : EarthView.World.Core.AllocatedObject
				{

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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_getSingletonPtr_EVOutputEngineManager();

					public static EarthView.World.Spatial.Display.Evoutputenginemanager GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_getSingletonPtr_EVOutputEngineManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Evoutputenginemanager csObj = new EarthView.World.Spatial.Display.Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "EVOutputEngineManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Evoutputenginemanager;
							csObj.BindNativeObject(__ptr, "EVOutputEngineManager");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_IPaintDevice(IntPtr pNativeObject, IntPtr device);

					/// <summary>
					/// 获取当前输出引擎
					/// </summary>
					public EarthView.World.Spatial.Display.OutputEngine GetOutputEngine(EarthView.World.Display.Ipaintdevice device)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_IPaintDevice(this.NativeObject, object.Equals(device, null) ? IntPtr.Zero : device.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.OutputEngine csObj = new EarthView.World.Spatial.Display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "COutputEngine");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.OutputEngine;
							csObj.BindNativeObject(__ptr, "COutputEngine");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_getSupportedFormat_CStringArray(IntPtr pNativeObject);

					public EarthView.World.Core.StringArray GetSupportedFormat()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_getSupportedFormat_CStringArray(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.StringArray csObj = new EarthView.World.Core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CStringArray");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.StringArray;
							csObj.BindNativeObject(__ptr, "CStringArray");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_createOutputDevice_IPaintDevice_EVString_char_double_double(IntPtr pNativeObject, string format, byte[] fileName, double w_in_p, double h_in_p);

					public EarthView.World.Display.Ipaintdevice CreateOutputDevice(string format, byte[] fileName, double w_in_p, double h_in_p)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_createOutputDevice_IPaintDevice_EVString_char_double_double(this.NativeObject, format, fileName, w_in_p, h_in_p);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Display.Ipaintdevice csObj = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IPaintDevice");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
							csObj.BindNativeObject(__ptr, "IPaintDevice");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Spatial_Display_EVOutputEngineManager_registerOutputEngine_void_COutputEngine(IntPtr pNativeObject, IntPtr pEngine);

					public void RegisterOutputEngine(EarthView.World.Spatial.Display.OutputEngine pEngine)
					{
						EarthView_World_Spatial_Display_EVOutputEngineManager_registerOutputEngine_void_COutputEngine(this.NativeObject, object.Equals(pEngine, null) ? IntPtr.Zero : pEngine.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_EVString(IntPtr pNativeObject, string engineName);

					public EarthView.World.Spatial.Display.OutputEngine GetOutputEngine(string engineName)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_EVString(this.NativeObject, engineName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.OutputEngine csObj = new EarthView.World.Spatial.Display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "COutputEngine");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.OutputEngine;
							csObj.BindNativeObject(__ptr, "COutputEngine");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_ev_uint32(IntPtr pNativeObject, uint index);

					public EarthView.World.Spatial.Display.OutputEngine GetOutputEngine(uint index)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_ev_uint32(this.NativeObject, index);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.OutputEngine csObj = new EarthView.World.Spatial.Display.OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "COutputEngine");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.OutputEngine;
							csObj.BindNativeObject(__ptr, "COutputEngine");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern uint EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngineCount_ev_uint32(IntPtr pNativeObject);

					public uint GetOutputEngineCount()
					{
						uint ret=EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngineCount_ev_uint32(this.NativeObject);
						
						return ret;
						
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
					private static extern void EarthView_World_Spatial_Display_EVOutputEngineManager_loadEngines_void(IntPtr pNativeObject);

					public void LoadEngines()
					{
						EarthView_World_Spatial_Display_EVOutputEngineManager_loadEngines_void(this.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_d.so");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp_d.so");

						#else 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_d.dll");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp.dll");

						#elif Linux 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol.so");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp.so");

						#else 
							private static bool bLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol.dll");
							private static bool csbLoadEvoutputenginemanager = LoadDll.Load("EV_Symbol_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::EVOutputEngineManager", new EvoutputenginemanagerClassFactory());

					public Evoutputenginemanager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static Evoutputenginemanager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Evoutputenginemanager obj = baseObj as  Evoutputenginemanager;
						if (object.Equals(obj, null))
						{
							obj = new Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "EVOutputEngineManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class EvoutputenginemanagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Evoutputenginemanager emptyInstance = new Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
