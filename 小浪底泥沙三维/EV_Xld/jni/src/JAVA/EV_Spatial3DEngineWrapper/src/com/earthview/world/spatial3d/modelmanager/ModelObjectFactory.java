package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///class CModelBaseObject;
///class CManualInstanceObject;
///class CManualModelObject;
public class ModelObjectFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelObjectFactory", new ModelObjectFactoryClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回单例的数据源工厂句柄
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ModelObjectFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelObjectFactory __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate, "CModelObjectFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelObjectFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelObjectFactory");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 释放单例的数据源工厂句柄
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private static void setGroupName_EVString(String group);
	/**
	 * 修改默认资源组，让用户有机会去指定自己想要的资源组默认情况下资源组是数据源的名称，如果需要修改默认资源组名称，那么工厂在创建的时候会帮助你去创建资源组对象和销毁资源组对象如果修改了默认资源组，之后想恢复默认行为，再设置一次资源组名称为空即可,修改资源组在load以前有效ps:此接口对文件版无效，不要指定系统默认的资源组
	 * @param group 资源组名称
	 */
	public static void setGroupName(String group)
	{
		String groupParamValue = group;
		setGroupName_EVString(groupParamValue);
	}
	native private static String getGroupName_void();
	public static String getGroupName()
	{
		String returnValue = getGroupName_void();
		return returnValue;
	}
	native private static long createModelObject_CSceneManager_EVString_EVString(long pSceneManager, String datasourceName, String meshName);
	/**
	 * 创建模型库中的一个模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshName 模型名称
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualModelObject createModelObject(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String meshNameParamValue = meshName;
		long returnValue = createModelObject_CSceneManager_EVString_EVString(pSceneManagerParamValue, datasourceNameParamValue, meshNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualModelObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualModelObject");
		}
		return __returnValue;
	}
	native private static long createModelObject_CSceneManager_EVString_ev_uint32(long pSceneManager, String datasourceName, long meshID);
	/**
	 * 创建模型库中的一个模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshID 模型id
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualModelObject createModelObject(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		long meshIDParamValue = meshID;
		long returnValue = createModelObject_CSceneManager_EVString_ev_uint32(pSceneManagerParamValue, datasourceNameParamValue, meshIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualModelObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualModelObject");
		}
		return __returnValue;
	}
	native private static long createModelObject_CSceneManager_CModelDataSource_EVString(long pSceneManager, long pModelDataSource, String meshName);
	/**
	 * 创建模型库中的一个模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源对象
	 * @param meshName 模型名称
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualModelObject createModelObject(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		String meshNameParamValue = meshName;
		long returnValue = createModelObject_CSceneManager_CModelDataSource_EVString(pSceneManagerParamValue, pModelDataSourceParamValue, meshNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualModelObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualModelObject");
		}
		return __returnValue;
	}
	native private static long createModelObject_CSceneManager_CModelDataSource_ev_uint32(long pSceneManager, long pModelDataSource, long meshID);
	/**
	 * 创建模型库中的一个模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源对象
	 * @param meshID 模型id
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualModelObject createModelObject(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = createModelObject_CSceneManager_CModelDataSource_ev_uint32(pSceneManagerParamValue, pModelDataSourceParamValue, meshIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualModelObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualModelObject");
		}
		return __returnValue;
	}
	native private static long createModelObject_CSceneManager_EVString_ev_bool(long pSceneManager, String modelfile, boolean bFileDirAsGroup);
	/**
	 * 创建一个本地模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param modelfile 模型文件（绝对路径）
	 * @param bFileDirAsGroup true,根据文件所在目录创建工作组。false，使用默认的General工作组
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualModelObject createModelObject(com.earthview.world.graphic.SceneManager pSceneManager, String modelfile, boolean bFileDirAsGroup)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String modelfileParamValue = modelfile;
		boolean bFileDirAsGroupParamValue = bFileDirAsGroup;
		long returnValue = createModelObject_CSceneManager_EVString_ev_bool(pSceneManagerParamValue, modelfileParamValue, bFileDirAsGroupParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualModelObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualModelObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualModelObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualModelObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualModelObject");
		}
		return __returnValue;
	}
	native private static long createInstanceObject_CSceneManager_EVString_EVString(long pSceneManager, String datasourceName, String meshName);
	/**
	 * 创建模型库中的一个instance模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshName 模型名称
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualInstanceObject createInstanceObject(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String meshNameParamValue = meshName;
		long returnValue = createInstanceObject_CSceneManager_EVString_EVString(pSceneManagerParamValue, datasourceNameParamValue, meshNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualInstanceObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualInstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualInstanceObject");
		}
		return __returnValue;
	}
	native private static long createInstanceObject_CSceneManager_EVString_ev_uint32(long pSceneManager, String datasourceName, long meshID);
	/**
	 * 创建模型库中的一个instance模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshID 模型id
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualInstanceObject createInstanceObject(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		long meshIDParamValue = meshID;
		long returnValue = createInstanceObject_CSceneManager_EVString_ev_uint32(pSceneManagerParamValue, datasourceNameParamValue, meshIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualInstanceObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualInstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualInstanceObject");
		}
		return __returnValue;
	}
	native private static long createInstanceObject_CSceneManager_CModelDataSource_EVString(long pSceneManager, long pModelDataSource, String meshName);
	/**
	 * 创建模型库中的一个instance模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源对象
	 * @param meshName 模型名称
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualInstanceObject createInstanceObject(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		String meshNameParamValue = meshName;
		long returnValue = createInstanceObject_CSceneManager_CModelDataSource_EVString(pSceneManagerParamValue, pModelDataSourceParamValue, meshNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualInstanceObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualInstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualInstanceObject");
		}
		return __returnValue;
	}
	native private static long createInstanceObject_CSceneManager_CModelDataSource_ev_uint32(long pSceneManager, long pModelDataSource, long meshID);
	/**
	 * 创建模型库中的一个instance模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源对象
	 * @param meshID 模型id
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualInstanceObject createInstanceObject(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		long meshIDParamValue = meshID;
		long returnValue = createInstanceObject_CSceneManager_CModelDataSource_ev_uint32(pSceneManagerParamValue, pModelDataSourceParamValue, meshIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualInstanceObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualInstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualInstanceObject");
		}
		return __returnValue;
	}
	native private static long createInstanceObject_CSceneManager_EVString_ev_bool(long pSceneManager, String modelfile, boolean bFileDirAsGroup);
	/**
	 * 创建一个本地instance模型对象
	 * @param pSceneManager 场景管理器对象
	 * @param meshfile 模型文件（绝对路径）
	 * @param bFileDirAsGroup true,根据文件所在目录创建工作组。false，使用默认的General工作组
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ManualInstanceObject createInstanceObject(com.earthview.world.graphic.SceneManager pSceneManager, String modelfile, boolean bFileDirAsGroup)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String modelfileParamValue = modelfile;
		boolean bFileDirAsGroupParamValue = bFileDirAsGroup;
		long returnValue = createInstanceObject_CSceneManager_EVString_ev_bool(pSceneManagerParamValue, modelfileParamValue, bFileDirAsGroupParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ManualInstanceObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ManualInstanceObject(CreatedWhenConstruct.CWC_NotToCreate, "CManualInstanceObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ManualInstanceObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CManualInstanceObject");
		}
		return __returnValue;
	}
	native private static long createSubEntityObject_CModelBaseObject_IntVector(long pModelObject, long subEntityIndexs);
	/**
	 * 根据传入的EarthView::World::Spatial3D::ModelManager::CModelBaseObject创建一个只显示相应子部件的对象传入的模型对象是什么类型，创建出的就是什么类型
	 * @param pModelObject 模型对象
	 * @param subEntityIndexs subentity索引
	 * @return 失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.ModelBaseObject createSubEntityObject(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModelObject, com.earthview.world.core.IntVector subEntityIndexs)
	{
		long pModelObjectParamValue = (pModelObject == null ? 0L : pModelObject.nativeObject.pointer);
		long subEntityIndexsParamValue = subEntityIndexs.nativeObject.pointer;
		long returnValue = createSubEntityObject_CModelBaseObject_IntVector(pModelObjectParamValue, subEntityIndexsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CModelBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelBaseObject");
		}
		return __returnValue;
	}
	native private static void destroyObject_CModelBaseObject(long pModelObject);
	/**
	 * 销毁模型对象
	 * @param pModelObject 模型对象
	 */
	public static void destroyObject(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pModelObject)
	{
		long pModelObjectParamValue = (pModelObject == null ? 0L : pModelObject.nativeObject.pointer);
		destroyObject_CModelBaseObject(pModelObjectParamValue);
	}
	native private static int getMaxInstanceCountPerBatch_void();
	/**
	 * 获取instance每个批次渲染个数
	 * @param  
	 * @return instance每个批次渲染个数
	 */
	public static int getMaxInstanceCountPerBatch()
	{
		int returnValue = getMaxInstanceCountPerBatch_void();
		return returnValue;
	}
	native private static boolean setMaxInstanceCountPerBatch_ev_uint16(int count);
	/**
	 * 设置instance每个批次最大渲染个数
	 * @param  
	 * @return 设置成功返回true否则返回false
	 */
	public static boolean setMaxInstanceCountPerBatch(int count)
	{
		int countParamValue = count;
		boolean returnValue = setMaxInstanceCountPerBatch_ev_uint16(countParamValue);
		return returnValue;
	}
	native private static boolean checkHardwareInstanceCapability_void();
	/**
	 * 判断是否支持硬件Instance
	 */
	public static boolean checkHardwareInstanceCapability()
	{
		boolean returnValue = checkHardwareInstanceCapability_void();
		return returnValue;
	}
	native private static int checkInstanceCapability_CMeshPtr(long mesh);
	/**
	 * 检测系统支持哪些Instance技术
	 * @param mesh mesh资源对象
	 * @return InstanceTechniuqe逻辑运算值
	 */
	public static com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability(com.earthview.world.graphic.MeshPtr mesh)
	{
		long meshParamValue = mesh.nativeObject.pointer;
		int returnValue = checkInstanceCapability_CMeshPtr(meshParamValue);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static int checkInstanceCapability_CSceneManager_CModelDataSource_ev_uint32(long pSceneManager, long pModelDataSource, long meshID);
	/**
	 * 检测系统支持哪些Instance技术
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源指针
	 * @param meshID 模型id
	 * @return InstanceTechniuqe逻辑运算值
	 */
	public static com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		long meshIDParamValue = meshID;
		int returnValue = checkInstanceCapability_CSceneManager_CModelDataSource_ev_uint32(pSceneManagerParamValue, pModelDataSourceParamValue, meshIDParamValue);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static int checkInstanceCapability_CSceneManager_CModelDataSource_EVString(long pSceneManager, long pModelDataSource, String meshName);
	/**
	 * 检测系统支持哪些Instance技术
	 * @param pSceneManager 场景管理器对象
	 * @param pModelDataSource 数据源指针
	 * @param mesh mesh名称
	 * @return InstanceTechniuqe逻辑运算值
	 */
	public static com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability(com.earthview.world.graphic.SceneManager pSceneManager, com.earthview.world.spatial3d.dataset.ModelDataSource pModelDataSource, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		long pModelDataSourceParamValue = (pModelDataSource == null ? 0L : pModelDataSource.nativeObject.pointer);
		String meshNameParamValue = meshName;
		int returnValue = checkInstanceCapability_CSceneManager_CModelDataSource_EVString(pSceneManagerParamValue, pModelDataSourceParamValue, meshNameParamValue);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static int checkInstanceCapability_CSceneManager_EVString_ev_uint32(long pSceneManager, String datasourceName, long meshID);
	/**
	 * 检测系统支持哪些Instance技术
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshID 模型id
	 * @return InstanceTechniuqe逻辑运算值
	 */
	public static com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, long meshID)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		long meshIDParamValue = meshID;
		int returnValue = checkInstanceCapability_CSceneManager_EVString_ev_uint32(pSceneManagerParamValue, datasourceNameParamValue, meshIDParamValue);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static int checkInstanceCapability_CSceneManager_EVString_EVString(long pSceneManager, String datasourceName, String meshName);
	/**
	 * 检测系统支持哪些Instance技术
	 * @param pSceneManager 场景管理器对象
	 * @param datasourceName 数据源名称
	 * @param meshID 模型名称
	 * @return InstanceTechniuqe逻辑运算值
	 */
	public static com.earthview.world.graphic.InstanceTechniuqe checkInstanceCapability(com.earthview.world.graphic.SceneManager pSceneManager, String datasourceName, String meshName)
	{
		long pSceneManagerParamValue = (pSceneManager == null ? 0L : pSceneManager.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String meshNameParamValue = meshName;
		int returnValue = checkInstanceCapability_CSceneManager_EVString_EVString(pSceneManagerParamValue, datasourceNameParamValue, meshNameParamValue);
		return com.earthview.world.graphic.InstanceTechniuqe.toEnum(returnValue);
	}
	native private static boolean isInternalVertexProgram_EVString(String strVertexProgramName);
	public static boolean isInternalVertexProgram(String strVertexProgramName)
	{
		String strVertexProgramNameParamValue = strVertexProgramName;
		boolean returnValue = isInternalVertexProgram_EVString(strVertexProgramNameParamValue);
		return returnValue;
	}
	native private static boolean isInternalFragmentProgram_EVString(String strFragmentProgramName);
	public static boolean isInternalFragmentProgram(String strFragmentProgramName)
	{
		String strFragmentProgramNameParamValue = strFragmentProgramName;
		boolean returnValue = isInternalFragmentProgram_EVString(strFragmentProgramNameParamValue);
		return returnValue;
	}
	public ModelObjectFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelObjectFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelObjectFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelObjectFactory obj = null;
 		if(baseObj instanceof ModelObjectFactory)
		{
			obj = (ModelObjectFactory)baseObj;
		} else {
			obj = new ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelObjectFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
