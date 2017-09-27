package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FadeInOutEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CFadeInOutEvent", new FadeInOutEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public FadeInOutEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFadeInOutEvent", null);
	}

	/**
	 * 构造函数
	 * @param time 镜头合成器开启后的持续时间（秒）
	 */
	public FadeInOutEvent(double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("CFadeInOutEvent", list);
	}

	native private double get_mCompositorTime_void(long pNativeObject);
	public double get_mCompositorTime()
	{
		double jniValue = get_mCompositorTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCompositorTime_ev_real64 (long pNativeObject, double value);
	public void set_mCompositorTime(double mCompositorTime)
	{
		double mCompositorTimeParamValue = mCompositorTime;
		
		set_mCompositorTime_ev_real64(this.nativeObject.pointer, mCompositorTimeParamValue);
	}
	
	public FadeInOutEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FadeInOutEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FadeInOutEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FadeInOutEvent obj = null;
 		if(baseObj instanceof FadeInOutEvent)
		{
			obj = (FadeInOutEvent)baseObj;
		} else {
			obj = new FadeInOutEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFadeInOutEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
