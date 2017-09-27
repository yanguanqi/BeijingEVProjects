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
			public class Layer3DEditorManager : EarthView.World.Core.AllocatedObject
			{

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
				private static extern IntPtr EarthView_World_Spatial3D_CLayer3DEditorManager_getSingletonPtr_CLayer3DEditorManager();

				/// <summary>
				/// 获取单件对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>单件对象</returns>
				public static EarthView.World.Spatial3D.Layer3DEditorManager GetSingletonPtr()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLayer3DEditorManager_getSingletonPtr_CLayer3DEditorManager();
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Layer3DEditorManager csObj = new EarthView.World.Spatial3D.Layer3DEditorManager(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLayer3DEditorManager");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Layer3DEditorManager;
						csObj.BindNativeObject(__ptr, "CLayer3DEditorManager");
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
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorManager_releaseSingleton_void();

				/// <summary>
				/// 释放单件对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				public static void ReleaseSingleton()
				{
					EarthView_World_Spatial3D_CLayer3DEditorManager_releaseSingleton_void();
					
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
				private static extern IntPtr EarthView_World_Spatial3D_CLayer3DEditorManager_getModelLayerEditor_CLayer3DEditor(IntPtr pNativeObject);

				/// <summary>
				/// 获取模型图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				public EarthView.World.Spatial3D.Layer3DEditor GetModelLayerEditor()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLayer3DEditorManager_getModelLayerEditor_CLayer3DEditor(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Layer3DEditor csObj = new EarthView.World.Spatial3D.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLayer3DEditor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Layer3DEditor;
						csObj.BindNativeObject(__ptr, "CLayer3DEditor");
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
				private static extern IntPtr EarthView_World_Spatial3D_CLayer3DEditorManager_getEffectLayerEditor_CLayer3DEditor(IntPtr pNativeObject);

				/// <summary>
				/// 获取特效图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				public EarthView.World.Spatial3D.Layer3DEditor GetEffectLayerEditor()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLayer3DEditorManager_getEffectLayerEditor_CLayer3DEditor(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Layer3DEditor csObj = new EarthView.World.Spatial3D.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLayer3DEditor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Layer3DEditor;
						csObj.BindNativeObject(__ptr, "CLayer3DEditor");
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
				private static extern IntPtr EarthView_World_Spatial3D_CLayer3DEditorManager_getMeshxgLayerEditor_CLayer3DEditor(IntPtr pNativeObject);

				/// <summary>
				/// 获取meshxg图层编辑对象（获得默认的图层编辑器）
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				public EarthView.World.Spatial3D.Layer3DEditor GetMeshxgLayerEditor()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLayer3DEditorManager_getMeshxgLayerEditor_CLayer3DEditor(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Layer3DEditor csObj = new EarthView.World.Spatial3D.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLayer3DEditor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Layer3DEditor;
						csObj.BindNativeObject(__ptr, "CLayer3DEditor");
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
				private static extern IntPtr EarthView_World_Spatial3D_CLayer3DEditorManager_createModelLayerEditor_CLayer3DEditor(IntPtr pNativeObject);

				/// <summary>
				/// 创建模型图层编辑对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				public EarthView.World.Spatial3D.Layer3DEditor CreateModelLayerEditor()
				{
					IntPtr __ptr = EarthView_World_Spatial3D_CLayer3DEditorManager_createModelLayerEditor_CLayer3DEditor(this.NativeObject);
					
					if(__ptr==IntPtr.Zero)
					{
					return null;
					}
					EarthView.World.Spatial3D.Layer3DEditor csObj = new EarthView.World.Spatial3D.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate);
					csObj.BindNativeObject(__ptr, "CLayer3DEditor");
					csObj.Delegate = true;
					IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
					if (csObjClassFactory != null)
					{
						csObj.Delegate = true;
						csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Layer3DEditor;
						csObj.BindNativeObject(__ptr, "CLayer3DEditor");
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
				private static extern void EarthView_World_Spatial3D_CLayer3DEditorManager_destoryModelLayerEditor_void_CLayer3DEditor(IntPtr pNativeObject, IntPtr pEditor);

				/// <summary>
				/// 销毁模型图层编辑对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>图层编辑对象</returns>
				public void DestoryModelLayerEditor(EarthView.World.Spatial3D.Layer3DEditor pEditor)
				{
					EarthView_World_Spatial3D_CLayer3DEditorManager_destoryModelLayerEditor_void_CLayer3DEditor(this.NativeObject, object.Equals(pEditor, null) ? IntPtr.Zero : pEditor.NativeObject);
					
				}

				#if DEBUG 
					#if Windows 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#elif Linux 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_d.so");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

					#else 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

					#endif 
				#else 
					#if Windows 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#elif Linux 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine.so");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

					#else 
						private static bool bLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine.dll");
						private static bool csbLoadLayer3DEditorManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

					#endif 
				#endif 

				private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CLayer3DEditorManager", new Layer3DEditorManagerClassFactory());

				public Layer3DEditorManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
				{
				}

				public override void RegisterCallBack()
				{
					if (this.NativeObject != IntPtr.Zero)
					{
					}
				}
				public static Layer3DEditorManager FromBaseObject(BaseObject baseObj)
				{
					if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
						return null;
					Layer3DEditorManager obj = baseObj as  Layer3DEditorManager;
					if (object.Equals(obj, null))
					{
						obj = new Layer3DEditorManager(CreatedWhenConstruct.CWC_NotToCreate);
						obj.BindNativeObject(baseObj.NativeObject, "CLayer3DEditorManager");
						obj.IncreaseCast();
					}

					return obj;
				}
			}

			public class Layer3DEditorManagerClassFactory : IClassFactory
			{
				public BaseObject Create()
				{
					Layer3DEditorManager emptyInstance = new Layer3DEditorManager(CreatedWhenConstruct.CWC_NotToCreate);
					return emptyInstance;
				}
			}

		}
	}
}
