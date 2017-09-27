package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml树节点事件
 */
public class KmlTreeNodeEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent", new KmlTreeNodeEventClassFactory());
	}

	/**
	 * kml树节点的类型
	 */
	public enum EVKmlTreeNodeType implements INativeEnum<EVKmlTreeNodeType> {
		NT_CGeoObject(EVKmlTreeNodeTypeHelper.ENUM_VALUES[0]),
		NT_Tour(EVKmlTreeNodeTypeHelper.ENUM_VALUES[1]),
		NT_Folder(EVKmlTreeNodeTypeHelper.ENUM_VALUES[2]),
		NT_NetLink(EVKmlTreeNodeTypeHelper.ENUM_VALUES[3]);
		private int value;
		EVKmlTreeNodeType(int i) {
			this.value = i;
		}
		public EVKmlTreeNodeType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVKmlTreeNodeType toEnum(int retval) {
			if(retval == NT_CGeoObject.value){
				return NT_CGeoObject;
			}
			else if(retval == NT_Tour.value){
				return NT_Tour;
			}
			else if(retval == NT_Folder.value){
				return NT_Folder;
			}
			else if(retval == NT_NetLink.value){
				return NT_NetLink;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVKmlTreeNodeTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param type 类型标识
	 */
	public KmlTreeNodeEvent(int type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CKmlTreeNodeEvent", list);
	}

	native private void setTreeNodeType_EVKmlTreeNodeType(long pNativeObject, int nodeType);
	/**
	 * 设置kml树节点的类型
	 * @param nodeType 节点类型
	 */
	public void setTreeNodeType(com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent.EVKmlTreeNodeType nodeType)
	{
		int nodeTypeParamValue = nodeType.getValue();
		setTreeNodeType_EVKmlTreeNodeType(this.nativeObject.pointer, nodeTypeParamValue);
	}
	native private int getTreeNodeType_void(long pNativeObject);
	/**
	 * 获取节点类型
	 * @return 返回节点类型
	 */
	public com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent.EVKmlTreeNodeType getTreeNodeType()
	{
		int returnValue = getTreeNodeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEvent.EVKmlTreeNodeType.toEnum(returnValue);
	}
	native private void setChildObject_CGeoObjectExtension(long pNativeObject, long ref_geoObj);
	/**
	 * 设置子地理对象
	 * @param geoObj 地理对象
	 */
	public void setChildObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geoObj)
	{
		long ref_geoObjParamValue = (ref_geoObj == null ? 0L : ref_geoObj.nativeObject.pointer);
		setChildObject_CGeoObjectExtension(this.nativeObject.pointer, ref_geoObjParamValue);
	}
	native private long getChildObject_void(long pNativeObject);
	/**
	 * 获取地理对象
	 * @return 返回地理对象
	 */
	public com.earthview.world.spatial.kml.GeoObjectExtension getChildObject()
	{
		long returnValue = getChildObject_void(this.nativeObject.pointer);
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
	native private void setTour_CTour(long pNativeObject, long ref_tour);
	/**
	 * /设置游览/
	 * @param tour 游览对象
	 */
	public void setTour(com.earthview.world.spatial.kml.Tour ref_tour)
	{
		long ref_tourParamValue = (ref_tour == null ? 0L : ref_tour.nativeObject.pointer);
		setTour_CTour(this.nativeObject.pointer, ref_tourParamValue);
	}
	native private long getTour_void(long pNativeObject);
	/**
	 * 获取游览
	 * @return 返回游览对象
	 */
	public com.earthview.world.spatial.kml.Tour getTour()
	{
		long returnValue = getTour_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.Tour __returnValue = new com.earthview.world.spatial.kml.Tour(CreatedWhenConstruct.CWC_NotToCreate, "CTour");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.Tour)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTour");
		}
		return __returnValue;
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
	 * 获取存储的路径
	 * @return 返回路径
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
	native private void setParentObject_CKmlDocument(long pNativeObject, long ref_folder);
	/**
	 * 设置kml父文档
	 * @param folder kml父文档
	 */
	public void setParentObject(com.earthview.world.spatial.kml.KmlDocument ref_folder)
	{
		long ref_folderParamValue = (ref_folder == null ? 0L : ref_folder.nativeObject.pointer);
		setParentObject_CKmlDocument(this.nativeObject.pointer, ref_folderParamValue);
	}
	native private long getParentObject_void(long pNativeObject);
	/**
	 * 获取父对象
	 * @return 返回父对象
	 */
	public com.earthview.world.spatial.kml.KmlDocument getParentObject()
	{
		long returnValue = getParentObject_void(this.nativeObject.pointer);
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
	native private long getKmlNetLink_void(long pNativeObject);
	/**
	 * 获取kml网络连接
	 * @return 返回网络连接
	 */
	public com.earthview.world.spatial.kml.KmlNetworkLink getKmlNetLink()
	{
		long returnValue = getKmlNetLink_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlNetworkLink __returnValue = new com.earthview.world.spatial.kml.KmlNetworkLink(CreatedWhenConstruct.CWC_NotToCreate, "CKmlNetworkLink");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlNetworkLink)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlNetworkLink");
		}
		return __returnValue;
	}
	native private void setKmlNetLink_CKmlNetworkLink(long pNativeObject, long ref_netLink);
	/**
	 * 设置kml网络连接
	 * @param netLink kml网络连接
	 */
	public void setKmlNetLink(com.earthview.world.spatial.kml.KmlNetworkLink ref_netLink)
	{
		long ref_netLinkParamValue = (ref_netLink == null ? 0L : ref_netLink.nativeObject.pointer);
		setKmlNetLink_CKmlNetworkLink(this.nativeObject.pointer, ref_netLinkParamValue);
	}
	native private void setNetLinkReleativeParent_CKmlDocument(long pNativeObject, long ref_releativeParent);
	/**
	 * 设置kml网络连接相关的kml文档
	 * @param releativeParent kml文档
	 */
	public void setNetLinkReleativeParent(com.earthview.world.spatial.kml.KmlDocument ref_releativeParent)
	{
		long ref_releativeParentParamValue = (ref_releativeParent == null ? 0L : ref_releativeParent.nativeObject.pointer);
		setNetLinkReleativeParent_CKmlDocument(this.nativeObject.pointer, ref_releativeParentParamValue);
	}
	native private long getNetLinkReleativeParent_void(long pNativeObject);
	/**
	 * 获取kml网络连接父文档
	 * @return 返回kml网络连接父文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument getNetLinkReleativeParent()
	{
		long returnValue = getNetLinkReleativeParent_void(this.nativeObject.pointer);
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
	public KmlTreeNodeEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlTreeNodeEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlTreeNodeEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlTreeNodeEvent obj = null;
 		if(baseObj instanceof KmlTreeNodeEvent)
		{
			obj = (KmlTreeNodeEvent)baseObj;
		} else {
			obj = new KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlTreeNodeEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
