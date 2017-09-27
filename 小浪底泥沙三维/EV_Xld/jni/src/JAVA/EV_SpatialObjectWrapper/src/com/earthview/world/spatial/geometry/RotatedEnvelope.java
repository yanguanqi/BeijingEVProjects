package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 可旋转的包围盒类
 */
public class RotatedEnvelope extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::CRotatedEnvelope", new RotatedEnvelopeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RotatedEnvelope() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRotatedEnvelope", null);
	}

	/**
	 * 参数构造函数
	 * @param envelope 包围盒对象
	 * @param rotation 旋转角度
	 */
	public RotatedEnvelope(com.earthview.world.spatial.geometry.Ienvelope envelope, double rotation) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer envelopePtr = new BasePointer(envelope);
		list.add("envelope", envelopePtr.get());
		BasePointer rotationPtr = new BasePointer(rotation);
		list.add("rotation", rotationPtr.get());
		Create("CRotatedEnvelope", list);
	}

	/**
	 * 复制构造函数
	 * @param obj 包围盒对象
	 */
	public RotatedEnvelope(com.earthview.world.spatial.geometry.RotatedEnvelope obj) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objPtr = new BasePointer(obj);
		list.add("obj", objPtr.get());
		Create("CRotatedEnvelope", list);
	}

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取包围盒对象
	 * @param  
	 * @return 包围盒
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private double getRotation_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param  
	 * @return 旋转角度
	 */
	public double getRotation()
	{
		double returnValue = getRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotation_ev_real64(long pNativeObject, double value);
	/**
	 * 设置旋转角度
	 * @param value 旋转角度
	 */
	public void setRotation(double value)
	{
		double valueParamValue = value;
		setRotation_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	public RotatedEnvelope(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotatedEnvelope(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotatedEnvelope fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotatedEnvelope obj = null;
 		if(baseObj instanceof RotatedEnvelope)
		{
			obj = (RotatedEnvelope)baseObj;
		} else {
			obj = new RotatedEnvelope(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotatedEnvelope");
			obj.increaseCast();
		}

		return obj;
	}
}
