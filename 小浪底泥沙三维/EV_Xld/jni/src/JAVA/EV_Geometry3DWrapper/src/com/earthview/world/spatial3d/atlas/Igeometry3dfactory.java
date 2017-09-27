package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /三维类工厂/管理三维对象的创建和销毁/
 */
public class Igeometry3dfactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::IGeometry3DFactory", new Igeometry3dfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JIGeometry3DFactoryProxy", new Igeometry3dfactoryClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Igeometry3dfactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIGeometry3DFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Igeometry3dfactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getFactoryType_void_callback()
	{
		int returnValue = getFactoryType();
		int __returnValue = returnValue;
		return __returnValue;
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

	protected  long createRenderable_CGeoObjectExtension_CSceneManager_callback(long geoObj, long scenemanager)
	{
		com.earthview.world.spatial.kml.GeoObjectExtension geoObjParamValue = (geoObj == 0L ? null : new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoObjParamValue != null)
		{
		geoObjParamValue.setDelegate(true);
		geoObjParamValue.setInstancePointer(new InstancePointer(geoObj));
		IClassFactory geoObjParamValueClassFactory = GlobalClassFactoryMap.get(geoObjParamValue.getCppInstanceTypeName());
		if (geoObjParamValueClassFactory != null)
		{
			geoObjParamValue.setDelegate(true);
			geoObjParamValue = (com.earthview.world.spatial.kml.GeoObjectExtension)geoObjParamValueClassFactory.create();
			geoObjParamValue.setDelegate(true);
			geoObjParamValue.setInstancePointer(new InstancePointer(geoObj));
		}
		}
		com.earthview.world.graphic.SceneManager scenemanagerParamValue = (scenemanager == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(scenemanagerParamValue != null)
		{
		scenemanagerParamValue.setDelegate(true);
		scenemanagerParamValue.setInstancePointer(new InstancePointer(scenemanager));
		IClassFactory scenemanagerParamValueClassFactory = GlobalClassFactoryMap.get(scenemanagerParamValue.getCppInstanceTypeName());
		if (scenemanagerParamValueClassFactory != null)
		{
			scenemanagerParamValue.setDelegate(true);
			scenemanagerParamValue = (com.earthview.world.graphic.SceneManager)scenemanagerParamValueClassFactory.create();
			scenemanagerParamValue.setDelegate(true);
			scenemanagerParamValue.setInstancePointer(new InstancePointer(scenemanager));
		}
		}
		com.earthview.world.geometry3d.VisibleObjects returnValue = createRenderable(geoObjParamValue, scenemanagerParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void destoryRenderable_CVisibleObject_callback(long visitObj)
	{
		com.earthview.world.geometry3d.VisibleObject visitObjParamValue = (visitObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visitObjParamValue != null)
		{
		visitObjParamValue.setDelegate(true);
		visitObjParamValue.setInstancePointer(new InstancePointer(visitObj));
		IClassFactory visitObjParamValueClassFactory = GlobalClassFactoryMap.get(visitObjParamValue.getCppInstanceTypeName());
		if (visitObjParamValueClassFactory != null)
		{
			visitObjParamValue.setDelegate(true);
			visitObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visitObjParamValueClassFactory.create();
			visitObjParamValue.setDelegate(true);
			visitObjParamValue.setInstancePointer(new InstancePointer(visitObj));
		}
		}
		destoryRenderable(visitObjParamValue);
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

	protected  boolean appendGeoObject_CVisibleObject_CGeoObject_callback(long visibleObj, long ref_geoObject)
	{
		com.earthview.world.geometry3d.VisibleObject visibleObjParamValue = (visibleObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleObjParamValue != null)
		{
		visibleObjParamValue.setDelegate(true);
		visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		IClassFactory visibleObjParamValueClassFactory = GlobalClassFactoryMap.get(visibleObjParamValue.getCppInstanceTypeName());
		if (visibleObjParamValueClassFactory != null)
		{
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visibleObjParamValueClassFactory.create();
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		}
		}
		com.earthview.world.spatial.GeoObject ref_geoObjectParamValue = (ref_geoObject == 0L ? null : new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_geoObjectParamValue != null)
		{
		ref_geoObjectParamValue.setDelegate(true);
		ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		IClassFactory ref_geoObjectParamValueClassFactory = GlobalClassFactoryMap.get(ref_geoObjectParamValue.getCppInstanceTypeName());
		if (ref_geoObjectParamValueClassFactory != null)
		{
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue = (com.earthview.world.spatial.GeoObject)ref_geoObjectParamValueClassFactory.create();
			ref_geoObjectParamValue.setDelegate(true);
			ref_geoObjectParamValue.setInstancePointer(new InstancePointer(ref_geoObject));
		}
		}
		boolean returnValue = appendGeoObject(visibleObjParamValue, ref_geoObjectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean removeGeoObject_CVisibleObject_CGeoObject_callback(long visibleObj, long geoObject)
	{
		com.earthview.world.geometry3d.VisibleObject visibleObjParamValue = (visibleObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleObjParamValue != null)
		{
		visibleObjParamValue.setDelegate(true);
		visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		IClassFactory visibleObjParamValueClassFactory = GlobalClassFactoryMap.get(visibleObjParamValue.getCppInstanceTypeName());
		if (visibleObjParamValueClassFactory != null)
		{
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visibleObjParamValueClassFactory.create();
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		}
		}
		com.earthview.world.spatial.GeoObject geoObjectParamValue = (geoObject == 0L ? null : new com.earthview.world.spatial.GeoObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(geoObjectParamValue != null)
		{
		geoObjectParamValue.setDelegate(true);
		geoObjectParamValue.setInstancePointer(new InstancePointer(geoObject));
		IClassFactory geoObjectParamValueClassFactory = GlobalClassFactoryMap.get(geoObjectParamValue.getCppInstanceTypeName());
		if (geoObjectParamValueClassFactory != null)
		{
			geoObjectParamValue.setDelegate(true);
			geoObjectParamValue = (com.earthview.world.spatial.GeoObject)geoObjectParamValueClassFactory.create();
			geoObjectParamValue.setDelegate(true);
			geoObjectParamValue.setInstancePointer(new InstancePointer(geoObject));
		}
		}
		boolean returnValue = removeGeoObject(visibleObjParamValue, geoObjectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void removeAllGeoObjects_CVisibleObject_callback(long visibleObj)
	{
		com.earthview.world.geometry3d.VisibleObject visibleObjParamValue = (visibleObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleObjParamValue != null)
		{
		visibleObjParamValue.setDelegate(true);
		visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		IClassFactory visibleObjParamValueClassFactory = GlobalClassFactoryMap.get(visibleObjParamValue.getCppInstanceTypeName());
		if (visibleObjParamValueClassFactory != null)
		{
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visibleObjParamValueClassFactory.create();
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		}
		}
		removeAllGeoObjects(visibleObjParamValue);
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

	protected  long getGeoObject_CVisibleObject_ev_uint32_callback(long visibleObj, long index)
	{
		com.earthview.world.geometry3d.VisibleObject visibleObjParamValue = (visibleObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleObjParamValue != null)
		{
		visibleObjParamValue.setDelegate(true);
		visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		IClassFactory visibleObjParamValueClassFactory = GlobalClassFactoryMap.get(visibleObjParamValue.getCppInstanceTypeName());
		if (visibleObjParamValueClassFactory != null)
		{
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visibleObjParamValueClassFactory.create();
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		}
		}
		long indexParamValue = index;
		com.earthview.world.spatial.GeoObject returnValue = getGeoObject(visibleObjParamValue, indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  String getGeoObjectCount_CVisibleObject_callback(long visibleObj)
	{
		com.earthview.world.geometry3d.VisibleObject visibleObjParamValue = (visibleObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(visibleObjParamValue != null)
		{
		visibleObjParamValue.setDelegate(true);
		visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		IClassFactory visibleObjParamValueClassFactory = GlobalClassFactoryMap.get(visibleObjParamValue.getCppInstanceTypeName());
		if (visibleObjParamValueClassFactory != null)
		{
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue = (com.earthview.world.geometry3d.VisibleObject)visibleObjParamValueClassFactory.create();
			visibleObjParamValue.setDelegate(true);
			visibleObjParamValue.setInstancePointer(new InstancePointer(visibleObj));
		}
		}
		ULongPointer returnValue = getGeoObjectCount(visibleObjParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String getGeoObjectCount_CVisibleObject(long pNativeObject, long visibleObj);
	/**
	 * 获得三维实体数量
	 * @param  
	 * @return 三维实体数量
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

	public Igeometry3dfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Igeometry3dfactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Igeometry3dfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Igeometry3dfactory obj = null;
 		if(baseObj instanceof Igeometry3dfactory)
		{
			obj = (Igeometry3dfactory)baseObj;
		} else {
			obj = new Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IGeometry3DFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
