package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 飞行参数类
 */
public class Flyparam extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CFLyParam", new FlyparamClassFactory());
	}

	/**
	 * 高度模式定义
	 */
	public enum AltitudeMode implements INativeEnum<AltitudeMode> {
		RelativeToGround(AltitudeModeHelper.ENUM_VALUES[0]),
		ClampedToGround(AltitudeModeHelper.ENUM_VALUES[1]),
		RelativeToSeaFloor(AltitudeModeHelper.ENUM_VALUES[2]),
		RelativeToOBQ(AltitudeModeHelper.ENUM_VALUES[3]),
		Absolute(AltitudeModeHelper.ENUM_VALUES[4]);
		private int value;
		AltitudeMode(int i) {
			this.value = i;
		}
		public AltitudeMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final AltitudeMode toEnum(int retval) {
			if(retval == RelativeToGround.value){
				return RelativeToGround;
			}
			else if(retval == ClampedToGround.value){
				return ClampedToGround;
			}
			else if(retval == RelativeToSeaFloor.value){
				return RelativeToSeaFloor;
			}
			else if(retval == RelativeToOBQ.value){
				return RelativeToOBQ;
			}
			else if(retval == Absolute.value){
				return Absolute;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class AltitudeModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private double get_mDstAltitude_void(long pNativeObject);
	public double get_mDstAltitude()
	{
		double jniValue = get_mDstAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDstAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mDstAltitude(double mDstAltitude)
	{
		double mDstAltitudeParamValue = mDstAltitude;
		
		set_mDstAltitude_ev_real64(this.nativeObject.pointer, mDstAltitudeParamValue);
	}
	
	native private boolean get_mAltitudeChanged_void(long pNativeObject);
	public boolean get_mAltitudeChanged()
	{
		boolean jniValue = get_mAltitudeChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitudeChanged_ev_bool (long pNativeObject, boolean value);
	public void set_mAltitudeChanged(boolean mAltitudeChanged)
	{
		boolean mAltitudeChangedParamValue = mAltitudeChanged;
		
		set_mAltitudeChanged_ev_bool(this.nativeObject.pointer, mAltitudeChangedParamValue);
	}
	
	native private double get_mobserveDistance_void(long pNativeObject);
	public double get_mobserveDistance()
	{
		double jniValue = get_mobserveDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mobserveDistance_ev_real64 (long pNativeObject, double value);
	public void set_mobserveDistance(double mobserveDistance)
	{
		double mobserveDistanceParamValue = mobserveDistance;
		
		set_mobserveDistance_ev_real64(this.nativeObject.pointer, mobserveDistanceParamValue);
	}
	
	native private long get_mtilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mtilt()
	{
		long jniValue = get_mtilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mtilt_CDegree (long pNativeObject, long value);
	public void set_mtilt(com.earthview.world.spatial.math.Degree mtilt)
	{
		long mtiltParamValue = mtilt.nativeObject.pointer;
		
		set_mtilt_CDegree(this.nativeObject.pointer, mtiltParamValue);
	}
	
	native private int get_mspeed_void(long pNativeObject);
	public int get_mspeed()
	{
		int jniValue = get_mspeed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mspeed_ev_int32 (long pNativeObject, int value);
	public void set_mspeed(int mspeed)
	{
		int mspeedParamValue = mspeed;
		
		set_mspeed_ev_int32(this.nativeObject.pointer, mspeedParamValue);
	}
	
	native private boolean get_misFile_void(long pNativeObject);
	public boolean get_misFile()
	{
		boolean jniValue = get_misFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misFile_ev_bool (long pNativeObject, boolean value);
	public void set_misFile(boolean misFile)
	{
		boolean misFileParamValue = misFile;
		
		set_misFile_ev_bool(this.nativeObject.pointer, misFileParamValue);
	}
	
	native private boolean get_mismodelWithEffect_void(long pNativeObject);
	public boolean get_mismodelWithEffect()
	{
		boolean jniValue = get_mismodelWithEffect_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mismodelWithEffect_ev_bool (long pNativeObject, boolean value);
	public void set_mismodelWithEffect(boolean mismodelWithEffect)
	{
		boolean mismodelWithEffectParamValue = mismodelWithEffect;
		
		set_mismodelWithEffect_ev_bool(this.nativeObject.pointer, mismodelWithEffectParamValue);
	}
	
	native private String get_mmodelFile_void(long pNativeObject);
	public String get_mmodelFile()
	{
		String jniValue = get_mmodelFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmodelFile_EVString (long pNativeObject, String value);
	public void set_mmodelFile(String mmodelFile)
	{
		String mmodelFileParamValue = mmodelFile;
		
		set_mmodelFile_EVString(this.nativeObject.pointer, mmodelFileParamValue);
	}
	
	native private String get_mdataSourceName_void(long pNativeObject);
	public String get_mdataSourceName()
	{
		String jniValue = get_mdataSourceName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mdataSourceName_EVString (long pNativeObject, String value);
	public void set_mdataSourceName(String mdataSourceName)
	{
		String mdataSourceNameParamValue = mdataSourceName;
		
		set_mdataSourceName_EVString(this.nativeObject.pointer, mdataSourceNameParamValue);
	}
	
	native private String get_mentityDatasetName_void(long pNativeObject);
	public String get_mentityDatasetName()
	{
		String jniValue = get_mentityDatasetName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mentityDatasetName_EVString (long pNativeObject, String value);
	public void set_mentityDatasetName(String mentityDatasetName)
	{
		String mentityDatasetNameParamValue = mentityDatasetName;
		
		set_mentityDatasetName_EVString(this.nativeObject.pointer, mentityDatasetNameParamValue);
	}
	
	native private String get_mentityName_void(long pNativeObject);
	public String get_mentityName()
	{
		String jniValue = get_mentityName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mentityName_EVString (long pNativeObject, String value);
	public void set_mentityName(String mentityName)
	{
		String mentityNameParamValue = mentityName;
		
		set_mentityName_EVString(this.nativeObject.pointer, mentityNameParamValue);
	}
	
	native private int get_mentityId_void(long pNativeObject);
	public int get_mentityId()
	{
		int jniValue = get_mentityId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mentityId_int (long pNativeObject, int value);
	public void set_mentityId(int mentityId)
	{
		int mentityIdParamValue = mentityId;
		
		set_mentityId_int(this.nativeObject.pointer, mentityIdParamValue);
	}
	
	native private boolean get_mmodelChanged_void(long pNativeObject);
	public boolean get_mmodelChanged()
	{
		boolean jniValue = get_mmodelChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmodelChanged_ev_bool (long pNativeObject, boolean value);
	public void set_mmodelChanged(boolean mmodelChanged)
	{
		boolean mmodelChangedParamValue = mmodelChanged;
		
		set_mmodelChanged_ev_bool(this.nativeObject.pointer, mmodelChangedParamValue);
	}
	
	native private float get_mmodelScale_void(long pNativeObject);
	public float get_mmodelScale()
	{
		float jniValue = get_mmodelScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmodelScale_ev_real32 (long pNativeObject, float value);
	public void set_mmodelScale(float mmodelScale)
	{
		float mmodelScaleParamValue = mmodelScale;
		
		set_mmodelScale_ev_real32(this.nativeObject.pointer, mmodelScaleParamValue);
	}
	
	native private float get_mpreRotationX_void(long pNativeObject);
	public float get_mpreRotationX()
	{
		float jniValue = get_mpreRotationX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mpreRotationX_ev_real32 (long pNativeObject, float value);
	public void set_mpreRotationX(float mpreRotationX)
	{
		float mpreRotationXParamValue = mpreRotationX;
		
		set_mpreRotationX_ev_real32(this.nativeObject.pointer, mpreRotationXParamValue);
	}
	
	native private float get_mpreRotationY_void(long pNativeObject);
	public float get_mpreRotationY()
	{
		float jniValue = get_mpreRotationY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mpreRotationY_ev_real32 (long pNativeObject, float value);
	public void set_mpreRotationY(float mpreRotationY)
	{
		float mpreRotationYParamValue = mpreRotationY;
		
		set_mpreRotationY_ev_real32(this.nativeObject.pointer, mpreRotationYParamValue);
	}
	
	native private float get_mpreRotationZ_void(long pNativeObject);
	public float get_mpreRotationZ()
	{
		float jniValue = get_mpreRotationZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mpreRotationZ_ev_real32 (long pNativeObject, float value);
	public void set_mpreRotationZ(float mpreRotationZ)
	{
		float mpreRotationZParamValue = mpreRotationZ;
		
		set_mpreRotationZ_ev_real32(this.nativeObject.pointer, mpreRotationZParamValue);
	}
	
	native private long get_mlineColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mlineColor()
	{
		long jniValue = get_mlineColor_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mlineColor_CColourValue (long pNativeObject, long value);
	public void set_mlineColor(com.earthview.world.graphic.ColourValue mlineColor)
	{
		long mlineColorParamValue = mlineColor.nativeObject.pointer;
		
		set_mlineColor_CColourValue(this.nativeObject.pointer, mlineColorParamValue);
	}
	
	native private boolean get_mlineColorChanged_void(long pNativeObject);
	public boolean get_mlineColorChanged()
	{
		boolean jniValue = get_mlineColorChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlineColorChanged_ev_bool (long pNativeObject, boolean value);
	public void set_mlineColorChanged(boolean mlineColorChanged)
	{
		boolean mlineColorChangedParamValue = mlineColorChanged;
		
		set_mlineColorChanged_ev_bool(this.nativeObject.pointer, mlineColorChangedParamValue);
	}
	
	native private boolean get_mlockHeading_void(long pNativeObject);
	public boolean get_mlockHeading()
	{
		boolean jniValue = get_mlockHeading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlockHeading_ev_bool (long pNativeObject, boolean value);
	public void set_mlockHeading(boolean mlockHeading)
	{
		boolean mlockHeadingParamValue = mlockHeading;
		
		set_mlockHeading_ev_bool(this.nativeObject.pointer, mlockHeadingParamValue);
	}
	
	native private boolean get_mlockTilt_void(long pNativeObject);
	public boolean get_mlockTilt()
	{
		boolean jniValue = get_mlockTilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlockTilt_ev_bool (long pNativeObject, boolean value);
	public void set_mlockTilt(boolean mlockTilt)
	{
		boolean mlockTiltParamValue = mlockTilt;
		
		set_mlockTilt_ev_bool(this.nativeObject.pointer, mlockTiltParamValue);
	}
	
	native private boolean get_mlockObserveDistance_void(long pNativeObject);
	public boolean get_mlockObserveDistance()
	{
		boolean jniValue = get_mlockObserveDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlockObserveDistance_ev_bool (long pNativeObject, boolean value);
	public void set_mlockObserveDistance(boolean mlockObserveDistance)
	{
		boolean mlockObserveDistanceParamValue = mlockObserveDistance;
		
		set_mlockObserveDistance_ev_bool(this.nativeObject.pointer, mlockObserveDistanceParamValue);
	}
	
	native private boolean get_mrenderRoute_void(long pNativeObject);
	public boolean get_mrenderRoute()
	{
		boolean jniValue = get_mrenderRoute_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrenderRoute_ev_bool (long pNativeObject, boolean value);
	public void set_mrenderRoute(boolean mrenderRoute)
	{
		boolean mrenderRouteParamValue = mrenderRoute;
		
		set_mrenderRoute_ev_bool(this.nativeObject.pointer, mrenderRouteParamValue);
	}
	
	native private boolean get_msmoothRoute_void(long pNativeObject);
	public boolean get_msmoothRoute()
	{
		boolean jniValue = get_msmoothRoute_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_msmoothRoute_ev_bool (long pNativeObject, boolean value);
	public void set_msmoothRoute(boolean msmoothRoute)
	{
		boolean msmoothRouteParamValue = msmoothRoute;
		
		set_msmoothRoute_ev_bool(this.nativeObject.pointer, msmoothRouteParamValue);
	}
	
	native private boolean get_msmoothRouteChanged_void(long pNativeObject);
	public boolean get_msmoothRouteChanged()
	{
		boolean jniValue = get_msmoothRouteChanged_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_msmoothRouteChanged_ev_bool (long pNativeObject, boolean value);
	public void set_msmoothRouteChanged(boolean msmoothRouteChanged)
	{
		boolean msmoothRouteChangedParamValue = msmoothRouteChanged;
		
		set_msmoothRouteChanged_ev_bool(this.nativeObject.pointer, msmoothRouteChangedParamValue);
	}
	
	native private boolean get_mrenderModel_void(long pNativeObject);
	public boolean get_mrenderModel()
	{
		boolean jniValue = get_mrenderModel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrenderModel_ev_bool (long pNativeObject, boolean value);
	public void set_mrenderModel(boolean mrenderModel)
	{
		boolean mrenderModelParamValue = mrenderModel;
		
		set_mrenderModel_ev_bool(this.nativeObject.pointer, mrenderModelParamValue);
	}
	
	native private int get_mflyMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.FlyMode get_mflyMode()
	{
		int jniValue = get_mflyMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.FlyMode.toEnum(jniValue);
	}
	
	native private void set_mflyMode_FlyMode (long pNativeObject, int value);
	public void set_mflyMode(com.earthview.world.spatial3d.FlyMode mflyMode)
	{
		int mflyModeParamValue = mflyMode.getValue();
		
		set_mflyMode_FlyMode(this.nativeObject.pointer, mflyModeParamValue);
	}
	
	native private int get_mAltitudeMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.Flyparam.AltitudeMode get_mAltitudeMode()
	{
		int jniValue = get_mAltitudeMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(jniValue);
	}
	
	native private void set_mAltitudeMode_AltitudeMode (long pNativeObject, int value);
	public void set_mAltitudeMode(com.earthview.world.spatial3d.Flyparam.AltitudeMode mAltitudeMode)
	{
		int mAltitudeModeParamValue = mAltitudeMode.getValue();
		
		set_mAltitudeMode_AltitudeMode(this.nativeObject.pointer, mAltitudeModeParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public Flyparam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFLyParam", null);
	}

	public Flyparam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Flyparam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Flyparam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Flyparam obj = null;
 		if(baseObj instanceof Flyparam)
		{
			obj = (Flyparam)baseObj;
		} else {
			obj = new Flyparam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFLyParam");
			obj.increaseCast();
		}

		return obj;
	}
}
