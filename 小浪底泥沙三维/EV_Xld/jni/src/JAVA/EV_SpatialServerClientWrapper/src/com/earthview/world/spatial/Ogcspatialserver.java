package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC空间服务类
 */
public class Ogcspatialserver extends com.earthview.world.spatial.SpatialServer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCSpatialServer", new OgcspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCSpatialServerProxy", new OgcspatialserverClassFactory());
	}

	native private String getServerName_void(long pNativeObject);
	/**
	 * 获取服务名称
	 * @return 服务名称
	 */
	public String getServerName()
	{
		String returnValue = getServerName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerName_void_NoVirtual(long pNativeObject);
	protected String getServerName_NoVirtual()
	{
		String returnValue = getServerName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerAbstract_void(long pNativeObject);
	/**
	 * 获取服务描述
	 * @return 服务描述
	 */
	public String getServerAbstract()
	{
		String returnValue = getServerAbstract_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerAbstract_void_NoVirtual(long pNativeObject);
	protected String getServerAbstract_NoVirtual()
	{
		String returnValue = getServerAbstract_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerTitle_void(long pNativeObject);
	/**
	 * 获取服务标题
	 * @return 服务标题
	 */
	public String getServerTitle()
	{
		String returnValue = getServerTitle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerTitle_void_NoVirtual(long pNativeObject);
	protected String getServerTitle_NoVirtual()
	{
		String returnValue = getServerTitle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getServerUrl_void(long pNativeObject);
	/**
	 * 获取服务器地址
	 * @return 服务器地址
	 */
	public String getServerUrl()
	{
		String returnValue = getServerUrl_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getServerUrl_void_NoVirtual(long pNativeObject);
	protected String getServerUrl_NoVirtual()
	{
		String returnValue = getServerUrl_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 生成当前数据源xml描述
	 * @return xml
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

	native private boolean isConnected_void(long pNativeObject);
	/**
	 * 是否可以连接到服务器
	 * @return 如果可以连接，返回true
	 */
	public boolean isConnected()
	{
		boolean returnValue = isConnected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConnected_void_NoVirtual(long pNativeObject);
	protected boolean isConnected_NoVirtual()
	{
		boolean returnValue = isConnected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean reconnect_void(long pNativeObject);
	/**
	 * 重新连接
	 * @return 重新连接成功，返回true
	 */
	public boolean reconnect()
	{
		boolean returnValue = reconnect_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean reconnect_void_NoVirtual(long pNativeObject);
	protected boolean reconnect_NoVirtual()
	{
		boolean returnValue = reconnect_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void disConnect_void(long pNativeObject);
	/**
	 * 断开连接连接
	 */
	public void disConnect()
	{
		disConnect_void(this.nativeObject.pointer);
	}
	native private void disConnect_void_NoVirtual(long pNativeObject);
	protected void disConnect_NoVirtual()
	{
		disConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	public Ogcspatialserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcspatialserver(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 深度拷贝
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_getServerName_void(long pNativeObject, String method);
	native protected void register_getServerAbstract_void(long pNativeObject, String method);
	native protected void register_getServerTitle_void(long pNativeObject, String method);
	native protected void register_getServerUrl_void(long pNativeObject, String method);
	native protected void register_isConnected_void(long pNativeObject, String method);
	native protected void register_reconnect_void(long pNativeObject, String method);
	native protected void register_disConnect_void(long pNativeObject, String method);
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
			this.register_getServerName_void(this.nativeObject.pointer, "getServerName_void_callback");
			this.register_getServerAbstract_void(this.nativeObject.pointer, "getServerAbstract_void_callback");
			this.register_getServerTitle_void(this.nativeObject.pointer, "getServerTitle_void_callback");
			this.register_getServerUrl_void(this.nativeObject.pointer, "getServerUrl_void_callback");
			this.register_isConnected_void(this.nativeObject.pointer, "isConnected_void_callback");
			this.register_reconnect_void(this.nativeObject.pointer, "reconnect_void_callback");
			this.register_disConnect_void(this.nativeObject.pointer, "disConnect_void_callback");
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
	
	public static Ogcspatialserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcspatialserver obj = null;
 		if(baseObj instanceof Ogcspatialserver)
		{
			obj = (Ogcspatialserver)baseObj;
		} else {
			obj = new Ogcspatialserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCSpatialServer");
			obj.increaseCast();
		}

		return obj;
	}
}
