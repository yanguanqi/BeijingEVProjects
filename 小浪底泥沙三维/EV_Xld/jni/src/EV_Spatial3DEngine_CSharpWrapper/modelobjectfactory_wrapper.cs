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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				public class ModelObjectFactory : EarthView.World.Core.AllocatedObject
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getSingletonPtr_CModelObjectFactory();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ModelObjectFactory GetSingletonPtr()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getSingletonPtr_CModelObjectFactory();
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ModelObjectFactory csObj = new EarthView.World.Spatial3D.ModelManager.ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelObjectFactory");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelObjectFactory;
							csObj.BindNativeObject(__ptr, "CModelObjectFactory");
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_releaseSingleton_void();

					/// <summary>
					/// 释放单例的数据源工厂句柄
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					public static void ReleaseSingleton()
					{
						EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_releaseSingleton_void();
						
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setGroupName_void_EVString(string group);

					/// <summary>
					/// 修改默认资源组，让用户有机会去指定自己想要的资源组
					/// 默认情况下资源组是数据源的名称，如果需要修改默认资源组名称，那么工厂在创建的时候会帮助你去创建资源组对象和销毁资源组对象
					/// 如果修改了默认资源组，之后想恢复默认行为，再设置一次资源组名称为空即可, 修改资源组在load以前有效
					/// ps:此接口对文件版无效，不要指定系统默认的资源组
					/// </summary>
					/// <param name="group">资源组名称</param>
					/// <returns></returns>
					public static void SetGroupName(string group)
					{
						EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setGroupName_void_EVString(group);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getGroupName_EVString();

					public static string GetGroupName()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getGroupName_EVString();
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_EVString(IntPtr pSceneManager, string datasourceName, string meshName);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualModelObject CreateModelObject(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, string meshName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualModelObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualModelObject;
							csObj.BindNativeObject(__ptr, "CManualModelObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_uint32(IntPtr pSceneManager, string datasourceName, uint meshID);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualModelObject CreateModelObject(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualModelObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualModelObject;
							csObj.BindNativeObject(__ptr, "CManualModelObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_EVString(IntPtr pSceneManager, IntPtr pModelDataSource, string meshName);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualModelObject CreateModelObject(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, string meshName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualModelObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualModelObject;
							csObj.BindNativeObject(__ptr, "CManualModelObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_ev_uint32(IntPtr pSceneManager, IntPtr pModelDataSource, uint meshID);

					/// <summary>
					/// 创建 模型库 中的一个模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualModelObject CreateModelObject(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_CModelDataSource_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualModelObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualModelObject;
							csObj.BindNativeObject(__ptr, "CManualModelObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_bool(IntPtr pSceneManager, string modelfile, byte bFileDirAsGroup);

					/// <summary>
					/// 创建 一个本地模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="modelfile">模型文件（绝对路径）</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualModelObject CreateModelObject(EarthView.World.Graphic.SceneManager pSceneManager, string modelfile, bool bFileDirAsGroup)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createModelObject_CManualModelObject_CSceneManager_EVString_ev_bool(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, modelfile, Convert.ToByte(bFileDirAsGroup));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualModelObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualModelObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualModelObject;
							csObj.BindNativeObject(__ptr, "CManualModelObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_EVString(IntPtr pSceneManager, string datasourceName, string meshName);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualInstanceObject CreateInstanceObject(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, string meshName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualInstanceObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualInstanceObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualInstanceObject;
							csObj.BindNativeObject(__ptr, "CManualInstanceObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_uint32(IntPtr pSceneManager, string datasourceName, uint meshID);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualInstanceObject CreateInstanceObject(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualInstanceObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualInstanceObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualInstanceObject;
							csObj.BindNativeObject(__ptr, "CManualInstanceObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_EVString(IntPtr pSceneManager, IntPtr pModelDataSource, string meshName);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshName">模型名称</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualInstanceObject CreateInstanceObject(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, string meshName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualInstanceObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualInstanceObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualInstanceObject;
							csObj.BindNativeObject(__ptr, "CManualInstanceObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_ev_uint32(IntPtr pSceneManager, IntPtr pModelDataSource, uint meshID);

					/// <summary>
					/// 创建 模型库 中的一个instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源对象</param>
					/// <param name="meshID">模型id</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualInstanceObject CreateInstanceObject(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, uint meshID)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_CModelDataSource_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshID);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualInstanceObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualInstanceObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualInstanceObject;
							csObj.BindNativeObject(__ptr, "CManualInstanceObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_bool(IntPtr pSceneManager, string modelfile, byte bFileDirAsGroup);

					/// <summary>
					/// 创建 一个本地instance模型对象
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="meshfile">模型文件（绝对路径）</param>
					/// <param name="bFileDirAsGroup">true, 根据文件所在目录创建工作组。false，使用默认的General工作组</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ManualInstanceObject CreateInstanceObject(EarthView.World.Graphic.SceneManager pSceneManager, string modelfile, bool bFileDirAsGroup)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createInstanceObject_CManualInstanceObject_CSceneManager_EVString_ev_bool(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, modelfile, Convert.ToByte(bFileDirAsGroup));
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ManualInstanceObject csObj = new EarthView.World.Spatial3D.ModelManager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CManualInstanceObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ManualInstanceObject;
							csObj.BindNativeObject(__ptr, "CManualInstanceObject");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createSubEntityObject_CModelBaseObject_CModelBaseObject_IntVector(IntPtr pModelObject, IntPtr subEntityIndexs);

					/// <summary>
					/// 根据传入的 EarthView::World::Spatial3D::ModelManager::CModelBaseObject 创建一个只显示相应子部件的对象
					/// 传入的模型对象是什么类型，创建出的就是什么类型
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <param name="subEntityIndexs">subentity索引</param>
					/// <returns>失败则返回NULL</returns>
					public static EarthView.World.Spatial3D.ModelManager.ModelBaseObject CreateSubEntityObject(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModelObject, EarthView.World.Core.IntVector subEntityIndexs)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_createSubEntityObject_CModelBaseObject_CModelBaseObject_IntVector(object.Equals(pModelObject, null) ? IntPtr.Zero : pModelObject.NativeObject, object.Equals(subEntityIndexs, null) ? IntPtr.Zero : subEntityIndexs.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.ModelManager.ModelBaseObject csObj = new EarthView.World.Spatial3D.ModelManager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CModelBaseObject");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.ModelManager.ModelBaseObject;
							csObj.BindNativeObject(__ptr, "CModelBaseObject");
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
					private static extern void EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_destroyObject_void_CModelBaseObject(IntPtr pModelObject);

					/// <summary>
					/// 销毁模型对象
					/// </summary>
					/// <param name="pModelObject">模型对象</param>
					/// <returns></returns>
					public static void DestroyObject(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModelObject)
					{
						EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_destroyObject_void_CModelBaseObject(object.Equals(pModelObject, null) ? IntPtr.Zero : pModelObject.NativeObject);
						
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
					private static extern ushort EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getMaxInstanceCountPerBatch_ev_uint16();

					/// <summary>
					/// 获取instance每个批次渲染个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>instance每个批次渲染个数</returns>
					public static ushort GetMaxInstanceCountPerBatch()
					{
						ushort ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_getMaxInstanceCountPerBatch_ev_uint16();
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setMaxInstanceCountPerBatch_ev_bool_ev_uint16(ushort count);

					/// <summary>
					///  设置instance每个批次最大渲染个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>设置成功返回true否则返回false</returns>
					public static bool SetMaxInstanceCountPerBatch(ushort count)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_setMaxInstanceCountPerBatch_ev_bool_ev_uint16(count);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkHardwareInstanceCapability_ev_bool();

					/// <summary>
					/// 判断是否支持硬件Instance
					/// </summary>				
					/// <returns></returns>
					public static bool CheckHardwareInstanceCapability()
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkHardwareInstanceCapability_ev_bool();
						
						return Convert.ToBoolean(ret);
						
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
					private static extern int EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CMeshPtr(IntPtr mesh);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="mesh">mesh资源对象</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					public static EarthView.World.Graphic.INSTANCETECHNIUQE CheckInstanceCapability(EarthView.World.Graphic.MeshPtr mesh)
					{
						int ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CMeshPtr(object.Equals(mesh, null) ? IntPtr.Zero : mesh.NativeObject);
						
						return (EarthView.World.Graphic.INSTANCETECHNIUQE)ret;
						
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
					private static extern int EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_ev_uint32(IntPtr pSceneManager, IntPtr pModelDataSource, uint meshID);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源指针</param>
					/// <param name="meshID">模型id</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					public static EarthView.World.Graphic.INSTANCETECHNIUQE CheckInstanceCapability(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, uint meshID)
					{
						int ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshID);
						
						return (EarthView.World.Graphic.INSTANCETECHNIUQE)ret;
						
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
					private static extern int EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_EVString(IntPtr pSceneManager, IntPtr pModelDataSource, string meshName);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="pModelDataSource">数据源指针</param>
					/// <param name="mesh">mesh名称</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					public static EarthView.World.Graphic.INSTANCETECHNIUQE CheckInstanceCapability(EarthView.World.Graphic.SceneManager pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource pModelDataSource, string meshName)
					{
						int ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_CModelDataSource_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, object.Equals(pModelDataSource, null) ? IntPtr.Zero : pModelDataSource.NativeObject, meshName);
						
						return (EarthView.World.Graphic.INSTANCETECHNIUQE)ret;
						
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
					private static extern int EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_ev_uint32(IntPtr pSceneManager, string datasourceName, uint meshID);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型id</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					public static EarthView.World.Graphic.INSTANCETECHNIUQE CheckInstanceCapability(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, uint meshID)
					{
						int ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_ev_uint32(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshID);
						
						return (EarthView.World.Graphic.INSTANCETECHNIUQE)ret;
						
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
					private static extern int EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_EVString(IntPtr pSceneManager, string datasourceName, string meshName);

					/// <summary>
					///  检测系统支持哪些Instance技术
					/// </summary>
					/// <param name="pSceneManager">场景管理器对象</param>
					/// <param name="datasourceName">数据源名称</param>
					/// <param name="meshID">模型名称</param>
					/// <returns>InstanceTechniuqe逻辑运算值</returns>
					public static EarthView.World.Graphic.INSTANCETECHNIUQE CheckInstanceCapability(EarthView.World.Graphic.SceneManager pSceneManager, string datasourceName, string meshName)
					{
						int ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_checkInstanceCapability_InstanceTechniuqe_CSceneManager_EVString_EVString(object.Equals(pSceneManager, null) ? IntPtr.Zero : pSceneManager.NativeObject, datasourceName, meshName);
						
						return (EarthView.World.Graphic.INSTANCETECHNIUQE)ret;
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalVertexProgram_ev_bool_EVString(string strVertexProgramName);

					public static bool IsInternalVertexProgram(string strVertexProgramName)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalVertexProgram_ev_bool_EVString(strVertexProgramName);
						
						return Convert.ToBoolean(ret);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalFragmentProgram_ev_bool_EVString(string strFragmentProgramName);

					public static bool IsInternalFragmentProgram(string strFragmentProgramName)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelObjectFactory_isInternalFragmentProgram_ev_bool_EVString(strFragmentProgramName);
						
						return Convert.ToBoolean(ret);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelObjectFactory = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CModelObjectFactory", new ModelObjectFactoryClassFactory());

					public ModelObjectFactory(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelObjectFactory FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelObjectFactory obj = baseObj as  ModelObjectFactory;
						if (object.Equals(obj, null))
						{
							obj = new ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelObjectFactory");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelObjectFactoryClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelObjectFactory emptyInstance = new ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
