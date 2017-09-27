package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageSize extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CPageSize", new PageSizeClassFactory());
	}

	public PageSize() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPageSize", null);
	}

	public PageSize(com.earthview.world.display.PageSize sz) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer szPtr = new BasePointer(sz);
		list.add("sz", szPtr.get());
		Create("CPageSize", list);
	}

	public PageSize(double w, double h) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wPtr = new BasePointer(w);
		list.add("w", wPtr.get());
		BasePointer hPtr = new BasePointer(h);
		list.add("h", hPtr.get());
		Create("CPageSize", list);
	}

	native private boolean isEmpty_void(long pNativeObject);
	public boolean isEmpty()
	{
		boolean returnValue = isEmpty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
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
	native private void setWidth_ev_real64(long pNativeObject, double w);
	public void setWidth(double w)
	{
		double wParamValue = w;
		setWidth_ev_real64(this.nativeObject.pointer, wParamValue);
	}
	native private void setHeight_ev_real64(long pNativeObject, double h);
	public void setHeight(double h)
	{
		double hParamValue = h;
		setHeight_ev_real64(this.nativeObject.pointer, hParamValue);
	}
	native private void scale_ev_real64_ev_real64(long pNativeObject, double w, double h);
	///   ev_void transpose();
	public void scale(double w, double h)
	{
		double wParamValue = w;
		double hParamValue = h;
		scale_ev_real64_ev_real64(this.nativeObject.pointer, wParamValue, hParamValue);
	}
	native private long expandedTo_CPageSize(long pNativeObject, long other);
	///   ev_void scale(const CPageSize &s, Qt::AspectRatioMode mode);
	public com.earthview.world.display.PageSize expandedTo(com.earthview.world.display.PageSize other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = expandedTo_CPageSize(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.display.PageSize __returnValue = new com.earthview.world.display.PageSize(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageSize)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		}
		return __returnValue;
	}
	native private long boundedTo_CPageSize(long pNativeObject, long other);
	public com.earthview.world.display.PageSize boundedTo(com.earthview.world.display.PageSize other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = boundedTo_CPageSize(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.display.PageSize __returnValue = new com.earthview.world.display.PageSize(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.PageSize)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPageSize");
		}
		return __returnValue;
	}
	public PageSize(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PageSize(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PageSize fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PageSize obj = null;
 		if(baseObj instanceof PageSize)
		{
			obj = (PageSize)baseObj;
		} else {
			obj = new PageSize(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPageSize");
			obj.increaseCast();
		}

		return obj;
	}
}
