package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml添加文件夹事件
 */
public class KmlAddFolderEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent", new KmlAddFolderEventClassFactory());
	}

	/**
	 * 构造函数
	 * @param type 类型标识
	 */
	public KmlAddFolderEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CKmlAddFolderEvent", list);
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
	native private void setFolder_CKmlDocument(long pNativeObject, long ref_folder);
	/**
	 * 设置kml文档
	 * @param folder kml文档
	 */
	public void setFolder(com.earthview.world.spatial.kml.KmlDocument ref_folder)
	{
		long ref_folderParamValue = (ref_folder == null ? 0L : ref_folder.nativeObject.pointer);
		setFolder_CKmlDocument(this.nativeObject.pointer, ref_folderParamValue);
	}
	native private long getFolder_void(long pNativeObject);
	/**
	 * 获取kml文档
	 * @return 返回kml文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument getFolder()
	{
		long returnValue = getFolder_void(this.nativeObject.pointer);
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
	public KmlAddFolderEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlAddFolderEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlAddFolderEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlAddFolderEvent obj = null;
 		if(baseObj instanceof KmlAddFolderEvent)
		{
			obj = (KmlAddFolderEvent)baseObj;
		} else {
			obj = new KmlAddFolderEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlAddFolderEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
