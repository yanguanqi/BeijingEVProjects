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
			///缓存位图基类
			/// </summary>
			public class Icachedbitmap : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				///默认构造函数
				/// </summary>
				public Icachedbitmap() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("ICachedBitmapProxy", null);
					if (!"EarthView.World.Display.Icachedbitmap".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void load_CallBack_void_IBitmap_IPaintDevice(IntPtr bmp, IntPtr ref_destDevice);

				protected load_CallBack_void_IBitmap_IPaintDevice m_load_CallBack_void_IBitmap_IPaintDevice;

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
				private static extern void EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_NoVirtual(IntPtr pNativeObject, IntPtr bmp, IntPtr ref_destDevice);

				/// <summary>
				/// 加载
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destDevice">目标设备</param>
				/// <returns></returns>
				public virtual void Load_NoVirtual(EarthView.World.Display.Ibitmap bmp, EarthView.World.Display.Ipaintdevice ref_destDevice)
				{
					EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_NoVirtual(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, object.Equals(ref_destDevice, null) ? IntPtr.Zero : ref_destDevice.NativeObject);
					
				}

				protected  void EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Function(IntPtr bmp, IntPtr ref_destDevice)
				{
					EarthView.World.Display.Ibitmap csobj_bmp = new EarthView.World.Display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_bmp.BindNativeObject(bmp,"IBitmap");
					csobj_bmp.Delegate = true;
					IClassFactory csobj_bmpClassFactory = GlobalClassFactoryMap.Get(csobj_bmp.GetCppInstanceTypeName());
					if (csobj_bmpClassFactory != null)
					{
						csobj_bmp.Delegate = true;
						csobj_bmp = csobj_bmpClassFactory.Create() as EarthView.World.Display.Ibitmap;
						csobj_bmp.BindNativeObject(bmp, "IBitmap");
						csobj_bmp.Delegate = true;
					}
					EarthView.World.Display.Ipaintdevice csobj_ref_destDevice = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_destDevice.BindNativeObject(ref_destDevice,"IPaintDevice");
					csobj_ref_destDevice.Delegate = true;
					IClassFactory csobj_ref_destDeviceClassFactory = GlobalClassFactoryMap.Get(csobj_ref_destDevice.GetCppInstanceTypeName());
					if (csobj_ref_destDeviceClassFactory != null)
					{
						csobj_ref_destDevice.Delegate = true;
						csobj_ref_destDevice = csobj_ref_destDeviceClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
						csobj_ref_destDevice.BindNativeObject(ref_destDevice, "IPaintDevice");
						csobj_ref_destDevice.Delegate = true;
					}
					
					Load(csobj_bmp, csobj_ref_destDevice);
					
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
				private static extern void EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(IntPtr pNativeObject, IntPtr bmp, IntPtr ref_destDevice);

				/// <summary>
				/// 加载
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destDevice">目标设备</param>
				/// <returns></returns>
				public virtual void Load(EarthView.World.Display.Ibitmap bmp, EarthView.World.Display.Ipaintdevice ref_destDevice)
				{
					EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(this.NativeObject, object.Equals(bmp, null) ? IntPtr.Zero : bmp.NativeObject, object.Equals(ref_destDevice, null) ? IntPtr.Zero : ref_destDevice.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void render_CallBack_void_ev_int32_ev_int32(int x, int y);

				protected render_CallBack_void_ev_int32_ev_int32 m_render_CallBack_void_ev_int32_ev_int32;

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
				private static extern void EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, int x, int y);

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				public virtual void Render_NoVirtual(int x, int y)
				{
					EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_NoVirtual(this.NativeObject, x, y);
					
				}

				protected  void EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Function(int x, int y)
				{
					Render(x, y);
					
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
				private static extern void EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(IntPtr pNativeObject, int x, int y);

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				public virtual void Render(int x, int y)
				{
					EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(this.NativeObject, x, y);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void render_CallBack_void_IPaintDevice_ev_int32_ev_int32(IntPtr destDevice, int x, int y);

				protected render_CallBack_void_IPaintDevice_ev_int32_ev_int32 m_render_CallBack_void_IPaintDevice_ev_int32_ev_int32;

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
				private static extern void EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_NoVirtual(IntPtr pNativeObject, IntPtr destDevice, int x, int y);

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="destDevice">目标设备</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				public virtual void Render_NoVirtual(EarthView.World.Display.Ipaintdevice destDevice, int x, int y)
				{
					EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_NoVirtual(this.NativeObject, object.Equals(destDevice, null) ? IntPtr.Zero : destDevice.NativeObject, x, y);
					
				}

				protected  void EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Function(IntPtr destDevice, int x, int y)
				{
					EarthView.World.Display.Ipaintdevice csobj_destDevice = new EarthView.World.Display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_destDevice.BindNativeObject(destDevice,"IPaintDevice");
					csobj_destDevice.Delegate = true;
					IClassFactory csobj_destDeviceClassFactory = GlobalClassFactoryMap.Get(csobj_destDevice.GetCppInstanceTypeName());
					if (csobj_destDeviceClassFactory != null)
					{
						csobj_destDevice.Delegate = true;
						csobj_destDevice = csobj_destDeviceClassFactory.Create() as EarthView.World.Display.Ipaintdevice;
						csobj_destDevice.BindNativeObject(destDevice, "IPaintDevice");
						csobj_destDevice.Delegate = true;
					}
					
					Render(csobj_destDevice, x, y);
					
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
				private static extern void EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(IntPtr pNativeObject, IntPtr destDevice, int x, int y);

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="destDevice">目标设备</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				public virtual void Render(EarthView.World.Display.Ipaintdevice destDevice, int x, int y)
				{
					EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(this.NativeObject, object.Equals(destDevice, null) ? IntPtr.Zero : destDevice.NativeObject, x, y);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_d.so");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp_d.so");

					#else 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_d.dll");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#elif Linux 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface.so");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp.so");

					#else 
						private static bool bLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface.dll");
						private static bool csbLoadIcachedbitmap = LoadDll.Load("EV_SpatialInterface_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::ICachedBitmap", new IcachedbitmapClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Display::ICachedBitmapProxy", new IcachedbitmapClassFactory());

				public Icachedbitmap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(IntPtr pObject, load_CallBack_void_IBitmap_IPaintDevice pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(IntPtr pObject, render_CallBack_void_ev_int32_ev_int32 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(IntPtr pObject, render_CallBack_void_IPaintDevice_ev_int32_ev_int32 pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_load_CallBack_void_IBitmap_IPaintDevice = EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Function;
						GC.KeepAlive(m_load_CallBack_void_IBitmap_IPaintDevice);
						EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(this.NativeObject, m_load_CallBack_void_IBitmap_IPaintDevice);
						m_render_CallBack_void_ev_int32_ev_int32 = EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Function;
						GC.KeepAlive(m_render_CallBack_void_ev_int32_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(this.NativeObject, m_render_CallBack_void_ev_int32_ev_int32);
						m_render_CallBack_void_IPaintDevice_ev_int32_ev_int32 = EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Function;
						GC.KeepAlive(m_render_CallBack_void_IPaintDevice_ev_int32_ev_int32);
						EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(this.NativeObject, m_render_CallBack_void_IPaintDevice_ev_int32_ev_int32);
					}
				}
				public static Icachedbitmap FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Icachedbitmap obj = baseObj as  Icachedbitmap;
					if (object.Equals(obj, null))
					{
						obj = new Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "ICachedBitmap");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IcachedbitmapClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Icachedbitmap emptyInstance = new Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
