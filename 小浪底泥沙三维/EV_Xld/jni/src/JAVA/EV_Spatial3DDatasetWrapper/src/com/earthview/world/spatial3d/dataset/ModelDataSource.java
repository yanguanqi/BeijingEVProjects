package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataSource extends com.earthview.world.spatial.geodataset.DatabaseDataSource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDataSource", new ModelDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelDataSourceProxy", new ModelDataSourceClassFactory());
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getSRID_EVString_callback(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		int returnValue = getSRID(datasetNameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSRID_EVString(long pNativeObject, String datasetName);
	/**
	 * 通过数据集名称获取某个数据集的SRID值
	 * @param datasetName 数据集名称
	 * @return SRID值
	 */
	public int getSRID(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		int returnValue = getSRID_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	native private int getSRID_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected int getSRID_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		int returnValue = getSRID_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源类型
	 * @param  
	 * @return 数据源类型
	 */
	public int getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected int getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDatasetInfos_EVDatasetType(long pNativeObject, int type);
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param type 数据集类型
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}
	native private long getDatasetInfos_EVDatasetType_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos_NoVirtual(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		int typeParamValue = type.getValue();
		long returnValue = getDatasetInfos_EVDatasetType_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}

	protected  long getModelDatasetInfos_void_callback()
	{
		com.earthview.world.spatial.geodataset.Idatametainfos returnValue = getModelDatasetInfos();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getModelDatasetInfos_void(long pNativeObject);
	/**
	 * 获取所有模型数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getModelDatasetInfos()
	{
		long returnValue = getModelDatasetInfos_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}
	native private long getModelDatasetInfos_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatametainfos getModelDatasetInfos_NoVirtual()
	{
		long returnValue = getModelDatasetInfos_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfos __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfos(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfos");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfos)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfos");
		}
		return __returnValue;
	}

	native private long openDataset_EVString(long pNativeObject, String name);
	/**
	 * 打开指定数据集名称的数据集，用完后通过closedataset来释放资源
	 * @param name 指定名称
	 * @return 数据集对象指针，如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long openDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.spatial.geodataset.Idataset openDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = openDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private static long openDataset_CEVSpatialServer_CWebDataset(long pNetServer, long pNetDataset);
	/**
	 * 从网络数据源构造一个模型数据集创建网络模型数据集时，模型数据源对象不一定存在，所以这里使用一个静态函数
	 * @param  
	 * @return 成功删除，返回true;否则，返回false
	 */
	public static com.earthview.world.spatial.geodataset.Idataset openDataset(com.earthview.world.spatial.Evspatialserver pNetServer, com.earthview.world.spatial.WebDataset pNetDataset)
	{
		long pNetServerParamValue = (pNetServer == null ? 0L : pNetServer.nativeObject.pointer);
		long pNetDatasetParamValue = (pNetDataset == null ? 0L : pNetDataset.nativeObject.pointer);
		long returnValue = openDataset_CEVSpatialServer_CWebDataset(pNetServerParamValue, pNetDatasetParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private static void closeWebDataset_IDataset(long pdataset);
	/**
	 * 
	 * @param  
	 */
	public static void closeWebDataset(com.earthview.world.spatial.geodataset.Idataset pdataset)
	{
		long pdatasetParamValue = (pdataset == null ? 0L : pdataset.nativeObject.pointer);
		closeWebDataset_IDataset(pdatasetParamValue);
	}
	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除指定数据集名称的数据集
	 * @param name 指定名称
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean deleteDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化字符串
	 * @param  
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getPropertySet_void(long pNativeObject);
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		long returnValue = getPropertySet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}
	native private long getPropertySet_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet_NoVirtual()
	{
		long returnValue = getPropertySet_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ipropertyset __returnValue = new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate, "IPropertySet");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ipropertyset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IPropertySet");
		}
		return __returnValue;
	}

	protected  long getDatabase_void_callback()
	{
		com.earthview.world.core.database.SqlDatabase returnValue = getDatabase();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDatabase_void(long pNativeObject);
	/**
	 * 获取数据库句柄
	 * @param  
	 * @return EarthView::World::Core::Database::CSqlDatabase，数据库句柄
	 */
	public com.earthview.world.core.database.SqlDatabase getDatabase()
	{
		long returnValue = getDatabase_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private long getDatabase_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.database.SqlDatabase getDatabase_NoVirtual()
	{
		long returnValue = getDatabase_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDatabase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}

	protected  long getPropertyManager_void_callback()
	{
		com.earthview.world.spatial3d.dataset.PropertyManager returnValue = getPropertyManager();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPropertyManager_void(long pNativeObject);
	/**
	 * 获取属性管理器句柄
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CPropertyManager，属性管理器句柄
	 */
	public com.earthview.world.spatial3d.dataset.PropertyManager getPropertyManager()
	{
		long returnValue = getPropertyManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.PropertyManager __returnValue = new com.earthview.world.spatial3d.dataset.PropertyManager(CreatedWhenConstruct.CWC_NotToCreate, "CPropertyManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.PropertyManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPropertyManager");
		}
		return __returnValue;
	}
	native private long getPropertyManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.PropertyManager getPropertyManager_NoVirtual()
	{
		long returnValue = getPropertyManager_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.PropertyManager __returnValue = new com.earthview.world.spatial3d.dataset.PropertyManager(CreatedWhenConstruct.CWC_NotToCreate, "CPropertyManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.PropertyManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPropertyManager");
		}
		return __returnValue;
	}

	protected  long getUserTypeManager_void_callback()
	{
		com.earthview.world.spatial3d.dataset.UserTypeManager returnValue = getUserTypeManager();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getUserTypeManager_void(long pNativeObject);
	/**
	 * 获取用户类别管理器句柄
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CUserTypeManager，用户类别管理器句柄
	 */
	public com.earthview.world.spatial3d.dataset.UserTypeManager getUserTypeManager()
	{
		long returnValue = getUserTypeManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeManager __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeManager(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeManager");
		}
		return __returnValue;
	}
	native private long getUserTypeManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.UserTypeManager getUserTypeManager_NoVirtual()
	{
		long returnValue = getUserTypeManager_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.UserTypeManager __returnValue = new com.earthview.world.spatial3d.dataset.UserTypeManager(CreatedWhenConstruct.CWC_NotToCreate, "CUserTypeManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.UserTypeManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserTypeManager");
		}
		return __returnValue;
	}

	protected  long getMeshEffectRefManager_void_callback()
	{
		com.earthview.world.spatial3d.dataset.MeshEffectRefManager returnValue = getMeshEffectRefManager();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMeshEffectRefManager_void(long pNativeObject);
	/**
	 * 获取模型特效管理器句柄
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager，用户类别管理器句柄
	 */
	public com.earthview.world.spatial3d.dataset.MeshEffectRefManager getMeshEffectRefManager()
	{
		long returnValue = getMeshEffectRefManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshEffectRefManager __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefManager(CreatedWhenConstruct.CWC_NotToCreate, "CMeshEffectRefManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefManager");
		}
		return __returnValue;
	}
	native private long getMeshEffectRefManager_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.MeshEffectRefManager getMeshEffectRefManager_NoVirtual()
	{
		long returnValue = getMeshEffectRefManager_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshEffectRefManager __returnValue = new com.earthview.world.spatial3d.dataset.MeshEffectRefManager(CreatedWhenConstruct.CWC_NotToCreate, "CMeshEffectRefManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshEffectRefManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshEffectRefManager");
		}
		return __returnValue;
	}

	protected  long getMeshTemplateDataset_void_callback()
	{
		com.earthview.world.spatial3d.dataset.MeshTemplateDataset returnValue = getMeshTemplateDataset();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMeshTemplateDataset_void(long pNativeObject);
	/**
	 * 获取模板数据集句柄，每个数据源只存在一个此种数据集，内存由数据源释放
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset，模板数据集句柄
	 */
	public com.earthview.world.spatial3d.dataset.MeshTemplateDataset getMeshTemplateDataset()
	{
		long returnValue = getMeshTemplateDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshTemplateDataset __returnValue = new com.earthview.world.spatial3d.dataset.MeshTemplateDataset(CreatedWhenConstruct.CWC_NotToCreate, "CMeshTemplateDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshTemplateDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshTemplateDataset");
		}
		return __returnValue;
	}
	native private long getMeshTemplateDataset_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.dataset.MeshTemplateDataset getMeshTemplateDataset_NoVirtual()
	{
		long returnValue = getMeshTemplateDataset_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshTemplateDataset __returnValue = new com.earthview.world.spatial3d.dataset.MeshTemplateDataset(CreatedWhenConstruct.CWC_NotToCreate, "CMeshTemplateDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshTemplateDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshTemplateDataset");
		}
		return __returnValue;
	}

	native private long getEffectDataSource_void(long pNativeObject);
	/**
	 * 获取特效数据源
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*
	 */
	public com.earthview.world.spatial3d.dataset.EffectDataSource getEffectDataSource()
	{
		long returnValue = getEffectDataSource_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EffectDataSource __returnValue = new com.earthview.world.spatial3d.dataset.EffectDataSource(CreatedWhenConstruct.CWC_NotToCreate, "CEffectDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectDataSource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectDataSource");
		}
		return __returnValue;
	}
	native private boolean closeDataset_IDataset(long pNativeObject, long dataset);
	/**
	 * 关闭数据集，释放数据集内存
	 * @param dataset 数据集句柄，此处主指实体数据集
	 * @return ev_bool，TRUE成功/FALSE不成功
	 */
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}
	native private boolean closeDataset_IDataset_NoVirtual(long pNativeObject, long dataset);
	protected boolean closeDataset_NoVirtual(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		boolean returnValue = closeDataset_IDataset_NoVirtual(this.nativeObject.pointer, datasetParamValue);
		return returnValue;
	}

	protected  boolean createDataset_EVString_IFields_ev_bool_ev_int32_callback(String name, long attrFields, boolean istempl, int srID)
	{
		String nameParamValue = name;
		com.earthview.world.spatial.geodataset.Ifields attrFieldsParamValue = (attrFields == 0L ? null : new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate));
		if(attrFieldsParamValue != null)
		{
		attrFieldsParamValue.setDelegate(true);
		attrFieldsParamValue.setInstancePointer(new InstancePointer(attrFields));
		IClassFactory attrFieldsParamValueClassFactory = GlobalClassFactoryMap.get(attrFieldsParamValue.getCppInstanceTypeName());
		if (attrFieldsParamValueClassFactory != null)
		{
			attrFieldsParamValue.setDelegate(true);
			attrFieldsParamValue = (com.earthview.world.spatial.geodataset.Ifields)attrFieldsParamValueClassFactory.create();
			attrFieldsParamValue.setDelegate(true);
			attrFieldsParamValue.setInstancePointer(new InstancePointer(attrFields));
		}
		}
		boolean istemplParamValue = istempl;
		int srIDParamValue = srID;
		boolean returnValue = createDataset(nameParamValue, attrFieldsParamValue, istemplParamValue, srIDParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean createDataset_EVString_IFields_ev_bool_ev_int32(long pNativeObject, String name, long attrFields, boolean istempl, int srID);
	/**
	 * 创建指定类别数据集，对于返回的指针需要通过closedataset来释放资源
	 * @param name 指定名称
	 * @param attrFields 实体数据集的业务属性列表
	 * @param istempl 是否创建模板数据集
	 * @param srID 地理或是投影坐标系ID
	 * @return ev_bool，创建失败返回FALSE
	 */
	public boolean createDataset(String name, com.earthview.world.spatial.geodataset.Ifields attrFields, boolean istempl, int srID)
	{
		String nameParamValue = name;
		long attrFieldsParamValue = (attrFields == null ? 0L : attrFields.nativeObject.pointer);
		boolean istemplParamValue = istempl;
		int srIDParamValue = srID;
		boolean returnValue = createDataset_EVString_IFields_ev_bool_ev_int32(this.nativeObject.pointer, nameParamValue, attrFieldsParamValue, istemplParamValue, srIDParamValue);
		return returnValue;
	}
	native private boolean createDataset_EVString_IFields_ev_bool_ev_int32_NoVirtual(long pNativeObject, String name, long attrFields, boolean istempl, int srID);
	protected boolean createDataset_NoVirtual(String name, com.earthview.world.spatial.geodataset.Ifields attrFields, boolean istempl, int srID)
	{
		String nameParamValue = name;
		long attrFieldsParamValue = (attrFields == null ? 0L : attrFields.nativeObject.pointer);
		boolean istemplParamValue = istempl;
		int srIDParamValue = srID;
		boolean returnValue = createDataset_EVString_IFields_ev_bool_ev_int32_NoVirtual(this.nativeObject.pointer, nameParamValue, attrFieldsParamValue, istemplParamValue, srIDParamValue);
		return returnValue;
	}

	native private long createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String name, long geofield, long fields);
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass的指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		String nameParamValue = name;
		long geofieldParamValue = geofield.nativeObject.pointer;
		long fieldsParamValue = fields.nativeObject.pointer;
		long returnValue = createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, nameParamValue, geofieldParamValue, fieldsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	native private long createFeatureClass_EVString_IGeometryField_IFields_NoVirtual(long pNativeObject, String name, long geofield, long fields);
	protected com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass_NoVirtual(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		String nameParamValue = name;
		long geofieldParamValue = geofield.nativeObject.pointer;
		long fieldsParamValue = fields.nativeObject.pointer;
		long returnValue = createFeatureClass_EVString_IGeometryField_IFields_NoVirtual(this.nativeObject.pointer, nameParamValue, geofieldParamValue, fieldsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}

	native private int getDatasetVersionFromDatasource_EVString(long pNativeObject, String datasetname);
	/**
	 * 从数据源获取给定名称数据集版本
	 * @param datasetname 数据集名称
	 */
	public int getDatasetVersionFromDatasource(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		int returnValue = getDatasetVersionFromDatasource_EVString(this.nativeObject.pointer, datasetnameParamValue);
		return returnValue;
	}
	native private long getDatasetInfo_EVString(long pNativeObject, String datasetName);
	/**
	 * 根据数据集名称获取数据集元数据信息
	 * @param datasetName 数据集名称
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString(this.nativeObject.pointer, datasetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}
	native private long getDatasetInfo_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getDatasetInfo_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatametainfo __returnValue = new com.earthview.world.spatial.geodataset.Idatametainfo(CreatedWhenConstruct.CWC_NotToCreate, "IDataMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatametainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataMetaInfo");
		}
		return __returnValue;
	}

	protected  long getExistDataset_EVString_callback(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		com.earthview.world.spatial3d.dataset.DataSetVector returnValue = getExistDataset(datasetNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getExistDataset_EVString(long pNativeObject, String datasetName);
	/**
	 * 获取已打开数据集
	 * @param datasetName 数据集名称
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial3d.dataset.DataSetVector getExistDataset(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getExistDataset_EVString(this.nativeObject.pointer, datasetNameParamValue);
		com.earthview.world.spatial3d.dataset.DataSetVector __returnValue = new com.earthview.world.spatial3d.dataset.DataSetVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSetVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.DataSetVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSetVector");
		}
		return __returnValue;
	}
	native private long getExistDataset_EVString_NoVirtual(long pNativeObject, String datasetName);
	protected com.earthview.world.spatial3d.dataset.DataSetVector getExistDataset_NoVirtual(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		long returnValue = getExistDataset_EVString_NoVirtual(this.nativeObject.pointer, datasetNameParamValue);
		com.earthview.world.spatial3d.dataset.DataSetVector __returnValue = new com.earthview.world.spatial3d.dataset.DataSetVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataSetVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.DataSetVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataSetVector");
		}
		return __returnValue;
	}

	native private boolean isInEdit_void(long pNativeObject);
	/**
	 * 是否有数据集在编辑
	 * @param  
	 */
	public boolean isInEdit()
	{
		boolean returnValue = isInEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isInEdit_EVString(long pNativeObject, String datasetname);
	/**
	 * 指定名称的数据集是否在编辑
	 * @param datasetname 数据集名称
	 */
	public boolean isInEdit(String datasetname)
	{
		String datasetnameParamValue = datasetname;
		boolean returnValue = isInEdit_EVString(this.nativeObject.pointer, datasetnameParamValue);
		return returnValue;
	}
	protected  boolean updateDatasetInfo_EVString_CDataMetaInfo_callback(String datasetName, long info)
	{
		String datasetNameParamValue = datasetName;
		com.earthview.world.spatial.geodataset.DataMetaInfo infoParamValue = (info == 0L ? null : new com.earthview.world.spatial.geodataset.DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(infoParamValue != null)
		{
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial.geodataset.DataMetaInfo)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		}
		boolean returnValue = updateDatasetInfo(datasetNameParamValue, infoParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateDatasetInfo_EVString_CDataMetaInfo(long pNativeObject, String datasetName, long info);
	/**
	 * 更新数据集元数据信息
	 * @param datasetName 需要更新的数据集名称
	 * @param info 元数据信息
	 * @return 更新成功返回true，更新失败返回false
	 */
	public boolean updateDatasetInfo(String datasetName, com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		String datasetNameParamValue = datasetName;
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = updateDatasetInfo_EVString_CDataMetaInfo(this.nativeObject.pointer, datasetNameParamValue, infoParamValue);
		return returnValue;
	}
	native private boolean updateDatasetInfo_EVString_CDataMetaInfo_NoVirtual(long pNativeObject, String datasetName, long info);
	protected boolean updateDatasetInfo_NoVirtual(String datasetName, com.earthview.world.spatial.geodataset.DataMetaInfo info)
	{
		String datasetNameParamValue = datasetName;
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		boolean returnValue = updateDatasetInfo_EVString_CDataMetaInfo_NoVirtual(this.nativeObject.pointer, datasetNameParamValue, infoParamValue);
		return returnValue;
	}

	native private boolean getDataSourceUseable_void(long pNativeObject);
	/**
	 * 获取数据源是否可用
	 * @param  
	 * @return 可用返回true，不可用返回false
	 */
	public boolean getDataSourceUseable()
	{
		boolean returnValue = getDataSourceUseable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDatasetValid_EVString(long pNativeObject, String datasetName);
	/**
	 * 获取数据集是否有效
	 * @param  
	 * @return 数据集是否有效
	 */
	public boolean isDatasetValid(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = isDatasetValid_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	public ModelDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断数据源是否有效
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_getSRID_EVString(long pNativeObject, String method);
	native protected void register_getModelDatasetInfos_void(long pNativeObject, String method);
	native protected void register_getDatabase_void(long pNativeObject, String method);
	native protected void register_getPropertyManager_void(long pNativeObject, String method);
	native protected void register_getUserTypeManager_void(long pNativeObject, String method);
	native protected void register_getMeshEffectRefManager_void(long pNativeObject, String method);
	native protected void register_getMeshTemplateDataset_void(long pNativeObject, String method);
	native protected void register_createDataset_EVString_IFields_ev_bool_ev_int32(long pNativeObject, String method);
	native protected void register_getExistDataset_EVString(long pNativeObject, String method);
	native protected void register_updateDatasetInfo_EVString_CDataMetaInfo(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getPropertySet_void(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_getDatasetInfo_EVString(long pNativeObject, String method);
	native protected void register_getDatasetInfos_EVDatasetType(long pNativeObject, String method);
	native protected void register_createFeatureClass_EVString_IGeometryField_IFields(long pNativeObject, String method);
	native protected void register_openDataset_EVString(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_closeDataset_IDataset(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSRID_EVString(this.nativeObject.pointer, "getSRID_EVString_callback");
			this.register_getModelDatasetInfos_void(this.nativeObject.pointer, "getModelDatasetInfos_void_callback");
			this.register_getDatabase_void(this.nativeObject.pointer, "getDatabase_void_callback");
			this.register_getPropertyManager_void(this.nativeObject.pointer, "getPropertyManager_void_callback");
			this.register_getUserTypeManager_void(this.nativeObject.pointer, "getUserTypeManager_void_callback");
			this.register_getMeshEffectRefManager_void(this.nativeObject.pointer, "getMeshEffectRefManager_void_callback");
			this.register_getMeshTemplateDataset_void(this.nativeObject.pointer, "getMeshTemplateDataset_void_callback");
			this.register_createDataset_EVString_IFields_ev_bool_ev_int32(this.nativeObject.pointer, "createDataset_EVString_IFields_ev_bool_ev_int32_callback");
			this.register_getExistDataset_EVString(this.nativeObject.pointer, "getExistDataset_EVString_callback");
			this.register_updateDatasetInfo_EVString_CDataMetaInfo(this.nativeObject.pointer, "updateDatasetInfo_EVString_CDataMetaInfo_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getPropertySet_void(this.nativeObject.pointer, "getPropertySet_void_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_getDatasetInfo_EVString(this.nativeObject.pointer, "getDatasetInfo_EVString_callback");
			this.register_getDatasetInfos_EVDatasetType(this.nativeObject.pointer, "getDatasetInfos_EVDatasetType_callback");
			this.register_createFeatureClass_EVString_IGeometryField_IFields(this.nativeObject.pointer, "createFeatureClass_EVString_IGeometryField_IFields_callback");
			this.register_openDataset_EVString(this.nativeObject.pointer, "openDataset_EVString_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_closeDataset_IDataset(this.nativeObject.pointer, "closeDataset_IDataset_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static ModelDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataSource obj = null;
 		if(baseObj instanceof ModelDataSource)
		{
			obj = (ModelDataSource)baseObj;
		} else {
			obj = new ModelDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
