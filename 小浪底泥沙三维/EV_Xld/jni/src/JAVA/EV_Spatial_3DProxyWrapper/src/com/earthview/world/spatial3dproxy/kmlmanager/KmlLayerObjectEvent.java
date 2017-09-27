package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml图层对象的操作事件
 */
public class KmlLayerObjectEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent", new KmlLayerObjectEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 类型标识
	 */
	public KmlLayerObjectEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CKmlLayerObjectEvent", list);
	}

	native private void setLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 设置图层
	 * @param layer layer对象
	 */
	public void setLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		setLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private long getLayer_void(long pNativeObject);
	/**
	 * 获取图层
	 * @return 返回图层对象
	 */
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private void setGeoObject_CGeoObjectExtension(long pNativeObject, long ref_geoObj);
	/**
	 * 设置地理对象
	 * @param geoObj 地理对象
	 */
	public void setGeoObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObj)
	{
		long ref_geoObjParamValue = (ref_geoObj == null ? 0L : ref_geoObj.nativeObject.pointer);
		setGeoObject_CGeoObjectExtension(this.nativeObject.pointer, ref_geoObjParamValue);
	}
	native private long getGeoObject_void(long pNativeObject);
	/**
	 * 获取地理对象
	 * @return 返回地理对象
	 */
	public com.earthview.world.spatial.kml.GeoObjectExtension getGeoObject()
	{
		long returnValue = getGeoObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	native private void setResponseState_ev_bool(long pNativeObject, boolean response);
	/**
	 * 设置响应的状态
	 * @param response 响应的状态
	 */
	public void setResponseState(boolean response)
	{
		boolean responseParamValue = response;
		setResponseState_ev_bool(this.nativeObject.pointer, responseParamValue);
	}
	native private boolean getResponseState_void(long pNativeObject);
	/**
	 * 获取响应的状态
	 * @return 返回响应的状态
	 */
	public boolean getResponseState()
	{
		boolean returnValue = getResponseState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSaveFilePath_EVString(long pNativeObject, String savePath);
	/**
	 * 设置保存的路径
	 * @param savePath 保存路径
	 */
	public void setSaveFilePath(String savePath)
	{
		String savePathParamValue = savePath;
		setSaveFilePath_EVString(this.nativeObject.pointer, savePathParamValue);
	}
	native private String getSaveFilePath_void(long pNativeObject);
	/**
	 * 获取存储的路径
	 * @return 返回路径
	 */
	public String getSaveFilePath()
	{
		String returnValue = getSaveFilePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlLayerObjectEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlLayerObjectEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlLayerObjectEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlLayerObjectEvent obj = null;
 		if(baseObj instanceof KmlLayerObjectEvent)
		{
			obj = (KmlLayerObjectEvent)baseObj;
		} else {
			obj = new KmlLayerObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlLayerObjectEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
