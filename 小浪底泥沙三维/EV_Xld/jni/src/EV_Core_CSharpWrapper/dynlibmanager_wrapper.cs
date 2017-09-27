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
			/// <summary>
			/// 动态加载库管理类
			/// 用于管理动态加载库，追踪加载动态库的打开
			/// </summary>
			public class DynLibManager : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认的构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public DynLibManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDynLibManager",  null);
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CDynLibManager_getSingleton_CDynLibManager();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Core.DynLibManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Core_CDynLibManager_getSingleton_CDynLibManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.DynLibManager csObj = new EarthView.World.Core.DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynLibManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.DynLibManager;
						csObj.BindNativeObject(__ptr, "CDynLibManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CDynLibManager_getSingletonPtr_CDynLibManager();

				/// <summary>
				/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回单体类的引用</returns>
				public static EarthView.World.Core.DynLibManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Core_CDynLibManager_getSingletonPtr_CDynLibManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.DynLibManager csObj = new EarthView.World.Core.DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynLibManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.DynLibManager;
						csObj.BindNativeObject(__ptr, "CDynLibManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Core_CDynLibManager_load_CDynLib_EVString(IntPtr pNativeObject, string filename);

				/// <summary>
				/// 加载库
				/// </summary>
				/// <param name="filename">库的名字</param>
				/// <returns>返回指向库的指针</returns>
				public EarthView.World.Core.DynLib Load(string filename)
				{
					IntPtr __ptr = EarthView_World_Core_CDynLibManager_load_CDynLib_EVString(this.NativeObject, filename);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.DynLib csObj = new EarthView.World.Core.DynLib(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynLib");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.DynLib;
						csObj.BindNativeObject(__ptr, "CDynLib");
						csObj.Delegate = true;
					}
					return csObj;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Core_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Core_CDynLibManager_unload_void_CDynLib(IntPtr pNativeObject, IntPtr lib);

				/// <summary>
				/// 卸载库
				/// </summary>
				/// <param name="lib">指向库的指针</param>
				/// <returns></returns>
				public void Unload(EarthView.World.Core.DynLib lib)
				{
					EarthView_World_Core_CDynLibManager_unload_void_CDynLib(this.NativeObject, object.Equals(lib, null) ? IntPtr.Zero : lib.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core_d.so");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp_d.so");

					#else 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core_d.dll");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core.so");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp.so");

					#else 
						private static bool bLoadDynLibManager = LoadDll.Load("EV_Core.dll");
						private static bool csbLoadDynLibManager = LoadDll.Load("EV_Core_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Core::CDynLibManager", new DynLibManagerClassFactory());

				public DynLibManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static DynLibManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynLibManager obj = baseObj as  DynLibManager;
					if (object.Equals(obj, null))
					{
						obj = new DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynLibManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynLibManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynLibManager emptyInstance = new DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
