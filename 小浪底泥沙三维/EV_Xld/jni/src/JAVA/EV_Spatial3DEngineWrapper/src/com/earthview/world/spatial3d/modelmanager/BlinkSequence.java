package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BlinkSequence extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CBlinkSequence", new BlinkSequenceClassFactory());
	}

	public BlinkSequence() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBlinkSequence", null);
	}

	native private void addPulse_ev_real64_CVector4(long pNativeObject, double length, long color);
	public void addPulse(double length, com.earthview.world.spatial.math.Vector4 color)
	{
		double lengthParamValue = length;
		long colorParamValue = color.nativeObject.pointer;
		addPulse_ev_real64_CVector4(this.nativeObject.pointer, lengthParamValue, colorParamValue);
	}
	native private int getNumPulses_void(long pNativeObject);
	public int getNumPulses()
	{
		int returnValue = getNumPulses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getPulse_ev_uint32_ev_real64_CVector4(long pNativeObject, long i, long length, long color);
	public void getPulse(long i, DoublePointer length, com.earthview.world.spatial.math.Vector4 color)
	{
		long iParamValue = i;
		long lengthParamValue = length.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		getPulse_ev_uint32_ev_real64_CVector4(this.nativeObject.pointer, iParamValue, lengthParamValue, colorParamValue);
	}
	native private void setPulse_ev_uint32_ev_real64_CVector4(long pNativeObject, long i, double length, long color);
	public void setPulse(long i, double length, com.earthview.world.spatial.math.Vector4 color)
	{
		long iParamValue = i;
		double lengthParamValue = length;
		long colorParamValue = color.nativeObject.pointer;
		setPulse_ev_uint32_ev_real64_CVector4(this.nativeObject.pointer, iParamValue, lengthParamValue, colorParamValue);
	}
	native private double getPulsePeriod_void(long pNativeObject);
	public double getPulsePeriod()
	{
		double returnValue = getPulsePeriod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPhaseShift_ev_real64(long pNativeObject, double ps);
	public void setPhaseShift(double ps)
	{
		double psParamValue = ps;
		setPhaseShift_ev_real64(this.nativeObject.pointer, psParamValue);
	}
	native private double getPhaseShift_void(long pNativeObject);
	public double getPhaseShift()
	{
		double returnValue = getPhaseShift_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double localTime_ev_real64(long pNativeObject, double time);
	public double localTime(double time)
	{
		double timeParamValue = time;
		double returnValue = localTime_ev_real64(this.nativeObject.pointer, timeParamValue);
		return returnValue;
	}
	native private long color_ev_real64_ev_real64(long pNativeObject, double time, double length);
	public com.earthview.world.spatial.math.Vector4 color(double time, double length)
	{
		double timeParamValue = time;
		double lengthParamValue = length;
		long returnValue = color_ev_real64_ev_real64(this.nativeObject.pointer, timeParamValue, lengthParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long nextColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 nextColor()
	{
		long returnValue = nextColor_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getColor_ev_int32(long pNativeObject, int index);
	public com.earthview.world.spatial.math.Vector4 getColor(int index)
	{
		int indexParamValue = index;
		long returnValue = getColor_ev_int32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	public BlinkSequence(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BlinkSequence(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BlinkSequence fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BlinkSequence obj = null;
 		if(baseObj instanceof BlinkSequence)
		{
			obj = (BlinkSequence)baseObj;
		} else {
			obj = new BlinkSequence(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBlinkSequence");
			obj.increaseCast();
		}

		return obj;
	}
}
