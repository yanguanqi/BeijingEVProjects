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
			/// 抽象类，定义粒子效果器
			/// </summary>
			public class ParticleAffector : EarthView.World.Core.StringInterface
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
				private static extern void EarthView_World_Graphic_CParticleAffector_addBaseParameters_void(IntPtr pNativeObject);

				/// <summary>
				/// 内部方法为子类设定了基本的参数定义
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				protected void AddBaseParameters()
				{
					EarthView_World_Graphic_CParticleAffector_addBaseParameters_void(this.NativeObject);
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="parent"></param>
				/// <returns></returns>
				public ParticleAffector(EarthView.World.Graphic.ParticleSystem ref_parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_parent = new BasePtr(ref_parent);
					list.Add("ref_parent", valueref_parent.PtrVal);
					Create("CParticleAffectorProxy", list);
					if (!"EarthView.World.Graphic.ParticleAffector".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _initParticle_CallBack_void_CParticle(IntPtr pParticle);

				protected _initParticle_CallBack_void_CParticle m__initParticle_CallBack_void_CParticle;

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
				private static extern void EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_NoVirtual(IntPtr pNativeObject, IntPtr pParticle);

				/// <summary>
				/// 初始化新粒子
				/// </summary>
				/// <param name="pParticle">指向初始化粒子的指针</param>
				/// <returns></returns>
				public virtual void _initParticle_NoVirtual(EarthView.World.Graphic.Particle pParticle)
				{
					EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_NoVirtual(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Function(IntPtr pParticle)
				{
					EarthView.World.Graphic.Particle csobj_pParticle = new EarthView.World.Graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pParticle.BindNativeObject(pParticle,"CParticle");
					csobj_pParticle.Delegate = true;
					IClassFactory csobj_pParticleClassFactory = GlobalClassFactoryMap.Get(csobj_pParticle.GetCppInstanceTypeName());
					if (csobj_pParticleClassFactory != null)
					{
						csobj_pParticle.Delegate = true;
						csobj_pParticle = csobj_pParticleClassFactory.Create() as EarthView.World.Graphic.Particle;
						csobj_pParticle.BindNativeObject(pParticle, "CParticle");
						csobj_pParticle.Delegate = true;
					}
					
					_initParticle(csobj_pParticle);
					
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
				private static extern void EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(IntPtr pNativeObject, IntPtr pParticle);

				/// <summary>
				/// 初始化新粒子
				/// </summary>
				/// <param name="pParticle">指向初始化粒子的指针</param>
				/// <returns></returns>
				public virtual void _initParticle(EarthView.World.Graphic.Particle pParticle)
				{
					EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void _affectParticles_CallBack_void_CParticleSystem_Real(IntPtr pSystem, double timeElapsed);

				protected _affectParticles_CallBack_void_CParticleSystem_Real m__affectParticles_CallBack_void_CParticleSystem_Real;

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
				private static extern void EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

				/// <summary>
				/// 作用活跃的粒子
				/// </summary>
				/// <param name="pSystem">指向粒子系统的指针</param>
				/// <param name="timeElapsed">消耗的时间</param>
				/// <returns></returns>
				public virtual void _affectParticles_NoVirtual(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
				{
					EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
					
				}

				protected  void EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Function(IntPtr pSystem, double timeElapsed)
				{
					EarthView.World.Graphic.ParticleSystem csobj_pSystem = new EarthView.World.Graphic.ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_pSystem.BindNativeObject(pSystem,"CParticleSystem");
					csobj_pSystem.Delegate = true;
					IClassFactory csobj_pSystemClassFactory = GlobalClassFactoryMap.Get(csobj_pSystem.GetCppInstanceTypeName());
					if (csobj_pSystemClassFactory != null)
					{
						csobj_pSystem.Delegate = true;
						csobj_pSystem = csobj_pSystemClassFactory.Create() as EarthView.World.Graphic.ParticleSystem;
						csobj_pSystem.BindNativeObject(pSystem, "CParticleSystem");
						csobj_pSystem.Delegate = true;
					}
					
					_affectParticles(csobj_pSystem, timeElapsed);
					
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
				private static extern void EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

				/// <summary>
				/// 作用活跃的粒子
				/// </summary>
				/// <param name="pSystem">指向粒子系统的指针</param>
				/// <param name="timeElapsed">消耗的时间</param>
				/// <returns></returns>
				public virtual void _affectParticles(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
				{
					EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffector_getType_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 返回属性变换器的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public string GetType()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffector_getType_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleAffector = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffector = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffector", new ParticleAffectorClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffectorProxy", new ParticleAffectorClassFactory());

				public ParticleAffector(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(IntPtr pObject, _initParticle_CallBack_void_CParticle pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(IntPtr pObject, _affectParticles_CallBack_void_CParticleSystem_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m__initParticle_CallBack_void_CParticle = EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Function;
						GC.KeepAlive(m__initParticle_CallBack_void_CParticle);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle(this.NativeObject, m__initParticle_CallBack_void_CParticle);
						m__affectParticles_CallBack_void_CParticleSystem_Real = EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Function;
						GC.KeepAlive(m__affectParticles_CallBack_void_CParticleSystem_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, m__affectParticles_CallBack_void_CParticleSystem_Real);
						m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
						GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
						m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
						m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
						GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
						m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
						GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
						m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
						GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffector_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
					}
				}
				public override bool SetParameter(string name, string value)
				{
					return base.SetParameter_NoVirtual(name,value);
				}
				public override bool SetParameter(string name, bool readOnly, bool enable)
				{
					return base.SetParameter_NoVirtual(name,readOnly,enable);
				}
				public override void SetParameterList(EarthView.World.Core.CommonStringPairList paramList)
				{
					base.SetParameterList_NoVirtual(paramList);
				}
				public override string GetParameter(string name)
				{
					return base.GetParameter_NoVirtual(name);
				}
				public override void CopyParametersTo(EarthView.World.Core.StringInterface dest)
				{
					base.CopyParametersTo_NoVirtual(dest);
				}
				public static ParticleAffector FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleAffector obj = baseObj as  ParticleAffector;
					if (object.Equals(obj, null))
					{
						obj = new ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleAffector");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleAffectorClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleAffector emptyInstance = new ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
