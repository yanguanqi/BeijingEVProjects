package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelAnimationInfomation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation", new ModelAnimationInfomationClassFactory());
	}

	public enum AnimationType implements INativeEnum<AnimationType> {
		MODELANIMATION(AnimationTypeHelper.ENUM_VALUES[0]),
		NODEANIMATION(AnimationTypeHelper.ENUM_VALUES[1]),
		UNKNOWN(AnimationTypeHelper.ENUM_VALUES[2]);
		private int value;
		AnimationType(int i) {
			this.value = i;
		}
		public AnimationType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final AnimationType toEnum(int retval) {
			if(retval == MODELANIMATION.value){
				return MODELANIMATION;
			}
			else if(retval == NODEANIMATION.value){
				return NODEANIMATION;
			}
			else if(retval == UNKNOWN.value){
				return UNKNOWN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class AnimationTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public ModelAnimationInfomation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelAnimationInfomation", null);
	}

	native private int checkRelationShip_ev_real64_ev_real64(long pNativeObject, double startTime, double endTime);
	/**
	 * 判断时间段是否有效
	 * @param startTime 开始时间
	 * @param endTime 结束时间
	 * @return 动画的有效时间与区间的关系
	 */
	public com.earthview.world.spatial3d.modelmanager.TimeRelationShip checkRelationShip(double startTime, double endTime)
	{
		double startTimeParamValue = startTime;
		double endTimeParamValue = endTime;
		int returnValue = checkRelationShip_ev_real64_ev_real64(this.nativeObject.pointer, startTimeParamValue, endTimeParamValue);
		return com.earthview.world.spatial3d.modelmanager.TimeRelationShip.toEnum(returnValue);
	}
	native private long get_manimationState_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationState get_manimationState()
	{
		long jniValue = get_manimationState_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	
	native private void set_manimationState_CAnimationState (long pNativeObject, long value);
	public void set_manimationState(com.earthview.world.graphic.AnimationState manimationState)
	{
		long manimationStateParamValue = (manimationState == null ? 0L : manimationState.nativeObject.pointer);
		
		set_manimationState_CAnimationState(this.nativeObject.pointer, manimationStateParamValue);
	}
	
	native private boolean get_menable_void(long pNativeObject);
	public boolean get_menable()
	{
		boolean jniValue = get_menable_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_menable_ev_bool (long pNativeObject, boolean value);
	public void set_menable(boolean menable)
	{
		boolean menableParamValue = menable;
		
		set_menable_ev_bool(this.nativeObject.pointer, menableParamValue);
	}
	
	native private boolean get_mpause_void(long pNativeObject);
	public boolean get_mpause()
	{
		boolean jniValue = get_mpause_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mpause_ev_bool (long pNativeObject, boolean value);
	public void set_mpause(boolean mpause)
	{
		boolean mpauseParamValue = mpause;
		
		set_mpause_ev_bool(this.nativeObject.pointer, mpauseParamValue);
	}
	
	native private int get_manimationType_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation.AnimationType get_manimationType()
	{
		int jniValue = get_manimationType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation.AnimationType.toEnum(jniValue);
	}
	
	native private void set_manimationType_AnimationType (long pNativeObject, int value);
	public void set_manimationType(com.earthview.world.spatial3d.modelmanager.ModelAnimationInfomation.AnimationType manimationType)
	{
		int manimationTypeParamValue = manimationType.getValue();
		
		set_manimationType_AnimationType(this.nativeObject.pointer, manimationTypeParamValue);
	}
	
	native private double get_mvalidStartTime_void(long pNativeObject);
	public double get_mvalidStartTime()
	{
		double jniValue = get_mvalidStartTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mvalidStartTime_ev_real64 (long pNativeObject, double value);
	public void set_mvalidStartTime(double mvalidStartTime)
	{
		double mvalidStartTimeParamValue = mvalidStartTime;
		
		set_mvalidStartTime_ev_real64(this.nativeObject.pointer, mvalidStartTimeParamValue);
	}
	
	native private double get_mvalidEndTime_void(long pNativeObject);
	public double get_mvalidEndTime()
	{
		double jniValue = get_mvalidEndTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mvalidEndTime_ev_real64 (long pNativeObject, double value);
	public void set_mvalidEndTime(double mvalidEndTime)
	{
		double mvalidEndTimeParamValue = mvalidEndTime;
		
		set_mvalidEndTime_ev_real64(this.nativeObject.pointer, mvalidEndTimeParamValue);
	}
	
	public ModelAnimationInfomation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelAnimationInfomation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelAnimationInfomation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelAnimationInfomation obj = null;
 		if(baseObj instanceof ModelAnimationInfomation)
		{
			obj = (ModelAnimationInfomation)baseObj;
		} else {
			obj = new ModelAnimationInfomation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelAnimationInfomation");
			obj.increaseCast();
		}

		return obj;
	}
}
