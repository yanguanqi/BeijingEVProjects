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
		namespace Graphic
		{
			public class FltImageConvert : EarthView.World.Core.AllocatedObject
			{
				public FltImageConvert() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CFltImageConvert",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CFltImageConvert_convertImage_void_EVString_CImage(IntPtr pNativeObject, string file, IntPtr img);

				public void ConvertImage(string file, ref EarthView.World.Graphic.Image img)
				{
					EarthView_World_Graphic_CFltImageConvert_convertImage_void_EVString_CImage(this.NativeObject, file, object.Equals(img, null) ? IntPtr.Zero : img.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadFltImageConvert = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadFltImageConvert = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CFltImageConvert", new FltImageConvertClassFactory());

				public FltImageConvert(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static FltImageConvert FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					FltImageConvert obj = baseObj as  FltImageConvert;
					if (object.Equals(obj, null))
					{
						obj = new FltImageConvert(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CFltImageConvert");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class FltImageConvertClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					FltImageConvert emptyInstance = new FltImageConvert(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
