/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			public class AllocatedObject : EarthView.World.Core.BaseObject
			{
				public AllocatedObject() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CAllocatedObject",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				#if DEBUG 
					#if Windows 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core.so");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadAllocatedObject = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadAllocatedObject = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CAllocatedObject", new AllocatedObjectClassFactory());

				public AllocatedObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static AllocatedObject FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					AllocatedObject obj = baseObj as  AllocatedObject;
					if (object.Equals(obj, null))
					{
						obj = new AllocatedObject(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CAllocatedObject");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class AllocatedObjectClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					AllocatedObject emptyInstance = new AllocatedObject(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
