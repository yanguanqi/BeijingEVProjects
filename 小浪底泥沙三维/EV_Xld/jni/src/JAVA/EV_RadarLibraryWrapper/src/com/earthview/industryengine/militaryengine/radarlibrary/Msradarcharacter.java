package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 机械扫描形雷达特征
 */
public class Msradarcharacter extends com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter", new MsradarcharacterClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCMSRadarCharacterProxy", new MsradarcharacterClassFactory());
	}

	public Msradarcharacter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMSRadarCharacterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.Msradarcharacter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getScannerHorizontalAngleSpan_void(long pNativeObject);
	/**
	 * 获取扫描体跨度
	 * @return 扫描体跨度（角度值）
	 */
	public com.earthview.world.spatial.math.Degree getScannerHorizontalAngleSpan()
	{
		long returnValue = getScannerHorizontalAngleSpan_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setScannerHorizontalAngleSpan_CDegree(long pNativeObject, long degree);
	/**
	 * 设置扫描体跨度
	 * @param degree 扫描体跨度（角度值）
	 */
	public void setScannerHorizontalAngleSpan(com.earthview.world.spatial.math.Degree degree)
	{
		long degreeParamValue = degree.nativeObject.pointer;
		setScannerHorizontalAngleSpan_CDegree(this.nativeObject.pointer, degreeParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 新的雷达对象
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate, "CRadarCharacter");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarCharacter");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter(CreatedWhenConstruct.CWC_NotToCreate, "CRadarCharacter");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.RadarCharacter)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadarCharacter");
		}
		return __returnValue;
	}

	public Msradarcharacter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Msradarcharacter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取截面线串
	 * @return 截面线串
	 */
	public com.earthview.world.spatial.geometry.LineString getSectionCurve()
	{
		return super.getSectionCurve_NoVirtual();
	}
	
	native protected void register_getSectionCurve_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSectionCurve_void(this.nativeObject.pointer, "getSectionCurve_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Msradarcharacter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Msradarcharacter obj = null;
 		if(baseObj instanceof Msradarcharacter)
		{
			obj = (Msradarcharacter)baseObj;
		} else {
			obj = new Msradarcharacter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMSRadarCharacter");
			obj.increaseCast();
		}

		return obj;
	}
}
