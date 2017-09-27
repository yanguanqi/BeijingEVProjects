package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionOpen extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Open", new DataSourceOptionOpenClassFactory());
	}

	native private long db_void(long pNativeObject);
	/**
	 * 设置一个打开数据库数据源的选项，具体请见AppDataSource::openDataSource()。
	 */
	public com.earthview.world.utilities.DataSourceOptionOpenDb db()
	{
		long returnValue = db_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DataSourceOptionOpenDb __returnValue = new com.earthview.world.utilities.DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption_Open_DB");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOptionOpenDb)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption_Open_DB");
		}
		return __returnValue;
	}
	native private long file_EVString(long pNativeObject, String dirPath);
	/**
	 * 设置一个打开文件数据源的选项，具体请见AppDataSource::openDataSource()。
	 * @param dirPath 文件数据源的目录。需要注意的是打开文件数据源时指定别名无效，数据库的别名就是目录名。
	 */
	public com.earthview.world.utilities.DataSourceOption file(String dirPath)
	{
		String dirPathParamValue = dirPath;
		long returnValue = file_EVString(this.nativeObject.pointer, dirPathParamValue);
		com.earthview.world.utilities.DataSourceOption __returnValue = new com.earthview.world.utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption");
		}
		return __returnValue;
	}
	native private long web_EVString_int_EVString_EVString_EVString_WebServerType(long pNativeObject, String ip, int port, String user, String password, String pluginFile, int serverType);
	/**
	 * 设置一个打开网络数据源的选项，具体请见AppDataSource::openDataSource()。
	 * @param ip 服务器IP地址。
	 * @param port 服务器端口。
	 * @param user 数据库用户名。
	 * @param password 数据库密码。
	 * @param serverType 服务器类型，根据此类型使用相应的服务器访问插件。对于EV的服务器，就使用EarthViewServer即可。
	 */
	public com.earthview.world.utilities.DataSourceOption web(String ip, int port, String user, String password, String pluginFile, com.earthview.world.utilities.WebServerType serverType)
	{
		String ipParamValue = ip;
		int portParamValue = port;
		String userParamValue = user;
		String passwordParamValue = password;
		String pluginFileParamValue = pluginFile;
		int serverTypeParamValue = serverType.getValue();
		long returnValue = web_EVString_int_EVString_EVString_EVString_WebServerType(this.nativeObject.pointer, ipParamValue, portParamValue, userParamValue, passwordParamValue, pluginFileParamValue, serverTypeParamValue);
		com.earthview.world.utilities.DataSourceOption __returnValue = new com.earthview.world.utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption");
		}
		return __returnValue;
	}
	native private long web_EVString_EVString_EVString_EVString_WebServerType(long pNativeObject, String url, String user, String password, String pluginFile, int serverType);
	public com.earthview.world.utilities.DataSourceOption web(String url, String user, String password, String pluginFile, com.earthview.world.utilities.WebServerType serverType)
	{
		String urlParamValue = url;
		String userParamValue = user;
		String passwordParamValue = password;
		String pluginFileParamValue = pluginFile;
		int serverTypeParamValue = serverType.getValue();
		long returnValue = web_EVString_EVString_EVString_EVString_WebServerType(this.nativeObject.pointer, urlParamValue, userParamValue, passwordParamValue, pluginFileParamValue, serverTypeParamValue);
		com.earthview.world.utilities.DataSourceOption __returnValue = new com.earthview.world.utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption");
		}
		return __returnValue;
	}
	public DataSourceOptionOpen(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceOptionOpen(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceOptionOpen fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceOptionOpen obj = null;
 		if(baseObj instanceof DataSourceOptionOpen)
		{
			obj = (DataSourceOptionOpen)baseObj;
		} else {
			obj = new DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceOption_Open");
			obj.increaseCast();
		}

		return obj;
	}
}
