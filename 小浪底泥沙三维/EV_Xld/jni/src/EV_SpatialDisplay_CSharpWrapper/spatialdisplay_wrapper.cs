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
				public class LabelEnvironment : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					public LabelEnvironment() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CLabelEnvironment",  null);
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
					private static extern byte EarthView_World_Spatial_Display_CLabelEnvironment_isActive_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 判断是否有效
					/// </summary>
					/// <param name=" "></param>
					/// <returns>若有效，返回ture,无效，返回false</returns>
					public bool IsActive()
					{
						byte ret=EarthView_World_Spatial_Display_CLabelEnvironment_isActive_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial_Display_CLabelEnvironment_setActive_void_ev_bool(IntPtr pNativeObject, byte active);

					/// <summary>
					/// 设置是否有效
					/// </summary>
					/// <param name="active">设置是否有效的值</param>
					/// <returns> </returns>
					public void SetActive(bool active)
					{
						EarthView_World_Spatial_Display_CLabelEnvironment_setActive_void_ev_bool(this.NativeObject, Convert.ToByte(active));
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CLabelEnvironment_getPixelGrid_void(IntPtr pNativeObject);

					/// <summary>
					/// 获取像素的格子
					/// </summary>
					/// <param name=""></param>
					/// <returns> </returns>
					public IntPtr GetPixelGrid()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CLabelEnvironment_getPixelGrid_void(this.NativeObject);
						
						return __ptr;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_d.so");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp_d.so");

						#else 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay.so");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp.so");

						#else 
							private static bool bLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadLabelEnvironment = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CLabelEnvironment", new LabelEnvironmentClassFactory());

					public LabelEnvironment(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static LabelEnvironment FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LabelEnvironment obj = baseObj as  LabelEnvironment;
						if (object.Equals(obj, null))
						{
							obj = new LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLabelEnvironment");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LabelEnvironmentClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LabelEnvironment emptyInstance = new LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class SpatialDisplay : EarthView.World.Spatial.Display.Ispatialdisplay
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					public SpatialDisplay() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CSpatialDisplayProxy", null);
						if (!"EarthView.World.Spatial.Display.SpatialDisplay".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_NoVirtual(IntPtr pNativeObject, IntPtr ref_device);

					/// <summary>
					///  固定设备
					/// </summary>
					/// <param name="device"> 绘图设备</param>
					/// <returns> </returns>
					public new void FixDevice_NoVirtual(EarthView.World.Display.Ipaintdevice ref_device)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_NoVirtual(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(IntPtr pNativeObject, IntPtr ref_device);

					/// <summary>
					///  固定设备
					/// </summary>
					/// <param name="device"> 绘图设备</param>
					/// <returns> </returns>
					public override void FixDevice(EarthView.World.Display.Ipaintdevice ref_device)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(this.NativeObject, object.Equals(ref_device, null) ? IntPtr.Zero : ref_device.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					public new EarthView.World.Display.Ipaintdevice GetDevice_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(IntPtr pNativeObject);

					/// <summary>
					/// 获取设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns>
					public override EarthView.World.Display.Ipaintdevice GetDevice()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 卸下设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns> 
					public new void UnfixDevice_NoVirtual()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(IntPtr pNativeObject);

					/// <summary>
					/// 卸下设备
					/// </summary>
					/// <param name=" "></param>
					/// <returns> </returns> 
					public override void UnfixDevice()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(this.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					public new int GetDisplayResolution_NoVirtual()
					{
						int ret=EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_NoVirtual(this.NativeObject);
						
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
					private static extern int EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(IntPtr pNativeObject);

					/// <summary>
					/// 获取显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					public override int GetDisplayResolution()
					{
						int ret=EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_NoVirtual(IntPtr pNativeObject, int resolution);

					/// <summary>
					/// 设置显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					public new void SetDisplayResolution_NoVirtual(int resolution)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_NoVirtual(this.NativeObject, resolution);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(IntPtr pNativeObject, int resolution);

					/// <summary>
					/// 设置显示分辨率
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回显示分辨率</returns>
					public override void SetDisplayResolution(int resolution)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(this.NativeObject, resolution);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  获取空间引用
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 空间引用对象</returns> 
					public new EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(IntPtr pNativeObject);

					/// <summary>
					///  获取空间引用
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 空间引用对象</returns> 
					public override EarthView.World.Spatial.Geometry.Ispatialreference GetSpatialReference()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Geometry.Ispatialreference csObj = new EarthView.World.Spatial.Geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialReference");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Geometry.Ispatialreference;
							csObj.BindNativeObject(__ptr, "ISpatialReference");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_NoVirtual(IntPtr pNativeObject, IntPtr ref_sr);

					/// <summary>
					///  设置空间坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns> </returns> 
					public new void SetSpatialReference_NoVirtual(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_NoVirtual(this.NativeObject, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(IntPtr pNativeObject, IntPtr ref_sr);

					/// <summary>
					///  设置空间坐标系统
					/// </summary>
					/// <param name="sr">坐标系统</param>
					/// <returns> </returns> 
					public override void SetSpatialReference(EarthView.World.Spatial.Geometry.Ispatialreference ref_sr)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(this.NativeObject, object.Equals(ref_sr, null) ? IntPtr.Zero : ref_sr.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  获取空间转换器
					/// </summary>
					/// <param name="sr"></param>
					/// <returns>空间转换器对象 </returns> 
					public new EarthView.World.Spatial.Display.Ispatialtransformer GetSpatialTransformer_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Ispatialtransformer csObj = new EarthView.World.Spatial.Display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialTransformer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialtransformer;
							csObj.BindNativeObject(__ptr, "ISpatialTransformer");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(IntPtr pNativeObject);

					/// <summary>
					///  获取空间转换器
					/// </summary>
					/// <param name="sr"></param>
					/// <returns>空间转换器对象 </returns> 
					public override EarthView.World.Spatial.Display.Ispatialtransformer GetSpatialTransformer()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Ispatialtransformer csObj = new EarthView.World.Spatial.Display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ISpatialTransformer");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialtransformer;
							csObj.BindNativeObject(__ptr, "ISpatialTransformer");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setSpatialTransformer_CallBack_void_ISpatialTransformer(IntPtr ref_trans);

					protected setSpatialTransformer_CallBack_void_ISpatialTransformer m_setSpatialTransformer_CallBack_void_ISpatialTransformer;

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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_NoVirtual(IntPtr pNativeObject, IntPtr ref_trans);

					/// <summary>
					///  设置空间转换器
					/// </summary>
					/// <param name="trans">空间转换器对象</param>
					/// <returns> </returns> 
					public virtual void SetSpatialTransformer_NoVirtual(EarthView.World.Spatial.Display.Ispatialtransformer ref_trans)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_NoVirtual(this.NativeObject, object.Equals(ref_trans, null) ? IntPtr.Zero : ref_trans.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Function(IntPtr ref_trans)
					{
						EarthView.World.Spatial.Display.Ispatialtransformer csobj_ref_trans = new EarthView.World.Spatial.Display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_trans.BindNativeObject(ref_trans,"ISpatialTransformer");
						csobj_ref_trans.Delegate = true;
						IClassFactory csobj_ref_transClassFactory = GlobalClassFactoryMap.Get(csobj_ref_trans.GetCppInstanceTypeName());
						if (csobj_ref_transClassFactory != null)
						{
							csobj_ref_trans.Delegate = true;
							csobj_ref_trans = csobj_ref_transClassFactory.Create() as EarthView.World.Spatial.Display.Ispatialtransformer;
							csobj_ref_trans.BindNativeObject(ref_trans, "ISpatialTransformer");
							csobj_ref_trans.Delegate = true;
						}
						
						SetSpatialTransformer(csobj_ref_trans);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(IntPtr pNativeObject, IntPtr ref_trans);

					/// <summary>
					///  设置空间转换器
					/// </summary>
					/// <param name="trans">空间转换器对象</param>
					/// <returns> </returns> 
					public virtual void SetSpatialTransformer(EarthView.World.Spatial.Display.Ispatialtransformer ref_trans)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(this.NativeObject, object.Equals(ref_trans, null) ? IntPtr.Zero : ref_trans.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 是否取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public new bool IsCancelled_NoVirtual()
					{
						byte ret=EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 是否取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public override bool IsCancelled()
					{
						byte ret=EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_start_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  开始
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public new void Start_NoVirtual()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_start_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_start_void(IntPtr pNativeObject);

					/// <summary>
					///  开始
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public override void Start()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_start_void(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public new void Cancel_NoVirtual()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_NoVirtual(this.NativeObject);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(IntPtr pNativeObject);

					/// <summary>
					///  取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public override void Cancel()
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  获取选择设备
					/// </summary>
					/// <param name="trans"></param>
					/// <returns>选择的设备 </returns> 
					public new EarthView.World.Display.Idisplayoptions GetDisplayOptions_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_NoVirtual(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(IntPtr pNativeObject);

					/// <summary>
					///  获取选择设备
					/// </summary>
					/// <param name="trans"></param>
					/// <returns>选择的设备 </returns> 
					public override EarthView.World.Display.Idisplayoptions GetDisplayOptions()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(this.NativeObject);
						
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
					protected delegate IntPtr getLabelEnvironment_CallBack_CLabelEnvironment();

					protected getLabelEnvironment_CallBack_CLabelEnvironment m_getLabelEnvironment_CallBack_CLabelEnvironment;

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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  获取标注环境
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public virtual EarthView.World.Spatial.Display.LabelEnvironment GetLabelEnvironment_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.LabelEnvironment csObj = new EarthView.World.Spatial.Display.LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLabelEnvironment");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.LabelEnvironment;
							csObj.BindNativeObject(__ptr, "CLabelEnvironment");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Function()
					{
						EarthView.World.Spatial.Display.LabelEnvironment csret=GetLabelEnvironment();
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(IntPtr pNativeObject);

					/// <summary>
					///  获取标注环境
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					public virtual EarthView.World.Spatial.Display.LabelEnvironment GetLabelEnvironment()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.LabelEnvironment csObj = new EarthView.World.Spatial.Display.LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CLabelEnvironment");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.LabelEnvironment;
							csObj.BindNativeObject(__ptr, "CLabelEnvironment");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getLabelEngine_CallBack_ILabelEngine();

					protected getLabelEngine_CallBack_ILabelEngine m_getLabelEngine_CallBack_ILabelEngine;

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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					///  获取标注引擎
					/// </summary>
					public virtual EarthView.World.Spatial.Display.Ilabelengine GetLabelEngine_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Ilabelengine csObj = new EarthView.World.Spatial.Display.Ilabelengine(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILabelEngine");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Ilabelengine;
							csObj.BindNativeObject(__ptr, "ILabelEngine");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Function()
					{
						EarthView.World.Spatial.Display.Ilabelengine csret=GetLabelEngine();
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(IntPtr pNativeObject);

					/// <summary>
					///  获取标注引擎
					/// </summary>
					public virtual EarthView.World.Spatial.Display.Ilabelengine GetLabelEngine()
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Ilabelengine csObj = new EarthView.World.Spatial.Display.Ilabelengine(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "ILabelEngine");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Ilabelengine;
							csObj.BindNativeObject(__ptr, "ILabelEngine");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setLabelEngine_CallBack_void_ILabelEngine(IntPtr ref_engine);

					protected setLabelEngine_CallBack_void_ILabelEngine m_setLabelEngine_CallBack_void_ILabelEngine;

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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_NoVirtual(IntPtr pNativeObject, IntPtr ref_engine);

					/// <summary>
					///  获取标注引擎
					/// </summary>
					public virtual void SetLabelEngine_NoVirtual(EarthView.World.Spatial.Display.Ilabelengine ref_engine)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_NoVirtual(this.NativeObject, object.Equals(ref_engine, null) ? IntPtr.Zero : ref_engine.NativeObject);
						
					}

					protected  void EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Function(IntPtr ref_engine)
					{
						EarthView.World.Spatial.Display.Ilabelengine csobj_ref_engine = new EarthView.World.Spatial.Display.Ilabelengine(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_ref_engine.BindNativeObject(ref_engine,"ILabelEngine");
						csobj_ref_engine.Delegate = true;
						IClassFactory csobj_ref_engineClassFactory = GlobalClassFactoryMap.Get(csobj_ref_engine.GetCppInstanceTypeName());
						if (csobj_ref_engineClassFactory != null)
						{
							csobj_ref_engine.Delegate = true;
							csobj_ref_engine = csobj_ref_engineClassFactory.Create() as EarthView.World.Spatial.Display.Ilabelengine;
							csobj_ref_engine.BindNativeObject(ref_engine, "ILabelEngine");
							csobj_ref_engine.Delegate = true;
						}
						
						SetLabelEngine(csobj_ref_engine);
						
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
					private static extern void EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(IntPtr pNativeObject, IntPtr ref_engine);

					/// <summary>
					///  获取标注引擎
					/// </summary>
					public virtual void SetLabelEngine(EarthView.World.Spatial.Display.Ilabelengine ref_engine)
					{
						EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(this.NativeObject, object.Equals(ref_engine, null) ? IntPtr.Zero : ref_engine.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_d.so");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp_d.so");

						#else 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_d.dll");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#elif Linux 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay.so");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp.so");

						#else 
							private static bool bLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay.dll");
							private static bool csbLoadSpatialDisplay = LoadDll.Load("EV_SpatialDisplay_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialDisplay", new SpatialDisplayClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialDisplayProxy", new SpatialDisplayClassFactory());

					public SpatialDisplay(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(IntPtr pObject, setSpatialTransformer_CallBack_void_ISpatialTransformer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(IntPtr pObject, getLabelEnvironment_CallBack_CLabelEnvironment pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(IntPtr pObject, getLabelEngine_CallBack_ILabelEngine pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(IntPtr pObject, setLabelEngine_CallBack_void_ILabelEngine pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(IntPtr pObject, getSpatialReference_CallBack_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(IntPtr pObject, setSpatialReference_CallBack_void_ISpatialReference pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(IntPtr pObject, getSpatialTransformer_CallBack_ISpatialTransformer pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(IntPtr pObject, isCancelled_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_start_void(IntPtr pObject, start_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(IntPtr pObject, cancel_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(IntPtr pObject, fixDevice_CallBack_void_IPaintDevice pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(IntPtr pObject, getDevice_CallBack_IPaintDevice pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(IntPtr pObject, unfixDevice_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(IntPtr pObject, getDisplayOptions_CallBack_IDisplayOptions pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(IntPtr pObject, getDisplayResolution_CallBack_ev_int32 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(IntPtr pObject, setDisplayResolution_CallBack_void_ev_int32 pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_setSpatialTransformer_CallBack_void_ISpatialTransformer = EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Function;
							GC.KeepAlive(m_setSpatialTransformer_CallBack_void_ISpatialTransformer);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(this.NativeObject, m_setSpatialTransformer_CallBack_void_ISpatialTransformer);
							m_getLabelEnvironment_CallBack_CLabelEnvironment = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Function;
							GC.KeepAlive(m_getLabelEnvironment_CallBack_CLabelEnvironment);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(this.NativeObject, m_getLabelEnvironment_CallBack_CLabelEnvironment);
							m_getLabelEngine_CallBack_ILabelEngine = EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Function;
							GC.KeepAlive(m_getLabelEngine_CallBack_ILabelEngine);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(this.NativeObject, m_getLabelEngine_CallBack_ILabelEngine);
							m_setLabelEngine_CallBack_void_ILabelEngine = EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Function;
							GC.KeepAlive(m_setLabelEngine_CallBack_void_ILabelEngine);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(this.NativeObject, m_setLabelEngine_CallBack_void_ILabelEngine);
							m_getSpatialReference_CallBack_ISpatialReference = EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Function;
							GC.KeepAlive(m_getSpatialReference_CallBack_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(this.NativeObject, m_getSpatialReference_CallBack_ISpatialReference);
							m_setSpatialReference_CallBack_void_ISpatialReference = EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Function;
							GC.KeepAlive(m_setSpatialReference_CallBack_void_ISpatialReference);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(this.NativeObject, m_setSpatialReference_CallBack_void_ISpatialReference);
							m_getSpatialTransformer_CallBack_ISpatialTransformer = EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Function;
							GC.KeepAlive(m_getSpatialTransformer_CallBack_ISpatialTransformer);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(this.NativeObject, m_getSpatialTransformer_CallBack_ISpatialTransformer);
							m_isCancelled_CallBack_ev_bool = EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Function;
							GC.KeepAlive(m_isCancelled_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(this.NativeObject, m_isCancelled_CallBack_ev_bool);
							m_start_CallBack_void = EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Function;
							GC.KeepAlive(m_start_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_start_void(this.NativeObject, m_start_CallBack_void);
							m_cancel_CallBack_void = EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Function;
							GC.KeepAlive(m_cancel_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(this.NativeObject, m_cancel_CallBack_void);
							m_fixDevice_CallBack_void_IPaintDevice = EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Function;
							GC.KeepAlive(m_fixDevice_CallBack_void_IPaintDevice);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(this.NativeObject, m_fixDevice_CallBack_void_IPaintDevice);
							m_getDevice_CallBack_IPaintDevice = EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Function;
							GC.KeepAlive(m_getDevice_CallBack_IPaintDevice);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(this.NativeObject, m_getDevice_CallBack_IPaintDevice);
							m_unfixDevice_CallBack_void = EarthView_World_Display_IDisplay2D_unfixDevice_void_Function;
							GC.KeepAlive(m_unfixDevice_CallBack_void);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(this.NativeObject, m_unfixDevice_CallBack_void);
							m_getDisplayOptions_CallBack_IDisplayOptions = EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Function;
							GC.KeepAlive(m_getDisplayOptions_CallBack_IDisplayOptions);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(this.NativeObject, m_getDisplayOptions_CallBack_IDisplayOptions);
							m_getDisplayResolution_CallBack_ev_int32 = EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Function;
							GC.KeepAlive(m_getDisplayResolution_CallBack_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(this.NativeObject, m_getDisplayResolution_CallBack_ev_int32);
							m_setDisplayResolution_CallBack_void_ev_int32 = EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Function;
							GC.KeepAlive(m_setDisplayResolution_CallBack_void_ev_int32);
							EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(this.NativeObject, m_setDisplayResolution_CallBack_void_ev_int32);
						}
					}
					public static SpatialDisplay FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SpatialDisplay obj = baseObj as  SpatialDisplay;
						if (object.Equals(obj, null))
						{
							obj = new SpatialDisplay(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CSpatialDisplay");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SpatialDisplayClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SpatialDisplay emptyInstance = new SpatialDisplay(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
