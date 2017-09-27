package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达截面点
 */
public class SectionPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint", new SectionPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCSectionPointProxy", new SectionPointClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SectionPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSectionPointProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param Real 倾斜角
	 * @param EarthView::World::Spatial::Math::CVector3 截面点位置
	 */
	public SectionPoint(double pitchAngle, com.earthview.world.spatial.math.Vector3 pitchPoint) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pitchAnglePtr = new BasePointer(pitchAngle);
		list.add("pitchAngle", pitchAnglePtr.get());
		BasePointer pitchPointPtr = new BasePointer(pitchPoint);
		list.add("pitchPoint", pitchPointPtr.get());
		Create("JCSectionPointProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getPitchAngle_void(long pNativeObject);
	/**
	 * 获取截面点倾斜角
	 * @param  
	 * @return 截面点的倾斜角
	 */
	public double getPitchAngle()
	{
		double returnValue = getPitchAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPitchPoint_void(long pNativeObject);
	/**
	 * 获取截面点位置
	 * @param  
	 * @return 截面点位置
	 */
	public com.earthview.world.spatial.math.Vector3 getPitchPoint()
	{
		long returnValue = getPitchPoint_void(this.nativeObject.pointer);
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
	native private void setPitchAngle_Real(long pNativeObject, double pitchAngle);
	/**
	 * 设置截面点倾斜角
	 * @param pitchAngle 截面点的倾斜角
	 */
	public void setPitchAngle(double pitchAngle)
	{
		double pitchAngleParamValue = pitchAngle;
		setPitchAngle_Real(this.nativeObject.pointer, pitchAngleParamValue);
	}
	native private void setPitchPoint_CVector3(long pNativeObject, long pitchPoint);
	/**
	 * 设置截面点位置
	 * @param pitchAngle 截面点的位置
	 */
	public void setPitchPoint(com.earthview.world.spatial.math.Vector3 pitchPoint)
	{
		long pitchPointParamValue = pitchPoint.nativeObject.pointer;
		setPitchPoint_CVector3(this.nativeObject.pointer, pitchPointParamValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint returnValue = ev_clone();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.SectionPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSectionPoint");
		}
		return __returnValue;
	}

	public SectionPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SectionPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static SectionPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SectionPoint obj = null;
 		if(baseObj instanceof SectionPoint)
		{
			obj = (SectionPoint)baseObj;
		} else {
			obj = new SectionPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSectionPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
