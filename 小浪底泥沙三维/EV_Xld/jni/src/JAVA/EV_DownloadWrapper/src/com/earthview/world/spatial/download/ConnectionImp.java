package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class ConnectionImp extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImp", new ConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JConnectionImpProxy", new ConnectionImpClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public ConnectionImp() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JConnectionImpProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.ConnectionImp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setWebServiceConnection_CWebServiceConnection(long pNativeObject, long pWebServiceConnection);
	/**
	 * 
	 * @param  
	 */
	public void setWebServiceConnection(com.earthview.world.spatial.download.WebServiceConnection pWebServiceConnection)
	{
		long pWebServiceConnectionParamValue = (pWebServiceConnection == null ? 0L : pWebServiceConnection.nativeObject.pointer);
		setWebServiceConnection_CWebServiceConnection(this.nativeObject.pointer, pWebServiceConnectionParamValue);
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
	protected  boolean openConnection_void_callback()
	{
		boolean returnValue = openConnection();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean openConnection_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean openConnection()
	{
		boolean returnValue = openConnection_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean openConnection_void_NoVirtual(long pNativeObject);
	protected boolean openConnection_NoVirtual()
	{
		boolean returnValue = openConnection_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean closeConnection_void_callback()
	{
		boolean returnValue = closeConnection();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean closeConnection_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean closeConnection()
	{
		boolean returnValue = closeConnection_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean closeConnection_void_NoVirtual(long pNativeObject);
	protected boolean closeConnection_NoVirtual()
	{
		boolean returnValue = closeConnection_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setConnectTimeout_ev_int32_callback(int timeout)
	{
		int timeoutParamValue = timeout;
		setConnectTimeout(timeoutParamValue);
	}

	native private void setConnectTimeout_ev_int32(long pNativeObject, int timeout);
	/**
	 * 
	 * @param  
	 */
	public void setConnectTimeout(int timeout)
	{
		int timeoutParamValue = timeout;
		setConnectTimeout_ev_int32(this.nativeObject.pointer, timeoutParamValue);
	}
	native private void setConnectTimeout_ev_int32_NoVirtual(long pNativeObject, int timeout);
	protected void setConnectTimeout_NoVirtual(int timeout)
	{
		int timeoutParamValue = timeout;
		setConnectTimeout_ev_int32_NoVirtual(this.nativeObject.pointer, timeoutParamValue);
	}

	public ConnectionImp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConnectionImp(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_openConnection_void(long pNativeObject, String method);
	native protected void register_closeConnection_void(long pNativeObject, String method);
	native protected void register_setConnectTimeout_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_openConnection_void(this.nativeObject.pointer, "openConnection_void_callback");
			this.register_closeConnection_void(this.nativeObject.pointer, "closeConnection_void_callback");
			this.register_setConnectTimeout_ev_int32(this.nativeObject.pointer, "setConnectTimeout_ev_int32_callback");
		}
	}
	
	public static ConnectionImp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConnectionImp obj = null;
 		if(baseObj instanceof ConnectionImp)
		{
			obj = (ConnectionImp)baseObj;
		} else {
			obj = new ConnectionImp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConnectionImp");
			obj.increaseCast();
		}

		return obj;
	}
}
