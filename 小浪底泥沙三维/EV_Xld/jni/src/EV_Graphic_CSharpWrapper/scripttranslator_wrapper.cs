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
			public class ScriptTranslator : EarthView.World.Core.AllocatedObject
			{
				public ScriptTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CScriptTranslatorProxy", null);
					if (!"EarthView.World.Graphic.ScriptTranslator".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void translate_CallBack_void_CScriptCompiler_AbstractNodePtr(IntPtr compiler, IntPtr node);

				protected translate_CallBack_void_CScriptCompiler_AbstractNodePtr m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr;

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
				private static extern void EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public virtual void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function(IntPtr compiler, IntPtr node)
				{
					EarthView.World.Graphic.ScriptCompiler csobj_compiler = new EarthView.World.Graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_compiler.BindNativeObject(compiler,"CScriptCompiler");
					csobj_compiler.Delegate = true;
					IClassFactory csobj_compilerClassFactory = GlobalClassFactoryMap.Get(csobj_compiler.GetCppInstanceTypeName());
					if (csobj_compilerClassFactory != null)
					{
						csobj_compiler.Delegate = true;
						csobj_compiler = csobj_compilerClassFactory.Create() as EarthView.World.Graphic.ScriptCompiler;
						csobj_compiler.BindNativeObject(compiler, "CScriptCompiler");
						csobj_compiler.Delegate = true;
					}
					EarthView.World.Graphic.AbstractNodePtr csobj_node = new EarthView.World.Graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_node.BindNativeObject(node,"AbstractNodePtr");
					csobj_node.Delegate = true;
					IClassFactory csobj_nodeClassFactory = GlobalClassFactoryMap.Get(csobj_node.GetCppInstanceTypeName());
					if (csobj_nodeClassFactory != null)
					{
						csobj_node.Delegate = true;
						csobj_node = csobj_nodeClassFactory.Create() as EarthView.World.Graphic.AbstractNodePtr;
						csobj_node.BindNativeObject(node, "AbstractNodePtr");
						csobj_node.Delegate = true;
					}
					
					Translate(csobj_compiler, csobj_node);
					
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
				private static extern void EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public virtual void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr clone_CallBack_CScriptTranslator();

				protected clone_CallBack_CScriptTranslator m_clone_CallBack_CScriptTranslator;

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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function()
				{
					EarthView.World.Graphic.ScriptTranslator csret=Clone();
					
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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadScriptTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScriptTranslator", new ScriptTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScriptTranslatorProxy", new ScriptTranslatorClassFactory());

				public ScriptTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static ScriptTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScriptTranslator obj = baseObj as  ScriptTranslator;
					if (object.Equals(obj, null))
					{
						obj = new ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScriptTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScriptTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScriptTranslator emptyInstance = new ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ScriptTranslatorManager : EarthView.World.Core.AllocatedObject
			{
				public ScriptTranslatorManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CScriptTranslatorManagerProxy", null);
					if (!"EarthView.World.Graphic.ScriptTranslatorManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslatorManager_getSingleton_CScriptTranslatorManager();

				public static EarthView.World.Graphic.ScriptTranslatorManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslatorManager_getSingleton_CScriptTranslatorManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslatorManager csObj = new EarthView.World.Graphic.ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslatorManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslatorManager;
						csObj.BindNativeObject(__ptr, "CScriptTranslatorManager");
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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslatorManager_getSingletonPtr_CScriptTranslatorManager();

				public static EarthView.World.Graphic.ScriptTranslatorManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslatorManager_getSingletonPtr_CScriptTranslatorManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslatorManager csObj = new EarthView.World.Graphic.ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslatorManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslatorManager;
						csObj.BindNativeObject(__ptr, "CScriptTranslatorManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate ulong getNumTranslators_CallBack_ev_size_t();

				protected getNumTranslators_CallBack_ev_size_t m_getNumTranslators_CallBack_ev_size_t;

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
				private static extern ulong EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(IntPtr pNativeObject);

				public virtual ulong GetNumTranslators_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(this.NativeObject);
					
					return ret;
					
				}

				protected  ulong EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Function()
				{
					ulong csret=GetNumTranslators();
					
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
				private static extern ulong EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pNativeObject);

				public virtual ulong GetNumTranslators()
				{
					ulong ret=EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getTranslator_CallBack_CScriptTranslator_AbstractNodePtr(IntPtr nodes);

				protected getTranslator_CallBack_CScriptTranslator_AbstractNodePtr m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr;

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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr nodes);

				public virtual EarthView.World.Graphic.ScriptTranslator GetTranslator_NoVirtual(EarthView.World.Graphic.AbstractNodePtr nodes)
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(nodes, null) ? IntPtr.Zero : nodes.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Function(IntPtr nodes)
				{
					EarthView.World.Graphic.AbstractNodePtr csobj_nodes = new EarthView.World.Graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_nodes.BindNativeObject(nodes,"AbstractNodePtr");
					csobj_nodes.Delegate = true;
					IClassFactory csobj_nodesClassFactory = GlobalClassFactoryMap.Get(csobj_nodes.GetCppInstanceTypeName());
					if (csobj_nodesClassFactory != null)
					{
						csobj_nodes.Delegate = true;
						csobj_nodes = csobj_nodesClassFactory.Create() as EarthView.World.Graphic.AbstractNodePtr;
						csobj_nodes.BindNativeObject(nodes, "AbstractNodePtr");
						csobj_nodes.Delegate = true;
					}
					
					EarthView.World.Graphic.ScriptTranslator csret=GetTranslator(csobj_nodes);
					
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
				private static extern IntPtr EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pNativeObject, IntPtr nodes);

				public virtual EarthView.World.Graphic.ScriptTranslator GetTranslator(EarthView.World.Graphic.AbstractNodePtr nodes)
				{
					IntPtr __ptr = EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, object.Equals(nodes, null) ? IntPtr.Zero : nodes.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScriptTranslatorManager", new ScriptTranslatorManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CScriptTranslatorManagerProxy", new ScriptTranslatorManagerClassFactory());

				public ScriptTranslatorManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pObject, getNumTranslators_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pObject, getTranslator_CallBack_CScriptTranslator_AbstractNodePtr pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getNumTranslators_CallBack_ev_size_t = EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Function;
						GC.KeepAlive(m_getNumTranslators_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject, m_getNumTranslators_CallBack_ev_size_t);
						m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Function;
						GC.KeepAlive(m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
					}
				}
				public static ScriptTranslatorManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ScriptTranslatorManager obj = baseObj as  ScriptTranslatorManager;
					if (object.Equals(obj, null))
					{
						obj = new ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CScriptTranslatorManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ScriptTranslatorManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ScriptTranslatorManager emptyInstance = new ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class MaterialTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public MaterialTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMaterialTranslatorProxy", null);
					if (!"EarthView.World.Graphic.MaterialTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadMaterialTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMaterialTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialTranslator", new MaterialTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMaterialTranslatorProxy", new MaterialTranslatorClassFactory());

				public MaterialTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static MaterialTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MaterialTranslator obj = baseObj as  MaterialTranslator;
					if (object.Equals(obj, null))
					{
						obj = new MaterialTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMaterialTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MaterialTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MaterialTranslator emptyInstance = new MaterialTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TechniqueTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public TechniqueTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTechniqueTranslatorProxy", null);
					if (!"EarthView.World.Graphic.TechniqueTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTechniqueTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTechniqueTranslator", new TechniqueTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTechniqueTranslatorProxy", new TechniqueTranslatorClassFactory());

				public TechniqueTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static TechniqueTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TechniqueTranslator obj = baseObj as  TechniqueTranslator;
					if (object.Equals(obj, null))
					{
						obj = new TechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTechniqueTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TechniqueTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TechniqueTranslator emptyInstance = new TechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class PassTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public PassTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CPassTranslatorProxy", null);
					if (!"EarthView.World.Graphic.PassTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPassTranslator", new PassTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CPassTranslatorProxy", new PassTranslatorClassFactory());

				public PassTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static PassTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					PassTranslator obj = baseObj as  PassTranslator;
					if (object.Equals(obj, null))
					{
						obj = new PassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CPassTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class PassTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					PassTranslator emptyInstance = new PassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TextureUnitTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public TextureUnitTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextureUnitTranslatorProxy", null);
					if (!"EarthView.World.Graphic.TextureUnitTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureUnitTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureUnitTranslator", new TextureUnitTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureUnitTranslatorProxy", new TextureUnitTranslatorClassFactory());

				public TextureUnitTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static TextureUnitTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextureUnitTranslator obj = baseObj as  TextureUnitTranslator;
					if (object.Equals(obj, null))
					{
						obj = new TextureUnitTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextureUnitTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextureUnitTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextureUnitTranslator emptyInstance = new TextureUnitTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class TextureSourceTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public TextureSourceTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CTextureSourceTranslatorProxy", null);
					if (!"EarthView.World.Graphic.TextureSourceTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadTextureSourceTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureSourceTranslator", new TextureSourceTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CTextureSourceTranslatorProxy", new TextureSourceTranslatorClassFactory());

				public TextureSourceTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static TextureSourceTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					TextureSourceTranslator obj = baseObj as  TextureSourceTranslator;
					if (object.Equals(obj, null))
					{
						obj = new TextureSourceTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CTextureSourceTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class TextureSourceTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					TextureSourceTranslator emptyInstance = new TextureSourceTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class GpuProgramTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public GpuProgramTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGpuProgramTranslatorProxy", null);
					if (!"EarthView.World.Graphic.GpuProgramTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern void EarthView_World_Graphic_CGpuProgramTranslator_translateProgramParameters_void_CScriptCompiler_GpuProgramParametersSharedPtr_CObjectAbstractNode(IntPtr compiler, IntPtr parameters, IntPtr obj);

				public static void TranslateProgramParameters(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.GpuProgramParametersSharedPtr parameters, EarthView.World.Graphic.ObjectAbstractNode obj)
				{
					EarthView_World_Graphic_CGpuProgramTranslator_translateProgramParameters_void_CScriptCompiler_GpuProgramParametersSharedPtr_CObjectAbstractNode(object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(parameters, null) ? IntPtr.Zero : parameters.NativeObject, object.Equals(obj, null) ? IntPtr.Zero : obj.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadGpuProgramTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramTranslator", new GpuProgramTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramTranslatorProxy", new GpuProgramTranslatorClassFactory());

				public GpuProgramTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static GpuProgramTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GpuProgramTranslator obj = baseObj as  GpuProgramTranslator;
					if (object.Equals(obj, null))
					{
						obj = new GpuProgramTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGpuProgramTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GpuProgramTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GpuProgramTranslator emptyInstance = new GpuProgramTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class SharedParamsTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public SharedParamsTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CSharedParamsTranslatorProxy", null);
					if (!"EarthView.World.Graphic.SharedParamsTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadSharedParamsTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSharedParamsTranslator", new SharedParamsTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CSharedParamsTranslatorProxy", new SharedParamsTranslatorClassFactory());

				public SharedParamsTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static SharedParamsTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					SharedParamsTranslator obj = baseObj as  SharedParamsTranslator;
					if (object.Equals(obj, null))
					{
						obj = new SharedParamsTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CSharedParamsTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class SharedParamsTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					SharedParamsTranslator emptyInstance = new SharedParamsTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ParticleSystemTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public ParticleSystemTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleSystemTranslatorProxy", null);
					if (!"EarthView.World.Graphic.ParticleSystemTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemTranslator", new ParticleSystemTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemTranslatorProxy", new ParticleSystemTranslatorClassFactory());

				public ParticleSystemTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static ParticleSystemTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleSystemTranslator obj = baseObj as  ParticleSystemTranslator;
					if (object.Equals(obj, null))
					{
						obj = new ParticleSystemTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleSystemTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleSystemTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleSystemTranslator emptyInstance = new ParticleSystemTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ParticleEmitterTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public ParticleEmitterTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleEmitterTranslatorProxy", null);
					if (!"EarthView.World.Graphic.ParticleEmitterTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleEmitterTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleEmitterTranslator", new ParticleEmitterTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleEmitterTranslatorProxy", new ParticleEmitterTranslatorClassFactory());

				public ParticleEmitterTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static ParticleEmitterTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleEmitterTranslator obj = baseObj as  ParticleEmitterTranslator;
					if (object.Equals(obj, null))
					{
						obj = new ParticleEmitterTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleEmitterTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleEmitterTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleEmitterTranslator emptyInstance = new ParticleEmitterTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class ParticleAffectorTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public ParticleAffectorTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleAffectorTranslatorProxy", null);
					if (!"EarthView.World.Graphic.ParticleAffectorTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffectorTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffectorTranslator", new ParticleAffectorTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffectorTranslatorProxy", new ParticleAffectorTranslatorClassFactory());

				public ParticleAffectorTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static ParticleAffectorTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleAffectorTranslator obj = baseObj as  ParticleAffectorTranslator;
					if (object.Equals(obj, null))
					{
						obj = new ParticleAffectorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleAffectorTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleAffectorTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleAffectorTranslator emptyInstance = new ParticleAffectorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CompositorTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public CompositorTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositorTranslatorProxy", null);
					if (!"EarthView.World.Graphic.CompositorTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositorTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositorTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositorTranslator", new CompositorTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositorTranslatorProxy", new CompositorTranslatorClassFactory());

				public CompositorTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static CompositorTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositorTranslator obj = baseObj as  CompositorTranslator;
					if (object.Equals(obj, null))
					{
						obj = new CompositorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositorTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositorTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositorTranslator emptyInstance = new CompositorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CompositionTechniqueTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public CompositionTechniqueTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositionTechniqueTranslatorProxy", null);
					if (!"EarthView.World.Graphic.CompositionTechniqueTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionTechniqueTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionTechniqueTranslator", new CompositionTechniqueTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionTechniqueTranslatorProxy", new CompositionTechniqueTranslatorClassFactory());

				public CompositionTechniqueTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static CompositionTechniqueTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositionTechniqueTranslator obj = baseObj as  CompositionTechniqueTranslator;
					if (object.Equals(obj, null))
					{
						obj = new CompositionTechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositionTechniqueTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositionTechniqueTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositionTechniqueTranslator emptyInstance = new CompositionTechniqueTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CompositionTargetPassTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public CompositionTargetPassTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositionTargetPassTranslatorProxy", null);
					if (!"EarthView.World.Graphic.CompositionTargetPassTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionTargetPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionTargetPassTranslator", new CompositionTargetPassTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionTargetPassTranslatorProxy", new CompositionTargetPassTranslatorClassFactory());

				public CompositionTargetPassTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static CompositionTargetPassTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositionTargetPassTranslator obj = baseObj as  CompositionTargetPassTranslator;
					if (object.Equals(obj, null))
					{
						obj = new CompositionTargetPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositionTargetPassTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositionTargetPassTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositionTargetPassTranslator emptyInstance = new CompositionTargetPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CompositionPassTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public CompositionPassTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositionPassTranslatorProxy", null);
					if (!"EarthView.World.Graphic.CompositionPassTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionPassTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionPassTranslator", new CompositionPassTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionPassTranslatorProxy", new CompositionPassTranslatorClassFactory());

				public CompositionPassTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static CompositionPassTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositionPassTranslator obj = baseObj as  CompositionPassTranslator;
					if (object.Equals(obj, null))
					{
						obj = new CompositionPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositionPassTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositionPassTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositionPassTranslator emptyInstance = new CompositionPassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class CompositionPassStencilTranslator : EarthView.World.Graphic.ScriptTranslator
			{
				public CompositionPassStencilTranslator() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CCompositionPassStencilTranslatorProxy", null);
					if (!"EarthView.World.Graphic.CompositionPassStencilTranslator".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public new void Translate_NoVirtual(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pNativeObject, IntPtr compiler, IntPtr node);

				public override void Translate(EarthView.World.Graphic.ScriptCompiler compiler, EarthView.World.Graphic.AbstractNodePtr node)
				{
					EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, object.Equals(compiler, null) ? IntPtr.Zero : compiler.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_NoVirtual(IntPtr pNativeObject);

				public new EarthView.World.Graphic.ScriptTranslator Clone_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(IntPtr pNativeObject);

				public override EarthView.World.Graphic.ScriptTranslator Clone()
				{
					IntPtr __ptr = EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadCompositionPassStencilTranslator = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionPassStencilTranslator", new CompositionPassStencilTranslatorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CCompositionPassStencilTranslatorProxy", new CompositionPassStencilTranslatorClassFactory());

				public CompositionPassStencilTranslator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(IntPtr pObject, translate_CallBack_void_CScriptCompiler_AbstractNodePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(IntPtr pObject, clone_CallBack_CScriptTranslator pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Function;
						GC.KeepAlive(m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(this.NativeObject, m_translate_CallBack_void_CScriptCompiler_AbstractNodePtr);
						m_clone_CallBack_CScriptTranslator = EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Function;
						GC.KeepAlive(m_clone_CallBack_CScriptTranslator);
						EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(this.NativeObject, m_clone_CallBack_CScriptTranslator);
					}
				}
				public static CompositionPassStencilTranslator FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					CompositionPassStencilTranslator obj = baseObj as  CompositionPassStencilTranslator;
					if (object.Equals(obj, null))
					{
						obj = new CompositionPassStencilTranslator(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CCompositionPassStencilTranslator");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class CompositionPassStencilTranslatorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					CompositionPassStencilTranslator emptyInstance = new CompositionPassStencilTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

			public class BuiltinScriptTranslatorManager : EarthView.World.Graphic.ScriptTranslatorManager
			{
				public BuiltinScriptTranslatorManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CBuiltinScriptTranslatorManagerProxy", null);
					if (!"EarthView.World.Graphic.BuiltinScriptTranslatorManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern ulong EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(IntPtr pNativeObject);

				public new ulong GetNumTranslators_NoVirtual()
				{
					ulong ret=EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(this.NativeObject);
					
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
				private static extern ulong EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pNativeObject);

				public override ulong GetNumTranslators()
				{
					ulong ret=EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(IntPtr pNativeObject, IntPtr node);

				public new EarthView.World.Graphic.ScriptTranslator GetTranslator_NoVirtual(EarthView.World.Graphic.AbstractNodePtr node)
				{
					IntPtr __ptr = EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
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
				private static extern IntPtr EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pNativeObject, IntPtr node);

				public override EarthView.World.Graphic.ScriptTranslator GetTranslator(EarthView.World.Graphic.AbstractNodePtr node)
				{
					IntPtr __ptr = EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, object.Equals(node, null) ? IntPtr.Zero : node.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ScriptTranslator csObj = new EarthView.World.Graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CScriptTranslator");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ScriptTranslator;
						csObj.BindNativeObject(__ptr, "CScriptTranslator");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadBuiltinScriptTranslatorManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CBuiltinScriptTranslatorManager", new BuiltinScriptTranslatorManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CBuiltinScriptTranslatorManagerProxy", new BuiltinScriptTranslatorManagerClassFactory());

				public BuiltinScriptTranslatorManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(IntPtr pObject, getNumTranslators_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(IntPtr pObject, getTranslator_CallBack_CScriptTranslator_AbstractNodePtr pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getNumTranslators_CallBack_ev_size_t = EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Function;
						GC.KeepAlive(m_getNumTranslators_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(this.NativeObject, m_getNumTranslators_CallBack_ev_size_t);
						m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr = EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Function;
						GC.KeepAlive(m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(this.NativeObject, m_getTranslator_CallBack_CScriptTranslator_AbstractNodePtr);
					}
				}
				public static BuiltinScriptTranslatorManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					BuiltinScriptTranslatorManager obj = baseObj as  BuiltinScriptTranslatorManager;
					if (object.Equals(obj, null))
					{
						obj = new BuiltinScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CBuiltinScriptTranslatorManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class BuiltinScriptTranslatorManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					BuiltinScriptTranslatorManager emptyInstance = new BuiltinScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
