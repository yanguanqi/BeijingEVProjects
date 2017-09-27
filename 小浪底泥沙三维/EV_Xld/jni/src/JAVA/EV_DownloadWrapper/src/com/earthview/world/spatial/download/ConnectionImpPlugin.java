package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class ConnectionImpPlugin extends com.earthview.world.core.Plugin {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImpPlugin", new ConnectionImpPluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JConnectionImpPluginProxy", new ConnectionImpPluginClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public ConnectionImpPlugin(String host) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer hostPtr = new BasePointer(host);
		list.add("host", hostPtr.get());
		Create("JConnectionImpPluginProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.ConnectionImpPlugin".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getHost_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer getHost()
	{
		long returnValue = getHost_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPluginPath_EVString(long pNativeObject, String pluginPaht);
	/**
	 * 
	 * @param  
	 */
	public void setPluginPath(String pluginPaht)
	{
		String pluginPahtParamValue = pluginPaht;
		setPluginPath_EVString(this.nativeObject.pointer, pluginPahtParamValue);
	}
	native private long getPluginPath_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer getPluginPath()
	{
		long returnValue = getPluginPath_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void install_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void install()
	{
		install_void(this.nativeObject.pointer);
	}
	native private void install_void_NoVirtual(long pNativeObject);
	protected void install_NoVirtual()
	{
		install_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void initialise_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void shutdown_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void uninstall_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void uninstall()
	{
		uninstall_void(this.nativeObject.pointer);
	}
	native private void uninstall_void_NoVirtual(long pNativeObject);
	protected void uninstall_NoVirtual()
	{
		uninstall_void_NoVirtual(this.nativeObject.pointer);
	}

	native private int connectionImpCount_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int connectionImpCount()
	{
		int returnValue = connectionImpCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  long createConnectionImp_ev_int32_callback(int type)
	{
		int typeParamValue = type;
		com.earthview.world.spatial.download.ConnectionImp returnValue = createConnectionImp(typeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createConnectionImp_ev_int32(long pNativeObject, int type);
	/**
	 * 这里子类需要new一个对象返回
	 * @param  
	 */
	public com.earthview.world.spatial.download.ConnectionImp createConnectionImp(int type)
	{
		int typeParamValue = type;
		long returnValue = createConnectionImp_ev_int32(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.download.ConnectionImp __returnValue = new com.earthview.world.spatial.download.ConnectionImp(CreatedWhenConstruct.CWC_NotToCreate, "ConnectionImp");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ConnectionImp)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConnectionImp");
		}
		return __returnValue;
	}
	native private long createConnectionImp_ev_int32_NoVirtual(long pNativeObject, int type);
	protected com.earthview.world.spatial.download.ConnectionImp createConnectionImp_NoVirtual(int type)
	{
		int typeParamValue = type;
		long returnValue = createConnectionImp_ev_int32_NoVirtual(this.nativeObject.pointer, typeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.download.ConnectionImp __returnValue = new com.earthview.world.spatial.download.ConnectionImp(CreatedWhenConstruct.CWC_NotToCreate, "ConnectionImp");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ConnectionImp)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConnectionImp");
		}
		return __returnValue;
	}

	protected  boolean useMetadataServiceConnectState_void_callback()
	{
		boolean returnValue = useMetadataServiceConnectState();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean useMetadataServiceConnectState_void(long pNativeObject);
	public boolean useMetadataServiceConnectState()
	{
		boolean returnValue = useMetadataServiceConnectState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean useMetadataServiceConnectState_void_NoVirtual(long pNativeObject);
	protected boolean useMetadataServiceConnectState_NoVirtual()
	{
		boolean returnValue = useMetadataServiceConnectState_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMetadataServiceConnectState_ev_bool_callback(boolean connectable)
	{
		boolean connectableParamValue = connectable;
		setMetadataServiceConnectState(connectableParamValue);
	}

	native private void setMetadataServiceConnectState_ev_bool(long pNativeObject, boolean connectable);
	public void setMetadataServiceConnectState(boolean connectable)
	{
		boolean connectableParamValue = connectable;
		setMetadataServiceConnectState_ev_bool(this.nativeObject.pointer, connectableParamValue);
	}
	native private void setMetadataServiceConnectState_ev_bool_NoVirtual(long pNativeObject, boolean connectable);
	protected void setMetadataServiceConnectState_NoVirtual(boolean connectable)
	{
		boolean connectableParamValue = connectable;
		setMetadataServiceConnectState_ev_bool_NoVirtual(this.nativeObject.pointer, connectableParamValue);
	}

	protected  boolean getMetadataServiceConnectState_void_callback()
	{
		boolean returnValue = getMetadataServiceConnectState();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getMetadataServiceConnectState_void(long pNativeObject);
	public boolean getMetadataServiceConnectState()
	{
		boolean returnValue = getMetadataServiceConnectState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getMetadataServiceConnectState_void_NoVirtual(long pNativeObject);
	protected boolean getMetadataServiceConnectState_NoVirtual()
	{
		boolean returnValue = getMetadataServiceConnectState_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static void releaseConnectionImp_ConnectionImp(long pConnectionImp);
	/**
	 * 释放createConnectionImp()函数产生的对象
	 * @param  
	 */
	public static void releaseConnectionImp(com.earthview.world.spatial.download.ConnectionImp pConnectionImp)
	{
		long pConnectionImpParamValue = (pConnectionImp == null ? 0L : pConnectionImp.nativeObject.pointer);
		releaseConnectionImp_ConnectionImp(pConnectionImpParamValue);
	}
	public ConnectionImpPlugin(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConnectionImpPlugin(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	
	native protected void register_createConnectionImp_ev_int32(long pNativeObject, String method);
	native protected void register_useMetadataServiceConnectState_void(long pNativeObject, String method);
	native protected void register_setMetadataServiceConnectState_ev_bool(long pNativeObject, String method);
	native protected void register_getMetadataServiceConnectState_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_install_void(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_uninstall_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createConnectionImp_ev_int32(this.nativeObject.pointer, "createConnectionImp_ev_int32_callback");
			this.register_useMetadataServiceConnectState_void(this.nativeObject.pointer, "useMetadataServiceConnectState_void_callback");
			this.register_setMetadataServiceConnectState_ev_bool(this.nativeObject.pointer, "setMetadataServiceConnectState_ev_bool_callback");
			this.register_getMetadataServiceConnectState_void(this.nativeObject.pointer, "getMetadataServiceConnectState_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_install_void(this.nativeObject.pointer, "install_void_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_uninstall_void(this.nativeObject.pointer, "uninstall_void_callback");
		}
	}
	
	public static ConnectionImpPlugin fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConnectionImpPlugin obj = null;
 		if(baseObj instanceof ConnectionImpPlugin)
		{
			obj = (ConnectionImpPlugin)baseObj;
		} else {
			obj = new ConnectionImpPlugin(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConnectionImpPlugin");
			obj.increaseCast();
		}

		return obj;
	}
}
