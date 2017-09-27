package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矩形的模板类存放Real型的矩形模板类
 */
public class RealRect extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RealRect", new RealRectClassFactory());
	}

	native private double get_top_void(long pNativeObject);
	public double get_top()
	{
		double jniValue = get_top_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_top_Real (long pNativeObject, double value);
	public void set_top(double top)
	{
		double topParamValue = top;
		
		set_top_Real(this.nativeObject.pointer, topParamValue);
	}
	
	native private double get_right_void(long pNativeObject);
	public double get_right()
	{
		double jniValue = get_right_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_right_Real (long pNativeObject, double value);
	public void set_right(double right)
	{
		double rightParamValue = right;
		
		set_right_Real(this.nativeObject.pointer, rightParamValue);
	}
	
	native private double get_bottom_void(long pNativeObject);
	public double get_bottom()
	{
		double jniValue = get_bottom_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bottom_Real (long pNativeObject, double value);
	public void set_bottom(double bottom)
	{
		double bottomParamValue = bottom;
		
		set_bottom_Real(this.nativeObject.pointer, bottomParamValue);
	}
	
	native private double get_left_void(long pNativeObject);
	public double get_left()
	{
		double jniValue = get_left_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_left_Real (long pNativeObject, double value);
	public void set_left(double left)
	{
		double leftParamValue = left;
		
		set_left_Real(this.nativeObject.pointer, leftParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public RealRect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RealRect", null);
	}

	/**
	 * 构造函数
	 * @param l 左边起始值
	 * @param t 上面起始值
	 * @param r 右边结束值
	 * @param b 底面结束值
	 */
	public RealRect(double l, double t, double r, double b) {
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
		Create("RealRect", list);
	}

	/**
	 * 构造函数
	 * @param o EarthView::World::Graphic::RealRect的引用
	 */
	public RealRect(com.earthview.world.graphic.RealRect o) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer oPtr = new BasePointer(o);
		list.add("o", oPtr.get());
		Create("RealRect", list);
	}

	native private long OperatorAssign_RealRect(long pNativeObject, long o);
	/**
	 * 赋值"="的重载
	 * @param o EarthView::World::Graphic::RealRect的引用
	 * @return 返回已赋值类的数据成员
	 */
	public com.earthview.world.graphic.RealRect OperatorAssign(com.earthview.world.graphic.RealRect o)
	{
		long oParamValue = o.nativeObject.pointer;
		long returnValue = OperatorAssign_RealRect(this.nativeObject.pointer, oParamValue);
		com.earthview.world.graphic.RealRect __returnValue = new com.earthview.world.graphic.RealRect(CreatedWhenConstruct.CWC_NotToCreate, "RealRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RealRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RealRect");
		}
		return __returnValue;
	}
	native private double width_void(long pNativeObject);
	/**
	 * 计算宽度
	 * @param  
	 * @return 返回宽度
	 */
	public double width()
	{
		double returnValue = width_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double height_void(long pNativeObject);
	/**
	 * 计算高度
	 * @param  
	 * @return 返回高度
	 */
	public double height()
	{
		double returnValue = height_void(this.nativeObject.pointer);
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
	native private long merge_RealRect(long pNativeObject, long rhs);
	/**
	 * 矩形的融合
	 * @param rhs EarthView::World::Graphic::RealRect类的引用
	 * @return 返回融合后的矩形
	 */
	public com.earthview.world.graphic.RealRect merge(com.earthview.world.graphic.RealRect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = merge_RealRect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.RealRect __returnValue = new com.earthview.world.graphic.RealRect(CreatedWhenConstruct.CWC_NotToCreate, "RealRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RealRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RealRect");
		}
		return __returnValue;
	}
	native private long intersect_RealRect(long pNativeObject, long rhs);
	/**
	 * 矩形的相交
	 * @param rhs EarthView::World::Graphic::RealRect类的引用
	 * @return 返回相交后的矩形
	 */
	public com.earthview.world.graphic.RealRect intersect(com.earthview.world.graphic.RealRect rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = intersect_RealRect(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.RealRect __returnValue = new com.earthview.world.graphic.RealRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RealRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RealRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RealRect");
		}
		return __returnValue;
	}
	public RealRect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RealRect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RealRect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RealRect obj = null;
 		if(baseObj instanceof RealRect)
		{
			obj = (RealRect)baseObj;
		} else {
			obj = new RealRect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RealRect");
			obj.increaseCast();
		}

		return obj;
	}
}
