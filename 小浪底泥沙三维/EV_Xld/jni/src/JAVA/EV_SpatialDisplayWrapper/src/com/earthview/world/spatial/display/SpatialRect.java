package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialRect extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialRect", new SpatialRectClassFactory());
	}

	/**
	 * 构造函数
	 * @param   
	 * @return 
	 */
	public SpatialRect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSpatialRect", null);
	}

	public SpatialRect(double left, double top, double width, double height) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer leftPtr = new BasePointer(left);
		list.add("left", leftPtr.get());
		BasePointer topPtr = new BasePointer(top);
		list.add("top", topPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		Create("CSpatialRect", list);
	}

	native private boolean isNull_void(long pNativeObject);
	/**
	 * 判断是否为空
	 * @param   
	 * @return 如果为空，返回true,如果不为空，返回false
	 */
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEmpty_void(long pNativeObject);
	/**
	 * 判断是否为空
	 * @param   
	 * @return 如果为空，返回true,如果不为空，返回false
	 */
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 判断是否有效
	 * @param   
	 * @return 如果有效，返回true,如果无效，返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long normalized_void(long pNativeObject);
	/**
	 * 	恢复状态
	 * @param   
	 * @return 之前的矩形状态
	 */
	public com.earthview.world.spatial.display.SpatialRect normalized()
	{
		long returnValue = normalized_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private double left_void(long pNativeObject);
	/**
	 * 矩形左边x坐标
	 * @param   
	 * @return 左边x坐标
	 */
	public double left()
	{
		double returnValue = left_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double top_void(long pNativeObject);
	/**
	 * 矩形顶部y坐标
	 * @param   
	 * @return 顶部y坐标
	 */
	public double top()
	{
		double returnValue = top_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double right_void(long pNativeObject);
	/**
	 * 矩形右边x坐标
	 * @param   
	 * @return 右边x坐标
	 */
	public double right()
	{
		double returnValue = right_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double bottom_void(long pNativeObject);
	/**
	 * 矩形底部y坐标
	 * @param   
	 * @return 底部y坐标
	 */
	public double bottom()
	{
		double returnValue = bottom_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double x_void(long pNativeObject);
	/**
	 * x坐标
	 * @param   
	 * @return x坐标
	 */
	public double x()
	{
		double returnValue = x_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double y_void(long pNativeObject);
	/**
	 * y坐标
	 * @param   
	 * @return y坐标
	 */
	public double y()
	{
		double returnValue = y_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLeft_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置矩形左边x坐标
	 * @param pos 右边x坐标
	 */
	public void setLeft(double pos)
	{
		double posParamValue = pos;
		setLeft_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setTop_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置矩形顶部y坐标
	 * @param pos 顶部y坐标
	 * @return 
	 */
	public void setTop(double pos)
	{
		double posParamValue = pos;
		setTop_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setRight_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置矩形右边x坐标
	 * @param pos 右边x坐标
	 */
	public void setRight(double pos)
	{
		double posParamValue = pos;
		setRight_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setBottom_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置矩形底部y坐标
	 * @param pos 底部y坐标
	 * @return 
	 */
	public void setBottom(double pos)
	{
		double posParamValue = pos;
		setBottom_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setX_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置x坐标
	 * @param   x坐标
	 * @return 
	 */
	public void setX(double pos)
	{
		double posParamValue = pos;
		setX_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setY_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置y坐标
	 * @param   y坐标
	 * @return 
	 */
	public void setY(double pos)
	{
		double posParamValue = pos;
		setY_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void moveLeft_ev_real64(long pNativeObject, double pos);
	/**
	 * 向左边移动
	 * @param pos 向左边移动到的x坐标值
	 */
	public void moveLeft(double pos)
	{
		double posParamValue = pos;
		moveLeft_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void moveTop_ev_real64(long pNativeObject, double pos);
	/**
	 * 向顶部移动
	 * @param pos 向顶部移动到的y坐标值
	 */
	public void moveTop(double pos)
	{
		double posParamValue = pos;
		moveTop_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void moveRight_ev_real64(long pNativeObject, double pos);
	/**
	 * 向右边移动
	 * @param pos 向右边移动到的x坐标值
	 */
	public void moveRight(double pos)
	{
		double posParamValue = pos;
		moveRight_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void moveBottom_ev_real64(long pNativeObject, double pos);
	/**
	 * 向底部移动
	 * @param pos 向底部移动到的y坐标值
	 */
	public void moveBottom(double pos)
	{
		double posParamValue = pos;
		moveBottom_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void translate_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 转换
	 * @param dx 转换后的x坐标
	 * @param dy 转换后的y坐标
	 */
	public void translate(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
	}
	native private long translated_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 转换
	 * @param dx 转换后的x坐标
	 * @param dy 转换后的y坐标
	 * @return 转换后的矩形
	 */
	public com.earthview.world.spatial.display.SpatialRect translated(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		long returnValue = translated_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private void moveTo_ev_real64_ev_real64(long pNativeObject, double x, double t);
	/**
	 * 移动
	 * @param x 移动到的x坐标
	 * @param y 移动到的y坐标
	 */
	public void moveTo(double x, double t)
	{
		double xParamValue = x;
		double tParamValue = t;
		moveTo_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, tParamValue);
	}
	native private void setRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double w, double h);
	/**
	 * 设置矩形
	 * @param x 设置矩形的x坐标
	 * @param y 设置矩形的y坐标
	 * @param w 设置矩形的宽度
	 * @param h 设置矩形的高度
	 */
	public void setRect(double x, double y, double w, double h)
	{
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		setRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void getRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long x, long y, long w, long h);
	/**
	 * 获取矩形
	 * @param x 获取矩形的x坐标
	 * @param y 获取矩形的y坐标
	 * @param w 获取矩形的宽度
	 * @param h 获取矩形的高度
	 */
	public void getRect(DoublePointer x, DoublePointer y, DoublePointer w, DoublePointer h)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long wParamValue = (w == null ? 0L : w.nativeObject.pointer);
		long hParamValue = (h == null ? 0L : h.nativeObject.pointer);
		getRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void setCoords_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x1, double y1, double x2, double y2);
	/**
	 * 设置矩形坐标
	 * @param x1 设置矩形起点的坐标x1
	 * @param y1 设置矩形起点的坐标y1
	 * @param x2 设置矩形终点的坐标x2
	 * @param y2 设置矩形终点的坐标y2
	 */
	public void setCoords(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		setCoords_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private void getCoords_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long x1, long y1, long x2, long y2);
	/**
	 * 获取矩形坐标
	 * @param x1 矩形起点的坐标x1
	 * @param y1 矩形起点的坐标y1
	 * @param x2 矩形终点的坐标x2
	 * @param y2 矩形终点的坐标y2
	 */
	public void getCoords(DoublePointer x1, DoublePointer y1, DoublePointer x2, DoublePointer y2)
	{
		long x1ParamValue = (x1 == null ? 0L : x1.nativeObject.pointer);
		long y1ParamValue = (y1 == null ? 0L : y1.nativeObject.pointer);
		long x2ParamValue = (x2 == null ? 0L : x2.nativeObject.pointer);
		long y2ParamValue = (y2 == null ? 0L : y2.nativeObject.pointer);
		getCoords_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private void adjust_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x1, double y1, double x2, double y2);
	/**
	 * 调整矩形
	 * @param x1 矩形起点的坐标x1
	 * @param y1 矩形起点的坐标y1
	 * @param x2 矩形终点的坐标x2
	 * @param y2 矩形终点的坐标y2
	 */
	public void adjust(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		adjust_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private long adjusted_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x1, double y1, double x2, double y2);
	/**
	 * 调整矩形
	 * @param x1 矩形起点的坐标x1
	 * @param y1 矩形起点的坐标y1
	 * @param x2 矩形终点的坐标x2
	 * @param y2 矩形终点的坐标y2
	 * @return 调整后的空间矩形
	 */
	public com.earthview.world.spatial.display.SpatialRect adjusted(double x1, double y1, double x2, double y2)
	{
		double x1ParamValue = x1;
		double y1ParamValue = y1;
		double x2ParamValue = x2;
		double y2ParamValue = y2;
		long returnValue = adjusted_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private double width_void(long pNativeObject);
	/**
	 * 矩形的宽度
	 * @param  
	 * @return 矩形的宽度
	 */
	public double width()
	{
		double returnValue = width_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double height_void(long pNativeObject);
	/**
	 * 矩形的高度
	 * @param  
	 * @return 矩形的高度
	 */
	public double height()
	{
		double returnValue = height_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWidth_ev_real64(long pNativeObject, double w);
	/**
	 * 设置矩形的宽
	 * @param  h 矩形的宽
	 */
	public void setWidth(double w)
	{
		double wParamValue = w;
		setWidth_ev_real64(this.nativeObject.pointer, wParamValue);
	}
	native private void setHeight_ev_real64(long pNativeObject, double h);
	/**
	 * 设置矩形的高
	 * @param  h 矩形的高
	 */
	public void setHeight(double h)
	{
		double hParamValue = h;
		setHeight_ev_real64(this.nativeObject.pointer, hParamValue);
	}
	native private boolean contains_ev_real64_ev_real64(long pNativeObject, double x, double y);
	public boolean contains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = contains_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean contains_CSpatialRect(long pNativeObject, long r);
	public boolean contains(com.earthview.world.spatial.display.SpatialRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = contains_CSpatialRect(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private long unite_CSpatialRect(long pNativeObject, long r);
	public com.earthview.world.spatial.display.SpatialRect unite(com.earthview.world.spatial.display.SpatialRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = unite_CSpatialRect(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long united_CSpatialRect(long pNativeObject, long other);
	/// ### Qt 5: make QT4_SUPPORT
	public com.earthview.world.spatial.display.SpatialRect united(com.earthview.world.spatial.display.SpatialRect other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = united_CSpatialRect(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long intersect_CSpatialRect(long pNativeObject, long r);
	public com.earthview.world.spatial.display.SpatialRect intersect(com.earthview.world.spatial.display.SpatialRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = intersect_CSpatialRect(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long intersected_CSpatialRect(long pNativeObject, long other);
	/// ### Qt 5: make QT4_SUPPORT
	public com.earthview.world.spatial.display.SpatialRect intersected(com.earthview.world.spatial.display.SpatialRect other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = intersected_CSpatialRect(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private boolean intersects_CSpatialRect(long pNativeObject, long r);
	public boolean intersects(com.earthview.world.spatial.display.SpatialRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = intersects_CSpatialRect(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	public SpatialRect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialRect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SpatialRect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialRect obj = null;
 		if(baseObj instanceof SpatialRect)
		{
			obj = (SpatialRect)baseObj;
		} else {
			obj = new SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialRect");
			obj.increaseCast();
		}

		return obj;
	}
}
