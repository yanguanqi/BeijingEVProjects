package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矩形类定义了矩形操作
 */
public class Rectangle extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::Rectangle", new RectangleClassFactory());
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
	
	native private boolean inside_Real_Real(long pNativeObject, double x, double y);
	/**
	 * 判断二维坐标是否在矩形内
	 * @param x x坐标
	 * @param y y坐标
	 * @return 在矩形内返回true，否则false
	 */
	public boolean inside(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = inside_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Rectangle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Rectangle", null);
	}

	public Rectangle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Rectangle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Rectangle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Rectangle obj = null;
 		if(baseObj instanceof Rectangle)
		{
			obj = (Rectangle)baseObj;
		} else {
			obj = new Rectangle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Rectangle");
			obj.increaseCast();
		}

		return obj;
	}
}
