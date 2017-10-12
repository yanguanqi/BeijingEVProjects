/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

namespace EarthView
{
	namespace XldManager
	{
		public class WaterConservancyManager : EarthView.World.Core.BaseObject
		{

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_XldManager_CWaterConservancyManager_GetSingletonPtr_CWaterConservancyManager();

			public static EarthView.XldManager.WaterConservancyManager GetSingletonPtr()
			{
				IntPtr __ptr = EarthView_XldManager_CWaterConservancyManager_GetSingletonPtr_CWaterConservancyManager();
				
				if(__ptr==IntPtr.Zero)
				{
				return null;
				}
				EarthView.XldManager.WaterConservancyManager csObj = new EarthView.XldManager.WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate);
				csObj.BindNativeObject(__ptr, "CWaterConservancyManager");
				csObj.Delegate = true;
				IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
				if (csObjClassFactory != null)
				{
					csObj.Delegate = true;
					csObj = csObjClassFactory.Create() as EarthView.XldManager.WaterConservancyManager;
					csObj.BindNativeObject(__ptr, "CWaterConservancyManager");
					csObj.Delegate = true;
				}
				return csObj;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_Initialise_void_CGlobeControl_EVString(IntPtr pNativeObject, IntPtr ref_globecontrol, ref IntPtr runtimePath);

