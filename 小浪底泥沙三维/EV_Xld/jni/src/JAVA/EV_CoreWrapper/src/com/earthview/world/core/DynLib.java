package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 动态库类管理已加载的运行库中标记的数据
 */
public class DynLib extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDynLib", new DynLibClassFactory());
	}

	/**
	 * 构造函数
	 * @param name EVString对象的引用
	 */
	public DynLib(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CDynLib", list);
	}

	native private void load_void(long pNativeObject);
	/**
	 * 加载库
	 * @param  
	 */
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void unload_void(long pNativeObject);
	/**
	 * 卸载库
	 * @param  
	 */
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 得到库的名字
	 * @param  
	 * @return 返回库的名字
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSymbol_EVString(long pNativeObject, String strName);
	/**
	 * 在加载的库中寻找给定名称的函数
	 * @param strName 标记名
	 * @return 函数指针
	 */
	public VoidPointer getSymbol(String strName)
	{
		String strNameParamValue = strName;
		long returnValue = getSymbol_EVString(this.nativeObject.pointer, strNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public DynLib(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynLib(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DynLib fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynLib obj = null;
 		if(baseObj instanceof DynLib)
		{
			obj = (DynLib)baseObj;
		} else {
			obj = new DynLib(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynLib");
			obj.increaseCast();
		}

		return obj;
	}
}
