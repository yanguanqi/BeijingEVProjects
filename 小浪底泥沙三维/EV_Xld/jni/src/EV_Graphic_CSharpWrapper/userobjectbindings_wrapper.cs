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
			public class UserObjectBindings : EarthView.World.Core.AllocatedObject
			{
				public UserObjectBindings() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CUserObjectBindings",  null);
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
				private static extern void EarthView_World_Graphic_CUserObjectBindings_clear_void(IntPtr pNativeObject);

				public void Clear()
				{
					EarthView_World_Graphic_CUserObjectBindings_clear_void(this.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadUserObjectBindings = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadUserObjectBindings = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CUserObjectBindings", new UserObjectBindingsClassFactory());

				public UserObjectBindings(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static UserObjectBindings FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					UserObjectBindings obj = baseObj as  UserObjectBindings;
					if (object.Equals(obj, null))
					{
						obj = new UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CUserObjectBindings");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class UserObjectBindingsClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					UserObjectBindings emptyInstance = new UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
