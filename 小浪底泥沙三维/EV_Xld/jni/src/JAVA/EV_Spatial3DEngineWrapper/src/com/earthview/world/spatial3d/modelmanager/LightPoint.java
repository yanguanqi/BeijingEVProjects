package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightPoint extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CLightPoint", new LightPointClassFactory());
	}

	public LightPoint(com.earthview.world.spatial.math.Vector3 pos, com.earthview.world.spatial.math.Vector3 normal, com.earthview.world.spatial.math.Vector4 color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer posPtr = new BasePointer(pos);
		list.add("pos", posPtr.get());
		BasePointer normalPtr = new BasePointer(normal);
		list.add("normal", normalPtr.get());
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("CLightPoint", list);
	}

	public enum EVBlendingMode implements INativeEnum<EVBlendingMode> {
		BM_ADDITIVE(EVBlendingModeHelper.ENUM_VALUES[0]),
		BM_BLENDED(EVBlendingModeHelper.ENUM_VALUES[1]);
		private int value;
		EVBlendingMode(int i) {
			this.value = i;
		}
		public EVBlendingMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVBlendingMode toEnum(int retval) {
			if(retval == BM_ADDITIVE.value){
				return BM_ADDITIVE;
			}
			else if(retval == BM_BLENDED.value){
				return BM_BLENDED;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVBlendingModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setIsOn_ev_bool(long pNativeObject, boolean isOn);
	public void setIsOn(boolean isOn)
	{
		boolean isOnParamValue = isOn;
		setIsOn_ev_bool(this.nativeObject.pointer, isOnParamValue);
	}
	native private boolean getIsOn_void(long pNativeObject);
	public boolean getIsOn()
	{
		boolean returnValue = getIsOn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntensity_ev_real32(long pNativeObject, float intensity);
	public void setIntensity(float intensity)
	{
		float intensityParamValue = intensity;
		setIntensity_ev_real32(this.nativeObject.pointer, intensityParamValue);
	}
	native private float getIntensity_void(long pNativeObject);
	public float getIntensity()
	{
		float returnValue = getIntensity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRadius_ev_real32(long pNativeObject, float radius);
	public void setRadius(float radius)
	{
		float radiusParamValue = radius;
		setRadius_ev_real32(this.nativeObject.pointer, radiusParamValue);
	}
	native private float getRadius_void(long pNativeObject);
	public float getRadius()
	{
		float returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlendingMode_EVBlendingMode(long pNativeObject, int mode);
	public void setBlendingMode(com.earthview.world.spatial3d.modelmanager.LightPoint.EVBlendingMode mode)
	{
		int modeParamValue = mode.getValue();
		setBlendingMode_EVBlendingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getBlendingMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.LightPoint.EVBlendingMode getBlendingMode()
	{
		int returnValue = getBlendingMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.modelmanager.LightPoint.EVBlendingMode.toEnum(returnValue);
	}
	native private void setBlinkSequence_CBlinkSequence(long pNativeObject, long blinkSequence);
	public void setBlinkSequence(com.earthview.world.spatial3d.modelmanager.BlinkSequence blinkSequence)
	{
		long blinkSequenceParamValue = blinkSequence.nativeObject.pointer;
		setBlinkSequence_CBlinkSequence(this.nativeObject.pointer, blinkSequenceParamValue);
	}
	native private long getBlinkSequence_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.BlinkSequence getBlinkSequence()
	{
		long returnValue = getBlinkSequence_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.BlinkSequence __returnValue = new com.earthview.world.spatial3d.modelmanager.BlinkSequence(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CBlinkSequence");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.BlinkSequence)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CBlinkSequence");
		}
		return __returnValue;
	}
	native private void setRotate_CVector3(long pNativeObject, long rotate);
	public void setRotate(com.earthview.world.spatial.math.Vector3 rotate)
	{
		long rotateParamValue = rotate.nativeObject.pointer;
		setRotate_CVector3(this.nativeObject.pointer, rotateParamValue);
	}
	native private long getRotate_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getRotate()
	{
		long returnValue = getRotate_void(this.nativeObject.pointer);
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
	native private long getPosition_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
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
	native private long getColor_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
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
	native private long getNormal_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getNormal()
	{
		long returnValue = getNormal_void(this.nativeObject.pointer);
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
	public LightPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LightPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LightPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LightPoint obj = null;
 		if(baseObj instanceof LightPoint)
		{
			obj = (LightPoint)baseObj;
		} else {
			obj = new LightPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLightPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
