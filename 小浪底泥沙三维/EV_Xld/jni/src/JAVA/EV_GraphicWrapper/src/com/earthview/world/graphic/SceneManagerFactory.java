package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneManagerFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneManagerFactory", new SceneManagerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSceneManagerFactoryProxy", new SceneManagerFactoryClassFactory());
	}

	public SceneManagerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSceneManagerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SceneManagerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getMetaData_void_callback()
	{
		com.earthview.world.graphic.SceneManagerMetaData returnValue = getMetaData();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMetaData_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManagerMetaData getMetaData()
	{
		long returnValue = getMetaData_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
		}
		return __returnValue;
	}
	native private long getMetaData_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneManagerMetaData getMetaData_NoVirtual()
	{
		long returnValue = getMetaData_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneManagerMetaData __returnValue = new com.earthview.world.graphic.SceneManagerMetaData(CreatedWhenConstruct.CWC_NotToCreate, "SceneManagerMetaData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManagerMetaData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneManagerMetaData");
		}
		return __returnValue;
	}

	protected  long createInstance_EVString_callback(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		com.earthview.world.graphic.SceneManager returnValue = createInstance(instanceNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_EVString(long pNativeObject, String instanceName);
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

	protected  void destroyInstance_CSceneManager_callback(long instance)
	{
		com.earthview.world.graphic.SceneManager instanceParamValue = (instance == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(instanceParamValue != null)
		{
		instanceParamValue.setDelegate(true);
		instanceParamValue.setInstancePointer(new InstancePointer(instance));
		IClassFactory instanceParamValueClassFactory = GlobalClassFactoryMap.get(instanceParamValue.getCppInstanceTypeName());
		if (instanceParamValueClassFactory != null)
		{
			instanceParamValue.setDelegate(true);
			instanceParamValue = (com.earthview.world.graphic.SceneManager)instanceParamValueClassFactory.create();
			instanceParamValue.setDelegate(true);
			instanceParamValue.setInstancePointer(new InstancePointer(instance));
		}
		}
		destroyInstance(instanceParamValue);
	}

	native private void destroyInstance_CSceneManager(long pNativeObject, long instance);
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

	public SceneManagerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneManagerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static SceneManagerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneManagerFactory obj = null;
 		if(baseObj instanceof SceneManagerFactory)
		{
			obj = (SceneManagerFactory)baseObj;
		} else {
			obj = new SceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneManagerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
