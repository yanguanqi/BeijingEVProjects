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
			namespace OverlayElementCommands
			{
				public class CmdLeft : EarthView.World.Core.ParamCommand
				{
					public CmdLeft() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdLeftProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdLeft".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdLeft = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdLeft = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdLeft", new CmdLeftClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdLeftProxy", new CmdLeftClassFactory());

					public CmdLeft(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdLeft_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdLeft FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdLeft obj = baseObj as  CmdLeft;
						if (object.Equals(obj, null))
						{
							obj = new CmdLeft(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdLeft");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdLeftClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdLeft emptyInstance = new CmdLeft(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdTop : EarthView.World.Core.ParamCommand
				{
					public CmdTop() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdTopProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdTop".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdTop = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdTop = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdTop", new CmdTopClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdTopProxy", new CmdTopClassFactory());

					public CmdTop(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdTop_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdTop FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdTop obj = baseObj as  CmdTop;
						if (object.Equals(obj, null))
						{
							obj = new CmdTop(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdTop");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdTopClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdTop emptyInstance = new CmdTop(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdWidth : EarthView.World.Core.ParamCommand
				{
					public CmdWidth() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdWidthProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdWidth".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdWidth = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdWidth = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdWidth", new CmdWidthClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdWidthProxy", new CmdWidthClassFactory());

					public CmdWidth(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdWidth_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdWidth FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdWidth obj = baseObj as  CmdWidth;
						if (object.Equals(obj, null))
						{
							obj = new CmdWidth(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdWidth");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdWidthClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdWidth emptyInstance = new CmdWidth(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdHeight : EarthView.World.Core.ParamCommand
				{
					public CmdHeight() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdHeightProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdHeight".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdHeight = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdHeight = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdHeight", new CmdHeightClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdHeightProxy", new CmdHeightClassFactory());

					public CmdHeight(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHeight_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdHeight FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdHeight obj = baseObj as  CmdHeight;
						if (object.Equals(obj, null))
						{
							obj = new CmdHeight(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdHeight");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdHeightClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdHeight emptyInstance = new CmdHeight(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdMaterial : EarthView.World.Core.ParamCommand
				{
					public CmdMaterial() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMaterialProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdMaterial".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMaterial = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaterial = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdMaterial", new CmdMaterialClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdMaterialProxy", new CmdMaterialClassFactory());

					public CmdMaterial(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMaterial_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMaterial FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMaterial obj = baseObj as  CmdMaterial;
						if (object.Equals(obj, null))
						{
							obj = new CmdMaterial(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMaterial");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMaterialClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMaterial emptyInstance = new CmdMaterial(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdCaption : EarthView.World.Core.ParamCommand
				{
					public CmdCaption() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdCaptionProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdCaption".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdCaption = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdCaption = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdCaption", new CmdCaptionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdCaptionProxy", new CmdCaptionClassFactory());

					public CmdCaption(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdCaption_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdCaption FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdCaption obj = baseObj as  CmdCaption;
						if (object.Equals(obj, null))
						{
							obj = new CmdCaption(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdCaption");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdCaptionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdCaption emptyInstance = new CmdCaption(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdMetricsMode : EarthView.World.Core.ParamCommand
				{
					public CmdMetricsMode() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMetricsModeProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdMetricsMode".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMetricsMode = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMetricsMode = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsMode", new CmdMetricsModeClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdMetricsModeProxy", new CmdMetricsModeClassFactory());

					public CmdMetricsMode(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdMetricsMode_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMetricsMode FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMetricsMode obj = baseObj as  CmdMetricsMode;
						if (object.Equals(obj, null))
						{
							obj = new CmdMetricsMode(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMetricsMode");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMetricsModeClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMetricsMode emptyInstance = new CmdMetricsMode(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdHorizontalAlign : EarthView.World.Core.ParamCommand
				{
					public CmdHorizontalAlign() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdHorizontalAlignProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdHorizontalAlign".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdHorizontalAlign = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlign", new CmdHorizontalAlignClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdHorizontalAlignProxy", new CmdHorizontalAlignClassFactory());

					public CmdHorizontalAlign(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdHorizontalAlign_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdHorizontalAlign FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdHorizontalAlign obj = baseObj as  CmdHorizontalAlign;
						if (object.Equals(obj, null))
						{
							obj = new CmdHorizontalAlign(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdHorizontalAlign");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdHorizontalAlignClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdHorizontalAlign emptyInstance = new CmdHorizontalAlign(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdVerticalAlign : EarthView.World.Core.ParamCommand
				{
					public CmdVerticalAlign() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdVerticalAlignProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdVerticalAlign".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVerticalAlign = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlign", new CmdVerticalAlignClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdVerticalAlignProxy", new CmdVerticalAlignClassFactory());

					public CmdVerticalAlign(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVerticalAlign_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdVerticalAlign FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdVerticalAlign obj = baseObj as  CmdVerticalAlign;
						if (object.Equals(obj, null))
						{
							obj = new CmdVerticalAlign(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdVerticalAlign");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdVerticalAlignClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdVerticalAlign emptyInstance = new CmdVerticalAlign(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdVisible : EarthView.World.Core.ParamCommand
				{
					public CmdVisible() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdVisibleProxy", null);
						if (!"EarthView.World.Graphic.OverlayElementCommands.CmdVisible".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern IntPtr EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(this.NativeObject, target);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdVisible = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVisible = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdVisible", new CmdVisibleClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::OverlayElementCommands::CCmdVisibleProxy", new CmdVisibleClassFactory());

					public CmdVisible(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_OverlayElementCommands_CCmdVisible_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdVisible FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdVisible obj = baseObj as  CmdVisible;
						if (object.Equals(obj, null))
						{
							obj = new CmdVisible(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdVisible");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdVisibleClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdVisible emptyInstance = new CmdVisible(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
