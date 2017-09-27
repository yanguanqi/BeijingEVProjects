package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubLabelElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSubLabelElement", new SubLabelElementClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SubLabelElement() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSubLabelElement", null);
	}

	native private double getRatateAngle_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 */
	public double getRatateAngle()
	{
		double returnValue = getRatateAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLabelText_void(long pNativeObject);
	/**
	 * 获取标注内容
	 */
	public StringPointer getLabelText()
	{
		long returnValue = getLabelText_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getLocation_void(long pNativeObject);
	/**
	 * 获取标注位置
	 */
	public com.earthview.world.spatial.geometry.Igeometry getLocation()
	{
		long returnValue = getLocation_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private void setRotateAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置标注旋转角度
	 */
	public void setRotateAngle(double angle)
	{
		double angleParamValue = angle;
		setRotateAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setLabelText_EVString(long pNativeObject, String label);
	/**
	 * 设置标注内容
	 */
	public void setLabelText(String label)
	{
		String labelParamValue = label;
		setLabelText_EVString(this.nativeObject.pointer, labelParamValue);
	}
	native private void setLocation_IGeometry(long pNativeObject, long location);
	/**
	 * 设置标注位置
	 */
	public void setLocation(com.earthview.world.spatial.geometry.Igeometry location)
	{
		long locationParamValue = (location == null ? 0L : location.nativeObject.pointer);
		setLocation_IGeometry(this.nativeObject.pointer, locationParamValue);
	}
	public SubLabelElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubLabelElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubLabelElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubLabelElement obj = null;
 		if(baseObj instanceof SubLabelElement)
		{
			obj = (SubLabelElement)baseObj;
		} else {
			obj = new SubLabelElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSubLabelElement");
			obj.increaseCast();
		}

		return obj;
	}
}
