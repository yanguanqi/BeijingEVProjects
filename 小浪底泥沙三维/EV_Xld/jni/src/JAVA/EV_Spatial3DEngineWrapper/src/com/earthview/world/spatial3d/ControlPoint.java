package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画笛卡尔坐标控制点类
 */
public class ControlPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CControlPoint", new ControlPointClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ControlPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CControlPoint", null);
	}

	native private void formRollPitchYaw_CRadian_CRadian_CRadian(long pNativeObject, long roll, long pitch, long yaw);
	/**
	 * 通过指定的翻滚角，俯仰角，偏航角生成姿态四元数
	 * @param roll 翻滚角
	 * @param pitch 俯仰角
	 * @param yaw 偏航角
	 */
	public void formRollPitchYaw(com.earthview.world.spatial.math.Radian roll, com.earthview.world.spatial.math.Radian pitch, com.earthview.world.spatial.math.Radian yaw)
	{
		long rollParamValue = roll.nativeObject.pointer;
		long pitchParamValue = pitch.nativeObject.pointer;
		long yawParamValue = yaw.nativeObject.pointer;
		formRollPitchYaw_CRadian_CRadian_CRadian(this.nativeObject.pointer, rollParamValue, pitchParamValue, yawParamValue);
	}
	native private void toRollPitchRaw_CRadian_CRadian_CRadian(long pNativeObject, long roll, long pitch, long yaw);
	/**
	 * 由四元数分解出翻滚角，俯仰角和偏航角；
	 * @param roll 翻滚角
	 * @param pitch 俯仰角
	 * @param yaw 偏航角
	 */
	public void toRollPitchRaw(com.earthview.world.spatial.math.Radian roll, com.earthview.world.spatial.math.Radian pitch, com.earthview.world.spatial.math.Radian yaw)
	{
		long rollParamValue = roll.nativeObject.pointer;
		long pitchParamValue = pitch.nativeObject.pointer;
		long yawParamValue = yaw.nativeObject.pointer;
		toRollPitchRaw_CRadian_CRadian_CRadian(this.nativeObject.pointer, rollParamValue, pitchParamValue, yawParamValue);
	}
	native private long get_mposition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mposition()
	{
		long jniValue = get_mposition_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mposition_CVector3 (long pNativeObject, long value);
	public void set_mposition(com.earthview.world.spatial.math.Vector3 mposition)
	{
		long mpositionParamValue = mposition.nativeObject.pointer;
		
		set_mposition_CVector3(this.nativeObject.pointer, mpositionParamValue);
	}
	
	native private long get_mquaternion_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_mquaternion()
	{
		long jniValue = get_mquaternion_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mquaternion_CQuaternion (long pNativeObject, long value);
	public void set_mquaternion(com.earthview.world.spatial.math.Quaternion mquaternion)
	{
		long mquaternionParamValue = mquaternion.nativeObject.pointer;
		
		set_mquaternion_CQuaternion(this.nativeObject.pointer, mquaternionParamValue);
	}
	
	native private long get_mscale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mscale()
	{
		long jniValue = get_mscale_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mscale_CVector3 (long pNativeObject, long value);
	public void set_mscale(com.earthview.world.spatial.math.Vector3 mscale)
	{
		long mscaleParamValue = mscale.nativeObject.pointer;
		
		set_mscale_CVector3(this.nativeObject.pointer, mscaleParamValue);
	}
	
	native private boolean OperatorEquals_CControlPoint(long pNativeObject, long rhs);
	public boolean OperatorEquals(com.earthview.world.spatial3d.ControlPoint rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CControlPoint(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CControlPoint(long pNativeObject, long rhs);
	public boolean OperatorNotEquals(com.earthview.world.spatial3d.ControlPoint rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CControlPoint(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public ControlPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControlPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlPoint obj = null;
 		if(baseObj instanceof ControlPoint)
		{
			obj = (ControlPoint)baseObj;
		} else {
			obj = new ControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
