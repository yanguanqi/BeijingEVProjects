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
				public class RotationAffector : EarthView.World.Graphic.ParticleAffector
				{
					public class CmdRotationSpeedRangeStart : EarthView.World.Core.ParamCommand
					{
						public CmdRotationSpeedRangeStart() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdRotationSpeedRangeStartProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RotationAffector+CmdRotationSpeedRangeStart".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationSpeedRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart", new CmdRotationSpeedRangeStartClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStartProxy", new CmdRotationSpeedRangeStartClassFactory());

						public CmdRotationSpeedRangeStart(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeStart_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdRotationSpeedRangeStart FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdRotationSpeedRangeStart obj = baseObj as  CmdRotationSpeedRangeStart;
							if (object.Equals(obj, null))
							{
								obj = new CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdRotationSpeedRangeStart");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdRotationSpeedRangeStartClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdRotationSpeedRangeStart emptyInstance = new CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class CmdRotationSpeedRangeEnd : EarthView.World.Core.ParamCommand
					{
						public CmdRotationSpeedRangeEnd() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdRotationSpeedRangeEndProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RotationAffector+CmdRotationSpeedRangeEnd".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationSpeedRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd", new CmdRotationSpeedRangeEndClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEndProxy", new CmdRotationSpeedRangeEndClassFactory());

						public CmdRotationSpeedRangeEnd(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationSpeedRangeEnd_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdRotationSpeedRangeEnd FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdRotationSpeedRangeEnd obj = baseObj as  CmdRotationSpeedRangeEnd;
							if (object.Equals(obj, null))
							{
								obj = new CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdRotationSpeedRangeEnd");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdRotationSpeedRangeEndClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdRotationSpeedRangeEnd emptyInstance = new CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class CmdRotationRangeStart : EarthView.World.Core.ParamCommand
					{
						public CmdRotationRangeStart() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdRotationRangeStartProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RotationAffector+CmdRotationRangeStart".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationRangeStart = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart", new CmdRotationRangeStartClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStartProxy", new CmdRotationRangeStartClassFactory());

						public CmdRotationRangeStart(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeStart_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdRotationRangeStart FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdRotationRangeStart obj = baseObj as  CmdRotationRangeStart;
							if (object.Equals(obj, null))
							{
								obj = new CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdRotationRangeStart");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdRotationRangeStartClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdRotationRangeStart emptyInstance = new CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public class CmdRotationRangeEnd : EarthView.World.Core.ParamCommand
					{
						public CmdRotationRangeEnd() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CCmdRotationRangeEndProxy", null);
							if (!"EarthView.World.Plugin.ParticleFX.RotationAffector+CmdRotationRangeEnd".Equals(((Object)this).GetType().ToString()))
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

						public new string DoGet_NoVirtual(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void_NoVirtual(this.NativeObject, target);
							
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
						private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

						public override string DoGet(IntPtr target)
						{
							IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(this.NativeObject, target);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

						public new void DoSet_NoVirtual(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
							
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
						private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

						public override void DoSet(IntPtr target, string val)
						{
							EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(this.NativeObject, target, val);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

							#else 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#elif Linux 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.so");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

							#else 
								private static bool bLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX.dll");
								private static bool csbLoadCmdRotationRangeEnd = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd", new CmdRotationRangeEndClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEndProxy", new CmdRotationRangeEndClassFactory());

						public CmdRotationRangeEnd(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
						protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
								GC.KeepAlive(m_doGet_CallBack_EVString_void);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
								m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
								GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
								m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
								GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
								EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_CCmdRotationRangeEnd_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
							}
						}
						public override bool TrySet(IntPtr target, string val, ref string reason)
						{
							return base.TrySet_NoVirtual(target,val,ref reason);
						}
						public static CmdRotationRangeEnd FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							CmdRotationRangeEnd obj = baseObj as  CmdRotationRangeEnd;
							if (object.Equals(obj, null))
							{
								obj = new CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CCmdRotationRangeEnd");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class CmdRotationRangeEndClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							CmdRotationRangeEnd emptyInstance = new CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}

					public RotationAffector(EarthView.World.Graphic.ParticleSystem psys) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuepsys = new BasePtr(psys);
						list.Add("psys", valuepsys.PtrVal);
						Create("CRotationAffectorProxy", list);
						if (!"EarthView.World.Plugin.ParticleFX.RotationAffector".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_NoVirtual(IntPtr pNativeObject, IntPtr pParticle);

					public new void _initParticle_NoVirtual(EarthView.World.Graphic.Particle pParticle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle_NoVirtual(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(IntPtr pNativeObject, IntPtr pParticle);

					public override void _initParticle(EarthView.World.Graphic.Particle pParticle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(this.NativeObject, object.Equals(pParticle, null) ? IntPtr.Zero : pParticle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

					public new void _affectParticles_NoVirtual(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real_NoVirtual(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(IntPtr pNativeObject, IntPtr pSystem, double timeElapsed);

					public override void _affectParticles(EarthView.World.Graphic.ParticleSystem pSystem, double timeElapsed)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, object.Equals(pSystem, null) ? IntPtr.Zero : pSystem.NativeObject, timeElapsed);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeStart_void_CRadian(IntPtr pNativeObject, IntPtr angle);

					public void SetRotationSpeedRangeStart(EarthView.World.Spatial.Math.Radian angle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeStart_void_CRadian(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeEnd_void_CRadian(IntPtr pNativeObject, IntPtr angle);

					public void SetRotationSpeedRangeEnd(EarthView.World.Spatial.Math.Radian angle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationSpeedRangeEnd_void_CRadian(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeStart_CRadian(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Radian GetRotationSpeedRangeStart()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeStart_CRadian(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Radian csObj = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadian");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
							csObj.BindNativeObject(__ptr, "CRadian");
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
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeEnd_CRadian(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Radian GetRotationSpeedRangeEnd()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationSpeedRangeEnd_CRadian(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Radian csObj = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadian");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
							csObj.BindNativeObject(__ptr, "CRadian");
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeStart_void_CRadian(IntPtr pNativeObject, IntPtr angle);

					public void SetRotationRangeStart(EarthView.World.Spatial.Math.Radian angle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeStart_void_CRadian(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
						
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
					private static extern void EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeEnd_void_CRadian(IntPtr pNativeObject, IntPtr angle);

					public void SetRotationRangeEnd(EarthView.World.Spatial.Math.Radian angle)
					{
						EarthView_World_Plugin_ParticleFX_CRotationAffector_setRotationRangeEnd_void_CRadian(this.NativeObject, object.Equals(angle, null) ? IntPtr.Zero : angle.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeStart_CRadian(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Radian GetRotationRangeStart()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeStart_CRadian(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Radian csObj = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadian");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
							csObj.BindNativeObject(__ptr, "CRadian");
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
					private static extern IntPtr EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeEnd_CRadian(IntPtr pNativeObject);

					public EarthView.World.Spatial.Math.Radian GetRotationRangeEnd()
					{
						IntPtr __ptr = EarthView_World_Plugin_ParticleFX_CRotationAffector_getRotationRangeEnd_CRadian(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Radian csObj = new EarthView.World.Spatial.Math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadian");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Radian;
							csObj.BindNativeObject(__ptr, "CRadian");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					private static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStart msRotationSpeedRangeStartCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStart MsRotationSpeedRangeStartCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msRotationSpeedRangeStartCmdField, null)){
								msRotationSpeedRangeStartCmdField.NativeObject = __ptr;
								return msRotationSpeedRangeStartCmdField;
							}
							EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStart csObj = new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdRotationSpeedRangeStart");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeStart;
								csObj.BindNativeObject(__ptr, "CCmdRotationSpeedRangeStart");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msRotationSpeedRangeStartCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeStartCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEnd msRotationSpeedRangeEndCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEnd MsRotationSpeedRangeEndCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msRotationSpeedRangeEndCmdField, null)){
								msRotationSpeedRangeEndCmdField.NativeObject = __ptr;
								return msRotationSpeedRangeEndCmdField;
							}
							EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEnd csObj = new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdRotationSpeedRangeEnd");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationSpeedRangeEnd;
								csObj.BindNativeObject(__ptr, "CCmdRotationSpeedRangeEnd");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msRotationSpeedRangeEndCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationSpeedRangeEndCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStart msRotationRangeStartCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStart MsRotationRangeStartCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msRotationRangeStartCmdField, null)){
								msRotationRangeStartCmdField.NativeObject = __ptr;
								return msRotationRangeStartCmdField;
							}
							EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStart csObj = new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdRotationRangeStart");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeStart;
								csObj.BindNativeObject(__ptr, "CCmdRotationRangeStart");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msRotationRangeStartCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeStartCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					private static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEnd msRotationRangeEndCmdField;
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
					private static extern IntPtr Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd( );

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
					private static extern void Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd( IntPtr value );

					public 					static EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEnd MsRotationRangeEndCmd
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd();
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(msRotationRangeEndCmdField, null)){
								msRotationRangeEndCmdField.NativeObject = __ptr;
								return msRotationRangeEndCmdField;
							}
							EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEnd csObj = new EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "CCmdRotationRangeEnd");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Plugin.ParticleFX.RotationAffector.CmdRotationRangeEnd;
								csObj.BindNativeObject(__ptr, "CCmdRotationRangeEnd");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							msRotationRangeEndCmdField = value;
							Set_EarthView_World_Plugin_ParticleFX_CRotationAffector_msRotationRangeEndCmd( object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.so");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.so");

						#else 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_d.dll");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#elif Linux 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX.so");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.so");

						#else 
							private static bool bLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX.dll");
							private static bool csbLoadRotationAffector = LoadDll.Load("EV_Plugin_ParticleFX_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffector", new RotationAffectorClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Plugin::ParticleFX::CRotationAffectorProxy", new RotationAffectorClassFactory());

					public RotationAffector(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(IntPtr pObject, _initParticle_CallBack_void_CParticle pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(IntPtr pObject, _affectParticles_CallBack_void_CParticleSystem_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(IntPtr pObject, setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList(IntPtr pObject, setParameterList_CallBack_void_CommonStringPairList pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString(IntPtr pObject, getParameter_CallBack_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface(IntPtr pObject, copyParametersTo_CallBack_void_CStringInterface pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m__initParticle_CallBack_void_CParticle = EarthView_World_Graphic_CParticleAffector__initParticle_void_CParticle_Function;
							GC.KeepAlive(m__initParticle_CallBack_void_CParticle);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__initParticle_void_CParticle(this.NativeObject, m__initParticle_CallBack_void_CParticle);
							m__affectParticles_CallBack_void_CParticleSystem_Real = EarthView_World_Graphic_CParticleAffector__affectParticles_void_CParticleSystem_Real_Function;
							GC.KeepAlive(m__affectParticles_CallBack_void_CParticleSystem_Real);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector__affectParticles_void_CParticleSystem_Real(this.NativeObject, m__affectParticles_CallBack_void_CParticleSystem_Real);
							m_setParameter_CallBack_ev_bool_EVString_EVString = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_EVString_Function;
							GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_EVString(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_EVString);
							m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool = EarthView_World_Core_CStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Function;
							GC.KeepAlive(m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameter_ev_bool_EVString_ev_bool_ev_bool(this.NativeObject, m_setParameter_CallBack_ev_bool_EVString_ev_bool_ev_bool);
							m_setParameterList_CallBack_void_CommonStringPairList = EarthView_World_Core_CStringInterface_setParameterList_void_CommonStringPairList_Function;
							GC.KeepAlive(m_setParameterList_CallBack_void_CommonStringPairList);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_setParameterList_void_CommonStringPairList(this.NativeObject, m_setParameterList_CallBack_void_CommonStringPairList);
							m_getParameter_CallBack_EVString_EVString = EarthView_World_Core_CStringInterface_getParameter_EVString_EVString_Function;
							GC.KeepAlive(m_getParameter_CallBack_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_getParameter_EVString_EVString(this.NativeObject, m_getParameter_CallBack_EVString_EVString);
							m_copyParametersTo_CallBack_void_CStringInterface = EarthView_World_Core_CStringInterface_copyParametersTo_void_CStringInterface_Function;
							GC.KeepAlive(m_copyParametersTo_CallBack_void_CStringInterface);
							EV_RegisterCallback_EarthView_World_Plugin_ParticleFX_CRotationAffector_copyParametersTo_void_CStringInterface(this.NativeObject, m_copyParametersTo_CallBack_void_CStringInterface);
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
					public static RotationAffector FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RotationAffector obj = baseObj as  RotationAffector;
						if (object.Equals(obj, null))
						{
							obj = new RotationAffector(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRotationAffector");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RotationAffectorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RotationAffector emptyInstance = new RotationAffector(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
