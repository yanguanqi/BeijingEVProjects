package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 手动创建对象类工厂创建对象实例
 */
public class ManualObjectFactory extends com.earthview.world.graphic.MovableObjectFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualObjectFactory", new ManualObjectFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCManualObjectFactoryProxy", new ManualObjectFactoryClassFactory());
	}

	native private long createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String name, long params);
	/**
	 * 构造函数
	 * @param name 名称
	 * @param params 参数
	 */
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long createInstanceImpl_EVString_CommonStringPairList_NoVirtual(long pNativeObject, String name, long params);
	protected com.earthview.world.graphic.MovableObject createInstanceImpl_NoVirtual(String name, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstanceImpl_EVString_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, paramsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ManualObjectFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCManualObjectFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ManualObjectFactory".equals(this.getClass().getName()))
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
	
	native private static void set_FACTORY_TYPE_NAME_EVString (String value);
	public static void set_FACTORY_TYPE_NAME(String FACTORY_TYPE_NAME)
	{
		String FACTORY_TYPE_NAMEParamValue = FACTORY_TYPE_NAME;
		
		set_FACTORY_TYPE_NAME_EVString(FACTORY_TYPE_NAMEParamValue);
	}
	
	native private String getType_void(long pNativeObject);
	/**
	 * 获得移动对象的值类型
	 * @param  
	 * @return 动画的值类型
	 */
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void destroyInstance_CMovableObject(long pNativeObject, long obj);
	/**
	 * 销毁实例
	 * @param obj 实例
	 */
	public void destroyInstance(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject(this.nativeObject.pointer, objParamValue);
	}
	native private void destroyInstance_CMovableObject_NoVirtual(long pNativeObject, long obj);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.MovableObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroyInstance_CMovableObject_NoVirtual(this.nativeObject.pointer, objParamValue);
	}

	public ManualObjectFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ManualObjectFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name)
	{
		return super.createInstanceImpl_NoVirtual(name);
	}
	/**
	 * 创建实例为对象创建新的实例
	 * @param name 对象名称
	 * @param manager 场景管理器
	 * @param params 参数
	 * @return 对象类型的值
	 */
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.core.CommonStringPairList params)
	{
		return super.createInstance_NoVirtual(name, ref_manager, params);
	}
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager)
	{
		return super.createInstance_NoVirtual(name, ref_manager);
	}
	/**
	 * 标记类型分配工厂根据场景查询有选择性的分配
	 * @param  
	 * @return 错误，返回默认实现，成功按需求分配
	 */
	public boolean requestTypeFlags()
	{
		return super.requestTypeFlags_NoVirtual();
	}
	
	native protected void register_createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstanceImpl_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createInstance_EVString_CSceneManager(long pNativeObject, String method);
	native protected void register_destroyInstance_CMovableObject(long pNativeObject, String method);
	native protected void register_requestTypeFlags_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createInstanceImpl_EVString_CommonStringPairList(this.nativeObject.pointer, "createInstanceImpl_EVString_CommonStringPairList_callback");
			this.register_createInstanceImpl_EVString(this.nativeObject.pointer, "createInstanceImpl_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_CommonStringPairList_callback");
			this.register_createInstance_EVString_CSceneManager(this.nativeObject.pointer, "createInstance_EVString_CSceneManager_callback");
			this.register_destroyInstance_CMovableObject(this.nativeObject.pointer, "destroyInstance_CMovableObject_callback");
			this.register_requestTypeFlags_void(this.nativeObject.pointer, "requestTypeFlags_void_callback");
		}
	}
	
	public static ManualObjectFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ManualObjectFactory obj = null;
 		if(baseObj instanceof ManualObjectFactory)
		{
			obj = (ManualObjectFactory)baseObj;
		} else {
			obj = new ManualObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CManualObjectFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
