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
			/// <summary>
			/// 视图监听者的基类
			/// 纯虚类                
			/// </summary>
			public class Iviewlistener : EarthView.World.Core.AllocatedObject
			{
				public Iviewlistener() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("IViewListenerProxy", null);
					if (!"EarthView.World.Spatial.Iviewlistener".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void onViewChanged_CallBack_void_IViewArgs(IntPtr args);

				protected onViewChanged_CallBack_void_IViewArgs m_onViewChanged_CallBack_void_IViewArgs;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_NoVirtual(IntPtr pNativeObject, IntPtr args);

				public virtual void OnViewChanged_NoVirtual(EarthView.World.Spatial.Iviewargs args)
				{
					EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_NoVirtual(this.NativeObject, object.Equals(args, null) ? IntPtr.Zero : args.NativeObject);
					
				}

				protected  void EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Function(IntPtr args)
				{
					EarthView.World.Spatial.Iviewargs csobj_args = new EarthView.World.Spatial.Iviewargs(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_args.BindNativeObject(args,"IViewArgs");
					csobj_args.Delegate = true;
					IClassFactory csobj_argsClassFactory = GlobalClassFactoryMap.Get(csobj_args.GetCppInstanceTypeName());
					if (csobj_argsClassFactory != null)
					{
						csobj_args.Delegate = true;
						csobj_args = csobj_argsClassFactory.Create() as EarthView.World.Spatial.Iviewargs;
						csobj_args.BindNativeObject(args, "IViewArgs");
						csobj_args.Delegate = true;
					}
					
					OnViewChanged(csobj_args);
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(IntPtr pNativeObject, IntPtr args);

				public virtual void OnViewChanged(EarthView.World.Spatial.Iviewargs args)
				{
					EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(this.NativeObject, object.Equals(args, null) ? IntPtr.Zero : args.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_d.so");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp_d.so");

					#else 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_d.dll");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#elif Linux 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI.so");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp.so");

					#else 
						private static bool bLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI.dll");
						private static bool csbLoadIviewlistener = LoadDll.Load("EV_Spatial_GUI_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewListener", new IviewlistenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewListenerProxy", new IviewlistenerClassFactory());

				public Iviewlistener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Spatial_GUI_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(IntPtr pObject, onViewChanged_CallBack_void_IViewArgs pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_onViewChanged_CallBack_void_IViewArgs = EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs_Function;
						GC.KeepAlive(m_onViewChanged_CallBack_void_IViewArgs);
						EV_RegisterCallback_EarthView_World_Spatial_IViewListener_onViewChanged_void_IViewArgs(this.NativeObject, m_onViewChanged_CallBack_void_IViewArgs);
					}
				}
				public static Iviewlistener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Iviewlistener obj = baseObj as  Iviewlistener;
					if (object.Equals(obj, null))
					{
						obj = new Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "IViewListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class IviewlistenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Iviewlistener emptyInstance = new Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
