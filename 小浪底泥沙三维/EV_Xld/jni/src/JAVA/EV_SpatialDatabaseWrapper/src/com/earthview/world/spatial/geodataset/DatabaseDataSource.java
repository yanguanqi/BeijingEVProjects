package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 根据给定连接创建数据源
 */
public class DatabaseDataSource extends com.earthview.world.spatial.geodataset.Idatasource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatabaseDataSource", new DatabaseDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDatabaseDataSourceProxy", new DatabaseDataSourceClassFactory());
	}

	native private long getdbType_void(long pNativeObject);
	/**
	 * 获取数据库类型
	 * @param  
	 * @return 数据库类型
	 */
	public StringPointer getdbType()
	{
		long returnValue = getdbType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private String getDriver_void(long pNativeObject);
	/**
	 * 获取驱动类型类型
	 * @param  
	 * @return 驱动类型
	 */
	public String getDriver()
	{
		String returnValue = getDriver_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDatabaseName_void(long pNativeObject);
	/**
	 * 获取数据库名
	 * @param  
	 * @return 数据库名
	 */
	public String getDatabaseName()
	{
		String returnValue = getDatabaseName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getHostName_void(long pNativeObject);
	/**
	 * 获取主机名
	 * @param  
	 * @return 主机名
	 */
	public String getHostName()
	{
		String returnValue = getHostName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPort_void(long pNativeObject);
	/**
	 * 获取端口号
	 * @param  
	 * @return 端口号
	 */
	public int getPort()
	{
		int returnValue = getPort_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUserName_void(long pNativeObject);
	/**
	 * 获取用户名
	 * @param  
	 * @return 用户名
	 */
	public String getUserName()
	{
		String returnValue = getUserName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getPassword_void(long pNativeObject);
	/**
	 * 获取密码
	 * @param  
	 * @return 密码
	 */
	public String getPassword()
	{
		String returnValue = getPassword_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getConnectOptions_void(long pNativeObject);
	/**
	 * 获取连接选项
	 * @param  
	 * @return 连接选项
	 */
	public String getConnectOptions()
	{
		String returnValue = getConnectOptions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDatasetAliasName_EVString(long pNativeObject, String datasetName);
	/**
	 * 获取数据集别名
	 * @param datasetName 数据集名
	 * @return 别名
	 */
	public String getDatasetAliasName(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		String returnValue = getDatasetAliasName_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	native private String getDatasetAliasName_ev_uint32(long pNativeObject, long datasetID);
	/**
	 * 获取数据集别名
	 * @param datasetID 数据集id号
	 * @return 别名
	 */
	public String getDatasetAliasName(long datasetID)
	{
		long datasetIDParamValue = datasetID;
		String returnValue = getDatasetAliasName_ev_uint32(this.nativeObject.pointer, datasetIDParamValue);
		return returnValue;
	}
	native private String getVersion_EVString(long pNativeObject, String model_name);
	/**
	 * 获取模型版本号
	 * @param model_name 模型名
	 * @return 版本号
	 */
	public String getVersion(String model_name)
	{
		String model_nameParamValue = model_name;
		String returnValue = getVersion_EVString(this.nativeObject.pointer, model_nameParamValue);
		return returnValue;
	}
	public DatabaseDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatabaseDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据源名称
	 * @param  
	 * @return 数据源名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据源类型
	 * @param  
	 * @return 数据源类型
	 */
	public int getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据源参数
	 * @param  
	 * @return 数据源KeyValue参数
	 */
	public com.earthview.world.spatial.geodataset.Ipropertyset getPropertySet()
	{
		return super.getPropertySet_NoVirtual();
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
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfo getDatasetInfo(String name)
	{
		return super.getDatasetInfo_NoVirtual(name);
	}
	/**
	 * 获取指定数据集类型的数据元信息
	 * @param  
	 * @return 数据元信息集合对象
	 */
	public com.earthview.world.spatial.geodataset.Idatametainfos getDatasetInfos(com.earthview.world.spatial.geodataset.EVDatasetType type)
	{
		return super.getDatasetInfos_NoVirtual(type);
	}
	/**
	 * 创建FeatureClass数据集
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass的指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass createFeatureClass(String name, com.earthview.world.spatial.geodataset.Igeometryfield geofield, com.earthview.world.spatial.geodataset.Ifields fields)
	{
		return super.createFeatureClass_NoVirtual(name, geofield, fields);
	}
	/**
	 * 打开指定数据集名称的数据集
	 * @param  
	 * @param name 指定名称
	 * @return 数据集对象指针，如果名字不存在，这返回null
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String name)
	{
		return super.openDataset_NoVirtual(name);
	}
	/**
	 * 删除指定数据集名称的物理文件
	 * @param name 指定名称
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean deleteDataset(String name)
	{
		return super.deleteDataset_NoVirtual(name);
	}
	/**
	 * 关闭指定数据集名称的数据集，会删掉数据集指针
	 * @param name 数据集指针
	 * @return 成功删除，返回true;否则，返回false
	 */
	public boolean closeDataset(com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		return super.closeDataset_NoVirtual(dataset);
	}
	/**
	 * 序列化字符串
	 * @param  
	 * @param  
	 */
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	/**
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
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
	
	public static DatabaseDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatabaseDataSource obj = null;
 		if(baseObj instanceof DatabaseDataSource)
		{
			obj = (DatabaseDataSource)baseObj;
		} else {
			obj = new DatabaseDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatabaseDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
