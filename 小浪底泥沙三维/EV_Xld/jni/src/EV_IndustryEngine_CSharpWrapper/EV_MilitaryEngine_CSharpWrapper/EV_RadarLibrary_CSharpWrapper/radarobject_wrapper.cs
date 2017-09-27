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
		}
		namespace Geometry3D
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				/// <summary>
				/// 雷达基类
				/// </summary>
				public class RadarObject : EarthView.World.Core.BaseObject
				{
					public class RadarAlertListener : EarthView.World.Core.BaseObject
					{
						public RadarAlertListener() : base(CreatedWhenConstruct.CWC_NotToCreate)
						{
							Create("CRadarAlertListenerProxy", null);
							if (!"EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject+RadarAlertListener".Equals(((Object)this).GetType().ToString()))
							{
								this.SetCustomExtend(true);
							}
							RegisterCallBack();
							this.needDispose = true;
							GlobalTraceInfoMap.Put(this);
						}
						[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
						protected delegate void actionPerFrame_CallBack_void_CRadarObject_bool_bool(IntPtr pRadar, ref byte isInRadar, ref byte isIntersected);

						protected actionPerFrame_CallBack_void_CRadarObject_bool_bool m_actionPerFrame_CallBack_void_CRadarObject_bool_bool;

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_NoVirtual(IntPtr pNativeObject, IntPtr pRadar, ref bool isInRadar, ref bool isIntersected);

						/// <summary>
						/// 雷达告警监听方法，只有开启告警才有效
						/// </summary>
						/// <param name="pRadar">扫描雷达</param>
						/// <param name="isInRadar">是否在雷达内</param>
						/// <param name="isIntersected">扫描波瓣是否与目标相交</param>
						public virtual void ActionPerFrame_NoVirtual(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject pRadar, bool isInRadar, bool isIntersected)
						{
							EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_NoVirtual(this.NativeObject, object.Equals(pRadar, null) ? IntPtr.Zero : pRadar.NativeObject, ref isInRadar, ref isIntersected);
							
						}

						protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Function(IntPtr pRadar, ref byte isInRadar, ref byte isIntersected)
						{
							EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csobj_pRadar = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
							csobj_pRadar.BindNativeObject(pRadar,"CRadarObject");
							csobj_pRadar.Delegate = true;
							IClassFactory csobj_pRadarClassFactory = GlobalClassFactoryMap.Get(csobj_pRadar.GetCppInstanceTypeName());
							if (csobj_pRadarClassFactory != null)
							{
								csobj_pRadar.Delegate = true;
								csobj_pRadar = csobj_pRadarClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
								csobj_pRadar.BindNativeObject(pRadar, "CRadarObject");
								csobj_pRadar.Delegate = true;
							}
							bool isInRadarBool = Convert.ToBoolean(isInRadar);
							bool isIntersectedBool = Convert.ToBoolean(isIntersected);
							
							ActionPerFrame(csobj_pRadar, isInRadarBool, isIntersectedBool);
							
							isInRadar = Convert.ToByte(isInRadarBool);
							isIntersected = Convert.ToByte(isIntersectedBool);
							
						}


						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(IntPtr pNativeObject, IntPtr pRadar, ref bool isInRadar, ref bool isIntersected);

						/// <summary>
						/// 雷达告警监听方法，只有开启告警才有效
						/// </summary>
						/// <param name="pRadar">扫描雷达</param>
						/// <param name="isInRadar">是否在雷达内</param>
						/// <param name="isIntersected">扫描波瓣是否与目标相交</param>
						public virtual void ActionPerFrame(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject pRadar, bool isInRadar, bool isIntersected)
						{
							EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(this.NativeObject, object.Equals(pRadar, null) ? IntPtr.Zero : pRadar.NativeObject, ref isInRadar, ref isIntersected);
							
						}

						#if DEBUG 
							#if Windows 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_d.dll");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

							#elif Linux 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_d.so");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

							#else 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_d.dll");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

							#endif 
						#else 
							#if Windows 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary.dll");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

							#elif Linux 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary.so");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp.so");

							#else 
								private static bool bLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary.dll");
								private static bool csbLoadRadarAlertListener = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

							#endif 
						#endif 

						private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener", new RadarAlertListenerClassFactory());

						private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListenerProxy", new RadarAlertListenerClassFactory());

						public RadarAlertListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
						{
						}

						#if DEBUG 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#else 
							#if Windows 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#elif Linux 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Android 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
							#elif Apple 
								[System.Runtime.InteropServices.DllImport("__Internal")]
							#else 
								[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
							#endif 
						#endif 
						protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(IntPtr pObject, actionPerFrame_CallBack_void_CRadarObject_bool_bool pCallback);

						public override void RegisterCallBack()
						{
							if (this.NativeObject != IntPtr.Zero)
							{
								m_actionPerFrame_CallBack_void_CRadarObject_bool_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool_Function;
								GC.KeepAlive(m_actionPerFrame_CallBack_void_CRadarObject_bool_bool);
								EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_CRadarAlertListener_actionPerFrame_void_CRadarObject_bool_bool(this.NativeObject, m_actionPerFrame_CallBack_void_CRadarObject_bool_bool);
							}
						}
						public static RadarAlertListener FromBaseObject(BaseObject baseObj)
						{
							if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
								return null;
							RadarAlertListener obj = baseObj as  RadarAlertListener;
							if (object.Equals(obj, null))
							{
								obj = new RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate);
								obj.BindNativeObject(baseObj.NativeObject, "CRadarAlertListener");
								obj.IncreaseCast();
							}

							return obj;
						}
					}

					public class RadarAlertListenerClassFactory : IClassFactory
					{
						public BaseObject Create()
						{
							RadarAlertListener emptyInstance = new RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate);
							return emptyInstance;
						}
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达名称
					/// </summary>
					/// <returns>雷达名称</returns>
					public string GetName()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描波瓣名称
					/// </summary>
					/// <returns>雷达扫描波瓣名称</returns>
					public string GetScannerName()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr clone_CallBack_CRadarObject_EVString(ref IntPtr name);

					protected clone_CallBack_CRadarObject_EVString m_clone_CallBack_CRadarObject_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 克隆
					/// </summary>
					/// <param name="name">克隆对象的名称</param>
					/// <returns>雷达对象</returns>
					public virtual EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject Clone_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_NoVirtual(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csret=Clone(strname);
						
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
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 克隆
					/// </summary>
					/// <param name="name">克隆对象的名称</param>
					/// <returns>雷达对象</returns>
					public virtual EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject Clone(string name)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(this.NativeObject, name);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr appendToNode_CallBack_CSceneNode();

					protected appendToNode_CallBack_CSceneNode m_appendToNode_CallBack_CSceneNode;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 将对象挂接至节点，加入渲染队列
					/// </summary>
					/// <returns>挂接雷达的节点</returns>
					public virtual EarthView.World.Graphic.SceneNode AppendToNode_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
							csObj.BindNativeObject(__ptr, "CSceneNode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Function()
					{
						EarthView.World.Graphic.SceneNode csret=AppendToNode();
						
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
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(IntPtr pNativeObject);

					/// <summary>
					/// 将对象挂接至节点，加入渲染队列
					/// </summary>
					/// <returns>挂接雷达的节点</returns>
					public virtual EarthView.World.Graphic.SceneNode AppendToNode()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
							csObj.BindNativeObject(__ptr, "CSceneNode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree(ref double lat, ref double lon, ref double alt, IntPtr localScale, IntPtr northAngle);

					protected appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_NoVirtual(IntPtr pNativeObject, ref double lat, ref double lon, ref double alt, IntPtr localScale, IntPtr northAngle);

					/// <summary>
					/// 根据指定位置将对象挂接至节点，加入渲染队列，加入偏北角
					/// </summary>
					/// <param name="Real">指定纬度（度数）</param>
					/// <param name="Real">指定经度（度数）</param>
					/// <param name="Real">指定高度（绝对高度）</param>
					/// <param name="EarthView::World::Spatial::Math::CVector3">局部缩放系数</param>
					/// <param name="EarthView::World::Spatial::Math::CDegree">偏北角（雷达跨度角的角平分线与正北方向夹角），默认为0.0</param>
					public virtual void AppendToNodeWithNorthAngle_NoVirtual(double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Degree northAngle)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_NoVirtual(this.NativeObject, ref lat, ref lon, ref alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(northAngle, null) ? IntPtr.Zero : northAngle.NativeObject);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Function(ref double lat, ref double lon, ref double alt, IntPtr localScale, IntPtr northAngle)
					{
						EarthView.World.Spatial.Math.Vector3 csobj_localScale = new EarthView.World.Spatial.Math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_localScale.BindNativeObject(localScale,"CVector3");
						csobj_localScale.Delegate = true;
						IClassFactory csobj_localScaleClassFactory = GlobalClassFactoryMap.Get(csobj_localScale.GetCppInstanceTypeName());
						if (csobj_localScaleClassFactory != null)
						{
							csobj_localScale.Delegate = true;
							csobj_localScale = csobj_localScaleClassFactory.Create() as EarthView.World.Spatial.Math.Vector3;
							csobj_localScale.BindNativeObject(localScale, "CVector3");
							csobj_localScale.Delegate = true;
						}
						EarthView.World.Spatial.Math.Degree csobj_northAngle = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_northAngle.BindNativeObject(northAngle,"CDegree");
						csobj_northAngle.Delegate = true;
						IClassFactory csobj_northAngleClassFactory = GlobalClassFactoryMap.Get(csobj_northAngle.GetCppInstanceTypeName());
						if (csobj_northAngleClassFactory != null)
						{
							csobj_northAngle.Delegate = true;
							csobj_northAngle = csobj_northAngleClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csobj_northAngle.BindNativeObject(northAngle, "CDegree");
							csobj_northAngle.Delegate = true;
						}
						
						AppendToNodeWithNorthAngle(lat, lon, alt, csobj_localScale, csobj_northAngle);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(IntPtr pNativeObject, ref double lat, ref double lon, ref double alt, IntPtr localScale, IntPtr northAngle);

					/// <summary>
					/// 根据指定位置将对象挂接至节点，加入渲染队列，加入偏北角
					/// </summary>
					/// <param name="Real">指定纬度（度数）</param>
					/// <param name="Real">指定经度（度数）</param>
					/// <param name="Real">指定高度（绝对高度）</param>
					/// <param name="EarthView::World::Spatial::Math::CVector3">局部缩放系数</param>
					/// <param name="EarthView::World::Spatial::Math::CDegree">偏北角（雷达跨度角的角平分线与正北方向夹角），默认为0.0</param>
					public virtual void AppendToNodeWithNorthAngle(double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Degree northAngle)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(this.NativeObject, ref lat, ref lon, ref alt, object.Equals(localScale, null) ? IntPtr.Zero : localScale.NativeObject, object.Equals(northAngle, null) ? IntPtr.Zero : northAngle.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr getParentNode_CallBack_CSceneNode();

					protected getParentNode_CallBack_CSceneNode m_getParentNode_CallBack_CSceneNode;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取对象挂接至节点
					/// </summary>
					/// <returns>挂接雷达的节点</returns>
					public virtual EarthView.World.Graphic.SceneNode GetParentNode_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
							csObj.BindNativeObject(__ptr, "CSceneNode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Function()
					{
						EarthView.World.Graphic.SceneNode csret=GetParentNode();
						
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
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(IntPtr pNativeObject);

					/// <summary>
					/// 获取对象挂接至节点
					/// </summary>
					/// <returns>挂接雷达的节点</returns>
					public virtual EarthView.World.Graphic.SceneNode GetParentNode()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.SceneNode csObj = new EarthView.World.Graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSceneNode");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.SceneNode;
							csObj.BindNativeObject(__ptr, "CSceneNode");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void detachFromParentNode_CallBack_void();

					protected detachFromParentNode_CallBack_void m_detachFromParentNode_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 从对象挂接至节点移除
					/// </summary>
					public virtual void DetachFromParentNode_NoVirtual()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Function()
					{
						DetachFromParentNode();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(IntPtr pNativeObject);

					/// <summary>
					/// 从对象挂接至节点移除
					/// </summary>
					public virtual void DetachFromParentNode()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isAppended_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 对象是否已经挂接至节点
					/// </summary>
					/// <returns>是否已挂接至节点</returns>
					public bool IsAppended()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isAppended_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getType_CRadarType(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达类型
					/// </summary>
					/// <returns>雷达类型</returns>
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.CRADARTYPE GetType()
					{
						int ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getType_CRadarType(this.NativeObject);
						
						return (EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.CRADARTYPE)ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolid_CSimpleRenderableEx(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体数据
					/// </summary>
					/// <returns>雷达包络实体数据</returns>
					public EarthView.World.Geometry3D.SimpleRenderableEx GetEnvelopSolid()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolid_CSimpleRenderableEx(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
							csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrame_CSimpleRenderableEx(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络网格数据
					/// </summary>
					/// <returns>雷达包络网格数据</returns>
					public EarthView.World.Geometry3D.SimpleRenderableEx GetEnvelopFrame()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrame_CSimpleRenderableEx(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
							csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolid_CSimpleRenderableEx(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描体实体数据
					/// </summary>
					/// <returns>雷达包络扫描体实体数据</returns>
					public EarthView.World.Geometry3D.SimpleRenderableEx GetScannerSolid()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolid_CSimpleRenderableEx(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
							csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrame_CSimpleRenderableEx(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描体网格数据
					/// </summary>
					/// <returns>雷达包络扫描体网格数据</returns>
					public EarthView.World.Geometry3D.SimpleRenderableEx GetScannerFrame()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrame_CSimpleRenderableEx(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Geometry3D.SimpleRenderableEx csObj = new EarthView.World.Geometry3D.SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Geometry3D.SimpleRenderableEx;
							csObj.BindNativeObject(__ptr, "CSimpleRenderableEx");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidUnions_CRadarObject_EVString_CRadarObject_CVector3(IntPtr pNativeObject, string name, IntPtr another, IntPtr translate);

					/// <summary>
					/// 进行（A ∪ B）的操作
					/// </summary>
					/// <param name="name">分析结果对象的名称</param>
					/// <param name="another">待操作雷达对象</param>
					/// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
					/// <returns>结果几何体 </returns>	
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject EnvelopSolidUnions(string name, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another, ref  EarthView.World.Spatial.Math.Vector3 translate)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidUnions_CRadarObject_EVString_CRadarObject_CVector3(this.NativeObject, name, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidIntersect_CRadarObject_EVString_CRadarObject_CVector3(IntPtr pNativeObject, string name, IntPtr another, IntPtr translate);

					/// <summary>
					/// 进行（A ∩ B）的操作
					/// </summary>
					/// <param name="name">分析结果对象的名称</param>
					/// <param name="another">待操作雷达对象</param>
					/// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
					/// <returns>结果几何体 </returns>	
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject EnvelopSolidIntersect(string name, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another, ref  EarthView.World.Spatial.Math.Vector3 translate)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidIntersect_CRadarObject_EVString_CRadarObject_CVector3(this.NativeObject, name, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidMinus_CRadarObject_EVString_CRadarObject_CVector3(IntPtr pNativeObject, string name, IntPtr another, IntPtr translate);

					/// <summary>
					/// 进行（A - B）的操作
					/// </summary>
					/// <param name="name">分析结果对象的名称</param>
					/// <param name="another">待操作雷达对象</param>
					/// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
					/// <returns>结果几何体 </returns>	
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject EnvelopSolidMinus(string name, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another, ref  EarthView.World.Spatial.Math.Vector3 translate)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidMinus_CRadarObject_EVString_CRadarObject_CVector3(this.NativeObject, name, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidDifference_CRadarObject_EVString_CRadarObject_CVector3(IntPtr pNativeObject, string name, IntPtr another, IntPtr translate);

					/// <summary>
					/// 进行（（A ∪ B) -（A ∩ B））的操作
					/// </summary>
					/// <param name="name">分析结果对象的名称</param>
					/// <param name="another">待操作几何体</param>
					/// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
					/// <returns>结果几何体 </returns>	
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject EnvelopSolidDifference(string name, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another, ref  EarthView.World.Spatial.Math.Vector3 translate)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidDifference_CRadarObject_EVString_CRadarObject_CVector3(this.NativeObject, name, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidSliceAndClassify_void_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_CVector3(IntPtr pNativeObject, IntPtr another, IntPtr result, IntPtr sharedEdges, IntPtr translate);

					/// <summary>
					/// 用一个非封闭对象来切分雷达
					/// </summary>
					/// <param name="another">用来切分的面</param>
					/// <param name="result">切分结果，通常或包含两个结果，内部的和外部的</param>
					/// <param name="sharedEdges">两个对象相交的边缘点序列</param>
					/// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
					public void EnvelopSolidSliceAndClassify(EarthView.World.Geometry3D.SimpleRenderableEx another, ref  EarthView.World.Geometry3D.FaceWithSimpleRenderableExSet result, ref  EarthView.World.Spatial.Geometry.CoordinateSequence sharedEdges, ref  EarthView.World.Spatial.Math.Vector3 translate)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_envelopSolidSliceAndClassify_void_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_CVector3(this.NativeObject, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject, object.Equals(result, null) ? IntPtr.Zero : result.NativeObject, object.Equals(sharedEdges, null) ? IntPtr.Zero : sharedEdges.NativeObject, object.Equals(translate, null) ? IntPtr.Zero : translate.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isIntersected_CallBack_bool_CRadarObject(IntPtr another);

					protected isIntersected_CallBack_bool_CRadarObject m_isIntersected_CallBack_bool_CRadarObject;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_NoVirtual(IntPtr pNativeObject, IntPtr another);

					/// <summary>
					/// 判断指定雷达与该雷达是否相交
					/// <param name="another">待操作雷达</param>
					/// </summary>
					/// <returns>是否相交的布尔值</returns>	
					public virtual bool IsIntersected_NoVirtual(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another)
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_NoVirtual(this.NativeObject, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Function(IntPtr another)
					{
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csobj_another = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_another.BindNativeObject(another,"CRadarObject");
						csobj_another.Delegate = true;
						IClassFactory csobj_anotherClassFactory = GlobalClassFactoryMap.Get(csobj_another.GetCppInstanceTypeName());
						if (csobj_anotherClassFactory != null)
						{
							csobj_another.Delegate = true;
							csobj_another = csobj_anotherClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csobj_another.BindNativeObject(another, "CRadarObject");
							csobj_another.Delegate = true;
						}
						
						bool csret=IsIntersected(csobj_another);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(IntPtr pNativeObject, IntPtr another);

					/// <summary>
					/// 判断指定雷达与该雷达是否相交
					/// <param name="another">待操作雷达</param>
					/// </summary>
					/// <returns>是否相交的布尔值</returns>	
					public virtual bool IsIntersected(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another)
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(this.NativeObject, object.Equals(another, null) ? IntPtr.Zero : another.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isIntersected_CallBack_bool_CCurve(IntPtr curve);

					protected isIntersected_CallBack_bool_CCurve m_isIntersected_CallBack_bool_CCurve;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_NoVirtual(IntPtr pNativeObject, IntPtr curve);

					/// <summary>
					/// 判断线与雷达是否相交
					/// <param name="curve">线对象</param>
					/// </summary>
					/// <returns>返回是否相交的布尔值</returns>
					public virtual bool IsIntersected_NoVirtual(EarthView.World.Spatial.Geometry.Curve curve)
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_NoVirtual(this.NativeObject, object.Equals(curve, null) ? IntPtr.Zero : curve.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Function(IntPtr curve)
					{
						EarthView.World.Spatial.Geometry.Curve csobj_curve = new EarthView.World.Spatial.Geometry.Curve(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_curve.BindNativeObject(curve,"CCurve");
						csobj_curve.Delegate = true;
						IClassFactory csobj_curveClassFactory = GlobalClassFactoryMap.Get(csobj_curve.GetCppInstanceTypeName());
						if (csobj_curveClassFactory != null)
						{
							csobj_curve.Delegate = true;
							csobj_curve = csobj_curveClassFactory.Create() as EarthView.World.Spatial.Geometry.Curve;
							csobj_curve.BindNativeObject(curve, "CCurve");
							csobj_curve.Delegate = true;
						}
						
						bool csret=IsIntersected(csobj_curve);
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(IntPtr pNativeObject, IntPtr curve);

					/// <summary>
					/// 判断线与雷达是否相交
					/// <param name="curve">线对象</param>
					/// </summary>
					/// <returns>返回是否相交的布尔值</returns>
					public virtual bool IsIntersected(EarthView.World.Spatial.Geometry.Curve curve)
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(this.NativeObject, object.Equals(curve, null) ? IntPtr.Zero : curve.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate int containsVertex_CallBack_EVPointWithinType_CPoint(IntPtr point);

					protected containsVertex_CallBack_EVPointWithinType_CPoint m_containsVertex_CallBack_EVPointWithinType_CPoint;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_NoVirtual(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 判断点与雷达的关系
					/// <param name="point">点的x坐标</param>
					/// </summary>
					/// <returns>返回关系枚举</returns>
					public virtual EarthView.World.Geometry3D.EVPOINTWITHINTYPE ContainsVertex_NoVirtual(EarthView.World.Spatial.Geometry.Point point)
					{
						int ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_NoVirtual(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return (EarthView.World.Geometry3D.EVPOINTWITHINTYPE)ret;
						
					}

					protected  int EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Function(IntPtr point)
					{
						EarthView.World.Spatial.Geometry.Point csobj_point = new EarthView.World.Spatial.Geometry.Point(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_point.BindNativeObject(point,"CPoint");
						csobj_point.Delegate = true;
						IClassFactory csobj_pointClassFactory = GlobalClassFactoryMap.Get(csobj_point.GetCppInstanceTypeName());
						if (csobj_pointClassFactory != null)
						{
							csobj_point.Delegate = true;
							csobj_point = csobj_pointClassFactory.Create() as EarthView.World.Spatial.Geometry.Point;
							csobj_point.BindNativeObject(point, "CPoint");
							csobj_point.Delegate = true;
						}
						
						EarthView.World.Geometry3D.EVPOINTWITHINTYPE csret=ContainsVertex(csobj_point);
						
						return (int)csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern int EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(IntPtr pNativeObject, IntPtr point);

					/// <summary>
					/// 判断点与雷达的关系
					/// <param name="point">点的x坐标</param>
					/// </summary>
					/// <returns>返回关系枚举</returns>
					public virtual EarthView.World.Geometry3D.EVPOINTWITHINTYPE ContainsVertex(EarthView.World.Spatial.Geometry.Point point)
					{
						int ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(this.NativeObject, object.Equals(point, null) ? IntPtr.Zero : point.NativeObject);
						
						return (EarthView.World.Geometry3D.EVPOINTWITHINTYPE)ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void build_CallBack_void();

					protected build_CallBack_void m_build_CallBack_void;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 创建可渲染数据
					/// </summary>
					public virtual void Build_NoVirtual()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_NoVirtual(this.NativeObject);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Function()
					{
						Build();
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(IntPtr pNativeObject);

					/// <summary>
					/// 创建可渲染数据
					/// </summary>
					public virtual void Build()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(this.NativeObject);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setVisible_CallBack_void_ev_bool(ref byte value);

					protected setVisible_CallBack_void_ev_bool m_setVisible_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置雷达是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetVisible_NoVirtual(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_NoVirtual(this.NativeObject, ref value);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Function(ref byte value)
					{
						bool valueBool = Convert.ToBoolean(value);
						
						SetVisible(valueBool);
						
						value = Convert.ToByte(valueBool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置雷达是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetVisible(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(this.NativeObject, ref value);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getVisible_CallBack_ev_bool();

					protected getVisible_CallBack_ev_bool m_getVisible_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达是否显示
					/// </summary>
					/// <returns>雷达是否显示，只有当雷达所有部分都不现实是才返回false</returns>
					public virtual bool GetVisible_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Function()
					{
						bool csret=GetVisible();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达是否显示
					/// </summary>
					/// <returns>雷达是否显示，只有当雷达所有部分都不现实是才返回false</returns>
					public virtual bool GetVisible()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEnvelopSolidVisible_CallBack_void_ev_bool(ref byte value);

					protected setEnvelopSolidVisible_CallBack_void_ev_bool m_setEnvelopSolidVisible_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置包络实体是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetEnvelopSolidVisible_NoVirtual(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_NoVirtual(this.NativeObject, ref value);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Function(ref byte value)
					{
						bool valueBool = Convert.ToBoolean(value);
						
						SetEnvelopSolidVisible(valueBool);
						
						value = Convert.ToByte(valueBool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置包络实体是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetEnvelopSolidVisible(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(this.NativeObject, ref value);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getEnvelopSolidVisible_CallBack_ev_bool();

					protected getEnvelopSolidVisible_CallBack_ev_bool m_getEnvelopSolidVisible_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetEnvelopSolidVisible_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Function()
					{
						bool csret=GetEnvelopSolidVisible();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetEnvelopSolidVisible()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEnvelopFrameVisible_CallBack_void_ev_bool(ref byte value);

					protected setEnvelopFrameVisible_CallBack_void_ev_bool m_setEnvelopFrameVisible_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置包络网格是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetEnvelopFrameVisible_NoVirtual(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_NoVirtual(this.NativeObject, ref value);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Function(ref byte value)
					{
						bool valueBool = Convert.ToBoolean(value);
						
						SetEnvelopFrameVisible(valueBool);
						
						value = Convert.ToByte(valueBool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置包络网格是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetEnvelopFrameVisible(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(this.NativeObject, ref value);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getEnvelopFrameVisible_CallBack_ev_bool();

					protected getEnvelopFrameVisible_CallBack_ev_bool m_getEnvelopFrameVisible_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetEnvelopFrameVisible_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Function()
					{
						bool csret=GetEnvelopFrameVisible();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetEnvelopFrameVisible()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setScannerSolidVisible_CallBack_void_ev_bool(ref byte value);

					protected setScannerSolidVisible_CallBack_void_ev_bool m_setScannerSolidVisible_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置扫描实体是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetScannerSolidVisible_NoVirtual(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_NoVirtual(this.NativeObject, ref value);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Function(ref byte value)
					{
						bool valueBool = Convert.ToBoolean(value);
						
						SetScannerSolidVisible(valueBool);
						
						value = Convert.ToByte(valueBool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置扫描实体是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetScannerSolidVisible(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(this.NativeObject, ref value);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getScannerSolidVisible_CallBack_ev_bool();

					protected getScannerSolidVisible_CallBack_ev_bool m_getScannerSolidVisible_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetScannerSolidVisible_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Function()
					{
						bool csret=GetScannerSolidVisible();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetScannerSolidVisible()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setScannerFrameVisible_CallBack_void_ev_bool(ref byte value);

					protected setScannerFrameVisible_CallBack_void_ev_bool m_setScannerFrameVisible_CallBack_void_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_NoVirtual(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置扫描实体网格是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetScannerFrameVisible_NoVirtual(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_NoVirtual(this.NativeObject, ref value);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Function(ref byte value)
					{
						bool valueBool = Convert.ToBoolean(value);
						
						SetScannerFrameVisible(valueBool);
						
						value = Convert.ToByte(valueBool);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 设置扫描实体网格是否显示
					/// </summary>
					/// <param name="value">是否显示</param>
					public virtual void SetScannerFrameVisible(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(this.NativeObject, ref value);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getScannerFrameVisible_CallBack_ev_bool();

					protected getScannerFrameVisible_CallBack_ev_bool m_getScannerFrameVisible_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体网格是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetScannerFrameVisible_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Function()
					{
						bool csret=GetScannerFrameVisible();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体网格是否显示
					/// </summary>
					/// <returns>是否显示</returns>
					public virtual bool GetScannerFrameVisible()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void fromFile_CallBack_void_EVString(ref IntPtr fileName);

					protected fromFile_CallBack_void_EVString m_fromFile_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_NoVirtual(IntPtr pNativeObject, string fileName);

					/// <summary>
					/// 加载XML文件
					/// </summary>
					/// <param name="fileName">文件名</param>
					public virtual void FromFile_NoVirtual(string fileName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_NoVirtual(this.NativeObject, fileName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Function(ref IntPtr fileName)
					{
						string strfileName= Marshal.PtrToStringAnsi(fileName);
						ClassFactory.FreeString(ref fileName);
						
						FromFile(strfileName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(IntPtr pNativeObject, string fileName);

					/// <summary>
					/// 加载XML文件
					/// </summary>
					/// <param name="fileName">文件名</param>
					public virtual void FromFile(string fileName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(this.NativeObject, fileName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void toFile_CallBack_void_EVString(ref IntPtr fileName);

					protected toFile_CallBack_void_EVString m_toFile_CallBack_void_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_NoVirtual(IntPtr pNativeObject, string fileName);

					/// <summary>
					/// 生成XML文件
					/// </summary>
					/// <param name="fileName">文件名</param>
					public virtual void ToFile_NoVirtual(string fileName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_NoVirtual(this.NativeObject, fileName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Function(ref IntPtr fileName)
					{
						string strfileName= Marshal.PtrToStringAnsi(fileName);
						ClassFactory.FreeString(ref fileName);
						
						ToFile(strfileName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(IntPtr pNativeObject, string fileName);

					/// <summary>
					/// 生成XML文件
					/// </summary>
					/// <param name="fileName">文件名</param>
					public virtual void ToFile(string fileName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(this.NativeObject, fileName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte getRadarAlertResult_CallBack_ev_bool();

					protected getRadarAlertResult_CallBack_ev_bool m_getRadarAlertResult_CallBack_ev_bool;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 得到雷达告警结果
					/// </summary>
					/// <returns>雷达告警结果 </returns>	
					public virtual bool GetRadarAlertResult_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_NoVirtual(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Function()
					{
						bool csret=GetRadarAlertResult();
						
						return Convert.ToByte(csret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 得到雷达告警结果
					/// </summary>
					/// <returns>雷达告警结果 </returns>	
					public virtual bool GetRadarAlertResult()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEnvelopSolidMaterial_CallBack_void_EVString_EVString(ref IntPtr materialName, ref IntPtr groupName);

					protected setEnvelopSolidMaterial_CallBack_void_EVString_EVString m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达包络实体材质名
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetEnvelopSolidMaterial_NoVirtual(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_NoVirtual(this.NativeObject, materialName, groupName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Function(ref IntPtr materialName, ref IntPtr groupName)
					{
						string strmaterialName= Marshal.PtrToStringAnsi(materialName);
						ClassFactory.FreeString(ref materialName);
						string strgroupName= Marshal.PtrToStringAnsi(groupName);
						ClassFactory.FreeString(ref groupName);
						
						SetEnvelopSolidMaterial(strmaterialName,strgroupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达包络实体材质名
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetEnvelopSolidMaterial(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(this.NativeObject, materialName, groupName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setEnvelopFrameMaterial_CallBack_void_EVString_EVString(ref IntPtr materialName, ref IntPtr groupName);

					protected setEnvelopFrameMaterial_CallBack_void_EVString_EVString m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达包络网格材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetEnvelopFrameMaterial_NoVirtual(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_NoVirtual(this.NativeObject, materialName, groupName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Function(ref IntPtr materialName, ref IntPtr groupName)
					{
						string strmaterialName= Marshal.PtrToStringAnsi(materialName);
						ClassFactory.FreeString(ref materialName);
						string strgroupName= Marshal.PtrToStringAnsi(groupName);
						ClassFactory.FreeString(ref groupName);
						
						SetEnvelopFrameMaterial(strmaterialName,strgroupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达包络网格材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetEnvelopFrameMaterial(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(this.NativeObject, materialName, groupName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setScannerSolidMaterial_CallBack_void_EVString_EVString(ref IntPtr materialName, ref IntPtr groupName);

					protected setScannerSolidMaterial_CallBack_void_EVString_EVString m_setScannerSolidMaterial_CallBack_void_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达扫描实体材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetScannerSolidMaterial_NoVirtual(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_NoVirtual(this.NativeObject, materialName, groupName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Function(ref IntPtr materialName, ref IntPtr groupName)
					{
						string strmaterialName= Marshal.PtrToStringAnsi(materialName);
						ClassFactory.FreeString(ref materialName);
						string strgroupName= Marshal.PtrToStringAnsi(groupName);
						ClassFactory.FreeString(ref groupName);
						
						SetScannerSolidMaterial(strmaterialName,strgroupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达扫描实体材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetScannerSolidMaterial(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(this.NativeObject, materialName, groupName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setScannerFrameMaterial_CallBack_void_EVString_EVString(ref IntPtr materialName, ref IntPtr groupName);

					protected setScannerFrameMaterial_CallBack_void_EVString_EVString m_setScannerFrameMaterial_CallBack_void_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_NoVirtual(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达扫描网格材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetScannerFrameMaterial_NoVirtual(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_NoVirtual(this.NativeObject, materialName, groupName);
						
					}

					protected  void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Function(ref IntPtr materialName, ref IntPtr groupName)
					{
						string strmaterialName= Marshal.PtrToStringAnsi(materialName);
						ClassFactory.FreeString(ref materialName);
						string strgroupName= Marshal.PtrToStringAnsi(groupName);
						ClassFactory.FreeString(ref groupName);
						
						SetScannerFrameMaterial(strmaterialName,strgroupName);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(IntPtr pNativeObject, string materialName, string groupName);

					/// <summary>
					/// 设置雷达扫描网格材质名称
					/// </summary>
					/// <param name="materialName">材质名称</param>
					public virtual void SetScannerFrameMaterial(string materialName, string groupName)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(this.NativeObject, materialName, groupName);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getRadarMaterialResourceGroup_CallBack_EVString();

					protected getRadarMaterialResourceGroup_CallBack_EVString m_getRadarMaterialResourceGroup_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达材质资源组名称
					/// </summary>
					/// <returns>雷达材质资源组名称 </returns>	
					public virtual string GetRadarMaterialResourceGroup_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Function()
					{
						string csret=GetRadarMaterialResourceGroup();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达材质资源组名称
					/// </summary>
					/// <returns>雷达材质资源组名称 </returns>	
					public virtual string GetRadarMaterialResourceGroup()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getEnvelopSolidMaterial_CallBack_EVString();

					protected getEnvelopSolidMaterial_CallBack_EVString m_getEnvelopSolidMaterial_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体材质名称
					/// </summary>
					/// <returns>雷达包络实体材质名称</returns>
					public virtual string GetEnvelopSolidMaterial_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Function()
					{
						string csret=GetEnvelopSolidMaterial();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络实体材质名称
					/// </summary>
					/// <returns>雷达包络实体材质名称</returns>
					public virtual string GetEnvelopSolidMaterial()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getEnvelopFrameMaterial_CallBack_EVString();

					protected getEnvelopFrameMaterial_CallBack_EVString m_getEnvelopFrameMaterial_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络网格材质名称
					/// </summary>
					/// <returns>雷达包络网格材质名称</returns>
					public virtual string GetEnvelopFrameMaterial_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Function()
					{
						string csret=GetEnvelopFrameMaterial();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达包络网格材质名称
					/// </summary>
					/// <returns>雷达包络网格材质名称</returns>
					public virtual string GetEnvelopFrameMaterial()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getScannerSolidMaterial_CallBack_EVString();

					protected getScannerSolidMaterial_CallBack_EVString m_getScannerSolidMaterial_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体材质名称
					/// </summary>
					/// <returns>雷达扫描实体材质名称</returns>
					public virtual string GetScannerSolidMaterial_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Function()
					{
						string csret=GetScannerSolidMaterial();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描实体材质名称
					/// </summary>
					/// <returns>雷达扫描实体材质名称</returns>
					public virtual string GetScannerSolidMaterial()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getScannerFrameMaterial_CallBack_EVString();

					protected getScannerFrameMaterial_CallBack_EVString m_getScannerFrameMaterial_CallBack_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描网格材质名称
					/// </summary>
					/// <returns>雷达扫描网格材质名称</returns>
					public virtual string GetScannerFrameMaterial_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Function()
					{
						string csret=GetScannerFrameMaterial();
						
						return csret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达扫描网格材质名称
					/// </summary>
					/// <returns>雷达扫描网格材质名称</returns>
					public virtual string GetScannerFrameMaterial()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setRadarAlertListener_void_CRadarAlertListener(IntPtr pNativeObject, IntPtr ref_pListener);

					/// <summary>
					/// 设置雷达告警监听
					/// </summary>
					/// <param name="ref_pListener">雷达告警监听</param>
					public void SetRadarAlertListener(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListener ref_pListener)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setRadarAlertListener_void_CRadarAlertListener(this.NativeObject, object.Equals(ref_pListener, null) ? IntPtr.Zero : ref_pListener.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertListener_CRadarAlertListener(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达告警监听对象
					/// </summary>
					/// <returns>雷达告警监听对象</returns>
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListener GetRadarAlertListener()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertListener_CRadarAlertListener(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListener csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListener(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarAlertListener");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject.RadarAlertListener;
							csObj.BindNativeObject(__ptr, "CRadarAlertListener");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setNeedAlert_void_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 获取是否进行雷达告警
					/// </summary>
					public void SetNeedAlert(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setNeedAlert_void_bool(this.NativeObject, ref value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getNeedAlert_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取是否进行雷达告警
					/// </summary>
					/// <returns>是否告警</returns>
					public bool GetNeedAlert()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getNeedAlert_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getLockScannerToTarget_bool(IntPtr pNativeObject);

					/// <summary>
					/// 开启雷达告警情况下，扫描体是否锁定目标
					/// </summary>
					/// <returns>是否锁定</returns>
					public bool GetLockScannerToTarget()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getLockScannerToTarget_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setLockScannerToTarget_void_bool(IntPtr pNativeObject, ref bool value);

					/// <summary>
					/// 开启雷达告警情况下，扫描体是否锁定目标
					/// </summary>
					public void SetLockScannerToTarget(bool value)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setLockScannerToTarget_void_bool(this.NativeObject, ref value);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setModelObjectPosition_void_CVector3(IntPtr pNativeObject, IntPtr pos);

					/// <summary>
					/// 设置模型位置
					/// </summary>
					public void SetModelObjectPosition(EarthView.World.Spatial.Math.Vector3 pos)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setModelObjectPosition_void_CVector3(this.NativeObject, object.Equals(pos, null) ? IntPtr.Zero : pos.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarCharacter_CRadarCharacter(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达特征对象
					/// </summary>
					/// <returns>雷达特征对象</returns>
					public EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter GetRadarCharacter()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarCharacter_CRadarCharacter(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarCharacter");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter;
							csObj.BindNativeObject(__ptr, "CRadarCharacter");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate IntPtr computeTerrainShade_CallBack_CRadarObject_EVString_EVString(ref IntPtr name, ref IntPtr nodeName);

					protected computeTerrainShade_CallBack_CRadarObject_EVString_EVString m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString;

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string nodeName);

					/// <summary>
					/// 计算雷达遮蔽
					/// </summary>
					/// <param name="name">雷达对象名</param>
					/// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
					/// <returns>遮蔽计算后生成的雷达对象</returns>
					public virtual EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject ComputeTerrainShade_NoVirtual(string name, string nodeName)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(this.NativeObject, name, nodeName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}

					protected  IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Function(ref IntPtr name, ref IntPtr nodeName)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						string strnodeName= Marshal.PtrToStringAnsi(nodeName);
						ClassFactory.FreeString(ref nodeName);
						
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csret=ComputeTerrainShade(strname,strnodeName);
						
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
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(IntPtr pNativeObject, string name, string nodeName);

					/// <summary>
					/// 计算雷达遮蔽
					/// </summary>
					/// <param name="name">雷达对象名</param>
					/// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
					/// <returns>遮蔽计算后生成的雷达对象</returns>
					public virtual EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject ComputeTerrainShade(string name, string nodeName)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(this.NativeObject, name, nodeName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarObject");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject;
							csObj.BindNativeObject(__ptr, "CRadarObject");
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_refresh_void(IntPtr pNativeObject);

					/// <summary>
					/// 重新设置EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter后更新雷达
					/// </summary>
					public void Refresh()
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_refresh_void(this.NativeObject);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_convertToMesh_CMeshPtr_EVString_EVString(IntPtr pNativeObject, string meshName, string groupName);

					public EarthView.World.Graphic.MeshPtr ConvertToMesh(string meshName, string groupName)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_convertToMesh_CMeshPtr_EVString_EVString(this.NativeObject, meshName, groupName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.MeshPtr csObj = new EarthView.World.Graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CMeshPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshPtr;
							csObj.BindNativeObject(__ptr, "CMeshPtr");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadRadarObject = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadRadarObject = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject", new RadarObjectClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObjectProxy", new RadarObjectClassFactory());

					public RadarObject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(IntPtr pObject, clone_CallBack_CRadarObject_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(IntPtr pObject, appendToNode_CallBack_CSceneNode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(IntPtr pObject, appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(IntPtr pObject, getParentNode_CallBack_CSceneNode pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(IntPtr pObject, detachFromParentNode_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(IntPtr pObject, isIntersected_CallBack_bool_CRadarObject pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(IntPtr pObject, isIntersected_CallBack_bool_CCurve pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(IntPtr pObject, containsVertex_CallBack_EVPointWithinType_CPoint pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(IntPtr pObject, build_CallBack_void pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(IntPtr pObject, setEnvelopSolidVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(IntPtr pObject, getEnvelopSolidVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(IntPtr pObject, setEnvelopFrameVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(IntPtr pObject, getEnvelopFrameVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(IntPtr pObject, setScannerSolidVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(IntPtr pObject, getScannerSolidVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(IntPtr pObject, setScannerFrameVisible_CallBack_void_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(IntPtr pObject, getScannerFrameVisible_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(IntPtr pObject, fromFile_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(IntPtr pObject, toFile_CallBack_void_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(IntPtr pObject, getRadarAlertResult_CallBack_ev_bool pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(IntPtr pObject, setEnvelopSolidMaterial_CallBack_void_EVString_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(IntPtr pObject, setEnvelopFrameMaterial_CallBack_void_EVString_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(IntPtr pObject, setScannerSolidMaterial_CallBack_void_EVString_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(IntPtr pObject, setScannerFrameMaterial_CallBack_void_EVString_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(IntPtr pObject, getRadarMaterialResourceGroup_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(IntPtr pObject, getEnvelopSolidMaterial_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(IntPtr pObject, getEnvelopFrameMaterial_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(IntPtr pObject, getScannerSolidMaterial_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(IntPtr pObject, getScannerFrameMaterial_CallBack_EVString pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_RadarLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(IntPtr pObject, computeTerrainShade_CallBack_CRadarObject_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_clone_CallBack_CRadarObject_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Function;
							GC.KeepAlive(m_clone_CallBack_CRadarObject_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString(this.NativeObject, m_clone_CallBack_CRadarObject_EVString);
							m_appendToNode_CallBack_CSceneNode = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Function;
							GC.KeepAlive(m_appendToNode_CallBack_CSceneNode);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode(this.NativeObject, m_appendToNode_CallBack_CSceneNode);
							m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Function;
							GC.KeepAlive(m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(this.NativeObject, m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree);
							m_getParentNode_CallBack_CSceneNode = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Function;
							GC.KeepAlive(m_getParentNode_CallBack_CSceneNode);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode(this.NativeObject, m_getParentNode_CallBack_CSceneNode);
							m_detachFromParentNode_CallBack_void = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Function;
							GC.KeepAlive(m_detachFromParentNode_CallBack_void);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void(this.NativeObject, m_detachFromParentNode_CallBack_void);
							m_isIntersected_CallBack_bool_CRadarObject = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Function;
							GC.KeepAlive(m_isIntersected_CallBack_bool_CRadarObject);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject(this.NativeObject, m_isIntersected_CallBack_bool_CRadarObject);
							m_isIntersected_CallBack_bool_CCurve = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Function;
							GC.KeepAlive(m_isIntersected_CallBack_bool_CCurve);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve(this.NativeObject, m_isIntersected_CallBack_bool_CCurve);
							m_containsVertex_CallBack_EVPointWithinType_CPoint = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Function;
							GC.KeepAlive(m_containsVertex_CallBack_EVPointWithinType_CPoint);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint(this.NativeObject, m_containsVertex_CallBack_EVPointWithinType_CPoint);
							m_build_CallBack_void = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Function;
							GC.KeepAlive(m_build_CallBack_void);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void(this.NativeObject, m_build_CallBack_void);
							m_setVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
							m_getVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Function;
							GC.KeepAlive(m_getVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
							m_setEnvelopSolidVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setEnvelopSolidVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool(this.NativeObject, m_setEnvelopSolidVisible_CallBack_void_ev_bool);
							m_getEnvelopSolidVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Function;
							GC.KeepAlive(m_getEnvelopSolidVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool(this.NativeObject, m_getEnvelopSolidVisible_CallBack_ev_bool);
							m_setEnvelopFrameVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setEnvelopFrameVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool(this.NativeObject, m_setEnvelopFrameVisible_CallBack_void_ev_bool);
							m_getEnvelopFrameVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Function;
							GC.KeepAlive(m_getEnvelopFrameVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool(this.NativeObject, m_getEnvelopFrameVisible_CallBack_ev_bool);
							m_setScannerSolidVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setScannerSolidVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool(this.NativeObject, m_setScannerSolidVisible_CallBack_void_ev_bool);
							m_getScannerSolidVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Function;
							GC.KeepAlive(m_getScannerSolidVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool(this.NativeObject, m_getScannerSolidVisible_CallBack_ev_bool);
							m_setScannerFrameVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setScannerFrameVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool(this.NativeObject, m_setScannerFrameVisible_CallBack_void_ev_bool);
							m_getScannerFrameVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Function;
							GC.KeepAlive(m_getScannerFrameVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool(this.NativeObject, m_getScannerFrameVisible_CallBack_ev_bool);
							m_fromFile_CallBack_void_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Function;
							GC.KeepAlive(m_fromFile_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString(this.NativeObject, m_fromFile_CallBack_void_EVString);
							m_toFile_CallBack_void_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Function;
							GC.KeepAlive(m_toFile_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString(this.NativeObject, m_toFile_CallBack_void_EVString);
							m_getRadarAlertResult_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Function;
							GC.KeepAlive(m_getRadarAlertResult_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool(this.NativeObject, m_getRadarAlertResult_CallBack_ev_bool);
							m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(this.NativeObject, m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString);
							m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(this.NativeObject, m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString);
							m_setScannerSolidMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setScannerSolidMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString(this.NativeObject, m_setScannerSolidMaterial_CallBack_void_EVString_EVString);
							m_setScannerFrameMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setScannerFrameMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString(this.NativeObject, m_setScannerFrameMaterial_CallBack_void_EVString_EVString);
							m_getRadarMaterialResourceGroup_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Function;
							GC.KeepAlive(m_getRadarMaterialResourceGroup_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString(this.NativeObject, m_getRadarMaterialResourceGroup_CallBack_EVString);
							m_getEnvelopSolidMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Function;
							GC.KeepAlive(m_getEnvelopSolidMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString(this.NativeObject, m_getEnvelopSolidMaterial_CallBack_EVString);
							m_getEnvelopFrameMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Function;
							GC.KeepAlive(m_getEnvelopFrameMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString(this.NativeObject, m_getEnvelopFrameMaterial_CallBack_EVString);
							m_getScannerSolidMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Function;
							GC.KeepAlive(m_getScannerSolidMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString(this.NativeObject, m_getScannerSolidMaterial_CallBack_EVString);
							m_getScannerFrameMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Function;
							GC.KeepAlive(m_getScannerFrameMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString(this.NativeObject, m_getScannerFrameMaterial_CallBack_EVString);
							m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Function;
							GC.KeepAlive(m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(this.NativeObject, m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString);
						}
					}
					public static RadarObject FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RadarObject obj = baseObj as  RadarObject;
						if (object.Equals(obj, null))
						{
							obj = new RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRadarObject");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RadarObjectClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RadarObject emptyInstance = new RadarObject(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
