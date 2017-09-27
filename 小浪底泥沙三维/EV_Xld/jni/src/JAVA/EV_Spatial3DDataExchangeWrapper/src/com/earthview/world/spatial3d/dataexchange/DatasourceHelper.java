package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 辅助类，提供一些对模型数据源、数据集的操作
 */
public class DatasourceHelper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CDatasourceHelper", new DatasourceHelperClassFactory());
	}

	/**
	 * 构造函数
	 */
	public DatasourceHelper() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDatasourceHelper", null);
	}

	native private boolean openDatasource_CDataSourceUrl(long pNativeObject, long datasourceURL);
	/**
	 * 打开一个数据源
	 * @param datasourceURL 数据源的链接属性描述
	 * @return 成功返回true，否则返回false
	 */
	public boolean openDatasource(com.earthview.world.spatial3d.dataexchange.DataSourceUrl datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = openDatasource_CDataSourceUrl(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private boolean createDatasource_CDataSourceUrl(long pNativeObject, long datasourceURL);
	/**
	 * 创建一个数据源
	 * @param datasourceURL 数据源的链接属性描述
	 * @return 成功返回true，否则返回false
	 */
	public boolean createDatasource(com.earthview.world.spatial3d.dataexchange.DataSourceUrl datasourceURL)
	{
		long datasourceURLParamValue = datasourceURL.nativeObject.pointer;
		boolean returnValue = createDatasource_CDataSourceUrl(this.nativeObject.pointer, datasourceURLParamValue);
		return returnValue;
	}
	native private long getDatasource_void(long pNativeObject);
	/**
	 * 获取一个数据源
	 * @return 返回数据源
	 */
	public com.earthview.world.spatial3d.dataset.ModelDataSource getDatasource()
	{
		long returnValue = getDatasource_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ModelDataSource __returnValue = new com.earthview.world.spatial3d.dataset.ModelDataSource(CreatedWhenConstruct.CWC_NotToCreate, "CModelDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ModelDataSource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelDataSource");
		}
		return __returnValue;
	}
	native private void setDatasource_CModelDataSource(long pNativeObject, long ref_pSource);
	/**
	 * 指定一个数据源
	 * @param pSource 数据源
	 */
	public void setDatasource(com.earthview.world.spatial3d.dataset.ModelDataSource ref_pSource)
	{
		long ref_pSourceParamValue = (ref_pSource == null ? 0L : ref_pSource.nativeObject.pointer);
		setDatasource_CModelDataSource(this.nativeObject.pointer, ref_pSourceParamValue);
	}
	native private boolean openDatasetByName_EVString(long pNativeObject, String name);
	/**
	 * 根据数据集名字打开一个存在的数据集
	 * @param name 数据集名称
	 * @return 成功返回true，否则返回false
	 */
	public boolean openDatasetByName(String name)
	{
		String nameParamValue = name;
		boolean returnValue = openDatasetByName_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteData_void(long pNativeObject);
	/**
	 * 清空数据源和数据集
	 * @return 成功返回true，否则返回false
	 */
	public boolean deleteData()
	{
		boolean returnValue = deleteData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean clearDataset_void(long pNativeObject);
	/**
	 * 实现入库之前清空导入目标里面的数据
	 * @return 成功返回true，否则返回false
	 */
	public boolean clearDataset()
	{
		boolean returnValue = clearDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean clearModelDatabase_void(long pNativeObject);
	/**
	 * 实现入库之前清空导入目标里面的数据
	 * @return 成功返回true，否则返回false
	 */
	public boolean clearModelDatabase()
	{
		boolean returnValue = clearModelDatabase_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isExistModelDatabase_EVString(long pNativeObject, String meshName);
	/**
	 * 验证模型库是否已经存在该模型
	 * @param meshName 模型名字
	 * @return 存在返回true，否则返回false
	 */
	public boolean isExistModelDatabase(String meshName)
	{
		String meshNameParamValue = meshName;
		boolean returnValue = isExistModelDatabase_EVString(this.nativeObject.pointer, meshNameParamValue);
		return returnValue;
	}
	native private boolean isExistModelInDataset_EVString(long pNativeObject, String meshName);
	/**
	 * 验证数据集是否已经存在该模型
	 * @param meshName 模型名字
	 * @return 存在返回true，否则返回false
	 */
	public boolean isExistModelInDataset(String meshName)
	{
		String meshNameParamValue = meshName;
		boolean returnValue = isExistModelInDataset_EVString(this.nativeObject.pointer, meshNameParamValue);
		return returnValue;
	}
	native private boolean openModelDatabase_void(long pNativeObject);
	/**
	 * 打开模型库
	 * @return 成功返回true，否则返回false
	 */
	public boolean openModelDatabase()
	{
		boolean returnValue = openModelDatabase_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDataset_void(long pNativeObject);
	/**
	 * 获取实体数据集
	 * @return 返回数据集
	 */
	public com.earthview.world.spatial3d.dataset.EntityDataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EntityDataset __returnValue = new com.earthview.world.spatial3d.dataset.EntityDataset(CreatedWhenConstruct.CWC_NotToCreate, "CEntityDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EntityDataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityDataset");
		}
		return __returnValue;
	}
	native private long getModelDatabase_void(long pNativeObject);
	/**
	 * 获取模型库数据集
	 * @return 返回模型库
	 */
	public com.earthview.world.spatial3d.dataset.MeshTemplateDataset getModelDatabase()
	{
		long returnValue = getModelDatabase_void(this.nativeObject.pointer);
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
	native private boolean closeDateset_void(long pNativeObject);
	/**
	 * 关闭数据集
	 * @return 成功返回true，否则返回false
	 */
	public boolean closeDateset()
	{
		boolean returnValue = closeDateset_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DatasourceHelper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasourceHelper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasourceHelper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasourceHelper obj = null;
 		if(baseObj instanceof DatasourceHelper)
		{
			obj = (DatasourceHelper)baseObj;
		} else {
			obj = new DatasourceHelper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasourceHelper");
			obj.increaseCast();
		}

		return obj;
	}
}
