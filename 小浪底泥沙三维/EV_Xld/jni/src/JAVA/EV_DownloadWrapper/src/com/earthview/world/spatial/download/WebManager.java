package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class WebManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebManager", new WebManagerClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public WebManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWebManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 
	 * @param  
	 */
	public static com.earthview.world.spatial.download.WebManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial.download.WebManager __returnValue = new com.earthview.world.spatial.download.WebManager(CreatedWhenConstruct.CWC_NotToCreate, "CWebManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.WebManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 
	 * @param  
	 */
	public static com.earthview.world.spatial.download.WebManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.download.WebManager __returnValue = new com.earthview.world.spatial.download.WebManager(CreatedWhenConstruct.CWC_NotToCreate, "CWebManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.WebManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebManager");
		}
		return __returnValue;
	}
	native private long getWebServiceConnection_EVString_EVString(long pNativeObject, String name, String url);
	/**
	 * 获取一个web服务客户端连接
	 * @param name 客户端连接名称
	 */
	public com.earthview.world.spatial.download.WebServiceConnection getWebServiceConnection(String name, String url)
	{
		String nameParamValue = name;
		String urlParamValue = url;
		long returnValue = getWebServiceConnection_EVString_EVString(this.nativeObject.pointer, nameParamValue, urlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.download.WebServiceConnection __returnValue = new com.earthview.world.spatial.download.WebServiceConnection(CreatedWhenConstruct.CWC_NotToCreate, "CWebServiceConnection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.WebServiceConnection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebServiceConnection");
		}
		return __returnValue;
	}
	native private void setConnectOutTime_ev_int32(long pNativeObject, int outtime);
	/**
	 * 设置连接超时时间,单位秒
	 * @param  
	 */
	public void setConnectOutTime(int outtime)
	{
		int outtimeParamValue = outtime;
		setConnectOutTime_ev_int32(this.nativeObject.pointer, outtimeParamValue);
	}
	native private int getConnectOutTime_void(long pNativeObject);
	/**
	 * 获取网络连接超时时间
	 * @param  
	 */
	public int getConnectOutTime()
	{
		int returnValue = getConnectOutTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAutoConnectInterval_ev_int32(long pNativeObject, int interval);
	/**
	 * 
	 * @param  
	 */
	public void setAutoConnectInterval(int interval)
	{
		int intervalParamValue = interval;
		setAutoConnectInterval_ev_int32(this.nativeObject.pointer, intervalParamValue);
	}
	native private int getAutoConnectInterval_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int getAutoConnectInterval()
	{
		int returnValue = getAutoConnectInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean installServicePlugin_EVString_EVString(long pNativeObject, String pluginFile, String host);
	/**
	 * 安装网络服务插件
	 * @param pluginFile 插件完整路径
	 * @param host 插件对应的服务器（ip:port）
	 */
	public boolean installServicePlugin(String pluginFile, String host)
	{
		String pluginFileParamValue = pluginFile;
		String hostParamValue = host;
		boolean returnValue = installServicePlugin_EVString_EVString(this.nativeObject.pointer, pluginFileParamValue, hostParamValue);
		return returnValue;
	}
	native private long getConnectionImpPlugin_EVString_EVString(long pNativeObject, String pluginFile, String serverHost);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.download.ConnectionImpPlugin getConnectionImpPlugin(String pluginFile, String serverHost)
	{
		String pluginFileParamValue = pluginFile;
		String serverHostParamValue = serverHost;
		long returnValue = getConnectionImpPlugin_EVString_EVString(this.nativeObject.pointer, pluginFileParamValue, serverHostParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.download.ConnectionImpPlugin __returnValue = new com.earthview.world.spatial.download.ConnectionImpPlugin(CreatedWhenConstruct.CWC_NotToCreate, "ConnectionImpPlugin");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ConnectionImpPlugin)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConnectionImpPlugin");
		}
		return __returnValue;
	}
	native private String getPluginPath_EVString(long pNativeObject, String serverHost);
	/**
	 * 
	 * @param  
	 */
	public String getPluginPath(String serverHost)
	{
		String serverHostParamValue = serverHost;
		String returnValue = getPluginPath_EVString(this.nativeObject.pointer, serverHostParamValue);
		return returnValue;
	}
	native private long getPluginsInfo_EVString(long pNativeObject, String pluginsFolder);
	/**
	 * 获取插件信息
	 * @param pluginsFolder 存放插件的文件夹路径，如果为空，默认为执行程序当前路径
	 */
	public com.earthview.world.core.StringVector getPluginsInfo(String pluginsFolder)
	{
		String pluginsFolderParamValue = pluginsFolder;
		long returnValue = getPluginsInfo_EVString(this.nativeObject.pointer, pluginsFolderParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private String getPluginPathByPluginName_EVString(long pNativeObject, String pluginName);
	/**
	 * 
	 * @param  
	 */
	public String getPluginPathByPluginName(String pluginName)
	{
		String pluginNameParamValue = pluginName;
		String returnValue = getPluginPathByPluginName_EVString(this.nativeObject.pointer, pluginNameParamValue);
		return returnValue;
	}
	public WebManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WebManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebManager obj = null;
 		if(baseObj instanceof WebManager)
		{
			obj = (WebManager)baseObj;
		} else {
			obj = new WebManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebManager");
			obj.increaseCast();
		}

		return obj;
	}
}
