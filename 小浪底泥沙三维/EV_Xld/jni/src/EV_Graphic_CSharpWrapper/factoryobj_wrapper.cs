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
			public class ParticleSystemRendererFactoryObj : EarthView.World.Core.AllocatedObject
			{
				public ParticleSystemRendererFactoryObj() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleSystemRendererFactoryObjProxy", null);
					if (!"EarthView.World.Graphic.ParticleSystemRendererFactoryObj".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getType_CallBack_EVString();

				protected getType_CallBack_EVString m_getType_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_NoVirtual(IntPtr pNativeObject);

				public virtual string GetType_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Function()
				{
					string csret=GetType();
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(IntPtr pNativeObject);

				public virtual string GetType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createInstance_CallBack_CParticleSystemRenderer_EVString(ref IntPtr name);

				protected createInstance_CallBack_CParticleSystemRenderer_EVString m_createInstance_CallBack_CParticleSystemRenderer_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ParticleSystemRenderer CreateInstance_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleSystemRenderer csObj = new EarthView.World.Graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleSystemRenderer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleSystemRenderer;
						csObj.BindNativeObject(__ptr, "CParticleSystemRenderer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.ParticleSystemRenderer csret=CreateInstance(strname);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.ParticleSystemRenderer CreateInstance(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleSystemRenderer csObj = new EarthView.World.Graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleSystemRenderer");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleSystemRenderer;
						csObj.BindNativeObject(__ptr, "CParticleSystemRenderer");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyInstance_CallBack_void_CParticleSystemRenderer(IntPtr renderer);

				protected destroyInstance_CallBack_void_CParticleSystemRenderer m_destroyInstance_CallBack_void_CParticleSystemRenderer;

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
				private static extern void EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_NoVirtual(IntPtr pNativeObject, IntPtr renderer);

				public virtual void DestroyInstance_NoVirtual(EarthView.World.Graphic.ParticleSystemRenderer renderer)
				{
					EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_NoVirtual(this.NativeObject, object.Equals(renderer, null) ? IntPtr.Zero : renderer.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Function(IntPtr renderer)
				{
					EarthView.World.Graphic.ParticleSystemRenderer csobj_renderer = new EarthView.World.Graphic.ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_renderer.BindNativeObject(renderer,"CParticleSystemRenderer");
					csobj_renderer.Delegate = true;
					IClassFactory csobj_rendererClassFactory = GlobalClassFactoryMap.Get(csobj_renderer.GetCppInstanceTypeName());
					if (csobj_rendererClassFactory != null)
					{
						csobj_renderer.Delegate = true;
						csobj_renderer = csobj_rendererClassFactory.Create() as EarthView.World.Graphic.ParticleSystemRenderer;
						csobj_renderer.BindNativeObject(renderer, "CParticleSystemRenderer");
						csobj_renderer.Delegate = true;
					}
					
					DestroyInstance(csobj_renderer);
					
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
				private static extern void EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(IntPtr pNativeObject, IntPtr renderer);

				public virtual void DestroyInstance(EarthView.World.Graphic.ParticleSystemRenderer renderer)
				{
					EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(this.NativeObject, object.Equals(renderer, null) ? IntPtr.Zero : renderer.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleSystemRendererFactoryObj = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRendererFactoryObj", new ParticleSystemRendererFactoryObjClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleSystemRendererFactoryObjProxy", new ParticleSystemRendererFactoryObjClassFactory());

				public ParticleSystemRendererFactoryObj(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(IntPtr pObject, getType_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(IntPtr pObject, createInstance_CallBack_CParticleSystemRenderer_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(IntPtr pObject, destroyInstance_CallBack_void_CParticleSystemRenderer pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getType_CallBack_EVString = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString_Function;
						GC.KeepAlive(m_getType_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_getType_EVString(this.NativeObject, m_getType_CallBack_EVString);
						m_createInstance_CallBack_CParticleSystemRenderer_EVString = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString_Function;
						GC.KeepAlive(m_createInstance_CallBack_CParticleSystemRenderer_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_createInstance_CParticleSystemRenderer_EVString(this.NativeObject, m_createInstance_CallBack_CParticleSystemRenderer_EVString);
						m_destroyInstance_CallBack_void_CParticleSystemRenderer = EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer_Function;
						GC.KeepAlive(m_destroyInstance_CallBack_void_CParticleSystemRenderer);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactoryObj_destroyInstance_void_CParticleSystemRenderer(this.NativeObject, m_destroyInstance_CallBack_void_CParticleSystemRenderer);
					}
				}
				public static ParticleSystemRendererFactoryObj FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleSystemRendererFactoryObj obj = baseObj as  ParticleSystemRendererFactoryObj;
					if (object.Equals(obj, null))
					{
						obj = new ParticleSystemRendererFactoryObj(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleSystemRendererFactoryObj");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleSystemRendererFactoryObjClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleSystemRendererFactoryObj emptyInstance = new ParticleSystemRendererFactoryObj(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
