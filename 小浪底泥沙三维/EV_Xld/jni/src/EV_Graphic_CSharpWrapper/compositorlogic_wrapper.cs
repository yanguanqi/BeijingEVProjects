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
			public class CompositorLogic : EarthView.World.Core.BaseObject
			{
				public CompositorLogic() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositorLogicProxy", null);
					if (!"EarthView.World.Graphic.CompositorLogic".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void compositorInstanceCreated_CallBack_void_CCompositorInstance(IntPtr newInstance);

				protected compositorInstanceCreated_CallBack_void_CCompositorInstance m_compositorInstanceCreated_CallBack_void_CCompositorInstance;

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
				private static extern void EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_NoVirtual(IntPtr pNativeObject, IntPtr newInstance);

				public virtual void CompositorInstanceCreated_NoVirtual(EarthView.World.Graphic.CompositorInstance newInstance)
				{
					EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_NoVirtual(this.NativeObject, object.Equals(newInstance, null) ? IntPtr.Zero : newInstance.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Function(IntPtr newInstance)
				{
					EarthView.World.Graphic.CompositorInstance csobj_newInstance = new EarthView.World.Graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_newInstance.BindNativeObject(newInstance,"CCompositorInstance");
					csobj_newInstance.Delegate = true;
					IClassFactory csobj_newInstanceClassFactory = GlobalClassFactoryMap.Get(csobj_newInstance.GetCppInstanceTypeName());
					if (csobj_newInstanceClassFactory != null)
					{
						csobj_newInstance.Delegate = true;
						csobj_newInstance = csobj_newInstanceClassFactory.Create() as EarthView.World.Graphic.CompositorInstance;
						csobj_newInstance.BindNativeObject(newInstance, "CCompositorInstance");
						csobj_newInstance.Delegate = true;
					}
					
					CompositorInstanceCreated(csobj_newInstance);
					
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
				private static extern void EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(IntPtr pNativeObject, IntPtr newInstance);

				public virtual void CompositorInstanceCreated(EarthView.World.Graphic.CompositorInstance newInstance)
				{
					EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(this.NativeObject, object.Equals(newInstance, null) ? IntPtr.Zero : newInstance.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void compositorInstanceDestroyed_CallBack_void_CCompositorInstance(IntPtr destroyedInstance);

				protected compositorInstanceDestroyed_CallBack_void_CCompositorInstance m_compositorInstanceDestroyed_CallBack_void_CCompositorInstance;

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
				private static extern void EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_NoVirtual(IntPtr pNativeObject, IntPtr destroyedInstance);

				public virtual void CompositorInstanceDestroyed_NoVirtual(EarthView.World.Graphic.CompositorInstance destroyedInstance)
				{
					EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_NoVirtual(this.NativeObject, object.Equals(destroyedInstance, null) ? IntPtr.Zero : destroyedInstance.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Function(IntPtr destroyedInstance)
				{
					EarthView.World.Graphic.CompositorInstance csobj_destroyedInstance = new EarthView.World.Graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_destroyedInstance.BindNativeObject(destroyedInstance,"CCompositorInstance");
					csobj_destroyedInstance.Delegate = true;
					IClassFactory csobj_destroyedInstanceClassFactory = GlobalClassFactoryMap.Get(csobj_destroyedInstance.GetCppInstanceTypeName());
					if (csobj_destroyedInstanceClassFactory != null)
					{
						csobj_destroyedInstance.Delegate = true;
						csobj_destroyedInstance = csobj_destroyedInstanceClassFactory.Create() as EarthView.World.Graphic.CompositorInstance;
						csobj_destroyedInstance.BindNativeObject(destroyedInstance, "CCompositorInstance");
						csobj_destroyedInstance.Delegate = true;
					}
					
					CompositorInstanceDestroyed(csobj_destroyedInstance);
					
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
				private static extern void EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(IntPtr pNativeObject, IntPtr destroyedInstance);

				public virtual void CompositorInstanceDestroyed(EarthView.World.Graphic.CompositorInstance destroyedInstance)
				{
					EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(this.NativeObject, object.Equals(destroyedInstance, null) ? IntPtr.Zero : destroyedInstance.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositorLogic = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositorLogic = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositorLogic", new CompositorLogicClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositorLogicProxy", new CompositorLogicClassFactory());

				public CompositorLogic(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(IntPtr pObject, compositorInstanceCreated_CallBack_void_CCompositorInstance pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(IntPtr pObject, compositorInstanceDestroyed_CallBack_void_CCompositorInstance pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_compositorInstanceCreated_CallBack_void_CCompositorInstance = EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance_Function;
						GC.KeepAlive(m_compositorInstanceCreated_CallBack_void_CCompositorInstance);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceCreated_void_CCompositorInstance(this.NativeObject, m_compositorInstanceCreated_CallBack_void_CCompositorInstance);
						m_compositorInstanceDestroyed_CallBack_void_CCompositorInstance = EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance_Function;
						GC.KeepAlive(m_compositorInstanceDestroyed_CallBack_void_CCompositorInstance);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositorLogic_compositorInstanceDestroyed_void_CCompositorInstance(this.NativeObject, m_compositorInstanceDestroyed_CallBack_void_CCompositorInstance);
					}
				}
				public static CompositorLogic FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositorLogic obj = baseObj as  CompositorLogic;
					if (object.Equals(obj, null))
					{
						obj = new CompositorLogic(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositorLogic");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositorLogicClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositorLogic emptyInstance = new CompositorLogic(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
