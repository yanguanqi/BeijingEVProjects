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
			/// <summary>
			/// 抽象类
			/// 定义了EarthView::World::Graphic::CParticleEmitter子类执行的接口
			/// </summary>
			public class ParticleEmitterFactory : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ParticleEmitterFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleEmitterFactoryProxy", null);
					if (!"EarthView.World.Graphic.ParticleEmitterFactory".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate string getName_CallBack_EVString();

				protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 返回工厂的名字，其标识了该工厂创建粒子发射器的类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString_Function()
				{
					string csret=GetName();
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 返回工厂的名字，其标识了该工厂创建粒子发射器的类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createEmitter_CallBack_CParticleEmitter_CParticleSystem(IntPtr psys);

				protected createEmitter_CallBack_CParticleEmitter_CParticleSystem m_createEmitter_CallBack_CParticleEmitter_CParticleSystem;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_NoVirtual(IntPtr pNativeObject, IntPtr psys);

				/// <summary>
				/// 创建一个新的粒子发射器的实例
				/// </summary>
				/// <param name="psys">指向粒子系统的指针</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleEmitter CreateEmitter_NoVirtual(EarthView.World.Graphic.ParticleSystem psys)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_NoVirtual(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
					
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

				protected  IntPtr EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Function(IntPtr psys)
				{
					EarthView.World.Graphic.ParticleSystem csobj_psys = new EarthView.World.Graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_psys.BindNativeObject(psys,"CParticleSystem");
					csobj_psys.Delegate = true;
					IClassFactory csobj_psysClassFactory = GlobalClassFactoryMap.Get(csobj_psys.GetCppInstanceTypeName());
					if (csobj_psysClassFactory != null)
					{
						csobj_psys.Delegate = true;
						csobj_psys = csobj_psysClassFactory.Create() as EarthView.World.Graphic.ParticleSystem;
						csobj_psys.BindNativeObject(psys, "CParticleSystem");
						csobj_psys.Delegate = true;
					}
					
					EarthView.World.Graphic.ParticleEmitter csret=CreateEmitter(csobj_psys);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(IntPtr pNativeObject, IntPtr psys);

				/// <summary>
				/// 创建一个新的粒子发射器的实例
				/// </summary>
				/// <param name="psys">指向粒子系统的指针</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleEmitter CreateEmitter(EarthView.World.Graphic.ParticleSystem psys)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyEmitter_CallBack_void_CParticleEmitter(IntPtr e);

				protected destroyEmitter_CallBack_void_CParticleEmitter m_destroyEmitter_CallBack_void_CParticleEmitter;

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
				private static extern void EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 销毁参数指定的发射器
				/// </summary>
				/// <param name="e">指向发射器的指针</param>
				/// <returns></returns>
				public virtual void DestroyEmitter_NoVirtual(EarthView.World.Graphic.ParticleEmitter e)
				{
					EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter_Function(IntPtr e)
				{
					EarthView.World.Graphic.ParticleEmitter csobj_e = new EarthView.World.Graphic.ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CParticleEmitter");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Graphic.ParticleEmitter;
						csobj_e.BindNativeObject(e, "CParticleEmitter");
						csobj_e.Delegate = true;
					}
					
					DestroyEmitter(csobj_e);
					
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
				private static extern void EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 销毁参数指定的发射器
				/// </summary>
				/// <param name="e">指向发射器的指针</param>
				/// <returns></returns>
				public virtual void DestroyEmitter(EarthView.World.Graphic.ParticleEmitter e)
				{
					EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleEmitterFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleEmitterFactory", new ParticleEmitterFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleEmitterFactoryProxy", new ParticleEmitterFactoryClassFactory());

				public ParticleEmitterFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(IntPtr pObject, createEmitter_CallBack_CParticleEmitter_CParticleSystem pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter(IntPtr pObject, destroyEmitter_CallBack_void_CParticleEmitter pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getName_CallBack_EVString = EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_createEmitter_CallBack_CParticleEmitter_CParticleSystem = EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem_Function;
						GC.KeepAlive(m_createEmitter_CallBack_CParticleEmitter_CParticleSystem);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_createEmitter_CParticleEmitter_CParticleSystem(this.NativeObject, m_createEmitter_CallBack_CParticleEmitter_CParticleSystem);
						m_destroyEmitter_CallBack_void_CParticleEmitter = EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter_Function;
						GC.KeepAlive(m_destroyEmitter_CallBack_void_CParticleEmitter);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterFactory_destroyEmitter_void_CParticleEmitter(this.NativeObject, m_destroyEmitter_CallBack_void_CParticleEmitter);
					}
				}
				public static ParticleEmitterFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleEmitterFactory obj = baseObj as  ParticleEmitterFactory;
					if (object.Equals(obj, null))
					{
						obj = new ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleEmitterFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleEmitterFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleEmitterFactory emptyInstance = new ParticleEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
