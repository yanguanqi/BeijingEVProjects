package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通用场景管理器工厂
 */
public class CommonSceneManagerFactory extends com.earthview.world.graphic.SceneManagerFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCommonSceneManagerFactory", new CommonSceneManagerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCCommonSceneManagerFactoryProxy", new CommonSceneManagerFactoryClassFactory());
	}

	/**
	 * 构造函数
	 */
	public CommonSceneManagerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCommonSceneManagerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.CommonSceneManagerFactory".equals(this.getClass().getName()))
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
	 * 创建一个场景管理器实例
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
	 * 销毁一个场景管理器实例
	 * @param instance 场景管理器指针
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

	public CommonSceneManagerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonSceneManagerFactory(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static CommonSceneManagerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonSceneManagerFactory obj = null;
 		if(baseObj instanceof CommonSceneManagerFactory)
		{
			obj = (CommonSceneManagerFactory)baseObj;
		} else {
			obj = new CommonSceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommonSceneManagerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
