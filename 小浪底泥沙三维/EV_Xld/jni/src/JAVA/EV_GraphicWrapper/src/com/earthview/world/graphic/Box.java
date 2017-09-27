package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * box类定义一个三维空间
 */
public class Box extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::Box", new BoxClassFactory());
	}

	native private long get_top_void(long pNativeObject);
	public long get_top()
	{
		long jniValue = get_top_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_top_ev_size_t (long pNativeObject, long value);
	public void set_top(long top)
	{
		long topParamValue = top;
		
		set_top_ev_size_t(this.nativeObject.pointer, topParamValue);
	}
	
	native private long get_right_void(long pNativeObject);
	public long get_right()
	{
		long jniValue = get_right_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_right_ev_size_t (long pNativeObject, long value);
	public void set_right(long right)
	{
		long rightParamValue = right;
		
		set_right_ev_size_t(this.nativeObject.pointer, rightParamValue);
	}
	
	native private long get_bottom_void(long pNativeObject);
	public long get_bottom()
	{
		long jniValue = get_bottom_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bottom_ev_size_t (long pNativeObject, long value);
	public void set_bottom(long bottom)
	{
		long bottomParamValue = bottom;
		
		set_bottom_ev_size_t(this.nativeObject.pointer, bottomParamValue);
	}
	
	native private long get_front_void(long pNativeObject);
	public long get_front()
	{
		long jniValue = get_front_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_front_ev_size_t (long pNativeObject, long value);
	public void set_front(long front)
	{
		long frontParamValue = front;
		
		set_front_ev_size_t(this.nativeObject.pointer, frontParamValue);
	}
	
	native private long get_back_void(long pNativeObject);
	public long get_back()
	{
		long jniValue = get_back_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_back_ev_size_t (long pNativeObject, long value);
	public void set_back(long back)
	{
		long backParamValue = back;
		
		set_back_ev_size_t(this.nativeObject.pointer, backParamValue);
	}
	
	native private long get_left_void(long pNativeObject);
	public long get_left()
	{
		long jniValue = get_left_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_left_ev_size_t (long pNativeObject, long value);
	public void set_left(long left)
	{
		long leftParamValue = left;
		
		set_left_ev_size_t(this.nativeObject.pointer, leftParamValue);
	}
	
	/**
	 * 默认的构造函数
	 * @param  
	 */
	public Box() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Box", null);
	}

	/**
	 * 构造函数
	 * @param l x轴上左边起始值
	 * @param t y轴上上边起始值
	 * @param r x轴上右边结束值
	 * @param b y轴上下边结束值
	 */
	public Box(long l, long t, long r, long b) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer lPtr = new BasePointer(l);
		list.add("l", lPtr.get());
		BasePointer tPtr = new BasePointer(t);
		list.add("t", tPtr.get());
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		BasePointer bPtr = new BasePointer(b);
		list.add("b", bPtr.get());
		Create("Box", list);
	}

	/**
	 * 构造函数
	 * @param l x轴上左边起始值
	 * @param t y轴上上边起始值
	 * @param ff z轴上前面开始值
	 * @param r x轴上右边结束值
	 * @param b y轴上下边结束值
	 * @param bb z轴上后面结束值
	 */
	public Box(long l, long t, long ff, long r, long b, long bb) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer lPtr = new BasePointer(l);
		list.add("l", lPtr.get());
		BasePointer tPtr = new BasePointer(t);
		list.add("t", tPtr.get());
		BasePointer ffPtr = new BasePointer(ff);
		list.add("ff", ffPtr.get());
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		BasePointer bPtr = new BasePointer(b);
		list.add("b", bPtr.get());
		BasePointer bbPtr = new BasePointer(bb);
		list.add("bb", bbPtr.get());
		Create("Box", list);
	}

	native private boolean contains_Box(long pNativeObject, long def);
	/**
	 * 判断这个box类包含其他的box类
	 * @param def EarthView::World::Graphic::Box类的引用
	 * @return 包含则返回true，否则返回false
	 */
	public boolean contains(com.earthview.world.graphic.Box def)
	{
		long defParamValue = def.nativeObject.pointer;
		boolean returnValue = contains_Box(this.nativeObject.pointer, defParamValue);
		return returnValue;
	}
	native private long getWidth_void(long pNativeObject);
	/**
	 * 得到宽度
	 * @param  
	 * @return 返回宽度
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void(long pNativeObject);
	/**
	 * 得到高度
	 * @param  
	 * @return 返回高度
	 */
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDepth_void(long pNativeObject);
	/**
	 * 得到深度
	 * @param  
	 * @return 返回深度
	 */
	public long getDepth()
	{
		long returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Box(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Box(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Box fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Box obj = null;
 		if(baseObj instanceof Box)
		{
			obj = (Box)baseObj;
		} else {
			obj = new Box(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Box");
			obj.increaseCast();
		}

		return obj;
	}
}
