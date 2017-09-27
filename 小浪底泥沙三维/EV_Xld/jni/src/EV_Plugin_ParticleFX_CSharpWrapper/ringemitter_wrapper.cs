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
				public class RingEmitter : EarthView.World.Plugin.ParticleFX.AreaEmitter
				{
					public class RingEmitterCmdInnerX : EarthView.World.Core.ParamCommand
					{
						public RingEmitterCmdInnerX() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CRingEmitterCmdInnerXProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RingEmitter+RingEmitterCmdInnerX".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadRingEmitterCmdInnerX = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerX", new RingEmitterCmdInnerXClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerXProxy", new RingEmitterCmdInnerXClassFactory());

						public RingEmitterCmdInnerX(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerX_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static RingEmitterCmdInnerX FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RingEmitterCmdInnerX obj = baseObj as  RingEmitterCmdInnerX;
							if (object.Equals(obj, null))
							{
								obj = new RingEmitterCmdInnerX(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CRingEmitterCmdInnerX");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RingEmitterCmdInnerXClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RingEmitterCmdInnerX emptyInstance = new RingEmitterCmdInnerX(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class RingEmitterCmdInnerY : EarthView.World.Core.ParamCommand
					{
						public RingEmitterCmdInnerY() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CRingEmitterCmdInnerYProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RingEmitter+RingEmitterCmdInnerY".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadRingEmitterCmdInnerY = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerY", new RingEmitterCmdInnerYClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter::CRingEmitterCmdInnerYProxy", new RingEmitterCmdInnerYClassFactory());

						public RingEmitterCmdInnerY(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_CRingEmitterCmdInnerY_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static RingEmitterCmdInnerY FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RingEmitterCmdInnerY obj = baseObj as  RingEmitterCmdInnerY;
							if (object.Equals(obj, null))
							{
								obj = new RingEmitterCmdInnerY(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CRingEmitterCmdInnerY");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RingEmitterCmdInnerYClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RingEmitterCmdInnerY emptyInstance = new RingEmitterCmdInnerY(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public RingEmitter(EarthView.World.Graphic.ParticleSystem psys) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuepsys = new BasePtr(psys);
						list.Add("psys", valuepsys.PtrVal);
						Create("CRingEmitterProxy", list);
						if (!"EarthView.World.Plugin.ParticleFX.RingEmitter".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_NoVirtual(IntPtr pNativeObject, IntPtr pParticle);

					public new void _initParticle_NoVirtual(EarthView.World.Graphic.Particle pParticle)
					{
						EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle_NoVirtual(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(IntPtr pNativeObject, IntPtr pParticle);

					public override void _initParticle(EarthView.World.Graphic.Particle pParticle)
					{
						EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSize_void_Real_Real(IntPtr pNativeObject, double x, double y);

					public void SetInnerSize(double x, double y)
					{
						EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSize_void_Real_Real(this.NativeObject, x, y);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeX_void_Real(IntPtr pNativeObject, double x);

					public void SetInnerSizeX(double x)
					{
						EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeX_void_Real(this.NativeObject, x);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeY_void_Real(IntPtr pNativeObject, double y);

					public void SetInnerSizeY(double y)
					{
						EarthView_World_Plugin_ParticleFX_CRingEmitter_setInnerSizeY_void_Real(this.NativeObject, y);
						
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
					private static extern double EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeX_Real(IntPtr pNativeObject);

					public double GetInnerSizeX()
					{
						double ret=EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeX_Real(this.NativeObject);
						
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
					private static extern double EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeY_Real(IntPtr pNativeObject);

					public double GetInnerSizeY()
					{
						double ret=EarthView_World_Plugin_ParticleFX_CRingEmitter_getInnerSizeY_Real(this.NativeObject);
						
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

						#else 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#elif Linux 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX.so");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

						#else 
							private static bool bLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadRingEmitter = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitter", new RingEmitterClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRingEmitterProxy", new RingEmitterClassFactory());

					public RingEmitter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(IntPtr pObject, getStringInterfacePtr_CallBack_CParticleEmitterInternalStringInterface pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3(IntPtr pObject, genEmissionDirectionNoRandom_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3(IntPtr pObject, genEmissionDirection_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3(IntPtr pObject, genEmissionVelocity_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real(IntPtr pObject, genEmissionTTL_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue(IntPtr pObject, genEmissionColour_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real(IntPtr pObject, genConstantEmissionCount_CallBack_ev_uint16_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3(IntPtr pObject, setPosition_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3(IntPtr pObject, getPosition_CallBack_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3(IntPtr pObject, setDirection_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3(IntPtr pObject, getDirection_CallBack_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3(IntPtr pObject, setUp_CallBack_void_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3(IntPtr pObject, getUp_CallBack_CVector3 pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian(IntPtr pObject, setAngle_CallBack_void_CRadian pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian(IntPtr pObject, getAngle_CallBack_CRadian pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real(IntPtr pObject, setParticleVelocity_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real(IntPtr pObject, setParticleVelocity_CallBack_void_Real_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real(IntPtr pObject, setMinParticleVelocity_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real(IntPtr pObject, setMaxParticleVelocity_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real(IntPtr pObject, getParticleVelocity_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real(IntPtr pObject, getMinParticleVelocity_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real(IntPtr pObject, getMaxParticleVelocity_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real(IntPtr pObject, setEmissionRate_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real(IntPtr pObject, getEmissionRate_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real(IntPtr pObject, setTimeToLive_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real(IntPtr pObject, setTimeToLive_CallBack_void_Real_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real(IntPtr pObject, setMinTimeToLive_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real(IntPtr pObject, setMaxTimeToLive_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real(IntPtr pObject, getTimeToLive_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real(IntPtr pObject, getMinTimeToLive_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real(IntPtr pObject, getMaxTimeToLive_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue(IntPtr pObject, setColour_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue(IntPtr pObject, setColour_CallBack_void_CColourValue_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue(IntPtr pObject, setColourRangeStart_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue(IntPtr pObject, setColourRangeEnd_CallBack_void_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue(IntPtr pObject, getColour_CallBack_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue(IntPtr pObject, getColourRangeStart_CallBack_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue(IntPtr pObject, getColourRangeEnd_CallBack_CColourValue pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real(IntPtr pObject, _getEmissionCount_CallBack_ev_uint16_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(IntPtr pObject, _initParticle_CallBack_void_CParticle pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool(IntPtr pObject, setEnabled_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool(IntPtr pObject, getEnabled_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real(IntPtr pObject, setStartTime_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real(IntPtr pObject, getStartTime_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real(IntPtr pObject, setDuration_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real(IntPtr pObject, getDuration_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real(IntPtr pObject, setDuration_CallBack_void_Real_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real(IntPtr pObject, setMinDuration_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real(IntPtr pObject, setMaxDuration_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real(IntPtr pObject, getMinDuration_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real(IntPtr pObject, getMaxDuration_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real(IntPtr pObject, setRepeatDelay_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real(IntPtr pObject, getRepeatDelay_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real(IntPtr pObject, setRepeatDelay_CallBack_void_Real_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real(IntPtr pObject, setMinRepeatDelay_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real(IntPtr pObject, setMaxRepeatDelay_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real(IntPtr pObject, getMinRepeatDelay_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real(IntPtr pObject, getMaxRepeatDelay_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString(IntPtr pObject, setEmittedEmitter_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool(IntPtr pObject, isEmitted_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool(IntPtr pObject, setEmitted_CallBack_void_ev_bool pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getStringInterfacePtr_CallBack_CParticleEmitterInternalStringInterface = EarthView_World_Graphic_CParticleEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface_Function;
							GC.KeepAlive(m_getStringInterfacePtr_CallBack_CParticleEmitterInternalStringInterface);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStringInterfacePtr_CParticleEmitterInternalStringInterface(this.NativeObject, m_getStringInterfacePtr_CallBack_CParticleEmitterInternalStringInterface);
							m_genEmissionDirectionNoRandom_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_genEmissionDirectionNoRandom_void_CVector3_Function;
							GC.KeepAlive(m_genEmissionDirectionNoRandom_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirectionNoRandom_void_CVector3(this.NativeObject, m_genEmissionDirectionNoRandom_CallBack_void_CVector3);
							m_genEmissionDirection_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_genEmissionDirection_void_CVector3_Function;
							GC.KeepAlive(m_genEmissionDirection_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionDirection_void_CVector3(this.NativeObject, m_genEmissionDirection_CallBack_void_CVector3);
							m_genEmissionVelocity_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_genEmissionVelocity_void_CVector3_Function;
							GC.KeepAlive(m_genEmissionVelocity_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionVelocity_void_CVector3(this.NativeObject, m_genEmissionVelocity_CallBack_void_CVector3);
							m_genEmissionTTL_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_genEmissionTTL_Real_Function;
							GC.KeepAlive(m_genEmissionTTL_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionTTL_Real(this.NativeObject, m_genEmissionTTL_CallBack_Real);
							m_genEmissionColour_CallBack_void_CColourValue = EarthView_World_Graphic_CParticleEmitter_genEmissionColour_void_CColourValue_Function;
							GC.KeepAlive(m_genEmissionColour_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genEmissionColour_void_CColourValue(this.NativeObject, m_genEmissionColour_CallBack_void_CColourValue);
							m_genConstantEmissionCount_CallBack_ev_uint16_Real = EarthView_World_Graphic_CParticleEmitter_genConstantEmissionCount_ev_uint16_Real_Function;
							GC.KeepAlive(m_genConstantEmissionCount_CallBack_ev_uint16_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_genConstantEmissionCount_ev_uint16_Real(this.NativeObject, m_genConstantEmissionCount_CallBack_ev_uint16_Real);
							m_setPosition_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_setPosition_void_CVector3_Function;
							GC.KeepAlive(m_setPosition_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setPosition_void_CVector3(this.NativeObject, m_setPosition_CallBack_void_CVector3);
							m_getPosition_CallBack_CVector3 = EarthView_World_Graphic_CParticleEmitter_getPosition_CVector3_Function;
							GC.KeepAlive(m_getPosition_CallBack_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getPosition_CVector3(this.NativeObject, m_getPosition_CallBack_CVector3);
							m_setDirection_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_setDirection_void_CVector3_Function;
							GC.KeepAlive(m_setDirection_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDirection_void_CVector3(this.NativeObject, m_setDirection_CallBack_void_CVector3);
							m_getDirection_CallBack_CVector3 = EarthView_World_Graphic_CParticleEmitter_getDirection_CVector3_Function;
							GC.KeepAlive(m_getDirection_CallBack_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDirection_CVector3(this.NativeObject, m_getDirection_CallBack_CVector3);
							m_setUp_CallBack_void_CVector3 = EarthView_World_Graphic_CParticleEmitter_setUp_void_CVector3_Function;
							GC.KeepAlive(m_setUp_CallBack_void_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setUp_void_CVector3(this.NativeObject, m_setUp_CallBack_void_CVector3);
							m_getUp_CallBack_CVector3 = EarthView_World_Graphic_CParticleEmitter_getUp_CVector3_Function;
							GC.KeepAlive(m_getUp_CallBack_CVector3);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getUp_CVector3(this.NativeObject, m_getUp_CallBack_CVector3);
							m_setAngle_CallBack_void_CRadian = EarthView_World_Graphic_CParticleEmitter_setAngle_void_CRadian_Function;
							GC.KeepAlive(m_setAngle_CallBack_void_CRadian);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setAngle_void_CRadian(this.NativeObject, m_setAngle_CallBack_void_CRadian);
							m_getAngle_CallBack_CRadian = EarthView_World_Graphic_CParticleEmitter_getAngle_CRadian_Function;
							GC.KeepAlive(m_getAngle_CallBack_CRadian);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getAngle_CRadian(this.NativeObject, m_getAngle_CallBack_CRadian);
							m_setParticleVelocity_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setParticleVelocity_void_Real_Function;
							GC.KeepAlive(m_setParticleVelocity_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real(this.NativeObject, m_setParticleVelocity_CallBack_void_Real);
							m_setParticleVelocity_CallBack_void_Real_Real = EarthView_World_Graphic_CParticleEmitter_setParticleVelocity_void_Real_Real_Function;
							GC.KeepAlive(m_setParticleVelocity_CallBack_void_Real_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setParticleVelocity_void_Real_Real(this.NativeObject, m_setParticleVelocity_CallBack_void_Real_Real);
							m_setMinParticleVelocity_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMinParticleVelocity_void_Real_Function;
							GC.KeepAlive(m_setMinParticleVelocity_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinParticleVelocity_void_Real(this.NativeObject, m_setMinParticleVelocity_CallBack_void_Real);
							m_setMaxParticleVelocity_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMaxParticleVelocity_void_Real_Function;
							GC.KeepAlive(m_setMaxParticleVelocity_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxParticleVelocity_void_Real(this.NativeObject, m_setMaxParticleVelocity_CallBack_void_Real);
							m_getParticleVelocity_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getParticleVelocity_Real_Function;
							GC.KeepAlive(m_getParticleVelocity_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getParticleVelocity_Real(this.NativeObject, m_getParticleVelocity_CallBack_Real);
							m_getMinParticleVelocity_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMinParticleVelocity_Real_Function;
							GC.KeepAlive(m_getMinParticleVelocity_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinParticleVelocity_Real(this.NativeObject, m_getMinParticleVelocity_CallBack_Real);
							m_getMaxParticleVelocity_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMaxParticleVelocity_Real_Function;
							GC.KeepAlive(m_getMaxParticleVelocity_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxParticleVelocity_Real(this.NativeObject, m_getMaxParticleVelocity_CallBack_Real);
							m_setEmissionRate_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setEmissionRate_void_Real_Function;
							GC.KeepAlive(m_setEmissionRate_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmissionRate_void_Real(this.NativeObject, m_setEmissionRate_CallBack_void_Real);
							m_getEmissionRate_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getEmissionRate_Real_Function;
							GC.KeepAlive(m_getEmissionRate_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEmissionRate_Real(this.NativeObject, m_getEmissionRate_CallBack_Real);
							m_setTimeToLive_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setTimeToLive_void_Real_Function;
							GC.KeepAlive(m_setTimeToLive_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real(this.NativeObject, m_setTimeToLive_CallBack_void_Real);
							m_setTimeToLive_CallBack_void_Real_Real = EarthView_World_Graphic_CParticleEmitter_setTimeToLive_void_Real_Real_Function;
							GC.KeepAlive(m_setTimeToLive_CallBack_void_Real_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setTimeToLive_void_Real_Real(this.NativeObject, m_setTimeToLive_CallBack_void_Real_Real);
							m_setMinTimeToLive_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMinTimeToLive_void_Real_Function;
							GC.KeepAlive(m_setMinTimeToLive_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinTimeToLive_void_Real(this.NativeObject, m_setMinTimeToLive_CallBack_void_Real);
							m_setMaxTimeToLive_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMaxTimeToLive_void_Real_Function;
							GC.KeepAlive(m_setMaxTimeToLive_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxTimeToLive_void_Real(this.NativeObject, m_setMaxTimeToLive_CallBack_void_Real);
							m_getTimeToLive_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getTimeToLive_Real_Function;
							GC.KeepAlive(m_getTimeToLive_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getTimeToLive_Real(this.NativeObject, m_getTimeToLive_CallBack_Real);
							m_getMinTimeToLive_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMinTimeToLive_Real_Function;
							GC.KeepAlive(m_getMinTimeToLive_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinTimeToLive_Real(this.NativeObject, m_getMinTimeToLive_CallBack_Real);
							m_getMaxTimeToLive_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMaxTimeToLive_Real_Function;
							GC.KeepAlive(m_getMaxTimeToLive_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxTimeToLive_Real(this.NativeObject, m_getMaxTimeToLive_CallBack_Real);
							m_setColour_CallBack_void_CColourValue = EarthView_World_Graphic_CParticleEmitter_setColour_void_CColourValue_Function;
							GC.KeepAlive(m_setColour_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue(this.NativeObject, m_setColour_CallBack_void_CColourValue);
							m_setColour_CallBack_void_CColourValue_CColourValue = EarthView_World_Graphic_CParticleEmitter_setColour_void_CColourValue_CColourValue_Function;
							GC.KeepAlive(m_setColour_CallBack_void_CColourValue_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColour_void_CColourValue_CColourValue(this.NativeObject, m_setColour_CallBack_void_CColourValue_CColourValue);
							m_setColourRangeStart_CallBack_void_CColourValue = EarthView_World_Graphic_CParticleEmitter_setColourRangeStart_void_CColourValue_Function;
							GC.KeepAlive(m_setColourRangeStart_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeStart_void_CColourValue(this.NativeObject, m_setColourRangeStart_CallBack_void_CColourValue);
							m_setColourRangeEnd_CallBack_void_CColourValue = EarthView_World_Graphic_CParticleEmitter_setColourRangeEnd_void_CColourValue_Function;
							GC.KeepAlive(m_setColourRangeEnd_CallBack_void_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setColourRangeEnd_void_CColourValue(this.NativeObject, m_setColourRangeEnd_CallBack_void_CColourValue);
							m_getColour_CallBack_CColourValue = EarthView_World_Graphic_CParticleEmitter_getColour_CColourValue_Function;
							GC.KeepAlive(m_getColour_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColour_CColourValue(this.NativeObject, m_getColour_CallBack_CColourValue);
							m_getColourRangeStart_CallBack_CColourValue = EarthView_World_Graphic_CParticleEmitter_getColourRangeStart_CColourValue_Function;
							GC.KeepAlive(m_getColourRangeStart_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeStart_CColourValue(this.NativeObject, m_getColourRangeStart_CallBack_CColourValue);
							m_getColourRangeEnd_CallBack_CColourValue = EarthView_World_Graphic_CParticleEmitter_getColourRangeEnd_CColourValue_Function;
							GC.KeepAlive(m_getColourRangeEnd_CallBack_CColourValue);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getColourRangeEnd_CColourValue(this.NativeObject, m_getColourRangeEnd_CallBack_CColourValue);
							m__getEmissionCount_CallBack_ev_uint16_Real = EarthView_World_Graphic_CParticleEmitter__getEmissionCount_ev_uint16_Real_Function;
							GC.KeepAlive(m__getEmissionCount_CallBack_ev_uint16_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__getEmissionCount_ev_uint16_Real(this.NativeObject, m__getEmissionCount_CallBack_ev_uint16_Real);
							m__initParticle_CallBack_void_CParticle = EarthView_World_Graphic_CParticleEmitter__initParticle_void_CParticle_Function;
							GC.KeepAlive(m__initParticle_CallBack_void_CParticle);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter__initParticle_void_CParticle(this.NativeObject, m__initParticle_CallBack_void_CParticle);
							m_setEnabled_CallBack_void_ev_bool = EarthView_World_Graphic_CParticleEmitter_setEnabled_void_ev_bool_Function;
							GC.KeepAlive(m_setEnabled_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEnabled_void_ev_bool(this.NativeObject, m_setEnabled_CallBack_void_ev_bool);
							m_getEnabled_CallBack_ev_bool = EarthView_World_Graphic_CParticleEmitter_getEnabled_ev_bool_Function;
							GC.KeepAlive(m_getEnabled_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getEnabled_ev_bool(this.NativeObject, m_getEnabled_CallBack_ev_bool);
							m_setStartTime_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setStartTime_void_Real_Function;
							GC.KeepAlive(m_setStartTime_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setStartTime_void_Real(this.NativeObject, m_setStartTime_CallBack_void_Real);
							m_getStartTime_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getStartTime_Real_Function;
							GC.KeepAlive(m_getStartTime_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getStartTime_Real(this.NativeObject, m_getStartTime_CallBack_Real);
							m_setDuration_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setDuration_void_Real_Function;
							GC.KeepAlive(m_setDuration_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real(this.NativeObject, m_setDuration_CallBack_void_Real);
							m_getDuration_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getDuration_Real_Function;
							GC.KeepAlive(m_getDuration_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getDuration_Real(this.NativeObject, m_getDuration_CallBack_Real);
							m_setDuration_CallBack_void_Real_Real = EarthView_World_Graphic_CParticleEmitter_setDuration_void_Real_Real_Function;
							GC.KeepAlive(m_setDuration_CallBack_void_Real_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setDuration_void_Real_Real(this.NativeObject, m_setDuration_CallBack_void_Real_Real);
							m_setMinDuration_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMinDuration_void_Real_Function;
							GC.KeepAlive(m_setMinDuration_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinDuration_void_Real(this.NativeObject, m_setMinDuration_CallBack_void_Real);
							m_setMaxDuration_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMaxDuration_void_Real_Function;
							GC.KeepAlive(m_setMaxDuration_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxDuration_void_Real(this.NativeObject, m_setMaxDuration_CallBack_void_Real);
							m_getMinDuration_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMinDuration_Real_Function;
							GC.KeepAlive(m_getMinDuration_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinDuration_Real(this.NativeObject, m_getMinDuration_CallBack_Real);
							m_getMaxDuration_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMaxDuration_Real_Function;
							GC.KeepAlive(m_getMaxDuration_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxDuration_Real(this.NativeObject, m_getMaxDuration_CallBack_Real);
							m_setRepeatDelay_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setRepeatDelay_void_Real_Function;
							GC.KeepAlive(m_setRepeatDelay_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real(this.NativeObject, m_setRepeatDelay_CallBack_void_Real);
							m_getRepeatDelay_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getRepeatDelay_Real_Function;
							GC.KeepAlive(m_getRepeatDelay_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getRepeatDelay_Real(this.NativeObject, m_getRepeatDelay_CallBack_Real);
							m_setRepeatDelay_CallBack_void_Real_Real = EarthView_World_Graphic_CParticleEmitter_setRepeatDelay_void_Real_Real_Function;
							GC.KeepAlive(m_setRepeatDelay_CallBack_void_Real_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setRepeatDelay_void_Real_Real(this.NativeObject, m_setRepeatDelay_CallBack_void_Real_Real);
							m_setMinRepeatDelay_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMinRepeatDelay_void_Real_Function;
							GC.KeepAlive(m_setMinRepeatDelay_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMinRepeatDelay_void_Real(this.NativeObject, m_setMinRepeatDelay_CallBack_void_Real);
							m_setMaxRepeatDelay_CallBack_void_Real = EarthView_World_Graphic_CParticleEmitter_setMaxRepeatDelay_void_Real_Function;
							GC.KeepAlive(m_setMaxRepeatDelay_CallBack_void_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setMaxRepeatDelay_void_Real(this.NativeObject, m_setMaxRepeatDelay_CallBack_void_Real);
							m_getMinRepeatDelay_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMinRepeatDelay_Real_Function;
							GC.KeepAlive(m_getMinRepeatDelay_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMinRepeatDelay_Real(this.NativeObject, m_getMinRepeatDelay_CallBack_Real);
							m_getMaxRepeatDelay_CallBack_Real = EarthView_World_Graphic_CParticleEmitter_getMaxRepeatDelay_Real_Function;
							GC.KeepAlive(m_getMaxRepeatDelay_CallBack_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_getMaxRepeatDelay_Real(this.NativeObject, m_getMaxRepeatDelay_CallBack_Real);
							m_setName_CallBack_void_EVString = EarthView_World_Graphic_CParticleEmitter_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_setEmittedEmitter_CallBack_void_EVString = EarthView_World_Graphic_CParticleEmitter_setEmittedEmitter_void_EVString_Function;
							GC.KeepAlive(m_setEmittedEmitter_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmittedEmitter_void_EVString(this.NativeObject, m_setEmittedEmitter_CallBack_void_EVString);
							m_isEmitted_CallBack_ev_bool = EarthView_World_Graphic_CParticleEmitter_isEmitted_ev_bool_Function;
							GC.KeepAlive(m_isEmitted_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_isEmitted_ev_bool(this.NativeObject, m_isEmitted_CallBack_ev_bool);
							m_setEmitted_CallBack_void_ev_bool = EarthView_World_Graphic_CParticleEmitter_setEmitted_void_ev_bool_Function;
							GC.KeepAlive(m_setEmitted_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRingEmitter_setEmitted_void_ev_bool(this.NativeObject, m_setEmitted_CallBack_void_ev_bool);
						}
					}
					public override EarthView.World.Graphic.ParticleEmitter.ParticleEmitterInternalStringInterface GetStringInterfacePtr()
					{
						return base.GetStringInterfacePtr_NoVirtual();
					}
					protected override void GenEmissionDirectionNoRandom(ref EarthView.World.Spatial.Math.Vector3 destVector)
					{
						base.GenEmissionDirectionNoRandom_NoVirtual(ref destVector);
					}
					protected override void GenEmissionDirection(ref EarthView.World.Spatial.Math.Vector3 destVector)
					{
						base.GenEmissionDirection_NoVirtual(ref destVector);
					}
					protected override void GenEmissionVelocity(ref EarthView.World.Spatial.Math.Vector3 destVector)
					{
						base.GenEmissionVelocity_NoVirtual(ref destVector);
					}
					protected override double GenEmissionTTL()
					{
						return base.GenEmissionTTL_NoVirtual();
					}
					protected override void GenEmissionColour(ref EarthView.World.Graphic.ColourValue destColour)
					{
						base.GenEmissionColour_NoVirtual(ref destColour);
					}
					protected override ushort GenConstantEmissionCount(double timeElapsed)
					{
						return base.GenConstantEmissionCount_NoVirtual(timeElapsed);
					}
					public override void SetPosition(EarthView.World.Spatial.Math.Vector3 pos)
					{
						base.SetPosition_NoVirtual(pos);
					}
					public override EarthView.World.Spatial.Math.Vector3 GetPosition()
					{
						return base.GetPosition_NoVirtual();
					}
					public override void SetDirection(EarthView.World.Spatial.Math.Vector3 direction)
					{
						base.SetDirection_NoVirtual(direction);
					}
					public override EarthView.World.Spatial.Math.Vector3 GetDirection()
					{
						return base.GetDirection_NoVirtual();
					}
					public override void SetUp(EarthView.World.Spatial.Math.Vector3 up)
					{
						base.SetUp_NoVirtual(up);
					}
					public override EarthView.World.Spatial.Math.Vector3 GetUp()
					{
						return base.GetUp_NoVirtual();
					}
					public override void SetAngle(EarthView.World.Spatial.Math.Radian angle)
					{
						base.SetAngle_NoVirtual(angle);
					}
					public override EarthView.World.Spatial.Math.Radian GetAngle()
					{
						return base.GetAngle_NoVirtual();
					}
					public override void SetParticleVelocity(double speed)
					{
						base.SetParticleVelocity_NoVirtual(speed);
					}
					public override void SetParticleVelocity(double min, double max)
					{
						base.SetParticleVelocity_NoVirtual(min,max);
					}
					public override void SetMinParticleVelocity(double min)
					{
						base.SetMinParticleVelocity_NoVirtual(min);
					}
					public override void SetMaxParticleVelocity(double max)
					{
						base.SetMaxParticleVelocity_NoVirtual(max);
					}
					public override double GetParticleVelocity()
					{
						return base.GetParticleVelocity_NoVirtual();
					}
					public override double GetMinParticleVelocity()
					{
						return base.GetMinParticleVelocity_NoVirtual();
					}
					public override double GetMaxParticleVelocity()
					{
						return base.GetMaxParticleVelocity_NoVirtual();
					}
					public override void SetEmissionRate(double particlesPerSecond)
					{
						base.SetEmissionRate_NoVirtual(particlesPerSecond);
					}
					public override double GetEmissionRate()
					{
						return base.GetEmissionRate_NoVirtual();
					}
					public override void SetTimeToLive(double ttl)
					{
						base.SetTimeToLive_NoVirtual(ttl);
					}
					public override void SetTimeToLive(double minTtl, double maxTtl)
					{
						base.SetTimeToLive_NoVirtual(minTtl,maxTtl);
					}
					public override void SetMinTimeToLive(double min)
					{
						base.SetMinTimeToLive_NoVirtual(min);
					}
					public override void SetMaxTimeToLive(double max)
					{
						base.SetMaxTimeToLive_NoVirtual(max);
					}
					public override double GetTimeToLive()
					{
						return base.GetTimeToLive_NoVirtual();
					}
					public override double GetMinTimeToLive()
					{
						return base.GetMinTimeToLive_NoVirtual();
					}
					public override double GetMaxTimeToLive()
					{
						return base.GetMaxTimeToLive_NoVirtual();
					}
					public override void SetColour(EarthView.World.Graphic.ColourValue colour)
					{
						base.SetColour_NoVirtual(colour);
					}
					public override void SetColour(EarthView.World.Graphic.ColourValue colourStart, EarthView.World.Graphic.ColourValue colourEnd)
					{
						base.SetColour_NoVirtual(colourStart,colourEnd);
					}
					public override void SetColourRangeStart(EarthView.World.Graphic.ColourValue colour)
					{
						base.SetColourRangeStart_NoVirtual(colour);
					}
					public override void SetColourRangeEnd(EarthView.World.Graphic.ColourValue colour)
					{
						base.SetColourRangeEnd_NoVirtual(colour);
					}
					public override EarthView.World.Graphic.ColourValue GetColour()
					{
						return base.GetColour_NoVirtual();
					}
					public override EarthView.World.Graphic.ColourValue GetColourRangeStart()
					{
						return base.GetColourRangeStart_NoVirtual();
					}
					public override EarthView.World.Graphic.ColourValue GetColourRangeEnd()
					{
						return base.GetColourRangeEnd_NoVirtual();
					}
					public override ushort _getEmissionCount(double timeElapsed)
					{
						return base._getEmissionCount_NoVirtual(timeElapsed);
					}
					public override void SetEnabled(bool enabled)
					{
						base.SetEnabled_NoVirtual(enabled);
					}
					public override bool GetEnabled()
					{
						return base.GetEnabled_NoVirtual();
					}
					public override void SetStartTime(double startTime)
					{
						base.SetStartTime_NoVirtual(startTime);
					}
					public override double GetStartTime()
					{
						return base.GetStartTime_NoVirtual();
					}
					public override void SetDuration(double duration)
					{
						base.SetDuration_NoVirtual(duration);
					}
					public override double GetDuration()
					{
						return base.GetDuration_NoVirtual();
					}
					public override void SetDuration(double min, double max)
					{
						base.SetDuration_NoVirtual(min,max);
					}
					public override void SetMinDuration(double min)
					{
						base.SetMinDuration_NoVirtual(min);
					}
					public override void SetMaxDuration(double max)
					{
						base.SetMaxDuration_NoVirtual(max);
					}
					public override double GetMinDuration()
					{
						return base.GetMinDuration_NoVirtual();
					}
					public override double GetMaxDuration()
					{
						return base.GetMaxDuration_NoVirtual();
					}
					public override void SetRepeatDelay(double duration)
					{
						base.SetRepeatDelay_NoVirtual(duration);
					}
					public override double GetRepeatDelay()
					{
						return base.GetRepeatDelay_NoVirtual();
					}
					public override void SetRepeatDelay(double min, double max)
					{
						base.SetRepeatDelay_NoVirtual(min,max);
					}
					public override void SetMinRepeatDelay(double min)
					{
						base.SetMinRepeatDelay_NoVirtual(min);
					}
					public override void SetMaxRepeatDelay(double max)
					{
						base.SetMaxRepeatDelay_NoVirtual(max);
					}
					public override double GetMinRepeatDelay()
					{
						return base.GetMinRepeatDelay_NoVirtual();
					}
					public override double GetMaxRepeatDelay()
					{
						return base.GetMaxRepeatDelay_NoVirtual();
					}
					public override void SetName(string newName)
					{
						base.SetName_NoVirtual(newName);
					}
					public override void SetEmittedEmitter(string emittedEmitter)
					{
						base.SetEmittedEmitter_NoVirtual(emittedEmitter);
					}
					public override bool IsEmitted()
					{
						return base.IsEmitted_NoVirtual();
					}
					public override void SetEmitted(bool emitted)
					{
						base.SetEmitted_NoVirtual(emitted);
					}
					public static RingEmitter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RingEmitter obj = baseObj as  RingEmitter;
						if (object.Equals(obj, null))
						{
							obj = new RingEmitter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRingEmitter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RingEmitterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RingEmitter emptyInstance = new RingEmitter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
