package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///手势事件坐标点
public class MotionEventPoint extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::MotionEventPoint", new MotionEventPointClassFactory());
	}

	public MotionEventPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MotionEventPoint", null);
	}

	public MotionEventPoint(com.earthview.world.spatial.systemui.MotionEventPoint point) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pointPtr = new BasePointer(point);
		list.add("point", pointPtr.get());
		Create("MotionEventPoint", list);
	}

	public MotionEventPoint(double x, double y) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		Create("MotionEventPoint", list);
	}

	native private double getX_void(long pNativeObject);
	public double getX()
	{
		double returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getY_void(long pNativeObject);
	public double getY()
	{
		double returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setX_ev_real64(long pNativeObject, double value);
	public void setX(double value)
	{
		double valueParamValue = value;
		setX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setY_ev_real64(long pNativeObject, double value);
	public void setY(double value)
	{
		double valueParamValue = value;
		setY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setPoint_ev_real64_ev_real64(long pNativeObject, double x, double y);
	public void setPoint(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		setPoint_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	public MotionEventPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MotionEventPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MotionEventPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MotionEventPoint obj = null;
 		if(baseObj instanceof MotionEventPoint)
		{
			obj = (MotionEventPoint)baseObj;
		} else {
			obj = new MotionEventPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MotionEventPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
