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
			/// <summary>
			/// 模型管理器
			/// </summary>
			public class MeshManager : EarthView.World.Graphic.ResourceManager
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_getSingleton_CMeshManager();

				public static EarthView.World.Graphic.MeshManager GetSingleton()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_getSingleton_CMeshManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshManager csObj = new EarthView.World.Graphic.MeshManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshManager;
						csObj.BindNativeObject(__ptr, "CMeshManager");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_getSingletonPtr_CMeshManager();

				public static EarthView.World.Graphic.MeshManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_getSingletonPtr_CMeshManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshManager csObj = new EarthView.World.Graphic.MeshManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshManager;
						csObj.BindNativeObject(__ptr, "CMeshManager");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				public class MeshManagerInternalResourceLoader : EarthView.World.Graphic.ManualResourceLoader
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="_parant"></param>
					/// <returns></returns>
					public MeshManagerInternalResourceLoader(EarthView.World.Graphic.MeshManager ref_parent) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_parent = new BasePtr(ref_parent);
						list.Add("ref_parent", valueref_parent.PtrVal);
						Create("CMeshManagerInternalResourceLoaderProxy", list);
						if (!"EarthView.World.Graphic.MeshManager+MeshManagerInternalResourceLoader".Equals(((Object)this).GetType().ToString()))
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
					private static extern void EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr resource);

					public new void PrepareResource_NoVirtual(EarthView.World.Graphic.Resource resource)
					{
						EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource_NoVirtual(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource(IntPtr pNativeObject, IntPtr resource);

					public override void PrepareResource(EarthView.World.Graphic.Resource resource)
					{
						EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr resource);

					public new void LoadResource_NoVirtual(EarthView.World.Graphic.Resource resource)
					{
						EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource_NoVirtual(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
						
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
					private static extern void EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource(IntPtr pNativeObject, IntPtr resource);

					public override void LoadResource(EarthView.World.Graphic.Resource resource)
					{
						EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_d.so");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp_d.so");

						#else 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_d.dll");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp.dll");

						#elif Linux 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic.so");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp.so");

						#else 
							private static bool bLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic.dll");
							private static bool csbLoadMeshManagerInternalResourceLoader = LoadDll.Load("EV_Graphic_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoader", new MeshManagerInternalResourceLoaderClassFactory());

					private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMeshManager::CMeshManagerInternalResourceLoaderProxy", new MeshManagerInternalResourceLoaderClassFactory());

					public MeshManagerInternalResourceLoader(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource(IntPtr pObject, prepareResource_CallBack_void_CResource pCallback);

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource(IntPtr pObject, loadResource_CallBack_void_CResource pCallback);

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
							m_prepareResource_CallBack_void_CResource = EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Function;
							GC.KeepAlive(m_prepareResource_CallBack_void_CResource);
							EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_prepareResource_void_CResource(this.NativeObject, m_prepareResource_CallBack_void_CResource);
							m_loadResource_CallBack_void_CResource = EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Function;
							GC.KeepAlive(m_loadResource_CallBack_void_CResource);
							EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_CMeshManagerInternalResourceLoader_loadResource_void_CResource(this.NativeObject, m_loadResource_CallBack_void_CResource);
						}
					}
					public static MeshManagerInternalResourceLoader FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						MeshManagerInternalResourceLoader obj = baseObj as  MeshManagerInternalResourceLoader;
						if (object.Equals(obj, null))
						{
							obj = new MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CMeshManagerInternalResourceLoader");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class MeshManagerInternalResourceLoaderClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						MeshManagerInternalResourceLoader emptyInstance = new MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate void prepareResource_CallBack_void_CResource(IntPtr resource);

				protected prepareResource_CallBack_void_CResource m_prepareResource_CallBack_void_CResource;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern void EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource_NoVirtual(IntPtr pNativeObject, IntPtr resource);

				public virtual void PrepareResource_NoVirtual(EarthView.World.Graphic.Resource resource)
				{
					EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource_NoVirtual(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
					
				}

				protected  void EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource_Function(IntPtr resource)
				{
					EarthView.World.Graphic.Resource csobj_resource = new EarthView.World.Graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate);
					csobj_resource.BindNativeObject(resource,"CResource");
					csobj_resource.Delegate = true;
					IClassFactory csobj_resourceClassFactory = GlobalClassFactoryMap.Get(csobj_resource.GetCppInstanceTypeName());
					if (csobj_resourceClassFactory != null)
					{
						csobj_resource.Delegate = true;
						csobj_resource = csobj_resourceClassFactory.Create() as EarthView.World.Graphic.Resource;
						csobj_resource.BindNativeObject(resource, "CResource");
						csobj_resource.Delegate = true;
					}
					
					PrepareResource(csobj_resource);
					
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
				private static extern void EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource(IntPtr pNativeObject, IntPtr resource);

				public virtual void PrepareResource(EarthView.World.Graphic.Resource resource)
				{
					EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource(this.NativeObject, object.Equals(resource, null) ? IntPtr.Zero : resource.NativeObject);
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader();

				protected getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader m_getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader_NoVirtual(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader GetManualResourceLoaderPtr_NoVirtual()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader_NoVirtual(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader csObj = new EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshManagerInternalResourceLoader");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader;
						csObj.BindNativeObject(__ptr, "CMeshManagerInternalResourceLoader");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				protected  IntPtr EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader_Function()
				{
					EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader csret=GetManualResourceLoaderPtr();
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader(IntPtr pNativeObject);

				public virtual EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader GetManualResourceLoaderPtr()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader csObj = new EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CMeshManagerInternalResourceLoader");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.MeshManager.MeshManagerInternalResourceLoader;
						csObj.BindNativeObject(__ptr, "CMeshManagerInternalResourceLoader");
						csObj.Delegate = true;
					}
					return csObj;
					
				}

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public MeshManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
				{
					Create("CMeshManagerProxy", null);
					if (!"EarthView.World.Graphic.MeshManager".Equals(((Object)this).GetType().ToString()))
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
				private static extern void EarthView_World_Graphic_CMeshManager__initialise_void(IntPtr pNativeObject);

				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public void _initialise()
				{
					EarthView_World_Graphic_CMeshManager__initialise_void(this.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed, byte indexBufferShadowed);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会被附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会被附有阴影</param>
				/// <returns></returns>
				public EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed), Convert.ToByte(indexBufferShadowed));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会被附有阴影</param>
				/// <returns></returns>
				public EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage_Usage(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, vertexBufferUsage, indexBufferUsage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Usage(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject, vertexBufferUsage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <returns></returns>
				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader, IntPtr EVparams);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <param name="params">如果创建实例需要该参数，则提供名称/值对</param>
				/// <returns></returns>
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader, EarthView.World.Core.CommonStringPairList EVparams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject, object.Equals(EVparams, null) ? IntPtr.Zero : EVparams.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <returns></returns>
				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pNativeObject, string name, string group, byte isManual, IntPtr ref_loader);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <param name="loader">指向ManualLoader的指针</param>
				/// <returns></returns>
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, name, group, Convert.ToByte(isManual), object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(IntPtr pNativeObject, string name, string group, byte isManual);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <returns></returns>
				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pNativeObject, string name, string group, byte isManual);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <param name="isManual">设置资源是否手动下载</param>
				/// <returns></returns>
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group, bool isManual)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, name, group, Convert.ToByte(isManual));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(IntPtr pNativeObject, string name, string group);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <returns></returns>
				public new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve_NoVirtual(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pNativeObject, string name, string group);

				/// <summary>
				/// 创建一个新的模型，或者是获得一个和已存在模型同名的模型
				/// </summary>
				/// <param name="name">资源的名称</param>
				/// <param name="group">资源组的名称</param>
				/// <returns></returns>
				public override EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult CreateOrRetrieve(string name, string group)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, name, group);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult csObj = new EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ResourceManager.ResourceCreateOrRetrieveResult;
						csObj.BindNativeObject(__ptr, "ResourceCreateOrRetrieveResult");
					}
					return csObj;
					
				}

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed);

				protected prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed, byte indexBufferShadowed);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed), Convert.ToByte(indexBufferShadowed));
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Prepare(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed, byte indexBufferShadowed);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed), Convert.ToByte(indexBufferShadowed));
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed);

				protected prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed));
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Prepare(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed));
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				protected prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage);
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Prepare(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr prepare_CallBack_CMeshPtr_EVString_EVString_Usage(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				protected prepare_CallBack_CMeshPtr_EVString_EVString_Usage m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage);
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Prepare(strfilename,strgroupName,vertexBufferUsage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 准备模型，如果模型已经被创建，则返回一个已存在的实例
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Prepare(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage(this.NativeObject, filename, groupName, vertexBufferUsage);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed);

				protected load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed, byte indexBufferShadowed);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed), Convert.ToByte(indexBufferShadowed));
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Load(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage, vertexBufferShadowed, indexBufferShadowed);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed, byte indexBufferShadowed);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <param name="indexBufferShadowed">如果为true，索引缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed), Convert.ToByte(indexBufferShadowed));
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed);

				protected load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed));
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Load(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage, vertexBufferShadowed);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexBufferShadowed);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <param name="vertexBufferShadowed">如果为true，顶点缓存将会附有阴影</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexBufferShadowed)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexBufferShadowed));
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				protected load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage);
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Load(strfilename,strgroupName,vertexBufferUsage, indexBufferUsage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>
				/// <param name="indexBufferUsage">索引缓存创建的用法标</param>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage(this.NativeObject, filename, groupName, vertexBufferUsage, indexBufferUsage);
					
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

				[System.Runtime.InteropServices.UnmanagedFunctionPointer(CallingConvention.StdCall)]
				protected delegate IntPtr load_CallBack_CMeshPtr_EVString_EVString_Usage(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				protected load_CallBack_CMeshPtr_EVString_EVString_Usage m_load_CallBack_CMeshPtr_EVString_EVString_Usage;

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_NoVirtual(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load_NoVirtual(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_NoVirtual(this.NativeObject, filename, groupName, vertexBufferUsage);
					
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

				protected  IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Function(ref IntPtr filename, ref IntPtr groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					string strfilename= Marshal.PtrToStringAnsi(filename);
					ClassFactory.FreeString(ref filename);
					string strgroupName= Marshal.PtrToStringAnsi(groupName);
					ClassFactory.FreeString(ref groupName);
					
					EarthView.World.Graphic.MeshPtr csret=Load(strfilename,strgroupName,vertexBufferUsage);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage(IntPtr pNativeObject, string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 加载模型
				/// </summary>
				/// <param name="filename">模型文件的实例</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="vertexBufferUsage">顶点缓存创建的用法标</param>>
				/// <returns></returns>
				public virtual EarthView.World.Graphic.MeshPtr Load(string filename, string groupName, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage(this.NativeObject, filename, groupName, vertexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createManual_CMeshPtr_EVString_EVString_CManualResourceLoader(IntPtr pNativeObject, string name, string groupName, IntPtr ref_loader);

				/// <summary>
				/// 手动创建一个新的模型
				/// </summary>
				/// <param name="name">新模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="loader">指向EarthView::World::Graphic::CManualResourceLoader的指针，被调用下载该模型</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateManual(string name, string groupName, EarthView.World.Graphic.ManualResourceLoader ref_loader)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createManual_CMeshPtr_EVString_EVString_CManualResourceLoader(this.NativeObject, name, groupName, object.Equals(ref_loader, null) ? IntPtr.Zero : ref_loader.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createManual_CMeshPtr_EVString_EVString(IntPtr pNativeObject, string name, string groupName);

				/// <summary>
				/// 手动创建一个新的模型
				/// </summary>
				/// <param name="name">新模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateManual(string name, string groupName)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createManual_CMeshPtr_EVString_EVString(this.NativeObject, name, groupName);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer, byte indexShadowBuffer);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果设置为true,顶点缓存会被创建并附有阴影</param>
				/// <param name="indexShadowBuffer">如果设置为true,索引缓存会被创建并附有阴影</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer), Convert.ToByte(indexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果设置为true,顶点缓存会被创建并附有阴影</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals, ushort numTexCoordSets);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals, ushort numTexCoordSets)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments, byte normals);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments, bool normals)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments, Convert.ToByte(normals));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments, int ysegments);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments, int ysegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments, ysegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, int xsegments);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, int xsegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, xsegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height);

				/// <summary>
				/// 创建一个基本的平面，默认是X/Y轴面向Z轴的正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreatePlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer, byte indexShadowBuffer, int ySegmentsToKeep);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
				/// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
				/// <param name="ySegmentsToKeep">从半球顶向下线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer, int ySegmentsToKeep)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer), Convert.ToByte(indexShadowBuffer), ySegmentsToKeep);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer, byte indexShadowBuffer);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
				/// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer), Convert.ToByte(indexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject, vertexBufferUsage, indexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject, vertexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector, IntPtr orientation);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="orientation">整个曲面的方位，用来产生一种视觉上的效果</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Spatial.Math.Quaternion orientation)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_CQuaternion(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, object.Equals(orientation, null) ? IntPtr.Zero : orientation.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile, IntPtr upVector);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile, EarthView.World.Spatial.Math.Vector3 upVector)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile, double vTile);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <param name="vTile">纹理在V方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile, double vTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile, vTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double uTile);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="uTile">纹理在U方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double uTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, uTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals, ushort numTexCoordSets);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals, ushort numTexCoordSets)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments, byte normals);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments, bool normals)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments, Convert.ToByte(normals));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments, int ysegments);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments, int ysegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments, ysegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature, int xsegments);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature, int xsegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature, xsegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double curvature);

				/// <summary>
				/// 创建一个平面，由于它的纹理坐标看起来像一个曲面，可以用作天空盒中的天空
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="curvature">平面的曲率</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedIllusionPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double curvature)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedIllusionPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, curvature);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer, byte indexShadowBuffer);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
				/// <param name="indexShadowBuffer">如果这个标记设置为ture,索引缓存将会被创建，并附有阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer), Convert.ToByte(indexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, byte vertexShadowBuffer);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <param name="vertexShadowBuffer">如果这个标记设置为ture,顶点缓存将会被创建，并附有阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage, bool vertexShadowBuffer)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage, Convert.ToByte(vertexShadowBuffer));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <param name="indexBufferUsage">平面创建的索引缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage, EarthView.World.Graphic.HardwareBuffer.USAGE indexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage, indexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile, IntPtr upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <param name="vertexBufferUsage">平面创建的顶点缓存用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile, EarthView.World.Spatial.Math.Vector3 upVector, EarthView.World.Graphic.HardwareBuffer.USAGE vertexBufferUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3_Usage(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject, vertexBufferUsage);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile, IntPtr upVector);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <param name="upVector">平面的'up'方向</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile, EarthView.World.Spatial.Math.Vector3 upVector)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real_CVector3(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile, object.Equals(upVector, null) ? IntPtr.Zero : upVector.NativeObject);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile, double yTile);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <param name="yTile">纹理在y方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile, double yTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile, yTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets, double xTile);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <param name="xTile">纹理在x方向上重复的次数</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets, double xTile)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets, xTile);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals, ushort numTexCoordSets);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <param name="numTexCoordSets">2D纹理坐标集合的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals, ushort numTexCoordSets)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool_ev_uint16(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals), numTexCoordSets);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments, byte normals);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <param name="normals">如果为true，创建该平面的法线</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments, bool normals)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32_ev_bool(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments, Convert.ToByte(normals));
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments, int ysegments);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <param name="ysegments">Y轴方向线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments, int ysegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments, ysegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow, int xsegments);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <param name="xsegments">X轴方向线段的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow, int xsegments)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real_ev_int32(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow, xsegments);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height, double bow);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="bow">曲面中弓形的数量</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height, double bow)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height, bow);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real(IntPtr pNativeObject, string name, string groupName, IntPtr plane, double width, double height);

				/// <summary>
				/// 创建一个真正的曲面，默认是X/Y轴和Z轴正方向
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="plane">平面的方向和到原定的距离</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <returns></returns>
				public EarthView.World.Graphic.MeshPtr CreateCurvedPlane(string name, string groupName, EarthView.World.Spatial.Math.Plane plane, double width, double height)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createCurvedPlane_CMeshPtr_EVString_EVString_CPlane_Real_Real(this.NativeObject, name, groupName, object.Equals(plane, null) ? IntPtr.Zero : plane.NativeObject, width, height);
					
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
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage, byte vbUseShadow, byte ibUseShadow);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
				/// <param name="vbUsage">顶点缓存的用法标记</param>
				/// <param name="ibUsage">索引缓存的用法标记</param>
				/// <param name="vbUseShadow">决定顶点缓存是否产生阴影缓存</param>
				/// <param name="ibUseShadow">决定索引缓存是否产生阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage, bool vbUseShadow, bool ibUseShadow)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage, Convert.ToByte(vbUseShadow), Convert.ToByte(ibUseShadow));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage, byte vbUseShadow);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
				/// <param name="vbUsage">顶点缓存的用法标记</param>
				/// <param name="ibUsage">索引缓存的用法标记</param>
				/// <param name="vbUseShadow">决定顶点缓存是否产生阴影缓存</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage, bool vbUseShadow)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage, Convert.ToByte(vbUseShadow));
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
				/// <param name="vbUsage">顶点缓存的用法标记</param>
				/// <param name="ibUsage">索引缓存的用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage, EarthView.World.Graphic.HardwareBuffer.USAGE ibUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage, ibUsage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
				/// <param name="vbUsage">顶点缓存的用法标记</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide, EarthView.World.Graphic.HardwareBuffer.USAGE vbUsage)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide, vbUsage);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <param name="visibleSide">决定曲面的哪一面或者是两面都是表面</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel, EarthView.World.Graphic.PatchSurface.VISIBLESIDE visibleSide)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <param name=" vMaxSubdivisionLevel">手动设置v方向细分的最高等级</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel, ulong vMaxSubdivisionLevel)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <param name="uMaxSubdivisionLevel">手动设置u方向细分的最高等级</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height, ulong uMaxSubdivisionLevel)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height, uMaxSubdivisionLevel);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t(IntPtr pNativeObject, string name, string groupName, IntPtr controlPointBuffer, IntPtr declaration, ulong width, ulong height);

				/// <summary>
				/// 基于控制顶点队列创建一个贝塞尔曲面
				/// </summary>
				/// <param name="name">模型的名称</param>
				/// <param name="groupName">资源组的名称</param>
				/// <param name="controlPointBuffer">指向包含顶点数据的缓存</param>
				/// <param name="declaration">指向EarthView::World::Graphic::CVertexDeclaration的指针，描述缓存的内容</param>
				/// <param name="width">在世界坐标系下平面的宽</param>
				/// <param name="height">在世界坐标系下平面的高</param>
				/// <returns></returns>
				public EarthView.World.Graphic.PatchMeshPtr CreateBezierPatch(string name, string groupName, IntPtr controlPointBuffer, EarthView.World.Graphic.VertexDeclaration declaration, ulong width, ulong height)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createBezierPatch_CPatchMeshPtr_EVString_EVString_void_CVertexDeclaration_ev_size_t_ev_size_t(this.NativeObject, name, groupName, controlPointBuffer, object.Equals(declaration, null) ? IntPtr.Zero : declaration.NativeObject, width, height);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.PatchMeshPtr csObj = new EarthView.World.Graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.PatchMeshPtr;
						csObj.BindNativeObject(__ptr, "CPatchMeshPtr");
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
				private static extern void EarthView_World_Graphic_CMeshManager_setPrepareAllMeshesForShadowVolumes_void_ev_bool(IntPtr pNativeObject, byte enable);

				/// <summary>
				/// 设置是否为阴影准备模型
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				public void SetPrepareAllMeshesForShadowVolumes(bool enable)
				{
					EarthView_World_Graphic_CMeshManager_setPrepareAllMeshesForShadowVolumes_void_ev_bool(this.NativeObject, Convert.ToByte(enable));
					
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
				private static extern byte EarthView_World_Graphic_CMeshManager_getPrepareAllMeshesForShadowVolumes_ev_bool(IntPtr pNativeObject);

				/// <summary>
				/// 获得是否为阴影准备模型
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				public bool GetPrepareAllMeshesForShadowVolumes()
				{
					byte ret=EarthView_World_Graphic_CMeshManager_getPrepareAllMeshesForShadowVolumes_ev_bool(this.NativeObject);
					
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
				private static extern double EarthView_World_Graphic_CMeshManager_getBoundsPaddingFactor_Real(IntPtr pNativeObject);

				public double GetBoundsPaddingFactor()
				{
					double ret=EarthView_World_Graphic_CMeshManager_getBoundsPaddingFactor_Real(this.NativeObject);
					
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
				private static extern void EarthView_World_Graphic_CMeshManager_setBoundsPaddingFactor_void_Real(IntPtr pNativeObject, double paddingFactor);

				public void SetBoundsPaddingFactor(double paddingFactor)
				{
					EarthView_World_Graphic_CMeshManager_setBoundsPaddingFactor_void_Real(this.NativeObject, paddingFactor);
					
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
				private static extern void EarthView_World_Graphic_CMeshManager_setListener_void_CModelSerializerListener(IntPtr pNativeObject, IntPtr listener);

				/// <summary>
				/// 设置一个监听器控制模型下载的连续化
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				public void SetListener(EarthView.World.Graphic.ModelSerializerListener listener)
				{
					EarthView_World_Graphic_CMeshManager_setListener_void_CModelSerializerListener(this.NativeObject, object.Equals(listener, null) ? IntPtr.Zero : listener.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_getListener_CModelSerializerListener(IntPtr pNativeObject);

				/// <summary>
				/// 获得控制模型下载的连续化的监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public EarthView.World.Graphic.ModelSerializerListener GetListener()
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_getListener_CModelSerializerListener(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Graphic.ModelSerializerListener csObj = new EarthView.World.Graphic.ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CModelSerializerListener");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Graphic.ModelSerializerListener;
						csObj.BindNativeObject(__ptr, "CModelSerializerListener");
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
				private static extern void EarthView_World_Graphic_CMeshManager_loadResource_void_CResource(IntPtr pNativeObject, IntPtr res);

				public void LoadResource(EarthView.World.Graphic.Resource res)
				{
					EarthView_World_Graphic_CMeshManager_loadResource_void_CResource(this.NativeObject, object.Equals(res, null) ? IntPtr.Zero : res.NativeObject);
					
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
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr loader, IntPtr createParams);

				protected new EarthView.World.Graphic.Resource CreateImpl_NoVirtual(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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


				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				private static extern IntPtr EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pNativeObject, string name, ulong handle, string group, byte isManual, IntPtr loader, IntPtr createParams);

				protected override EarthView.World.Graphic.Resource CreateImpl(string name, ulong handle, string group, bool isManual, EarthView.World.Graphic.ManualResourceLoader loader, EarthView.World.Core.CommonStringPairList createParams)
				{
					IntPtr __ptr = EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, name, handle, group, Convert.ToByte(isManual), object.Equals(loader, null) ? IntPtr.Zero : loader.NativeObject, object.Equals(createParams, null) ? IntPtr.Zero : createParams.NativeObject);
					
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

				#if DEBUG 
					#if Windows 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic_d.so");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp_d.so");

					#else 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic_d.dll");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#elif Linux 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic.so");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp.so");

					#else 
						private static bool bLoadMeshManager = LoadDll.Load("EV_Graphic.dll");
						private static bool csbLoadMeshManager = LoadDll.Load("EV_Graphic_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMeshManager", new MeshManagerClassFactory());

				private static bool registerProxyStatus = GlobalClassFactoryMap.Put("EarthView::World::Graphic::CMeshManagerProxy", new MeshManagerClassFactory());

				public MeshManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
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
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource(IntPtr pObject, prepareResource_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader(IntPtr pObject, getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(IntPtr pObject, prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(IntPtr pObject, prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage(IntPtr pObject, prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage(IntPtr pObject, prepare_CallBack_CMeshPtr_EVString_EVString_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(IntPtr pObject, load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(IntPtr pObject, load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage(IntPtr pObject, load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage(IntPtr pObject, load_CallBack_CMeshPtr_EVString_EVString_Usage pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString(IntPtr pObject, create_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString(IntPtr pObject, createUnmanaged_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(IntPtr pObject, createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_setMemoryBudget_void_ev_size_t(IntPtr pObject, setMemoryBudget_CallBack_void_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getMemoryBudget_ev_size_t(IntPtr pObject, getMemoryBudget_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getMemoryUsage_ev_size_t(IntPtr pObject, getMemoryUsage_CallBack_ev_size_t pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unload_void_EVString(IntPtr pObject, unload_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unload_void_ev_uint64(IntPtr pObject, unload_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadAll_void_ev_bool(IntPtr pObject, unloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadAll_void(IntPtr pObject, unloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadAll_void_ev_bool(IntPtr pObject, reloadAll_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadAll_void(IntPtr pObject, reloadAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResources_void_ev_bool(IntPtr pObject, unloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResources_void(IntPtr pObject, unloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadUnreferencedResources_void_ev_bool(IntPtr pObject, reloadUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadUnreferencedResources_void(IntPtr pObject, reloadUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_ResourcePtr(IntPtr pObject, remove_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_EVString(IntPtr pObject, remove_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_ev_uint64(IntPtr pObject, remove_CallBack_void_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_EVString_EVString(IntPtr pObject, remove_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeAll_void(IntPtr pObject, removeAll_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResources_void_ev_bool(IntPtr pObject, removeUnreferencedResources_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResources_void(IntPtr pObject, removeUnreferencedResources_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResource_void_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResource_void_EVString_EVString(IntPtr pObject, removeUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResource_void_EVString_EVString(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(IntPtr pObject, unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByName_ResourcePtr_EVString_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByName_ResourcePtr_EVString(IntPtr pObject, getByName_CallBack_ResourcePtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByHandle_ResourcePtr_ev_uint64(IntPtr pObject, getByHandle_CallBack_ResourcePtr_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_resourceExists_ev_bool_EVString(IntPtr pObject, resourceExists_CallBack_ev_bool_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_resourceExists_ev_bool_ev_uint64(IntPtr pObject, resourceExists_CallBack_ev_bool_ev_uint64 pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceTouched_void_CResource(IntPtr pObject, _notifyResourceTouched_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceLoaded_void_CResource(IntPtr pObject, _notifyResourceLoaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceUnloaded_void_CResource(IntPtr pObject, _notifyResourceUnloaded_CallBack_void_CResource pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString(IntPtr pObject, load_CallBack_ResourcePtr_EVString_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_setVerbose_void_ev_bool(IntPtr pObject, setVerbose_CallBack_void_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getVerbose_ev_bool(IntPtr pObject, getVerbose_CallBack_ev_bool pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(IntPtr pObject, createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_addImpl_void_ResourcePtr(IntPtr pObject, addImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeImpl_void_ResourcePtr(IntPtr pObject, removeImpl_CallBack_void_ResourcePtr pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_checkUsage_void(IntPtr pObject, checkUsage_CallBack_void pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getScriptPatterns_StringVector(IntPtr pObject, getScriptPatterns_CallBack_StringVector pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_parseScript_void_DataStreamPtr_EVString(IntPtr pObject, parseScript_CallBack_void_DataStreamPtr_EVString pCallback);

				#if DEBUG 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#else 
					#if Windows 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#elif Linux 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Android 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.so", CallingConvention = CallingConvention.StdCall)]
					#elif Apple 
						[System.Runtime.InteropServices.DllImport("__Internal")]
					#else 
						[System.Runtime.InteropServices.DllImport("EV_Graphic_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
					#endif 
				#endif 
				protected static extern void EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getLoadingOrder_Real(IntPtr pObject, getLoadingOrder_CallBack_Real pCallback);

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
						m_prepareResource_CallBack_void_CResource = EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource_Function;
						GC.KeepAlive(m_prepareResource_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepareResource_void_CResource(this.NativeObject, m_prepareResource_CallBack_void_CResource);
						m_getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader = EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader_Function;
						GC.KeepAlive(m_getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getManualResourceLoaderPtr_CMeshManagerInternalResourceLoader(this.NativeObject, m_getManualResourceLoaderPtr_CallBack_CMeshManagerInternalResourceLoader);
						m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.NativeObject, m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool);
						m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(this.NativeObject, m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool);
						m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage_Function;
						GC.KeepAlive(m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Usage(this.NativeObject, m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage_Usage);
						m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage = EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage_Function;
						GC.KeepAlive(m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_CMeshPtr_EVString_EVString_Usage(this.NativeObject, m_prepare_CallBack_CMeshPtr_EVString_EVString_Usage);
						m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool(this.NativeObject, m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_ev_bool);
						m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool(this.NativeObject, m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage_ev_bool);
						m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage_Function;
						GC.KeepAlive(m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Usage(this.NativeObject, m_load_CallBack_CMeshPtr_EVString_EVString_Usage_Usage);
						m_load_CallBack_CMeshPtr_EVString_EVString_Usage = EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage_Function;
						GC.KeepAlive(m_load_CallBack_CMeshPtr_EVString_EVString_Usage);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_CMeshPtr_EVString_EVString_Usage(this.NativeObject, m_load_CallBack_CMeshPtr_EVString_EVString_Usage);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_create_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_create_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_create_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_create_ResourcePtr_EVString_EVString(this.NativeObject, m_create_CallBack_ResourcePtr_EVString_EVString);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool_CManualResourceLoader);
						m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString_ev_bool(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString_ev_bool);
						m_createUnmanaged_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_createUnmanaged_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_createUnmanaged_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createUnmanaged_ResourcePtr_EVString(this.NativeObject, m_createUnmanaged_CallBack_ResourcePtr_EVString);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool);
						m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString = EarthView_World_Graphic_CResourceManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Function;
						GC.KeepAlive(m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(this.NativeObject, m_createOrRetrieve_CallBack_ResourceCreateOrRetrieveResult_EVString_EVString);
						m_setMemoryBudget_CallBack_void_ev_size_t = EarthView_World_Graphic_CResourceManager_setMemoryBudget_void_ev_size_t_Function;
						GC.KeepAlive(m_setMemoryBudget_CallBack_void_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_setMemoryBudget_void_ev_size_t(this.NativeObject, m_setMemoryBudget_CallBack_void_ev_size_t);
						m_getMemoryBudget_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryBudget_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryBudget_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getMemoryBudget_ev_size_t(this.NativeObject, m_getMemoryBudget_CallBack_ev_size_t);
						m_getMemoryUsage_CallBack_ev_size_t = EarthView_World_Graphic_CResourceManager_getMemoryUsage_ev_size_t_Function;
						GC.KeepAlive(m_getMemoryUsage_CallBack_ev_size_t);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getMemoryUsage_ev_size_t(this.NativeObject, m_getMemoryUsage_CallBack_ev_size_t);
						m_unload_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_unload_void_EVString_Function;
						GC.KeepAlive(m_unload_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unload_void_EVString(this.NativeObject, m_unload_CallBack_void_EVString);
						m_unload_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_unload_void_ev_uint64_Function;
						GC.KeepAlive(m_unload_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unload_void_ev_uint64(this.NativeObject, m_unload_CallBack_void_ev_uint64);
						m_unloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadAll_void_ev_bool(this.NativeObject, m_unloadAll_CallBack_void_ev_bool);
						m_unloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadAll_void_Function;
						GC.KeepAlive(m_unloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadAll_void(this.NativeObject, m_unloadAll_CallBack_void);
						m_reloadAll_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadAll_void_ev_bool_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadAll_void_ev_bool(this.NativeObject, m_reloadAll_CallBack_void_ev_bool);
						m_reloadAll_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadAll_void_Function;
						GC.KeepAlive(m_reloadAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadAll_void(this.NativeObject, m_reloadAll_CallBack_void);
						m_unloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResources_void_ev_bool(this.NativeObject, m_unloadUnreferencedResources_CallBack_void_ev_bool);
						m_unloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_unloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResources_void(this.NativeObject, m_unloadUnreferencedResources_CallBack_void);
						m_reloadUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadUnreferencedResources_void_ev_bool(this.NativeObject, m_reloadUnreferencedResources_CallBack_void_ev_bool);
						m_reloadUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_reloadUnreferencedResources_void_Function;
						GC.KeepAlive(m_reloadUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_reloadUnreferencedResources_void(this.NativeObject, m_reloadUnreferencedResources_CallBack_void);
						m_remove_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_remove_void_ResourcePtr_Function;
						GC.KeepAlive(m_remove_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_ResourcePtr(this.NativeObject, m_remove_CallBack_void_ResourcePtr);
						m_remove_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_EVString(this.NativeObject, m_remove_CallBack_void_EVString);
						m_remove_CallBack_void_ev_uint64 = EarthView_World_Graphic_CResourceManager_remove_void_ev_uint64_Function;
						GC.KeepAlive(m_remove_CallBack_void_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_ev_uint64(this.NativeObject, m_remove_CallBack_void_ev_uint64);
						m_remove_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_remove_void_EVString_EVString_Function;
						GC.KeepAlive(m_remove_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_remove_void_EVString_EVString(this.NativeObject, m_remove_CallBack_void_EVString_EVString);
						m_removeAll_CallBack_void = EarthView_World_Graphic_CResourceManager_removeAll_void_Function;
						GC.KeepAlive(m_removeAll_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeAll_void(this.NativeObject, m_removeAll_CallBack_void);
						m_removeUnreferencedResources_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_ev_bool_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResources_void_ev_bool(this.NativeObject, m_removeUnreferencedResources_CallBack_void_ev_bool);
						m_removeUnreferencedResources_CallBack_void = EarthView_World_Graphic_CResourceManager_removeUnreferencedResources_void_Function;
						GC.KeepAlive(m_removeUnreferencedResources_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResources_void(this.NativeObject, m_removeUnreferencedResources_CallBack_void);
						m_removeUnreferencedResource_CallBack_void_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResource_void_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString);
						m_removeUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_removeUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeUnreferencedResource_void_EVString_EVString(this.NativeObject, m_removeUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResource_void_EVString_EVString(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString);
						m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16 = EarthView_World_Graphic_CResourceManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Function;
						GC.KeepAlive(m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(this.NativeObject, m_unloadUnreferencedResource_CallBack_void_EVString_EVString_ev_uint16);
						m_getByName_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByName_ResourcePtr_EVString_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString_EVString);
						m_getByName_CallBack_ResourcePtr_EVString = EarthView_World_Graphic_CResourceManager_getByName_ResourcePtr_EVString_Function;
						GC.KeepAlive(m_getByName_CallBack_ResourcePtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByName_ResourcePtr_EVString(this.NativeObject, m_getByName_CallBack_ResourcePtr_EVString);
						m_getByHandle_CallBack_ResourcePtr_ev_uint64 = EarthView_World_Graphic_CResourceManager_getByHandle_ResourcePtr_ev_uint64_Function;
						GC.KeepAlive(m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getByHandle_ResourcePtr_ev_uint64(this.NativeObject, m_getByHandle_CallBack_ResourcePtr_ev_uint64);
						m_resourceExists_CallBack_ev_bool_EVString = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_EVString_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_resourceExists_ev_bool_EVString(this.NativeObject, m_resourceExists_CallBack_ev_bool_EVString);
						m_resourceExists_CallBack_ev_bool_ev_uint64 = EarthView_World_Graphic_CResourceManager_resourceExists_ev_bool_ev_uint64_Function;
						GC.KeepAlive(m_resourceExists_CallBack_ev_bool_ev_uint64);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_resourceExists_ev_bool_ev_uint64(this.NativeObject, m_resourceExists_CallBack_ev_bool_ev_uint64);
						m__notifyResourceTouched_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceTouched_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceTouched_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceTouched_void_CResource(this.NativeObject, m__notifyResourceTouched_CallBack_void_CResource);
						m__notifyResourceLoaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceLoaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceLoaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceLoaded_void_CResource(this.NativeObject, m__notifyResourceLoaded_CallBack_void_CResource);
						m__notifyResourceUnloaded_CallBack_void_CResource = EarthView_World_Graphic_CResourceManager__notifyResourceUnloaded_void_CResource_Function;
						GC.KeepAlive(m__notifyResourceUnloaded_CallBack_void_CResource);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager__notifyResourceUnloaded_void_CResource(this.NativeObject, m__notifyResourceUnloaded_CallBack_void_CResource);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_prepare_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_prepare_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader);
						m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_ev_bool_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString_ev_bool(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString_ev_bool);
						m_load_CallBack_ResourcePtr_EVString_EVString = EarthView_World_Graphic_CResourceManager_load_ResourcePtr_EVString_EVString_Function;
						GC.KeepAlive(m_load_CallBack_ResourcePtr_EVString_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_load_ResourcePtr_EVString_EVString(this.NativeObject, m_load_CallBack_ResourcePtr_EVString_EVString);
						m_setVerbose_CallBack_void_ev_bool = EarthView_World_Graphic_CResourceManager_setVerbose_void_ev_bool_Function;
						GC.KeepAlive(m_setVerbose_CallBack_void_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_setVerbose_void_ev_bool(this.NativeObject, m_setVerbose_CallBack_void_ev_bool);
						m_getVerbose_CallBack_ev_bool = EarthView_World_Graphic_CResourceManager_getVerbose_ev_bool_Function;
						GC.KeepAlive(m_getVerbose_CallBack_ev_bool);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getVerbose_ev_bool(this.NativeObject, m_getVerbose_CallBack_ev_bool);
						m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList = EarthView_World_Graphic_CResourceManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Function;
						GC.KeepAlive(m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.NativeObject, m_createImpl_CallBack_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList);
						m_addImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_addImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_addImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_addImpl_void_ResourcePtr(this.NativeObject, m_addImpl_CallBack_void_ResourcePtr);
						m_removeImpl_CallBack_void_ResourcePtr = EarthView_World_Graphic_CResourceManager_removeImpl_void_ResourcePtr_Function;
						GC.KeepAlive(m_removeImpl_CallBack_void_ResourcePtr);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_removeImpl_void_ResourcePtr(this.NativeObject, m_removeImpl_CallBack_void_ResourcePtr);
						m_checkUsage_CallBack_void = EarthView_World_Graphic_CResourceManager_checkUsage_void_Function;
						GC.KeepAlive(m_checkUsage_CallBack_void);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_checkUsage_void(this.NativeObject, m_checkUsage_CallBack_void);
						m_getScriptPatterns_CallBack_StringVector = EarthView_World_Graphic_CScriptLoader_getScriptPatterns_StringVector_Function;
						GC.KeepAlive(m_getScriptPatterns_CallBack_StringVector);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getScriptPatterns_StringVector(this.NativeObject, m_getScriptPatterns_CallBack_StringVector);
						m_parseScript_CallBack_void_DataStreamPtr_EVString = EarthView_World_Graphic_CScriptLoader_parseScript_void_DataStreamPtr_EVString_Function;
						GC.KeepAlive(m_parseScript_CallBack_void_DataStreamPtr_EVString);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_parseScript_void_DataStreamPtr_EVString(this.NativeObject, m_parseScript_CallBack_void_DataStreamPtr_EVString);
						m_getLoadingOrder_CallBack_Real = EarthView_World_Graphic_CScriptLoader_getLoadingOrder_Real_Function;
						GC.KeepAlive(m_getLoadingOrder_CallBack_Real);
						EV_RegisterCallback_EarthView_World_Graphic_CMeshManager_getLoadingOrder_Real(this.NativeObject, m_getLoadingOrder_CallBack_Real);
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
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name, string groupName)
				{
					return base.GetByName_NoVirtual(name,groupName);
				}
				public override EarthView.World.Graphic.ResourcePtr GetByName(string name)
				{
					return base.GetByName_NoVirtual(name);
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
				public static MeshManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					MeshManager obj = baseObj as  MeshManager;
					if (object.Equals(obj, null))
					{
						obj = new MeshManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CMeshManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class MeshManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					MeshManager emptyInstance = new MeshManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
