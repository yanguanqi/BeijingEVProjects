package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 容器类以EVString类型的键作为索引，存放ev_bool型的值的一个容器类
 */
public class UnaryOptionList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::UnaryOptionList", new UnaryOptionListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public UnaryOptionList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("UnaryOptionList", null);
	}

	native private boolean add_EVString_ev_bool(long pNativeObject, String key, boolean val);
	/**
	 * 在对应键上添加值
	 * @param key 键
	 * @param val 值
	 * @return 能在对应的键上添加值则返回true，否则返回false
	 */
	public boolean add(String key, boolean val)
	{
		String keyParamValue = key;
		boolean valParamValue = val;
		boolean returnValue = add_EVString_ev_bool(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	native private boolean OperatorIndex_EVString(long pNativeObject, String key);
	/**
	 * "[]"的重载
	 * @param key 键
	 * @return 取到键返回true，否则返回false
	 */
	public boolean OperatorIndex(String key)
	{
		String keyParamValue = key;
		boolean returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean get_EVString(long pNativeObject, String key);
	/**
	 * 得到值
	 * @param key 键
	 * @return 得到键返回true，否则返回false
	 */
	public boolean get(String key)
	{
		String keyParamValue = key;
		boolean returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
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
	native private void clear_void(long pNativeObject);
	/**
	 * 清空该容器类
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public UnaryOptionList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UnaryOptionList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UnaryOptionList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UnaryOptionList obj = null;
 		if(baseObj instanceof UnaryOptionList)
		{
			obj = (UnaryOptionList)baseObj;
		} else {
			obj = new UnaryOptionList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "UnaryOptionList");
			obj.increaseCast();
		}

		return obj;
	}
}
