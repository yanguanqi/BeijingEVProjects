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
			namespace EmitterCommands
			{
				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置偏离粒子发射方向最大角度参数
				/// </summary>
				public class CmdAngle : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdAngle() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdAngleProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdAngle".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的角度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的角度值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的角度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的角度值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置偏离粒子发射方向最大角度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置偏离粒子发射方向最大角度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdAngle = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdAngle = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdAngle", new CmdAngleClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdAngleProxy", new CmdAngleClassFactory());

					public CmdAngle(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdAngle_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdAngle FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdAngle obj = baseObj as  CmdAngle;
						if (object.Equals(obj, null))
						{
							obj = new CmdAngle(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdAngle");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdAngleClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdAngle emptyInstance = new CmdAngle(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射粒子颜色参数
				/// </summary>
				public class CmdColour : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdColour() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdColourProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdColour".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的颜色值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的颜色值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdColour = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColour = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColour", new CmdColourClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColourProxy", new CmdColourClassFactory());

					public CmdColour(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColour_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdColour FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdColour obj = baseObj as  CmdColour;
						if (object.Equals(obj, null))
						{
							obj = new CmdColour(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdColour");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdColourClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdColour emptyInstance = new CmdColour(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射粒子最小颜色值参数
				/// </summary>
				public class CmdColourRangeStart : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdColourRangeStart() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdColourRangeStartProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdColourRangeStart".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的最小颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最小颜色值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的最小颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最小颜色值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最小颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最小颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColourRangeStart = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStart", new CmdColourRangeStartClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColourRangeStartProxy", new CmdColourRangeStartClassFactory());

					public CmdColourRangeStart(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeStart_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdColourRangeStart FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdColourRangeStart obj = baseObj as  CmdColourRangeStart;
						if (object.Equals(obj, null))
						{
							obj = new CmdColourRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdColourRangeStart");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdColourRangeStartClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdColourRangeStart emptyInstance = new CmdColourRangeStart(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射粒子的最大颜色值参数
				/// </summary>
				public class CmdColourRangeEnd : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdColourRangeEnd() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdColourRangeEndProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdColourRangeEnd".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的最大颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最大颜色值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的最大颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最大颜色值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最大颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最大颜色值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdColourRangeEnd = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEnd", new CmdColourRangeEndClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdColourRangeEndProxy", new CmdColourRangeEndClassFactory());

					public CmdColourRangeEnd(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdColourRangeEnd_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdColourRangeEnd FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdColourRangeEnd obj = baseObj as  CmdColourRangeEnd;
						if (object.Equals(obj, null))
						{
							obj = new CmdColourRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdColourRangeEnd");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdColourRangeEndClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdColourRangeEnd emptyInstance = new CmdColourRangeEnd(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子发射方向参数
				/// </summary>
				public class CmdDirection : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdDirection() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdDirectionProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdDirection".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射方向值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射方向值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射方向值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射方向值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子发射方向值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子发射方向值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdDirection = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdDirection = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdDirection", new CmdDirectionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdDirectionProxy", new CmdDirectionClassFactory());

					public CmdDirection(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDirection_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdDirection FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdDirection obj = baseObj as  CmdDirection;
						if (object.Equals(obj, null))
						{
							obj = new CmdDirection(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdDirection");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdDirectionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdDirection emptyInstance = new CmdDirection(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class CmdUp : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdUp() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdUpProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdUp".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdUp = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdUp = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdUp", new CmdUpClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdUpProxy", new CmdUpClassFactory());

					public CmdUp(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdUp_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdUp FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdUp obj = baseObj as  CmdUp;
						if (object.Equals(obj, null))
						{
							obj = new CmdUp(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdUp");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdUpClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdUp emptyInstance = new CmdUp(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子发射速度参数
				/// </summary>
				public class CmdEmissionRate : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdEmissionRate() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdEmissionRateProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdEmissionRate".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射速度值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射速度值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子发射速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子发射速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdEmissionRate = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdEmissionRate = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdEmissionRate", new CmdEmissionRateClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdEmissionRateProxy", new CmdEmissionRateClassFactory());

					public CmdEmissionRate(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmissionRate_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdEmissionRate FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdEmissionRate obj = baseObj as  CmdEmissionRate;
						if (object.Equals(obj, null))
						{
							obj = new CmdEmissionRate(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdEmissionRate");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdEmissionRateClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdEmissionRate emptyInstance = new CmdEmissionRate(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射粒子的初始速度参数
				/// </summary>
				public class CmdVelocity : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdVelocity() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdVelocityProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdVelocity".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射粒子的初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的初始速度值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射粒子的初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的初始速度值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdVelocity", new CmdVelocityClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdVelocityProxy", new CmdVelocityClassFactory());

					public CmdVelocity(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdVelocity_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdVelocity FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdVelocity obj = baseObj as  CmdVelocity;
						if (object.Equals(obj, null))
						{
							obj = new CmdVelocity(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdVelocity");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdVelocityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdVelocity emptyInstance = new CmdVelocity(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子发射的最小初始速度参数
				/// </summary>
				public class CmdMinVelocity : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMinVelocity() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMinVelocityProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMinVelocity".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射的最小初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最小初始速度值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射的最小初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最小初始速度值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最小初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最小初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMinVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinVelocity", new CmdMinVelocityClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinVelocityProxy", new CmdMinVelocityClassFactory());

					public CmdMinVelocity(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinVelocity_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMinVelocity FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMinVelocity obj = baseObj as  CmdMinVelocity;
						if (object.Equals(obj, null))
						{
							obj = new CmdMinVelocity(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMinVelocity");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMinVelocityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMinVelocity emptyInstance = new CmdMinVelocity(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子发射的最大初始速度参数
				/// </summary>
				public class CmdMaxVelocity : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMaxVelocity() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMaxVelocityProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMaxVelocity".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射的最大初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最大初始速度值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射的最大初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的最大初始速度值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最大初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的最大初始速度值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxVelocity = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocity", new CmdMaxVelocityClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxVelocityProxy", new CmdMaxVelocityClassFactory());

					public CmdMaxVelocity(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxVelocity_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMaxVelocity FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMaxVelocity obj = baseObj as  CmdMaxVelocity;
						if (object.Equals(obj, null))
						{
							obj = new CmdMaxVelocity(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMaxVelocity");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMaxVelocityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMaxVelocity emptyInstance = new CmdMaxVelocity(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置每个粒子生存周期参数
				/// </summary>
				public class CmdTTL : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdTTL() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdTTLProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdTTL".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子生存周期值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子生存周期值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdTTL", new CmdTTLClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdTTLProxy", new CmdTTLClassFactory());

					public CmdTTL(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdTTL_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdTTL FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdTTL obj = baseObj as  CmdTTL;
						if (object.Equals(obj, null))
						{
							obj = new CmdTTL(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdTTL");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdTTLClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdTTL emptyInstance = new CmdTTL(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子的最短生存周期参数
				/// </summary>
				public class CmdMinTTL : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMinTTL() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMinTTLProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMinTTL".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子的最短生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子最短生存周期值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子的最短生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子最短生存周期值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子最短生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子最短生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMinTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinTTL", new CmdMinTTLClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinTTLProxy", new CmdMinTTLClassFactory());

					public CmdMinTTL(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinTTL_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMinTTL FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMinTTL obj = baseObj as  CmdMinTTL;
						if (object.Equals(obj, null))
						{
							obj = new CmdMinTTL(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMinTTL");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMinTTLClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMinTTL emptyInstance = new CmdMinTTL(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子的最长生存周期参数
				/// </summary>
				public class CmdMaxTTL : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMaxTTL() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMaxTTLProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMaxTTL".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子的最长生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子最长生存周期值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子的最长生存周期值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子最长生存周期值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子最长生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子最长生存周期的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMaxTTL = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxTTL = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxTTL", new CmdMaxTTLClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxTTLProxy", new CmdMaxTTLClassFactory());

					public CmdMaxTTL(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxTTL_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMaxTTL FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMaxTTL obj = baseObj as  CmdMaxTTL;
						if (object.Equals(obj, null))
						{
							obj = new CmdMaxTTL(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMaxTTL");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMaxTTLClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMaxTTL emptyInstance = new CmdMaxTTL(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置粒子发射相对于粒子系统中心的位置参数
				/// </summary>
				public class CmdPosition : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdPosition() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdPositionProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdPosition".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射相对于粒子系统中心的位置的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子发射相对于粒子系统中心的位置值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的粒子发射相对于粒子系统中心的位置的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的粒子发射相对于粒子系统中心的位置值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置粒子发射相对于粒子系统中心的位置的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置粒子发射相对于粒子系统中心的位置的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdPosition = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdPosition = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdPosition", new CmdPositionClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdPositionProxy", new CmdPositionClassFactory());

					public CmdPosition(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdPosition_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdPosition FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdPosition obj = baseObj as  CmdPosition;
						if (object.Equals(obj, null))
						{
							obj = new CmdPosition(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdPosition");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdPositionClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdPosition emptyInstance = new CmdPosition(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器持续时间参数
				/// </summary>
				public class CmdDuration : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdDuration() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdDurationProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdDuration".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器持续时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器持续时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdDuration", new CmdDurationClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdDurationProxy", new CmdDurationClassFactory());

					public CmdDuration(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdDuration_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdDuration FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdDuration obj = baseObj as  CmdDuration;
						if (object.Equals(obj, null))
						{
							obj = new CmdDuration(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdDuration");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdDurationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdDuration emptyInstance = new CmdDuration(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器最小持续时间参数
				/// </summary>
				public class CmdMinDuration : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMinDuration() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMinDurationProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMinDuration".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器最小持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器最小持续时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器最小持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器最小持续时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器最小持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器最小持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMinDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinDuration", new CmdMinDurationClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinDurationProxy", new CmdMinDurationClassFactory());

					public CmdMinDuration(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinDuration_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMinDuration FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMinDuration obj = baseObj as  CmdMinDuration;
						if (object.Equals(obj, null))
						{
							obj = new CmdMinDuration(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMinDuration");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMinDurationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMinDuration emptyInstance = new CmdMinDuration(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器最大持续时间参数
				/// </summary>
				public class CmdMaxDuration : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMaxDuration() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMaxDurationProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMaxDuration".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器最大持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器最小持续时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器最大持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器最小持续时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器最大持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器最大持续时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMaxDuration = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxDuration = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxDuration", new CmdMaxDurationClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxDurationProxy", new CmdMaxDurationClassFactory());

					public CmdMaxDuration(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxDuration_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMaxDuration FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMaxDuration obj = baseObj as  CmdMaxDuration;
						if (object.Equals(obj, null))
						{
							obj = new CmdMaxDuration(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMaxDuration");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMaxDurationClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMaxDuration emptyInstance = new CmdMaxDuration(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器重复发射间隔的时间参数
				/// </summary>
				public class CmdRepeatDelay : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdRepeatDelay() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdRepeatDelayProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdRepeatDelay".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射间隔的时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射间隔的时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射间隔的时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射间隔的时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射间隔的时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射间隔的时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelay", new CmdRepeatDelayClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdRepeatDelayProxy", new CmdRepeatDelayClassFactory());

					public CmdRepeatDelay(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdRepeatDelay_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdRepeatDelay FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdRepeatDelay obj = baseObj as  CmdRepeatDelay;
						if (object.Equals(obj, null))
						{
							obj = new CmdRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdRepeatDelay");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdRepeatDelayClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdRepeatDelay emptyInstance = new CmdRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器重复发射最小间隔时间参数
				/// </summary>
				public class CmdMinRepeatDelay : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMinRepeatDelay() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMinRepeatDelayProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMinRepeatDelay".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射最小间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射最小间隔时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射最小间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射最小间隔时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射最小间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射最小间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMinRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelay", new CmdMinRepeatDelayClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMinRepeatDelayProxy", new CmdMinRepeatDelayClassFactory());

					public CmdMinRepeatDelay(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMinRepeatDelay_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMinRepeatDelay FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMinRepeatDelay obj = baseObj as  CmdMinRepeatDelay;
						if (object.Equals(obj, null))
						{
							obj = new CmdMinRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMinRepeatDelay");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMinRepeatDelayClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMinRepeatDelay emptyInstance = new CmdMinRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器重复发射最大间隔时间参数
				/// </summary>
				public class CmdMaxRepeatDelay : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdMaxRepeatDelay() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdMaxRepeatDelayProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdMaxRepeatDelay".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射最大间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射最大间隔时间的值</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得EVString类型的发射器重复发射最大间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回EVString类型的发射器重复发射最大间隔时间的值</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射最大间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器重复发射最大间隔时间的值
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdMaxRepeatDelay = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelay", new CmdMaxRepeatDelayClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdMaxRepeatDelayProxy", new CmdMaxRepeatDelayClassFactory());

					public CmdMaxRepeatDelay(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdMaxRepeatDelay_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdMaxRepeatDelay FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdMaxRepeatDelay obj = baseObj as  CmdMaxRepeatDelay;
						if (object.Equals(obj, null))
						{
							obj = new CmdMaxRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdMaxRepeatDelay");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdMaxRepeatDelayClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdMaxRepeatDelay emptyInstance = new CmdMaxRepeatDelay(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射器名称
				/// </summary>
				public class CmdName : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdName() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdNameProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdName".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回发射器的名称</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回发射器的名称</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdName = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdName = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdName", new CmdNameClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdNameProxy", new CmdNameClassFactory());

					public CmdName(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdName_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdName FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdName obj = baseObj as  CmdName;
						if (object.Equals(obj, null))
						{
							obj = new CmdName(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdName");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdNameClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdName emptyInstance = new CmdName(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 粒子发射器的命令对象
				/// 获得/设置发射粒子的发射器名称
				/// </summary>
				public class CmdEmittedEmitter : EarthView.World.Core.ParamCommand
				{
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public CmdEmittedEmitter() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CCmdEmittedEmitterProxy", null);
						if (!"EarthView.World.Graphic.EmitterCommands.CmdEmittedEmitter".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_NoVirtual(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得发射粒子的发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回发射粒子的发射器的名称</returns>
					public new string DoGet_NoVirtual(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void_NoVirtual(this.NativeObject, target);
						
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
					private static extern IntPtr EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(IntPtr pNativeObject, IntPtr target);

					/// <summary>
					/// 获得发射粒子的发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <returns>返回发射粒子的发射器的名称</returns>
					public override string DoGet(IntPtr target)
					{
						IntPtr __ptr = EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(this.NativeObject, target);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_NoVirtual(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public new void DoSet_NoVirtual(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString_NoVirtual(this.NativeObject, target, val);
						
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
					private static extern void EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(IntPtr pNativeObject, IntPtr target, string val);

					/// <summary>
					/// 设置发射粒子的发射器的名称
					/// </summary>
					/// <param name="target"></param>
					/// <param name="val"></param>
					/// <returns></returns>
					public override void DoSet(IntPtr target, string val)
					{
						EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(this.NativeObject, target, val);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadCmdEmittedEmitter = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter", new CmdEmittedEmitterClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitterProxy", new CmdEmittedEmitterClassFactory());

					public CmdEmittedEmitter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(IntPtr pObject, doGet_CallBack_EVString_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(IntPtr pObject, doSet_CallBack_void_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString(IntPtr pObject, trySet_CallBack_ev_bool_void_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_doGet_CallBack_EVString_void = EarthView_World_Core_CParamCommand_doGet_EVString_void_Function;
							GC.KeepAlive(m_doGet_CallBack_EVString_void);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doGet_EVString_void(this.NativeObject, m_doGet_CallBack_EVString_void);
							m_doSet_CallBack_void_void_EVString = EarthView_World_Core_CParamCommand_doSet_void_void_EVString_Function;
							GC.KeepAlive(m_doSet_CallBack_void_void_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_doSet_void_void_EVString(this.NativeObject, m_doSet_CallBack_void_void_EVString);
							m_trySet_CallBack_ev_bool_void_EVString_EVString = EarthView_World_Core_CParamCommand_trySet_ev_bool_void_EVString_EVString_Function;
							GC.KeepAlive(m_trySet_CallBack_ev_bool_void_EVString_EVString);
							EV_RegisterCallback_EarthView_World_Graphic_EmitterCommands_CCmdEmittedEmitter_trySet_ev_bool_void_EVString_EVString(this.NativeObject, m_trySet_CallBack_ev_bool_void_EVString_EVString);
						}
					}
					public override bool TrySet(IntPtr target, string val, ref string reason)
					{
						return base.TrySet_NoVirtual(target,val,ref reason);
					}
					public static CmdEmittedEmitter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						CmdEmittedEmitter obj = baseObj as  CmdEmittedEmitter;
						if (object.Equals(obj, null))
						{
							obj = new CmdEmittedEmitter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CCmdEmittedEmitter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class CmdEmittedEmitterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						CmdEmittedEmitter emptyInstance = new CmdEmittedEmitter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
