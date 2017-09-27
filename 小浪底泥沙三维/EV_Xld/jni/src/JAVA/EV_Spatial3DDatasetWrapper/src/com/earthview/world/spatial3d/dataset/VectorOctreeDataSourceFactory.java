package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataSourceFactory extends com.earthview.world.spatial.geodataset.Idatasourcefactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory", new VectorOctreeDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataSourceFactoryProxy", new VectorOctreeDataSourceFactoryClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回单例的数据源工厂句柄
	 * @return EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory，失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactory __returnValue = new com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate, "CVectorOctreeDataSourceFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorOctreeDataSourceFactory");
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
	 * 打开本地数据库版的数据源
	 * @param path 数据库文件路径
	 * @param fileName 数据库名称
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源工厂类型
	 * @param  
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

	native private long createDataSource_EVString_EVString(long pNativeObject, String path, String fileName);
	/**
	 * 创建数据源
	 * @param path 数据源路径
	 * @param fileName 数据源文件名称
	 * @return 数据源对象
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

	public VectorOctreeDataSourceFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorOctreeDataSourceFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 从XML创建数据源对象
	 * @param xml xml字符串
	 * @return 数据源对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createFromXML(String xml)
	{
		return super.createFromXML_NoVirtual(xml);
	}
	/**
	 * 打开一个存在的数据源
	 * @param connection 连接字符对
	 * @return 数据源对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasource openDataSource(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		return super.openDataSource_NoVirtual(connection);
	}
	/**
	 * 创建一个数据源
	 * @param connection 连接字符对
	 * @return 数据源对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createDataSource(com.earthview.world.spatial.geodataset.Ipropertyset connection)
	{
		return super.createDataSource_NoVirtual(connection);
	}
	/**
	 * 销毁一个数据源对象
	 * @param pDataSource 数据源对象
	 */
	public void destroyDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		super.destroyDataSource_NoVirtual(pDataSource);
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
	
	public static VectorOctreeDataSourceFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorOctreeDataSourceFactory obj = null;
 		if(baseObj instanceof VectorOctreeDataSourceFactory)
		{
			obj = (VectorOctreeDataSourceFactory)baseObj;
		} else {
			obj = new VectorOctreeDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorOctreeDataSourceFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
