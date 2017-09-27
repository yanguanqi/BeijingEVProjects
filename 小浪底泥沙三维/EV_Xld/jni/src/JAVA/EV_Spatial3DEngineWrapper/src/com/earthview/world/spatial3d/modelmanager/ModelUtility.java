package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelUtility", new ModelUtilityClassFactory());
	}

	public ModelUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelUtility", null);
	}

	native private static boolean readModelDataStream_IDataset_ev_uint32_ModelDataStream(long ds, long id, long modelDataStream);
	/**
	 * 读模型数据流
	 * @param ds 抽象数据集
	 * @param id 模型ID
	 * @return 返回的模型数据流，里边的feature需要外部释放
	 */
	public static boolean readModelDataStream(com.earthview.world.spatial.geodataset.Idataset ds, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		boolean returnValue = readModelDataStream_IDataset_ev_uint32_ModelDataStream(dsParamValue, idParamValue, modelDataStreamParamValue);
		return returnValue;
	}
	native private static boolean readModelDataStream_db_CEntityDataset_ev_uint32_ModelDataStream(long ds, long id, long modelDataStream);
	/**
	 * 读模型数据流
	 * @param ds 图层数据集
	 * @param id 模型ID
	 * @return 返回的模型数据流，里边的feature需要外部释放
	 */
	public static boolean readModelDataStream_db(com.earthview.world.spatial3d.dataset.EntityDataset ds, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		boolean returnValue = readModelDataStream_db_CEntityDataset_ev_uint32_ModelDataStream(dsParamValue, idParamValue, modelDataStreamParamValue);
		return returnValue;
	}
	native private static boolean readModelDataStream_db_CMeshTemplateDataset_ev_uint32_ModelDataStream(long ds, long id, long modelDataStream);
	/**
	 * 读模型数据流
	 * @param ds 模板库数据集
	 * @param id 模型ID
	 * @return 返回的模型数据流，里边的feature需要外部释放
	 */
	public static boolean readModelDataStream_db(com.earthview.world.spatial3d.dataset.MeshTemplateDataset ds, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		boolean returnValue = readModelDataStream_db_CMeshTemplateDataset_ev_uint32_ModelDataStream(dsParamValue, idParamValue, modelDataStreamParamValue);
		return returnValue;
	}
	native private static boolean readModelDataStream_web_CWebEntityDataset_ev_uint32_ModelDataStream(long ds, long id, long modelDataStream);
	/**
	 * 读模型数据流
	 * @param ds 图层数据集
	 * @param id 模型ID
	 * @return 返回的模型数据流，里边的feature需要外部释放
	 */
	public static boolean readModelDataStream_web(com.earthview.world.spatial3d.dataset.WebEntityDataset ds, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		boolean returnValue = readModelDataStream_web_CWebEntityDataset_ev_uint32_ModelDataStream(dsParamValue, idParamValue, modelDataStreamParamValue);
		return returnValue;
	}
	native private static boolean readModelDataStream_web_CWebMeshTemplateDataset_ev_uint32_ModelDataStream(long ds, long id, long modelDataStream);
	/**
	 * 读模型数据流
	 * @param ds 模板库数据集
	 * @param id 模型ID
	 * @return 返回的模型数据流，里边的feature需要外部释放
	 */
	public static boolean readModelDataStream_web(com.earthview.world.spatial3d.dataset.WebMeshTemplateDataset ds, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		boolean returnValue = readModelDataStream_web_CWebMeshTemplateDataset_ev_uint32_ModelDataStream(dsParamValue, idParamValue, modelDataStreamParamValue);
		return returnValue;
	}
	native private static long readAniDataStream_IDataset_ev_uint32(long ds, long meshID);
	/**
	 * 读模型ANI流
	 * @param ds 抽象数据集
	 * @param meshID 模型mesh的ID
	 * @return 返回ani数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr readAniDataStream(com.earthview.world.spatial.geodataset.Idataset ds, long meshID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = readAniDataStream_IDataset_ev_uint32(dsParamValue, meshIDParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long readAniDataStream_EVString(String aniFile);
	/**
	 * 读模型ANI流
	 * @param aniFile ani文件
	 * @return 返回ani数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr readAniDataStream(String aniFile)
	{
		String aniFileParamValue = aniFile;
		long returnValue = readAniDataStream_EVString(aniFileParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long readAniDataStream_db_CEntityDataset_ev_uint32(long ds, long meshID);
	/**
	 * 读模型ANI流
	 * @param ds 图层数据集
	 * @param meshID 模型mesh的ID
	 * @return 返回ani数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr readAniDataStream_db(com.earthview.world.spatial3d.dataset.EntityDataset ds, long meshID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = readAniDataStream_db_CEntityDataset_ev_uint32(dsParamValue, meshIDParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long readAniDataStream_web_CWebEntityDataset_ev_uint32(long ds, long meshID);
	/**
	 * 读网络模型ANI流
	 * @param ds 图层数据集
	 * @param meshID 模型mesh的ID
	 * @return 返回ani数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr readAniDataStream_web(com.earthview.world.spatial3d.dataset.WebEntityDataset ds, long meshID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = readAniDataStream_web_CWebEntityDataset_ev_uint32(dsParamValue, meshIDParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long readAniDataStream_db_CMeshTemplateDataset_ev_uint32(long ds, long meshID);
	/**
	 * 读模型ANI流
	 * @param ds 模板库数据集
	 * @param meshID 模型mesh的ID
	 * @return 返回ani数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr readAniDataStream_db(com.earthview.world.spatial3d.dataset.MeshTemplateDataset ds, long meshID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = readAniDataStream_db_CMeshTemplateDataset_ev_uint32(dsParamValue, meshIDParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long readMeshFeature_CEntityDataset_ev_uint32(long ds, long id);
	/**
	 * 读取图层meshFeature
	 * @param ds 图层数据集
	 * @param meshID 模型的ID
	 * @return 返回feature，NULL失败
	 */
	public static com.earthview.world.spatial.geodataset.Ifeature readMeshFeature(com.earthview.world.spatial3d.dataset.EntityDataset ds, long id)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long idParamValue = id;
		long returnValue = readMeshFeature_CEntityDataset_ev_uint32(dsParamValue, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private static long getMeshTmplID_CMeshTemplateDataset_ev_uint32(long ds, long instID);
	/**
	 * 读取instance图层模型在模型库中模板ID
	 * @param ds 图层数据集
	 * @param instID 模型在模型库的mesh的instID
	 * @return 返回feature，NULL失败
	 */
	public static long getMeshTmplID(com.earthview.world.spatial3d.dataset.MeshTemplateDataset ds, long instID)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		long instIDParamValue = instID;
		long returnValue = getMeshTmplID_CMeshTemplateDataset_ev_uint32(dsParamValue, instIDParamValue);
		return returnValue;
	}
	native private static boolean loadModelResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(long pSceneManager, long id, long modelDataStream, String groupname, boolean bLoadOrigTexture, boolean bLoadFromLayer, long modelResource);
	/**
	 * 加载模型资源对象
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param modelDataStream 模型数据流
	 * @param groupname 模型资源组名
	 * @param bOnlyReadOrigTexture true加载原始纹理，false加载小纹理（false一般图层使用）
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean loadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream, String groupname, boolean bLoadOrigTexture, boolean bLoadFromLayer, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadOrigTextureParamValue = bLoadOrigTexture;
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = loadModelResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(pSceneManagerParamValue, idParamValue, modelDataStreamParamValue, groupnameParamValue, bLoadOrigTextureParamValue, bLoadFromLayerParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean loadModelResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(long pSceneManager, long id, long modelDataStream, String groupname, boolean bLoadOrigTexture, long pMaterialCache, boolean bLoadFromLayer, long modelResource);
	/**
	 * 加载模型资源对象（图层使用）
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param modelDataStream 模型数据流
	 * @param groupname 模型资源组名
	 * @param bOnlyReadOrigTexture true加载原始纹理，false加载小纹理（false一般图层使用）
	 * @param pMaterialCache 内存缓存
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean loadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream, String groupname, boolean bLoadOrigTexture, com.earthview.world.spatial3d.modelmanager.MaterialResourceCache pMaterialCache, boolean bLoadFromLayer, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadOrigTextureParamValue = bLoadOrigTexture;
		long pMaterialCacheParamValue = (pMaterialCache == null ? 0L : pMaterialCache.nativeObject.pointer);
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = loadModelResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(pSceneManagerParamValue, idParamValue, modelDataStreamParamValue, groupnameParamValue, bLoadOrigTextureParamValue, pMaterialCacheParamValue, bLoadFromLayerParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean loadInstanceResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(long pSceneManager, long id, long modelDataStream, String groupname, boolean bLoadOrigTexture, boolean bLoadFromLayer, long modelResource);
	/**
	 * 加载instanced模型资源对象
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param modelDataStream 模型数据流
	 * @param groupname 模型资源组名
	 * @param bOnlyReadOrigTexture true加载原始纹理，false加载小纹理（false一般图层使用）
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean loadInstanceResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream, String groupname, boolean bLoadOrigTexture, boolean bLoadFromLayer, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadOrigTextureParamValue = bLoadOrigTexture;
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = loadInstanceResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_ev_bool_ModelResource(pSceneManagerParamValue, idParamValue, modelDataStreamParamValue, groupnameParamValue, bLoadOrigTextureParamValue, bLoadFromLayerParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean loadInstanceResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(long pSceneManager, long id, long modelDataStream, String groupname, boolean bLoadOrigTexture, long pMaterialCache, boolean bLoadFromLayer, long modelResource);
	/**
	 * 加载instanced模型资源对象（图层使用）
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param modelDataStream 模型数据流
	 * @param groupname 模型资源组名
	 * @param bOnlyReadOrigTexture true加载原始纹理，false加载小纹理（false一般图层使用）
	 * @param pMaterialCache 内存缓存
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean loadInstanceResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, com.earthview.world.spatial3d.ModelDataStream modelDataStream, String groupname, boolean bLoadOrigTexture, com.earthview.world.spatial3d.modelmanager.MaterialResourceCache pMaterialCache, boolean bLoadFromLayer, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		long modelDataStreamParamValue = modelDataStream.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadOrigTextureParamValue = bLoadOrigTexture;
		long pMaterialCacheParamValue = (pMaterialCache == null ? 0L : pMaterialCache.nativeObject.pointer);
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = loadInstanceResource_CSceneManager_ev_uint32_ModelDataStream_EVString_ev_bool_CMaterialResourceCache_ev_bool_ModelResource(pSceneManagerParamValue, idParamValue, modelDataStreamParamValue, groupnameParamValue, bLoadOrigTextureParamValue, pMaterialCacheParamValue, bLoadFromLayerParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean loadModelResource_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(long pSceneManager, String modelfile, boolean bFileDirAsGroup, long modelResource, long modelAniDataStream);
	/**
	 * 加载模型资源对象（文件）
	 * @param pSceneManager 场景管理器
	 * @param modelfile 模型文件
	 * @param bFileDirAsGroup true,根据文件所在目录创建工作组。false，使用默认的General工作组
	 * @param modelResource 模型资源
	 * @param modelAniDataStream 模型ANI流
	 * @return 返回true成功，false失败
	 */
	public static boolean loadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, String modelfile, boolean bFileDirAsGroup, com.earthview.world.spatial3d.ModelResource modelResource, com.earthview.world.core.MemoryDataStreamPtr modelAniDataStream)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String modelfileParamValue = modelfile;
		boolean bFileDirAsGroupParamValue = bFileDirAsGroup;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		long modelAniDataStreamParamValue = modelAniDataStream.nativeObject.pointer;
		boolean returnValue = loadModelResource_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(pSceneManagerParamValue, modelfileParamValue, bFileDirAsGroupParamValue, modelResourceParamValue, modelAniDataStreamParamValue);
		return returnValue;
	}
	native private static boolean loadInstanceResource_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(long pSceneManager, String modelfile, boolean bFileDirAsGroup, long modelResource, long modelAniDataStream);
	/**
	 * 加载模型资源对象（文件）
	 * @param pSceneManager 场景管理器
	 * @param modelfile 模型文件
	 * @param bFileDirAsGroup true,根据文件所在目录创建工作组。false，使用默认的General工作组
	 * @param modelResource 模型资源
	 * @param modelAniDataStream 模型ANI流
	 * @return 返回true成功，false失败
	 */
	public static boolean loadInstanceResource(com.earthview.world.graphic.SceneManager pSceneManager, String modelfile, boolean bFileDirAsGroup, com.earthview.world.spatial3d.ModelResource modelResource, com.earthview.world.core.MemoryDataStreamPtr modelAniDataStream)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String modelfileParamValue = modelfile;
		boolean bFileDirAsGroupParamValue = bFileDirAsGroup;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		long modelAniDataStreamParamValue = modelAniDataStream.nativeObject.pointer;
		boolean returnValue = loadInstanceResource_CSceneManager_EVString_ev_bool_ModelResource_MemoryDataStreamPtr(pSceneManagerParamValue, modelfileParamValue, bFileDirAsGroupParamValue, modelResourceParamValue, modelAniDataStreamParamValue);
		return returnValue;
	}
	native private static boolean unloadModelResource_CSceneManager_ev_uint32_EVString_ModelResource(long pSceneManager, long id, String groupname, long modelResource);
	/**
	 * 卸载模型资源对象
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param groupname 模型资源组名
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean unloadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, String groupname, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		String groupnameParamValue = groupname;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = unloadModelResource_CSceneManager_ev_uint32_EVString_ModelResource(pSceneManagerParamValue, idParamValue, groupnameParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean unloadModelResource_CSceneManager_EVString_ev_bool_ModelResource(long pSceneManager, String modelfile, boolean bFileDirAsGroup, long modelResource);
	/**
	 * 卸载模型资源对象（文件）
	 * @param pSceneManager 场景管理器
	 * @param groupname 模型资源组名
	 * @param modelResource 模型资源
	 * @return 返回true成功，false失败
	 */
	public static boolean unloadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, String modelfile, boolean bFileDirAsGroup, com.earthview.world.spatial3d.ModelResource modelResource)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String modelfileParamValue = modelfile;
		boolean bFileDirAsGroupParamValue = bFileDirAsGroup;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		boolean returnValue = unloadModelResource_CSceneManager_EVString_ev_bool_ModelResource(pSceneManagerParamValue, modelfileParamValue, bFileDirAsGroupParamValue, modelResourceParamValue);
		return returnValue;
	}
	native private static boolean unloadModelResource_CSceneManager_ev_uint32_EVString_ModelResource_CMaterialResourceCache(long pSceneManager, long id, String groupname, long modelResource, long pMaterialCache);
	/**
	 * 加载模型资源对象（图层使用）
	 * @param pSceneManager 场景管理器
	 * @param id 模型id
	 * @param groupname 模型资源组名
	 * @param modelResource 模型mesh的ID
	 * @param pMaterialCache 内存缓存
	 * @return 返回true成功，false失败
	 */
	public static boolean unloadModelResource(com.earthview.world.graphic.SceneManager pSceneManager, long id, String groupname, com.earthview.world.spatial3d.ModelResource modelResource, com.earthview.world.spatial3d.modelmanager.MaterialResourceCache pMaterialCache)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long idParamValue = id;
		String groupnameParamValue = groupname;
		long modelResourceParamValue = modelResource.nativeObject.pointer;
		long pMaterialCacheParamValue = (pMaterialCache == null ? 0L : pMaterialCache.nativeObject.pointer);
		boolean returnValue = unloadModelResource_CSceneManager_ev_uint32_EVString_ModelResource_CMaterialResourceCache(pSceneManagerParamValue, idParamValue, groupnameParamValue, modelResourceParamValue, pMaterialCacheParamValue);
		return returnValue;
	}
	native private static long createEntity_CSceneManager_EVString_EVString_EVString(long pSceneManager, String entName, String meshFilename, String groupName);
	/**
	 * 加载模型资源对象
	 * @param pSceneManager 场景管理器
	 * @param entName 实体名
	 * @param meshFilename 模型文件名
	 * @param groupName 模型资源组名
	 * @return 返回实体指针，NULL失败
	 */
	public static com.earthview.world.graphic.Entity createEntity(com.earthview.world.graphic.SceneManager pSceneManager, String entName, String meshFilename, String groupName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String entNameParamValue = entName;
		String meshFilenameParamValue = meshFilename;
		String groupNameParamValue = groupName;
		long returnValue = createEntity_CSceneManager_EVString_EVString_EVString(pSceneManagerParamValue, entNameParamValue, meshFilenameParamValue, groupNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private static long createEntity_CSceneManager_EVString_EVString_EVString_IntVector(long pSceneManager, String entName, String meshFilename, String groupName, long subEntityIndexs);
	/**
	 * 加载模型资源对象
	 * @param pSceneManager 场景管理器
	 * @param entName 实体名
	 * @param meshFilename 模型文件名
	 * @param groupName 模型资源组名
	 * @param subEntityIndexs 实体部分组件索引集
	 * @return 返回实体指针，NULL失败
	 */
	public static com.earthview.world.graphic.Entity createEntity(com.earthview.world.graphic.SceneManager pSceneManager, String entName, String meshFilename, String groupName, com.earthview.world.core.IntVector subEntityIndexs)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String entNameParamValue = entName;
		String meshFilenameParamValue = meshFilename;
		String groupNameParamValue = groupName;
		long subEntityIndexsParamValue = subEntityIndexs.nativeObject.pointer;
		long returnValue = createEntity_CSceneManager_EVString_EVString_EVString_IntVector(pSceneManagerParamValue, entNameParamValue, meshFilenameParamValue, groupNameParamValue, subEntityIndexsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private static boolean destroyEntity_CSceneManager_CEntity(long pSceneManager, long pEntity);
	/**
	 * 销毁实体对象
	 * @param pSceneManager 场景管理器
	 * @param pEntity 实体指针
	 * @return 返回true成功，false失败
	 */
	public static boolean destroyEntity(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.graphic.Entity pEntity)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pEntityParamValue = (pEntity == null ? 0L : pEntity.nativeObject.pointer);
		boolean returnValue = destroyEntity_CSceneManager_CEntity(pSceneManagerParamValue, pEntityParamValue);
		return returnValue;
	}
	native private static boolean createInstanceManager_CSceneManager_EVString_CMeshPtr_ev_uint32_EVString_ev_bool_ev_bool_InstanceManagerVector(long pSceneManager, String customName, long meshPtr, long numInstancesPerBatch, String groupname, boolean aysncUpdateBuffer, boolean strategyForCustomer, long instMngerVec);
	/**
	 * 创建instanceManager
	 * @param pSceneManager 场景管理器
	 * @param customName instanceManager名称
	 * @param meshPtr mesh指针
	 * @param numInstancesPerBatch 每批次渲染个数
	 * @param groupname 模型资源组名
	 * @param aysncUpdateBuffer 异步刷新方式创建
	 * @param strategyForCustomer 用户工厂创建方式/图层创建方式，计算numinstanceperbatch
	 * @param instMngerVec 传出创建好的instanceManager容器
	 * @return 返回true成功，false失败
	 */
	public static boolean createInstanceManager(com.earthview.world.graphic.SceneManager pSceneManager, String customName, com.earthview.world.graphic.MeshPtr meshPtr, long numInstancesPerBatch, String groupname, boolean aysncUpdateBuffer, boolean strategyForCustomer, com.earthview.world.spatial3d.InstanceManagerVector instMngerVec)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String customNameParamValue = customName;
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		long numInstancesPerBatchParamValue = numInstancesPerBatch;
		String groupnameParamValue = groupname;
		boolean aysncUpdateBufferParamValue = aysncUpdateBuffer;
		boolean strategyForCustomerParamValue = strategyForCustomer;
		long instMngerVecParamValue = instMngerVec.nativeObject.pointer;
		boolean returnValue = createInstanceManager_CSceneManager_EVString_CMeshPtr_ev_uint32_EVString_ev_bool_ev_bool_InstanceManagerVector(pSceneManagerParamValue, customNameParamValue, meshPtrParamValue, numInstancesPerBatchParamValue, groupnameParamValue, aysncUpdateBufferParamValue, strategyForCustomerParamValue, instMngerVecParamValue);
		return returnValue;
	}
	native private static boolean destroyInstanceManager_InstanceManagerVector(long instMngerVec);
	/**
	 * 销毁instanceManager
	 * @param instMngerVec instanceManager容器
	 * @return 返回true成功，false失败
	 */
	public static boolean destroyInstanceManager(com.earthview.world.spatial3d.InstanceManagerVector instMngerVec)
	{
		long instMngerVecParamValue = instMngerVec.nativeObject.pointer;
		boolean returnValue = destroyInstanceManager_InstanceManagerVector(instMngerVecParamValue);
		return returnValue;
	}
	native private static boolean createInstanceEntity_CMeshPtr_InstanceManagerVector_InstancedEntityVector(long meshPtr, long instMngerVec, long instEntVec);
	/**
	 * 创建instanceEntity
	 * @param meshPtr mesh指针
	 * @param instMngerVec instanceManager容器
	 * @param instEntVec instanceEntity容器
	 * @return 返回true成功，false失败
	 */
	public static boolean createInstanceEntity(com.earthview.world.graphic.MeshPtr meshPtr, com.earthview.world.spatial3d.InstanceManagerVector instMngerVec, com.earthview.world.spatial3d.InstancedEntityVector instEntVec)
	{
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		long instMngerVecParamValue = instMngerVec.nativeObject.pointer;
		long instEntVecParamValue = instEntVec.nativeObject.pointer;
		boolean returnValue = createInstanceEntity_CMeshPtr_InstanceManagerVector_InstancedEntityVector(meshPtrParamValue, instMngerVecParamValue, instEntVecParamValue);
		return returnValue;
	}
	native private static boolean createInstanceEntity_CMeshPtr_InstanceManagerVector_IntVector_InstancedEntityVector(long meshPtr, long instMngerVec, long subEntityIndexs, long instEntVec);
	/**
	 * 创建instanceEntity
	 * @param meshPtr mesh指针
	 * @param instMngerVec instanceManager容器
	 * @param subEntityIndexs instanceManager容器
	 * @param instEntVec instanceEntity容器
	 * @return 返回true成功，false失败
	 */
	public static boolean createInstanceEntity(com.earthview.world.graphic.MeshPtr meshPtr, com.earthview.world.spatial3d.InstanceManagerVector instMngerVec, com.earthview.world.core.IntVector subEntityIndexs, com.earthview.world.spatial3d.InstancedEntityVector instEntVec)
	{
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		long instMngerVecParamValue = instMngerVec.nativeObject.pointer;
		long subEntityIndexsParamValue = subEntityIndexs.nativeObject.pointer;
		long instEntVecParamValue = instEntVec.nativeObject.pointer;
		boolean returnValue = createInstanceEntity_CMeshPtr_InstanceManagerVector_IntVector_InstancedEntityVector(meshPtrParamValue, instMngerVecParamValue, subEntityIndexsParamValue, instEntVecParamValue);
		return returnValue;
	}
	native private static boolean destroyInstanceEntity_CSceneManager_InstancedEntityVector(long pSceneManager, long instEntVec);
	/**
	 * 销毁instanceEntity
	 * @param pSceneManager 场景管理器
	 * @param instEntVec instanceEntity容器
	 * @return 返回true成功，false失败
	 */
	public static boolean destroyInstanceEntity(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.InstancedEntityVector instEntVec)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long instEntVecParamValue = instEntVec.nativeObject.pointer;
		boolean returnValue = destroyInstanceEntity_CSceneManager_InstancedEntityVector(pSceneManagerParamValue, instEntVecParamValue);
		return returnValue;
	}
	native private static boolean destroySceneNode_CSceneManager_CSceneNode(long pSceneManager, long n);
	/**
	 * 销毁节点对象
	 * @param pSceneManager 场景管理器
	 * @param n 场景节点对象
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static boolean destroySceneNode(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.graphic.SceneNode n)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		boolean returnValue = destroySceneNode_CSceneManager_CSceneNode(pSceneManagerParamValue, nParamValue);
		return returnValue;
	}
	native private static boolean switchThumbTexture_FeatureVector_EVString_ev_bool_TexturePtrVector(long thumbTextures, String groupname, boolean bLoadFromLayer, long thumbTexturePtrVector);
	/**
	 * 加载小纹理影像对象(图层使用)
	 * @param thumbTextures 小纹理feature集
	 * @param imgItems 小纹理的影像流容器
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static boolean switchThumbTexture(com.earthview.world.spatial3d.dataset.FeatureVector thumbTextures, String groupname, boolean bLoadFromLayer, com.earthview.world.spatial3d.TexturePtrVector thumbTexturePtrVector)
	{
		long thumbTexturesParamValue = thumbTextures.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long thumbTexturePtrVectorParamValue = thumbTexturePtrVector.nativeObject.pointer;
		boolean returnValue = switchThumbTexture_FeatureVector_EVString_ev_bool_TexturePtrVector(thumbTexturesParamValue, groupnameParamValue, bLoadFromLayerParamValue, thumbTexturePtrVectorParamValue);
		return returnValue;
	}
	native private static boolean attachThumbTexture_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(long materialObjs, long textureObjs, long thumbTexturePtrVector, String groupname);
	/**
	 * 加载小纹理对象(图层使用)
	 * @param thumbTextures 小纹理feature集
	 * @param groupname 组名
	 * @param imgItems 小纹理的影像流容器
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static boolean attachThumbTexture(com.earthview.world.spatial3d.MaterialPtrVector materialObjs, com.earthview.world.spatial3d.TexturePtrVector textureObjs, com.earthview.world.spatial3d.TexturePtrVector thumbTexturePtrVector, String groupname)
	{
		long materialObjsParamValue = materialObjs.nativeObject.pointer;
		long textureObjsParamValue = textureObjs.nativeObject.pointer;
		long thumbTexturePtrVectorParamValue = thumbTexturePtrVector.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean returnValue = attachThumbTexture_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(materialObjsParamValue, textureObjsParamValue, thumbTexturePtrVectorParamValue, groupnameParamValue);
		return returnValue;
	}
	native private static boolean switchOrigTexture_IDataset_ModelType_ev_uint32_FeatureVector_EVString_ev_bool_TexturePtrVector(long ds, int type, long meshID, long origTextures, String groupname, boolean bLoadFromLayer, long origTexturePtrVector);
	/**
	 * 加载大纹理影像对象(图层使用)
	 * @param ds 图层数据集
	 * @param type 模型资源类别
	 * @param meshID meshID
	 * @param origTextures 大纹理数据流
	 * @param imgItems 大纹理的影像流容器
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static boolean switchOrigTexture(com.earthview.world.spatial.geodataset.Idataset ds, com.earthview.world.spatial3d.ModelType type, long meshID, com.earthview.world.spatial3d.dataset.FeatureVector origTextures, String groupname, boolean bLoadFromLayer, com.earthview.world.spatial3d.TexturePtrVector origTexturePtrVector)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		int typeParamValue = type.getValue();
		long meshIDParamValue = meshID;
		long origTexturesParamValue = origTextures.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean bLoadFromLayerParamValue = bLoadFromLayer;
		long origTexturePtrVectorParamValue = origTexturePtrVector.nativeObject.pointer;
		boolean returnValue = switchOrigTexture_IDataset_ModelType_ev_uint32_FeatureVector_EVString_ev_bool_TexturePtrVector(dsParamValue, typeParamValue, meshIDParamValue, origTexturesParamValue, groupnameParamValue, bLoadFromLayerParamValue, origTexturePtrVectorParamValue);
		return returnValue;
	}
	native private static boolean attachOrigTexture_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(long materialObjs, long textureObjs, long origTexturePtrVector, String groupname);
	/**
	 * 加载大纹理对象(图层使用)
	 * @param origTextures 大纹理数据流
	 * @param thumbTextures 小纹理数据流
	 * @param groupname 模型资源组名
	 * @param imgItems 大纹理的影像流容器
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public static boolean attachOrigTexture(com.earthview.world.spatial3d.MaterialPtrVector materialObjs, com.earthview.world.spatial3d.TexturePtrVector textureObjs, com.earthview.world.spatial3d.TexturePtrVector origTexturePtrVector, String groupname)
	{
		long materialObjsParamValue = materialObjs.nativeObject.pointer;
		long textureObjsParamValue = textureObjs.nativeObject.pointer;
		long origTexturePtrVectorParamValue = origTexturePtrVector.nativeObject.pointer;
		String groupnameParamValue = groupname;
		boolean returnValue = attachOrigTexture_MaterialPtrVector_TexturePtrVector_TexturePtrVector_EVString(materialObjsParamValue, textureObjsParamValue, origTexturePtrVectorParamValue, groupnameParamValue);
		return returnValue;
	}
	public ModelUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelUtility obj = null;
 		if(baseObj instanceof ModelUtility)
		{
			obj = (ModelUtility)baseObj;
		} else {
			obj = new ModelUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
