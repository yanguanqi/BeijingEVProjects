package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雨雪系统(粒子系统实现)
 */
public class RainSnowSystem extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CRainSnowSystem", new RainSnowSystemClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RainSnowSystem(com.earthview.world.graphic.SceneManager ref_sceneMgr, com.earthview.world.spatial.effect3d.EVPrecipitationType type, com.earthview.world.spatial.geometry.Envelope envelope) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer envelopePtr = new BasePointer(envelope);
		list.add("envelope", envelopePtr.get());
		Create("CRainSnowSystem", list);
	}

	/**
	 * 构造函数
	 */
	public RainSnowSystem(com.earthview.world.graphic.SceneManager ref_sceneMgr, com.earthview.world.spatial.effect3d.EVPrecipitationType type, com.earthview.world.spatial.geometry.Envelope envelope, com.earthview.world.spatial.effect3d.EVPrecipitationStrength strength) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer envelopePtr = new BasePointer(envelope);
		list.add("envelope", envelopePtr.get());
		BasePointer strengthPtr = new BasePointer(strength);
		list.add("strength", strengthPtr.get());
		Create("CRainSnowSystem", list);
	}

	native private void setType_EVPrecipitationType(long pNativeObject, int type);
	/**
	 * 设置降水类型
	 */
	public void setType(com.earthview.world.spatial.effect3d.EVPrecipitationType type)
	{
		int typeParamValue = type.getValue();
		setType_EVPrecipitationType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取降水类型
	 */
	public com.earthview.world.spatial.effect3d.EVPrecipitationType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.effect3d.EVPrecipitationType.toEnum(returnValue);
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
	native private double getMaxVelocity_void(long pNativeObject);
	/**
	 * 获取最大速度
	 */
	public double getMaxVelocity()
	{
		double returnValue = getMaxVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxVelocity_Real(long pNativeObject, double maxVelocity);
	/**
	 * 设置最大速度
	 */
	public void setMaxVelocity(double maxVelocity)
	{
		double maxVelocityParamValue = maxVelocity;
		setMaxVelocity_Real(this.nativeObject.pointer, maxVelocityParamValue);
	}
	native private double getMinVelocity_void(long pNativeObject);
	/**
	 * 获取最小速度
	 */
	public double getMinVelocity()
	{
		double returnValue = getMinVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinVelocity_Real(long pNativeObject, double minVelocity);
	/**
	 * 设置最小速度
	 */
	public void setMinVelocity(double minVelocity)
	{
		double minVelocityParamValue = minVelocity;
		setMinVelocity_Real(this.nativeObject.pointer, minVelocityParamValue);
	}
	native private double getVelocity_void(long pNativeObject);
	/**
	 * 获取速度
	 */
	public double getVelocity()
	{
		double returnValue = getVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVelocity_Real(long pNativeObject, double velocity);
	/**
	 * 设置速度
	 */
	public void setVelocity(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity_Real(this.nativeObject.pointer, velocityParamValue);
	}
	native private double getParticleWidth_void(long pNativeObject);
	/**
	 * 获取粒子宽度
	 */
	public double getParticleWidth()
	{
		double returnValue = getParticleWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParticleWidth_Real(long pNativeObject, double width);
	/**
	 * 设置粒子宽度
	 */
	public void setParticleWidth(double width)
	{
		double widthParamValue = width;
		setParticleWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private double getParticleHeight_void(long pNativeObject);
	/**
	 * 获取粒子高度
	 */
	public double getParticleHeight()
	{
		double returnValue = getParticleHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParticleHeight_Real(long pNativeObject, double height);
	/**
	 * 设置粒子高度
	 */
	public void setParticleHeight(double height)
	{
		double heightParamValue = height;
		setParticleHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取可见性
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
	native private long getWorldPosition_void(long pNativeObject);
	/**
	 * 获取世界坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getWorldPosition()
	{
		long returnValue = getWorldPosition_void(this.nativeObject.pointer);
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
	native private void setWorldPosition_CVector3(long pNativeObject, long pos);
	/**
	 * 设置世界坐标
	 */
	public void setWorldPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		setWorldPosition_CVector3(this.nativeObject.pointer, posParamValue);
	}
	native private long getWindSpeed_void(long pNativeObject);
	/**
	 * 获取风速
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
	 * 设置风速
	 */
	public void setWindSpeed(com.earthview.world.spatial.math.Vector3 speed)
	{
		long speedParamValue = speed.nativeObject.pointer;
		setWindSpeed_CVector3(this.nativeObject.pointer, speedParamValue);
	}
	native private double getHeight_void(long pNativeObject);
	/**
	 * 获取高度
	 */
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHeight_Real(long pNativeObject, double height);
	/**
	 * 设置高度
	 */
	public void setHeight(double height)
	{
		double heightParamValue = height;
		setHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private void update_CVector3(long pNativeObject, long cameraPos);
	/**
	 * 更新粒子
	 */
	public void update(com.earthview.world.spatial.math.Vector3 cameraPos)
	{
		long cameraPosParamValue = cameraPos.nativeObject.pointer;
		update_CVector3(this.nativeObject.pointer, cameraPosParamValue);
	}
	native private void destroy_void(long pNativeObject);
	/**
	 * 销毁粒子
	 */
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	public RainSnowSystem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RainSnowSystem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RainSnowSystem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RainSnowSystem obj = null;
 		if(baseObj instanceof RainSnowSystem)
		{
			obj = (RainSnowSystem)baseObj;
		} else {
			obj = new RainSnowSystem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRainSnowSystem");
			obj.increaseCast();
		}

		return obj;
	}
}
