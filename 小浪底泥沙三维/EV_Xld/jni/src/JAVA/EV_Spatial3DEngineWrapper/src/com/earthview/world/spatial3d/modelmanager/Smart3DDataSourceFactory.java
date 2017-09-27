package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DDataSourceFactory extends com.earthview.world.spatial.geodataset.Idatasourcefactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CSmart3DDataSourceFactory", new Smart3DDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCSmart3DDataSourceFactoryProxy", new Smart3DDataSourceFactoryClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Smart3DDataSourceFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSmart3DDataSourceFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.Smart3DDataSourceFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回单例的数据源工厂句柄
	 * @return CModelDataSourceFactory，失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.modelmanager.Smart3DDataSourceFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.Smart3DDataSourceFactory __returnValue = new com.earthview.world.spatial3d.modelmanager.Smart3DDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate, "CSmart3DDataSourceFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Smart3DDataSourceFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSmart3DDataSourceFactory");
		}
		return __returnValue;
	}
	native private void closeDataSource_IDataSource(long pNativeObject, long ds);
	/**
	 * 释放数据源内存
	 * @param ds 数据源句柄
	 */
	public void closeDataSource(com.earthview.world.spatial.geodataset.Idatasource ds)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		closeDataSource_IDataSource(this.nativeObject.pointer, dsParamValue);
	}
	native private long openDataSource_EVString_EVString(long pNativeObject, String path, String fileName);
	/**
	 * 打开本地文件型的数据源
	 * @param path 文件型数据源文件夹
	 * @param fileName 数据源别名
	 * @return EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Idatasource openDataSource(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long returnValue = openDataSource_EVString_EVString(this.nativeObject.pointer, pathParamValue, fileNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long openDataSource_EVString_EVString_NoVirtual(long pNativeObject, String path, String fileName);
	protected com.earthview.world.spatial.geodataset.Idatasource openDataSource_NoVirtual(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long returnValue = openDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, pathParamValue, fileNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private long createDataSource_EVString_EVString(long pNativeObject, String path, String fileName);
	/**
	 * 创建本地数据库版的数据源
	 * @param path 文件型数据源文件夹
	 * @param fileName 数据源别名
	 * @return EarthView::World::Spatial::GeoDataset::IDataSource，打开失败则返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createDataSource(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long returnValue = createDataSource_EVString_EVString(this.nativeObject.pointer, pathParamValue, fileNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long createDataSource_EVString_EVString_NoVirtual(long pNativeObject, String path, String fileName);
	protected com.earthview.world.spatial.geodataset.Idatasource createDataSource_NoVirtual(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		long returnValue = createDataSource_EVString_EVString_NoVirtual(this.nativeObject.pointer, pathParamValue, fileNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源的类型
	 * @return 返回数据源的类型
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

	native private long createFromXML_EVString(long pNativeObject, String xml);
	/**
	 * 从xml字符串创建数据源
	 * @param xml xml字符串
	 * @return 数据源
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createFromXML(String xml)
	{
		String xmlParamValue = xml;
		long returnValue = createFromXML_EVString(this.nativeObject.pointer, xmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long createFromXML_EVString_NoVirtual(long pNativeObject, String xml);
	protected com.earthview.world.spatial.geodataset.Idatasource createFromXML_NoVirtual(String xml)
	{
		String xmlParamValue = xml;
		long returnValue = createFromXML_EVString_NoVirtual(this.nativeObject.pointer, xmlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private long openDataSource_IPropertySet(long pNativeObject, long connection);
	/**
	 * 打开数据源
	 * @param connection 连接属性列表
	 * @return 数据源
	 */
	public com.earthview.world.spatial.geodataset.Idatasource openDataSource(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = openDataSource_IPropertySet(this.nativeObject.pointer, connectionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long openDataSource_IPropertySet_NoVirtual(long pNativeObject, long connection);
	protected com.earthview.world.spatial.geodataset.Idatasource openDataSource_NoVirtual(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = openDataSource_IPropertySet_NoVirtual(this.nativeObject.pointer, connectionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private long createDataSource_IPropertySet(long pNativeObject, long connection);
	/**
	 * 创建数据源
	 * @param connection 连接属性列表
	 * @return 数据源
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createDataSource(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = createDataSource_IPropertySet(this.nativeObject.pointer, connectionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long createDataSource_IPropertySet_NoVirtual(long pNativeObject, long connection);
	protected com.earthview.world.spatial.geodataset.Idatasource createDataSource_NoVirtual(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = createDataSource_IPropertySet_NoVirtual(this.nativeObject.pointer, connectionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private void destroyDataSource_IDataSource(long pNativeObject, long pDataSource);
	/**
	 * 销毁数据源
	 * @param pDataSource 数据源
	 */
	public void destroyDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		destroyDataSource_IDataSource(this.nativeObject.pointer, pDataSourceParamValue);
	}
	native private void destroyDataSource_IDataSource_NoVirtual(long pNativeObject, long pDataSource);
	protected void destroyDataSource_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		destroyDataSource_IDataSource_NoVirtual(this.nativeObject.pointer, pDataSourceParamValue);
	}

	public Smart3DDataSourceFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Smart3DDataSourceFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断一个数据源是否存在
	 * @param pDataSource 数据源对象
	 */
	public boolean existDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		return super.existDataSource_NoVirtual(pDataSource);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createFromXML_EVString(long pNativeObject, String method);
	native protected void register_openDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_openDataSource_IPropertySet(long pNativeObject, String method);
	native protected void register_createDataSource_EVString_EVString(long pNativeObject, String method);
	native protected void register_createDataSource_IPropertySet(long pNativeObject, String method);
	native protected void register_destroyDataSource_IDataSource(long pNativeObject, String method);
	native protected void register_existDataSource_IDataSource(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createFromXML_EVString(this.nativeObject.pointer, "createFromXML_EVString_callback");
			this.register_openDataSource_EVString_EVString(this.nativeObject.pointer, "openDataSource_EVString_EVString_callback");
			this.register_openDataSource_IPropertySet(this.nativeObject.pointer, "openDataSource_IPropertySet_callback");
			this.register_createDataSource_EVString_EVString(this.nativeObject.pointer, "createDataSource_EVString_EVString_callback");
			this.register_createDataSource_IPropertySet(this.nativeObject.pointer, "createDataSource_IPropertySet_callback");
			this.register_destroyDataSource_IDataSource(this.nativeObject.pointer, "destroyDataSource_IDataSource_callback");
			this.register_existDataSource_IDataSource(this.nativeObject.pointer, "existDataSource_IDataSource_callback");
		}
	}
	
	public static Smart3DDataSourceFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Smart3DDataSourceFactory obj = null;
 		if(baseObj instanceof Smart3DDataSourceFactory)
		{
			obj = (Smart3DDataSourceFactory)baseObj;
		} else {
			obj = new Smart3DDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSmart3DDataSourceFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
