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
				public class RadarWave : EarthView.World.Core.BaseObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="ref_sceneManager">地理场景管理器</param>
					public RadarWave(string name, EarthView.World.Spatial3D.GeoSceneManager ref_sceneManager) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						BasePtr valueref_sceneManager = new BasePtr(ref_sceneManager);
						list.Add("ref_sceneManager", valueref_sceneManager.PtrVal);
						Create("CRadarWave", list);
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addRadarWave_void_EVString_CVector3_CVector3_double(IntPtr pNativeObject, string texturePath, IntPtr topPos, IntPtr bottomPos, double raidus);

					/// <summary>
					///创建雷达波
					/// </summary>
					/// <param name="texturePath">纹理路径及名称</param>
					/// <param name="topPos">顶面点位置</param>
					/// <param name="bottomPos">底面点位置</param>
					/// <param name="raidus">半径</param>
					public void AddRadarWave(string texturePath, EarthView.World.Spatial.Math.Vector3 topPos, EarthView.World.Spatial.Math.Vector3 bottomPos, double raidus)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addRadarWave_void_EVString_CVector3_CVector3_double(this.NativeObject, texturePath, object.Equals(topPos, null) ? IntPtr.Zero : topPos.NativeObject, object.Equals(bottomPos, null) ? IntPtr.Zero : bottomPos.NativeObject, raidus);
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_setRadarWaveMaterial_void_EVString_EVString_double(IntPtr pNativeObject, string texturePath, string matName, double waveSpeed);

					/// <summary>
					///设置雷达波材质
					/// </summary>
					/// <param name="texturePath">纹理路径及名称</param>
					/// <param name="matName">材质名</param>
					/// <param name="waveSpeed">纹理流动速度</param>
					public void SetRadarWaveMaterial(string texturePath, string matName, double waveSpeed)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_setRadarWaveMaterial_void_EVString_EVString_double(this.NativeObject, texturePath, matName, waveSpeed);
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addAssignRadarWave_void_EVString_EVString_CVector3_CVector3_double(IntPtr pNativeObject, string name, string matName, IntPtr topPos, IntPtr bottomPos, double raidus);

					/// <summary>
					///创建雷达波
					/// </summary>
					/// <param name="name">雷达波名称</param>
					/// <param name="matName">材质名称</param>
					/// <param name="topPos">顶面点位置</param>
					/// <param name="bottomPos">底面点位置</param>
					/// <param name="raidus">半径</param>
					public void AddAssignRadarWave(string name, string matName, EarthView.World.Spatial.Math.Vector3 topPos, EarthView.World.Spatial.Math.Vector3 bottomPos, double raidus)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_addAssignRadarWave_void_EVString_EVString_CVector3_CVector3_double(this.NativeObject, name, matName, object.Equals(topPos, null) ? IntPtr.Zero : topPos.NativeObject, object.Equals(bottomPos, null) ? IntPtr.Zero : bottomPos.NativeObject, raidus);
						
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
					private static extern void EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_updateRadarWave_void_EVString_EVString_bool_CVector3_CVector3_double(IntPtr pNativeObject, string radarWaveName, string radarWaveMatName, byte flag, IntPtr topPos, IntPtr bottomPos, double raidus);

					/// <summary>
					///动态更新雷达波
					/// </summary>
					/// <param name="radarWaveName">雷达波名称</param>
					/// <param name="radarWaveMatName">材质名称</param>
					/// <param name="flag">隐藏还是更新雷达波（true:更新，false:隐藏）</param>
					/// <param name="topPos">顶面点位置</param>
					/// <param name="bottomPos">底面点位置</param>
					/// <param name="raidus">半径</param>
					public void UpdateRadarWave(string radarWaveName, string radarWaveMatName, bool flag, EarthView.World.Spatial.Math.Vector3 topPos, EarthView.World.Spatial.Math.Vector3 bottomPos, double raidus)
					{
						EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarWave_updateRadarWave_void_EVString_EVString_bool_CVector3_CVector3_double(this.NativeObject, radarWaveName, radarWaveMatName, Convert.ToByte(flag), object.Equals(topPos, null) ? IntPtr.Zero : topPos.NativeObject, object.Equals(bottomPos, null) ? IntPtr.Zero : bottomPos.NativeObject, raidus);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary_d.so");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp_d.so");

						#else 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary_d.dll");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary.so");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp.so");

						#else 
							private static bool bLoadRadarWave = LoadDll.Load("EV_RadarLibrary.dll");
							private static bool csbLoadRadarWave = LoadDll.Load("EV_RadarLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarWave", new RadarWaveClassFactory());

					public RadarWave(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static RadarWave FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						RadarWave obj = baseObj as  RadarWave;
						if (object.Equals(obj, null))
						{
							obj = new RadarWave(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CRadarWave");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class RadarWaveClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						RadarWave emptyInstance = new RadarWave(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
