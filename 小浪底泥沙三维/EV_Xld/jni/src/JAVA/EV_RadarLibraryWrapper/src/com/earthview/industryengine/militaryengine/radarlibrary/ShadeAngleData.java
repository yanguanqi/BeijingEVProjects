package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 近山遮蔽角
 */
public class ShadeAngleData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData", new ShadeAngleDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::JCShadeAngleDataProxy", new ShadeAngleDataClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ShadeAngleData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShadeAngleDataProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param horizontalAngle 水平角
	 * @param shadeAngle 遮蔽角
	 */
	public ShadeAngleData(double horizontalAngle, double shadeAngle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer horizontalAnglePtr = new BasePointer(horizontalAngle);
		list.add("horizontalAngle", horizontalAnglePtr.get());
		BasePointer shadeAnglePtr = new BasePointer(shadeAngle);
		list.add("shadeAngle", shadeAnglePtr.get());
		Create("JCShadeAngleDataProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getHorizontalAngle_void(long pNativeObject);
	/**
	 * 获取水平角
	 * @param  
	 * @return 水平角
	 */
	public double getHorizontalAngle()
	{
		double returnValue = getHorizontalAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadeAngle_void(long pNativeObject);
	/**
	 * 获取遮蔽角
	 * @param  
	 * @return 遮蔽角
	 */
	public double getShadeAngle()
	{
		double returnValue = getShadeAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHorizontalAngle_Real(long pNativeObject, double horizontalAngle);
	/**
	 * 设置水平角
	 * @param horizontalAngle 水平角
	 */
	public void setHorizontalAngle(double horizontalAngle)
	{
		double horizontalAngleParamValue = horizontalAngle;
		setHorizontalAngle_Real(this.nativeObject.pointer, horizontalAngleParamValue);
	}
	native private void setShadeAngle_Real(long pNativeObject, double shadeAngle);
	/**
	 * 设置遮蔽角
	 * @param pitchAngle 截面点的位置
	 */
	public void setShadeAngle(double shadeAngle)
	{
		double shadeAngleParamValue = shadeAngle;
		setShadeAngle_Real(this.nativeObject.pointer, shadeAngleParamValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData returnValue = ev_clone();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 遮蔽角数据
	 */
	public com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.militaryengine.radarlibrary.ShadeAngleData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CShadeAngleData");
		}
		return __returnValue;
	}

	public ShadeAngleData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadeAngleData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static ShadeAngleData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadeAngleData obj = null;
 		if(baseObj instanceof ShadeAngleData)
		{
			obj = (ShadeAngleData)baseObj;
		} else {
			obj = new ShadeAngleData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadeAngleData");
			obj.increaseCast();
		}

		return obj;
	}
}
