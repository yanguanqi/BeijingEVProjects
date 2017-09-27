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
		namespace Plugin
		{
			namespace ParticleFX
			{
				public class CylinderEmitterFactory : EarthView.World.Graphic.ParticleEmitterFactory
				{
					public CylinderEmitterFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCylinderEmitterFactoryProxy", null);
						if (!"EarthView.World.Plugin.ParticleFX.CylinderEmitterFactory".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString_NoVirtual(IntPtr pNativeObject);

					public new string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString(IntPtr pNativeObject);

					public override string GetName()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_NoVirtual(IntPtr pNativeObject, IntPtr psys);

					public new EarthView.World.Graphic.ParticleEmitter CreateEmitter_NoVirtual(EarthView.World.Graphic.ParticleSystem psys)
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_NoVirtual(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ParticleEmitter csObj = new EarthView.World.Graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CParticleEmitter");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleEmitter;
							csObj.BindNativeObject(__ptr, "CParticleEmitter");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(IntPtr pNativeObject, IntPtr psys);

					public override EarthView.World.Graphic.ParticleEmitter CreateEmitter(EarthView.World.Graphic.ParticleSystem psys)
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.ParticleEmitter csObj = new EarthView.World.Graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CParticleEmitter");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleEmitter;
							csObj.BindNativeObject(__ptr, "CParticleEmitter");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

						#else 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#elif Linux 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX.so");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

						#else 
							private static bool bLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadCylinderEmitterFactory = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitterFactory", new CylinderEmitterFactoryClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CCylinderEmitterFactoryProxy", new CylinderEmitterFactoryClassFactory());

					public CylinderEmitterFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(IntPtr pObject, createEmitter_CallBack_CParticleEmitter_CParticleSystem pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Plugin_ParticleFX_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_destroyEmitter_void_CParticleEmitter(IntPtr pObject, destroyEmitter_CallBack_void_CParticleEmitter pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_createEmitter_CallBack_CParticleEmitter_CParticleSystem = EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Function;
							GC.KeepAlive(m_createEmitter_CallBack_CParticleEmitter_CParticleSystem);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(this.NativeObject, m_createEmitter_CallBack_CParticleEmitter_CParticleSystem);
							m_destroyEmitter_CallBack_void_CParticleEmitter = EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter_Function;
							GC.KeepAlive(m_destroyEmitter_CallBack_void_CParticleEmitter);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CCylinderEmitterFactory_destroyEmitter_void_CParticleEmitter(this.NativeObject, m_destroyEmitter_CallBack_void_CParticleEmitter);
						}
					}
					public override void DestroyEmitter(EarthView.World.Graphic.ParticleEmitter e)
					{
						base.DestroyEmitter_NoVirtual(e);
					}
					public static CylinderEmitterFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CylinderEmitterFactory obj = baseObj as  CylinderEmitterFactory;
						if (object.Equals(obj, null))
						{
							obj = new CylinderEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCylinderEmitterFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CylinderEmitterFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CylinderEmitterFactory emptyInstance = new CylinderEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
