package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 观察点类原为struct类型，定义场景中观察点的类型
 */
public class ViewPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ViewPoint", new ViewPointClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ViewPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ViewPoint", null);
	}

	native private long get_position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_position()
	{
		long jniValue = get_position_void(this.nativeObject.pointer);
		
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
	
	native private void set_position_CVector3 (long pNativeObject, long value);
	public void set_position(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		
		set_position_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	
	native private long get_orientation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_orientation()
	{
		long jniValue = get_orientation_void(this.nativeObject.pointer);
		
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
	
	native private void set_orientation_CQuaternion (long pNativeObject, long value);
	public void set_orientation(com.earthview.world.spatial.math.Quaternion orientation)
	{
		long orientationParamValue = orientation.nativeObject.pointer;
		
		set_orientation_CQuaternion(this.nativeObject.pointer, orientationParamValue);
	}
	
	public ViewPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ViewPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ViewPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ViewPoint obj = null;
 		if(baseObj instanceof ViewPoint)
		{
			obj = (ViewPoint)baseObj;
		} else {
			obj = new ViewPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ViewPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
