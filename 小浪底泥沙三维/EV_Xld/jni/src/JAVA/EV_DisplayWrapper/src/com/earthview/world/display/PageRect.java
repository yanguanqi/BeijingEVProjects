package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageRect extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CPageRect", new PageRectClassFactory());
	}

	public PageRect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPageRect", null);
	}

	public PageRect(double top, double left, com.earthview.world.display.PageSize page_size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer topPtr = new BasePointer(top);
		list.add("top", topPtr.get());
		BasePointer leftPtr = new BasePointer(left);
		list.add("left", leftPtr.get());
		BasePointer page_sizePtr = new BasePointer(page_size);
		list.add("page_size", page_sizePtr.get());
		Create("CPageRect", list);
	}

	public PageRect(double left, double top, double width, double height) {
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
		Create("CPageRect", list);
	}

	native private boolean isValid_void(long pNativeObject);
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double left_void(long pNativeObject);
	public double left()
	{
		double returnValue = left_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double top_void(long pNativeObject);
	public double top()
	{
		double returnValue = top_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double right_void(long pNativeObject);
	public double right()
	{
		double returnValue = right_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double bottom_void(long pNativeObject);
	public double bottom()
	{
		double returnValue = bottom_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLeft_ev_real64(long pNativeObject, double pos);
	public void setLeft(double pos)
	{
		double posParamValue = pos;
		setLeft_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setTop_ev_real64(long pNativeObject, double pos);
	public void setTop(double pos)
	{
		double posParamValue = pos;
		setTop_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setRight_ev_real64(long pNativeObject, double pos);
	public void setRight(double pos)
	{
		double posParamValue = pos;
		setRight_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void setBottom_ev_real64(long pNativeObject, double pos);
	public void setBottom(double pos)
	{
		double posParamValue = pos;
		setBottom_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private void moveCenter_ev_real64_ev_real64(long pNativeObject, double x, double y);
	///   ev_void center(ev_real64 & x, ev_real64 & y) const;
	public void moveCenter(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		moveCenter_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void translate_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	public void translate(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
	}
	native private void setRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double w, double h);
	///   inline CPageRect translated(ev_real64 dx, ev_real64 dy) const;
	public void setRect(double x, double y, double w, double h)
	{
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		setRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void getRect_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long x, long y, long w, long h);
	public void getRect(DoublePointer x, DoublePointer y, DoublePointer w, DoublePointer h)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long wParamValue = (w == null ? 0L : w.nativeObject.pointer);
		long hParamValue = (h == null ? 0L : h.nativeObject.pointer);
		getRect_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void getCoords_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long x1, long y1, long x2, long y2);
	public void getCoords(DoublePointer x1, DoublePointer y1, DoublePointer x2, DoublePointer y2)
	{
		long x1ParamValue = (x1 == null ? 0L : x1.nativeObject.pointer);
		long y1ParamValue = (y1 == null ? 0L : y1.nativeObject.pointer);
		long x2ParamValue = (x2 == null ? 0L : x2.nativeObject.pointer);
		long y2ParamValue = (y2 == null ? 0L : y2.nativeObject.pointer);
		getCoords_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private double width_void(long pNativeObject);
	public double width()
	{
		double returnValue = width_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double height_void(long pNativeObject);
	public double height()
	{
		double returnValue = height_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean contains_ev_real64_ev_real64(long pNativeObject, double x, double y);
	public boolean contains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = contains_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean contains_ev_real64_ev_real64_bool(long pNativeObject, double x, double y, boolean proper);
	/// inline methods, _don't_ merge these
	public boolean contains(double x, double y, boolean proper)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean properParamValue = proper;
		boolean returnValue = contains_ev_real64_ev_real64_bool(this.nativeObject.pointer, xParamValue, yParamValue, properParamValue);
		return returnValue;
	}
	native private long unite_CPageRect(long pNativeObject, long r);
	///   bool contains(const CPageRect &r, bool proper = false) const;
	public com.earthview.world.display.PageRect unite(com.earthview.world.display.PageRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = unite_CPageRect(this.nativeObject.pointer, rParamValue);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}
	native private long united_CPageRect(long pNativeObject, long other);
	/// ### Qt 5: make QT4_SUPPORT
	public com.earthview.world.display.PageRect united(com.earthview.world.display.PageRect other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = united_CPageRect(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}
	native private long intersect_CPageRect(long pNativeObject, long r);
	public com.earthview.world.display.PageRect intersect(com.earthview.world.display.PageRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = intersect_CPageRect(this.nativeObject.pointer, rParamValue);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}
	native private long intersected_CPageRect(long pNativeObject, long other);
	/// ### Qt 5: make QT4_SUPPORT
	public com.earthview.world.display.PageRect intersected(com.earthview.world.display.PageRect other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = intersected_CPageRect(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.display.PageRect __returnValue = new com.earthview.world.display.PageRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageRect");
		}
		return __returnValue;
	}
	native private boolean intersects_CPageRect(long pNativeObject, long r);
	public boolean intersects(com.earthview.world.display.PageRect r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = intersects_CPageRect(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	public PageRect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PageRect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PageRect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PageRect obj = null;
 		if(baseObj instanceof PageRect)
		{
			obj = (PageRect)baseObj;
		} else {
			obj = new PageRect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPageRect");
			obj.increaseCast();
		}

		return obj;
	}
}
