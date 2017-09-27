package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效数据集表中特效记录对象
 */
public class EffectInstance extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInstance", new EffectInstanceClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectInstance() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectInstance", null);
	}

	native private long getId_void(long pNativeObject);
	/**
	 * 返回实例ID
	 * @param  
	 * @return 实例ID
	 */
	public long getId()
	{
		long returnValue = getId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setId_ev_uint32(long pNativeObject, long val);
	/**
	 * 设置实例ID
	 * @param val 实例ID
	 */
	public void setId(long val)
	{
		long valParamValue = val;
		setId_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private long getEffectId_void(long pNativeObject);
	/**
	 * 返回特效ID
	 * @param  
	 * @return 特效ID
	 */
	public long getEffectId()
	{
		long returnValue = getEffectId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEffectId_ev_uint32(long pNativeObject, long val);
	/**
	 * 设置特效ID
	 * @param val 特效ID
	 */
	public void setEffectId(long val)
	{
		long valParamValue = val;
		setEffectId_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private long getPos_void(long pNativeObject);
	/**
	 * 返回实例坐标
	 * @param  
	 * @return 实例坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getPos()
	{
		long returnValue = getPos_void(this.nativeObject.pointer);
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
	native private void setPos_CVector3(long pNativeObject, long val);
	/**
	 * 设置实例坐标
	 * @param val 实例坐标
	 */
	public void setPos(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setPos_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private long getScale_void(long pNativeObject);
	/// <summary>
	/// 获取缩放因子
	/// </summary>
	/// <param name></param>
	/// <returns>缩放因子</returns>
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		long returnValue = getScale_void(this.nativeObject.pointer);
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
	native private void setScale_CVector3(long pNativeObject, long val);
	/**
	 * 设置缩放因子
	 * @param val 缩放因子
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, valParamValue);
	}
	native private long getRotate_void(long pNativeObject);
	/**
	 * 获取旋转四元数
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getRotate()
	{
		long returnValue = getRotate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private void setRotate_CQuaternion(long pNativeObject, long val);
	/**
	 * 设置旋转四元数
	 * @param val 四元数值
	 */
	public void setRotate(com.earthview.world.spatial.math.Quaternion val)
	{
		long valParamValue = val.nativeObject.pointer;
		setRotate_CQuaternion(this.nativeObject.pointer, valParamValue);
	}
	native private int getAltMode_void(long pNativeObject);
	/**
	 * 获得高度模式
	 * @param  
	 * @return 高度模式
	 */
	public com.earthview.world.spatial.utility.EVAltitudeMode getAltMode()
	{
		int returnValue = getAltMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private void setAltMode_EVAltitudeMode(long pNativeObject, int mode);
	/**
	 * 设置高度模式
	 * @param mode 高度模式
	 */
	public void setAltMode(com.earthview.world.spatial.utility.EVAltitudeMode mode)
	{
		int modeParamValue = mode.getValue();
		setAltMode_EVAltitudeMode(this.nativeObject.pointer, modeParamValue);
	}
	native private double getAltValue_void(long pNativeObject);
	/**
	 * 获得高度
	 * @param  
	 * @return 高度
	 */
	public double getAltValue()
	{
		double returnValue = getAltValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltValue_ev_real64(long pNativeObject, double altValue);
	/**
	 * 设置高度
	 * @param altValue 高度
	 */
	public void setAltValue(double altValue)
	{
		double altValueParamValue = altValue;
		setAltValue_ev_real64(this.nativeObject.pointer, altValueParamValue);
	}
	public EffectInstance(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectInstance(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectInstance fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectInstance obj = null;
 		if(baseObj instanceof EffectInstance)
		{
			obj = (EffectInstance)baseObj;
		} else {
			obj = new EffectInstance(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectInstance");
			obj.increaseCast();
		}

		return obj;
	}
}
