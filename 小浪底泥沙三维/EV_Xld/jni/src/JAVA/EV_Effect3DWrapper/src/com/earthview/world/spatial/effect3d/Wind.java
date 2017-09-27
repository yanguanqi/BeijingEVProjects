package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 风控制类
 */
public class Wind extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWind", new WindClassFactory());
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
	native private boolean isWindEnabled_void(long pNativeObject);
	/**
	 * 获取风的可用性
	 * @return 风速向量
	 */
	public boolean isWindEnabled()
	{
		boolean returnValue = isWindEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWindEnabled_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置风的可用性
	 * @return 风速向量
	 */
	public void setWindEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setWindEnabled_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private long getWindSpeed_void(long pNativeObject);
	/**
	 * 获取风速
	 * @return 风速向量
	 */
	public com.earthview.world.spatial.math.Vector3 getWindSpeed()
	{
		long returnValue = getWindSpeed_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setWindSpeed_CVector3(long pNativeObject, long speed);
	/**
	 * 设置风速向量
	 * @param speed 风速向量
	 */
	public void setWindSpeed(com.earthview.world.spatial.math.Vector3 speed)
	{
		long speedParamValue = speed.nativeObject.pointer;
		setWindSpeed_CVector3(this.nativeObject.pointer, speedParamValue);
	}
	native private long getHeightRange_void(long pNativeObject);
	/**
	 * 获取高度范围
	 * @return 高度范围
	 */
	public com.earthview.world.spatial.effect3d.HeightRange getHeightRange()
	{
		long returnValue = getHeightRange_void(this.nativeObject.pointer);
		com.earthview.world.spatial.effect3d.HeightRange __returnValue = new com.earthview.world.spatial.effect3d.HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.HeightRange)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHeightRange");
		}
		return __returnValue;
	}
	native private void setHeightRange_CHeightRange(long pNativeObject, long height);
	/**
	 * 设置高度范围
	 * @param height 高度范围
	 */
	public void setHeightRange(com.earthview.world.spatial.effect3d.HeightRange height)
	{
		long heightParamValue = height.nativeObject.pointer;
		setHeightRange_CHeightRange(this.nativeObject.pointer, heightParamValue);
	}
	native private void setWindDirection_EVWindDirection(long pNativeObject, int direction);
	/**
	 * 设置风向
	 * @param direction 风向
	 */
	public void setWindDirection(com.earthview.world.spatial.effect3d.EVWindDirection direction)
	{
		int directionParamValue = direction.getValue();
		setWindDirection_EVWindDirection(this.nativeObject.pointer, directionParamValue);
	}
	native private int getWindDirection_void(long pNativeObject);
	/**
	 * 获取风向
	 * @return 风向
	 */
	public com.earthview.world.spatial.effect3d.EVWindDirection getWindDirection()
	{
		int returnValue = getWindDirection_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVWindDirection.toEnum(returnValue);
	}
	native private void setWindVelocity_Real(long pNativeObject, double velocity);
	/**
	 * 设置风速
	 * @param velocity 风速
	 */
	public void setWindVelocity(double velocity)
	{
		double velocityParamValue = velocity;
		setWindVelocity_Real(this.nativeObject.pointer, velocityParamValue);
	}
	native private double getWindVelocity_void(long pNativeObject);
	/**
	 * 获取风速
	 * @return 风速
	 */
	public double getWindVelocity()
	{
		double returnValue = getWindVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆风对象
	 * @return 风对象指针
	 */
	public com.earthview.world.spatial.effect3d.Wind ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.Wind __returnValue = new com.earthview.world.spatial.effect3d.Wind(CreatedWhenConstruct.CWC_NotToCreate, "CWind");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.Wind)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWind");
		}
		return __returnValue;
	}
	public Wind(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wind(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Wind fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wind obj = null;
 		if(baseObj instanceof Wind)
		{
			obj = (Wind)baseObj;
		} else {
			obj = new Wind(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWind");
			obj.increaseCast();
		}

		return obj;
	}
}
