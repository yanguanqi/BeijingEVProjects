package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 移动对象工厂类此类生产某些移动对象，并在根节点注册，供用户创建新的实例
 */
public class MovableObjectFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMovableObjectFactory", new MovableObjectFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCMovableObjectFactoryProxy", new MovableObjectFactoryClassFactory());
	}

	protected  long createInstanceImpl_EVString_CommonStringPairList_callback(String name, long params)
	{
		String nameParamValue = name;
		com.earthview.world.core.CommonStringPairList paramsParamValue = (params == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.core.CommonStringPairList)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		com.earthview.world.graphic.MovableObject returnValue = createInstanceImpl(nameParamValue, paramsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstanceImpl_EVString_CommonStringPairList(long pNativeObject, String name, long params);
	/**
	 * 创建内部实现必须被重载
	 * @param name 名称
	 * @param params 参数
	 * @return 移动对象指针类
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

	protected  long createInstanceImpl_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.MovableObject returnValue = createInstanceImpl(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstanceImpl_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.MovableObject createInstanceImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstanceImpl_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long createInstanceImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.MovableObject createInstanceImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstanceImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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
	 * 构造函数
	 * @param  
	 */
	public MovableObjectFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMovableObjectFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.MovableObjectFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	/**
	 * 获取类型获取被创建对象的类型
	 * @param  
	 * @return 对象类型的值
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

	protected  long createInstance_EVString_CSceneManager_CommonStringPairList_callback(String name, long ref_manager, long params)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.SceneManager ref_managerParamValue = (ref_manager == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_managerParamValue != null)
		{
		ref_managerParamValue.setDelegate(true);
		ref_managerParamValue.setInstancePointer(new InstancePointer(ref_manager));
		IClassFactory ref_managerParamValueClassFactory = GlobalClassFactoryMap.get(ref_managerParamValue.getCppInstanceTypeName());
		if (ref_managerParamValueClassFactory != null)
		{
			ref_managerParamValue.setDelegate(true);
			ref_managerParamValue = (com.earthview.world.graphic.SceneManager)ref_managerParamValueClassFactory.create();
			ref_managerParamValue.setDelegate(true);
			ref_managerParamValue.setInstancePointer(new InstancePointer(ref_manager));
		}
		}
		com.earthview.world.core.CommonStringPairList paramsParamValue = (params == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.core.CommonStringPairList)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		com.earthview.world.graphic.MovableObject returnValue = createInstance(nameParamValue, ref_managerParamValue, paramsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_EVString_CSceneManager_CommonStringPairList(long pNativeObject, String name, long ref_manager, long params);
	/**
	 * 创建实例为对象创建新的实例
	 * @param name 对象名称
	 * @param manager 场景管理器
	 * @param params 参数
	 * @return 对象类型的值
	 */
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long ref_managerParamValue = (ref_manager == null ? 0L : ref_manager.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager_CommonStringPairList(this.nativeObject.pointer, nameParamValue, ref_managerParamValue, paramsParamValue);
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
	native private long createInstance_EVString_CSceneManager_CommonStringPairList_NoVirtual(long pNativeObject, String name, long ref_manager, long params);
	protected com.earthview.world.graphic.MovableObject createInstance_NoVirtual(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.core.CommonStringPairList params)
	{
		String nameParamValue = name;
		long ref_managerParamValue = (ref_manager == null ? 0L : ref_manager.nativeObject.pointer);
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager_CommonStringPairList_NoVirtual(this.nativeObject.pointer, nameParamValue, ref_managerParamValue, paramsParamValue);
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

	protected  long createInstance_EVString_CSceneManager_callback(String name, long ref_manager)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.SceneManager ref_managerParamValue = (ref_manager == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_managerParamValue != null)
		{
		ref_managerParamValue.setDelegate(true);
		ref_managerParamValue.setInstancePointer(new InstancePointer(ref_manager));
		IClassFactory ref_managerParamValueClassFactory = GlobalClassFactoryMap.get(ref_managerParamValue.getCppInstanceTypeName());
		if (ref_managerParamValueClassFactory != null)
		{
			ref_managerParamValue.setDelegate(true);
			ref_managerParamValue = (com.earthview.world.graphic.SceneManager)ref_managerParamValueClassFactory.create();
			ref_managerParamValue.setDelegate(true);
			ref_managerParamValue.setInstancePointer(new InstancePointer(ref_manager));
		}
		}
		com.earthview.world.graphic.MovableObject returnValue = createInstance(nameParamValue, ref_managerParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_EVString_CSceneManager(long pNativeObject, String name, long ref_manager);
	public com.earthview.world.graphic.MovableObject createInstance(String name, com.earthview.world.graphic.SceneManager ref_manager)
	{
		String nameParamValue = name;
		long ref_managerParamValue = (ref_manager == null ? 0L : ref_manager.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager(this.nativeObject.pointer, nameParamValue, ref_managerParamValue);
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
	native private long createInstance_EVString_CSceneManager_NoVirtual(long pNativeObject, String name, long ref_manager);
	protected com.earthview.world.graphic.MovableObject createInstance_NoVirtual(String name, com.earthview.world.graphic.SceneManager ref_manager)
	{
		String nameParamValue = name;
		long ref_managerParamValue = (ref_manager == null ? 0L : ref_manager.nativeObject.pointer);
		long returnValue = createInstance_EVString_CSceneManager_NoVirtual(this.nativeObject.pointer, nameParamValue, ref_managerParamValue);
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

	protected  void destroyInstance_CMovableObject_callback(long obj)
	{
		com.earthview.world.graphic.MovableObject objParamValue = (obj == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objParamValue != null)
		{
		objParamValue.setDelegate(true);
		objParamValue.setInstancePointer(new InstancePointer(obj));
		IClassFactory objParamValueClassFactory = GlobalClassFactoryMap.get(objParamValue.getCppInstanceTypeName());
		if (objParamValueClassFactory != null)
		{
			objParamValue.setDelegate(true);
			objParamValue = (com.earthview.world.graphic.MovableObject)objParamValueClassFactory.create();
			objParamValue.setDelegate(true);
			objParamValue.setInstancePointer(new InstancePointer(obj));
		}
		}
		destroyInstance(objParamValue);
	}

	native private void destroyInstance_CMovableObject(long pNativeObject, long obj);
	/**
	 * 销毁实例
	 * @param obj 
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

	protected  boolean requestTypeFlags_void_callback()
	{
		boolean returnValue = requestTypeFlags();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean requestTypeFlags_void(long pNativeObject);
	/**
	 * 标记类型分配工厂根据场景查询有选择性的分配
	 * @param  
	 * @return 错误，返回默认实现，成功按需求分配
	 */
	public boolean requestTypeFlags()
	{
		boolean returnValue = requestTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean requestTypeFlags_void_NoVirtual(long pNativeObject);
	protected boolean requestTypeFlags_NoVirtual()
	{
		boolean returnValue = requestTypeFlags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _notifyTypeFlags_ev_uint32(long pNativeObject, long flag);
	/**
	 * 唤醒标记类型
	 * @param flag 
	 */
	public void _notifyTypeFlags(long flag)
	{
		long flagParamValue = flag;
		_notifyTypeFlags_ev_uint32(this.nativeObject.pointer, flagParamValue);
	}
	native private long getTypeFlags_void(long pNativeObject);
	/**
	 * 获取标记类型获取此工厂的标记类型
	 * @param flag 
	 * @return 返回类型值
	 */
	public long getTypeFlags()
	{
		long returnValue = getTypeFlags_void(this.nativeObject.pointer);
		return returnValue;
	}
	public MovableObjectFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MovableObjectFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static MovableObjectFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MovableObjectFactory obj = null;
 		if(baseObj instanceof MovableObjectFactory)
		{
			obj = (MovableObjectFactory)baseObj;
		} else {
			obj = new MovableObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMovableObjectFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
