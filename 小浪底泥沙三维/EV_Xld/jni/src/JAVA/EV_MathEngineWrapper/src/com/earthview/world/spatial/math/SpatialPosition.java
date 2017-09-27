package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialPosition extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CSpatialPosition", new SpatialPositionClassFactory());
	}

	public SpatialPosition() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSpatialPosition", null);
	}

	native private void setPos_double_double_double(long pNativeObject, double x, double y, double z);
	/**
	 * 设置位置
	 * @param x x轴位置
	 * @param y y轴位置
	 * @param z z轴位置
	 */
	public void setPos(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setPos_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void getPos_double_double_double(long pNativeObject, long x, long y, long z);
	/**
	 * 获取位置
	 * @param x x坐标
	 * @param y y坐标
	 * @param z z坐标
	 */
	public void getPos(DoublePointer x, DoublePointer y, DoublePointer z)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getPos_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setScale_double_double_double(long pNativeObject, double x, double y, double z);
	/**
	 * 设置缩放
	 * @param x x
	 * @param y y
	 * @param z z
	 */
	public void setScale(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		setScale_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void getScale_double_double_double(long pNativeObject, long x, long y, long z);
	/**
	 * 获取缩放
	 * @param x x
	 * @param y y
	 * @param z z
	 */
	public void getScale(DoublePointer x, DoublePointer y, DoublePointer z)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		getScale_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
	}
	native private void setRotation_double_double_double_double(long pNativeObject, double x, double y, double z, double w);
	/**
	 * 设置旋转
	 * @param x x
	 * @param y y
	 * @param z z
	 * @param w w
	 */
	public void setRotation(double x, double y, double z, double w)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		double wParamValue = w;
		setRotation_double_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, wParamValue);
	}
	native private void getRotation_double_double_double_double(long pNativeObject, long x, long y, long z, long w);
	/**
	 * 获取旋转
	 * @param x x
	 * @param y y
	 * @param z z
	 * @param w w
	 */
	public void getRotation(DoublePointer x, DoublePointer y, DoublePointer z, DoublePointer w)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		long wParamValue = w.nativeObject.pointer;
		getRotation_double_double_double_double(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, wParamValue);
	}
	public SpatialPosition(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialPosition(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SpatialPosition fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialPosition obj = null;
 		if(baseObj instanceof SpatialPosition)
		{
			obj = (SpatialPosition)baseObj;
		} else {
			obj = new SpatialPosition(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialPosition");
			obj.increaseCast();
		}

		return obj;
	}
}
