package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml事件
 */
public class KmlEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent", new KmlEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 类型标识
	 */
	public KmlEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CKmlEvent", list);
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
	native private void setParent_CKmlDocument(long pNativeObject, long ref_parent);
	/**
	 * 设置kml父文档
	 * @param parent kml父文档
	 */
	public void setParent(com.earthview.world.spatial.kml.KmlDocument ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		setParent_CKmlDocument(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 获取父文档
	 * @return 返回kml父文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private void setFilePath_EVString(long pNativeObject, String filePath);
	/**
	 * 设置保存的路径
	 * @param filePath 保存路径
	 */
	public void setFilePath(String filePath)
	{
		String filePathParamValue = filePath;
		setFilePath_EVString(this.nativeObject.pointer, filePathParamValue);
	}
	native private String getFilePath_void(long pNativeObject);
	/**
	 * 获取存储的路径
	 * @return 返回路径
	 */
	public String getFilePath()
	{
		String returnValue = getFilePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlEvent obj = null;
 		if(baseObj instanceof KmlEvent)
		{
			obj = (KmlEvent)baseObj;
		} else {
			obj = new KmlEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
