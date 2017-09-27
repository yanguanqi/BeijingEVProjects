package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.utilities.*;
import com.earthview.world.core.*;

public class DataSourceURLStruct extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct", new DataSourceURLStructClassFactory());
	}

	public DataSourceURLStruct() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceURLStruct", null);
	}

	native private String get_sourcetype_void(long pNativeObject);
	public String get_sourcetype()
	{
		String jniValue = get_sourcetype_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sourcetype_EVString (long pNativeObject, String value);
	public void set_sourcetype(String sourcetype)
	{
		String sourcetypeParamValue = sourcetype;
		
		set_sourcetype_EVString(this.nativeObject.pointer, sourcetypeParamValue);
	}
	
	native private String get_connectpath_void(long pNativeObject);
	public String get_connectpath()
	{
		String jniValue = get_connectpath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_connectpath_EVString (long pNativeObject, String value);
	public void set_connectpath(String connectpath)
	{
		String connectpathParamValue = connectpath;
		
		set_connectpath_EVString(this.nativeObject.pointer, connectpathParamValue);
	}
	
	native private String get_username_void(long pNativeObject);
	public String get_username()
	{
		String jniValue = get_username_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_username_EVString (long pNativeObject, String value);
	public void set_username(String username)
	{
		String usernameParamValue = username;
		
		set_username_EVString(this.nativeObject.pointer, usernameParamValue);
	}
	
	native private String get_password_void(long pNativeObject);
	public String get_password()
	{
		String jniValue = get_password_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_password_EVString (long pNativeObject, String value);
	public void set_password(String password)
	{
		String passwordParamValue = password;
		
		set_password_EVString(this.nativeObject.pointer, passwordParamValue);
	}
	
	native private String get_sourcename_void(long pNativeObject);
	public String get_sourcename()
	{
		String jniValue = get_sourcename_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_sourcename_EVString (long pNativeObject, String value);
	public void set_sourcename(String sourcename)
	{
		String sourcenameParamValue = sourcename;
		
		set_sourcename_EVString(this.nativeObject.pointer, sourcenameParamValue);
	}
	
	native private String get_ip_void(long pNativeObject);
	public String get_ip()
	{
		String jniValue = get_ip_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ip_EVString (long pNativeObject, String value);
	public void set_ip(String ip)
	{
		String ipParamValue = ip;
		
		set_ip_EVString(this.nativeObject.pointer, ipParamValue);
	}
	
	native private String get_port_void(long pNativeObject);
	public String get_port()
	{
		String jniValue = get_port_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_port_EVString (long pNativeObject, String value);
	public void set_port(String port)
	{
		String portParamValue = port;
		
		set_port_EVString(this.nativeObject.pointer, portParamValue);
	}
	
	native private String get_dbtype_void(long pNativeObject);
	public String get_dbtype()
	{
		String jniValue = get_dbtype_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dbtype_EVString (long pNativeObject, String value);
	public void set_dbtype(String dbtype)
	{
		String dbtypeParamValue = dbtype;
		
		set_dbtype_EVString(this.nativeObject.pointer, dbtypeParamValue);
	}
	
	native private String get_serviceplugin_void(long pNativeObject);
	public String get_serviceplugin()
	{
		String jniValue = get_serviceplugin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_serviceplugin_EVString (long pNativeObject, String value);
	public void set_serviceplugin(String serviceplugin)
	{
		String servicepluginParamValue = serviceplugin;
		
		set_serviceplugin_EVString(this.nativeObject.pointer, servicepluginParamValue);
	}
	
	native private int get_serverType_void(long pNativeObject);
	public com.earthview.world.utilities.WebServerType get_serverType()
	{
		int jniValue = get_serverType_void(this.nativeObject.pointer);
		
		return com.earthview.world.utilities.WebServerType.toEnum(jniValue);
	}
	
	native private void set_serverType_WebServerType (long pNativeObject, int value);
	public void set_serverType(com.earthview.world.utilities.WebServerType serverType)
	{
		int serverTypeParamValue = serverType.getValue();
		
		set_serverType_WebServerType(this.nativeObject.pointer, serverTypeParamValue);
	}
	
	public DataSourceURLStruct(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceURLStruct(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceURLStruct fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceURLStruct obj = null;
 		if(baseObj instanceof DataSourceURLStruct)
		{
			obj = (DataSourceURLStruct)baseObj;
		} else {
			obj = new DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceURLStruct");
			obj.increaseCast();
		}

		return obj;
	}
}
