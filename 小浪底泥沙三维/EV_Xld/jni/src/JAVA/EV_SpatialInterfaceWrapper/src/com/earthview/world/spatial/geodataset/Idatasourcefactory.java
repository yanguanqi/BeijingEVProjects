package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据源工厂接口
 */
public class Idatasourcefactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IDataSourceFactory", new IdatasourcefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIDataSourceFactoryProxy", new IdatasourcefactoryClassFactory());
	}

	protected  int getType_void_callback()
	{
		int returnValue = getType();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 返回对应的数据源类型
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

	protected  long createFromXML_EVString_callback(String xml)
	{
		String xmlParamValue = xml;
		com.earthview.world.spatial.geodataset.Idatasource returnValue = createFromXML(xmlParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createFromXML_EVString(long pNativeObject, String xml);
	/**
	 * 从XML创建数据源对象
	 * @param xml xml字符串
	 * @return 数据源对象
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

	protected  long openDataSource_EVString_EVString_callback(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		com.earthview.world.spatial.geodataset.Idatasource returnValue = openDataSource(pathParamValue, fileNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long openDataSource_EVString_EVString(long pNativeObject, String path, String fileName);
	/**
	 * 打开一个存在的数据源
	 * @param path 路径
	 * @param fileName 文件名称
	 * @return 数据源对象
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

	protected  long openDataSource_IPropertySet_callback(long connection)
	{
		com.earthview.world.spatial.geodataset.Ipropertyset connectionParamValue = (connection == 0L ? null : new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate));
		if(connectionParamValue != null)
		{
		connectionParamValue.setDelegate(true);
		connectionParamValue.setInstancePointer(new InstancePointer(connection));
		IClassFactory connectionParamValueClassFactory = GlobalClassFactoryMap.get(connectionParamValue.getCppInstanceTypeName());
		if (connectionParamValueClassFactory != null)
		{
			connectionParamValue.setDelegate(true);
			connectionParamValue = (com.earthview.world.spatial.geodataset.Ipropertyset)connectionParamValueClassFactory.create();
			connectionParamValue.setDelegate(true);
			connectionParamValue.setInstancePointer(new InstancePointer(connection));
		}
		}
		com.earthview.world.spatial.geodataset.Idatasource returnValue = openDataSource(connectionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long openDataSource_IPropertySet(long pNativeObject, long connection);
	/**
	 * 打开一个存在的数据源
	 * @param connection 连接字符对
	 * @return 数据源对象
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

	protected  long createDataSource_EVString_EVString_callback(String path, String fileName)
	{
		String pathParamValue = path;
		String fileNameParamValue = fileName;
		com.earthview.world.spatial.geodataset.Idatasource returnValue = createDataSource(pathParamValue, fileNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createDataSource_EVString_EVString(long pNativeObject, String path, String fileName);
	/**
	 * 创建一个数据源
	 * @param path 路径
	 * @param fileName 文件名称
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

	protected  long createDataSource_IPropertySet_callback(long connection)
	{
		com.earthview.world.spatial.geodataset.Ipropertyset connectionParamValue = (connection == 0L ? null : new com.earthview.world.spatial.geodataset.Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate));
		if(connectionParamValue != null)
		{
		connectionParamValue.setDelegate(true);
		connectionParamValue.setInstancePointer(new InstancePointer(connection));
		IClassFactory connectionParamValueClassFactory = GlobalClassFactoryMap.get(connectionParamValue.getCppInstanceTypeName());
		if (connectionParamValueClassFactory != null)
		{
			connectionParamValue.setDelegate(true);
			connectionParamValue = (com.earthview.world.spatial.geodataset.Ipropertyset)connectionParamValueClassFactory.create();
			connectionParamValue.setDelegate(true);
			connectionParamValue.setInstancePointer(new InstancePointer(connection));
		}
		}
		com.earthview.world.spatial.geodataset.Idatasource returnValue = createDataSource(connectionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createDataSource_IPropertySet(long pNativeObject, long connection);
	/**
	 * 创建一个数据源
	 * @param connection 连接字符对
	 * @return 数据源对象
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

	protected  void destroyDataSource_IDataSource_callback(long pDataSource)
	{
		com.earthview.world.spatial.geodataset.Idatasource pDataSourceParamValue = (pDataSource == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDataSourceParamValue != null)
		{
		pDataSourceParamValue.setDelegate(true);
		pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		IClassFactory pDataSourceParamValueClassFactory = GlobalClassFactoryMap.get(pDataSourceParamValue.getCppInstanceTypeName());
		if (pDataSourceParamValueClassFactory != null)
		{
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue = (com.earthview.world.spatial.geodataset.Idatasource)pDataSourceParamValueClassFactory.create();
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		}
		}
		destroyDataSource(pDataSourceParamValue);
	}

	native private void destroyDataSource_IDataSource(long pNativeObject, long pDataSource);
	/**
	 * 销毁一个数据源对象
	 * @param pDataSource 数据源对象
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

	protected  boolean existDataSource_IDataSource_callback(long pDataSource)
	{
		com.earthview.world.spatial.geodataset.Idatasource pDataSourceParamValue = (pDataSource == 0L ? null : new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDataSourceParamValue != null)
		{
		pDataSourceParamValue.setDelegate(true);
		pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		IClassFactory pDataSourceParamValueClassFactory = GlobalClassFactoryMap.get(pDataSourceParamValue.getCppInstanceTypeName());
		if (pDataSourceParamValueClassFactory != null)
		{
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue = (com.earthview.world.spatial.geodataset.Idatasource)pDataSourceParamValueClassFactory.create();
			pDataSourceParamValue.setDelegate(true);
			pDataSourceParamValue.setInstancePointer(new InstancePointer(pDataSource));
		}
		}
		boolean returnValue = existDataSource(pDataSourceParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existDataSource_IDataSource(long pNativeObject, long pDataSource);
	/**
	 * 判断一个数据源是否存在
	 * @param pDataSource 数据源对象
	 */
	public boolean existDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		boolean returnValue = existDataSource_IDataSource(this.nativeObject.pointer, pDataSourceParamValue);
		return returnValue;
	}
	native private boolean existDataSource_IDataSource_NoVirtual(long pNativeObject, long pDataSource);
	protected boolean existDataSource_NoVirtual(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		boolean returnValue = existDataSource_IDataSource_NoVirtual(this.nativeObject.pointer, pDataSourceParamValue);
		return returnValue;
	}

	native private static void setDefaultDataSourcePath_EVString(String dsPath);
	///
	public static void setDefaultDataSourcePath(String dsPath)
	{
		String dsPathParamValue = dsPath;
		setDefaultDataSourcePath_EVString(dsPathParamValue);
	}
	native private static String getDefaultDataSourcePath_void();
	public static String getDefaultDataSourcePath()
	{
		String returnValue = getDefaultDataSourcePath_void();
		return returnValue;
	}
	public Idatasourcefactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idatasourcefactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Idatasourcefactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idatasourcefactory obj = null;
 		if(baseObj instanceof Idatasourcefactory)
		{
			obj = (Idatasourcefactory)baseObj;
		} else {
			obj = new Idatasourcefactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDataSourceFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
