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
			/// 抽象类定义了EarthView::World::Graphic::CParticleAffector子类执行的接口
			/// </summary>
			public class ParticleAffectorFactory : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public ParticleAffectorFactory() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CParticleAffectorFactoryProxy", null);
					if (!"EarthView.World.Graphic.ParticleAffectorFactory".Equals(((Object)this).GetType().ToString()))
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_NoVirtual(IntPtr pNativeObject);

				/// <summary>
				/// 返回工厂的名字，其标识了工厂创建粒子变换器的类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetName_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_NoVirtual(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				protected  string EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Function()
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(IntPtr pNativeObject);

				/// <summary>
				/// 返回工厂的名字，其标识了工厂创建粒子变换器的类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public virtual string GetName()
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(this.NativeObject);
					
					string ret = Marshal.PtrToStringAnsi(__ptr);
					ClassFactory.FreeString(ref __ptr);
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createAffector_CallBack_CParticleAffector_CParticleSystem(IntPtr psys);

				protected createAffector_CallBack_CParticleAffector_CParticleSystem m_createAffector_CallBack_CParticleAffector_CParticleSystem;

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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_NoVirtual(IntPtr pNativeObject, IntPtr psys);

				/// <summary>
				/// 创建一个新的效果器实例
				/// </summary>
				/// <param name="psys"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleAffector CreateAffector_NoVirtual(EarthView.World.Graphic.ParticleSystem psys)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_NoVirtual(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleAffector csObj = new EarthView.World.Graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleAffector");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleAffector;
						csObj.BindNativeObject(__ptr, "CParticleAffector");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Function(IntPtr psys)
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
					
					EarthView.World.Graphic.ParticleAffector csret=CreateAffector(csobj_psys);
					
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
				private static extern IntPtr EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(IntPtr pNativeObject, IntPtr psys);

				/// <summary>
				/// 创建一个新的效果器实例
				/// </summary>
				/// <param name="psys"></param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.ParticleAffector CreateAffector(EarthView.World.Graphic.ParticleSystem psys)
				{
					IntPtr __ptr = EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(this.NativeObject, object.Equals(psys, null) ? IntPtr.Zero : psys.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ParticleAffector csObj = new EarthView.World.Graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CParticleAffector");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ParticleAffector;
						csObj.BindNativeObject(__ptr, "CParticleAffector");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void destroyAffector_CallBack_void_CParticleAffector(IntPtr e);

				protected destroyAffector_CallBack_void_CParticleAffector m_destroyAffector_CallBack_void_CParticleAffector;

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
				private static extern void EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_NoVirtual(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 销毁参数指针指向的效果器
				/// </summary>
				/// <param name="e">指向粒子效果器的指针</param>
				/// <returns></returns>
				public virtual void DestroyAffector_NoVirtual(EarthView.World.Graphic.ParticleAffector e)
				{
					EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_NoVirtual(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Function(IntPtr e)
				{
					EarthView.World.Graphic.ParticleAffector csobj_e = new EarthView.World.Graphic.ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_e.BindNativeObject(e,"CParticleAffector");
					csobj_e.Delegate = true;
					IClassFactory csobj_eClassFactory = GlobalClassFactoryMap.Get(csobj_e.GetCppInstanceTypeName());
					if (csobj_eClassFactory != null)
					{
						csobj_e.Delegate = true;
						csobj_e = csobj_eClassFactory.Create() as EarthView.World.Graphic.ParticleAffector;
						csobj_e.BindNativeObject(e, "CParticleAffector");
						csobj_e.Delegate = true;
					}
					
					DestroyAffector(csobj_e);
					
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
				private static extern void EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(IntPtr pNativeObject, IntPtr e);

				/// <summary>
				/// 销毁参数指针指向的效果器
				/// </summary>
				/// <param name="e">指向粒子效果器的指针</param>
				/// <returns></returns>
				public virtual void DestroyAffector(EarthView.World.Graphic.ParticleAffector e)
				{
					EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(this.NativeObject, object.Equals(e, null) ? IntPtr.Zero : e.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadParticleAffectorFactory = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffectorFactory", new ParticleAffectorFactoryClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CParticleAffectorFactoryProxy", new ParticleAffectorFactoryClassFactory());

				public ParticleAffectorFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(IntPtr pObject, createAffector_CallBack_CParticleAffector_CParticleSystem pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(IntPtr pObject, destroyAffector_CallBack_void_CParticleAffector pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_getName_CallBack_EVString = EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString_Function;
						GC.KeepAlive(m_getName_CallBack_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
						m_createAffector_CallBack_CParticleAffector_CParticleSystem = EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem_Function;
						GC.KeepAlive(m_createAffector_CallBack_CParticleAffector_CParticleSystem);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_createAffector_CParticleAffector_CParticleSystem(this.NativeObject, m_createAffector_CallBack_CParticleAffector_CParticleSystem);
						m_destroyAffector_CallBack_void_CParticleAffector = EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector_Function;
						GC.KeepAlive(m_destroyAffector_CallBack_void_CParticleAffector);
						EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorFactory_destroyAffector_void_CParticleAffector(this.NativeObject, m_destroyAffector_CallBack_void_CParticleAffector);
					}
				}
				public static ParticleAffectorFactory FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					ParticleAffectorFactory obj = baseObj as  ParticleAffectorFactory;
					if (object.Equals(obj, null))
					{
						obj = new ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CParticleAffectorFactory");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class ParticleAffectorFactoryClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					ParticleAffectorFactory emptyInstance = new ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
