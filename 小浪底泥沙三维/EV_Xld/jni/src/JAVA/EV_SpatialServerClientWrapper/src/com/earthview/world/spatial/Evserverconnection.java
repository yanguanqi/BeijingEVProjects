package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView空间服务连接类
 */
public class Evserverconnection extends com.earthview.world.spatial.ServerConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVServerConnection", new EvserverconnectionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Evserverconnection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEVServerConnection", null);
	}

	native private void setAllServiceOpen_void(long pNativeObject);
	/**
	 * 设置所有连接都打开
	 */
	public void setAllServiceOpen()
	{
		setAllServiceOpen_void(this.nativeObject.pointer);
	}
	native private void setAllServiceClose_void(long pNativeObject);
	/**
	 * 设置关闭所有连接
	 */
	public void setAllServiceClose()
	{
		setAllServiceClose_void(this.nativeObject.pointer);
	}
	native private void setMetaServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置元数据服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setMetaServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setMetaServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGeocodeServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置地理编码服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setGeocodeServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setGeocodeServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGlobeServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置GLOBE服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setGlobeServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setGlobeServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setObqServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置GLOBE服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setObqServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setObqServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMeshXServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置GLOBE服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setMeshXServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setMeshXServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMeshXGServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置GLOBE服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setMeshXGServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setMeshXGServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setModelServiceOpen_ev_bool(long pNativeObject, boolean value);
	public void setModelServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setModelServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setVector3DServiceOpen_ev_bool(long pNativeObject, boolean value);
	public void setVector3DServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setVector3DServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGeometryServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置几何服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setGeometryServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setGeometryServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWMTSServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置WMTS服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setWMTSServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setWMTSServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWMSServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置WMS服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setWMSServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setWMSServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWFSServiceOpen_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置WFS服务打开状态
	 * @param value true打开/false关闭
	 */
	public void setWFSServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setWFSServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getMetaServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取元数据服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getMetaServiceOpenValue()
	{
		boolean returnValue = getMetaServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getGeocodeServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取地理编码服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getGeocodeServiceOpenValue()
	{
		boolean returnValue = getGeocodeServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getObqServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取Globe服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getObqServiceOpenValue()
	{
		boolean returnValue = getObqServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getMeshXServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取Globe服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getMeshXServiceOpenValue()
	{
		boolean returnValue = getMeshXServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getMeshXGServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取Globe服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getMeshXGServiceOpenValue()
	{
		boolean returnValue = getMeshXGServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getModelServiceOpenValue_void(long pNativeObject);
	public boolean getModelServiceOpenValue()
	{
		boolean returnValue = getModelServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVector3DServiceOpenValue_void(long pNativeObject);
	public boolean getVector3DServiceOpenValue()
	{
		boolean returnValue = getVector3DServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLasServiceOpen_ev_bool(long pNativeObject, boolean value);
	public void setLasServiceOpen(boolean value)
	{
		boolean valueParamValue = value;
		setLasServiceOpen_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getLasServiceOpenValue_void(long pNativeObject);
	public boolean getLasServiceOpenValue()
	{
		boolean returnValue = getLasServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getGlobeServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取Globe服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getGlobeServiceOpenValue()
	{
		boolean returnValue = getGlobeServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getGeometryServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取几何服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getGeometryServiceOpenValue()
	{
		boolean returnValue = getGeometryServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getWMTSServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取WMTS服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getWMTSServiceOpenValue()
	{
		boolean returnValue = getWMTSServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getWMSServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取WMS服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getWMSServiceOpenValue()
	{
		boolean returnValue = getWMSServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getWFSServiceOpenValue_void(long pNativeObject);
	/**
	 * 获取WFS服务是否打开
	 * @return true打开/false关闭
	 */
	public boolean getWFSServiceOpenValue()
	{
		boolean returnValue = getWFSServiceOpenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Evserverconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evserverconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evserverconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evserverconnection obj = null;
 		if(baseObj instanceof Evserverconnection)
		{
			obj = (Evserverconnection)baseObj;
		} else {
			obj = new Evserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVServerConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
