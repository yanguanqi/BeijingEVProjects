package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标资源加载监听
 */
public class DynamicModelObjectResourceListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener", new DynamicModelObjectResourceListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicModelObjectResourceListenerProxy", new DynamicModelObjectResourceListenerClassFactory());
	}

	/**
	 * 动态目标资源加载监听构造函数
	 */
	public DynamicModelObjectResourceListener(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCDynamicModelObjectResourceListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void afterAttached_CDynamicModelObject_callback(long dynamicObject)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObjectParamValue = (dynamicObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(dynamicObjectParamValue != null)
		{
		dynamicObjectParamValue.setDelegate(true);
		dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		IClassFactory dynamicObjectParamValueClassFactory = GlobalClassFactoryMap.get(dynamicObjectParamValue.getCppInstanceTypeName());
		if (dynamicObjectParamValueClassFactory != null)
		{
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)dynamicObjectParamValueClassFactory.create();
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		}
		}
		afterAttached(dynamicObjectParamValue);
	}

	native private void afterAttached_CDynamicModelObject(long pNativeObject, long dynamicObject);
	/**
	 * 当加载完成资源，并挂接到场景图之后触发
	 * @param dynamicObject 动态目标对象
	 */
	public void afterAttached(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		afterAttached_CDynamicModelObject(this.nativeObject.pointer, dynamicObjectParamValue);
	}
	native private void afterAttached_CDynamicModelObject_NoVirtual(long pNativeObject, long dynamicObject);
	protected void afterAttached_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		afterAttached_CDynamicModelObject_NoVirtual(this.nativeObject.pointer, dynamicObjectParamValue);
	}

	protected  void beforeAttached_CDynamicModelObject_callback(long dynamicObject)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObjectParamValue = (dynamicObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(dynamicObjectParamValue != null)
		{
		dynamicObjectParamValue.setDelegate(true);
		dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		IClassFactory dynamicObjectParamValueClassFactory = GlobalClassFactoryMap.get(dynamicObjectParamValue.getCppInstanceTypeName());
		if (dynamicObjectParamValueClassFactory != null)
		{
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)dynamicObjectParamValueClassFactory.create();
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		}
		}
		beforeAttached(dynamicObjectParamValue);
	}

	native private void beforeAttached_CDynamicModelObject(long pNativeObject, long dynamicObject);
	/**
	 * 当加载完成资源，挂接到场景图之前触发
	 * @param dynamicObject 动态目标对象
	 */
	public void beforeAttached(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		beforeAttached_CDynamicModelObject(this.nativeObject.pointer, dynamicObjectParamValue);
	}
	native private void beforeAttached_CDynamicModelObject_NoVirtual(long pNativeObject, long dynamicObject);
	protected void beforeAttached_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		beforeAttached_CDynamicModelObject_NoVirtual(this.nativeObject.pointer, dynamicObjectParamValue);
	}

	protected  void attachStateHasChanged_CDynamicModelObject_ev_bool_callback(long dynamicObject, boolean atttched)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObjectParamValue = (dynamicObject == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(dynamicObjectParamValue != null)
		{
		dynamicObjectParamValue.setDelegate(true);
		dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		IClassFactory dynamicObjectParamValueClassFactory = GlobalClassFactoryMap.get(dynamicObjectParamValue.getCppInstanceTypeName());
		if (dynamicObjectParamValueClassFactory != null)
		{
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject)dynamicObjectParamValueClassFactory.create();
			dynamicObjectParamValue.setDelegate(true);
			dynamicObjectParamValue.setInstancePointer(new InstancePointer(dynamicObject));
		}
		}
		boolean atttchedParamValue = atttched;
		attachStateHasChanged(dynamicObjectParamValue, atttchedParamValue);
	}

	native private void attachStateHasChanged_CDynamicModelObject_ev_bool(long pNativeObject, long dynamicObject, boolean atttched);
	/**
	 * 当动目标挂接或者反挂接时会被触发。
	 * @param dynamicObject 动态目标对象
	 * @param atttched 模型被attcth时为true,detach时是false
	 */
	public void attachStateHasChanged(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject, boolean atttched)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		boolean atttchedParamValue = atttched;
		attachStateHasChanged_CDynamicModelObject_ev_bool(this.nativeObject.pointer, dynamicObjectParamValue, atttchedParamValue);
	}
	native private void attachStateHasChanged_CDynamicModelObject_ev_bool_NoVirtual(long pNativeObject, long dynamicObject, boolean atttched);
	protected void attachStateHasChanged_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject dynamicObject, boolean atttched)
	{
		long dynamicObjectParamValue = (dynamicObject == null ? 0L : dynamicObject.nativeObject.pointer);
		boolean atttchedParamValue = atttched;
		attachStateHasChanged_CDynamicModelObject_ev_bool_NoVirtual(this.nativeObject.pointer, dynamicObjectParamValue, atttchedParamValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取监听名称
	 * @return 监听名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置监听名称
	 * @param name 监听名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	public DynamicModelObjectResourceListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicModelObjectResourceListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_afterAttached_CDynamicModelObject(long pNativeObject, String method);
	native protected void register_beforeAttached_CDynamicModelObject(long pNativeObject, String method);
	native protected void register_attachStateHasChanged_CDynamicModelObject_ev_bool(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_afterAttached_CDynamicModelObject(this.nativeObject.pointer, "afterAttached_CDynamicModelObject_callback");
			this.register_beforeAttached_CDynamicModelObject(this.nativeObject.pointer, "beforeAttached_CDynamicModelObject_callback");
			this.register_attachStateHasChanged_CDynamicModelObject_ev_bool(this.nativeObject.pointer, "attachStateHasChanged_CDynamicModelObject_ev_bool_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
		}
	}
	
	public static DynamicModelObjectResourceListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicModelObjectResourceListener obj = null;
 		if(baseObj instanceof DynamicModelObjectResourceListener)
		{
			obj = (DynamicModelObjectResourceListener)baseObj;
		} else {
			obj = new DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObjectResourceListener");
			obj.increaseCast();
		}

		return obj;
	}
}
