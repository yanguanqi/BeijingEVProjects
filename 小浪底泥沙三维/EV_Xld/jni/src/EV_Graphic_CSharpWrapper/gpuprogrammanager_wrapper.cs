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
			public class GpuProgramManager : EarthView.World.Graphic.ResourceManager
			{

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSingleton_CGpuProgramManager();

				public static EarthView.World.Graphic.GpuProgramManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSingleton_CGpuProgramManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramManager csObj = new EarthView.World.Graphic.GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager;
						csObj.BindNativeObject(__ptr, "CGpuProgramManager");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSingletonPtr_CGpuProgramManager();

				public static EarthView.World.Graphic.GpuProgramManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSingletonPtr_CGpuProgramManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramManager csObj = new EarthView.World.Graphic.GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager;
						csObj.BindNativeObject(__ptr, "CGpuProgramManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public class SharedParametersMap : EarthView.World.Core.BaseObject
				{
					public SharedParametersMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("SharedParametersMap",  null);
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_push_ev_bool_EVString_GpuSharedParametersPtr(IntPtr pNativeObject, string key, IntPtr val);

					public bool Push(string key, EarthView.World.Graphic.GpuSharedParametersPtr val)
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_push_ev_bool_EVString_GpuSharedParametersPtr(this.NativeObject, key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					public bool Exist(string key)
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_exist_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_get_GpuSharedParametersPtr_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Graphic.GpuSharedParametersPtr Get(string key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_get_GpuSharedParametersPtr_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_erase_void_EVString(IntPtr pNativeObject, string key);

					public void Erase(string key)
					{
						EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_SharedParametersMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadSharedParametersMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadSharedParametersMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManager::SharedParametersMap", new SharedParametersMapClassFactory());

					public SharedParametersMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static SharedParametersMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						SharedParametersMap obj = baseObj as  SharedParametersMap;
						if (object.Equals(obj, null))
						{
							obj = new SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "SharedParametersMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class SharedParametersMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						SharedParametersMap emptyInstance = new SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GpuSharedParametersPtrPair : EarthView.World.Core.BaseObject
				{
					public GpuSharedParametersPtrPair() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("GpuSharedParametersPtrPair",  null);
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
					private static extern ushort Get_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_first(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_first( IntPtr pObject, ushort value );

					public 					ushort First
					{
						get
						{
							ushort ret=Get_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_first(this.NativeObject);
							
							return ret;
							
						}

						set
						{
							Set_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_first(this.NativeObject,value);
						}
					}

					private EarthView.World.Graphic.GpuSharedParametersPtr secondField;
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
					private static extern IntPtr Get_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_second(IntPtr pObject);

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
					private static extern void Set_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_second( IntPtr pObject, IntPtr value );

					public 					EarthView.World.Graphic.GpuSharedParametersPtr Second
					{
						get
						{
							IntPtr __ptr = Get_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_second(this.NativeObject);
							
							if(__ptr==IntPtr.Zero)
							{
							return null;
							}
							if(!object.Equals(secondField, null)){
								secondField.NativeObject = __ptr;
								return secondField;
							}
							EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
							csObj.Delegate = true;
							IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
							if (csObjClassFactory != null)
							{
								csObj.Delegate = true;
								csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
								csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
								csObj.Delegate = true;
							}
							return csObj;
							
						}

						set
						{
							secondField = value;
							Set_EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrPair_second( this.NativeObject,object.Equals(value, null) ? IntPtr.Zero : value.NativeObject );
						}
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuSharedParametersPtrPair = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrPair", new GpuSharedParametersPtrPairClassFactory());

					public GpuSharedParametersPtrPair(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GpuSharedParametersPtrPair FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GpuSharedParametersPtrPair obj = baseObj as  GpuSharedParametersPtrPair;
						if (object.Equals(obj, null))
						{
							obj = new GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "GpuSharedParametersPtrPair");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GpuSharedParametersPtrPairClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GpuSharedParametersPtrPair emptyInstance = new GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class GpuSharedParametersPtrIterator : EarthView.World.Core.BaseObject
				{
					public GpuSharedParametersPtrIterator(ref EarthView.World.Graphic.GpuProgramManager.SharedParametersMap lst) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valuelst = new BasePtr(lst);
						list.Add("lst", valuelst.PtrVal);
						Create("GpuSharedParametersPtrIterator", list);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}
					public GpuSharedParametersPtrIterator(EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrIterator other) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueother = new BasePtr(other);
						list.Add("other", valueother.PtrVal);
						Create("GpuSharedParametersPtrIterator", list);
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_hasMoreElements_ev_bool(IntPtr pNativeObject);

					public bool HasMoreElements()
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_hasMoreElements_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern void EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_moveNext_void(IntPtr pNativeObject);

					public void MoveNext()
					{
						EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_moveNext_void(this.NativeObject);
						
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
					private static extern ushort EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextKey_ev_uint16(IntPtr pNativeObject);

					public ushort NextKey()
					{
						ushort ret=EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextKey_ev_uint16(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextValue_GpuSharedParametersPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuSharedParametersPtr NextValue()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextValue_GpuSharedParametersPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextValuePtr_GpuSharedParametersPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuSharedParametersPtr NextValuePtr()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_nextValuePtr_GpuSharedParametersPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_next_GpuSharedParametersPtr(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuSharedParametersPtr Next()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_next_GpuSharedParametersPtr(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getBegin_GpuSharedParametersPtrPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair GetBegin()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getBegin_GpuSharedParametersPtrPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair csObj = new EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getEnd_GpuSharedParametersPtrPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair GetEnd()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getEnd_GpuSharedParametersPtrPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair csObj = new EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getCurrent_GpuSharedParametersPtrPair(IntPtr pNativeObject);

					public EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair GetCurrent()
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_GpuSharedParametersPtrIterator_getCurrent_GpuSharedParametersPtrPair(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair csObj = new EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager.GpuSharedParametersPtrPair;
							csObj.BindNativeObject(__ptr, "GpuSharedParametersPtrPair");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadGpuSharedParametersPtrIterator = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManager::GpuSharedParametersPtrIterator", new GpuSharedParametersPtrIteratorClassFactory());

					public GpuSharedParametersPtrIterator(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static GpuSharedParametersPtrIterator FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						GpuSharedParametersPtrIterator obj = baseObj as  GpuSharedParametersPtrIterator;
						if (object.Equals(obj, null))
						{
							obj = new GpuSharedParametersPtrIterator(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "GpuSharedParametersPtrIterator");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class GpuSharedParametersPtrIteratorClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						GpuSharedParametersPtrIterator emptyInstance = new GpuSharedParametersPtrIterator(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				public class MicrocodeMap : EarthView.World.Core.BaseObject
				{
					public MicrocodeMap() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("MicrocodeMap",  null);
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_push_ev_bool_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string key, IntPtr val);

					public bool Push(string key, EarthView.World.Core.MemoryDataStreamPtr val)
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_push_ev_bool_EVString_MemoryDataStreamPtr(this.NativeObject, key, object.Equals(val, null) ? IntPtr.Zero : val.NativeObject);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_exist_ev_bool_EVString(IntPtr pNativeObject, string key);

					public bool Exist(string key)
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_exist_ev_bool_EVString(this.NativeObject, key);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_get_MemoryDataStreamPtr_EVString(IntPtr pNativeObject, string key);

					public EarthView.World.Core.MemoryDataStreamPtr Get(string key)
					{
						IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_get_MemoryDataStreamPtr_EVString(this.NativeObject, key);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
							csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
							csObj.Delegate = true;
						}
						return csObj;
						
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
					private static extern void EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_erase_void_EVString(IntPtr pNativeObject, string key);

					public void Erase(string key)
					{
						EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_erase_void_EVString(this.NativeObject, key);
						
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
					private static extern ulong EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_size_ev_size_t(IntPtr pNativeObject);

					public ulong Size()
					{
						ulong ret=EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_size_ev_size_t(this.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_clear_void(IntPtr pNativeObject);

					public void Clear()
					{
						EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_clear_void(this.NativeObject);
						
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
					private static extern byte EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_empty_ev_bool(IntPtr pNativeObject);

					public bool Empty()
					{
						byte ret=EarthView_World_Graphic_CGpuProgramManager_MicrocodeMap_empty_ev_bool(this.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadMicrocodeMap = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMicrocodeMap = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManager::MicrocodeMap", new MicrocodeMapClassFactory());

					public MicrocodeMap(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static MicrocodeMap FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MicrocodeMap obj = baseObj as  MicrocodeMap;
						if (object.Equals(obj, null))
						{
							obj = new MicrocodeMap(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "MicrocodeMap");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MicrocodeMapClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MicrocodeMap emptyInstance = new MicrocodeMap(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				protected virtual EarthView.World.Graphic.Resource CreateImpl_NoVirtual(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_Function(ref IntPtr name, ulong handle, ref IntPtr group, bool isManual, IntPtr ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.Resource csret=CreateImpl(strname,handle, strgroup,isManual, csobj_ref_loader, gptype, strsyntaxCode);
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				protected virtual EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.Resource csObj = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CResource");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.Resource;
						csObj.BindNativeObject(__ptr, "CResource");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public GpuProgramManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CGpuProgramManagerProxy", null);
					if (!"EarthView.World.Graphic.GpuProgramManager".Equals(((Object)this).GetType().ToString()))
					{
						this.SetCustomExtend(true);
					}
					RegisterCallBack();
					this.needDispose = true;
					GlobalTraceInfoMap.Put(this);
				}
				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(ref IntPtr name, ref IntPtr groupName, ref IntPtr filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString m_load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr Load_NoVirtual(string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, groupName, filename, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function(ref IntPtr name, ref IntPtr groupName, ref IntPtr filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.GpuProgramPtr csret=Load(strname,strgroupName,strfilename,gptype, strsyntaxCode);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pNativeObject, string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr Load(string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, name, groupName, filename, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(ref IntPtr name, ref IntPtr groupName, ref IntPtr code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString m_loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr LoadFromString_NoVirtual(string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, groupName, code, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function(ref IntPtr name, ref IntPtr groupName, ref IntPtr code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.GpuProgramPtr csret=LoadFromString(strname,strgroupName,strcode,gptype, strsyntaxCode);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pNativeObject, string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr LoadFromString(string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, name, groupName, code, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getSupportedSyntax_CallBack_ShaderProfiles();

				protected getSupportedSyntax_CallBack_ShaderProfiles m_getSupportedSyntax_CallBack_ShaderProfiles;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ShaderProfiles GetSupportedSyntax_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShaderProfiles csObj = new EarthView.World.Graphic.ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShaderProfiles");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShaderProfiles;
						csObj.BindNativeObject(__ptr, "ShaderProfiles");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles_Function()
				{
					EarthView.World.Graphic.ShaderProfiles csret=GetSupportedSyntax();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.ShaderProfiles GetSupportedSyntax()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ShaderProfiles csObj = new EarthView.World.Graphic.ShaderProfiles(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ShaderProfiles");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ShaderProfiles;
						csObj.BindNativeObject(__ptr, "ShaderProfiles");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate byte isSyntaxSupported_CallBack_ev_bool_EVString(ref IntPtr syntaxCode);

				protected isSyntaxSupported_CallBack_ev_bool_EVString m_isSyntaxSupported_CallBack_ev_bool_EVString;

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
				private static extern byte EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString_NoVirtual(IntPtr pNativeObject, string syntaxCode);

				public virtual bool IsSyntaxSupported_NoVirtual(string syntaxCode)
				{
					byte ret=EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString_NoVirtual(this.NativeObject, syntaxCode);
					
					return Convert.ToBoolean(ret);
					
				}

				protected  byte EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString_Function(ref IntPtr syntaxCode)
				{
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					bool csret=IsSyntaxSupported(strsyntaxCode);
					
					return Convert.ToByte(csret);
					
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
				private static extern byte EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString(IntPtr pNativeObject, string syntaxCode);

				public virtual bool IsSyntaxSupported(string syntaxCode)
				{
					byte ret=EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString(this.NativeObject, syntaxCode);
					
					return Convert.ToBoolean(ret);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createParameters_CallBack_GpuProgramParametersSharedPtr();

				protected createParameters_CallBack_GpuProgramParametersSharedPtr m_createParameters_CallBack_GpuProgramParametersSharedPtr;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.GpuProgramParametersSharedPtr CreateParameters_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramParametersSharedPtr csObj = new EarthView.World.Graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuProgramParametersSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramParametersSharedPtr;
						csObj.BindNativeObject(__ptr, "GpuProgramParametersSharedPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr_Function()
				{
					EarthView.World.Graphic.GpuProgramParametersSharedPtr csret=CreateParameters();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.GpuProgramParametersSharedPtr CreateParameters()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramParametersSharedPtr csObj = new EarthView.World.Graphic.GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuProgramParametersSharedPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramParametersSharedPtr;
						csObj.BindNativeObject(__ptr, "GpuProgramParametersSharedPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(ref IntPtr name, ref IntPtr groupName, ref IntPtr filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString m_createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr CreateProgram_NoVirtual(string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, groupName, filename, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function(ref IntPtr name, ref IntPtr groupName, ref IntPtr filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.GpuProgramPtr csret=CreateProgram(strname,strgroupName,strfilename,gptype, strsyntaxCode);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pNativeObject, string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr CreateProgram(string name, string groupName, string filename, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, name, groupName, filename, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(ref IntPtr name, ref IntPtr groupName, ref IntPtr code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString m_createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr CreateProgramFromString_NoVirtual(string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, groupName, code, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function(ref IntPtr name, ref IntPtr groupName, ref IntPtr code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					string strcode= Marshal.PtrToStringAnsi(code);
					ClassFactory.FreeString(ref code);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.GpuProgramPtr csret=CreateProgramFromString(strname,strgroupName,strcode,gptype, strsyntaxCode);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pNativeObject, string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.GpuProgramPtr CreateProgramFromString(string name, string groupName, string code, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, name, groupName, code, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramPtr csObj = new EarthView.World.Graphic.GpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramPtr;
						csObj.BindNativeObject(__ptr, "CGpuProgramPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode, bool isManual, IntPtr ref_loader);

				protected create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, gptype, syntaxCode, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode, bool isManual, IntPtr ref_loader)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					EarthView.World.Graphic.ManualResourceLoader csobj_ref_loader = new EarthView.World.Graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_ref_loader.BindNativeObject(ref_loader,"CManualResourceLoader");
					csobj_ref_loader.Delegate = true;
					IClassFactory csobj_ref_loaderClassFactory = GlobalClassFactoryMap.Get(csobj_ref_loader.GetCppInstanceTypeName());
					if (csobj_ref_loaderClassFactory != null)
					{
						csobj_ref_loader.Delegate = true;
						csobj_ref_loader = csobj_ref_loaderClassFactory.Create() as EarthView.World.Graphic.ManualResourceLoader;
						csobj_ref_loader.BindNativeObject(ref_loader, "CManualResourceLoader");
						csobj_ref_loader.Delegate = true;
					}
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,gptype, strsyntaxCode,isManual, csobj_ref_loader);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, byte isManual, IntPtr ref_loader);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, gptype, syntaxCode, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode, bool isManual);

				protected create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, gptype, syntaxCode, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode, bool isManual)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,gptype, strsyntaxCode,isManual);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, byte isManual);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool(this.NativeObject, name, group, gptype, syntaxCode, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode);

				protected create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_NoVirtual(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.ResourcePtr Create_NoVirtual(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_NoVirtual(this.NativeObject, name, group, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_Function(ref IntPtr name, ref IntPtr group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, ref IntPtr syntaxCode)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					string strgroup= Marshal.PtrToStringAnsi(group);
					ClassFactory.FreeString(ref group);
					string strsyntaxCode= Marshal.PtrToStringAnsi(syntaxCode);
					ClassFactory.FreeString(ref syntaxCode);
					
					EarthView.World.Graphic.ResourcePtr csret=Create(strname,strgroup,gptype, strsyntaxCode);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString(IntPtr pNativeObject, string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode);

				public virtual EarthView.World.Graphic.ResourcePtr Create(string name, string group, EarthView.World.Graphic.GPUPROGRAMTYPE gptype, string syntaxCode)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString(this.NativeObject, name, group, gptype, syntaxCode);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_ev_bool(IntPtr pNativeObject, string name, byte preferHighLevelPrograms);

				public EarthView.World.Graphic.ResourcePtr GetByName(string name, bool preferHighLevelPrograms)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_ev_bool(this.NativeObject, name, Convert.ToByte(preferHighLevelPrograms));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public new EarthView.World.Graphic.ResourcePtr GetByName_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString(IntPtr pNativeObject, string name);

				public override EarthView.World.Graphic.ResourcePtr GetByName(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string groupName);

				public new EarthView.World.Graphic.ResourcePtr GetByName_NoVirtual(string name, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString_NoVirtual(this.NativeObject, name, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

				public override EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, name, groupName);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string groupName, byte preferHighLevelPrograms);

				public EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName, bool preferHighLevelPrograms)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, name, groupName, Convert.ToByte(preferHighLevelPrograms));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourcePtr csObj = new EarthView.World.Graphic.ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourcePtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourcePtr;
						csObj.BindNativeObject(__ptr, "ResourcePtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr createSharedParameters_CallBack_GpuSharedParametersPtr_EVString(ref IntPtr name);

				protected createSharedParameters_CallBack_GpuSharedParametersPtr_EVString m_createSharedParameters_CallBack_GpuSharedParametersPtr_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.GpuSharedParametersPtr CreateSharedParameters_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.GpuSharedParametersPtr csret=CreateSharedParameters(strname);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.GpuSharedParametersPtr CreateSharedParameters(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getSharedParameters_CallBack_GpuSharedParametersPtr_EVString(ref IntPtr name);

				protected getSharedParameters_CallBack_GpuSharedParametersPtr_EVString m_getSharedParameters_CallBack_GpuSharedParametersPtr_EVString;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString_NoVirtual(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.GpuSharedParametersPtr GetSharedParameters_NoVirtual(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString_NoVirtual(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString_Function(ref IntPtr name)
				{
					string strname= Marshal.PtrToStringAnsi(name);
					ClassFactory.FreeString(ref name);
					
					EarthView.World.Graphic.GpuSharedParametersPtr csret=GetSharedParameters(strname);
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString(IntPtr pNativeObject, string name);

				public virtual EarthView.World.Graphic.GpuSharedParametersPtr GetSharedParameters(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuSharedParametersPtr csObj = new EarthView.World.Graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuSharedParametersPtr;
						csObj.BindNativeObject(__ptr, "GpuSharedParametersPtr");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getAvailableSharedParameters_CallBack_SharedParametersMap();

				protected getAvailableSharedParameters_CallBack_SharedParametersMap m_getAvailableSharedParameters_CallBack_SharedParametersMap;

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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.GpuProgramManager.SharedParametersMap GetAvailableSharedParameters_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramManager.SharedParametersMap csObj = new EarthView.World.Graphic.GpuProgramManager.SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "SharedParametersMap");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager.SharedParametersMap;
						csObj.BindNativeObject(__ptr, "SharedParametersMap");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap_Function()
				{
					EarthView.World.Graphic.GpuProgramManager.SharedParametersMap csret=GetAvailableSharedParameters();
					
					if (!object.Equals(csret, null))
					{
					    return csret.NativeObject;
					}
					else
					{
					    return IntPtr.Zero;
					}
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.GpuProgramManager.SharedParametersMap GetAvailableSharedParameters()
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.GpuProgramManager.SharedParametersMap csObj = new EarthView.World.Graphic.GpuProgramManager.SharedParametersMap(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "SharedParametersMap");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.GpuProgramManager.SharedParametersMap;
						csObj.BindNativeObject(__ptr, "SharedParametersMap");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern byte EarthView_World_Graphic_CGpuProgramManager_getSaveMicrocodesToCache_ev_bool(IntPtr pNativeObject);

				public bool GetSaveMicrocodesToCache()
				{
					byte ret=EarthView_World_Graphic_CGpuProgramManager_getSaveMicrocodesToCache_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern byte EarthView_World_Graphic_CGpuProgramManager_canGetCompiledShaderBuffer_ev_bool(IntPtr pNativeObject);

				public bool CanGetCompiledShaderBuffer()
				{
					byte ret=EarthView_World_Graphic_CGpuProgramManager_canGetCompiledShaderBuffer_ev_bool(this.NativeObject);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern void EarthView_World_Graphic_CGpuProgramManager_setSaveMicrocodesToCache_void_ev_bool(IntPtr pNativeObject, byte val);

				public void SetSaveMicrocodesToCache(bool val)
				{
					EarthView_World_Graphic_CGpuProgramManager_setSaveMicrocodesToCache_void_ev_bool(this.NativeObject, Convert.ToByte(val));
					
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
				private static extern byte EarthView_World_Graphic_CGpuProgramManager_isMicrocodeAvailableInCache_ev_bool_EVString(IntPtr pNativeObject, string name);

				public bool IsMicrocodeAvailableInCache(string name)
				{
					byte ret=EarthView_World_Graphic_CGpuProgramManager_isMicrocodeAvailableInCache_ev_bool_EVString(this.NativeObject, name);
					
					return Convert.ToBoolean(ret);
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_getMicrocodeFromCache_MemoryDataStreamPtr_EVString(IntPtr pNativeObject, string name);

				public EarthView.World.Core.MemoryDataStreamPtr GetMicrocodeFromCache(string name)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_getMicrocodeFromCache_MemoryDataStreamPtr_EVString(this.NativeObject, name);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
						csObj.Delegate = true;
					}
					return csObj;
					
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
				private static extern IntPtr EarthView_World_Graphic_CGpuProgramManager_createMicrocode_MemoryDataStreamPtr_size_t(IntPtr pNativeObject, ulong size);

				public EarthView.World.Core.MemoryDataStreamPtr CreateMicrocode(ulong size)
				{
					IntPtr __ptr = EarthView_World_Graphic_CGpuProgramManager_createMicrocode_MemoryDataStreamPtr_size_t(this.NativeObject, size);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Core.MemoryDataStreamPtr csObj = new EarthView.World.Core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Core.MemoryDataStreamPtr;
						csObj.BindNativeObject(__ptr, "MemoryDataStreamPtr");
					}
					return csObj;
					
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
				private static extern void EarthView_World_Graphic_CGpuProgramManager_addMicrocodeToCache_void_EVString_MemoryDataStreamPtr(IntPtr pNativeObject, string name, IntPtr microcode);

				public void AddMicrocodeToCache(string name, EarthView.World.Core.MemoryDataStreamPtr microcode)
				{
					EarthView_World_Graphic_CGpuProgramManager_addMicrocodeToCache_void_EVString_MemoryDataStreamPtr(this.NativeObject, name, object.Equals(microcode, null) ? IntPtr.Zero : microcode.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CGpuProgramManager_saveMicrocodeCache_void_DataStreamPtr(IntPtr pNativeObject, IntPtr stream);

				public void SaveMicrocodeCache(EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CGpuProgramManager_saveMicrocodeCache_void_DataStreamPtr(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CGpuProgramManager_loadMicrocodeCache_void_DataStreamPtr(IntPtr pNativeObject, IntPtr stream);

				public void LoadMicrocodeCache(EarthView.World.Core.DataStreamPtr stream)
				{
					EarthView_World_Graphic_CGpuProgramManager_loadMicrocodeCache_void_DataStreamPtr(this.NativeObject, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadGpuProgramManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadGpuProgramManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManager", new GpuProgramManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CGpuProgramManagerProxy", new GpuProgramManagerClassFactory());

				public GpuProgramManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pObject, load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pObject, loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles(IntPtr pObject, getSupportedSyntax_CallBack_ShaderProfiles pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString(IntPtr pObject, isSyntaxSupported_CallBack_ev_bool_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr(IntPtr pObject, createParameters_CallBack_GpuProgramParametersSharedPtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pObject, createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(IntPtr pObject, createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString(IntPtr pObject, createSharedParameters_CallBack_GpuSharedParametersPtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString(IntPtr pObject, getSharedParameters_CallBack_GpuSharedParametersPtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap(IntPtr pObject, getAvailableSharedParameters_CallBack_SharedParametersMap pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_GpuProgramType_EVString);
						m_load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, m_load_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						m_loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_loadFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, m_loadFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						m_getSupportedSyntax_CallBack_ShaderProfiles = EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles_Function;
						GC.KeepAlive(m_getSupportedSyntax_CallBack_ShaderProfiles);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getSupportedSyntax_ShaderProfiles(this.NativeObject, m_getSupportedSyntax_CallBack_ShaderProfiles);
						m_isSyntaxSupported_CallBack_ev_bool_EVString = EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString_Function;
						GC.KeepAlive(m_isSyntaxSupported_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_isSyntaxSupported_ev_bool_EVString(this.NativeObject, m_isSyntaxSupported_CallBack_ev_bool_EVString);
						m_createParameters_CallBack_GpuProgramParametersSharedPtr = EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr_Function;
						GC.KeepAlive(m_createParameters_CallBack_GpuProgramParametersSharedPtr);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createParameters_GpuProgramParametersSharedPtr(this.NativeObject, m_createParameters_CallBack_GpuProgramParametersSharedPtr);
						m_createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createProgram_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, m_createProgram_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						m_createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createProgramFromString_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString(this.NativeObject, m_createProgramFromString_CallBack_CGpuProgramPtr_EVString_EVString_EVString_GpuProgramType_EVString);
						m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString = EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_GpuProgramType_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_GpuProgramType_EVString);
						m_createSharedParameters_CallBack_GpuSharedParametersPtr_EVString = EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString_Function;
						GC.KeepAlive(m_createSharedParameters_CallBack_GpuSharedParametersPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createSharedParameters_GpuSharedParametersPtr_EVString(this.NativeObject, m_createSharedParameters_CallBack_GpuSharedParametersPtr_EVString);
						m_getSharedParameters_CallBack_GpuSharedParametersPtr_EVString = EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString_Function;
						GC.KeepAlive(m_getSharedParameters_CallBack_GpuSharedParametersPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getSharedParameters_GpuSharedParametersPtr_EVString(this.NativeObject, m_getSharedParameters_CallBack_GpuSharedParametersPtr_EVString);
						m_getAvailableSharedParameters_CallBack_SharedParametersMap = EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap_Function;
						GC.KeepAlive(m_getAvailableSharedParameters_CallBack_SharedParametersMap);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getAvailableSharedParameters_SharedParametersMap(this.NativeObject, m_getAvailableSharedParameters_CallBack_SharedParametersMap);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
					}
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Create_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group, bool isManual)
				{
					return base.Create_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Create(string name, string group)
				{
					return base.Create_NoVirtual(name,group);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name, bool isManual)
				{
					return base.CreateUnmanaged_NoVirtual(name,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr CreateUnmanaged(string name)
				{
					return base.CreateUnmanaged_NoVirtual(name);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader,createParams);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					return base.CreateOrRetrieve_NoVirtual(name,group);
				}
				public override void SetMemoryBudget(ulong bytes)
				{
					base.SetMemoryBudget_NoVirtual(bytes);
				}
				public override ulong GetMemoryBudget()
				{
					return base.GetMemoryBudget_NoVirtual();
				}
				public override ulong GetMemoryUsage()
				{
					return base.GetMemoryUsage_NoVirtual();
				}
				public override void Unload(string name)
				{
					base.Unload_NoVirtual(name);
				}
				public override void Unload(ulong handle)
				{
					base.Unload_NoVirtual(handle);
				}
				public override void UnloadAll(bool reloadableOnly)
				{
					base.UnloadAll_NoVirtual(reloadableOnly);
				}
				public override void UnloadAll()
				{
					base.UnloadAll_NoVirtual();
				}
				public override void ReloadAll(bool reloadableOnly)
				{
					base.ReloadAll_NoVirtual(reloadableOnly);
				}
				public override void ReloadAll()
				{
					base.ReloadAll_NoVirtual();
				}
				public override void UnloadUnreferencedResources(bool reloadableOnly)
				{
					base.UnloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void UnloadUnreferencedResources()
				{
					base.UnloadUnreferencedResources_NoVirtual();
				}
				public override void ReloadUnreferencedResources(bool reloadableOnly)
				{
					base.ReloadUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void ReloadUnreferencedResources()
				{
					base.ReloadUnreferencedResources_NoVirtual();
				}
				public override void Remove(ref EarthView.World.Graphic.ResourcePtr r)
				{
					base.Remove_NoVirtual(ref r);
				}
				public override void Remove(string name)
				{
					base.Remove_NoVirtual(name);
				}
				public override void Remove(ulong handle)
				{
					base.Remove_NoVirtual(handle);
				}
				public override void Remove(string name, string groupname)
				{
					base.Remove_NoVirtual(name,groupname);
				}
				public override void RemoveAll()
				{
					base.RemoveAll_NoVirtual();
				}
				public override void RemoveUnreferencedResources(bool reloadableOnly)
				{
					base.RemoveUnreferencedResources_NoVirtual(reloadableOnly);
				}
				public override void RemoveUnreferencedResources()
				{
					base.RemoveUnreferencedResources_NoVirtual();
				}
				public override void RemoveUnreferencedResource(string name)
				{
					base.RemoveUnreferencedResource_NoVirtual(name);
				}
				public override void RemoveUnreferencedResource(string name, string groupName)
				{
					base.RemoveUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName);
				}
				public override void UnloadUnreferencedResource(string name, string groupName, ushort useCount)
				{
					base.UnloadUnreferencedResource_NoVirtual(name,groupName,useCount);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByHandle(ulong handle)
				{
					return base.GetByHandle_NoVirtual(handle);
				}
				public override bool ResourceExists(string name)
				{
					return base.ResourceExists_NoVirtual(name);
				}
				public override bool ResourceExists(ulong handle)
				{
					return base.ResourceExists_NoVirtual(handle);
				}
				public override void _notifyResourceTouched(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceTouched_NoVirtual(res);
				}
				public override void _notifyResourceLoaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceLoaded_NoVirtual(res);
				}
				public override void _notifyResourceUnloaded(EarthView.World.Graphic.Resource res)
				{
					base._notifyResourceUnloaded_NoVirtual(res);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Prepare_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Prepare(string name, string group, bool isManual)
				{
					return base.Prepare_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams, bool backgroundThread)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams,backgroundThread);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList loadParams)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader,loadParams);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					return base.Load_NoVirtual(name,group,isManual,ref_loader);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group, bool isManual)
				{
					return base.Load_NoVirtual(name,group,isManual);
				}
				public override EarthView.World.Graphic.ResourcePtr Load(string name, string group)
				{
					return base.Load_NoVirtual(name,group);
				}
				public override void SetVerbose(bool v)
				{
					base.SetVerbose_NoVirtual(v);
				}
				public override bool GetVerbose()
				{
					return base.GetVerbose_NoVirtual();
				}
				protected override EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					return base.CreateImpl_NoVirtual(name,handle,group,isManual,loader,createParams);
				}
				protected override void AddImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.AddImpl_NoVirtual(ref res);
				}
				protected override void RemoveImpl(ref EarthView.World.Graphic.ResourcePtr res)
				{
					base.RemoveImpl_NoVirtual(ref res);
				}
				protected override void CheckUsage()
				{
					base.CheckUsage_NoVirtual();
				}
				public override EarthView.World.Core.StringVector GetScriptPatterns()
				{
					return base.GetScriptPatterns_NoVirtual();
				}
				public override void ParseScript(ref EarthView.World.Core.DataStreamPtr stream, string groupName)
				{
					base.ParseScript_NoVirtual(ref stream,groupName);
				}
				public override double GetLoadingOrder()
				{
					return base.GetLoadingOrder_NoVirtual();
				}
				public static GpuProgramManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					GpuProgramManager obj = baseObj as  GpuProgramManager;
					if (object.Equals(obj, null))
					{
						obj = new GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CGpuProgramManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class GpuProgramManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					GpuProgramManager emptyInstance = new GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
