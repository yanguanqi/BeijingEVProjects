package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景管理器类工厂
 */
public class GeoSceneManagerFactory extends com.earthview.world.graphic.SceneManagerFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGeoSceneManagerFactory", new GeoSceneManagerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCGeoSceneManagerFactoryProxy", new GeoSceneManagerFactoryClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public GeoSceneManagerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGeoSceneManagerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.GeoSceneManagerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static String get_FACTORY_TYPE_NAME_void();
	public static String get_FACTORY_TYPE_NAME()
	{
		String jniValue = get_FACTORY_TYPE_NAME_void();
		
		return jniValue;
	}
	
	native private long createInstance_EVString(long pNativeObject, String instanceName);
	/**
	 * 创建一个实例
	 * @param instanceName 实例的名字
	 * @return 工厂的产品
	 */
	public com.earthview.world.graphic.SceneManager createInstance(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = createInstance_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long createInstance_EVString_NoVirtual(long pNativeObject, String instanceName);
	protected com.earthview.world.graphic.SceneManager createInstance_NoVirtual(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = createInstance_EVString_NoVirtual(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}

	native private void destroyInstance_CSceneManager(long pNativeObject, long instance);
	/**
	 * 销毁一个实例
	 * @param layer 销毁工厂的产品
	 * @return 是否成功
	 */
	public void destroyInstance(com.earthview.world.graphic.SceneManager instance)
	{
		long instanceParamValue = (instance == null ? 0L : instance.nativeObject.pointer);
		destroyInstance_CSceneManager(this.nativeObject.pointer, instanceParamValue);
	}
	native private void destroyInstance_CSceneManager_NoVirtual(long pNativeObject, long instance);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.SceneManager instance)
	{
		long instanceParamValue = (instance == null ? 0L : instance.nativeObject.pointer);
		destroyInstance_CSceneManager_NoVirtual(this.nativeObject.pointer, instanceParamValue);
	}

	public GeoSceneManagerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoSceneManagerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.SceneManagerMetaData getMetaData()
	{
		return super.getMetaData_NoVirtual();
	}
	
	native protected void register_getMetaData_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString(long pNativeObject, String method);
	native protected void register_destroyInstance_CSceneManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMetaData_void(this.nativeObject.pointer, "getMetaData_void_callback");
			this.register_createInstance_EVString(this.nativeObject.pointer, "createInstance_EVString_callback");
			this.register_destroyInstance_CSceneManager(this.nativeObject.pointer, "destroyInstance_CSceneManager_callback");
		}
	}
	
	public static GeoSceneManagerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoSceneManagerFactory obj = null;
 		if(baseObj instanceof GeoSceneManagerFactory)
		{
			obj = (GeoSceneManagerFactory)baseObj;
		} else {
			obj = new GeoSceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoSceneManagerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