			public void Initialise(EarthView.World.Spatial3D.Controls.GlobeControl ref_globecontrol, ref string runtimePath)
			{
				IntPtr __ptrruntimePath = Marshal.StringToHGlobalAnsi(runtimePath);
				IntPtr pTmpruntimePath = __ptrruntimePath;
				
				EarthView_XldManager_CWaterConservancyManager_Initialise_void_CGlobeControl_EVString(this.NativeObject, object.Equals(ref_globecontrol, null) ? IntPtr.Zero : ref_globecontrol.NativeObject, ref __ptrruntimePath);
				
				 Marshal.FreeHGlobal(pTmpruntimePath);
				runtimePath= Marshal.PtrToStringAnsi(__ptrruntimePath);
				ClassFactory.FreeString(ref __ptrruntimePath);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetExaggerationFactor_void_ev_real32(IntPtr pNativeObject, ref float factor);

			public void SetExaggerationFactor(float factor)
			{
				EarthView_XldManager_CWaterConservancyManager_SetExaggerationFactor_void_ev_real32(this.NativeObject, ref factor);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_CreateTerrain_void_EVString(IntPtr pNativeObject, string grdFileName);

			public void CreateTerrain(string grdFileName)
			{
				EarthView_XldManager_CWaterConservancyManager_CreateTerrain_void_EVString(this.NativeObject, grdFileName);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr EarthView_XldManager_CWaterConservancyManager_GetTerrainName_EVString_ev_int32(IntPtr pNativeObject, int terrainIndex);

			public string GetTerrainName(int terrainIndex)
			{
				IntPtr __ptr = EarthView_XldManager_CWaterConservancyManager_GetTerrainName_EVString_ev_int32(this.NativeObject, terrainIndex);
				
				string ret = Marshal.PtrToStringAnsi(__ptr);
				ClassFactory.FreeString(ref __ptr);
				return ret;
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetTerrainVisible_void_EVString_ev_bool(IntPtr pNativeObject, string terrainName, ref bool isVisible);

			public void SetTerrainVisible(string terrainName, bool isVisible)
			{
				EarthView_XldManager_CWaterConservancyManager_SetTerrainVisible_void_EVString_ev_bool(this.NativeObject, terrainName, ref isVisible);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetTerrainOffset_void_EVString_ev_real64(IntPtr pNativeObject, string terrainName, double offset);

			public void SetTerrainOffset(string terrainName, double offset)
			{
				EarthView_XldManager_CWaterConservancyManager_SetTerrainOffset_void_EVString_ev_real64(this.NativeObject, terrainName, offset);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_MarkPosistion_void_EVString_EVString_EVString_ev_real64_ev_real64_ev_real64(IntPtr pNativeObject, string name, string imgeFileName, string tip, double longi, double lati, double alti);

			public void MarkPosistion(string name, string imgeFileName, string tip, double longi, double lati, double alti)
			{
				EarthView_XldManager_CWaterConservancyManager_MarkPosistion_void_EVString_EVString_EVString_ev_real64_ev_real64_ev_real64(this.NativeObject, name, imgeFileName, tip, longi, lati, alti);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetSectionQueryEnable_void_ev_bool(IntPtr pNativeObject, ref bool isEnable);

			public void SetSectionQueryEnable(bool isEnable)
			{
				EarthView_XldManager_CWaterConservancyManager_SetSectionQueryEnable_void_ev_bool(this.NativeObject, ref isEnable);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetTerrainHeightQueryEnable_void_ev_bool(IntPtr pNativeObject, ref bool isEnable);

			public void SetTerrainHeightQueryEnable(bool isEnable)
			{
				EarthView_XldManager_CWaterConservancyManager_SetTerrainHeightQueryEnable_void_ev_bool(this.NativeObject, ref isEnable);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_CreateWaterSurface_void_ev_real64(IntPtr pNativeObject, ref double waterHeight);

			/// <summary>
			/// 创建水面，该方法仅在无水面时使用，并且仅使用一次即可
			/// </summary>
			/// <param name="waterHeight">水面高度</param>
			public void CreateWaterSurface(double waterHeight)
			{
				EarthView_XldManager_CWaterConservancyManager_CreateWaterSurface_void_ev_real64(this.NativeObject, ref waterHeight);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetWaterSurfaceVisible_void_ev_bool(IntPtr pNativeObject, ref bool isVisible);

			/// <summary>
			/// 设置水面的可见性
			/// </summary>
			/// <param name="isVisible">是否可见</param>
			public void SetWaterSurfaceVisible(bool isVisible)
			{
				EarthView_XldManager_CWaterConservancyManager_SetWaterSurfaceVisible_void_ev_bool(this.NativeObject, ref isVisible);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_SetWaterLineHeight_void_ev_real64(IntPtr pNativeObject, ref double waterLineHeight);

			/// <summary>
			/// 设置水位高度
			/// </summary>
			/// <param name="waterLineHeight">水位数值</param>
			public void SetWaterLineHeight(double waterLineHeight)
			{
				EarthView_XldManager_CWaterConservancyManager_SetWaterLineHeight_void_ev_real64(this.NativeObject, ref waterLineHeight);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_DeleteWaterSurface_void_ev_bool(IntPtr pNativeObject, ref bool isSure);

			/// <summary>
			/// 删除水面
			/// </summary>
			/// <param name="isSure">确认？</param>
			public void DeleteWaterSurface(bool isSure)
			{
				EarthView_XldManager_CWaterConservancyManager_DeleteWaterSurface_void_ev_bool(this.NativeObject, ref isSure);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_DrawRectBounds_void(IntPtr pNativeObject);

			public void DrawRectBounds()
			{
				EarthView_XldManager_CWaterConservancyManager_DrawRectBounds_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void EarthView_XldManager_CWaterConservancyManager_DrawPolylineBounds_void(IntPtr pNativeObject);

			public void DrawPolylineBounds()
			{
				EarthView_XldManager_CWaterConservancyManager_DrawPolylineBounds_void(this.NativeObject);
				
			}


			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern ulong EarthView_XldManager_CWaterConservancyManager_GetTerrainCount_ev_uint64(IntPtr pNativeObject);

			public ulong GetTerrainCount()
			{
				ulong ret=EarthView_XldManager_CWaterConservancyManager_GetTerrainCount_ev_uint64(this.NativeObject);
				
				return ret;
				
			}

			private EarthView.World.Spatial3D.Controls.GlobeControl mpGlobeControlField;
			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern IntPtr Get_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl(IntPtr pObject);

			#if DEBUG 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#else 
				#if Windows 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#elif Linux 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Android 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.so", CallingConvention = CallingConvention.StdCall)]
				#elif Apple 
					[System.Runtime.InteropServices.DllImport("__Internal")]
				#else 
					[System.Runtime.InteropServices.DllImport("EV_XldManager_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
				#endif 
			#endif 
			private static extern void Set_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl( IntPtr pObject, IntPtr value );

			public 			EarthView.World.Spatial3D.Controls.GlobeControl MpGlobeControl
			{
				get
				{
					IntPtr __ptr = Get_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					if(!object.Equals(mpGlobeControlField, null)){
						mpGlobeControlField.NativeObject = __ptr;
						return mpGlobeControlField;
					}
					EarthView.World.Spatial3D.Controls.GlobeControl csObj = new EarthView.World.Spatial3D.Controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGlobeControl");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Controls.GlobeControl;
						csObj.BindNativeObject(__ptr, "CGlobeControl");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				set
				{
					mpGlobeControlField = value;
					Set_EarthView_XldManager_CWaterConservancyManager_mpGlobeControl( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
				}
			}

			#if DEBUG 
				#if Windows 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_d.dll");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp_d.dll");

				#elif Linux 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_d.so");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp_d.so");

				#else 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_d.dll");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp_d.dll");

				#endif 
			#else 
				#if Windows 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager.dll");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp.dll");

				#elif Linux 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager.so");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp.so");

				#else 
					private static bool bLoadWaterConservancyManager = LoadDll.Load("EV_XldManager.dll");
					private static bool csbLoadWaterConservancyManager = LoadDll.Load("EV_XldManager_CSharp.dll");

				#endif 
			#endif 

			private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::XldManager::CWaterConservancyManager", new WaterConservancyManagerClassFactory());

			public WaterConservancyManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
			{
			}

			public override void RegisterCallBack()
			{
				if (this.NativeObject != IntPtr.Zero)
				{
				}
			}
			public static WaterConservancyManager FromBaseObject(BaseObject baseObj)
			{
				if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
					return null;
				WaterConservancyManager obj = baseObj as  WaterConservancyManager;
				if (object.Equals(obj, null))
				{
					obj = new WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate);
					obj.BindNativeObject(baseObj.NativeObject, "CWaterConservancyManager");
					obj.IncreaseCast();
				}

				return obj;
			}
		}

		public class WaterConservancyManagerClassFactory : IClassFactory
		{
			public BaseObject Create()
			{
				WaterConservancyManager emptyInstance = new WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate);
				return emptyInstance;
			}
		}

	}
}
