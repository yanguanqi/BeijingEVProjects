package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Wait extends com.earthview.world.spatial.kml.TourUnit {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CWait", new WaitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCWaitProxy", new WaitClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Wait() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCWaitProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.kml.Wait".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getDuration_void(long pNativeObject);
	/**
	 * 获得等待时间
	 * @return 返回等待时间
	 */
	public double getDuration()
	{
		double returnValue = getDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDuration_ev_real64(long pNativeObject, double durationW);
	/**
	 * 设置等待时间
	 * @param durationW 等待的时间
	 */
	public void setDuration(double durationW)
	{
		double durationWParamValue = durationW;
		setDuration_ev_real64(this.nativeObject.pointer, durationWParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 返回克隆的对象
	 */
	public com.earthview.world.spatial.kml.TourUnit ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.TourUnit __returnValue = new com.earthview.world.spatial.kml.TourUnit(CreatedWhenConstruct.CWC_NotToCreate, "CTourUnit");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnit)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTourUnit");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.kml.TourUnit ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.TourUnit __returnValue = new com.earthview.world.spatial.kml.TourUnit(CreatedWhenConstruct.CWC_NotToCreate, "CTourUnit");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnit)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTourUnit");
		}
		return __returnValue;
	}

	public Wait(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wait(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取漫游的类型
	 * @return 返回漫游的类型
	 */
	public com.earthview.world.spatial.kml.EVTourUnitType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Wait fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wait obj = null;
 		if(baseObj instanceof Wait)
		{
			obj = (Wait)baseObj;
		} else {
			obj = new Wait(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWait");
			obj.increaseCast();
		}

		return obj;
	}
}
