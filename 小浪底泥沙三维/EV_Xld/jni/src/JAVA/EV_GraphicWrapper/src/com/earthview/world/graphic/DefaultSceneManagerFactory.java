package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 默认场景管理者类工厂
 */
public class DefaultSceneManagerFactory extends com.earthview.world.graphic.SceneManagerFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultSceneManagerFactory", new DefaultSceneManagerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultSceneManagerFactoryProxy", new DefaultSceneManagerFactoryClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DefaultSceneManagerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDefaultSceneManagerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultSceneManagerFactory".equals(this.getClass().getName()))
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
	 * 创建实例
	 * @param instanceName 实例名称
	 */
	public com.earthview.world.graphic.SceneManager createInstance(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = createInstance_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}

	native private void destroyInstance_CSceneManager(long pNativeObject, long instance);
	/**
	 * 销毁实例
	 * @param instance 实例
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

	public DefaultSceneManagerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultSceneManagerFactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DefaultSceneManagerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultSceneManagerFactory obj = null;
 		if(baseObj instanceof DefaultSceneManagerFactory)
		{
			obj = (DefaultSceneManagerFactory)baseObj;
		} else {
			obj = new DefaultSceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultSceneManagerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
