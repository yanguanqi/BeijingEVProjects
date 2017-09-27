/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				/// <summary>
				/// 机械扫描形雷达
				/// </summary>
				public class Msradarobject : EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="ref_pGSM">地理场景管理器</param>
					/// <param name="pMSRadarCharacter">机械式雷达特征（生命周期与RadarObject的生命周期一致）</param>
					public Msradarobject(string name, EarthView.World.Spatial3D.GeoSceneManager ref_pGSM, EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.Msradarcharacter pMSRadarCharacter) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						BasePtr valueref_pGSM = new BasePtr(ref_pGSM);
						list.Add("ref_pGSM", valueref_pGSM.PtrVal);
						BasePtr valuepMSRadarCharacter = new BasePtr(pMSRadarCharacter);
						list.Add("pMSRadarCharacter", valuepMSRadarCharacter.PtrVal);
						Create("CMSRadarObjectProxy", list);
						if (!"EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.Msradarobject".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 雷达复制
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns>新的雷达对象</returns>
					public new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject Clone_NoVirtual(string name)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString_NoVirtual(this.NativeObject, name);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 雷达复制
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns>新的雷达对象</returns>
					public override EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject Clone(string name)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(this.NativeObject, name);
						
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
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达告警结果
					/// </summary>
					/// <returns>是否告警</returns>
					public new bool GetRadarAlertResult_NoVirtual()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool_NoVirtual(this.NativeObject);
						
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
					private static extern byte EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取雷达告警结果
					/// </summary>
					/// <returns>是否告警</returns>
					public override bool GetRadarAlertResult()
					{
						byte ret=EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(this.NativeObject);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string nodeName);

					/// <summary>
					/// 计算雷达遮蔽
					/// </summary>
					/// <param name="name">雷达对象名</param>
					/// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
					/// <returns>遮蔽计算后生成的雷达对象</returns>
					public new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject ComputeTerrainShade_NoVirtual(string name, string nodeName)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_NoVirtual(this.NativeObject, name, nodeName);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(IntPtr pNativeObject, string name, string nodeName);

					/// <summary>
					/// 计算雷达遮蔽
					/// </summary>
					/// <param name="name">雷达对象名</param>
					/// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
					/// <returns>遮蔽计算后生成的雷达对象</returns>
					public override EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject ComputeTerrainShade(string name, string nodeName)
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(this.NativeObject, name, nodeName);
						
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
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadMsradarobject = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadMsradarobject = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObject", new MsradarobjectClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarObjectProxy", new MsradarobjectClassFactory());

					public Msradarobject(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(IntPtr pObject, clone_CallBack_CRadarObject_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode(IntPtr pObject, appendToNode_CallBack_CSceneNode pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(IntPtr pObject, appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode(IntPtr pObject, getParentNode_CallBack_CSceneNode pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void(IntPtr pObject, detachFromParentNode_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject(IntPtr pObject, isIntersected_CallBack_bool_CRadarObject pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve(IntPtr pObject, isIntersected_CallBack_bool_CCurve pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint(IntPtr pObject, containsVertex_CallBack_EVPointWithinType_CPoint pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void(IntPtr pObject, build_CallBack_void pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool(IntPtr pObject, setVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool(IntPtr pObject, getVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool(IntPtr pObject, setEnvelopSolidVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool(IntPtr pObject, getEnvelopSolidVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool(IntPtr pObject, setEnvelopFrameVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool(IntPtr pObject, getEnvelopFrameVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool(IntPtr pObject, setScannerSolidVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool(IntPtr pObject, getScannerSolidVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool(IntPtr pObject, setScannerFrameVisible_CallBack_void_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool(IntPtr pObject, getScannerFrameVisible_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString(IntPtr pObject, fromFile_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString(IntPtr pObject, toFile_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(IntPtr pObject, getRadarAlertResult_CallBack_ev_bool pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(IntPtr pObject, setEnvelopSolidMaterial_CallBack_void_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(IntPtr pObject, setEnvelopFrameMaterial_CallBack_void_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString(IntPtr pObject, setScannerSolidMaterial_CallBack_void_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString(IntPtr pObject, setScannerFrameMaterial_CallBack_void_EVString_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString(IntPtr pObject, getRadarMaterialResourceGroup_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString(IntPtr pObject, getEnvelopSolidMaterial_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString(IntPtr pObject, getEnvelopFrameMaterial_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString(IntPtr pObject, getScannerSolidMaterial_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString(IntPtr pObject, getScannerFrameMaterial_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(IntPtr pObject, computeTerrainShade_CallBack_CRadarObject_EVString_EVString pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_clone_CallBack_CRadarObject_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_clone_CRadarObject_EVString_Function;
							GC.KeepAlive(m_clone_CallBack_CRadarObject_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_clone_CRadarObject_EVString(this.NativeObject, m_clone_CallBack_CRadarObject_EVString);
							m_appendToNode_CallBack_CSceneNode = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNode_CSceneNode_Function;
							GC.KeepAlive(m_appendToNode_CallBack_CSceneNode);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNode_CSceneNode(this.NativeObject, m_appendToNode_CallBack_CSceneNode);
							m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree_Function;
							GC.KeepAlive(m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_appendToNodeWithNorthAngle_void_Real_Real_Real_CVector3_CDegree(this.NativeObject, m_appendToNodeWithNorthAngle_CallBack_void_Real_Real_Real_CVector3_CDegree);
							m_getParentNode_CallBack_CSceneNode = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getParentNode_CSceneNode_Function;
							GC.KeepAlive(m_getParentNode_CallBack_CSceneNode);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getParentNode_CSceneNode(this.NativeObject, m_getParentNode_CallBack_CSceneNode);
							m_detachFromParentNode_CallBack_void = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_detachFromParentNode_void_Function;
							GC.KeepAlive(m_detachFromParentNode_CallBack_void);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_detachFromParentNode_void(this.NativeObject, m_detachFromParentNode_CallBack_void);
							m_isIntersected_CallBack_bool_CRadarObject = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CRadarObject_Function;
							GC.KeepAlive(m_isIntersected_CallBack_bool_CRadarObject);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CRadarObject(this.NativeObject, m_isIntersected_CallBack_bool_CRadarObject);
							m_isIntersected_CallBack_bool_CCurve = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_isIntersected_bool_CCurve_Function;
							GC.KeepAlive(m_isIntersected_CallBack_bool_CCurve);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_isIntersected_bool_CCurve(this.NativeObject, m_isIntersected_CallBack_bool_CCurve);
							m_containsVertex_CallBack_EVPointWithinType_CPoint = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_containsVertex_EVPointWithinType_CPoint_Function;
							GC.KeepAlive(m_containsVertex_CallBack_EVPointWithinType_CPoint);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_containsVertex_EVPointWithinType_CPoint(this.NativeObject, m_containsVertex_CallBack_EVPointWithinType_CPoint);
							m_build_CallBack_void = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_build_void_Function;
							GC.KeepAlive(m_build_CallBack_void);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_build_void(this.NativeObject, m_build_CallBack_void);
							m_setVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setVisible_void_ev_bool(this.NativeObject, m_setVisible_CallBack_void_ev_bool);
							m_getVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getVisible_ev_bool_Function;
							GC.KeepAlive(m_getVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getVisible_ev_bool(this.NativeObject, m_getVisible_CallBack_ev_bool);
							m_setEnvelopSolidVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setEnvelopSolidVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidVisible_void_ev_bool(this.NativeObject, m_setEnvelopSolidVisible_CallBack_void_ev_bool);
							m_getEnvelopSolidVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidVisible_ev_bool_Function;
							GC.KeepAlive(m_getEnvelopSolidVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidVisible_ev_bool(this.NativeObject, m_getEnvelopSolidVisible_CallBack_ev_bool);
							m_setEnvelopFrameVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setEnvelopFrameVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameVisible_void_ev_bool(this.NativeObject, m_setEnvelopFrameVisible_CallBack_void_ev_bool);
							m_getEnvelopFrameVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameVisible_ev_bool_Function;
							GC.KeepAlive(m_getEnvelopFrameVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameVisible_ev_bool(this.NativeObject, m_getEnvelopFrameVisible_CallBack_ev_bool);
							m_setScannerSolidVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setScannerSolidVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidVisible_void_ev_bool(this.NativeObject, m_setScannerSolidVisible_CallBack_void_ev_bool);
							m_getScannerSolidVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidVisible_ev_bool_Function;
							GC.KeepAlive(m_getScannerSolidVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidVisible_ev_bool(this.NativeObject, m_getScannerSolidVisible_CallBack_ev_bool);
							m_setScannerFrameVisible_CallBack_void_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameVisible_void_ev_bool_Function;
							GC.KeepAlive(m_setScannerFrameVisible_CallBack_void_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameVisible_void_ev_bool(this.NativeObject, m_setScannerFrameVisible_CallBack_void_ev_bool);
							m_getScannerFrameVisible_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameVisible_ev_bool_Function;
							GC.KeepAlive(m_getScannerFrameVisible_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameVisible_ev_bool(this.NativeObject, m_getScannerFrameVisible_CallBack_ev_bool);
							m_fromFile_CallBack_void_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_fromFile_void_EVString_Function;
							GC.KeepAlive(m_fromFile_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_fromFile_void_EVString(this.NativeObject, m_fromFile_CallBack_void_EVString);
							m_toFile_CallBack_void_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_toFile_void_EVString_Function;
							GC.KeepAlive(m_toFile_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_toFile_void_EVString(this.NativeObject, m_toFile_CallBack_void_EVString);
							m_getRadarAlertResult_CallBack_ev_bool = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarAlertResult_ev_bool_Function;
							GC.KeepAlive(m_getRadarAlertResult_CallBack_ev_bool);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarAlertResult_ev_bool(this.NativeObject, m_getRadarAlertResult_CallBack_ev_bool);
							m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopSolidMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopSolidMaterial_void_EVString_EVString(this.NativeObject, m_setEnvelopSolidMaterial_CallBack_void_EVString_EVString);
							m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setEnvelopFrameMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setEnvelopFrameMaterial_void_EVString_EVString(this.NativeObject, m_setEnvelopFrameMaterial_CallBack_void_EVString_EVString);
							m_setScannerSolidMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerSolidMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setScannerSolidMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerSolidMaterial_void_EVString_EVString(this.NativeObject, m_setScannerSolidMaterial_CallBack_void_EVString_EVString);
							m_setScannerFrameMaterial_CallBack_void_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_setScannerFrameMaterial_void_EVString_EVString_Function;
							GC.KeepAlive(m_setScannerFrameMaterial_CallBack_void_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_setScannerFrameMaterial_void_EVString_EVString(this.NativeObject, m_setScannerFrameMaterial_CallBack_void_EVString_EVString);
							m_getRadarMaterialResourceGroup_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getRadarMaterialResourceGroup_EVString_Function;
							GC.KeepAlive(m_getRadarMaterialResourceGroup_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getRadarMaterialResourceGroup_EVString(this.NativeObject, m_getRadarMaterialResourceGroup_CallBack_EVString);
							m_getEnvelopSolidMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopSolidMaterial_EVString_Function;
							GC.KeepAlive(m_getEnvelopSolidMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopSolidMaterial_EVString(this.NativeObject, m_getEnvelopSolidMaterial_CallBack_EVString);
							m_getEnvelopFrameMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getEnvelopFrameMaterial_EVString_Function;
							GC.KeepAlive(m_getEnvelopFrameMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getEnvelopFrameMaterial_EVString(this.NativeObject, m_getEnvelopFrameMaterial_CallBack_EVString);
							m_getScannerSolidMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerSolidMaterial_EVString_Function;
							GC.KeepAlive(m_getScannerSolidMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerSolidMaterial_EVString(this.NativeObject, m_getScannerSolidMaterial_CallBack_EVString);
							m_getScannerFrameMaterial_CallBack_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_getScannerFrameMaterial_EVString_Function;
							GC.KeepAlive(m_getScannerFrameMaterial_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_getScannerFrameMaterial_EVString(this.NativeObject, m_getScannerFrameMaterial_CallBack_EVString);
							m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarObject_computeTerrainShade_CRadarObject_EVString_EVString_Function;
							GC.KeepAlive(m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarObject_computeTerrainShade_CRadarObject_EVString_EVString(this.NativeObject, m_computeTerrainShade_CallBack_CRadarObject_EVString_EVString);
						}
					}
					public override EarthView.World.Graphic.SceneNode AppendToNode()
					{
						return base.AppendToNode_NoVirtual();
					}
					public override void AppendToNodeWithNorthAngle(double lat, double lon, double alt, EarthView.World.Spatial.Math.Vector3 localScale, EarthView.World.Spatial.Math.Degree northAngle)
					{
						base.AppendToNodeWithNorthAngle_NoVirtual(lat,lon,alt,localScale,northAngle);
					}
					public override EarthView.World.Graphic.SceneNode GetParentNode()
					{
						return base.GetParentNode_NoVirtual();
					}
					public override void DetachFromParentNode()
					{
						base.DetachFromParentNode_NoVirtual();
					}
					public override bool IsIntersected(EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarObject another)
					{
						return base.IsIntersected_NoVirtual(another);
					}
					public override bool IsIntersected(EarthView.World.Spatial.Geometry.Curve curve)
					{
						return base.IsIntersected_NoVirtual(curve);
					}
					public override EarthView.World.Geometry3D.EVPOINTWITHINTYPE ContainsVertex(EarthView.World.Spatial.Geometry.Point point)
					{
						return base.ContainsVertex_NoVirtual(point);
					}
					public override void Build()
					{
						base.Build_NoVirtual();
					}
					public override void SetVisible(bool value)
					{
						base.SetVisible_NoVirtual(value);
					}
					public override bool GetVisible()
					{
						return base.GetVisible_NoVirtual();
					}
					public override void SetEnvelopSolidVisible(bool value)
					{
						base.SetEnvelopSolidVisible_NoVirtual(value);
					}
					public override bool GetEnvelopSolidVisible()
					{
						return base.GetEnvelopSolidVisible_NoVirtual();
					}
					public override void SetEnvelopFrameVisible(bool value)
					{
						base.SetEnvelopFrameVisible_NoVirtual(value);
					}
					public override bool GetEnvelopFrameVisible()
					{
						return base.GetEnvelopFrameVisible_NoVirtual();
					}
					public override void SetScannerSolidVisible(bool value)
					{
						base.SetScannerSolidVisible_NoVirtual(value);
					}
					public override bool GetScannerSolidVisible()
					{
						return base.GetScannerSolidVisible_NoVirtual();
					}
					public override void SetScannerFrameVisible(bool value)
					{
						base.SetScannerFrameVisible_NoVirtual(value);
					}
					public override bool GetScannerFrameVisible()
					{
						return base.GetScannerFrameVisible_NoVirtual();
					}
					public override void FromFile(string fileName)
					{
						base.FromFile_NoVirtual(fileName);
					}
					public override void ToFile(string fileName)
					{
						base.ToFile_NoVirtual(fileName);
					}
					public override void SetEnvelopSolidMaterial(string materialName, string groupName)
					{
						base.SetEnvelopSolidMaterial_NoVirtual(materialName,groupName);
					}
					public override void SetEnvelopFrameMaterial(string materialName, string groupName)
					{
						base.SetEnvelopFrameMaterial_NoVirtual(materialName,groupName);
					}
					public override void SetScannerSolidMaterial(string materialName, string groupName)
					{
						base.SetScannerSolidMaterial_NoVirtual(materialName,groupName);
					}
					public override void SetScannerFrameMaterial(string materialName, string groupName)
					{
						base.SetScannerFrameMaterial_NoVirtual(materialName,groupName);
					}
					public override string GetRadarMaterialResourceGroup()
					{
						return base.GetRadarMaterialResourceGroup_NoVirtual();
					}
					public override string GetEnvelopSolidMaterial()
					{
						return base.GetEnvelopSolidMaterial_NoVirtual();
					}
					public override string GetEnvelopFrameMaterial()
					{
						return base.GetEnvelopFrameMaterial_NoVirtual();
					}
					public override string GetScannerSolidMaterial()
					{
						return base.GetScannerSolidMaterial_NoVirtual();
					}
					public override string GetScannerFrameMaterial()
					{
						return base.GetScannerFrameMaterial_NoVirtual();
					}
					public static Msradarobject FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Msradarobject obj = baseObj as  Msradarobject;
						if (object.Equals(obj, null))
						{
							obj = new Msradarobject(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMSRadarObject");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MsradarobjectClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Msradarobject emptyInstance = new Msradarobject(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
