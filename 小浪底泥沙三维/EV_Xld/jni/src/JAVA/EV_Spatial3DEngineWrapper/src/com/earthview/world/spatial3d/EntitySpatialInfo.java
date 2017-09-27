package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntitySpatialInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CEntitySpatialInfo", new EntitySpatialInfoClassFactory());
	}

	public EntitySpatialInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEntitySpatialInfo", null);
	}

	native private long get_mEntID_void(long pNativeObject);
	public long get_mEntID()
	{
		long jniValue = get_mEntID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEntID_ev_uint32 (long pNativeObject, long value);
	public void set_mEntID(long mEntID)
	{
		long mEntIDParamValue = mEntID;
		
		set_mEntID_ev_uint32(this.nativeObject.pointer, mEntIDParamValue);
	}
	
	native private String get_mMeshName_void(long pNativeObject);
	public String get_mMeshName()
	{
		String jniValue = get_mMeshName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMeshName_EVString (long pNativeObject, String value);
	public void set_mMeshName(String mMeshName)
	{
		String mMeshNameParamValue = mMeshName;
		
		set_mMeshName_EVString(this.nativeObject.pointer, mMeshNameParamValue);
	}
	
	native private long get_mMeshID_void(long pNativeObject);
	public long get_mMeshID()
	{
		long jniValue = get_mMeshID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMeshID_ev_uint32 (long pNativeObject, long value);
	public void set_mMeshID(long mMeshID)
	{
		long mMeshIDParamValue = mMeshID;
		
		set_mMeshID_ev_uint32(this.nativeObject.pointer, mMeshIDParamValue);
	}
	
	native private long get_mPos_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mPos()
	{
		long jniValue = get_mPos_void(this.nativeObject.pointer);
		
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
	
	native private void set_mPos_CVector3 (long pNativeObject, long value);
	public void set_mPos(com.earthview.world.spatial.math.Vector3 mPos)
	{
		long mPosParamValue = mPos.nativeObject.pointer;
		
		set_mPos_CVector3(this.nativeObject.pointer, mPosParamValue);
	}
	
	native private long get_mScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mScale()
	{
		long jniValue = get_mScale_void(this.nativeObject.pointer);
		
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
	
	native private void set_mScale_CVector3 (long pNativeObject, long value);
	public void set_mScale(com.earthview.world.spatial.math.Vector3 mScale)
	{
		long mScaleParamValue = mScale.nativeObject.pointer;
		
		set_mScale_CVector3(this.nativeObject.pointer, mScaleParamValue);
	}
	
	native private long get_mQua_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_mQua()
	{
		long jniValue = get_mQua_void(this.nativeObject.pointer);
		
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
	
	native private void set_mQua_CQuaternion (long pNativeObject, long value);
	public void set_mQua(com.earthview.world.spatial.math.Quaternion mQua)
	{
		long mQuaParamValue = mQua.nativeObject.pointer;
		
		set_mQua_CQuaternion(this.nativeObject.pointer, mQuaParamValue);
	}
	
	native private int get_mAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial.utility.EVAltitudeMode get_mAltitudeMode()
	{
		int jniValue = get_mAltitudeMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(jniValue);
	}
	
	native private void set_mAltitudeMode_EVAltitudeMode (long pNativeObject, int value);
	public void set_mAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode mAltitudeMode)
	{
		int mAltitudeModeParamValue = mAltitudeMode.getValue();
		
		set_mAltitudeMode_EVAltitudeMode(this.nativeObject.pointer, mAltitudeModeParamValue);
	}
	
	native private float get_mAltitudeValue_void(long pNativeObject);
	public float get_mAltitudeValue()
	{
		float jniValue = get_mAltitudeValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitudeValue_ev_real32 (long pNativeObject, float value);
	public void set_mAltitudeValue(float mAltitudeValue)
	{
		float mAltitudeValueParamValue = mAltitudeValue;
		
		set_mAltitudeValue_ev_real32(this.nativeObject.pointer, mAltitudeValueParamValue);
	}
	
	native private long get_mBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_mBox()
	{
		long jniValue = get_mBox_void(this.nativeObject.pointer);
		
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
	
	native private void set_mBox_CAxisAlignedBox (long pNativeObject, long value);
	public void set_mBox(com.earthview.world.spatial.math.AxisAlignedBox mBox)
	{
		long mBoxParamValue = mBox.nativeObject.pointer;
		
		set_mBox_CAxisAlignedBox(this.nativeObject.pointer, mBoxParamValue);
	}
	
	native private float get_mCameraLatitude_void(long pNativeObject);
	public float get_mCameraLatitude()
	{
		float jniValue = get_mCameraLatitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCameraLatitude_ev_real32 (long pNativeObject, float value);
	public void set_mCameraLatitude(float mCameraLatitude)
	{
		float mCameraLatitudeParamValue = mCameraLatitude;
		
		set_mCameraLatitude_ev_real32(this.nativeObject.pointer, mCameraLatitudeParamValue);
	}
	
	native private float get_mCameraLongitude_void(long pNativeObject);
	public float get_mCameraLongitude()
	{
		float jniValue = get_mCameraLongitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCameraLongitude_ev_real32 (long pNativeObject, float value);
	public void set_mCameraLongitude(float mCameraLongitude)
	{
		float mCameraLongitudeParamValue = mCameraLongitude;
		
		set_mCameraLongitude_ev_real32(this.nativeObject.pointer, mCameraLongitudeParamValue);
	}
	
	native private float get_mCameraHeading_void(long pNativeObject);
	public float get_mCameraHeading()
	{
		float jniValue = get_mCameraHeading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCameraHeading_ev_real32 (long pNativeObject, float value);
	public void set_mCameraHeading(float mCameraHeading)
	{
		float mCameraHeadingParamValue = mCameraHeading;
		
		set_mCameraHeading_ev_real32(this.nativeObject.pointer, mCameraHeadingParamValue);
	}
	
	native private float get_mCameraTilt_void(long pNativeObject);
	public float get_mCameraTilt()
	{
		float jniValue = get_mCameraTilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCameraTilt_ev_real32 (long pNativeObject, float value);
	public void set_mCameraTilt(float mCameraTilt)
	{
		float mCameraTiltParamValue = mCameraTilt;
		
		set_mCameraTilt_ev_real32(this.nativeObject.pointer, mCameraTiltParamValue);
	}
	
	native private float get_mCameraAltitude_void(long pNativeObject);
	public float get_mCameraAltitude()
	{
		float jniValue = get_mCameraAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCameraAltitude_ev_real32 (long pNativeObject, float value);
	public void set_mCameraAltitude(float mCameraAltitude)
	{
		float mCameraAltitudeParamValue = mCameraAltitude;
		
		set_mCameraAltitude_ev_real32(this.nativeObject.pointer, mCameraAltitudeParamValue);
	}
	
	public EntitySpatialInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntitySpatialInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EntitySpatialInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntitySpatialInfo obj = null;
 		if(baseObj instanceof EntitySpatialInfo)
		{
			obj = (EntitySpatialInfo)baseObj;
		} else {
			obj = new EntitySpatialInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntitySpatialInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
