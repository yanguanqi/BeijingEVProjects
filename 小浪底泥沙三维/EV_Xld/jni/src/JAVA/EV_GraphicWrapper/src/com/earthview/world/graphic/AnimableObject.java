package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 访问AnimableValues的抽象接口类，供访问AnimableValues的任何类进行扩展
 */
public class AnimableObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimableObject", new AnimableObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimableObjectProxy", new AnimableObjectClassFactory());
	}

	protected  void initialiseAnimableDictionary_StringVector_callback(long val)
	{
		com.earthview.world.core.StringVector valParamValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		valParamValue.setDelegate(true);
		valParamValue.setInstancePointer(new InstancePointer(val));
		IClassFactory valParamValueClassFactory = GlobalClassFactoryMap.get(valParamValue.getCppInstanceTypeName());
		if (valParamValueClassFactory != null)
		{
			valParamValue.setDelegate(true);
			valParamValue = (com.earthview.world.core.StringVector)valParamValueClassFactory.create();
			valParamValue.setDelegate(true);
			valParamValue.setInstancePointer(new InstancePointer(val));
		}
		initialiseAnimableDictionary(valParamValue);
	}

	native private void initialiseAnimableDictionary_StringVector(long pNativeObject, long val);
	/**
	 * 初始化可动画路径
	 * @param  
	 */
	public void initialiseAnimableDictionary(com.earthview.world.core.StringVector val)
	{
		long valParamValue = val.nativeObject.pointer;
		initialiseAnimableDictionary_StringVector(this.nativeObject.pointer, valParamValue);
	}
	native private void initialiseAnimableDictionary_StringVector_NoVirtual(long pNativeObject, long val);
	protected void initialiseAnimableDictionary_NoVirtual(com.earthview.world.core.StringVector val)
	{
		long valParamValue = val.nativeObject.pointer;
		initialiseAnimableDictionary_StringVector_NoVirtual(this.nativeObject.pointer, valParamValue);
	}

	protected  String getAnimableDictionaryName_void_callback()
	{
		String returnValue = getAnimableDictionaryName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAnimableDictionaryName_void(long pNativeObject);
	/**
	 * 获得可动画路径
	 * @param  
	 * @return 返回路径名称
	 */
	public String getAnimableDictionaryName()
	{
		String returnValue = getAnimableDictionaryName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAnimableDictionaryName_void_NoVirtual(long pNativeObject);
	protected String getAnimableDictionaryName_NoVirtual()
	{
		String returnValue = getAnimableDictionaryName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public AnimableObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnimableObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimableObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getAnimableValueNames_void(long pNativeObject);
	/**
	 * 获得可动画的值名称的集合
	 * @param  
	 * @return 可动画的值名称集合
	 */
	public com.earthview.world.core.StringVector getAnimableValueNames()
	{
		long returnValue = getAnimableValueNames_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	protected  long createAnimableValue_EVString_callback(String valueName)
	{
		String valueNameParamValue = valueName;
		com.earthview.world.graphic.AnimableValuePtr returnValue = createAnimableValue(valueNameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createAnimableValue_EVString(long pNativeObject, String valueName);
	/**
	 * 为可动画的值名称创建公共指针
	 * @param  
	 * @return 可动画值名称公共指针
	 */
	public com.earthview.world.graphic.AnimableValuePtr createAnimableValue(String valueName)
	{
		String valueNameParamValue = valueName;
		long returnValue = createAnimableValue_EVString(this.nativeObject.pointer, valueNameParamValue);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}
	native private long createAnimableValue_EVString_NoVirtual(long pNativeObject, String valueName);
	protected com.earthview.world.graphic.AnimableValuePtr createAnimableValue_NoVirtual(String valueName)
	{
		String valueNameParamValue = valueName;
		long returnValue = createAnimableValue_EVString_NoVirtual(this.nativeObject.pointer, valueNameParamValue);
		com.earthview.world.graphic.AnimableValuePtr __returnValue = new com.earthview.world.graphic.AnimableValuePtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimableValuePtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AnimableValuePtr");
		}
		return __returnValue;
	}

	public AnimableObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimableObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_initialiseAnimableDictionary_StringVector(long pNativeObject, String method);
	native protected void register_getAnimableDictionaryName_void(long pNativeObject, String method);
	native protected void register_createAnimableValue_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_initialiseAnimableDictionary_StringVector(this.nativeObject.pointer, "initialiseAnimableDictionary_StringVector_callback");
			this.register_getAnimableDictionaryName_void(this.nativeObject.pointer, "getAnimableDictionaryName_void_callback");
			this.register_createAnimableValue_EVString(this.nativeObject.pointer, "createAnimableValue_EVString_callback");
		}
	}
	
	public static AnimableObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimableObject obj = null;
 		if(baseObj instanceof AnimableObject)
		{
			obj = (AnimableObject)baseObj;
		} else {
			obj = new AnimableObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimableObject");
			obj.increaseCast();
		}

		return obj;
	}
}
