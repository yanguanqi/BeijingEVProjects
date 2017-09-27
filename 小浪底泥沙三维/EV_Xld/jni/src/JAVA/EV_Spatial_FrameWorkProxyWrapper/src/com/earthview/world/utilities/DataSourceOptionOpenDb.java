package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionOpenDb extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Open_DB", new DataSourceOptionOpenDbClassFactory());
	}

	native private long sqlite_EVString(long pNativeObject, String filepath);
	/**
	 * 设置一个打开sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
	 */
	public com.earthview.world.utilities.DataSourceOption sqlite(String filepath)
	{
		String filepathParamValue = filepath;
		long returnValue = sqlite_EVString(this.nativeObject.pointer, filepathParamValue);
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
	native private long odbc_EVString_int_EVString_EVString(long pNativeObject, String ip, int port, String user, String password);
	/**
	 * 设置一个打开odbc数据源的选项，具体请见AppDataSource::openDataSource()。
	 * @param ip 服务器IP地址。
	 * @param port 服务器端口。
	 * @param user 数据库用户名。
	 * @param password 数据库密码。
	 * @param ver SQLServer数据库的版本。
	 */
	public com.earthview.world.utilities.DataSourceOption odbc(String ip, int port, String user, String password)
	{
		String ipParamValue = ip;
		int portParamValue = port;
		String userParamValue = user;
		String passwordParamValue = password;
		long returnValue = odbc_EVString_int_EVString_EVString(this.nativeObject.pointer, ipParamValue, portParamValue, userParamValue, passwordParamValue);
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
	native private long oracle_EVString_int_EVString_EVString(long pNativeObject, String ip, int port, String user, String password);
	/**
	 * 设置一个打开oracle数据源的选项，具体请见AppDataSource::openDataSource()。
	 * @param ip 服务器IP地址。
	 * @param port 服务器端口。
	 * @param user 数据库用户名。
	 * @param password 数据库密码。
	 */
	public com.earthview.world.utilities.DataSourceOption oracle(String ip, int port, String user, String password)
	{
		String ipParamValue = ip;
		int portParamValue = port;
		String userParamValue = user;
		String passwordParamValue = password;
		long returnValue = oracle_EVString_int_EVString_EVString(this.nativeObject.pointer, ipParamValue, portParamValue, userParamValue, passwordParamValue);
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
	public DataSourceOptionOpenDb(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceOptionOpenDb(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceOptionOpenDb fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceOptionOpenDb obj = null;
 		if(baseObj instanceof DataSourceOptionOpenDb)
		{
			obj = (DataSourceOptionOpenDb)baseObj;
		} else {
			obj = new DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceOption_Open_DB");
			obj.increaseCast();
		}

		return obj;
	}
}
