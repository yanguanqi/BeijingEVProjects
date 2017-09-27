package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CEllipseShpere椭球体类，维护椭球体相关参数
 */
public class EllipseSpheriod extends com.earthview.world.spatial.geometry.Iellipsespheriod {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CEllipseSpheriod", new EllipseSpheriodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::JCEllipseSpheriodProxy", new EllipseSpheriodClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public EllipseSpheriod() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEllipseSpheriodProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.utility.EllipseSpheriod".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 初始化构造函数
	 * @param strSphereName 椭球体名称
	 * @param eDatumType 水准面模型
	 * @param dfSamimajor 长半轴
	 * @param dfInvFlattening 扁率倒数
	 * @param dfFromGreenWicth 与格林威治天文子午面之间的夹角
	 * @param unitsName 单位名称,"degree"
	 * @param dfAngularUnits 单位数值,以弧度为标准,1°=180/PI
	 */
	public EllipseSpheriod(String pszSphereName, com.earthview.world.spatial.utility.EVDatumType eDatumType, double dfSamimajor, double dfInvFlattening, double dfFromGreenWicth, String pszunitsName, double dfAngularUnits) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pszSphereNamePtr = new BasePointer(pszSphereName);
		list.add("pszSphereName", pszSphereNamePtr.get());
		BasePointer eDatumTypePtr = new BasePointer(eDatumType);
		list.add("eDatumType", eDatumTypePtr.get());
		BasePointer dfSamimajorPtr = new BasePointer(dfSamimajor);
		list.add("dfSamimajor", dfSamimajorPtr.get());
		BasePointer dfInvFlatteningPtr = new BasePointer(dfInvFlattening);
		list.add("dfInvFlattening", dfInvFlatteningPtr.get());
		BasePointer dfFromGreenWicthPtr = new BasePointer(dfFromGreenWicth);
		list.add("dfFromGreenWicth", dfFromGreenWicthPtr.get());
		BasePointer pszunitsNamePtr = new BasePointer(pszunitsName);
		list.add("pszunitsName", pszunitsNamePtr.get());
		BasePointer dfAngularUnitsPtr = new BasePointer(dfAngularUnits);
		list.add("dfAngularUnits", dfAngularUnitsPtr.get());
		Create("JCEllipseSpheriodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.utility.EllipseSpheriod".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/// <summary>
	/// 构造常见椭球体
	/// <summary>
	/// <param name="spheriodType">椭球体类型</param>
	public EllipseSpheriod(com.earthview.world.spatial.utility.EVSpheriod spheriodType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer spheriodTypePtr = new BasePointer(spheriodType);
		list.add("spheriodType", spheriodTypePtr.get());
		Create("JCEllipseSpheriodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.utility.EllipseSpheriod".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 拷贝构造函数
	 */
	public EllipseSpheriod(com.earthview.world.spatial.utility.EllipseSpheriod objEllipse) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objEllipsePtr = new BasePointer(objEllipse);
		list.add("objEllipse", objEllipsePtr.get());
		Create("JCEllipseSpheriodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.utility.EllipseSpheriod".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CEllipseSpheriod(long pNativeObject, long objEllipse);
	/**
	 * 赋值函数
	 */
	public com.earthview.world.spatial.utility.EllipseSpheriod OperatorAssign(com.earthview.world.spatial.utility.EllipseSpheriod objEllipse)
	{
		long objEllipseParamValue = objEllipse.nativeObject.pointer;
		long returnValue = OperatorAssign_CEllipseSpheriod(this.nativeObject.pointer, objEllipseParamValue);
		com.earthview.world.spatial.utility.EllipseSpheriod __returnValue = new com.earthview.world.spatial.utility.EllipseSpheriod(CreatedWhenConstruct.CWC_NotToCreate, "CEllipseSpheriod");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.utility.EllipseSpheriod)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEllipseSpheriod");
		}
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

	native private String getSphereName_void(long pNativeObject);
	/**
	 * 获取椭球体名称
	 * @return string
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

	public EllipseSpheriod(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EllipseSpheriod(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static EllipseSpheriod fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EllipseSpheriod obj = null;
 		if(baseObj instanceof EllipseSpheriod)
		{
			obj = (EllipseSpheriod)baseObj;
		} else {
			obj = new EllipseSpheriod(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEllipseSpheriod");
			obj.increaseCast();
		}

		return obj;
	}
}
