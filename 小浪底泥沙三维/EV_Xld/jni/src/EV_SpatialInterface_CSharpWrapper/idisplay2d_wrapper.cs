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
			/// <summary>
			/// 2D显示基类
			/// </summary>
			public class Idisplay2d : EarthView.World.Core.AllocatedObject
			{
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void fixDevice_CallBack_void_IPaintDevice(IntPtr ref_device);

				protected fixDevice_CallBack_void_IPaintDevice m_fixDevice_CallBack_void_IPaintDevice;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_NoVirtual(IntPtr pNativeObject, IntPtr ref_device);

				/// <summary>
				/// 固定设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <returns></returns>
				public virtual void FixDevice_NoVirtual(EarthView.World.Display.Ipaintdevice ref_device)
				{
					EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_NoVirtual(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject);
					
				}

				protected  void EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Function(IntPtr ref_device)
				{
					EarthView.World.Display.Ipaintdevice csobj_ref_device = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_device.BindNativeObject(ref_device,"IPaintDevice");
					csobj_ref_device.Delegate = true;
					IClassFactory csobj_ref_deviceClassFactory = GlobalClassFactoryMap.Get(csobj_ref_device.GetCppInstanceTypeName());
					if (csobj_ref_deviceClassFactory != null)
					{
						csobj_ref_device.Delegate = true;
						csobj_ref_device = csobj_ref_deviceClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
						csobj_ref_device.BindNativeObject(ref_device, "IPaintDevice");
						csobj_ref_device.Delegate = true;
					}
					
					FixDevice(csobj_ref_device);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(IntPtr pNativeObject, IntPtr ref_device);

				/// <summary>
				/// 固定设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <returns></returns>
				public virtual void FixDevice(EarthView.World.Display.Ipaintdevice ref_device)
				{
					EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getDevice_CallBack_IPaintDevice();

				protected getDevice_CallBack_IPaintDevice m_getDevice_CallBack_IPaintDevice;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取设备
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回设备</returns>
				public virtual EarthView.World.Display.Ipaintdevice GetDevice_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_NoVirtual(this.NativeObject);
					
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

				protected  IntPtr EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Function()
				{
					EarthView.World.Display.Ipaintdevice csret=GetDevice();
					
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
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(IntPtr pNativeObject);

				/// <summary>
				/// 获取设备
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回设备</returns>
				public virtual EarthView.World.Display.Ipaintdevice GetDevice()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(this.NativeObject);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unfixDevice_CallBack_void();

				protected unfixDevice_CallBack_void m_unfixDevice_CallBack_void;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_unfixDevice_void_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 解开设备
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void UnfixDevice_NoVirtual()
				{
					EarthView_World_Display_IDisplay2D_unfixDevice_void_NoVirtual(this.NativeObject);
					
				}

				protected  void EarthView_World_Display_IDisplay2D_unfixDevice_void_Function()
				{
					UnfixDevice();
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_unfixDevice_void(IntPtr pNativeObject);

				/// <summary>
				/// 解开设备
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual void UnfixDevice()
				{
					EarthView_World_Display_IDisplay2D_unfixDevice_void(this.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getDisplayOptions_CallBack_IDisplayOptions();

				protected getDisplayOptions_CallBack_IDisplayOptions m_getDisplayOptions_CallBack_IDisplayOptions;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取显示选项
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示选项</returns>
				public virtual EarthView.World.Display.Idisplayoptions GetDisplayOptions_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Display.Idisplayoptions csObj = new EarthView.World.Display.Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDisplayOptions");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Display.Idisplayoptions;
						csObj.BindNativeObject(__ptr, "IDisplayOptions");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Function()
				{
					EarthView.World.Display.Idisplayoptions csret=GetDisplayOptions();
					
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
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(IntPtr pNativeObject);

				/// <summary>
				/// 获取显示选项
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示选项</returns>
				public virtual EarthView.World.Display.Idisplayoptions GetDisplayOptions()
				{
					IntPtr __ptr = EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Display.Idisplayoptions csObj = new EarthView.World.Display.Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "IDisplayOptions");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Display.Idisplayoptions;
						csObj.BindNativeObject(__ptr, "IDisplayOptions");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate int getDisplayResolution_CallBack_ev_int32();

				protected getDisplayResolution_CallBack_ev_int32 m_getDisplayResolution_CallBack_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 获取显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				public virtual int GetDisplayResolution_NoVirtual()
				{
					int ret=EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  int EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Function()
				{
					int csret=GetDisplayResolution();
					
					return csret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern int EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(IntPtr pNativeObject);

				/// <summary>
				/// 获取显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				public virtual int GetDisplayResolution()
				{
					int ret=EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setDisplayResolution_CallBack_void_ev_int32(int resolution);

				protected setDisplayResolution_CallBack_void_ev_int32 m_setDisplayResolution_CallBack_void_ev_int32;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_NoVirtual(IntPtr pNativeObject, int resolution);

				/// <summary>
				/// 设置显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				public virtual void SetDisplayResolution_NoVirtual(int resolution)
				{
					EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_NoVirtual(this.NativeObject, resolution);
					
				}

				protected  void EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Function(int resolution)
				{
					SetDisplayResolution(resolution);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(IntPtr pNativeObject, int resolution);

				/// <summary>
				/// 设置显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				public virtual void SetDisplayResolution(int resolution)
				{
					EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(this.NativeObject, resolution);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_d.so");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

					#else 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#elif Linux 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface.so");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp.so");

					#else 
						private static bool bLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIdisplay2d = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplay2D", new Idisplay2dClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplay2DProxy", new Idisplay2dClassFactory());

				public Idisplay2d(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(IntPtr pObject, fixDevice_CallBack_void_IPaintDevice pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(IntPtr pObject, getDevice_CallBack_IPaintDevice pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_unfixDevice_void(IntPtr pObject, unfixDevice_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(IntPtr pObject, getDisplayOptions_CallBack_IDisplayOptions pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(IntPtr pObject, getDisplayResolution_CallBack_ev_int32 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_SpatialInterface_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(IntPtr pObject, setDisplayResolution_CallBack_void_ev_int32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_fixDevice_CallBack_void_IPaintDevice = EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Function;
						GC.KeepAlive(m_fixDevice_CallBack_void_IPaintDevice);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(this.NativeObject, m_fixDevice_CallBack_void_IPaintDevice);
						m_getDevice_CallBack_IPaintDevice = EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Function;
						GC.KeepAlive(m_getDevice_CallBack_IPaintDevice);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(this.NativeObject, m_getDevice_CallBack_IPaintDevice);
						m_unfixDevice_CallBack_void = EarthView_World_Display_IDisplay2D_unfixDevice_void_Function;
						GC.KeepAlive(m_unfixDevice_CallBack_void);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_unfixDevice_void(this.NativeObject, m_unfixDevice_CallBack_void);
						m_getDisplayOptions_CallBack_IDisplayOptions = EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Function;
						GC.KeepAlive(m_getDisplayOptions_CallBack_IDisplayOptions);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(this.NativeObject, m_getDisplayOptions_CallBack_IDisplayOptions);
						m_getDisplayResolution_CallBack_ev_int32 = EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Function;
						GC.KeepAlive(m_getDisplayResolution_CallBack_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(this.NativeObject, m_getDisplayResolution_CallBack_ev_int32);
						m_setDisplayResolution_CallBack_void_ev_int32 = EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Function;
						GC.KeepAlive(m_setDisplayResolution_CallBack_void_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(this.NativeObject, m_setDisplayResolution_CallBack_void_ev_int32);
					}
				}
				public static Idisplay2d FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Idisplay2d obj = baseObj as  Idisplay2d;
					if (object.Equals(obj, null))
					{
						obj = new Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "IDisplay2D");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class Idisplay2dClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Idisplay2d emptyInstance = new Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
