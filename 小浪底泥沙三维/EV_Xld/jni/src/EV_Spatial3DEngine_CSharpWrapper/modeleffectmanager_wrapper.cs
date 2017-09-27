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
		namespace Core
		{
		}
	}
}
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
				public class ModelEffectManager : EarthView.World.Core.AllocatedObject
				{
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pSceneManager">场景管理器</param>
					/// <param name="pModelDataSource">模型数据源，不能为NULL</param>
					/// <param name="pEffectDataSource">特效数据源</param>
					/// <returns></returns>
					public ModelEffectManager(EarthView.World.Graphic.SceneManager ref_pSceneManager, EarthView.World.Spatial3D.Dataset.ModelDataSource ref_pModelDataSource, EarthView.World.Spatial3D.Dataset.EffectDataSource ref_pEffectDataSource) : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						NameValuePairList list = new NameValuePairList();
						BasePtr valueref_pSceneManager = new BasePtr(ref_pSceneManager);
						list.Add("ref_pSceneManager", valueref_pSceneManager.PtrVal);
						BasePtr valueref_pModelDataSource = new BasePtr(ref_pModelDataSource);
						list.Add("ref_pModelDataSource", valueref_pModelDataSource.PtrVal);
						BasePtr valueref_pEffectDataSource = new BasePtr(ref_pEffectDataSource);
						list.Add("ref_pEffectDataSource", valueref_pEffectDataSource.PtrVal);
						Create("CModelEffectManager", list);
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
					private static extern uint EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDNum_ev_uint32(IntPtr pNativeObject);

					/// <summary>
					/// 获取模型库中的模型个数
					/// </summary>
					/// <returns>模型的个数</returns>
					public uint GetIDNum()
					{
						uint ret=EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDNum_ev_uint32(this.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllIDS_CObjectIDList(IntPtr pNativeObject);

					/// <summary>
					/// 获取模型库中的所有模型ID存到容器中
					/// </summary>
					/// <returns>记录ID的列表</returns>
					public EarthView.World.Spatial3D.Dataset.ObjectIDList GetAllIDS()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllIDS_CObjectIDList(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ObjectIDList csObj = new EarthView.World.Spatial3D.Dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CObjectIDList");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ObjectIDList;
							csObj.BindNativeObject(__ptr, "CObjectIDList");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllUserType_StringVector(IntPtr pNativeObject);

					/// <summary>
					/// 获取模型库中的所有模型类别
					/// </summary>
					/// <returns>用户类别列表</returns>
					public EarthView.World.Core.StringVector GetAllUserType()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllUserType_StringVector(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Core.StringVector csObj = new EarthView.World.Core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "StringVector");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Core.StringVector;
							csObj.BindNativeObject(__ptr, "StringVector");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByUserType_CObjectIDList_EVString(IntPtr pNativeObject, string userType);

					/// <summary>
					/// 获取某模型类别下的ID集合
					/// </summary>
					/// <param name="userType">模型类别</param>
					/// <returns>存储ID的容器</returns>
					public EarthView.World.Spatial3D.Dataset.ObjectIDList GetIDSByUserType(string userType)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByUserType_CObjectIDList_EVString(this.NativeObject, userType);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ObjectIDList csObj = new EarthView.World.Spatial3D.Dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CObjectIDList");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ObjectIDList;
							csObj.BindNativeObject(__ptr, "CObjectIDList");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByMeshName_CObjectIDList_EVString(IntPtr pNativeObject, string meshName);

					/// <summary>
					/// 获取某个mesh名称下对应的ID集合，有可能只有一个
					/// </summary>
					/// <param name="meshName">模型类别</param>
					/// <returns>存储ID的容器</returns>
					public EarthView.World.Spatial3D.Dataset.ObjectIDList GetIDSByMeshName(string meshName)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByMeshName_CObjectIDList_EVString(this.NativeObject, meshName);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.ObjectIDList csObj = new EarthView.World.Spatial3D.Dataset.ObjectIDList(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CObjectIDList");
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.ObjectIDList;
							csObj.BindNativeObject(__ptr, "CObjectIDList");
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getMeshNameByID_EVString_ev_uint32(IntPtr pNativeObject, uint id);

					/// <summary>
					/// 通过模型ID获取模型名称
					/// </summary>
					/// <param name="id">模型ID</param>
					/// <returns>返回模型名称</returns>
					public string GetMeshNameByID(uint id)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getMeshNameByID_EVString_ev_uint32(this.NativeObject, id);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_createModel_CModelBaseObject_ev_uint32_ev_bool(IntPtr pNativeObject, uint id, byte bRemoveParentNode);

					/// <summary>
					/// 创建模型对象
					/// </summary>
					/// <param name="id">模型ID</param>
					/// <param name="bRemoveParentNode">true,返回的对象里边的scenenode没有parentNode| false, 返回的对象里边的scenenode有parentNode</param>
					/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject*，返回模型对象</returns>
					public EarthView.World.Spatial3D.ModelManager.ModelBaseObject CreateModel(uint id, bool bRemoveParentNode)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_createModel_CModelBaseObject_ev_uint32_ev_bool(this.NativeObject, id, Convert.ToByte(bRemoveParentNode));
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelEffectManager_destoryModel_ev_bool_CModelBaseObject(IntPtr pNativeObject, IntPtr pModel);

					/// <summary>
					/// 销毁模型对象
					/// </summary>
					/// <param name="pModel">模型对象</param>
					/// <returns>成功返回true，失败返回false</returns>
					public bool DestoryModel(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModel)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelEffectManager_destoryModel_ev_bool_CModelBaseObject(this.NativeObject, object.Equals(pModel, null) ? IntPtr.Zero : pModel.NativeObject);
						
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
					private static extern byte EarthView_World_Spatial3D_ModelManager_CModelEffectManager_saveMaterialEditting_ev_bool_CModelBaseObject_CMaterialPtr(IntPtr pNativeObject, IntPtr pModel, IntPtr matPtr);

					/// <summary>
					/// 保存材质编辑结果 
					/// </summary>
					/// <param name="pModel">模型对象</param>
					/// <param name="matPtr">模型材质</param>
					/// <returns>成功返回true，失败返回false</returns>
					public bool SaveMaterialEditting(EarthView.World.Spatial3D.ModelManager.ModelBaseObject pModel, EarthView.World.Graphic.MaterialPtr matPtr)
					{
						byte ret=EarthView_World_Spatial3D_ModelManager_CModelEffectManager_saveMaterialEditting_ev_bool_CModelBaseObject_CMaterialPtr(this.NativeObject, object.Equals(pModel, null) ? IntPtr.Zero : pModel.NativeObject, object.Equals(matPtr, null) ? IntPtr.Zero : matPtr.NativeObject);
						
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
					private static extern IntPtr EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getRootTree_CUserTypeTree(IntPtr pNativeObject);

					/// <summary>
					/// 获取根节点树
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeTree*，返回根节点树</returns>
					public EarthView.World.Spatial3D.Dataset.UserTypeTree GetRootTree()
					{
						IntPtr __ptr = EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getRootTree_CUserTypeTree(this.NativeObject);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial3D.Dataset.UserTypeTree csObj = new EarthView.World.Spatial3D.Dataset.UserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "CUserTypeTree");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial3D.Dataset.UserTypeTree;
							csObj.BindNativeObject(__ptr, "CUserTypeTree");
							csObj.Delegate = true;
						}
						return csObj;
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.so");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.so");

						#else 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_d.dll");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine.so");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.so");

						#else 
							private static bool bLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine.dll");
							private static bool csbLoadModelEffectManager = LoadDll.Load("EV_Spatial3DEngine_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::ModelManager::CModelEffectManager", new ModelEffectManagerClassFactory());

					public ModelEffectManager(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelEffectManager FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelEffectManager obj = baseObj as  ModelEffectManager;
						if (object.Equals(obj, null))
						{
							obj = new ModelEffectManager(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelEffectManager");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelEffectManagerClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelEffectManager emptyInstance = new ModelEffectManager(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
