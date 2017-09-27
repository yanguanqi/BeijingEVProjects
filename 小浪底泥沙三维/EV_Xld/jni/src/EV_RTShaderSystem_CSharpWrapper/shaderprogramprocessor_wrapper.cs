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
			namespace Rtshadersystem
			{
				public class ProgramProcessor : EarthView.World.Core.AllocatedObject
				{
					public ProgramProcessor() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CProgramProcessorProxy", null);
						if (!"EarthView.World.Graphic.Rtshadersystem.ProgramProcessor".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getTargetLanguage_CallBack_EVString();

					protected getTargetLanguage_CallBack_EVString m_getTargetLanguage_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_NoVirtual(IntPtr pNativeObject);

					public virtual string GetTargetLanguage_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Function()
					{
						string csret=GetTargetLanguage();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(IntPtr pNativeObject);

					public virtual string GetTargetLanguage()
					{
						IntPtr __ptr = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte preCreateGpuPrograms_CallBack_bool_CProgramSet(IntPtr programSet);

					protected preCreateGpuPrograms_CallBack_bool_CProgramSet m_preCreateGpuPrograms_CallBack_bool_CProgramSet;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool PreCreateGpuPrograms_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=PreCreateGpuPrograms(csobj_programSet);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool PreCreateGpuPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte postCreateGpuPrograms_CallBack_bool_CProgramSet(IntPtr programSet);

					protected postCreateGpuPrograms_CallBack_bool_CProgramSet m_postCreateGpuPrograms_CallBack_bool_CProgramSet;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_NoVirtual(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool PostCreateGpuPrograms_NoVirtual(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_NoVirtual(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Function(IntPtr programSet)
					{
						EarthView.World.Graphic.Rtshadersystem.ProgramSet csobj_programSet = new EarthView.World.Graphic.Rtshadersystem.ProgramSet(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_programSet.BindNativeObject(programSet,"CProgramSet");
						csobj_programSet.Delegate = true;
						IClassFactory csobj_programSetClassFactory = GlobalClassFactoryMap.Get(csobj_programSet.GetCppInstanceTypeName());
						if (csobj_programSetClassFactory != null)
						{
							csobj_programSet.Delegate = true;
							csobj_programSet = csobj_programSetClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.ProgramSet;
							csobj_programSet.BindNativeObject(programSet, "CProgramSet");
							csobj_programSet.Delegate = true;
						}
						
						bool csret=PostCreateGpuPrograms(csobj_programSet);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(IntPtr pNativeObject, IntPtr programSet);

					public virtual bool PostCreateGpuPrograms(EarthView.World.Graphic.Rtshadersystem.ProgramSet programSet)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(this.NativeObject, object.Equals(programSet, null) ? IntPtr.Zero : programSet.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte compactVsOutputs_CallBack_bool_CFunction_CFunction(IntPtr vsMain, IntPtr fsMain);

					protected compactVsOutputs_CallBack_bool_CFunction_CFunction m_compactVsOutputs_CallBack_bool_CFunction_CFunction;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_NoVirtual(IntPtr pNativeObject, IntPtr vsMain, IntPtr fsMain);

					protected virtual bool CompactVsOutputs_NoVirtual(EarthView.World.Graphic.Rtshadersystem.Function vsMain, EarthView.World.Graphic.Rtshadersystem.Function fsMain)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_NoVirtual(this.NativeObject, object.Equals(vsMain, null) ? IntPtr.Zero : vsMain.NativeObject, object.Equals(fsMain, null) ? IntPtr.Zero : fsMain.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Function(IntPtr vsMain, IntPtr fsMain)
					{
						EarthView.World.Graphic.Rtshadersystem.Function csobj_vsMain = new EarthView.World.Graphic.Rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_vsMain.BindNativeObject(vsMain,"CFunction");
						csobj_vsMain.Delegate = true;
						IClassFactory csobj_vsMainClassFactory = GlobalClassFactoryMap.Get(csobj_vsMain.GetCppInstanceTypeName());
						if (csobj_vsMainClassFactory != null)
						{
							csobj_vsMain.Delegate = true;
							csobj_vsMain = csobj_vsMainClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Function;
							csobj_vsMain.BindNativeObject(vsMain, "CFunction");
							csobj_vsMain.Delegate = true;
						}
						EarthView.World.Graphic.Rtshadersystem.Function csobj_fsMain = new EarthView.World.Graphic.Rtshadersystem.Function(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_fsMain.BindNativeObject(fsMain,"CFunction");
						csobj_fsMain.Delegate = true;
						IClassFactory csobj_fsMainClassFactory = GlobalClassFactoryMap.Get(csobj_fsMain.GetCppInstanceTypeName());
						if (csobj_fsMainClassFactory != null)
						{
							csobj_fsMain.Delegate = true;
							csobj_fsMain = csobj_fsMainClassFactory.Create() as EarthView.World.Graphic.Rtshadersystem.Function;
							csobj_fsMain.BindNativeObject(fsMain, "CFunction");
							csobj_fsMain.Delegate = true;
						}
						
						bool csret=CompactVsOutputs(csobj_vsMain, csobj_fsMain);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(IntPtr pNativeObject, IntPtr vsMain, IntPtr fsMain);

					protected virtual bool CompactVsOutputs(EarthView.World.Graphic.Rtshadersystem.Function vsMain, EarthView.World.Graphic.Rtshadersystem.Function fsMain)
					{
						byte ret=EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(this.NativeObject, object.Equals(vsMain, null) ? IntPtr.Zero : vsMain.NativeObject, object.Equals(fsMain, null) ? IntPtr.Zero : fsMain.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_d.so");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.so");

						#else 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_d.dll");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#elif Linux 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem.so");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp.so");

						#else 
							private static bool bLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem.dll");
							private static bool csbLoadProgramProcessor = LoadDll.Load("EV_RTShaderSystem_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CProgramProcessor", new ProgramProcessorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::RTShaderSystem::CProgramProcessorProxy", new ProgramProcessorClassFactory());

					public ProgramProcessor(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(IntPtr pObject, getTargetLanguage_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(IntPtr pObject, preCreateGpuPrograms_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(IntPtr pObject, postCreateGpuPrograms_CallBack_bool_CProgramSet pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RTShaderSystem_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(IntPtr pObject, compactVsOutputs_CallBack_bool_CFunction_CFunction pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getTargetLanguage_CallBack_EVString = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Function;
							GC.KeepAlive(m_getTargetLanguage_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(this.NativeObject, m_getTargetLanguage_CallBack_EVString);
							m_preCreateGpuPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_preCreateGpuPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(this.NativeObject, m_preCreateGpuPrograms_CallBack_bool_CProgramSet);
							m_postCreateGpuPrograms_CallBack_bool_CProgramSet = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Function;
							GC.KeepAlive(m_postCreateGpuPrograms_CallBack_bool_CProgramSet);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(this.NativeObject, m_postCreateGpuPrograms_CallBack_bool_CProgramSet);
							m_compactVsOutputs_CallBack_bool_CFunction_CFunction = EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Function;
							GC.KeepAlive(m_compactVsOutputs_CallBack_bool_CFunction_CFunction);
							EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(this.NativeObject, m_compactVsOutputs_CallBack_bool_CFunction_CFunction);
						}
					}
					public static ProgramProcessor FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ProgramProcessor obj = baseObj as  ProgramProcessor;
						if (object.Equals(obj, null))
						{
							obj = new ProgramProcessor(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CProgramProcessor");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ProgramProcessorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ProgramProcessor emptyInstance = new ProgramProcessor(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
