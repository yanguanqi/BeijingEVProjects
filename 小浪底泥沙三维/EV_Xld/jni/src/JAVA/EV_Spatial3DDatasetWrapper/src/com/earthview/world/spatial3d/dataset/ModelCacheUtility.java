package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelCacheUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelCacheUtility", new ModelCacheUtilityClassFactory());
	}

	public ModelCacheUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelCacheUtility", null);
	}

	native private static boolean clearDataset_EVString_EVString_ev_bool(String datasourceName, String datasetName, boolean bTemplDataset);
	/**
	 * 清除数据集缓存
	 * @param datasourceName 数据源名
	 * @param datasetName 数据集名
	 */
	public static boolean clearDataset(String datasourceName, String datasetName, boolean bTemplDataset)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		boolean bTemplDatasetParamValue = bTemplDataset;
		boolean returnValue = clearDataset_EVString_EVString_ev_bool(datasourceNameParamValue, datasetNameParamValue, bTemplDatasetParamValue);
		return returnValue;
	}
	native private static boolean writeDatasetModel_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(String datasourceName, String datasetName, String octCode, long pMeshFeature, long thumbTextures, long origTextures, long cubeTextures, long materials, long progs, long gpus, long skeletons, long animation);
	/**
	 * 缓存实体数据集模型
	 * @param  
	 */
	public static boolean writeDatasetModel(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial3d.dataset.FeatureVector thumbTextures, com.earthview.world.spatial3d.dataset.FeatureVector origTextures, com.earthview.world.spatial3d.dataset.FeatureVector cubeTextures, com.earthview.world.spatial3d.dataset.FeatureVector materials, com.earthview.world.spatial3d.dataset.FeatureVector progs, com.earthview.world.spatial3d.dataset.FeatureVector gpus, com.earthview.world.spatial3d.dataset.FeatureVector skeletons, com.earthview.world.spatial3d.dataset.FeatureVector animation)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long thumbTexturesParamValue = thumbTextures.nativeObject.pointer;
		long origTexturesParamValue = origTextures.nativeObject.pointer;
		long cubeTexturesParamValue = cubeTextures.nativeObject.pointer;
		long materialsParamValue = materials.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		long gpusParamValue = gpus.nativeObject.pointer;
		long skeletonsParamValue = skeletons.nativeObject.pointer;
		long animationParamValue = animation.nativeObject.pointer;
		boolean returnValue = writeDatasetModel_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, pMeshFeatureParamValue, thumbTexturesParamValue, origTexturesParamValue, cubeTexturesParamValue, materialsParamValue, progsParamValue, gpusParamValue, skeletonsParamValue, animationParamValue);
		return returnValue;
	}
	native private static boolean writeTemplDBModel_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(String datasourceName, String datasetName, String octCode, long pMeshFeature, long thumbTextures, long origTextures, long cubeTextures, long materials, long progs, long gpus, long skeletons, long animation);
	/**
	 * 缓存实体模型库数据集模型
	 * @param  
	 */
	public static boolean writeTemplDBModel(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial3d.dataset.FeatureVector thumbTextures, com.earthview.world.spatial3d.dataset.FeatureVector origTextures, com.earthview.world.spatial3d.dataset.FeatureVector cubeTextures, com.earthview.world.spatial3d.dataset.FeatureVector materials, com.earthview.world.spatial3d.dataset.FeatureVector progs, com.earthview.world.spatial3d.dataset.FeatureVector gpus, com.earthview.world.spatial3d.dataset.FeatureVector skeletons, com.earthview.world.spatial3d.dataset.FeatureVector animation)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long thumbTexturesParamValue = thumbTextures.nativeObject.pointer;
		long origTexturesParamValue = origTextures.nativeObject.pointer;
		long cubeTexturesParamValue = cubeTextures.nativeObject.pointer;
		long materialsParamValue = materials.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		long gpusParamValue = gpus.nativeObject.pointer;
		long skeletonsParamValue = skeletons.nativeObject.pointer;
		long animationParamValue = animation.nativeObject.pointer;
		boolean returnValue = writeTemplDBModel_EVString_EVString_EVString_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, pMeshFeatureParamValue, thumbTexturesParamValue, origTexturesParamValue, cubeTexturesParamValue, materialsParamValue, progsParamValue, gpusParamValue, skeletonsParamValue, animationParamValue);
		return returnValue;
	}
	native private static boolean writeTemplEntity_EVString_EVString_EVString_IFeature(String datasourceName, String datasetName, String code, long pMeshFeature);
	/**
	 * 缓存模型库模型
	 * @param  
	 */
	public static boolean writeTemplEntity(String datasourceName, String datasetName, String code, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String codeParamValue = code;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean returnValue = writeTemplEntity_EVString_EVString_EVString_IFeature(datasourceNameParamValue, datasetNameParamValue, codeParamValue, pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean deleteDatasetModel_EVString_EVString_EVString_ev_uint32(String datasourceName, String datasetName, String octCode, long id);
	/**
	 * 删除实体数据集模型
	 * @param  
	 */
	public static boolean deleteDatasetModel(String datasourceName, String datasetName, String octCode, long id)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long idParamValue = id;
		boolean returnValue = deleteDatasetModel_EVString_EVString_EVString_ev_uint32(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, idParamValue);
		return returnValue;
	}
	native private static boolean deleteTemplDBModel_EVString_EVString_EVString_ev_uint32(String datasourceName, String datasetName, String octCode, long id);
	/**
	 * 删除实体模型库数据集模型
	 * @param  
	 */
	public static boolean deleteTemplDBModel(String datasourceName, String datasetName, String octCode, long id)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long idParamValue = id;
		boolean returnValue = deleteTemplDBModel_EVString_EVString_EVString_ev_uint32(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, idParamValue);
		return returnValue;
	}
	native private static boolean deleteTemplEntity_EVString_EVString_ev_uint32(String datasourceName, String datasetName, long id);
	/**
	 * 删除模型库模型
	 * @param  
	 */
	public static boolean deleteTemplEntity(String datasourceName, String datasetName, long id)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long idParamValue = id;
		boolean returnValue = deleteTemplEntity_EVString_EVString_ev_uint32(datasourceNameParamValue, datasetNameParamValue, idParamValue);
		return returnValue;
	}
	native private static boolean updateDatasetEntityInfo_EVString_EVString_EVString_IFeature(String datasourceName, String datasetName, String octCode, long pMeshFeature);
	/**
	 * 更新实体数据集场景信息
	 * @param  
	 */
	public static boolean updateDatasetEntityInfo(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean returnValue = updateDatasetEntityInfo_EVString_EVString_EVString_IFeature(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean updateTemplDatasetEntityInfo_EVString_EVString_EVString_IFeature(String datasourceName, String datasetName, String octCode, long pMeshFeature);
	/**
	 * 更新模板数据集场景信息
	 * @param  
	 */
	public static boolean updateTemplDatasetEntityInfo(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean returnValue = updateTemplDatasetEntityInfo_EVString_EVString_EVString_IFeature(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean updateTemplDBInfo_EVString_EVString_IFeature(String datasourceName, String datasetName, long pMeshFeature);
	/**
	 * 更新模板库基础信息
	 * @param  
	 */
	public static boolean updateTemplDBInfo(String datasourceName, String datasetName, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean returnValue = updateTemplDBInfo_EVString_EVString_IFeature(datasourceNameParamValue, datasetNameParamValue, pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean readDatasetModel_CEntityDataset_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(long pDataset, String octCode, long id, long pMeshFeature, long thumbTextures, long origTextures, long cubeTextures, long materials, long progs, long gpus, long skeletons, long animation);
	/**
	 * 读取实体数据集模型
	 * @param  
	 */
	public static boolean readDatasetModel(com.earthview.world.spatial3d.dataset.EntityDataset pDataset, String octCode, long id, NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> pMeshFeature, com.earthview.world.spatial3d.dataset.FeatureVector thumbTextures, com.earthview.world.spatial3d.dataset.FeatureVector origTextures, com.earthview.world.spatial3d.dataset.FeatureVector cubeTextures, com.earthview.world.spatial3d.dataset.FeatureVector materials, com.earthview.world.spatial3d.dataset.FeatureVector progs, com.earthview.world.spatial3d.dataset.FeatureVector gpus, com.earthview.world.spatial3d.dataset.FeatureVector skeletons, com.earthview.world.spatial3d.dataset.FeatureVector animation)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		String octCodeParamValue = octCode;
		long idParamValue = id;
		long pMeshFeatureParamValue = pMeshFeature.nativeObject.pointer;
		long thumbTexturesParamValue = thumbTextures.nativeObject.pointer;
		long origTexturesParamValue = origTextures.nativeObject.pointer;
		long cubeTexturesParamValue = cubeTextures.nativeObject.pointer;
		long materialsParamValue = materials.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		long gpusParamValue = gpus.nativeObject.pointer;
		long skeletonsParamValue = skeletons.nativeObject.pointer;
		long animationParamValue = animation.nativeObject.pointer;
		boolean returnValue = readDatasetModel_CEntityDataset_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(pDatasetParamValue, octCodeParamValue, idParamValue, pMeshFeatureParamValue, thumbTexturesParamValue, origTexturesParamValue, cubeTexturesParamValue, materialsParamValue, progsParamValue, gpusParamValue, skeletonsParamValue, animationParamValue);
		return returnValue;
	}
	native private static boolean readTemplDBModel_CMeshTemplateDataset_EVString_EVString_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(long pDataset, String datasourceName, String datasetName, String octCode, long id, long pMeshFeature, long thumbTextures, long origTextures, long cubeTextures, long materials, long progs, long gpus, long skeletons, long animatio);
	/**
	 * 读取实体模型库数据集模型
	 * @param  
	 */
	public static boolean readTemplDBModel(com.earthview.world.spatial3d.dataset.MeshTemplateDataset pDataset, String datasourceName, String datasetName, String octCode, long id, NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> pMeshFeature, com.earthview.world.spatial3d.dataset.FeatureVector thumbTextures, com.earthview.world.spatial3d.dataset.FeatureVector origTextures, com.earthview.world.spatial3d.dataset.FeatureVector cubeTextures, com.earthview.world.spatial3d.dataset.FeatureVector materials, com.earthview.world.spatial3d.dataset.FeatureVector progs, com.earthview.world.spatial3d.dataset.FeatureVector gpus, com.earthview.world.spatial3d.dataset.FeatureVector skeletons, com.earthview.world.spatial3d.dataset.FeatureVector animatio)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long idParamValue = id;
		long pMeshFeatureParamValue = pMeshFeature.nativeObject.pointer;
		long thumbTexturesParamValue = thumbTextures.nativeObject.pointer;
		long origTexturesParamValue = origTextures.nativeObject.pointer;
		long cubeTexturesParamValue = cubeTextures.nativeObject.pointer;
		long materialsParamValue = materials.nativeObject.pointer;
		long progsParamValue = progs.nativeObject.pointer;
		long gpusParamValue = gpus.nativeObject.pointer;
		long skeletonsParamValue = skeletons.nativeObject.pointer;
		long animatioParamValue = animatio.nativeObject.pointer;
		boolean returnValue = readTemplDBModel_CMeshTemplateDataset_EVString_EVString_EVString_ev_uint32_IFeature_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector_FeatureVector(pDatasetParamValue, datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, idParamValue, pMeshFeatureParamValue, thumbTexturesParamValue, origTexturesParamValue, cubeTexturesParamValue, materialsParamValue, progsParamValue, gpusParamValue, skeletonsParamValue, animatioParamValue);
		return returnValue;
	}
	native private static long readTemplEntity_CEntityDataset_ev_uint32_EVString(long pDataset, long id, String code);
	/**
	 * 读取模型库模型
	 * @param  
	 */
	public static com.earthview.world.spatial.geodataset.Ifeature readTemplEntity(com.earthview.world.spatial3d.dataset.EntityDataset pDataset, long id, String code)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		long idParamValue = id;
		String codeParamValue = code;
		long returnValue = readTemplEntity_CEntityDataset_ev_uint32_EVString(pDatasetParamValue, idParamValue, codeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private static boolean readDatasetModelOrigTexture_EVString_EVString_EVString_FeatureVector_TextureStreamVector(String datasourceName, String datasetName, String octCode, long origFeatureVec, long imgTextures);
	/**
	 * 读取实体数据集模型的大纹理
	 * @param  
	 */
	public static boolean readDatasetModelOrigTexture(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial3d.dataset.FeatureVector origFeatureVec, com.earthview.world.spatial3d.dataset.TextureStreamVector imgTextures)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long origFeatureVecParamValue = origFeatureVec.nativeObject.pointer;
		long imgTexturesParamValue = imgTextures.nativeObject.pointer;
		boolean returnValue = readDatasetModelOrigTexture_EVString_EVString_EVString_FeatureVector_TextureStreamVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, origFeatureVecParamValue, imgTexturesParamValue);
		return returnValue;
	}
	native private static boolean readTemplDatasetOrigTexture_EVString_EVString_EVString_FeatureVector_TextureStreamVector(String datasourceName, String datasetName, String octCode, long origFeatureVec, long texStreams);
	/**
	 * 读取实体模型库数据集模型的大纹理
	 * @param  
	 */
	public static boolean readTemplDatasetOrigTexture(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial3d.dataset.FeatureVector origFeatureVec, com.earthview.world.spatial3d.dataset.TextureStreamVector texStreams)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long origFeatureVecParamValue = origFeatureVec.nativeObject.pointer;
		long texStreamsParamValue = texStreams.nativeObject.pointer;
		boolean returnValue = readTemplDatasetOrigTexture_EVString_EVString_EVString_FeatureVector_TextureStreamVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, origFeatureVecParamValue, texStreamsParamValue);
		return returnValue;
	}
	native private static long readMeshTemplID_EVString_EVString_ev_uint32(String datasourceName, String datasetName, long meshInstID);
	public static long readMeshTemplID(String datasourceName, String datasetName, long meshInstID)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long meshInstIDParamValue = meshInstID;
		long returnValue = readMeshTemplID_EVString_EVString_ev_uint32(datasourceNameParamValue, datasetNameParamValue, meshInstIDParamValue);
		return returnValue;
	}
	native private static boolean readDatasetAniDataStream_EVString_EVString_EVString_ev_uint32_MemoryDataStreamPtr(String datasourceName, String datasetName, String octCode, long meshID, long stream);
	/**
	 * 读本地模型数据集anifeature
	 * @param  
	 */
	public static boolean readDatasetAniDataStream(String datasourceName, String datasetName, String octCode, long meshID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long meshIDParamValue = meshID;
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = readDatasetAniDataStream_EVString_EVString_EVString_ev_uint32_MemoryDataStreamPtr(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, meshIDParamValue, streamParamValue);
		return returnValue;
	}
	native private static boolean readTemplAniDataStream_EVString_EVString_ev_uint32_MemoryDataStreamPtr(String datasourceName, String datasetName, long meshID, long stream);
	/**
	 * 读取模型库的anifeature
	 * @param  
	 */
	public static boolean readTemplAniDataStream(String datasourceName, String datasetName, long meshID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long meshIDParamValue = meshID;
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = readTemplAniDataStream_EVString_EVString_ev_uint32_MemoryDataStreamPtr(datasourceNameParamValue, datasetNameParamValue, meshIDParamValue, streamParamValue);
		return returnValue;
	}
	native private static boolean writeDatasetModelOrigTexture_EVString_EVString_EVString_FeatureVector(String datasourceName, String datasetName, String octCode, long origFeatureVec);
	/**
	 * 缓存实体数据集大纹理
	 * @param  
	 */
	public static boolean writeDatasetModelOrigTexture(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial3d.dataset.FeatureVector origFeatureVec)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long origFeatureVecParamValue = origFeatureVec.nativeObject.pointer;
		boolean returnValue = writeDatasetModelOrigTexture_EVString_EVString_EVString_FeatureVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, origFeatureVecParamValue);
		return returnValue;
	}
	native private static boolean writeTemplDatasetOrigTexture_EVString_EVString_EVString_FeatureVector(String datasourceName, String datasetName, String octCode, long origFeatureVec);
	/**
	 * 缓存实体模型库数据集大纹理
	 * @param  
	 */
	public static boolean writeTemplDatasetOrigTexture(String datasourceName, String datasetName, String octCode, com.earthview.world.spatial3d.dataset.FeatureVector origFeatureVec)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		String octCodeParamValue = octCode;
		long origFeatureVecParamValue = origFeatureVec.nativeObject.pointer;
		boolean returnValue = writeTemplDatasetOrigTexture_EVString_EVString_EVString_FeatureVector(datasourceNameParamValue, datasetNameParamValue, octCodeParamValue, origFeatureVecParamValue);
		return returnValue;
	}
	native private static void updateAltitudeMode_EVString_EVString_EVDatasetType_EVAltitudeMode_ev_real64(String datasourceName, String datasetName, int type, int altitudeMode, double altitudeValue);
	/**
	 * 修改缓存中的高度模式
	 * @param  
	 */
	public static void updateAltitudeMode(String datasourceName, String datasetName, com.earthview.world.spatial.geodataset.EVDatasetType type, com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeValue)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		int typeParamValue = type.getValue();
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValueParamValue = altitudeValue;
		updateAltitudeMode_EVString_EVString_EVDatasetType_EVAltitudeMode_ev_real64(datasourceNameParamValue, datasetNameParamValue, typeParamValue, altitudeModeParamValue, altitudeValueParamValue);
	}
	public ModelCacheUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelCacheUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelCacheUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelCacheUtility obj = null;
 		if(baseObj instanceof ModelCacheUtility)
		{
			obj = (ModelCacheUtility)baseObj;
		} else {
			obj = new ModelCacheUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelCacheUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
