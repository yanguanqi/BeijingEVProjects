package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染窗口容器类存放渲染窗口
 */
public class RenderWindowList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderWindowList", new RenderWindowListClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public RenderWindowList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderWindowList", null);
	}

	native private void push_back_CRenderWindow(long pNativeObject, long ref_t);
	/**
	 * 在容器后面追加对象
	 * @param t 需要追加的对象
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.RenderWindow> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CRenderWindow(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除元素
	 * @param pos 需要移除元素的位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 容器为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 数组下标"[]"重载
	 * @param n 下标
	 * @return 返回对应下标的数组中的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.RenderWindow> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.RenderWindow> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderWindow>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 检查发生变化的下标
	 * @param n 下标
	 * @return 返回对应下标的位置
	 */
	public NativeObjectPointer<com.earthview.world.graphic.RenderWindow> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.RenderWindow> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.RenderWindow>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/// 容器的大小
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回容器的大小</returns>
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public RenderWindowList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderWindowList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderWindowList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderWindowList obj = null;
 		if(baseObj instanceof RenderWindowList)
		{
			obj = (RenderWindowList)baseObj;
		} else {
			obj = new RenderWindowList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderWindowList");
			obj.increaseCast();
		}

		return obj;
	}
}
