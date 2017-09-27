package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class GeoPolygonExFactory extends com.earthview.world.spatial3d.atlas.Igeometry3dfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeoPolygonExFactory", new GeoPolygonExFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCGeoPolygonExFactoryProxy", new GeoPolygonExFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public GeoPolygonExFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGeoPolygonExFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.GeoPolygonExFactory".equals(this.getClass().getName()))
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

	native private boolean appendGeoObject_CVisibleObject_CGeoObject(long pNativeObject, long visibleObj, long ref_geoObject);
	/**
	 * 添加一个要素
	 * @param layer 二维图层
	 */
	public boolean appendGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = appendGeoObject_CVisibleObject_CGeoObject(this.nativeObject.pointer, visibleObjParamValue, ref_geoObjectParamValue);
		return returnValue;
	}
	native private boolean appendGeoObject_CVisibleObject_CGeoObject_NoVirtual(long pNativeObject, long visibleObj, long ref_geoObject);
	protected boolean appendGeoObject_NoVirtual(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject ref_geoObject)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long ref_geoObjectParamValue = (ref_geoObject == null ? 0L : ref_geoObject.nativeObject.pointer);
		boolean returnValue = appendGeoObject_CVisibleObject_CGeoObject_NoVirtual(this.nativeObject.pointer, visibleObjParamValue, ref_geoObjectParamValue);
		return returnValue;
	}

	native private boolean removeGeoObject_CVisibleObject_CGeoObject(long pNativeObject, long visibleObj, long geoObject);
	/**
	 * 删除二维图形
	 * @param geometry 二维图形
	 */
	public boolean removeGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject geoObject)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long geoObjectParamValue = (geoObject == null ? 0L : geoObject.nativeObject.pointer);
		boolean returnValue = removeGeoObject_CVisibleObject_CGeoObject(this.nativeObject.pointer, visibleObjParamValue, geoObjectParamValue);
		return returnValue;
	}
	native private boolean removeGeoObject_CVisibleObject_CGeoObject_NoVirtual(long pNativeObject, long visibleObj, long geoObject);
	protected boolean removeGeoObject_NoVirtual(com.earthview.world.geometry3d.VisibleObject visibleObj, com.earthview.world.spatial.GeoObject geoObject)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long geoObjectParamValue = (geoObject == null ? 0L : geoObject.nativeObject.pointer);
		boolean returnValue = removeGeoObject_CVisibleObject_CGeoObject_NoVirtual(this.nativeObject.pointer, visibleObjParamValue, geoObjectParamValue);
		return returnValue;
	}

	native private void removeAllGeoObjects_CVisibleObject(long pNativeObject, long visibleObj);
	/**
	 * 删除所有二维图形
	 * @param  
	 */
	public void removeAllGeoObjects(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		removeAllGeoObjects_CVisibleObject(this.nativeObject.pointer, visibleObjParamValue);
	}
	native private void removeAllGeoObjects_CVisibleObject_NoVirtual(long pNativeObject, long visibleObj);
	protected void removeAllGeoObjects_NoVirtual(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		removeAllGeoObjects_CVisibleObject_NoVirtual(this.nativeObject.pointer, visibleObjParamValue);
	}

	native private long getGeoObject_CVisibleObject_ev_uint32(long pNativeObject, long visibleObj, long index);
	/**
	 * 获得二维图形指针
	 * @param index 二维图形索引
	 * @return 二维图形
	 */
	public com.earthview.world.spatial.GeoObject getGeoObject(com.earthview.world.geometry3d.VisibleObject visibleObj, long index)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long indexParamValue = index;
		long returnValue = getGeoObject_CVisibleObject_ev_uint32(this.nativeObject.pointer, visibleObjParamValue, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoObject __returnValue = new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObject");
		}
		return __returnValue;
	}
	native private long getGeoObject_CVisibleObject_ev_uint32_NoVirtual(long pNativeObject, long visibleObj, long index);
	protected com.earthview.world.spatial.GeoObject getGeoObject_NoVirtual(com.earthview.world.geometry3d.VisibleObject visibleObj, long index)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		long indexParamValue = index;
		long returnValue = getGeoObject_CVisibleObject_ev_uint32_NoVirtual(this.nativeObject.pointer, visibleObjParamValue, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.GeoObject __returnValue = new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.GeoObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObject");
		}
		return __returnValue;
	}

	native private String getGeoObjectCount_CVisibleObject(long pNativeObject, long visibleObj);
	/**
	 * 获得三维实体数量
	 * @param  
	 * @return 二维图形数量
	 */
	public ULongPointer getGeoObjectCount(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		String returnValue = getGeoObjectCount_CVisibleObject(this.nativeObject.pointer, visibleObjParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getGeoObjectCount_CVisibleObject_NoVirtual(long pNativeObject, long visibleObj);
	protected ULongPointer getGeoObjectCount_NoVirtual(com.earthview.world.geometry3d.VisibleObject visibleObj)
	{
		long visibleObjParamValue = (visibleObj == null ? 0L : visibleObj.nativeObject.pointer);
		String returnValue = getGeoObjectCount_CVisibleObject_NoVirtual(this.nativeObject.pointer, visibleObjParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	public GeoPolygonExFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoPolygonExFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static GeoPolygonExFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoPolygonExFactory obj = null;
 		if(baseObj instanceof GeoPolygonExFactory)
		{
			obj = (GeoPolygonExFactory)baseObj;
		} else {
			obj = new GeoPolygonExFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoPolygonExFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
