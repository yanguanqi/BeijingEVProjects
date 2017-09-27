package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ogcwmsdatasourceserverfactory extends com.earthview.world.spatial.geodataset.Idatasourcefactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSDataSourceServerFactory", new OgcwmsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCWMSDataSourceServerFactoryProxy", new OgcwmsdatasourceserverfactoryClassFactory());
	}

	native private boolean close_IDataSource(long pNativeObject, long server);
	/**
	 * 关闭服务
	 * @param server 所要关闭的服务
	 * @return 成功返回true，否则返回false
	 */
	public boolean close(com.earthview.world.spatial.geodataset.Idatasource server)
	{
		long serverParamValue = (server == null ? 0L : server.nativeObject.pointer);
		boolean returnValue = close_IDataSource(this.nativeObject.pointer, serverParamValue);
		return returnValue;
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据源工厂类型
	 * @return DST_WEBSERVER_EARTHVIEW_SERVER
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
	 * 从xml还原数据源
	 * @param xml xml描述
	 * @return 数据源对象指针，需用factory释放
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

	protected  long open_CServerConnection_callback(long connection)
	{
		com.earthview.world.spatial.ServerConnection connectionParamValue = (connection == 0L ? null : new com.earthview.world.spatial.ServerConnection(CreatedWhenConstruct.CWC_NotToCreate));
		if(connectionParamValue != null)
		{
		connectionParamValue.setDelegate(true);
		connectionParamValue.setInstancePointer(new InstancePointer(connection));
		IClassFactory connectionParamValueClassFactory = GlobalClassFactoryMap.get(connectionParamValue.getCppInstanceTypeName());
		if (connectionParamValueClassFactory != null)
		{
			connectionParamValue.setDelegate(true);
			connectionParamValue = (com.earthview.world.spatial.ServerConnection)connectionParamValueClassFactory.create();
			connectionParamValue.setDelegate(true);
			connectionParamValue.setInstancePointer(new InstancePointer(connection));
		}
		}
		com.earthview.world.spatial.geodataset.Idatasource returnValue = open(connectionParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long open_CServerConnection(long pNativeObject, long connection);
	/**
	 * /打开一个请求的服务/
	 * @param connection 连接参数
	 * @return 请求的服务对象指针，需用factory释放
	 */
	public com.earthview.world.spatial.geodataset.Idatasource open(com.earthview.world.spatial.ServerConnection connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = open_CServerConnection(this.nativeObject.pointer, connectionParamValue);
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
	native private long open_CServerConnection_NoVirtual(long pNativeObject, long connection);
	protected com.earthview.world.spatial.geodataset.Idatasource open_NoVirtual(com.earthview.world.spatial.ServerConnection connection)
	{
		long connectionParamValue = (connection == null ? 0L : connection.nativeObject.pointer);
		long returnValue = open_CServerConnection_NoVirtual(this.nativeObject.pointer, connectionParamValue);
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
	 * 打开一个请求的服务
	 * @param connection 连接参数（全部小写）：urlhttp://...+端口；servername；type(用整形对应的字符串标识)；username；password
	 * @return 请求的服务对象指针，需用factory释放
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

	native private static long getInstance_void();
	/**
	 * 获取对象指针
	 * @return 对象指针
	 */
	public static com.earthview.world.spatial.Ogcwmsdatasourceserverfactory getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsdatasourceserverfactory __returnValue = new com.earthview.world.spatial.Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSDataSourceServerFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsdatasourceserverfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSDataSourceServerFactory");
		}
		return __returnValue;
	}
	public Ogcwmsdatasourceserverfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmsdatasourceserverfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 打开一个存在的数据源
	 * @param path 路径
	 * @param fileName 文件名称
	 * @return 数据源对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasource openDataSource(String path, String fileName)
	{
		return super.openDataSource_NoVirtual(path, fileName);
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
	 * @param path 路径
	 * @param fileName 文件名称
	 * @return 数据源对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasource createDataSource(String path, String fileName)
	{
		return super.createDataSource_NoVirtual(path, fileName);
	}
	/**
	 * 判断一个数据源是否存在
	 * @param pDataSource 数据源对象
	 */
	public boolean existDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		return super.existDataSource_NoVirtual(pDataSource);
	}
	
	native protected void register_open_CServerConnection(long pNativeObject, String method);
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
			this.register_open_CServerConnection(this.nativeObject.pointer, "open_CServerConnection_callback");
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
	
	public static Ogcwmsdatasourceserverfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmsdatasourceserverfactory obj = null;
 		if(baseObj instanceof Ogcwmsdatasourceserverfactory)
		{
			obj = (Ogcwmsdatasourceserverfactory)baseObj;
		} else {
			obj = new Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMSDataSourceServerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
