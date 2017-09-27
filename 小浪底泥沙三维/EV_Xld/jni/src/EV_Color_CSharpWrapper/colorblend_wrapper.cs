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
				public class ColorBlend : EarthView.World.Core.AllocatedObject
				{
					public ColorBlend() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CColorBlend",  null);
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
					private static extern void EarthView_World_Spatial_Display_CColorBlend_setBlendOperationMode_void_EVColorBlendOperation(IntPtr pNativeObject, EarthView.World.Spatial.Display.EVCOLORBLENDOPERATION mode);

					public void SetBlendOperationMode(EarthView.World.Spatial.Display.EVCOLORBLENDOPERATION mode)
					{
						EarthView_World_Spatial_Display_CColorBlend_setBlendOperationMode_void_EVColorBlendOperation(this.NativeObject, mode);
						
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
					private static extern int EarthView_World_Spatial_Display_CColorBlend_getBlendOperationMode_EVColorBlendOperation(IntPtr pNativeObject);

					public EarthView.World.Spatial.Display.EVCOLORBLENDOPERATION GetBlendOperationMode()
					{
						int ret=EarthView_World_Spatial_Display_CColorBlend_getBlendOperationMode_EVColorBlendOperation(this.NativeObject);
						
						return (EarthView.World.Spatial.Display.EVCOLORBLENDOPERATION)ret;
						
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
					private static extern IntPtr EarthView_World_Spatial_Display_CColorBlend_getBlendResult_IColor_IColor_IColor(IntPtr pNativeObject, IntPtr arg1, IntPtr arg2);

					public EarthView.World.Spatial.Display.Icolor GetBlendResult(EarthView.World.Spatial.Display.Icolor arg1, EarthView.World.Spatial.Display.Icolor arg2)
					{
						IntPtr __ptr = EarthView_World_Spatial_Display_CColorBlend_getBlendResult_IColor_IColor_IColor(this.NativeObject, object.Equals(arg1, null) ? IntPtr.Zero : arg1.NativeObject, object.Equals(arg2, null) ? IntPtr.Zero : arg2.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Display.Icolor csObj = new EarthView.World.Spatial.Display.Icolor(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IColor");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Display.Icolor;
							csObj.BindNativeObject(__ptr, "IColor");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color_d.dll");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color_d.so");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp_d.so");

						#else 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color_d.dll");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color.dll");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp.dll");

						#elif Linux 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color.so");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp.so");

						#else 
							private static bool bLoadColorBlend = LoadDll.Load("EV_Color.dll");
							private static bool csbLoadColorBlend = LoadDll.Load("EV_Color_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CColorBlend", new ColorBlendClassFactory());

					public ColorBlend(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ColorBlend FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ColorBlend obj = baseObj as  ColorBlend;
						if (object.Equals(obj, null))
						{
							obj = new ColorBlend(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CColorBlend");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ColorBlendClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ColorBlend emptyInstance = new ColorBlend(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
