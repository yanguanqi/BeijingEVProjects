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
			public class HighLevelGpuProgramFactory : EarthView.World.Core.AllocatedObject
			{
				public HighLevelGpuProgramFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHighLevelGpuProgramFactoryProxy", null);
					if (!"EarthView.World.Graphic.HighLevelGpuProgramFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getLanguage_CallBack_EVString();

				protected getLanguage_CallBack_EVString m_getLanguage_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetLanguage_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Function()
				{
					string csret=GetLanguage();
					
					return csret;
					
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(IntPtr pNativeObject);

				public virtual string GetLanguage()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(IntPtr ref_creator, ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr ref_loader);

				protected create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader m_create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader;

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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, IntPtr ref_creator, string name, ulong handle, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.HighLevelGpuProgram Create_NoVirtual(EarthView.World.Graphic.ResourceManager ref_creator, string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, object.Equals(ref_creator, null) ? IntPtr.Zero : ref_creator.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HighLevelGpuProgram csObj = new EarthView.World.Graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHighLevelGpuProgram");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgram;
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgram");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Function(IntPtr ref_creator, ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr ref_loader)
				{
					EarthView.World.Graphic.ResourceManager csobj_ref_creator = new EarthView.World.Graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_creator.BindNativeObject(ref_creator,"CResourceManager");
					csobj_ref_creator.Delegate = true;
					IClassFactory csobj_ref_creatorClassFactory = GlobalClassFactoryMap.Get(csobj_ref_creator.GetCppInstanceTypeName());
					if (csobj_ref_creatorClassFactory != null)
					{
						csobj_ref_creator.Delegate = true;
						csobj_ref_creator = csobj_ref_creatorClassFactory.Create() as EarthView.World.Graphic.ResourceManager;
						csobj_ref_creator.BindNativeObject(ref_creator, "CResourceManager");
						csobj_ref_creator.Delegate = true;
					}
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.HighLevelGpuProgram csret=Create(csobj_ref_creator, strname,handle, strgroup,isManual, csobj_ref_loader);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, IntPtr ref_creator, string name, ulong handle, string group, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.HighLevelGpuProgram Create(EarthView.World.Graphic.ResourceManager ref_creator, string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(this.NativeObject, object.Equals(ref_creator, null) ? IntPtr.Zero : ref_creator.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HighLevelGpuProgram csObj = new EarthView.World.Graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHighLevelGpuProgram");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgram;
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgram");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroy_CallBack_void_CHighLevelGpuProgram(IntPtr prog);

				protected destroy_CallBack_void_CHighLevelGpuProgram m_destroy_CallBack_void_CHighLevelGpuProgram;

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
				private static extern void EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_NoVirtual(IntPtr pNativeObject, IntPtr prog);

				public virtual void Destroy_NoVirtual(EarthView.World.Graphic.HighLevelGpuProgram prog)
				{
					EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_NoVirtual(this.NativeObject, object.Equals(prog, null) ? IntPtr.Zero : prog.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Function(IntPtr prog)
				{
					EarthView.World.Graphic.HighLevelGpuProgram csobj_prog = new EarthView.World.Graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_prog.BindNativeObject(prog,"CHighLevelGpuProgram");
					csobj_prog.Delegate = true;
					IClassFactory csobj_progClassFactory = GlobalClassFactoryMap.Get(csobj_prog.GetCppInstanceTypeName());
					if (csobj_progClassFactory != null)
					{
						csobj_prog.Delegate = true;
						csobj_prog = csobj_progClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgram;
						csobj_prog.BindNativeObject(prog, "CHighLevelGpuProgram");
						csobj_prog.Delegate = true;
					}
					
					Destroy(csobj_prog);
					
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
				private static extern void EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(IntPtr pNativeObject, IntPtr prog);

				public virtual void Destroy(EarthView.World.Graphic.HighLevelGpuProgram prog)
				{
					EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(this.NativeObject, object.Equals(prog, null) ? IntPtr.Zero : prog.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHighLevelGpuProgramFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramFactory", new HighLevelGpuProgramFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramFactoryProxy", new HighLevelGpuProgramFactoryClassFactory());

				public HighLevelGpuProgramFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(IntPtr pObject, getLanguage_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(IntPtr pObject, destroy_CallBack_void_CHighLevelGpuProgram pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getLanguage_CallBack_EVString = EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Function;
						GC.KeepAlive(m_getLanguage_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(this.NativeObject, m_getLanguage_CallBack_EVString);
						m_create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader);
						m_destroy_CallBack_void_CHighLevelGpuProgram = EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Function;
						GC.KeepAlive(m_destroy_CallBack_void_CHighLevelGpuProgram);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(this.NativeObject, m_destroy_CallBack_void_CHighLevelGpuProgram);
					}
				}
				public static HighLevelGpuProgramFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HighLevelGpuProgramFactory obj = baseObj as  HighLevelGpuProgramFactory;
					if (object.Equals(obj, null))
					{
						obj = new HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHighLevelGpuProgramFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HighLevelGpuProgramFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HighLevelGpuProgramFactory emptyInstance = new HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class HighLevelGpuProgramManager : EarthView.World.Graphic.ResourceManager
			{

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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingleton_CHighLevelGpuProgramManager();

				public static EarthView.World.Graphic.HighLevelGpuProgramManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingleton_CHighLevelGpuProgramManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HighLevelGpuProgramManager csObj = new EarthView.World.Graphic.HighLevelGpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramManager;
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramManager");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingletonPtr_CHighLevelGpuProgramManager();

				public static EarthView.World.Graphic.HighLevelGpuProgramManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingletonPtr_CHighLevelGpuProgramManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HighLevelGpuProgramManager csObj = new EarthView.World.Graphic.HighLevelGpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramManager;
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public class GpuProgramFactoryMap : EarthView.World.Core.BaseObject
				{

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
					private static extern byte EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_push_ev_bool_EVString_CHighLevelGpuProgramFactory(IntPtr pNativeObject, string key, ref IntPtr ref_val);

					public bool Push(string key, EarthView.World.Graphic.HighLevelGpuProgramFactory ref_val)
					{
						byte ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_push_ev_bool_EVString_CHighLevelGpuProgramFactory(this.NativeObject, key, ref ref_val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					public bool Exist(string key)
					{
						byte ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_exist_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_get_CHighLevelGpuProgramFactory_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Graphic.HighLevelGpuProgramFactory Get(string key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_get_CHighLevelGpuProgramFactory_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramFactory csObj = new EarthView.World.Graphic.HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramFactory;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_erase_void_EVString(IntPtr pNativeObject, string key);

					public void Erase(string key)
					{
						EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_size_ev_size_t(this.NativeObject);
						
						return ret;
						
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
					private static extern void EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					public GpuProgramFactoryMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("GpuProgramFactoryMap",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					#if DEBUG 
						#if Windows 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuProgramFactoryMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap", new GpuProgramFactoryMapClassFactory());

					public GpuProgramFactoryMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GpuProgramFactoryMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GpuProgramFactoryMap obj = baseObj as  GpuProgramFactoryMap;
						if (object.Equals(obj, null))
						{
							obj = new GpuProgramFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "GpuProgramFactoryMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GpuProgramFactoryMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GpuProgramFactoryMap emptyInstance = new GpuProgramFactoryMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class HighLevelGpuProgramFactoryPair : EarthView.World.Core.BaseObject
				{
					public HighLevelGpuProgramFactoryPair() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CHighLevelGpuProgramFactoryPair",  null);
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
					private static extern ushort Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first( IntPtr pObject, ushort value );

					public 					ushort First
					{
						get
						{
							ushort ret=Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first(this.NativeObject,value);
						}
					}

					private EarthView.World.Graphic.HighLevelGpuProgramFactory secondField;
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
					private static extern IntPtr Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Graphic.HighLevelGpuProgramFactory Second
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(secondField, null)){
								secondField.NativeObject = __ptr;
								return secondField;
							}
							EarthView.World.Graphic.HighLevelGpuProgramFactory csObj = new EarthView.World.Graphic.HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramFactory;
								csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							secondField = value;
							Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair", new HighLevelGpuProgramFactoryPairClassFactory());

					public HighLevelGpuProgramFactoryPair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static HighLevelGpuProgramFactoryPair FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						HighLevelGpuProgramFactoryPair obj = baseObj as  HighLevelGpuProgramFactoryPair;
						if (object.Equals(obj, null))
						{
							obj = new HighLevelGpuProgramFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CHighLevelGpuProgramFactoryPair");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class HighLevelGpuProgramFactoryPairClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						HighLevelGpuProgramFactoryPair emptyInstance = new HighLevelGpuProgramFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class HighLevelGpuProgramFactoryIterator : EarthView.World.Core.BaseObject
				{
					public HighLevelGpuProgramFactoryIterator(ref EarthView.World.Graphic.HighLevelGpuProgramManager.GpuProgramFactoryMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("CHighLevelGpuProgramFactoryIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public HighLevelGpuProgramFactoryIterator(EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("CHighLevelGpuProgramFactoryIterator", list);
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
					private static extern byte EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_hasMoreElements_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_moveNext_void(IntPtr pNativeObject);

					public void MoveNext()
					{
						EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_moveNext_void(this.NativeObject);
						
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
					private static extern ushort EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextKey_ev_uint16(this.NativeObject);
						
						return ret;
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValue_CHighLevelGpuProgramFactory(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramFactory NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValue_CHighLevelGpuProgramFactory(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramFactory csObj = new EarthView.World.Graphic.HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramFactory;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr[] EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValuePtr_CHighLevelGpuProgramFactory(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramFactory[] NextValuePtr()
					{
						IntPtr[] ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValuePtr_CHighLevelGpuProgramFactory(this.NativeObject);
						
						EarthView.World.Graphic.HighLevelGpuProgramFactory[] csObjs=new EarthView.World.Graphic.HighLevelGpuProgramFactory[ret.Length];
						for (int i = 0; i < ret.Length; i++)
						{
						EarthView.World.Graphic.HighLevelGpuProgramFactory csObj = new EarthView.World.Graphic.HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(ret[i], "CHighLevelGpuProgramFactory");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramFactory;
							csObj.BindNativeObject(ret[i], "CHighLevelGpuProgramFactory");
						}
						csObjs[i]=csObj;
						}
						return csObjs;
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_next_CHighLevelGpuProgramFactory(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramFactory Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_next_CHighLevelGpuProgramFactory(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramFactory csObj = new EarthView.World.Graphic.HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramFactory;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactory");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getBegin_CHighLevelGpuProgramFactoryPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getBegin_CHighLevelGpuProgramFactoryPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair csObj = new EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getEnd_CHighLevelGpuProgramFactoryPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getEnd_CHighLevelGpuProgramFactoryPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair csObj = new EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getCurrent_CHighLevelGpuProgramFactoryPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getCurrent_CHighLevelGpuProgramFactoryPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair csObj = new EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramManager.HighLevelGpuProgramFactoryPair;
							csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramFactoryPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadHighLevelGpuProgramFactoryIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator", new HighLevelGpuProgramFactoryIteratorClassFactory());

					public HighLevelGpuProgramFactoryIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static HighLevelGpuProgramFactoryIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						HighLevelGpuProgramFactoryIterator obj = baseObj as  HighLevelGpuProgramFactoryIterator;
						if (object.Equals(obj, null))
						{
							obj = new HighLevelGpuProgramFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CHighLevelGpuProgramFactoryIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class HighLevelGpuProgramFactoryIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						HighLevelGpuProgramFactoryIterator emptyInstance = new HighLevelGpuProgramFactoryIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				protected new EarthView.World.Graphic.Resource CreateImpl_NoVirtual(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				protected override EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public HighLevelGpuProgramManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CHighLevelGpuProgramManagerProxy", null);
					if (!"EarthView.World.Graphic.HighLevelGpuProgramManager".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
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
				private static extern void EarthView_World_Graphic_CHighLevelGpuProgramManager_addFactory_void_CHighLevelGpuProgramFactory(IntPtr pNativeObject, IntPtr ref_factory);

				public void AddFactory(EarthView.World.Graphic.HighLevelGpuProgramFactory ref_factory)
				{
					EarthView_World_Graphic_CHighLevelGpuProgramManager_addFactory_void_CHighLevelGpuProgramFactory(this.NativeObject, object.Equals(ref_factory, null) ? IntPtr.Zero : ref_factory.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CHighLevelGpuProgramManager_removeFactory_void_CHighLevelGpuProgramFactory(IntPtr pNativeObject, IntPtr factory);

				public void RemoveFactory(EarthView.World.Graphic.HighLevelGpuProgramFactory factory)
				{
					EarthView_World_Graphic_CHighLevelGpuProgramManager_removeFactory_void_CHighLevelGpuProgramFactory(this.NativeObject, object.Equals(factory, null) ? IntPtr.Zero : factory.NativeObject);
					
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
				private static extern byte EarthView_World_Graphic_CHighLevelGpuProgramManager_isLanguageSupported_ev_bool_EVString(IntPtr pNativeObject, string lang);

				public bool IsLanguageSupported(string lang)
				{
					byte ret=EarthView_World_Graphic_CHighLevelGpuProgramManager_isLanguageSupported_ev_bool_EVString(this.NativeObject, lang);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern IntPtr EarthView_World_Graphic_CHighLevelGpuProgramManager_createProgram_CHighLevelGpuProgramPtr_EVString_EVString_EVString_GpuProgramType(IntPtr pNativeObject, string name, string groupName, string language, EarthView.World.Graphic.GPUPROGRAMTYPE gptype);

				public EarthView.World.Graphic.HighLevelGpuProgramPtr CreateProgram(string name, string groupName, string language, EarthView.World.Graphic.GPUPROGRAMTYPE gptype)
				{
					IntPtr __ptr = EarthView_World_Graphic_CHighLevelGpuProgramManager_createProgram_CHighLevelGpuProgramPtr_EVString_EVString_EVString_GpuProgramType(this.NativeObject, name, groupName, language, gptype);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.HighLevelGpuProgramPtr csObj = new EarthView.World.Graphic.HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.HighLevelGpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CHighLevelGpuProgramPtr");
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadHighLevelGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramManager", new HighLevelGpuProgramManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CHighLevelGpuProgramManagerProxy", new HighLevelGpuProgramManagerClassFactory());

				public HighLevelGpuProgramManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
					}
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual)
				{
					return base.Create_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group)
				{
					return base.Create_NoVirtual(name,group);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name)
				{
					return base.CreateUnmanaged_NoVirtual(name);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group);
				}
				public override void SetMemoryBudget(ulong bytes)
				{
					base.SetMemoryBudget_NoVirtual(bytes);
				}
				public override ulong GetMemoryBudget()
				{
					return base.GetMemoryBudget_NoVirtual();
				}
				public override ulong GetMemoryUsage()
				{
					return base.GetMemoryUsage_NoVirtual();
				}
				public override void Unload(string name)
				{
					base.Unload_NoVirtual(name);
				}
				public override void Unload(ulong handle)
				{
					base.Unload_NoVirtual(handle);
				}
				public override void UnloadAll(bool reloadableOnly)
				{
					base.UnloadAll_NoVirtual(reloadableOnly);
				}
				public override void UnloadAll()
				{
					base.UnloadAll_NoVirtual();
				}
				public override void ReloadAll(bool reloadableOnly)
				{
					base.ReloadAll_NoVirtual(reloadableOnly);
				}
				public override void ReloadAll()
				{
					base.ReloadAll_NoVirtual();
				}
				public override void UnloadUnreferencedResources(bool reloadableOnly)
				{
					base.UnloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void UnloadUnreferencedResources()
				{
					base.UnloadUnreferencedResources_NoVirtual();
				}
				public override void ReloadUnreferencedResources(bool reloadableOnly)
				{
					base.ReloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void ReloadUnreferencedResources()
				{
					base.ReloadUnreferencedResources_NoVirtual();
				}
				public override void Remove(ref EarthView.World.Graphic.ResourcePtr r)
				{
					base.Remove_NoVirtual(ref r);
				}
				public override void Remove(string name)
				{
					base.Remove_NoVirtual(name);
				}
				public override void Remove(ulong handle)
				{
					base.Remove_NoVirtual(handle);
				}
				public override void Remove(string name, string groupname)
				{
					base.Remove_NoVirtual(name,groupname);
				}
				public override void RemoveAll()
				{
					base.RemoveAll_NoVirtual();
				}
				public override void RemoveUnreferencedResources(bool reloadableOnly)
				{
					base.RemoveUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void RemoveUnreferencedResources()
				{
					base.RemoveUnreferencedResources_NoVirtual();
				}
				public override void RemoveUnreferencedResource(string name)
				{
					base.RemoveUnreferencedResource_NoVirtual(name);
				}
				public override void RemoveUnreferencedResource(string name, string groupName)
				{
					base.RemoveUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName, ushort useCount)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName,useCount);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName)
				{
					return base.GetByName_NoVirtual(name,groupName);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name)
				{
					return base.GetByName_NoVirtual(name);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByHandle(ulong handle)
				{
					return base.GetByHandle_NoVirtual(handle);
				}
				public override bool ResourceExists(string name)
				{
					return base.ResourceExists_NoVirtual(name);
				}
				public override bool ResourceExists(ulong handle)
				{
					return base.ResourceExists_NoVirtual(handle);
				}
				public override void _notifyResourceTouched(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceTouched_NoVirtual(res);
				}
				public override void _notifyResourceLoaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceLoaded_NoVirtual(res);
				}
				public override void _notifyResourceUnloaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceUnloaded_NoVirtual(res);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual)
				{
					return base.Prepare_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual)
				{
					return base.Load_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group)
				{
					return base.Load_NoVirtual(name,group);
				}
				public override void SetVerbose(bool v)
				{
					base.SetVerbose_NoVirtual(v);
				}
				public override bool GetVerbose()
				{
					return base.GetVerbose_NoVirtual();
				}
				protected override void AddImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.AddImpl_NoVirtual(ref res);
				}
				protected override void RemoveImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.RemoveImpl_NoVirtual(ref res);
				}
				protected override void CheckUsage()
				{
					base.CheckUsage_NoVirtual();
				}
				public override EarthView.World.Core.StringVector GetScriptPatterns()
				{
					return base.GetScriptPatterns_NoVirtual();
				}
				public override void ParseScript(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					base.ParseScript_NoVirtual(ref stream,groupName);
				}
				public override double GetLoadingOrder()
				{
					return base.GetLoadingOrder_NoVirtual();
				}
				public static HighLevelGpuProgramManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					HighLevelGpuProgramManager obj = baseObj as  HighLevelGpuProgramManager;
					if (object.Equals(obj, null))
					{
						obj = new HighLevelGpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CHighLevelGpuProgramManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class HighLevelGpuProgramManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					HighLevelGpuProgramManager emptyInstance = new HighLevelGpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
