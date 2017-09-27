package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetPriorityMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderTargetPriorityMap", new RenderTargetPriorityMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderTargetPriorityMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderTargetPriorityMap", null);
	}

	native private void push_ev_uchar_CRenderTarget(long pNativeObject, short key, long ref_val);
	/**
	 * 在map容器中添加元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public void push(short key, NativeObjectPointer<com.earthview.world.graphic.RenderTarget> ref_val)
	{
		short keyParamValue = key;
		long ref_valParamValue = ref_val.nativeObject.pointer;
		push_ev_uchar_CRenderTarget(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
	}
	native private boolean exist_ev_uchar(long pNativeObject, short key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(short key)
	{
		short keyParamValue = key;
		boolean returnValue = exist_ev_uchar(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private void erase_ev_uchar(long pNativeObject, short key);
	/**
	 * 删除键对应的值
	 * @param key 键
	 */
	public void erase(short key)
	{
		short keyParamValue = key;
		erase_ev_uchar(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器的大小
	 * @param  
	 * @return 容器的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long count_ev_uchar(long pNativeObject, short key);
	/**
	 * 返回容器中键出现的次数
	 * @param  
	 * @return 次数
	 */
	public long count(short key)
	{
		short keyParamValue = key;
		long returnValue = count_ev_uchar(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long get_ev_uchar_ev_size_t(long pNativeObject, short key, long index);
	///获取指定键值的第几项
	public NativeObjectPointer<com.earthview.world.graphic.RenderTarget> get(short key, long index)
	{
		short keyParamValue = key;
		long indexParamValue = index;
		long returnValue = get_ev_uchar_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
		NativeObjectPointer<com.earthview.world.graphic.RenderTarget> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderTarget>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_ev_uchar_ev_size_t(long pNativeObject, short key, long index);
	///删除指定键值的第几项
	public void erase(short key, long index)
	{
		short keyParamValue = key;
		long indexParamValue = index;
		erase_ev_uchar_ev_size_t(this.nativeObject.pointer, keyParamValue, indexParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RenderTargetPriorityMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTargetPriorityMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderTargetPriorityMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTargetPriorityMap obj = null;
 		if(baseObj instanceof RenderTargetPriorityMap)
		{
			obj = (RenderTargetPriorityMap)baseObj;
		} else {
			obj = new RenderTargetPriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderTargetPriorityMap");
			obj.increaseCast();
		}

		return obj;
	}
}
