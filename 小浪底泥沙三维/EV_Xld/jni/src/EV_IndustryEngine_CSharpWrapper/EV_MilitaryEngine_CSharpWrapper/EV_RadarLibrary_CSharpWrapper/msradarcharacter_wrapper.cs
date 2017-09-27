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
				/// 机械扫描形雷达特征
				/// </summary>
				public class Msradarcharacter : EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter
				{
					public Msradarcharacter() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CMSRadarCharacterProxy", null);
						if (!"EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.Msradarcharacter".Equals(((Object)this).GetType().ToString()))
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getScannerHorizontalAngleSpan_CDegree(IntPtr pNativeObject);

					/// <summary>
					/// 获取扫描体跨度
					/// </summary>
					/// <returns>扫描体跨度（角度值）</returns>
					public EarthView.World.Spatial.Math.Degree GetScannerHorizontalAngleSpan()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getScannerHorizontalAngleSpan_CDegree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.Math.Degree csObj = new EarthView.World.Spatial.Math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDegree");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.Math.Degree;
							csObj.BindNativeObject(__ptr, "CDegree");
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_setScannerHorizontalAngleSpan_void_CDegree(IntPtr pNativeObject, IntPtr degree);

					/// <summary>
					/// 设置扫描体跨度
					/// </summary>
					/// <param name="degree">扫描体跨度（角度值）</param>
					public void SetScannerHorizontalAngleSpan(EarthView.World.Spatial.Math.Degree degree)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_setScannerHorizontalAngleSpan_void_CDegree(this.NativeObject, object.Equals(degree, null) ? IntPtr.Zero : degree.NativeObject);
						
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 复制
					/// </summary>
					/// <returns>新的雷达对象</returns>
					public new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter Clone_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_NoVirtual(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarCharacter");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter;
							csObj.BindNativeObject(__ptr, "CRadarCharacter");
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
					private static extern IntPtr EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(IntPtr pNativeObject);

					/// <summary>
					/// 复制
					/// </summary>
					/// <returns>新的雷达对象</returns>
					public override EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter Clone()
					{
						IntPtr __ptr = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter csObj = new EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CRadarCharacter");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.MilitaryEngine.RadarLibrary.RadarCharacter;
							csObj.BindNativeObject(__ptr, "CRadarCharacter");
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadMsradarcharacter = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter", new MsradarcharacterClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacterProxy", new MsradarcharacterClassFactory());

					public Msradarcharacter(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString(IntPtr pObject, getSectionCurve_CallBack_CLineString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(IntPtr pObject, clone_CallBack_CRadarCharacter pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getSectionCurve_CallBack_CLineString = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Function;
							GC.KeepAlive(m_getSectionCurve_CallBack_CLineString);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString(this.NativeObject, m_getSectionCurve_CallBack_CLineString);
							m_clone_CallBack_CRadarCharacter = EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Function;
							GC.KeepAlive(m_clone_CallBack_CRadarCharacter);
							EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(this.NativeObject, m_clone_CallBack_CRadarCharacter);
						}
					}
					public override EarthView.World.Spatial.Geometry.LineString GetSectionCurve()
					{
						return base.GetSectionCurve_NoVirtual();
					}
					public static Msradarcharacter FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						Msradarcharacter obj = baseObj as  Msradarcharacter;
						if (object.Equals(obj, null))
						{
							obj = new Msradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMSRadarCharacter");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MsradarcharacterClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						Msradarcharacter emptyInstance = new Msradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
