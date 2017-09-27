package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CProjParameter投影参数类，维护投影正反算所需参数类
 */
public class ProjParameter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjParameter", new ProjParameterClassFactory());
	}

	/**
	 * 赋值构造函数
	 * @param dfCenterLong 中央经线经度
	 * @param dfCenterLat 原点纬线
	 * @param dfSacleFactor 比例因子
	 * @param dfEasting 东偏移量
	 * @param dfNorthing 北偏移量
	 * @param bNorth 是否是北坐标
	 */
	public ProjParameter(double dfCenterLong, double dfCenterLat, double dfSacleFactor, double dfEasting, double dfNorthing, com.earthview.world.spatial.utility.EVProjectionType projType, boolean bNorth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfCenterLongPtr = new BasePointer(dfCenterLong);
		list.add("dfCenterLong", dfCenterLongPtr.get());
		BasePointer dfCenterLatPtr = new BasePointer(dfCenterLat);
		list.add("dfCenterLat", dfCenterLatPtr.get());
		BasePointer dfSacleFactorPtr = new BasePointer(dfSacleFactor);
		list.add("dfSacleFactor", dfSacleFactorPtr.get());
		BasePointer dfEastingPtr = new BasePointer(dfEasting);
		list.add("dfEasting", dfEastingPtr.get());
		BasePointer dfNorthingPtr = new BasePointer(dfNorthing);
		list.add("dfNorthing", dfNorthingPtr.get());
		BasePointer projTypePtr = new BasePointer(projType);
		list.add("projType", projTypePtr.get());
		BasePointer bNorthPtr = new BasePointer(bNorth);
		list.add("bNorth", bNorthPtr.get());
		Create("CProjParameter", list);
	}

	/**
	 * 默认构造函数
	 */
	public ProjParameter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CProjParameter", null);
	}

	/**
	 * 构造预定义的投影
	 */
	public ProjParameter(com.earthview.world.spatial.utility.EVPredefinedProjection projectionType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer projectionTypePtr = new BasePointer(projectionType);
		list.add("projectionType", projectionTypePtr.get());
		Create("CProjParameter", list);
	}

	native private void setCenterLong_ev_real64(long pNativeObject, double dfCenterLong);
	/**
	 * 设置中央经线
	 * @param dfCenterLong 中央经线经度
	 */
	public void setCenterLong(double dfCenterLong)
	{
		double dfCenterLongParamValue = dfCenterLong;
		setCenterLong_ev_real64(this.nativeObject.pointer, dfCenterLongParamValue);
	}
	native private void setOriginLatitude_ev_real64(long pNativeObject, double dfCenterLat);
	/**
	 * 设置原点纬线
	 * @param dfCenterLat 原点纬线坐标
	 */
	public void setOriginLatitude(double dfCenterLat)
	{
		double dfCenterLatParamValue = dfCenterLat;
		setOriginLatitude_ev_real64(this.nativeObject.pointer, dfCenterLatParamValue);
	}
	native private void setSacleFactor_ev_real64(long pNativeObject, double dfsacleFactor);
	/**
	 * 设置比例因子
	 * @param dfsacleFactor 比例因子
	 */
	public void setSacleFactor(double dfsacleFactor)
	{
		double dfsacleFactorParamValue = dfsacleFactor;
		setSacleFactor_ev_real64(this.nativeObject.pointer, dfsacleFactorParamValue);
	}
	native private void setStandarPrallel_1_ev_real64(long pNativeObject, double dfstandParallel);
	/**
	 * 设置第一标准线，单位为°
	 * @return ev_bool
	 */
	public void setStandarPrallel_1(double dfstandParallel)
	{
		double dfstandParallelParamValue = dfstandParallel;
		setStandarPrallel_1_ev_real64(this.nativeObject.pointer, dfstandParallelParamValue);
	}
	native private void setStandarPrallel_2_ev_real64(long pNativeObject, double dfstandParallel);
	/**
	 * 设置第二标准线，单位为°
	 * @return ev_bool
	 */
	public void setStandarPrallel_2(double dfstandParallel)
	{
		double dfstandParallelParamValue = dfstandParallel;
		setStandarPrallel_2_ev_real64(this.nativeObject.pointer, dfstandParallelParamValue);
	}
	native private void setFalseEasting_ev_real64(long pNativeObject, double dfEasting);
	/**
	 * 设置东偏移量
	 * @param dfEasting 坐标东向偏移
	 */
	public void setFalseEasting(double dfEasting)
	{
		double dfEastingParamValue = dfEasting;
		setFalseEasting_ev_real64(this.nativeObject.pointer, dfEastingParamValue);
	}
	native private void setFalseNorthing_ev_real64(long pNativeObject, double dfNothing);
	/**
	 * 设置北偏移量
	 * @param dfNothing 北坐标偏移
	 */
	public void setFalseNorthing(double dfNothing)
	{
		double dfNothingParamValue = dfNothing;
		setFalseNorthing_ev_real64(this.nativeObject.pointer, dfNothingParamValue);
	}
	native private void setNorthing_ev_bool(long pNativeObject, boolean bnorth);
	/**
	 * 设置是否在北半球
	 * @param bnorth 是否在北半球
	 */
	public void setNorthing(boolean bnorth)
	{
		boolean bnorthParamValue = bnorth;
		setNorthing_ev_bool(this.nativeObject.pointer, bnorthParamValue);
	}
	native private double getCenterLong_void(long pNativeObject);
	/**
	 * 获得中央经线
	 * @return ev_real64
	 */
	public double getCenterLong()
	{
		double returnValue = getCenterLong_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOriginLatitude_void(long pNativeObject);
	/**
	 * 获得原点纬线
	 * @return ev_real64
	 */
	public double getOriginLatitude()
	{
		double returnValue = getOriginLatitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSacleFactor_void(long pNativeObject);
	/**
	 * 获取比例因子
	 * @return ev_real64
	 */
	public double getSacleFactor()
	{
		double returnValue = getSacleFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getStandarPrallel_1_void(long pNativeObject);
	/**
	 * 获取第一标准线，单位为°
	 * @return ev_real64
	 */
	public double getStandarPrallel_1()
	{
		double returnValue = getStandarPrallel_1_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getStandarPrallel_2_void(long pNativeObject);
	/**
	 * 获取第二标准线，单位为°
	 * @return ev_real64
	 */
	public double getStandarPrallel_2()
	{
		double returnValue = getStandarPrallel_2_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFalseEasting_void(long pNativeObject);
	/**
	 * 获取东方向偏移量
	 * @return ev_real64
	 */
	public double getFalseEasting()
	{
		double returnValue = getFalseEasting_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFalseNorthing_void(long pNativeObject);
	/**
	 * 获取北方向偏移量
	 * @return ev_real64
	 */
	public double getFalseNorthing()
	{
		double returnValue = getFalseNorthing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isNorthing_void(long pNativeObject);
	/**
	 * 判断是否为北半球坐标
	 * @return ev_bool
	 */
	public boolean isNorthing()
	{
		boolean returnValue = isNorthing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getProjectionType_void(long pNativeObject);
	/**
	 * 获取投影坐标类型
	 * @return 投影类型
	 */
	public com.earthview.world.spatial.utility.EVProjectionType getProjectionType()
	{
		int returnValue = getProjectionType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVProjectionType.toEnum(returnValue);
	}
	public ProjParameter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProjParameter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProjParameter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProjParameter obj = null;
 		if(baseObj instanceof ProjParameter)
		{
			obj = (ProjParameter)baseObj;
		} else {
			obj = new ProjParameter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProjParameter");
			obj.increaseCast();
		}

		return obj;
	}
}
