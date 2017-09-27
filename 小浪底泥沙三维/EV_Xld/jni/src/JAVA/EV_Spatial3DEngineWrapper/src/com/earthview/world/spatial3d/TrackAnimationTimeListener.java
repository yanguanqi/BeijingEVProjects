package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 时间比例监听器
 */
public class TrackAnimationTimeListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTrackAnimationTimeListener", new TrackAnimationTimeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCTrackAnimationTimeListenerProxy", new TrackAnimationTimeListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TrackAnimationTimeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTrackAnimationTimeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.TrackAnimationTimeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double calculateTimeRatio_ev_real64_ev_real64_callback(double timePostion, double timeLength)
	{
		double timePostionParamValue = timePostion;
		double timeLengthParamValue = timeLength;
		double returnValue = calculateTimeRatio(timePostionParamValue, timeLengthParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double calculateTimeRatio_ev_real64_ev_real64(long pNativeObject, double timePostion, double timeLength);
	/**
	 * 计算时间比例
	 * @param timePostion 当前时间
	 * @param timeLength 时间段的长度
	 */
	public double calculateTimeRatio(double timePostion, double timeLength)
	{
		double timePostionParamValue = timePostion;
		double timeLengthParamValue = timeLength;
		double returnValue = calculateTimeRatio_ev_real64_ev_real64(this.nativeObject.pointer, timePostionParamValue, timeLengthParamValue);
		return returnValue;
	}
	native private double calculateTimeRatio_ev_real64_ev_real64_NoVirtual(long pNativeObject, double timePostion, double timeLength);
	protected double calculateTimeRatio_NoVirtual(double timePostion, double timeLength)
	{
		double timePostionParamValue = timePostion;
		double timeLengthParamValue = timeLength;
		double returnValue = calculateTimeRatio_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, timePostionParamValue, timeLengthParamValue);
		return returnValue;
	}

	public TrackAnimationTimeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackAnimationTimeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculateTimeRatio_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculateTimeRatio_ev_real64_ev_real64(this.nativeObject.pointer, "calculateTimeRatio_ev_real64_ev_real64_callback");
		}
	}
	
	public static TrackAnimationTimeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackAnimationTimeListener obj = null;
 		if(baseObj instanceof TrackAnimationTimeListener)
		{
			obj = (TrackAnimationTimeListener)baseObj;
		} else {
			obj = new TrackAnimationTimeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackAnimationTimeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
