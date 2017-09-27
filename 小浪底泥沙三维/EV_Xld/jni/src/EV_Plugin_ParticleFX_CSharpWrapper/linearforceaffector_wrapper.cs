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
				public class LinearForceAffector : EarthView.World.Graphic.ParticleAffector
				{
					public class CmdForceVector : EarthView.World.Core.ParamCommand
					{
						public CmdForceVector() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdForceVectorProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.LinearForceAffector+CmdForceVector".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdForceVector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector", new CmdForceVectorClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVectorProxy", new CmdForceVectorClassFactory());

						public CmdForceVector(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceVector_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdForceVector FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdForceVector obj = baseObj as  CmdForceVector;
							if (object.Equals(obj, null))
							{
								obj = new CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdForceVector");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdForceVectorClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdForceVector emptyInstance = new CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class CmdForceApp : EarthView.World.Core.ParamCommand
					{
						public CmdForceApp() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdForceAppProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.LinearForceAffector+CmdForceApp".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdForceApp = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp", new CmdForceAppClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceAppProxy", new CmdForceAppClassFactory());

						public CmdForceApp(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_CCmdForceApp_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdForceApp FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdForceApp obj = baseObj as  CmdForceApp;
							if (object.Equals(obj, null))
							{
								obj = new CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdForceApp");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdForceAppClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdForceApp emptyInstance = new CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public enum FORCEAPPLICATION
					{
										FA_AVERAGE,
										FA_ADD
					
					}

					public LinearForceAffector(EarthView.World.Graphic.ParticleSystem psys) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuepsys = new BasePtr(psys);
						list.Add("psys", valuepsys.PtrVal);
						Create("CLinearForceAffectorProxy", list);
						if (!"EarthView.World.Plugin.ParticleFX.LinearForceAffector".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

					public new void _affectParticles_NoVirtual(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
					{
						EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

					public override void _affectParticles(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
					{
						EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceVector_void_CVector3(IntPtr pNativeObject, IntPtr force);

					public void SetForceVector(EarthView.World.Spatial.Math.Vector3 force)
					{
						EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceVector_void_CVector3(this.NativeObject, object.Equals(force, null) ? IntPtr.Zero : force.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceVector_CVector3(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Vector3 GetForceVector()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceVector_CVector3(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Vector3 csObj = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CVector3");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csObj.BindNativeObject(__ptr, "CVector3");
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
					private static extern void EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceApplication_void_ForceApplication(IntPtr pNativeObject, EarthView.World.Plugin.ParticleFX.LinearForceAffector.FORCEAPPLICATION fa);

					public void SetForceApplication(EarthView.World.Plugin.ParticleFX.LinearForceAffector.FORCEAPPLICATION fa)
					{
						EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setForceApplication_void_ForceApplication(this.NativeObject, fa);
						
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
					private static extern int EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceApplication_ForceApplication(IntPtr pNativeObject);

					public EarthView.World.Plugin.ParticleFX.LinearForceAffector.FORCEAPPLICATION GetForceApplication()
					{
						int ret=EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getForceApplication_ForceApplication(this.NativeObject);
						
						return (EarthView.World.Plugin.ParticleFX.LinearForceAffector.FORCEAPPLICATION)ret;
						
					}

					private static EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVector msForceVectorCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVector MsForceVectorCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msForceVectorCmdField, null)){
								msForceVectorCmdField.NativeObject = __ptr;
								return msForceVectorCmdField;
							}
							EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVector csObj = new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVector(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdForceVector");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceVector;
								csObj.BindNativeObject(__ptr, "CCmdForceVector");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msForceVectorCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceVectorCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private static EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceApp msForceAppCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceApp MsForceAppCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msForceAppCmdField, null)){
								msForceAppCmdField.NativeObject = __ptr;
								return msForceAppCmdField;
							}
							EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceApp csObj = new EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceApp(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdForceApp");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.LinearForceAffector.CmdForceApp;
								csObj.BindNativeObject(__ptr, "CCmdForceApp");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msForceAppCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_msForceAppCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

						#else 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#elif Linux 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX.so");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

						#else 
							private static bool bLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadLinearForceAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffector", new LinearForceAffectorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CLinearForceAffectorProxy", new LinearForceAffectorClassFactory());

					public LinearForceAffector(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle(IntPtr pObject, _initParticle_CallBack_void_CParticle pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(IntPtr pObject, _affectParticles_CallBack_void_CParticleSystem_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m__initParticle_CallBack_void_CParticle = EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Function;
							GC.KeepAlive(m__initParticle_CallBack_void_CParticle);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__initParticle_void_CParticle(this.NativeObject, m__initParticle_CallBack_void_CParticle);
							m__affectParticles_CallBack_void_CParticleSystem_Real = EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Function;
							GC.KeepAlive(m__affectParticles_CallBack_void_CParticleSystem_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, m__affectParticles_CallBack_void_CParticleSystem_Real);
							m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
							GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
							m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
							GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
							m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
							GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
							m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
							GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
							m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
							GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CLinearForceAffector_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
						}
					}
					public override void _initParticle(EarthView.World.Graphic.Particle pParticle)
					{
						base._initParticle_NoVirtual(pParticle);
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
					public static LinearForceAffector FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						LinearForceAffector obj = baseObj as  LinearForceAffector;
						if (object.Equals(obj, null))
						{
							obj = new LinearForceAffector(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CLinearForceAffector");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class LinearForceAffectorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						LinearForceAffector emptyInstance = new LinearForceAffector(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
