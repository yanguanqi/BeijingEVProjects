package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矩形的模板类存放int型的矩形模板类
 */
public class Rect extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::Rect", new RectClassFactory());
	}

	native private int get_top_void(long pNativeObject);
	public int get_top()
	{
		int jniValue = get_top_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_top_ev_int32 (long pNativeObject, int value);
	public void set_top(int top)
	{
		int topParamValue = top;
		
		set_top_ev_int32(this.nativeObject.pointer, topParamValue);
	}
	
	native private int get_right_void(long pNativeObject);
	public int get_right()
	{
		int jniValue = get_right_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_right_ev_int32 (long pNativeObject, int value);
	public void set_right(int right)
	{
		int rightParamValue = right;
		
		set_right_ev_int32(this.nativeObject.pointer, rightParamValue);
	}
	
	native private int get_bottom_void(long pNativeObject);
	public int get_bottom()
	{
		int jniValue = get_bottom_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bottom_ev_int32 (long pNativeObject, int value);
	public void set_bottom(int bottom)
	{
		int bottomParamValue = bottom;
		
		set_bottom_ev_int32(this.nativeObject.pointer, bottomParamValue);
	}
	
	native private int get_left_void(long pNativeObject);
	public int get_left()
	{
		int jniValue = get_left_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_left_ev_int32 (long pNativeObject, int value);
	public void set_left(int left)
	{
		int leftParamValue = left;
		
		set_left_ev_int32(this.nativeObject.pointer, leftParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Rect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Rect", null);
	}

	/**
	 * 构造函数
	 * @param l 左边起始值
	 * @param t 上面起始值
	 * @param r 右边结束值
	 * @param b 底面结束值
	 */
	public Rect(int l, int t, int r, int b) {
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
		Create("Rect", list);
	}

	/**
	 * 构造函数
	 * @param o EarthView::World::Graphic::Rect的引用
	 */
	public Rect(com.earthview.world.graphic.Rect o) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer oPtr = new BasePointer(o);
		list.add("o", oPtr.get());
		Create("Rect", list);
	}

	native private long OperatorAssign_Rect(long pNativeObject, long o);
	/**
	 * 赋值"="的重载
	 * @param o EarthView::World::Graphic::Rect的引用
	 * @return 返回已赋值类的数据成员
	 */
	public com.earthview.world.graphic.Rect OperatorAssign(com.earthview.world.graphic.Rect o)
	{
		long oParamValue = o.nativeObject.pointer;
		long returnValue = OperatorAssign_Rect(this.nativeObject.pointer, oParamValue);
		com.earthview.world.graphic.Rect __returnValue = new com.earthview.world.graphic.Rect(CreatedWhenConstruct.CWC_NotToCreate, "Rect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Rect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Rect");
		}
		return __returnValue;
	}
	native private int width_void(long pNativeObject);
	/**
	 * 计算宽度
	 * @param  
	 * @return 返回宽度
	 */
	public int width()
	{
		int returnValue = width_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int height_void(long pNativeObject);
	/**
	 * 计算高度
	 * @param  
	 * @return 返回高度
	 */
	public int height()
	{
		int returnValue = height_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isNull_void(long pNativeObject);
	/**
	 * 判断矩形是否为空
	 * @param  
	 * @return 有一个为零返回true，否则返回false
	 */
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNull_void(long pNativeObject);
	/**
	 * 置空
	 * @param  
	 */
	public void setNull()
	{
		setNull_void(this.nativeObject.pointer);
	}
	native private long merge_Rect(long pNativeObject, long rhs);
	/**
	 * 矩形的融合
	 * @param rhs EarthView::World::Graphic::Rect类的引用
	 * @return 返回融合后的矩形
	 */
	public com.earthview.world.graphic.Rect merge(com.earthview.world.graphic.Rect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = merge_Rect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.Rect __returnValue = new com.earthview.world.graphic.Rect(CreatedWhenConstruct.CWC_NotToCreate, "Rect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Rect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Rect");
		}
		return __returnValue;
	}
	native private long intersect_Rect(long pNativeObject, long rhs);
	/**
	 * 矩形的相交
	 * @param rhs EarthView::World::Graphic::Rect类的引用
	 * @return 返回相交后的矩形
	 */
	public com.earthview.world.graphic.Rect intersect(com.earthview.world.graphic.Rect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = intersect_Rect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.Rect __returnValue = new com.earthview.world.graphic.Rect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Rect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Rect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Rect");
		}
		return __returnValue;
	}
	public Rect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Rect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Rect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Rect obj = null;
 		if(baseObj instanceof Rect)
		{
			obj = (Rect)baseObj;
		} else {
			obj = new Rect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Rect");
			obj.increaseCast();
		}

		return obj;
	}
}
