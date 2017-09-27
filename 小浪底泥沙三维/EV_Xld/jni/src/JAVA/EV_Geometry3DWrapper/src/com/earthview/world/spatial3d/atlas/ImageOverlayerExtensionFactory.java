package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageOverlayerExtensionFactory extends com.earthview.world.spatial3d.atlas.Igeometry3dfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory", new ImageOverlayerExtensionFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCImageOverlayerExtensionFactoryProxy", new ImageOverlayerExtensionFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ImageOverlayerExtensionFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCImageOverlayerExtensionFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.ImageOverlayerExtensionFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getFactoryType_void(long pNativeObject);
	/**
	 * 获取工厂类型
	 * @return 工厂类型
	 */
	public int getFactoryType()
	{
		int returnValue = getFactoryType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFactoryType_void_NoVirtual(long pNativeObject);
	protected int getFactoryType_NoVirtual()
	{
		int returnValue = getFactoryType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createRenderable_CGeoObjectExtension_CSceneManager(long pNativeObject, long geoObj, long scenemanager);
	public com.earthview.world.geometry3d.VisibleObjects createRenderable(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.graphic.SceneManager scenemanager)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long scenemanagerParamValue = (scenemanager == null ? 0L : scenemanager.nativeObject.pointer);
		long returnValue = createRenderable_CGeoObjectExtension_CSceneManager(this.nativeObject.pointer, geoObjParamValue, scenemanagerParamValue);
		com.earthview.world.geometry3d.VisibleObjects __returnValue = new com.earthview.world.geometry3d.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjects)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		}
		return __returnValue;
	}
	native private long createRenderable_CGeoObjectExtension_CSceneManager_NoVirtual(long pNativeObject, long geoObj, long scenemanager);
	protected com.earthview.world.geometry3d.VisibleObjects createRenderable_NoVirtual(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.graphic.SceneManager scenemanager)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long scenemanagerParamValue = (scenemanager == null ? 0L : scenemanager.nativeObject.pointer);
		long returnValue = createRenderable_CGeoObjectExtension_CSceneManager_NoVirtual(this.nativeObject.pointer, geoObjParamValue, scenemanagerParamValue);
		com.earthview.world.geometry3d.VisibleObjects __returnValue = new com.earthview.world.geometry3d.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjects)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		}
		return __returnValue;
	}

	native private void destoryRenderable_CVisibleObject(long pNativeObject, long visitObj);
	public void destoryRenderable(com.earthview.world.geometry3d.VisibleObject visitObj)
	{
		long visitObjParamValue = (visitObj == null ? 0L : visitObj.nativeObject.pointer);
		destoryRenderable_CVisibleObject(this.nativeObject.pointer, visitObjParamValue);
	}
	native private void destoryRenderable_CVisibleObject_NoVirtual(long pNativeObject, long visitObj);
	protected void destoryRenderable_NoVirtual(com.earthview.world.geometry3d.VisibleObject visitObj)
	{
		long visitObjParamValue = (visitObj == null ? 0L : visitObj.nativeObject.pointer);
		destoryRenderable_CVisibleObject_NoVirtual(this.nativeObject.pointer, visitObjParamValue);
	}

	public ImageOverlayerExtensionFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageOverlayerExtensionFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 添加一个要素
	 * @param layer 二维图层
	 */
	public boolean appendGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		return super.appendGeoObject_NoVirtual(visibleObj, ref_geoObject);
	}
	/**
	 * 删除二维图形
	 * @param geometry 二维图形
	 */
	public boolean removeGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject geoObject)
	{
		return super.removeGeoObject_NoVirtual(visibleObj, geoObject);
	}
	/**
	 * 删除所有二维图形
	 * @param  
	 */
	public void removeAllGeoObjects(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		super.removeAllGeoObjects_NoVirtual(visibleObj);
	}
	/**
	 * 获得二维图形指针
	 * @param index 二维图形索引
	 * @return 二维图形
	 */
	public com.earthview.world.spatial.GeoObject getGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, long index)
	{
		return super.getGeoObject_NoVirtual(visibleObj, index);
	}
	/**
	 * 获得三维实体数量
	 * @param  
	 * @return 三维实体数量
	 */
	public ULongPointer getGeoObjectCount(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		return super.getGeoObjectCount_NoVirtual(visibleObj);
	}
	
	native protected void register_getFactoryType_void(long pNativeObject, String method);
	native protected void register_createRenderable_CGeoObjectExtension_CSceneManager(long pNativeObject, String method);
	native protected void register_destoryRenderable_CVisibleObject(long pNativeObject, String method);
	native protected void register_appendGeoObject_CVisibleObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeGeoObject_CVisibleObject_CGeoObject(long pNativeObject, String method);
	native protected void register_removeAllGeoObjects_CVisibleObject(long pNativeObject, String method);
	native protected void register_getGeoObject_CVisibleObject_ev_uint32(long pNativeObject, String method);
	native protected void register_getGeoObjectCount_CVisibleObject(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFactoryType_void(this.nativeObject.pointer, "getFactoryType_void_callback");
			this.register_createRenderable_CGeoObjectExtension_CSceneManager(this.nativeObject.pointer, "createRenderable_CGeoObjectExtension_CSceneManager_callback");
			this.register_destoryRenderable_CVisibleObject(this.nativeObject.pointer, "destoryRenderable_CVisibleObject_callback");
			this.register_appendGeoObject_CVisibleObject_CGeoObject(this.nativeObject.pointer, "appendGeoObject_CVisibleObject_CGeoObject_callback");
			this.register_removeGeoObject_CVisibleObject_CGeoObject(this.nativeObject.pointer, "removeGeoObject_CVisibleObject_CGeoObject_callback");
			this.register_removeAllGeoObjects_CVisibleObject(this.nativeObject.pointer, "removeAllGeoObjects_CVisibleObject_callback");
			this.register_getGeoObject_CVisibleObject_ev_uint32(this.nativeObject.pointer, "getGeoObject_CVisibleObject_ev_uint32_callback");
			this.register_getGeoObjectCount_CVisibleObject(this.nativeObject.pointer, "getGeoObjectCount_CVisibleObject_callback");
		}
	}
	
	public static ImageOverlayerExtensionFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageOverlayerExtensionFactory obj = null;
 		if(baseObj instanceof ImageOverlayerExtensionFactory)
		{
			obj = (ImageOverlayerExtensionFactory)baseObj;
		} else {
			obj = new ImageOverlayerExtensionFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageOverlayerExtensionFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
