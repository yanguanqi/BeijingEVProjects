package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///渲染八叉树节点
public class MemoryDataStreamMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CMemoryDataStreamMap", new MemoryDataStreamMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public MemoryDataStreamMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMemoryDataStreamMap", null);
	}

	native private boolean push_EVString_MemoryDataStreamPtr(long pNativeObject, String key, long val);
	/**
	 * 添加数据
	 * @param key 键
	 * @param val 值
	 */
	public boolean push(String key, com.earthview.world.core.MemoryDataStreamPtr val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 判断指的指定的键是否存在
	 * @param key 键
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	public com.earthview.world.core.MemoryDataStreamPtr OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 根据指定的键返回值
	 * @param key 键
	 */
	public com.earthview.world.core.MemoryDataStreamPtr get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 根据指定的键删除数据
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回长度
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回容器是否为空
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public MemoryDataStreamMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MemoryDataStreamMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MemoryDataStreamMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MemoryDataStreamMap obj = null;
 		if(baseObj instanceof MemoryDataStreamMap)
		{
			obj = (MemoryDataStreamMap)baseObj;
		} else {
			obj = new MemoryDataStreamMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMemoryDataStreamMap");
			obj.increaseCast();
		}

		return obj;
	}
}
