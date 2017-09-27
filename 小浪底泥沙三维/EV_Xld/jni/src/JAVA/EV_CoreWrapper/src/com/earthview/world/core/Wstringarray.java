package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 类说明：宽字符串数组类，提供基本的数组相关操作
 */
public class Wstringarray extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CWStringArray", new WstringarrayClassFactory());
	}

	public Wstringarray() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWStringArray", null);
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 函数说明：获取字符串数组大小
	 * @return 返回数组大小
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEmpty_void(long pNativeObject);
	/**
	 * 函数说明：判断数组是否为空
	 * @return true为空，false为不空
	 */
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long append_ev_wstring(long pNativeObject, String strNewItem);
	/**
	 * 函数说明：在数组尾部添加字符串
	 * @param strNewItem 新字符串项
	 * @return 返回插入后数组大小
	 */
	public long append(String strNewItem)
	{
		String strNewItemParamValue = strNewItem;
		long returnValue = append_ev_wstring(this.nativeObject.pointer, strNewItemParamValue);
		return returnValue;
	}
	native private void insertAt_ev_uint32_ev_wstring(long pNativeObject, long index, String strNewItem);
	/**
	 * 函数说明：在设定的位置插入字符串
	 * @param index 新字符位置
	 * @param strNewItem 新字符串项
	 */
	public void insertAt(long index, String strNewItem)
	{
		long indexParamValue = index;
		String strNewItemParamValue = strNewItem;
		insertAt_ev_uint32_ev_wstring(this.nativeObject.pointer, indexParamValue, strNewItemParamValue);
	}
	native private String getAt_ev_uint32(long pNativeObject, long index);
	/**
	 * 函数说明：根据位置获取数组中的字符串
	 * @param index 新字符位置
	 * @return 返回的字符串
	 */
	public String getAt(long index)
	{
		long indexParamValue = index;
		String returnValue = getAt_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long index);
	/**
	 * 函数说明：根据位置获取数组中的字符串
	 * @param index 新字符位置
	 * @return 返回的字符串(不拷贝)
	 */
	public WideStringPointer at(long index)
	{
		long indexParamValue = index;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, indexParamValue);
		WideStringPointer __returnValue = new WideStringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void removeAt_ev_uint32(long pNativeObject, long index);
	/**
	 * 函数说明：根据位置移除字符串项
	 * @param index 字符串位置
	 */
	public void removeAt(long index)
	{
		long indexParamValue = index;
		removeAt_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAll_void(long pNativeObject);
	/**
	 * 函数说明：移除数组中所有字符串
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 函数说明：获取字符串数组大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 函数说明：重新定义空间
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	public Wstringarray(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wstringarray(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Wstringarray fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wstringarray obj = null;
 		if(baseObj instanceof Wstringarray)
		{
			obj = (Wstringarray)baseObj;
		} else {
			obj = new Wstringarray(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWStringArray");
			obj.increaseCast();
		}

		return obj;
	}
}
