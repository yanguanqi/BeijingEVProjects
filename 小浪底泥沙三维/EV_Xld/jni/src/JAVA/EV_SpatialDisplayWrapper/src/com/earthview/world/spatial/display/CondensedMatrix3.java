package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CondensedMatrix3 extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CCondensedMatrix3", new CondensedMatrix3ClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param   
	 * @return 
	 */
	public CondensedMatrix3() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCondensedMatrix3", null);
	}

	native private void translate_ev_real64_ev_real64(long pNativeObject, double offsetX, double offsetY);
	/**
	 * 转化
	 * @param  offsetX  X的偏移量
	 * @param  offsetY Y的偏移量
	 * @return 
	 */
	public void translate(double offsetX, double offsetY)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue);
	}
	native private void scale_ev_real64_ev_real64(long pNativeObject, double scaleX, double scaleY);
	/**
	 * 比例
	 * @param scaleX X坐标的比例
	 * @param scaleY Y坐标的比例
	 * @return 
	 */
	public void scale(double scaleX, double scaleY)
	{
		double scaleXParamValue = scaleX;
		double scaleYParamValue = scaleY;
		scale_ev_real64_ev_real64(this.nativeObject.pointer, scaleXParamValue, scaleYParamValue);
	}
	native private void rotate_ev_real64(long pNativeObject, double angle);
	/**
	 * 旋转
	 * @param  angle  旋转的角度
	 * @return 
	 */
	public void rotate(double angle)
	{
		double angleParamValue = angle;
		rotate_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void rotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double centerX, double centerY);
	/**
	 * 旋转的位置
	 * @param  angle  旋转的角度
	 * @param  centerX  旋转的X坐标
	 * @param  centerX  旋转的Y坐标
	 * @return 
	 */
	public void rotateAt(double angle, double centerX, double centerY)
	{
		double angleParamValue = angle;
		double centerXParamValue = centerX;
		double centerYParamValue = centerY;
		rotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, centerXParamValue, centerYParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重新设置
	 * @param   
	 * @return 
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private long invert_void(long pNativeObject);
	/**
	 * 使反转
	 * @param   
	 * @return 
	 */
	public com.earthview.world.spatial.display.CondensedMatrix3 invert()
	{
		long returnValue = invert_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.CondensedMatrix3 __returnValue = new com.earthview.world.spatial.display.CondensedMatrix3(CreatedWhenConstruct.CWC_NotToCreate, "CCondensedMatrix3");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.CondensedMatrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCondensedMatrix3");
		}
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @param   
	 * @return 
	 */
	public com.earthview.world.spatial.display.CondensedMatrix3 ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.CondensedMatrix3 __returnValue = new com.earthview.world.spatial.display.CondensedMatrix3(CreatedWhenConstruct.CWC_NotToCreate, "CCondensedMatrix3");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.CondensedMatrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCondensedMatrix3");
		}
		return __returnValue;
	}
	native private void transform_ev_real64_ev_real64_ev_int32(long pNativeObject, long x, long y, int count);
	/**
	 * 变换
	 * @param  x  变换的X坐标
	 * @param  y  变换的Y坐标
	 * @param  count  变换的数目
	 * @return 
	 */
	public void transform(DoublePointer x, DoublePointer y, int count)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		int countParamValue = count;
		transform_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue);
	}
	public CondensedMatrix3(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CondensedMatrix3(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CondensedMatrix3 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CondensedMatrix3 obj = null;
 		if(baseObj instanceof CondensedMatrix3)
		{
			obj = (CondensedMatrix3)baseObj;
		} else {
			obj = new CondensedMatrix3(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCondensedMatrix3");
			obj.increaseCast();
		}

		return obj;
	}
}
