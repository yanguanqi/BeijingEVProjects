package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矩形的模板类存放符点型的矩形模板类
 */
public class FloatRect extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::FloatRect", new FloatRectClassFactory());
	}

	native private float get_top_void(long pNativeObject);
	public float get_top()
	{
		float jniValue = get_top_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_top_ev_real32 (long pNativeObject, float value);
	public void set_top(float top)
	{
		float topParamValue = top;
		
		set_top_ev_real32(this.nativeObject.pointer, topParamValue);
	}
	
	native private float get_right_void(long pNativeObject);
	public float get_right()
	{
		float jniValue = get_right_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_right_ev_real32 (long pNativeObject, float value);
	public void set_right(float right)
	{
		float rightParamValue = right;
		
		set_right_ev_real32(this.nativeObject.pointer, rightParamValue);
	}
	
	native private float get_bottom_void(long pNativeObject);
	public float get_bottom()
	{
		float jniValue = get_bottom_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bottom_ev_real32 (long pNativeObject, float value);
	public void set_bottom(float bottom)
	{
		float bottomParamValue = bottom;
		
		set_bottom_ev_real32(this.nativeObject.pointer, bottomParamValue);
	}
	
	native private float get_left_void(long pNativeObject);
	public float get_left()
	{
		float jniValue = get_left_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_left_ev_real32 (long pNativeObject, float value);
	public void set_left(float left)
	{
		float leftParamValue = left;
		
		set_left_ev_real32(this.nativeObject.pointer, leftParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public FloatRect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FloatRect", null);
	}

	/**
	 * 构造函数
	 * @param l 左边起始值
	 * @param t 上面起始值
	 * @param r 右边结束值
	 * @param b 底面结束值
	 */
	public FloatRect(float l, float t, float r, float b) {
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
		Create("FloatRect", list);
	}

	/**
	 * 构造函数
	 * @param o EarthView::World::Graphic::FloatRect的引用
	 */
	public FloatRect(com.earthview.world.graphic.FloatRect o) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer oPtr = new BasePointer(o);
		list.add("o", oPtr.get());
		Create("FloatRect", list);
	}

	native private long OperatorAssign_FloatRect(long pNativeObject, long o);
	/**
	 * 赋值"="的重载
	 * @param o EarthView::World::Graphic::FloatRect的引用
	 * @return 返回已赋值类的数据成员
	 */
	public com.earthview.world.graphic.FloatRect OperatorAssign(com.earthview.world.graphic.FloatRect o)
	{
		long oParamValue = o.nativeObject.pointer;
		long returnValue = OperatorAssign_FloatRect(this.nativeObject.pointer, oParamValue);
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	native private float width_void(long pNativeObject);
	/**
	 * 计算宽度
	 * @param  
	 * @return 返回宽度
	 */
	public float width()
	{
		float returnValue = width_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float height_void(long pNativeObject);
	/**
	 * 计算高度
	 * @param  
	 * @return 返回高度
	 */
	public float height()
	{
		float returnValue = height_void(this.nativeObject.pointer);
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
	native private long merge_FloatRect(long pNativeObject, long rhs);
	/**
	 * 矩形的融合
	 * @param rhs EarthView::World::Graphic::FloatRect类的引用
	 * @return 返回融合后的矩形
	 */
	public com.earthview.world.graphic.FloatRect merge(com.earthview.world.graphic.FloatRect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = merge_FloatRect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	native private long intersect_FloatRect(long pNativeObject, long rhs);
	/**
	 * 矩形的相交
	 * @param rhs EarthView::World::Graphic::FloatRect类的引用
	 * @return 返回相交后的矩形
	 */
	public com.earthview.world.graphic.FloatRect intersect(com.earthview.world.graphic.FloatRect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = intersect_FloatRect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	public FloatRect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FloatRect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FloatRect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FloatRect obj = null;
 		if(baseObj instanceof FloatRect)
		{
			obj = (FloatRect)baseObj;
		} else {
			obj = new FloatRect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FloatRect");
			obj.increaseCast();
		}

		return obj;
	}
}
