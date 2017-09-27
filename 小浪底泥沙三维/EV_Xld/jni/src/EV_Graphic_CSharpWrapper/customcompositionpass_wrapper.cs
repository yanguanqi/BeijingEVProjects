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
			public class CustomCompositionPass : EarthView.World.Core.AllocatedObject
			{
				public CustomCompositionPass() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCustomCompositionPassProxy", null);
					if (!"EarthView.World.Graphic.CustomCompositionPass".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass(IntPtr instance, IntPtr pass);

				protected createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass m_createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass;

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
				private static extern IntPtr EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_NoVirtual(IntPtr pNativeObject, IntPtr instance, IntPtr pass);

				public virtual EarthView.World.Graphic.CompositorInstance.RenderSystemOperation CreateOperation_NoVirtual(EarthView.World.Graphic.CompositorInstance instance, EarthView.World.Graphic.CompositionPass pass)
				{
					IntPtr __ptr = EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_NoVirtual(this.NativeObject, object.Equals(instance, null) ? IntPtr.Zero : instance.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.CompositorInstance.RenderSystemOperation csObj = new EarthView.World.Graphic.CompositorInstance.RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderSystemOperation");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.CompositorInstance.RenderSystemOperation;
						csObj.BindNativeObject(__ptr, "CRenderSystemOperation");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Function(IntPtr instance, IntPtr pass)
				{
					EarthView.World.Graphic.CompositorInstance csobj_instance = new EarthView.World.Graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_instance.BindNativeObject(instance,"CCompositorInstance");
					csobj_instance.Delegate = true;
					IClassFactory csobj_instanceClassFactory = GlobalClassFactoryMap.Get(csobj_instance.GetCppInstanceTypeName());
					if (csobj_instanceClassFactory != null)
					{
						csobj_instance.Delegate = true;
						csobj_instance = csobj_instanceClassFactory.Create() as EarthView.World.Graphic.CompositorInstance;
						csobj_instance.BindNativeObject(instance, "CCompositorInstance");
						csobj_instance.Delegate = true;
					}
					EarthView.World.Graphic.CompositionPass csobj_pass = new EarthView.World.Graphic.CompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pass.BindNativeObject(pass,"CCompositionPass");
					csobj_pass.Delegate = true;
					IClassFactory csobj_passClassFactory = GlobalClassFactoryMap.Get(csobj_pass.GetCppInstanceTypeName());
					if (csobj_passClassFactory != null)
					{
						csobj_pass.Delegate = true;
						csobj_pass = csobj_passClassFactory.Create() as EarthView.World.Graphic.CompositionPass;
						csobj_pass.BindNativeObject(pass, "CCompositionPass");
						csobj_pass.Delegate = true;
					}
					
					EarthView.World.Graphic.CompositorInstance.RenderSystemOperation csret=CreateOperation(csobj_instance, csobj_pass);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(IntPtr pNativeObject, IntPtr instance, IntPtr pass);

				public virtual EarthView.World.Graphic.CompositorInstance.RenderSystemOperation CreateOperation(EarthView.World.Graphic.CompositorInstance instance, EarthView.World.Graphic.CompositionPass pass)
				{
					IntPtr __ptr = EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(this.NativeObject, object.Equals(instance, null) ? IntPtr.Zero : instance.NativeObject, object.Equals(pass, null) ? IntPtr.Zero : pass.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.CompositorInstance.RenderSystemOperation csObj = new EarthView.World.Graphic.CompositorInstance.RenderSystemOperation(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CRenderSystemOperation");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.CompositorInstance.RenderSystemOperation;
						csObj.BindNativeObject(__ptr, "CRenderSystemOperation");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCustomCompositionPass = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCustomCompositionPass = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCustomCompositionPass", new CustomCompositionPassClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCustomCompositionPassProxy", new CustomCompositionPassClassFactory());

				public CustomCompositionPass(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(IntPtr pObject, createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass = EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass_Function;
						GC.KeepAlive(m_createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass);
						EV_RegisterCallback_EarthView_World_Graphic_CCustomCompositionPass_createOperation_CRenderSystemOperation_CCompositorInstance_CCompositionPass(this.NativeObject, m_createOperation_CallBack_CRenderSystemOperation_CCompositorInstance_CCompositionPass);
					}
				}
				public static CustomCompositionPass FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CustomCompositionPass obj = baseObj as  CustomCompositionPass;
					if (object.Equals(obj, null))
					{
						obj = new CustomCompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCustomCompositionPass");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CustomCompositionPassClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CustomCompositionPass emptyInstance = new CustomCompositionPass(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
