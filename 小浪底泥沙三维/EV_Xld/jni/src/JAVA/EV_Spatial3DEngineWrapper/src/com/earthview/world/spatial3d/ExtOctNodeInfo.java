package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ExtOctNodeInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ExtOctNodeInfo", new ExtOctNodeInfoClassFactory());
	}

	native private long get_frameNumber_void(long pNativeObject);
	public long get_frameNumber()
	{
		long jniValue = get_frameNumber_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_frameNumber_ev_uint32 (long pNativeObject, long value);
	public void set_frameNumber(long frameNumber)
	{
		long frameNumberParamValue = frameNumber;
		
		set_frameNumber_ev_uint32(this.nativeObject.pointer, frameNumberParamValue);
	}
	
	native private double get_camDistance_void(long pNativeObject);
	public double get_camDistance()
	{
		double jniValue = get_camDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_camDistance_ev_real64 (long pNativeObject, double value);
	public void set_camDistance(double camDistance)
	{
		double camDistanceParamValue = camDistance;
		
		set_camDistance_ev_real64(this.nativeObject.pointer, camDistanceParamValue);
	}
	
	native private long get_box_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_box()
	{
		long jniValue = get_box_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private void set_box_CAxisAlignedBox (long pNativeObject, long value);
	public void set_box(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		
		set_box_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	
	native private long get_id_void(long pNativeObject);
	public long get_id()
	{
		long jniValue = get_id_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_id_ev_uint32 (long pNativeObject, long value);
	public void set_id(long id)
	{
		long idParamValue = id;
		
		set_id_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	
	native private String get_code_void(long pNativeObject);
	public String get_code()
	{
		String jniValue = get_code_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_code_EVString (long pNativeObject, String value);
	public void set_code(String code)
	{
		String codeParamValue = code;
		
		set_code_EVString(this.nativeObject.pointer, codeParamValue);
	}
	
	public ExtOctNodeInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ExtOctNodeInfo", null);
	}

	public ExtOctNodeInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ExtOctNodeInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ExtOctNodeInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ExtOctNodeInfo obj = null;
 		if(baseObj instanceof ExtOctNodeInfo)
		{
			obj = (ExtOctNodeInfo)baseObj;
		} else {
			obj = new ExtOctNodeInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ExtOctNodeInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
