package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 　闪电管理类
 */
public class LightningManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CLightningManager", new LightningManagerClassFactory());
	}

	native private void remove_void(long pNativeObject);
	/**
	 * 移除
	 */
	public void remove()
	{
		remove_void(this.nativeObject.pointer);
	}
	native private void update_Real_CVector3(long pNativeObject, double timeElapsed, long cameraPos);
	/**
	 * 根据流逝时间更新闪电对象
	 * @param timeElapsed 帧距
	 * @param cameraPos 摄像机位置
	 */
	public void update(double timeElapsed, com.earthview.world.spatial.math.Vector3 cameraPos)
	{
		double timeElapsedParamValue = timeElapsed;
		long cameraPosParamValue = cameraPos.nativeObject.pointer;
		update_Real_CVector3(this.nativeObject.pointer, timeElapsedParamValue, cameraPosParamValue);
	}
	native private void setMaxTimeInterval_Real(long pNativeObject, double interval);
	/**
	 * 设置闪电平均显示时长
	 * @param color 颜色
	 */
	public void setMaxTimeInterval(double interval)
	{
		double intervalParamValue = interval;
		setMaxTimeInterval_Real(this.nativeObject.pointer, intervalParamValue);
	}
	native private double getMaxTimeInterval_void(long pNativeObject);
	/**
	 * 获取闪电平均显示时长
	 */
	public double getMaxTimeInterval()
	{
		double returnValue = getMaxTimeInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private double getIntensity_void(long pNativeObject);
	/**
	 * 获取密度
	 */
	public double getIntensity()
	{
		double returnValue = getIntensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntensity_Real(long pNativeObject, double intensity);
	/**
	 * 设置密度
	 */
	public void setIntensity(double intensity)
	{
		double intensityParamValue = intensity;
		setIntensity_Real(this.nativeObject.pointer, intensityParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 返回可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置可见性
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private double getMaxHeight_void(long pNativeObject);
	/**
	 * 获取闪电最大高度
	 */
	public double getMaxHeight()
	{
		double returnValue = getMaxHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxHeight_Real(long pNativeObject, double height);
	/**
	 * 设置闪电最大高度
	 */
	public void setMaxHeight(double height)
	{
		double heightParamValue = height;
		setMaxHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private double getMinHeight_void(long pNativeObject);
	/**
	 * 获取最小高度
	 */
	public double getMinHeight()
	{
		double returnValue = getMinHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinHeight_Real(long pNativeObject, double height);
	/**
	 * 设置最小高度
	 */
	public void setMinHeight(double height)
	{
		double heightParamValue = height;
		setMinHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private int getMaxLightningCount_void(long pNativeObject);
	/**
	 * 获取闪电数量
	 */
	public int getMaxLightningCount()
	{
		int returnValue = getMaxLightningCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxLightningCount_ev_int32(long pNativeObject, int count);
	/**
	 * 设置闪电最大数量
	 */
	public void setMaxLightningCount(int count)
	{
		int countParamValue = count;
		setMaxLightningCount_ev_int32(this.nativeObject.pointer, countParamValue);
	}
	native private void setReflectable_ev_bool(long pNativeObject, boolean reflect);
	/**
	 * 设置闪电反射
	 */
	public void setReflectable(boolean reflect)
	{
		boolean reflectParamValue = reflect;
		setReflectable_ev_bool(this.nativeObject.pointer, reflectParamValue);
	}
	native private void setRefractable_ev_bool(long pNativeObject, boolean refract);
	/**
	 * 设置闪电折射
	 */
	public void setRefractable(boolean refract)
	{
		boolean refractParamValue = refract;
		setRefractable_ev_bool(this.nativeObject.pointer, refractParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空闪电
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public LightningManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LightningManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LightningManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LightningManager obj = null;
 		if(baseObj instanceof LightningManager)
		{
			obj = (LightningManager)baseObj;
		} else {
			obj = new LightningManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLightningManager");
			obj.increaseCast();
		}

		return obj;
	}
}
