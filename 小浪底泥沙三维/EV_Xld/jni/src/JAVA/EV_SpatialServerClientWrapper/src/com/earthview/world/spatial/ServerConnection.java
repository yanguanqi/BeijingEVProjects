package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间服务器连接
 */
public class ServerConnection extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerConnection", new ServerConnectionClassFactory());
	}

	native private long getURL_void(long pNativeObject);
	/**
	 * 获取服务器地址
	 * @return 服务器地址
	 */
	public StringPointer getURL()
	{
		long returnValue = getURL_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUserName_void(long pNativeObject);
	/**
	 * 获取用户名
	 * @return 用户名
	 */
	public StringPointer getUserName()
	{
		long returnValue = getUserName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getConnectionName_void(long pNativeObject);
	/**
	 * 获取连接名称
	 * @return 连接名称
	 */
	public StringPointer getConnectionName()
	{
		long returnValue = getConnectionName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getServerPluginFile_void(long pNativeObject);
	/**
	 * 获取插件文件名称
	 * @return 插件文件名称
	 */
	public StringPointer getServerPluginFile()
	{
		long returnValue = getServerPluginFile_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取服务类型
	 * @return 服务类型
	 */
	public com.earthview.world.spatial.EVServerConnectionType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVServerConnectionType.toEnum(returnValue);
	}
	native private void setURL_EVString(long pNativeObject, String url);
	/**
	 * 设置服务器地址
	 * @param url 服务器地址
	 */
	public void setURL(String url)
	{
		String urlParamValue = url;
		setURL_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private void setUserName_EVString(long pNativeObject, String name);
	/**
	 * 设置用户名
	 * @param name 用户名
	 */
	public void setUserName(String name)
	{
		String nameParamValue = name;
		setUserName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setPassword_EVString(long pNativeObject, String password);
	/**
	 * 设置密码
	 * @param password 密码
	 */
	public void setPassword(String password)
	{
		String passwordParamValue = password;
		setPassword_EVString(this.nativeObject.pointer, passwordParamValue);
	}
	native private void setConnectionName_EVString(long pNativeObject, String name);
	/**
	 * 设置连接名
	 * @param name 连接名
	 */
	public void setConnectionName(String name)
	{
		String nameParamValue = name;
		setConnectionName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setServerPluginFile_EVString(long pNativeObject, String pluginfile);
	/**
	 * 设置服务插件文件
	 * @param pluginfile 插件文件
	 */
	public void setServerPluginFile(String pluginfile)
	{
		String pluginfileParamValue = pluginfile;
		setServerPluginFile_EVString(this.nativeObject.pointer, pluginfileParamValue);
	}
	public ServerConnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerConnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerConnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerConnection obj = null;
 		if(baseObj instanceof ServerConnection)
		{
			obj = (ServerConnection)baseObj;
		} else {
			obj = new ServerConnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
