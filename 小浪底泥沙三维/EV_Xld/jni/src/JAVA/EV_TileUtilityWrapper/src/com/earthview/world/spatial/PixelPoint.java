package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 像素点类
 */
public class PixelPoint extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CPixelPoint", new PixelPointClassFactory());
	}

	native private long getX_void(long pNativeObject);
	/**
	 * 获取坐标点X值
	 * @return 坐标X值
	 */
	public long getX()
	{
		long returnValue = getX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getY_void(long pNativeObject);
	/**
	 * 获取坐标点Y值
	 * @return 坐标Y值
	 */
	public long getY()
	{
		long returnValue = getY_void(this.nativeObject.pointer);
		return returnValue;
	}
	public PixelPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PixelPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PixelPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PixelPoint obj = null;
 		if(baseObj instanceof PixelPoint)
		{
			obj = (PixelPoint)baseObj;
		} else {
			obj = new PixelPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPixelPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
