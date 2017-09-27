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
			/// 动态目标管理器场景监听
			/// </summary>
			public class DynamicModelManagerListener : EarthView.World.Graphic.SceneManager.SceneManagerListener
			{
				/// <summary>
				/// 动态目标管理器场景监听构造函数
				/// </summary>
				/// <param name="ref_manager">动态目标管理器,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public DynamicModelManagerListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager ref_manager) : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					NameValuePairList list = new NameValuePairList();
					BasePtr valueref_manager = new BasePtr(ref_manager);
					list.Add("ref_manager", valueref_manager.PtrVal);
					Create("CDynamicModelManagerListenerProxy", list);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelManagerListener".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(IntPtr pNativeObject, IntPtr source, IntPtr camera);

				/// <summary>
				/// 在每帧更新场景图前触发			
				/// </summary>				
				/// <returns></returns>
				public new void PreUpdateSceneGraph_NoVirtual(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pNativeObject, IntPtr source, IntPtr camera);

				/// <summary>
				/// 在每帧更新场景图前触发			
				/// </summary>				
				/// <returns></returns>
				public override void PreUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, object.Equals(source, null) ? IntPtr.Zero : source.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicModelManagerListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener", new DynamicModelManagerListenerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListenerProxy", new DynamicModelManagerListenerClassFactory());

				public DynamicModelManagerListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(IntPtr pObject, postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(IntPtr pObject, postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTexturesUpdated_void_ev_size_t(IntPtr pObject, shadowTexturesUpdated_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(IntPtr pObject, shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(IntPtr pObject, shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(IntPtr pObject, sortLightsAffectingFrustum_CallBack_ev_bool_LightList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_sceneManagerDestroyed_void_CSceneManager(IntPtr pObject, sceneManagerDestroyed_CallBack_void_CSceneManager pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Function;
						GC.KeepAlive(m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_preUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
						m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Function;
						GC.KeepAlive(m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(this.NativeObject, m_postUpdateSceneGraph_CallBack_void_CSceneManager_CCamera);
						m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
						GC.KeepAlive(m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_preFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
						m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Function;
						GC.KeepAlive(m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(this.NativeObject, m_postFindVisibleObjects_CallBack_void_CSceneManager_IlluminationRenderStage_CViewport);
						m_shadowTexturesUpdated_CallBack_void_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Function;
						GC.KeepAlive(m_shadowTexturesUpdated_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTexturesUpdated_void_ev_size_t(this.NativeObject, m_shadowTexturesUpdated_CallBack_void_ev_size_t);
						m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Function;
						GC.KeepAlive(m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(this.NativeObject, m_shadowTextureCasterPreViewProj_CallBack_void_CLight_CCamera_ev_size_t);
						m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Function;
						GC.KeepAlive(m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(this.NativeObject, m_shadowTextureReceiverPreViewProj_CallBack_void_CLight_CFrustum);
						m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Function;
						GC.KeepAlive(m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(this.NativeObject, m_sortLightsAffectingFrustum_CallBack_ev_bool_LightList);
						m_sceneManagerDestroyed_CallBack_void_CSceneManager = EarthView_World_Graphic_CSceneManager_CSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Function;
						GC.KeepAlive(m_sceneManagerDestroyed_CallBack_void_CSceneManager);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelManagerListener_sceneManagerDestroyed_void_CSceneManager(this.NativeObject, m_sceneManagerDestroyed_CallBack_void_CSceneManager);
					}
				}
				public override void PostUpdateSceneGraph(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.Camera camera)
				{
					base.PostUpdateSceneGraph_NoVirtual(source,camera);
				}
				public override void PreFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
				{
					base.PreFindVisibleObjects_NoVirtual(source,irs,v);
				}
				public override void PostFindVisibleObjects(EarthView.World.Graphic.SceneManager source, EarthView.World.Graphic.SceneManager.ILLUMINATIONRENDERSTAGE irs, EarthView.World.Graphic.Viewport v)
				{
					base.PostFindVisibleObjects_NoVirtual(source,irs,v);
				}
				public override void ShadowTexturesUpdated(ulong numberOfShadowTextures)
				{
					base.ShadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
				}
				public override void ShadowTextureCasterPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Camera camera, ulong iteration)
				{
					base.ShadowTextureCasterPreViewProj_NoVirtual(light,camera,iteration);
				}
				public override void ShadowTextureReceiverPreViewProj(EarthView.World.Graphic.Light light, EarthView.World.Graphic.Frustum frustum)
				{
					base.ShadowTextureReceiverPreViewProj_NoVirtual(light,frustum);
				}
				public override bool SortLightsAffectingFrustum(ref EarthView.World.Graphic.LightList lightList)
				{
					return base.SortLightsAffectingFrustum_NoVirtual(ref lightList);
				}
				public override void SceneManagerDestroyed(EarthView.World.Graphic.SceneManager source)
				{
					base.SceneManagerDestroyed_NoVirtual(source);
				}
				public static DynamicModelManagerListener FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicModelManagerListener obj = baseObj as  DynamicModelManagerListener;
					if (object.Equals(obj, null))
					{
						obj = new DynamicModelManagerListener(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicModelManagerListener");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicModelManagerListenerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicModelManagerListener emptyInstance = new DynamicModelManagerListener(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
