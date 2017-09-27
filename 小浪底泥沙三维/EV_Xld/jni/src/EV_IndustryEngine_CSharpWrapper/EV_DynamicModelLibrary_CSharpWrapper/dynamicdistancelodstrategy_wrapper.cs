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
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 距离LOD策略
			/// </summary>
			public class DynamicDistanceLodStrategy : EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy
			{
				/// <summary>
				/// 距离LOD策略构造函数
				/// </summary>
				public DynamicDistanceLodStrategy() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDynamicDistanceLodStrategyProxy", null);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicDistanceLodStrategy".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				protected new double GetLodValue_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				protected override double GetLodValue(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicDistanceLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicDistanceLodStrategy", new DynamicDistanceLodStrategyClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicDistanceLodStrategyProxy", new DynamicDistanceLodStrategyClassFactory());

				public DynamicDistanceLodStrategy(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(IntPtr pObject, isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_setMaxVisibleValue_void_EVString_Real(IntPtr pObject, setMaxVisibleValue_CallBack_void_EVString_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_setMinVisibleValue_void_EVString_Real(IntPtr pObject, setMinVisibleValue_CallBack_void_EVString_Real pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getMaxVisibleValue_Real_EVString(IntPtr pObject, getMaxVisibleValue_CallBack_Real_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getMinVisibleValue_Real_EVString(IntPtr pObject, getMinVisibleValue_CallBack_Real_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(IntPtr pObject, registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_unregisterLodStrategyItem_void_EVString(IntPtr pObject, unregisterLodStrategyItem_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(IntPtr pObject, addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_removeLodStrategyListener_void_EVString(IntPtr pObject, removeLodStrategyListener_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(IntPtr pObject, getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_DynamicModelLibrary_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(IntPtr pObject, fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Function;
						GC.KeepAlive(m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(this.NativeObject, m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera);
						m_setMaxVisibleValue_CallBack_void_EVString_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Function;
						GC.KeepAlive(m_setMaxVisibleValue_CallBack_void_EVString_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_setMaxVisibleValue_void_EVString_Real(this.NativeObject, m_setMaxVisibleValue_CallBack_void_EVString_Real);
						m_setMinVisibleValue_CallBack_void_EVString_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Function;
						GC.KeepAlive(m_setMinVisibleValue_CallBack_void_EVString_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_setMinVisibleValue_void_EVString_Real(this.NativeObject, m_setMinVisibleValue_CallBack_void_EVString_Real);
						m_getMaxVisibleValue_CallBack_Real_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Function;
						GC.KeepAlive(m_getMaxVisibleValue_CallBack_Real_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getMaxVisibleValue_Real_EVString(this.NativeObject, m_getMaxVisibleValue_CallBack_Real_EVString);
						m_getMinVisibleValue_CallBack_Real_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Function;
						GC.KeepAlive(m_getMinVisibleValue_CallBack_Real_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getMinVisibleValue_Real_EVString(this.NativeObject, m_getMinVisibleValue_CallBack_Real_EVString);
						m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Function;
						GC.KeepAlive(m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(this.NativeObject, m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem);
						m_unregisterLodStrategyItem_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Function;
						GC.KeepAlive(m_unregisterLodStrategyItem_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_unregisterLodStrategyItem_void_EVString(this.NativeObject, m_unregisterLodStrategyItem_CallBack_void_EVString);
						m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Function;
						GC.KeepAlive(m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(this.NativeObject, m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener);
						m_removeLodStrategyListener_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Function;
						GC.KeepAlive(m_removeLodStrategyListener_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_removeLodStrategyListener_void_EVString(this.NativeObject, m_removeLodStrategyListener_CallBack_void_EVString);
						m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Function;
						GC.KeepAlive(m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(this.NativeObject, m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera);
						m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Function;
						GC.KeepAlive(m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicDistanceLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(this.NativeObject, m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera);
					}
				}
				public override bool IsPassed(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, string lodStrategyItemName, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					return base.IsPassed_NoVirtual(modelObject,lodStrategyItemName,camera);
				}
				public override void SetMaxVisibleValue(string name, double maxVisibleValue)
				{
					base.SetMaxVisibleValue_NoVirtual(name,maxVisibleValue);
				}
				public override void SetMinVisibleValue(string name, double minVisibleValue)
				{
					base.SetMinVisibleValue_NoVirtual(name,minVisibleValue);
				}
				public override double GetMaxVisibleValue(string name)
				{
					return base.GetMaxVisibleValue_NoVirtual(name);
				}
				public override double GetMinVisibleValue(string name)
				{
					return base.GetMinVisibleValue_NoVirtual(name);
				}
				public override void RegisterLodStrategyItem(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
				{
					base.RegisterLodStrategyItem_NoVirtual(ref_lodStrategyItem);
				}
				public override void UnregisterLodStrategyItem(string name)
				{
					base.UnregisterLodStrategyItem_NoVirtual(name);
				}
				public override void AddLodStrategyListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
				{
					base.AddLodStrategyListener_NoVirtual(ref_lodStrategyListener);
				}
				public override void RemoveLodStrategyListener(string name)
				{
					base.RemoveLodStrategyListener_NoVirtual(name);
				}
				protected override void FireLodStrategyListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					base.FireLodStrategyListener_NoVirtual(modelObject,camera);
				}
				public static DynamicDistanceLodStrategy FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicDistanceLodStrategy obj = baseObj as  DynamicDistanceLodStrategy;
					if (object.Equals(obj, null))
					{
						obj = new DynamicDistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicDistanceLodStrategy");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicDistanceLodStrategyClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicDistanceLodStrategy emptyInstance = new DynamicDistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
