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
		namespace Spatial3D
		{
			namespace KmlManager
			{
				public class KmlCacheManager : EarthView.World.Core.AllocatedObject
				{
					public KmlCacheManager() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CKmlCacheManager",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_getSingletonPtr_CKmlCacheManager();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.KmlManager.KmlCacheManager GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_getSingletonPtr_CKmlCacheManager();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.KmlManager.KmlCacheManager csObj = new EarthView.World.Spatial3D.KmlManager.KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CKmlCacheManager");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.KmlManager.KmlCacheManager;
							csObj.BindNativeObject(__ptr, "CKmlCacheManager");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlPicCache_MemoryDataStreamPtr_EVString(IntPtr pNativeObject, string picPath);

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					public EarthView.World.Core.MemoryDataStreamPtr GenKmlPicCache(string picPath)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlPicCache_MemoryDataStreamPtr_EVString(this.NativeObject, picPath);
						
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
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlOrKmzCache_EVString_EVString(IntPtr pNativeObject, string kmlPath);

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					public string GenKmlOrKmzCache(string kmlPath)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlOrKmzCache_EVString_EVString(this.NativeObject, kmlPath);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DEngine_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlModelCache_EVString_EVString_CSceneManager(IntPtr pNativeObject, string modelPath, IntPtr sceneMgr);

					/// <summary>
					/// 
					/// </summary>
					/// <returns></returns>
					public string GenKmlModelCache(string modelPath, EarthView.World.Graphic.SceneManager sceneMgr)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlModelCache_EVString_EVString_CSceneManager(this.NativeObject, modelPath, object.Equals(sceneMgr, null) ? IntPtr.Zero : sceneMgr.NativeObject);
						
						string ret = Marshal.PtrToStringAnsi(__ptr);
						ClassFactory.FreeString(ref __ptr);
						return ret;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadKmlCacheManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::KmlManager::CKmlCacheManager", new KmlCacheManagerClassFactory());

					public KmlCacheManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static KmlCacheManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						KmlCacheManager obj = baseObj as  KmlCacheManager;
						if (object.Equals(obj, null))
						{
							obj = new KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CKmlCacheManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class KmlCacheManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						KmlCacheManager emptyInstance = new KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
