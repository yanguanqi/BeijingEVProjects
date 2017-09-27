package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 星空控制类
 */
public class Stars extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CStars", new StarsClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Stars() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CStars", null);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置可见性
	 * @param visible 可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取可见性
	 * @return 可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStarsBrightness_Real(long pNativeObject, double brightness);
	/**
	 * 设置星星亮度
	 * @param brihtness 亮度（0.0~1.0）
	 */
	public void setStarsBrightness(double brightness)
	{
		double brightnessParamValue = brightness;
		setStarsBrightness_Real(this.nativeObject.pointer, brightnessParamValue);
	}
	native private double getStarsBrightness_void(long pNativeObject);
	/**
	 * 返回当前亮度
	 * @return 星星亮度
	 */
	public double getStarsBrightness()
	{
		double returnValue = getStarsBrightness_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Stars(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Stars(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Stars fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Stars obj = null;
 		if(baseObj instanceof Stars)
		{
			obj = (Stars)baseObj;
		} else {
			obj = new Stars(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStars");
			obj.increaseCast();
		}

		return obj;
	}
}
