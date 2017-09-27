package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 投影坐标系统
 */
public class Iellipsespheriod extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::IEllipseSpheriod", new IellipsespheriodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Geometry::JIEllipseSpheriodProxy", new IellipsespheriodClassFactory());
	}

	protected  double getSamiMajor_void_callback()
	{
		double returnValue = getSamiMajor();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSamiMajor_void(long pNativeObject);
	/**
	 * 获取椭球长半轴
	 * @return constev_real64
	 */
	public double getSamiMajor()
	{
		double returnValue = getSamiMajor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSamiMajor_void_NoVirtual(long pNativeObject);
	protected double getSamiMajor_NoVirtual()
	{
		double returnValue = getSamiMajor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getInvFlattening_void_callback()
	{
		double returnValue = getInvFlattening();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInvFlattening_void(long pNativeObject);
	/**
	 * 获取椭球扁率倒数
	 * @return constev_real64
	 */
	public double getInvFlattening()
	{
		double returnValue = getInvFlattening_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInvFlattening_void_NoVirtual(long pNativeObject);
	protected double getInvFlattening_NoVirtual()
	{
		double returnValue = getInvFlattening_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getSphereName_void_callback()
	{
		String returnValue = getSphereName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSphereName_void(long pNativeObject);
	/**
	 * 获取椭球体名称
	 * @return conststring
	 */
	public String getSphereName()
	{
		String returnValue = getSphereName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSphereName_void_NoVirtual(long pNativeObject);
	protected String getSphereName_NoVirtual()
	{
		String returnValue = getSphereName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getDatumType_void_callback()
	{
		com.earthview.world.spatial.utility.EVDatumType returnValue = getDatumType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDatumType_void(long pNativeObject);
	/**
	 * 获取椭球体对应的大地水准面模型
	 * @return constEarthView::World::Spatial::Utility::EVDatumType
	 */
	public com.earthview.world.spatial.utility.EVDatumType getDatumType()
	{
		int returnValue = getDatumType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVDatumType.toEnum(returnValue);
	}
	native private int getDatumType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.utility.EVDatumType getDatumType_NoVirtual()
	{
		int returnValue = getDatumType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVDatumType.toEnum(returnValue);
	}

	protected  double getFromGreenWicth_void_callback()
	{
		double returnValue = getFromGreenWicth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFromGreenWicth_void(long pNativeObject);
	/**
	 * 获取椭球体起始子午面与格林威治天文子午面之间的夹角
	 * @return constev_real64
	 */
	public double getFromGreenWicth()
	{
		double returnValue = getFromGreenWicth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFromGreenWicth_void_NoVirtual(long pNativeObject);
	protected double getFromGreenWicth_NoVirtual()
	{
		double returnValue = getFromGreenWicth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void getAngularUnits_EVString_ev_real64_callback(long pszname, long dfunitsValue)
	{
		StringPointer psznameParamValue = new StringPointer(new InstancePointer(pszname));
		DoublePointer dfunitsValueParamValue = new DoublePointer(new InstancePointer(dfunitsValue));
		getAngularUnits(psznameParamValue, dfunitsValueParamValue);
	}

	native private void getAngularUnits_EVString_ev_real64(long pNativeObject, long pszname, long dfunitsValue);
	/**
	 * 获取椭球体地理坐标单位键值对
	 * @param name string
	 * @param unitsValue ev_real64
	 */
	public void getAngularUnits(StringPointer pszname, DoublePointer dfunitsValue)
	{
		long psznameParamValue = pszname.nativeObject.pointer;
		long dfunitsValueParamValue = dfunitsValue.nativeObject.pointer;
		getAngularUnits_EVString_ev_real64(this.nativeObject.pointer, psznameParamValue, dfunitsValueParamValue);
	}
	native private void getAngularUnits_EVString_ev_real64_NoVirtual(long pNativeObject, long pszname, long dfunitsValue);
	protected void getAngularUnits_NoVirtual(StringPointer pszname, DoublePointer dfunitsValue)
	{
		long psznameParamValue = pszname.nativeObject.pointer;
		long dfunitsValueParamValue = dfunitsValue.nativeObject.pointer;
		getAngularUnits_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, psznameParamValue, dfunitsValueParamValue);
	}

	public Iellipsespheriod(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iellipsespheriod(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSamiMajor_void(long pNativeObject, String method);
	native protected void register_getInvFlattening_void(long pNativeObject, String method);
	native protected void register_getSphereName_void(long pNativeObject, String method);
	native protected void register_getDatumType_void(long pNativeObject, String method);
	native protected void register_getFromGreenWicth_void(long pNativeObject, String method);
	native protected void register_getAngularUnits_EVString_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSamiMajor_void(this.nativeObject.pointer, "getSamiMajor_void_callback");
			this.register_getInvFlattening_void(this.nativeObject.pointer, "getInvFlattening_void_callback");
			this.register_getSphereName_void(this.nativeObject.pointer, "getSphereName_void_callback");
			this.register_getDatumType_void(this.nativeObject.pointer, "getDatumType_void_callback");
			this.register_getFromGreenWicth_void(this.nativeObject.pointer, "getFromGreenWicth_void_callback");
			this.register_getAngularUnits_EVString_ev_real64(this.nativeObject.pointer, "getAngularUnits_EVString_ev_real64_callback");
		}
	}
	
	public static Iellipsespheriod fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iellipsespheriod obj = null;
 		if(baseObj instanceof Iellipsespheriod)
		{
			obj = (Iellipsespheriod)baseObj;
		} else {
			obj = new Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IEllipseSpheriod");
			obj.increaseCast();
		}

		return obj;
	}
}
