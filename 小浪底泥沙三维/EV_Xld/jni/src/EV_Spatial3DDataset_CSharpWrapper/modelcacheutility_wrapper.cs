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
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
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
				public class ModelCacheUtility : EarthView.World.Core.AllocatedObject
				{
					public ModelCacheUtility() : base(CreatedWhenConstruct.CWC_NotToCreate)
					{
						Create("CModelCacheUtility",  null);
						RegisterCallBack();
						this.needDispose = true;
						GlobalTraceInfoMap.Put(this);
					}

					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_clearDataset_ev_bool_EVString_EVString_ev_bool(string datasourceName, string datasetName, byte bTemplDataset);

					/// <summary>
					///  清除数据集缓存
					/// </summary>
					/// <param name="datasourceName">数据源名</param>
					/// <param name="datasetName">数据集名</param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ClearDataset(string datasourceName, string datasetName, bool bTemplDataset)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_clearDataset_ev_bool_EVString_EVString_ev_bool(datasourceName, datasetName, Convert.ToByte(bTemplDataset));
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(string datasourceName, string datasetName, string octCode, IntPtr pMeshFeature, IntPtr thumbTextures, IntPtr origTextures, IntPtr cubeTextures, IntPtr materials, IntPtr progs, IntPtr gpus, IntPtr skeletons, IntPtr animation);

					/// <summary>
					///  缓存实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool WriteDatasetModel(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature, EarthView.World.Spatial3D.Dataset.FeatureVector thumbTextures, EarthView.World.Spatial3D.Dataset.FeatureVector origTextures, EarthView.World.Spatial3D.Dataset.FeatureVector cubeTextures, EarthView.World.Spatial3D.Dataset.FeatureVector materials, EarthView.World.Spatial3D.Dataset.FeatureVector progs, EarthView.World.Spatial3D.Dataset.FeatureVector gpus, EarthView.World.Spatial3D.Dataset.FeatureVector skeletons, EarthView.World.Spatial3D.Dataset.FeatureVector animation)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(datasourceName, datasetName, octCode, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject, object.Equals(thumbTextures, null) ? IntPtr.Zero : thumbTextures.NativeObject, object.Equals(origTextures, null) ? IntPtr.Zero : origTextures.NativeObject, object.Equals(cubeTextures, null) ? IntPtr.Zero : cubeTextures.NativeObject, object.Equals(materials, null) ? IntPtr.Zero : materials.NativeObject, object.Equals(progs, null) ? IntPtr.Zero : progs.NativeObject, object.Equals(gpus, null) ? IntPtr.Zero : gpus.NativeObject, object.Equals(skeletons, null) ? IntPtr.Zero : skeletons.NativeObject, object.Equals(animation, null) ? IntPtr.Zero : animation.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDBModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(string datasourceName, string datasetName, string octCode, IntPtr pMeshFeature, IntPtr thumbTextures, IntPtr origTextures, IntPtr cubeTextures, IntPtr materials, IntPtr progs, IntPtr gpus, IntPtr skeletons, IntPtr animation);

					/// <summary>
					///  缓存实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool WriteTemplDBModel(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature, EarthView.World.Spatial3D.Dataset.FeatureVector thumbTextures, EarthView.World.Spatial3D.Dataset.FeatureVector origTextures, EarthView.World.Spatial3D.Dataset.FeatureVector cubeTextures, EarthView.World.Spatial3D.Dataset.FeatureVector materials, EarthView.World.Spatial3D.Dataset.FeatureVector progs, EarthView.World.Spatial3D.Dataset.FeatureVector gpus, EarthView.World.Spatial3D.Dataset.FeatureVector skeletons, EarthView.World.Spatial3D.Dataset.FeatureVector animation)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDBModel_ev_bool_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(datasourceName, datasetName, octCode, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject, object.Equals(thumbTextures, null) ? IntPtr.Zero : thumbTextures.NativeObject, object.Equals(origTextures, null) ? IntPtr.Zero : origTextures.NativeObject, object.Equals(cubeTextures, null) ? IntPtr.Zero : cubeTextures.NativeObject, object.Equals(materials, null) ? IntPtr.Zero : materials.NativeObject, object.Equals(progs, null) ? IntPtr.Zero : progs.NativeObject, object.Equals(gpus, null) ? IntPtr.Zero : gpus.NativeObject, object.Equals(skeletons, null) ? IntPtr.Zero : skeletons.NativeObject, object.Equals(animation, null) ? IntPtr.Zero : animation.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplEntity_ev_bool_EVString_EVString_EVString_IFeature(string datasourceName, string datasetName, string code, IntPtr pMeshFeature);

					/// <summary>
					///  缓存模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool WriteTemplEntity(string datasourceName, string datasetName, string code, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplEntity_ev_bool_EVString_EVString_EVString_IFeature(datasourceName, datasetName, code, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteDatasetModel_ev_bool_EVString_EVString_EVString_ev_uint32(string datasourceName, string datasetName, string octCode, uint id);

					/// <summary>
					/// 删除实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool DeleteDatasetModel(string datasourceName, string datasetName, string octCode, uint id)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteDatasetModel_ev_bool_EVString_EVString_EVString_ev_uint32(datasourceName, datasetName, octCode, id);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplDBModel_ev_bool_EVString_EVString_EVString_ev_uint32(string datasourceName, string datasetName, string octCode, uint id);

					/// <summary>
					/// 删除实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool DeleteTemplDBModel(string datasourceName, string datasetName, string octCode, uint id)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplDBModel_ev_bool_EVString_EVString_EVString_ev_uint32(datasourceName, datasetName, octCode, id);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplEntity_ev_bool_EVString_EVString_ev_uint32(string datasourceName, string datasetName, uint id);

					/// <summary>
					/// 删除模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool DeleteTemplEntity(string datasourceName, string datasetName, uint id)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_deleteTemplEntity_ev_bool_EVString_EVString_ev_uint32(datasourceName, datasetName, id);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(string datasourceName, string datasetName, string octCode, IntPtr pMeshFeature);

					/// <summary>
					/// 更新实体数据集场景信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool UpdateDatasetEntityInfo(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(datasourceName, datasetName, octCode, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(string datasourceName, string datasetName, string octCode, IntPtr pMeshFeature);

					/// <summary>
					/// 更新模板数据集场景信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool UpdateTemplDatasetEntityInfo(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDatasetEntityInfo_ev_bool_EVString_EVString_EVString_IFeature(datasourceName, datasetName, octCode, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDBInfo_ev_bool_EVString_EVString_IFeature(string datasourceName, string datasetName, IntPtr pMeshFeature);

					/// <summary>
					/// 更新模板库基础信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool UpdateTemplDBInfo(string datasourceName, string datasetName, EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateTemplDBInfo_ev_bool_EVString_EVString_IFeature(datasourceName, datasetName, object.Equals(pMeshFeature, null) ? IntPtr.Zero : pMeshFeature.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModel_ev_bool_CEntityDataset_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(IntPtr pDataset, string octCode, uint id, ref IntPtr pMeshFeature, IntPtr thumbTextures, IntPtr origTextures, IntPtr cubeTextures, IntPtr materials, IntPtr progs, IntPtr gpus, IntPtr skeletons, IntPtr animation);

					/// <summary>
					/// 读取实体数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadDatasetModel(EarthView.World.Spatial3D.Dataset.EntityDataset pDataset, string octCode, uint id, ref EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature, ref  EarthView.World.Spatial3D.Dataset.FeatureVector thumbTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector origTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector cubeTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector materials, ref  EarthView.World.Spatial3D.Dataset.FeatureVector progs, ref  EarthView.World.Spatial3D.Dataset.FeatureVector gpus, ref  EarthView.World.Spatial3D.Dataset.FeatureVector skeletons, ref  EarthView.World.Spatial3D.Dataset.FeatureVector animation)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModel_ev_bool_CEntityDataset_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, octCode, id, ref pMeshFeature.NativeObject, object.Equals(thumbTextures, null) ? IntPtr.Zero : thumbTextures.NativeObject, object.Equals(origTextures, null) ? IntPtr.Zero : origTextures.NativeObject, object.Equals(cubeTextures, null) ? IntPtr.Zero : cubeTextures.NativeObject, object.Equals(materials, null) ? IntPtr.Zero : materials.NativeObject, object.Equals(progs, null) ? IntPtr.Zero : progs.NativeObject, object.Equals(gpus, null) ? IntPtr.Zero : gpus.NativeObject, object.Equals(skeletons, null) ? IntPtr.Zero : skeletons.NativeObject, object.Equals(animation, null) ? IntPtr.Zero : animation.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDBModel_ev_bool_CMeshTemplateDataset_EVString_EVString_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(IntPtr pDataset, string datasourceName, string datasetName, string octCode, uint id, ref IntPtr pMeshFeature, IntPtr thumbTextures, IntPtr origTextures, IntPtr cubeTextures, IntPtr materials, IntPtr progs, IntPtr gpus, IntPtr skeletons, IntPtr animatio);

					/// <summary>
					/// 读取实体模型库数据集模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadTemplDBModel(EarthView.World.Spatial3D.Dataset.MeshTemplateDataset pDataset, string datasourceName, string datasetName, string octCode, uint id, ref EarthView.World.Spatial.GeoDataset.Ifeature pMeshFeature, ref  EarthView.World.Spatial3D.Dataset.FeatureVector thumbTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector origTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector cubeTextures, ref  EarthView.World.Spatial3D.Dataset.FeatureVector materials, ref  EarthView.World.Spatial3D.Dataset.FeatureVector progs, ref  EarthView.World.Spatial3D.Dataset.FeatureVector gpus, ref  EarthView.World.Spatial3D.Dataset.FeatureVector skeletons, ref  EarthView.World.Spatial3D.Dataset.FeatureVector animatio)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDBModel_ev_bool_CMeshTemplateDataset_EVString_EVString_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, datasourceName, datasetName, octCode, id, ref pMeshFeature.NativeObject, object.Equals(thumbTextures, null) ? IntPtr.Zero : thumbTextures.NativeObject, object.Equals(origTextures, null) ? IntPtr.Zero : origTextures.NativeObject, object.Equals(cubeTextures, null) ? IntPtr.Zero : cubeTextures.NativeObject, object.Equals(materials, null) ? IntPtr.Zero : materials.NativeObject, object.Equals(progs, null) ? IntPtr.Zero : progs.NativeObject, object.Equals(gpus, null) ? IntPtr.Zero : gpus.NativeObject, object.Equals(skeletons, null) ? IntPtr.Zero : skeletons.NativeObject, object.Equals(animatio, null) ? IntPtr.Zero : animatio.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern IntPtr EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplEntity_IFeature_CEntityDataset_ev_uint32_EVString(IntPtr pDataset, uint id, string code);

					/// <summary>
					/// 读取模型库模型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static EarthView.World.Spatial.GeoDataset.Ifeature ReadTemplEntity(EarthView.World.Spatial3D.Dataset.EntityDataset pDataset, uint id, string code)
					{
						IntPtr __ptr = EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplEntity_IFeature_CEntityDataset_ev_uint32_EVString(object.Equals(pDataset, null) ? IntPtr.Zero : pDataset.NativeObject, id, code);
						
						if(__ptr==IntPtr.Zero)
						{
						return null;
						}
						EarthView.World.Spatial.GeoDataset.Ifeature csObj = new EarthView.World.Spatial.GeoDataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate);
						csObj.BindNativeObject(__ptr, "IFeature");
						csObj.Delegate = true;
						IClassFactory csObjClassFactory = GlobalClassFactoryMap.Get(csObj.GetCppInstanceTypeName());
						if (csObjClassFactory != null)
						{
							csObj.Delegate = true;
							csObj = csObjClassFactory.Create() as EarthView.World.Spatial.GeoDataset.Ifeature;
							csObj.BindNativeObject(__ptr, "IFeature");
							csObj.Delegate = true;
						}
						return csObj;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(string datasourceName, string datasetName, string octCode, IntPtr origFeatureVec, IntPtr imgTextures);

					/// <summary>
					/// 读取实体数据集模型的大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadDatasetModelOrigTexture(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial3D.Dataset.FeatureVector origFeatureVec, ref  EarthView.World.Spatial3D.Dataset.TextureStreamVector imgTextures)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(datasourceName, datasetName, octCode, object.Equals(origFeatureVec, null) ? IntPtr.Zero : origFeatureVec.NativeObject, object.Equals(imgTextures, null) ? IntPtr.Zero : imgTextures.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(string datasourceName, string datasetName, string octCode, IntPtr origFeatureVec, IntPtr texStreams);

					/// <summary>
					/// 读取实体模型库数据集模型的大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadTemplDatasetOrigTexture(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial3D.Dataset.FeatureVector origFeatureVec, ref  EarthView.World.Spatial3D.Dataset.TextureStreamVector texStreams)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector_TextureStreamVector(datasourceName, datasetName, octCode, object.Equals(origFeatureVec, null) ? IntPtr.Zero : origFeatureVec.NativeObject, object.Equals(texStreams, null) ? IntPtr.Zero : texStreams.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern uint EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readMeshTemplID_ev_uint32_EVString_EVString_ev_uint32(string datasourceName, string datasetName, uint meshInstID);

					public static uint ReadMeshTemplID(string datasourceName, string datasetName, uint meshInstID)
					{
						uint ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readMeshTemplID_ev_uint32_EVString_EVString_ev_uint32(datasourceName, datasetName, meshInstID);
						
						return ret;
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetAniDataStream_ev_bool_EVString_EVString_EVString_ev_uint32_MemoryDataStreamPtr(string datasourceName, string datasetName, string octCode, uint meshID, IntPtr stream);

					/// <summary>
					/// 读本地模型数据集ani feature
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadDatasetAniDataStream(string datasourceName, string datasetName, string octCode, uint meshID, ref  EarthView.World.Core.MemoryDataStreamPtr stream)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readDatasetAniDataStream_ev_bool_EVString_EVString_EVString_ev_uint32_MemoryDataStreamPtr(datasourceName, datasetName, octCode, meshID, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplAniDataStream_ev_bool_EVString_EVString_ev_uint32_MemoryDataStreamPtr(string datasourceName, string datasetName, uint meshID, IntPtr stream);

					/// <summary>
					/// 读取模型库的ani feature
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool ReadTemplAniDataStream(string datasourceName, string datasetName, uint meshID, ref  EarthView.World.Core.MemoryDataStreamPtr stream)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_readTemplAniDataStream_ev_bool_EVString_EVString_ev_uint32_MemoryDataStreamPtr(datasourceName, datasetName, meshID, object.Equals(stream, null) ? IntPtr.Zero : stream.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(string datasourceName, string datasetName, string octCode, IntPtr origFeatureVec);

					/// <summary>
					/// 缓存实体数据集大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool WriteDatasetModelOrigTexture(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial3D.Dataset.FeatureVector origFeatureVec)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeDatasetModelOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(datasourceName, datasetName, octCode, object.Equals(origFeatureVec, null) ? IntPtr.Zero : origFeatureVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern byte EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(string datasourceName, string datasetName, string octCode, IntPtr origFeatureVec);

					/// <summary>
					/// 缓存实体模型库数据集大纹理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static bool WriteTemplDatasetOrigTexture(string datasourceName, string datasetName, string octCode, EarthView.World.Spatial3D.Dataset.FeatureVector origFeatureVec)
					{
						byte ret=EarthView_World_Spatial3D_Dataset_CModelCacheUtility_writeTemplDatasetOrigTexture_ev_bool_EVString_EVString_EVString_FeatureVector(datasourceName, datasetName, octCode, object.Equals(origFeatureVec, null) ? IntPtr.Zero : origFeatureVec.NativeObject);
						
						return Convert.ToBoolean(ret);
						
					}


					#if DEBUG 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp_d.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#else 
						#if Windows 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#elif Linux 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Android 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.so", CallingConvention = CallingConvention.StdCall)]
						#elif Apple 
							[System.Runtime.InteropServices.DllImport("__Internal")]
						#else 
							[System.Runtime.InteropServices.DllImport("EV_Spatial3DDataset_CSharp.dll", CallingConvention = CallingConvention.StdCall)]
						#endif 
					#endif 
					private static extern void EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateAltitudeMode_void_EVString_EVString_EVDatasetType_EVAltitudeMode_ev_real64(string datasourceName, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, EarthView.World.Spatial.Utility.EVALTITUDEMODE altitudeMode, double altitudeValue);

					/// <summary>
					/// 修改缓存中的高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					public static void UpdateAltitudeMode(string datasourceName, string datasetName, EarthView.World.Spatial.GeoDataset.EVDATASETTYPE type, EarthView.World.Spatial.Utility.EVALTITUDEMODE altitudeMode, double altitudeValue)
					{
						EarthView_World_Spatial3D_Dataset_CModelCacheUtility_updateAltitudeMode_void_EVString_EVString_EVDatasetType_EVAltitudeMode_ev_real64(datasourceName, datasetName, type, altitudeMode, altitudeValue);
						
					}

					#if DEBUG 
						#if Windows 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#elif Linux 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_d.so");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.so");

						#else 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_d.dll");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp_d.dll");

						#endif 
					#else 
						#if Windows 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#elif Linux 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset.so");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.so");

						#else 
							private static bool bLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset.dll");
							private static bool csbLoadModelCacheUtility = LoadDll.Load("EV_Spatial3DDataset_CSharp.dll");

						#endif 
					#endif 

					private static bool registerStatus = GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Dataset::CModelCacheUtility", new ModelCacheUtilityClassFactory());

					public ModelCacheUtility(CreatedWhenConstruct bAutoCreate) : base(bAutoCreate)
					{
					}

					public override void RegisterCallBack()
					{
						if (this.NativeObject != IntPtr.Zero)
						{
						}
					}
					public static ModelCacheUtility FromBaseObject(BaseObject baseObj)
					{
						if (baseObj == null || baseObj.NativeObject == IntPtr.Zero)
							return null;
						ModelCacheUtility obj = baseObj as  ModelCacheUtility;
						if (object.Equals(obj, null))
						{
							obj = new ModelCacheUtility(CreatedWhenConstruct.CWC_NotToCreate);
							obj.BindNativeObject(baseObj.NativeObject, "CModelCacheUtility");
							obj.IncreaseCast();
						}

						return obj;
					}
				}

				public class ModelCacheUtilityClassFactory : IClassFactory
				{
					public BaseObject Create()
					{
						ModelCacheUtility emptyInstance = new ModelCacheUtility(CreatedWhenConstruct.CWC_NotToCreate);
						return emptyInstance;
					}
				}

			}
		}
	}
}
