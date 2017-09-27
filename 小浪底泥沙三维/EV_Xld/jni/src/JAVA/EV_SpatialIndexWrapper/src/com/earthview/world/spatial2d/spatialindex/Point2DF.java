package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////
//class Point2DF
////////////////////////////////////////////////////////////
public class Point2DF extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::Point2DF", new Point2DFClassFactory());
	}

	/**
	 * 构造函数
	 * @param dfX X坐标
	 * @param dfY Y坐标
	 */
	public Point2DF(float dfX, float dfY) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfXPtr = new BasePointer(dfX);
		list.add("dfX", dfXPtr.get());
		BasePointer dfYPtr = new BasePointer(dfY);
		list.add("dfY", dfYPtr.get());
		Create("Point2DF", list);
	}

	/**
	 * 默认构造函数
	 */
	public Point2DF() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2DF", null);
	}

	native private boolean OperatorEquals_Point2DF(long pNativeObject, long other);
	/**
	 * 判断相等函数
	 * @return true,相等，false不相等
	 */
	public boolean OperatorEquals(com.earthview.world.spatial2d.spatialindex.Point2DF other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_Point2DF(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_Point2DF(long pNativeObject, long other);
	/**
	 * 判断不等函数
	 * @return true,不相等，false相等
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial2d.spatialindex.Point2DF other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_Point2DF(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private float get_X_void(long pNativeObject);
	public float get_X()
	{
		float jniValue = get_X_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_X_ev_real32 (long pNativeObject, float value);
	public void set_X(float X)
	{
		float XParamValue = X;
		
		set_X_ev_real32(this.nativeObject.pointer, XParamValue);
	}
	
	native private float get_Y_void(long pNativeObject);
	public float get_Y()
	{
		float jniValue = get_Y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Y_ev_real32 (long pNativeObject, float value);
	public void set_Y(float Y)
	{
		float YParamValue = Y;
		
		set_Y_ev_real32(this.nativeObject.pointer, YParamValue);
	}
	
	public Point2DF(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2DF(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2DF fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2DF obj = null;
 		if(baseObj instanceof Point2DF)
		{
			obj = (Point2DF)baseObj;
		} else {
			obj = new Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2DF");
			obj.increaseCast();
		}

		return obj;
	}
}
