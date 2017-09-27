package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class CommonStringPairList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CommonStringPairList", new CommonStringPairListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CommonStringPairList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CommonStringPairList", null);
	}

	native private boolean push_EVString_EVString(long pNativeObject, String key, String val);
	/**
	 * 增加元素
	 * @param key 键
	 * @param val 值
	 * @return 添加成功返回true，否则返回false
	 */
	public boolean push(String key, String val)
	{
		String keyParamValue = key;
		String valParamValue = val;
		boolean returnValue = push_EVString_EVString(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 判断键是否存在
	 * @param key 键
	 * @return 存在该键返回true，否则返回false
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	/**
	 * "[]"的重载
	 * @param key 键
	 * @return 返回键
	 */
	public StringPointer OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 得到值
	 * @param key 键
	 * @return 返回键
	 */
	public StringPointer get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除元素
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 得到该容器类的空间大小
	 * @param  
	 * @return 返回空间的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空该容器类
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断该容器类是否为空
	 * @param  
	 * @return 若为空则返回true，否则返回false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CommonStringPairList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonStringPairList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CommonStringPairList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonStringPairList obj = null;
 		if(baseObj instanceof CommonStringPairList)
		{
			obj = (CommonStringPairList)baseObj;
		} else {
			obj = new CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CommonStringPairList");
			obj.increaseCast();
		}

		return obj;
	}
}
