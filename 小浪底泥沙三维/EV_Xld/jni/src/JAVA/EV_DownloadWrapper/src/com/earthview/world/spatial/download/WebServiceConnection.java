package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebServiceConnection extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebServiceConnection", new WebServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCWebServiceConnectionProxy", new WebServiceConnectionClassFactory());
	}

	public WebServiceConnection(StringPointer name, StringPointer url, StringPointer pluginFile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		BasePointer pluginFilePtr = new BasePointer(pluginFile);
		list.add("pluginFile", pluginFilePtr.get());
		Create("JCWebServiceConnectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.WebServiceConnection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取web连接名称
	 * @param  
	 * @param name 
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUrl_void(long pNativeObject);
	/**
	 * 获取服务端rul
	 * @param url 
	 * @param  
	 */
	public StringPointer getUrl()
	{
		long returnValue = getUrl_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getPluginFile_void(long pNativeObject);
	/**
	 * 获取设置的插件文件
	 * @param  
	 */
	public StringPointer getPluginFile()
	{
		long returnValue = getPluginFile_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setConnectionImp_ConnectionImp_callback(long ref_pImp)
	{
		com.earthview.world.spatial.download.ConnectionImp ref_pImpParamValue = (ref_pImp == 0L ? null : new com.earthview.world.spatial.download.ConnectionImp(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pImpParamValue != null)
		{
		ref_pImpParamValue.setDelegate(true);
		ref_pImpParamValue.setInstancePointer(new InstancePointer(ref_pImp));
		IClassFactory ref_pImpParamValueClassFactory = GlobalClassFactoryMap.get(ref_pImpParamValue.getCppInstanceTypeName());
		if (ref_pImpParamValueClassFactory != null)
		{
			ref_pImpParamValue.setDelegate(true);
			ref_pImpParamValue = (com.earthview.world.spatial.download.ConnectionImp)ref_pImpParamValueClassFactory.create();
			ref_pImpParamValue.setDelegate(true);
			ref_pImpParamValue.setInstancePointer(new InstancePointer(ref_pImp));
		}
		}
		setConnectionImp(ref_pImpParamValue);
	}

	native private void setConnectionImp_ConnectionImp(long pNativeObject, long ref_pImp);
	/**
	 * 设置网络下载插件
	 * @param  
	 */
	public void setConnectionImp(com.earthview.world.spatial.download.ConnectionImp ref_pImp)
	{
		long ref_pImpParamValue = (ref_pImp == null ? 0L : ref_pImp.nativeObject.pointer);
		setConnectionImp_ConnectionImp(this.nativeObject.pointer, ref_pImpParamValue);
	}
	native private void setConnectionImp_ConnectionImp_NoVirtual(long pNativeObject, long ref_pImp);
	protected void setConnectionImp_NoVirtual(com.earthview.world.spatial.download.ConnectionImp ref_pImp)
	{
		long ref_pImpParamValue = (ref_pImp == null ? 0L : ref_pImp.nativeObject.pointer);
		setConnectionImp_ConnectionImp_NoVirtual(this.nativeObject.pointer, ref_pImpParamValue);
	}

	protected  void closeConnect_void_callback()
	{
		closeConnect();
	}

	native private void closeConnect_void(long pNativeObject);
	/**
	 * 断开与web服务器的连接
	 * @param  
	 */
	public void closeConnect()
	{
		closeConnect_void(this.nativeObject.pointer);
	}
	native private void closeConnect_void_NoVirtual(long pNativeObject);
	protected void closeConnect_NoVirtual()
	{
		closeConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void openConnect_void_callback()
	{
		openConnect();
	}

	native private void openConnect_void(long pNativeObject);
	/**
	 * 连接web服务器
	 * @param  
	 */
	public void openConnect()
	{
		openConnect_void(this.nativeObject.pointer);
	}
	native private void openConnect_void_NoVirtual(long pNativeObject);
	protected void openConnect_NoVirtual()
	{
		openConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void reConnect_void(long pNativeObject);
	/**
	 * 重新连接web服务器
	 * @param  
	 */
	public void reConnect()
	{
		reConnect_void(this.nativeObject.pointer);
	}
	native private void setConnectAble_ev_bool(long pNativeObject, boolean connectAble);
	/**
	 * 
	 * @param  
	 */
	public void setConnectAble(boolean connectAble)
	{
		boolean connectAbleParamValue = connectAble;
		setConnectAble_ev_bool(this.nativeObject.pointer, connectAbleParamValue);
	}
	native private void setConnected_ev_bool(long pNativeObject, boolean connected);
	/**
	 * 
	 * @param  
	 */
	public void setConnected(boolean connected)
	{
		boolean connectedParamValue = connected;
		setConnected_ev_bool(this.nativeObject.pointer, connectedParamValue);
	}
	native private boolean isConnectAble_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean isConnectAble()
	{
		boolean returnValue = isConnectAble_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long convertSendStringCode_EVString(long sendStr);
	/**
	 * 转换发送字符串编码
	 * @param  
	 */
	public static StringPointer convertSendStringCode(StringPointer sendStr)
	{
		long sendStrParamValue = sendStr.nativeObject.pointer;
		long returnValue = convertSendStringCode_EVString(sendStrParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static long convertRecvStringCode_EVString(long recvStr);
	/**
	 * 
	 * @param  
	 */
	public static StringPointer convertRecvStringCode(StringPointer recvStr)
	{
		long recvStrParamValue = recvStr.nativeObject.pointer;
		long returnValue = convertRecvStringCode_EVString(recvStrParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private static String host_EVString(String url);
	/**
	 * 
	 * @param  
	 */
	public static String host(String url)
	{
		String urlParamValue = url;
		String returnValue = host_EVString(urlParamValue);
		return returnValue;
	}
	public WebServiceConnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebServiceConnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setConnectionImp_ConnectionImp(long pNativeObject, String method);
	native protected void register_closeConnect_void(long pNativeObject, String method);
	native protected void register_openConnect_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setConnectionImp_ConnectionImp(this.nativeObject.pointer, "setConnectionImp_ConnectionImp_callback");
			this.register_closeConnect_void(this.nativeObject.pointer, "closeConnect_void_callback");
			this.register_openConnect_void(this.nativeObject.pointer, "openConnect_void_callback");
		}
	}
	
	public static WebServiceConnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebServiceConnection obj = null;
 		if(baseObj instanceof WebServiceConnection)
		{
			obj = (WebServiceConnection)baseObj;
		} else {
			obj = new WebServiceConnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebServiceConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
