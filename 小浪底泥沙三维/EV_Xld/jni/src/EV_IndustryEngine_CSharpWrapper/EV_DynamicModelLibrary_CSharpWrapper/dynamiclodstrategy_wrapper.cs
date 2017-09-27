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
			/// 动态目标LOD策略
			/// </summary>
			public class DynamicLodStrategy : EarthView.World.Core.AllocatedObject
			{
				/// <summary>
				/// 动态目标LOD策略监听
				/// </summary>
				public class DynamicLodStrategyListener : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 动态目标LOD策略监听构造函数
					/// </summary>
					/// <param name="name">名称</param>
					public DynamicLodStrategyListener(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CDynamicLodStrategyListenerProxy", list);
						if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy+DynamicLodStrategyListener".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate string getName_CallBack_EVString();

					protected getName_CallBack_EVString m_getName_CallBack_EVString;

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
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					public virtual string GetName_NoVirtual()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_NoVirtual(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					protected  string EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Function()
					{
						string csret=GetName();
						
						return csret;
						
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
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					public virtual string GetName()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setName_CallBack_void_EVString(ref IntPtr name);

					protected setName_CallBack_void_EVString m_setName_CallBack_void_EVString;

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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="name">名称</param>
					public virtual void SetName_NoVirtual(string name)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_NoVirtual(this.NativeObject, name);
						
					}

					protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Function(ref IntPtr name)
					{
						string strname= Marshal.PtrToStringAnsi(name);
						ClassFactory.FreeString(ref name);
						
						SetName(strname);
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="name">名称</param>
					public virtual void SetName(string name)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(this.NativeObject, name);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(IntPtr lodStrategy, IntPtr dynamicModelObject, IntPtr camera);

					protected beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera m_beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera;

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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr lodStrategy, IntPtr dynamicModelObject, IntPtr camera);

					/// <summary>
					/// 刷新LOD状态之前触发
					/// </summary>
					/// <param name="lodStrategy">LOD策略</param>
					/// <param name="dynamicModelObject">动态目标对象</param>
					/// <param name="camera">相机对象</param>
					public virtual void BeforeUpdateLodState_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy lodStrategy, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicModelObject, EarthView.World.Spatial3D.GlobeCamera camera)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(lodStrategy, null) ? IntPtr.Zero : lodStrategy.NativeObject, object.Equals(dynamicModelObject, null) ? IntPtr.Zero : dynamicModelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
						
					}

					protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Function(IntPtr lodStrategy, IntPtr dynamicModelObject, IntPtr camera)
					{
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy csobj_lodStrategy = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_lodStrategy.BindNativeObject(lodStrategy,"CDynamicLodStrategy");
						csobj_lodStrategy.Delegate = true;
						IClassFactory csobj_lodStrategyClassFactory = GlobalClassFactoryMap.Get(csobj_lodStrategy.GetCppInstanceTypeName());
						if (csobj_lodStrategyClassFactory != null)
						{
							csobj_lodStrategy.Delegate = true;
							csobj_lodStrategy = csobj_lodStrategyClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy;
							csobj_lodStrategy.BindNativeObject(lodStrategy, "CDynamicLodStrategy");
							csobj_lodStrategy.Delegate = true;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_dynamicModelObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_dynamicModelObject.BindNativeObject(dynamicModelObject,"CDynamicModelObject");
						csobj_dynamicModelObject.Delegate = true;
						IClassFactory csobj_dynamicModelObjectClassFactory = GlobalClassFactoryMap.Get(csobj_dynamicModelObject.GetCppInstanceTypeName());
						if (csobj_dynamicModelObjectClassFactory != null)
						{
							csobj_dynamicModelObject.Delegate = true;
							csobj_dynamicModelObject = csobj_dynamicModelObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
							csobj_dynamicModelObject.BindNativeObject(dynamicModelObject, "CDynamicModelObject");
							csobj_dynamicModelObject.Delegate = true;
						}
						EarthView.World.Spatial3D.GlobeCamera csobj_camera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
						csobj_camera.BindNativeObject(camera,"CGlobeCamera");
						csobj_camera.Delegate = true;
						IClassFactory csobj_cameraClassFactory = GlobalClassFactoryMap.Get(csobj_camera.GetCppInstanceTypeName());
						if (csobj_cameraClassFactory != null)
						{
							csobj_camera.Delegate = true;
							csobj_camera = csobj_cameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
							csobj_camera.BindNativeObject(camera, "CGlobeCamera");
							csobj_camera.Delegate = true;
						}
						
						BeforeUpdateLodState(csobj_lodStrategy, csobj_dynamicModelObject, csobj_camera);
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(IntPtr pNativeObject, IntPtr lodStrategy, IntPtr dynamicModelObject, IntPtr camera);

					/// <summary>
					/// 刷新LOD状态之前触发
					/// </summary>
					/// <param name="lodStrategy">LOD策略</param>
					/// <param name="dynamicModelObject">动态目标对象</param>
					/// <param name="camera">相机对象</param>
					public virtual void BeforeUpdateLodState(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy lodStrategy, EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject dynamicModelObject, EarthView.World.Spatial3D.GlobeCamera camera)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(this.NativeObject, object.Equals(lodStrategy, null) ? IntPtr.Zero : lodStrategy.NativeObject, object.Equals(dynamicModelObject, null) ? IntPtr.Zero : dynamicModelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyListener = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener", new DynamicLodStrategyListenerClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListenerProxy", new DynamicLodStrategyListenerClassFactory());

					public DynamicLodStrategyListener(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(IntPtr pObject, getName_CallBack_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(IntPtr pObject, setName_CallBack_void_EVString pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(IntPtr pObject, beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_getName_CallBack_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString_Function;
							GC.KeepAlive(m_getName_CallBack_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_getName_EVString(this.NativeObject, m_getName_CallBack_EVString);
							m_setName_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString_Function;
							GC.KeepAlive(m_setName_CallBack_void_EVString);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_setName_void_EVString(this.NativeObject, m_setName_CallBack_void_EVString);
							m_beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera_Function;
							GC.KeepAlive(m_beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyListener_beforeUpdateLodState_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera(this.NativeObject, m_beforeUpdateLodState_CallBack_void_CDynamicLodStrategy_CDynamicModelObject_CGlobeCamera);
						}
					}
					public static DynamicLodStrategyListener FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicLodStrategyListener obj = baseObj as  DynamicLodStrategyListener;
						if (object.Equals(obj, null))
						{
							obj = new DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicLodStrategyListener");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicLodStrategyListenerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicLodStrategyListener emptyInstance = new DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标LOD策略子项目，可以动态添加该项目
				/// </summary>
				public class DynamicLodStrategyItem : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 动态目标LOD策略子项目构造函数
					/// </summary>
					/// <param name="name">名称</param>
					public DynamicLodStrategyItem(string name) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuename = new BasePtr(name);
						list.Add("name", valuename.PtrVal);
						Create("CDynamicLodStrategyItemProxy", list);
						if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy+DynamicLodStrategyItem".Equals(((Object)this).GetType().ToString()))
						{
							this.SetCustomExtend(true);
						}
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate byte isPassed_CallBack_ev_bool_Real(ref double lodvalue);

					protected isPassed_CallBack_ev_bool_Real m_isPassed_CallBack_ev_bool_Real;

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
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_NoVirtual(IntPtr pNativeObject, ref double lodvalue);

					/// <summary>
					/// 是否通过验证
					/// </summary>
					/// <param name="lodvalue">要判断LOD的值</param>
					public virtual bool IsPassed_NoVirtual(double lodvalue)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_NoVirtual(this.NativeObject, ref lodvalue);
						
						return Convert.ToBoolean(ret);
						
					}

					protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Function(ref double lodvalue)
					{
						bool csret=IsPassed(lodvalue);
						
						return Convert.ToByte(csret);
						
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
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(IntPtr pNativeObject, ref double lodvalue);

					/// <summary>
					/// 是否通过验证
					/// </summary>
					/// <param name="lodvalue">要判断LOD的值</param>
					public virtual bool IsPassed(double lodvalue)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(this.NativeObject, ref lodvalue);
						
						return Convert.ToBoolean(ret);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setMaxVisibleValue_CallBack_void_Real(ref double maxVisibleValue);

					protected setMaxVisibleValue_CallBack_void_Real m_setMaxVisibleValue_CallBack_void_Real;

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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_NoVirtual(IntPtr pNativeObject, ref double maxVisibleValue);

					/// <summary>
					/// 设置最大可见值
					/// </summary>
					/// <param name="maxVisibleValue">最大可见值</param>
					public virtual void SetMaxVisibleValue_NoVirtual(double maxVisibleValue)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_NoVirtual(this.NativeObject, ref maxVisibleValue);
						
					}

					protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Function(ref double maxVisibleValue)
					{
						SetMaxVisibleValue(maxVisibleValue);
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(IntPtr pNativeObject, ref double maxVisibleValue);

					/// <summary>
					/// 设置最大可见值
					/// </summary>
					/// <param name="maxVisibleValue">最大可见值</param>
					public virtual void SetMaxVisibleValue(double maxVisibleValue)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(this.NativeObject, ref maxVisibleValue);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate void setMinVisibleValue_CallBack_void_Real(ref double minVisibleValue);

					protected setMinVisibleValue_CallBack_void_Real m_setMinVisibleValue_CallBack_void_Real;

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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_NoVirtual(IntPtr pNativeObject, ref double minVisibleValue);

					/// <summary>
					/// 设置最小可见值
					/// </summary>
					/// <param name="minVisibleValue">最小可见值</param>
					public virtual void SetMinVisibleValue_NoVirtual(double minVisibleValue)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_NoVirtual(this.NativeObject, ref minVisibleValue);
						
					}

					protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Function(ref double minVisibleValue)
					{
						SetMinVisibleValue(minVisibleValue);
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(IntPtr pNativeObject, ref double minVisibleValue);

					/// <summary>
					/// 设置最小可见值
					/// </summary>
					/// <param name="minVisibleValue">最小可见值</param>
					public virtual void SetMinVisibleValue(double minVisibleValue)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(this.NativeObject, ref minVisibleValue);
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getMaxVisibleValue_CallBack_Real();

					protected getMaxVisibleValue_CallBack_Real m_getMaxVisibleValue_CallBack_Real;

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
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取最大可见值
					/// </summary>
					/// <returns>最大可见值</returns>
					public virtual double GetMaxVisibleValue_NoVirtual()
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Function()
					{
						double csret=GetMaxVisibleValue();
						
						return csret;
						
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
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(IntPtr pNativeObject);

					/// <summary>
					/// 获取最大可见值
					/// </summary>
					/// <returns>最大可见值</returns>
					public virtual double GetMaxVisibleValue()
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(this.NativeObject);
						
						return ret;
						
					}

					[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
					protected delegate double getMinVisibleValue_CallBack_Real();

					protected getMinVisibleValue_CallBack_Real m_getMinVisibleValue_CallBack_Real;

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
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_NoVirtual(IntPtr pNativeObject);

					/// <summary>
					/// 获取最小可见值
					/// </summary>
					/// <returns>最小可见值</returns>
					public virtual double GetMinVisibleValue_NoVirtual()
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_NoVirtual(this.NativeObject);
						
						return ret;
						
					}

					protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Function()
					{
						double csret=GetMinVisibleValue();
						
						return csret;
						
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
					private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(IntPtr pNativeObject);

					/// <summary>
					/// 获取最小可见值
					/// </summary>
					/// <returns>最小可见值</returns>
					public virtual double GetMinVisibleValue()
					{
						double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(this.NativeObject);
						
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
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getName_EVString(IntPtr pNativeObject);

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					public string GetName()
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getName_EVString(this.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setName_void_EVString(IntPtr pNativeObject, string name);

					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="name">名称</param>
					public void SetName(string name)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setName_void_EVString(this.NativeObject, name);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyItem = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem", new DynamicLodStrategyItemClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemProxy", new DynamicLodStrategyItemClassFactory());

					public DynamicLodStrategyItem(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(IntPtr pObject, isPassed_CallBack_ev_bool_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(IntPtr pObject, setMaxVisibleValue_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(IntPtr pObject, setMinVisibleValue_CallBack_void_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(IntPtr pObject, getMaxVisibleValue_CallBack_Real pCallback);

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
					protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(IntPtr pObject, getMinVisibleValue_CallBack_Real pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_isPassed_CallBack_ev_bool_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real_Function;
							GC.KeepAlive(m_isPassed_CallBack_ev_bool_Real);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_isPassed_ev_bool_Real(this.NativeObject, m_isPassed_CallBack_ev_bool_Real);
							m_setMaxVisibleValue_CallBack_void_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real_Function;
							GC.KeepAlive(m_setMaxVisibleValue_CallBack_void_Real);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMaxVisibleValue_void_Real(this.NativeObject, m_setMaxVisibleValue_CallBack_void_Real);
							m_setMinVisibleValue_CallBack_void_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real_Function;
							GC.KeepAlive(m_setMinVisibleValue_CallBack_void_Real);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_setMinVisibleValue_void_Real(this.NativeObject, m_setMinVisibleValue_CallBack_void_Real);
							m_getMaxVisibleValue_CallBack_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real_Function;
							GC.KeepAlive(m_getMaxVisibleValue_CallBack_Real);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMaxVisibleValue_Real(this.NativeObject, m_getMaxVisibleValue_CallBack_Real);
							m_getMinVisibleValue_CallBack_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real_Function;
							GC.KeepAlive(m_getMinVisibleValue_CallBack_Real);
							EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItem_getMinVisibleValue_Real(this.NativeObject, m_getMinVisibleValue_CallBack_Real);
						}
					}
					public static DynamicLodStrategyItem FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicLodStrategyItem obj = baseObj as  DynamicLodStrategyItem;
						if (object.Equals(obj, null))
						{
							obj = new DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicLodStrategyItem");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicLodStrategyItemClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicLodStrategyItem emptyInstance = new DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标LOD策略子项目集合
				/// </summary>
				public class DynamicLodStrategyItemMap : EarthView.World.Core.BaseObject
				{
					/// <summary>
					///动态目标LOD策略子项目集合构造函数
					/// </summary>
					public DynamicLodStrategyItemMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CDynamicLodStrategyItemMap",  null);
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
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_push_ev_bool_EVString_CDynamicLodStrategyItem(IntPtr pNativeObject, string key, ref IntPtr ref_val);

					/// <summary>
					/// 压入指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <param name="ref_val">值对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
					/// <returns>是否成功</returns>
					public bool Push(string key, EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_val)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_push_ev_bool_EVString_CDynamicLodStrategyItem(this.NativeObject, key, ref ref_val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 获取是否存在指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>是否存在指定键值对象</returns>
					public bool Exist(string key)
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_exist_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_get_CDynamicLodStrategyItem_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					public EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem Get(string key)
					{
						IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_get_CDynamicLodStrategyItem_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CDynamicLodStrategyItem");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem;
							csObj.BindNativeObject(__ptr, "CDynamicLodStrategyItem");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_erase_void_EVString(IntPtr pNativeObject, string key);

					/// <summary>
					/// 移除指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					public void Erase(string key)
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_size_ev_size_t(IntPtr pNativeObject);

					/// <summary>
					/// 返回对象个数
					/// </summary>
					/// <returns>对象个数</returns>
					public ulong Size()
					{
						ulong ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_clear_void(IntPtr pNativeObject);

					/// <summary>
					/// 清除所有对象
					/// </summary>
					public void Clear()
					{
						EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_empty_ev_bool(IntPtr pNativeObject);

					/// <summary>
					/// 获取集合是否为空
					/// </summary>
					/// <returns>是否为空</returns>
					public bool Empty()
					{
						byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_CDynamicLodStrategyItemMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_d.so");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

						#else 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#elif Linux 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary.so");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

						#else 
							private static bool bLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary.dll");
							private static bool csbLoadDynamicLodStrategyItemMap = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap", new DynamicLodStrategyItemMapClassFactory());

					public DynamicLodStrategyItemMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static DynamicLodStrategyItemMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						DynamicLodStrategyItemMap obj = baseObj as  DynamicLodStrategyItemMap;
						if (object.Equals(obj, null))
						{
							obj = new DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CDynamicLodStrategyItemMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class DynamicLodStrategyItemMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						DynamicLodStrategyItemMap emptyInstance = new DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				/// <summary>
				/// 动态目标LOD策略构造函数
				/// </summary>
				public DynamicLodStrategy() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CDynamicLodStrategyProxy", null);
					if (!"EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(IntPtr modelObject, ref IntPtr lodStrategyItemName, IntPtr camera);

				protected isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera;

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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr modelObject, string lodStrategyItemName, IntPtr camera);

				/// <summary>
				/// 判断动态目标是否通过LOD验证
				/// </summary>
				/// <param name="modelObject">动态目标</param>
				/// <param name="lodStrategyItemName">子LOD项目名称</param>
				/// <param name="camera">相机</param>
				/// <returns>是否通过验证</returns>
				public virtual bool IsPassed_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, string lodStrategyItemName, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, lodStrategyItemName, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Function(IntPtr modelObject, ref IntPtr lodStrategyItemName, IntPtr camera)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_modelObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_modelObject.BindNativeObject(modelObject,"CDynamicModelObject");
					csobj_modelObject.Delegate = true;
					IClassFactory csobj_modelObjectClassFactory = GlobalClassFactoryMap.Get(csobj_modelObject.GetCppInstanceTypeName());
					if (csobj_modelObjectClassFactory != null)
					{
						csobj_modelObject.Delegate = true;
						csobj_modelObject = csobj_modelObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_modelObject.BindNativeObject(modelObject, "CDynamicModelObject");
						csobj_modelObject.Delegate = true;
					}
					string strlodStrategyItemName= Marshal.PtrToStringAnsi(lodStrategyItemName);
					ClassFactory.FreeString(ref lodStrategyItemName);
					EarthView.World.Spatial3D.GlobeCamera csobj_camera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_camera.BindNativeObject(camera,"CGlobeCamera");
					csobj_camera.Delegate = true;
					IClassFactory csobj_cameraClassFactory = GlobalClassFactoryMap.Get(csobj_camera.GetCppInstanceTypeName());
					if (csobj_cameraClassFactory != null)
					{
						csobj_camera.Delegate = true;
						csobj_camera = csobj_cameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
						csobj_camera.BindNativeObject(camera, "CGlobeCamera");
						csobj_camera.Delegate = true;
					}
					
					bool csret=IsPassed(csobj_modelObject, strlodStrategyItemName,csobj_camera);
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(IntPtr pNativeObject, IntPtr modelObject, string lodStrategyItemName, IntPtr camera);

				/// <summary>
				/// 判断动态目标是否通过LOD验证
				/// </summary>
				/// <param name="modelObject">动态目标</param>
				/// <param name="lodStrategyItemName">子LOD项目名称</param>
				/// <param name="camera">相机</param>
				/// <returns>是否通过验证</returns>
				public virtual bool IsPassed(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, string lodStrategyItemName, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					byte ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, lodStrategyItemName, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setMaxVisibleValue_CallBack_void_EVString_Real(ref IntPtr name, ref double maxVisibleValue);

				protected setMaxVisibleValue_CallBack_void_EVString_Real m_setMaxVisibleValue_CallBack_void_EVString_Real;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_NoVirtual(IntPtr pNativeObject, string name, ref double maxVisibleValue);

				/// <summary>
				/// 设置最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="maxVisibleValue">最大可见值</param>
				public virtual void SetMaxVisibleValue_NoVirtual(string name, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_NoVirtual(this.NativeObject, name, ref maxVisibleValue);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Function(ref IntPtr name, ref double maxVisibleValue)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetMaxVisibleValue(strname,maxVisibleValue);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(IntPtr pNativeObject, string name, ref double maxVisibleValue);

				/// <summary>
				/// 设置最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="maxVisibleValue">最大可见值</param>
				public virtual void SetMaxVisibleValue(string name, double maxVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(this.NativeObject, name, ref maxVisibleValue);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void setMinVisibleValue_CallBack_void_EVString_Real(ref IntPtr name, ref double minVisibleValue);

				protected setMinVisibleValue_CallBack_void_EVString_Real m_setMinVisibleValue_CallBack_void_EVString_Real;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_NoVirtual(IntPtr pNativeObject, string name, ref double minVisibleValue);

				/// <summary>
				/// 设置最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="minVisibleValue">最小可见值</param>
				public virtual void SetMinVisibleValue_NoVirtual(string name, double minVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_NoVirtual(this.NativeObject, name, ref minVisibleValue);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Function(ref IntPtr name, ref double minVisibleValue)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					SetMinVisibleValue(strname,minVisibleValue);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(IntPtr pNativeObject, string name, ref double minVisibleValue);

				/// <summary>
				/// 设置最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="minVisibleValue">最小可见值</param>
				public virtual void SetMinVisibleValue(string name, double minVisibleValue)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(this.NativeObject, name, ref minVisibleValue);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getMaxVisibleValue_CallBack_Real_EVString(ref IntPtr name);

				protected getMaxVisibleValue_CallBack_Real_EVString m_getMaxVisibleValue_CallBack_Real_EVString;

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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最大可见值</returns>
				public virtual double GetMaxVisibleValue_NoVirtual(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					double csret=GetMaxVisibleValue(strname);
					
					return csret;
					
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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最大可见值</returns>
				public virtual double GetMaxVisibleValue(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getMinVisibleValue_CallBack_Real_EVString(ref IntPtr name);

				protected getMinVisibleValue_CallBack_Real_EVString m_getMinVisibleValue_CallBack_Real_EVString;

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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最小可见值</returns>
				public virtual double GetMinVisibleValue_NoVirtual(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_NoVirtual(this.NativeObject, name);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					double csret=GetMinVisibleValue(strname);
					
					return csret;
					
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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 获取最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最小可见值</returns>
				public virtual double GetMinVisibleValue(string name)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(this.NativeObject, name);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem(IntPtr ref_lodStrategyItem);

				protected registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_NoVirtual(IntPtr pNativeObject, IntPtr ref_lodStrategyItem);

				/// <summary>
				/// 注册子LOD项目
				/// </summary>
				/// <param name="ref_lodStrategyItem">子LOD项目,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void RegisterLodStrategyItem_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_NoVirtual(this.NativeObject, object.Equals(ref_lodStrategyItem, null) ? IntPtr.Zero : ref_lodStrategyItem.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Function(IntPtr ref_lodStrategyItem)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem csobj_ref_lodStrategyItem = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_lodStrategyItem.BindNativeObject(ref_lodStrategyItem,"CDynamicLodStrategyItem");
					csobj_ref_lodStrategyItem.Delegate = true;
					IClassFactory csobj_ref_lodStrategyItemClassFactory = GlobalClassFactoryMap.Get(csobj_ref_lodStrategyItem.GetCppInstanceTypeName());
					if (csobj_ref_lodStrategyItemClassFactory != null)
					{
						csobj_ref_lodStrategyItem.Delegate = true;
						csobj_ref_lodStrategyItem = csobj_ref_lodStrategyItemClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem;
						csobj_ref_lodStrategyItem.BindNativeObject(ref_lodStrategyItem, "CDynamicLodStrategyItem");
						csobj_ref_lodStrategyItem.Delegate = true;
					}
					
					RegisterLodStrategyItem(csobj_ref_lodStrategyItem);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(IntPtr pNativeObject, IntPtr ref_lodStrategyItem);

				/// <summary>
				/// 注册子LOD项目
				/// </summary>
				/// <param name="ref_lodStrategyItem">子LOD项目,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void RegisterLodStrategyItem(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItem ref_lodStrategyItem)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(this.NativeObject, object.Equals(ref_lodStrategyItem, null) ? IntPtr.Zero : ref_lodStrategyItem.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void unregisterLodStrategyItem_CallBack_void_EVString(ref IntPtr name);

				protected unregisterLodStrategyItem_CallBack_void_EVString m_unregisterLodStrategyItem_CallBack_void_EVString;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 反注册LOD项目
				/// </summary>
				/// <param name="name">lod子项名称</param>
				public virtual void UnregisterLodStrategyItem_NoVirtual(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					UnregisterLodStrategyItem(strname);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 反注册LOD项目
				/// </summary>
				/// <param name="name">lod子项名称</param>
				public virtual void UnregisterLodStrategyItem(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(this.NativeObject, name);
					
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
				private static extern IntPtr EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodStrategyItemMap_CDynamicLodStrategyItemMap(IntPtr pNativeObject);

				/// <summary>
				/// 获取LOD子项目列表
				/// </summary>
				/// <returns>LOD子项目列表</returns>
				public EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemMap GetLodStrategyItemMap()
				{
					IntPtr __ptr = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodStrategyItemMap_CDynamicLodStrategyItemMap(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemMap csObj = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CDynamicLodStrategyItemMap");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemMap;
						csObj.BindNativeObject(__ptr, "CDynamicLodStrategyItemMap");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener(IntPtr ref_lodStrategyListener);

				protected addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_NoVirtual(IntPtr pNativeObject, IntPtr ref_lodStrategyListener);

				/// <summary>
				/// 添加LOD策略监听
				/// </summary>
				/// <param name="ref_lodStrategyListener">LOD策略监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void AddLodStrategyListener_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_NoVirtual(this.NativeObject, object.Equals(ref_lodStrategyListener, null) ? IntPtr.Zero : ref_lodStrategyListener.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Function(IntPtr ref_lodStrategyListener)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener csobj_ref_lodStrategyListener = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_lodStrategyListener.BindNativeObject(ref_lodStrategyListener,"CDynamicLodStrategyListener");
					csobj_ref_lodStrategyListener.Delegate = true;
					IClassFactory csobj_ref_lodStrategyListenerClassFactory = GlobalClassFactoryMap.Get(csobj_ref_lodStrategyListener.GetCppInstanceTypeName());
					if (csobj_ref_lodStrategyListenerClassFactory != null)
					{
						csobj_ref_lodStrategyListener.Delegate = true;
						csobj_ref_lodStrategyListener = csobj_ref_lodStrategyListenerClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener;
						csobj_ref_lodStrategyListener.BindNativeObject(ref_lodStrategyListener, "CDynamicLodStrategyListener");
						csobj_ref_lodStrategyListener.Delegate = true;
					}
					
					AddLodStrategyListener(csobj_ref_lodStrategyListener);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(IntPtr pNativeObject, IntPtr ref_lodStrategyListener);

				/// <summary>
				/// 添加LOD策略监听
				/// </summary>
				/// <param name="ref_lodStrategyListener">LOD策略监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				public virtual void AddLodStrategyListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListener ref_lodStrategyListener)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(this.NativeObject, object.Equals(ref_lodStrategyListener, null) ? IntPtr.Zero : ref_lodStrategyListener.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void removeLodStrategyListener_CallBack_void_EVString(ref IntPtr name);

				protected removeLodStrategyListener_CallBack_void_EVString m_removeLodStrategyListener_CallBack_void_EVString;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_NoVirtual(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除LOD策略监听
				/// </summary>
				/// <param name="name">lod监听名称</param>
				public virtual void RemoveLodStrategyListener_NoVirtual(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_NoVirtual(this.NativeObject, name);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					RemoveLodStrategyListener(strname);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(IntPtr pNativeObject, string name);

				/// <summary>
				/// 删除LOD策略监听
				/// </summary>
				/// <param name="name">lod监听名称</param>
				public virtual void RemoveLodStrategyListener(string name)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(this.NativeObject, name);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate double getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera(IntPtr modelObject, IntPtr camera);

				protected getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera;

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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				protected virtual double GetLodValue_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				protected  double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Function(IntPtr modelObject, IntPtr camera)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_modelObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_modelObject.BindNativeObject(modelObject,"CDynamicModelObject");
					csobj_modelObject.Delegate = true;
					IClassFactory csobj_modelObjectClassFactory = GlobalClassFactoryMap.Get(csobj_modelObject.GetCppInstanceTypeName());
					if (csobj_modelObjectClassFactory != null)
					{
						csobj_modelObject.Delegate = true;
						csobj_modelObject = csobj_modelObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_modelObject.BindNativeObject(modelObject, "CDynamicModelObject");
						csobj_modelObject.Delegate = true;
					}
					EarthView.World.Spatial3D.GlobeCamera csobj_camera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_camera.BindNativeObject(camera,"CGlobeCamera");
					csobj_camera.Delegate = true;
					IClassFactory csobj_cameraClassFactory = GlobalClassFactoryMap.Get(csobj_camera.GetCppInstanceTypeName());
					if (csobj_cameraClassFactory != null)
					{
						csobj_camera.Delegate = true;
						csobj_camera = csobj_cameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
						csobj_camera.BindNativeObject(camera, "CGlobeCamera");
						csobj_camera.Delegate = true;
					}
					
					double csret=GetLodValue(csobj_modelObject, csobj_camera);
					
					return csret;
					
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
				private static extern double EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				protected virtual double GetLodValue(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					double ret=EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
					return ret;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera(IntPtr modelObject, IntPtr camera);

				protected fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera;

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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_NoVirtual(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 触发lod策略响应
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				protected virtual void FireLodStrategyListener_NoVirtual(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_NoVirtual(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
				}

				protected  void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Function(IntPtr modelObject, IntPtr camera)
				{
					EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject csobj_modelObject = new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_modelObject.BindNativeObject(modelObject,"CDynamicModelObject");
					csobj_modelObject.Delegate = true;
					IClassFactory csobj_modelObjectClassFactory = GlobalClassFactoryMap.Get(csobj_modelObject.GetCppInstanceTypeName());
					if (csobj_modelObjectClassFactory != null)
					{
						csobj_modelObject.Delegate = true;
						csobj_modelObject = csobj_modelObjectClassFactory.Create() as EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject;
						csobj_modelObject.BindNativeObject(modelObject, "CDynamicModelObject");
						csobj_modelObject.Delegate = true;
					}
					EarthView.World.Spatial3D.GlobeCamera csobj_camera = new EarthView.World.Spatial3D.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_camera.BindNativeObject(camera,"CGlobeCamera");
					csobj_camera.Delegate = true;
					IClassFactory csobj_cameraClassFactory = GlobalClassFactoryMap.Get(csobj_camera.GetCppInstanceTypeName());
					if (csobj_cameraClassFactory != null)
					{
						csobj_camera.Delegate = true;
						csobj_camera = csobj_cameraClassFactory.Create() as EarthView.World.Spatial3D.GlobeCamera;
						csobj_camera.BindNativeObject(camera, "CGlobeCamera");
						csobj_camera.Delegate = true;
					}
					
					FireLodStrategyListener(csobj_modelObject, csobj_camera);
					
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
				private static extern void EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(IntPtr pNativeObject, IntPtr modelObject, IntPtr camera);

				/// <summary>
				/// 触发lod策略响应
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				protected virtual void FireLodStrategyListener(EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject modelObject, EarthView.World.Spatial3D.GlobeCamera camera)
				{
					EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(this.NativeObject, object.Equals(modelObject, null) ? IntPtr.Zero : modelObject.NativeObject, object.Equals(camera, null) ? IntPtr.Zero : camera.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.so");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.so");

					#else 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_d.dll");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#elif Linux 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.so");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.so");

					#else 
						private static bool bLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary.dll");
						private static bool csbLoadDynamicLodStrategy = LoadDll.Load("EV_DynamicModelLibrary_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy", new DynamicLodStrategyClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategyProxy", new DynamicLodStrategyClassFactory());

				public DynamicLodStrategy(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(IntPtr pObject, isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(IntPtr pObject, setMaxVisibleValue_CallBack_void_EVString_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(IntPtr pObject, setMinVisibleValue_CallBack_void_EVString_Real pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(IntPtr pObject, getMaxVisibleValue_CallBack_Real_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(IntPtr pObject, getMinVisibleValue_CallBack_Real_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(IntPtr pObject, registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(IntPtr pObject, unregisterLodStrategyItem_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(IntPtr pObject, addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(IntPtr pObject, removeLodStrategyListener_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(IntPtr pObject, getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(IntPtr pObject, fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera_Function;
						GC.KeepAlive(m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_isPassed_ev_bool_CDynamicModelObject_EVString_CGlobeCamera(this.NativeObject, m_isPassed_CallBack_ev_bool_CDynamicModelObject_EVString_CGlobeCamera);
						m_setMaxVisibleValue_CallBack_void_EVString_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real_Function;
						GC.KeepAlive(m_setMaxVisibleValue_CallBack_void_EVString_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMaxVisibleValue_void_EVString_Real(this.NativeObject, m_setMaxVisibleValue_CallBack_void_EVString_Real);
						m_setMinVisibleValue_CallBack_void_EVString_Real = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real_Function;
						GC.KeepAlive(m_setMinVisibleValue_CallBack_void_EVString_Real);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_setMinVisibleValue_void_EVString_Real(this.NativeObject, m_setMinVisibleValue_CallBack_void_EVString_Real);
						m_getMaxVisibleValue_CallBack_Real_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString_Function;
						GC.KeepAlive(m_getMaxVisibleValue_CallBack_Real_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMaxVisibleValue_Real_EVString(this.NativeObject, m_getMaxVisibleValue_CallBack_Real_EVString);
						m_getMinVisibleValue_CallBack_Real_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString_Function;
						GC.KeepAlive(m_getMinVisibleValue_CallBack_Real_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getMinVisibleValue_Real_EVString(this.NativeObject, m_getMinVisibleValue_CallBack_Real_EVString);
						m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem_Function;
						GC.KeepAlive(m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_registerLodStrategyItem_void_CDynamicLodStrategyItem(this.NativeObject, m_registerLodStrategyItem_CallBack_void_CDynamicLodStrategyItem);
						m_unregisterLodStrategyItem_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString_Function;
						GC.KeepAlive(m_unregisterLodStrategyItem_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_unregisterLodStrategyItem_void_EVString(this.NativeObject, m_unregisterLodStrategyItem_CallBack_void_EVString);
						m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener_Function;
						GC.KeepAlive(m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_addLodStrategyListener_void_CDynamicLodStrategyListener(this.NativeObject, m_addLodStrategyListener_CallBack_void_CDynamicLodStrategyListener);
						m_removeLodStrategyListener_CallBack_void_EVString = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString_Function;
						GC.KeepAlive(m_removeLodStrategyListener_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_removeLodStrategyListener_void_EVString(this.NativeObject, m_removeLodStrategyListener_CallBack_void_EVString);
						m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera_Function;
						GC.KeepAlive(m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_getLodValue_Real_CDynamicModelObject_CGlobeCamera(this.NativeObject, m_getLodValue_CallBack_Real_CDynamicModelObject_CGlobeCamera);
						m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera = EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera_Function;
						GC.KeepAlive(m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera);
						EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicLodStrategy_fireLodStrategyListener_void_CDynamicModelObject_CGlobeCamera(this.NativeObject, m_fireLodStrategyListener_CallBack_void_CDynamicModelObject_CGlobeCamera);
					}
				}
				public static DynamicLodStrategy FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					DynamicLodStrategy obj = baseObj as  DynamicLodStrategy;
					if (object.Equals(obj, null))
					{
						obj = new DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CDynamicLodStrategy");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class DynamicLodStrategyClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					DynamicLodStrategy emptyInstance = new DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
