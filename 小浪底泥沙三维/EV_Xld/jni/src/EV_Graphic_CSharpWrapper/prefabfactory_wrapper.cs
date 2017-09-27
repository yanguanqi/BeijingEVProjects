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
			public class PrefabFactory : EarthView.World.Core.BaseObject
			{
				public PrefabFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPrefabFactory",  null);
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
				private static extern byte EarthView_World_Graphic_CPrefabFactory_createPrefab_ev_bool_CMesh(IntPtr mesh);

				public static bool CreatePrefab(EarthView.World.Graphic.Mesh mesh)
				{
					byte ret=EarthView_World_Graphic_CPrefabFactory_createPrefab_ev_bool_CMesh(object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPrefabFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPrefabFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPrefabFactory", new PrefabFactoryClassFactory());

				public PrefabFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static PrefabFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PrefabFactory obj = baseObj as  PrefabFactory;
					if (object.Equals(obj, null))
					{
						obj = new PrefabFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPrefabFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PrefabFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PrefabFactory emptyInstance = new PrefabFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
