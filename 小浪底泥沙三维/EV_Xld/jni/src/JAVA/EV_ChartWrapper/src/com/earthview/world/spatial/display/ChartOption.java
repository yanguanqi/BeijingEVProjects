package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//////////////////////////////////////////////////
public class ChartOption extends com.earthview.world.spatial.display.Ichartoption {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CChartOption", new ChartOptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCChartOptionProxy", new ChartOptionClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public ChartOption() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCChartOptionProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.ChartOption".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getChartPointType_void(long pNativeObject);
	/**
	 * 获取点状物标的类型
	 * @return 类型
	 */
	public com.earthview.world.spatial.display.EVChartLookUpType getChartPointType()
	{
		int returnValue = getChartPointType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartLookUpType.toEnum(returnValue);
	}
	native private int getChartPointType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVChartLookUpType getChartPointType_NoVirtual()
	{
		int returnValue = getChartPointType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartLookUpType.toEnum(returnValue);
	}

	native private void setChartPointType_EVChartLookUpType(long pNativeObject, int type);
	/**
	 * 设置点状物标的类型
	 * @param type 类型
	 * @return 类型
	 */
	public void setChartPointType(com.earthview.world.spatial.display.EVChartLookUpType type)
	{
		int typeParamValue = type.getValue();
		setChartPointType_EVChartLookUpType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setChartPointType_EVChartLookUpType_NoVirtual(long pNativeObject, int type);
	protected void setChartPointType_NoVirtual(com.earthview.world.spatial.display.EVChartLookUpType type)
	{
		int typeParamValue = type.getValue();
		setChartPointType_EVChartLookUpType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private int getChartAreaType_void(long pNativeObject);
	/**
	 * 获取面状物标的类型
	 * @return 类型
	 */
	public com.earthview.world.spatial.display.EVChartLookUpType getChartAreaType()
	{
		int returnValue = getChartAreaType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartLookUpType.toEnum(returnValue);
	}
	native private int getChartAreaType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVChartLookUpType getChartAreaType_NoVirtual()
	{
		int returnValue = getChartAreaType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartLookUpType.toEnum(returnValue);
	}

	native private void setChartAreaType_EVChartLookUpType(long pNativeObject, int type);
	/**
	 * 设置面状物标的类型
	 * @param type 类型
	 */
	public void setChartAreaType(com.earthview.world.spatial.display.EVChartLookUpType type)
	{
		int typeParamValue = type.getValue();
		setChartAreaType_EVChartLookUpType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setChartAreaType_EVChartLookUpType_NoVirtual(long pNativeObject, int type);
	protected void setChartAreaType_NoVirtual(com.earthview.world.spatial.display.EVChartLookUpType type)
	{
		int typeParamValue = type.getValue();
		setChartAreaType_EVChartLookUpType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private int getCartoAssistLineType_void(long pNativeObject);
	/**
	 * 获取辅助线补充部分类型
	 * @return 类型
	 */
	public com.earthview.world.spatial.display.EVChartSimpleLineType getCartoAssistLineType()
	{
		int returnValue = getCartoAssistLineType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartSimpleLineType.toEnum(returnValue);
	}
	native private int getCartoAssistLineType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVChartSimpleLineType getCartoAssistLineType_NoVirtual()
	{
		int returnValue = getCartoAssistLineType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartSimpleLineType.toEnum(returnValue);
	}

	native private void setCartoAssistLineType_EVChartSimpleLineType(long pNativeObject, int type);
	/**
	 * 设置辅助线补充部分类型
	 * @param type 显示类型
	 */
	public void setCartoAssistLineType(com.earthview.world.spatial.display.EVChartSimpleLineType type)
	{
		int typeParamValue = type.getValue();
		setCartoAssistLineType_EVChartSimpleLineType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setCartoAssistLineType_EVChartSimpleLineType_NoVirtual(long pNativeObject, int type);
	protected void setCartoAssistLineType_NoVirtual(com.earthview.world.spatial.display.EVChartSimpleLineType type)
	{
		int typeParamValue = type.getValue();
		setCartoAssistLineType_EVChartSimpleLineType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private void setColorType_EVChartColorType(long pNativeObject, int type);
	/**
	 * 设置颜色模式
	 * @param type 颜色模式
	 */
	public void setColorType(com.earthview.world.spatial.display.EVChartColorType type)
	{
		int typeParamValue = type.getValue();
		setColorType_EVChartColorType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setColorType_EVChartColorType_NoVirtual(long pNativeObject, int type);
	protected void setColorType_NoVirtual(com.earthview.world.spatial.display.EVChartColorType type)
	{
		int typeParamValue = type.getValue();
		setColorType_EVChartColorType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private int getColorType_void(long pNativeObject);
	/**
	 * 获取颜色模式
	 * @return 获取颜色模式
	 */
	public com.earthview.world.spatial.display.EVChartColorType getColorType()
	{
		int returnValue = getColorType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartColorType.toEnum(returnValue);
	}
	native private int getColorType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVChartColorType getColorType_NoVirtual()
	{
		int returnValue = getColorType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartColorType.toEnum(returnValue);
	}

	native private int getDisplayCategory_void(long pNativeObject);
	/**
	 * 获取显示类型
	 * @return 显示类型
	 */
	public com.earthview.world.spatial.display.EVChartDisplayCategory getDisplayCategory()
	{
		int returnValue = getDisplayCategory_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartDisplayCategory.toEnum(returnValue);
	}
	native private int getDisplayCategory_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVChartDisplayCategory getDisplayCategory_NoVirtual()
	{
		int returnValue = getDisplayCategory_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVChartDisplayCategory.toEnum(returnValue);
	}

	native private void setDisplayCategory_EVChartDisplayCategory(long pNativeObject, int category);
	/**
	 * 设置显示类型
	 * @param category 显示类型
	 */
	public void setDisplayCategory(com.earthview.world.spatial.display.EVChartDisplayCategory category)
	{
		int categoryParamValue = category.getValue();
		setDisplayCategory_EVChartDisplayCategory(this.nativeObject.pointer, categoryParamValue);
	}
	native private void setDisplayCategory_EVChartDisplayCategory_NoVirtual(long pNativeObject, int category);
	protected void setDisplayCategory_NoVirtual(com.earthview.world.spatial.display.EVChartDisplayCategory category)
	{
		int categoryParamValue = category.getValue();
		setDisplayCategory_EVChartDisplayCategory_NoVirtual(this.nativeObject.pointer, categoryParamValue);
	}

	native private double getSafetyDeep_void(long pNativeObject);
	/**
	 * 获取安全深度，单位：米
	 * @return 安全深度
	 */
	public double getSafetyDeep()
	{
		double returnValue = getSafetyDeep_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSafetyDeep_void_NoVirtual(long pNativeObject);
	protected double getSafetyDeep_NoVirtual()
	{
		double returnValue = getSafetyDeep_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSafetyDeep_ev_real64(long pNativeObject, double value);
	/**
	 * 设置安全深度
	 * @param value 安全深度
	 */
	public void setSafetyDeep(double value)
	{
		double valueParamValue = value;
		setSafetyDeep_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSafetyDeep_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setSafetyDeep_NoVirtual(double value)
	{
		double valueParamValue = value;
		setSafetyDeep_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getSafetyContour_void(long pNativeObject);
	/**
	 * 获取安全等深线，单位：米
	 * @return 安全等深线值
	 */
	public double getSafetyContour()
	{
		double returnValue = getSafetyContour_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSafetyContour_void_NoVirtual(long pNativeObject);
	protected double getSafetyContour_NoVirtual()
	{
		double returnValue = getSafetyContour_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSafetyContour_ev_real64(long pNativeObject, double value);
	/**
	 * 设置安全等深线，单位：米
	 * @param value 安全等深线值
	 */
	public void setSafetyContour(double value)
	{
		double valueParamValue = value;
		setSafetyContour_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSafetyContour_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setSafetyContour_NoVirtual(double value)
	{
		double valueParamValue = value;
		setSafetyContour_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getShallowContour_void(long pNativeObject);
	/**
	 * 获取浅水等深线，单位：米
	 * @return 潜水等深线值
	 */
	public double getShallowContour()
	{
		double returnValue = getShallowContour_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShallowContour_void_NoVirtual(long pNativeObject);
	protected double getShallowContour_NoVirtual()
	{
		double returnValue = getShallowContour_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShallowContour_ev_real64(long pNativeObject, double value);
	/**
	 * 设置浅水等深线，单位：米
	 * @param value 浅水等深线值
	 */
	public void setShallowContour(double value)
	{
		double valueParamValue = value;
		setShallowContour_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShallowContour_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setShallowContour_NoVirtual(double value)
	{
		double valueParamValue = value;
		setShallowContour_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getDeepContour_void(long pNativeObject);
	/**
	 * 获取深水等深线，单位：米
	 * @return 深水等深线值
	 */
	public double getDeepContour()
	{
		double returnValue = getDeepContour_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDeepContour_void_NoVirtual(long pNativeObject);
	protected double getDeepContour_NoVirtual()
	{
		double returnValue = getDeepContour_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDeepContour_ev_real64(long pNativeObject, double value);
	/**
	 * 设置深水等深线，单位：米
	 * @param value 深水等深线值
	 */
	public void setDeepContour(double value)
	{
		double valueParamValue = value;
		setDeepContour_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDeepContour_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setDeepContour_NoVirtual(double value)
	{
		double valueParamValue = value;
		setDeepContour_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isTwoShadesOn_void(long pNativeObject);
	/**
	 * 获取双阴影模式是否开启
	 * @return 开启返回ture，否则返回false
	 */
	public boolean isTwoShadesOn()
	{
		boolean returnValue = isTwoShadesOn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isTwoShadesOn_void_NoVirtual(long pNativeObject);
	protected boolean isTwoShadesOn_NoVirtual()
	{
		boolean returnValue = isTwoShadesOn_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTwoShadesValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置双阴影模式是否开启
	 * @param value true开启/false关闭
	 */
	public void setTwoShadesValue(boolean value)
	{
		boolean valueParamValue = value;
		setTwoShadesValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setTwoShadesValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setTwoShadesValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setTwoShadesValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShallowPatternOn_void(long pNativeObject);
	/**
	 * 获取潜水模式是否开启
	 * @return true开启/flase关闭
	 */
	public boolean isShallowPatternOn()
	{
		boolean returnValue = isShallowPatternOn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShallowPatternOn_void_NoVirtual(long pNativeObject);
	protected boolean isShallowPatternOn_NoVirtual()
	{
		boolean returnValue = isShallowPatternOn_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShallowPatternValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置潜水模式是否开启
	 * @param value true开启/flase关闭
	 */
	public void setShallowPatternValue(boolean value)
	{
		boolean valueParamValue = value;
		setShallowPatternValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShallowPatternValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShallowPatternValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShallowPatternValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShipOutlineOn_void(long pNativeObject);
	/**
	 * 获取是否渲染船轮廓
	 * @return true渲染轮廓/false点符号表示
	 */
	public boolean isShipOutlineOn()
	{
		boolean returnValue = isShipOutlineOn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShipOutlineOn_void_NoVirtual(long pNativeObject);
	protected boolean isShipOutlineOn_NoVirtual()
	{
		boolean returnValue = isShipOutlineOn_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShipOutlineValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否渲染船轮廓
	 * @param value true渲染轮廓/false点符号表示
	 */
	public void setShipOutlineValue(boolean value)
	{
		boolean valueParamValue = value;
		setShipOutlineValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShipOutlineValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShipOutlineValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShipOutlineValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isFullSectorsOn_void(long pNativeObject);
	/**
	 * 获取是否显示完整长度的光照线
	 * @return true开启/false关闭
	 */
	public boolean isFullSectorsOn()
	{
		boolean returnValue = isFullSectorsOn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFullSectorsOn_void_NoVirtual(long pNativeObject);
	protected boolean isFullSectorsOn_NoVirtual()
	{
		boolean returnValue = isFullSectorsOn_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setFullSectorsValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示完整长度的光照线
	 * @param value true开启/false关闭
	 */
	public void setFullSectorsValue(boolean value)
	{
		boolean valueParamValue = value;
		setFullSectorsValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setFullSectorsValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setFullSectorsValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setFullSectorsValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getDistanceTag_void(long pNativeObject);
	/**
	 * 获取航线上需要航行的距离，单位：海里
	 * @return 距离
	 */
	public double getDistanceTag()
	{
		double returnValue = getDistanceTag_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDistanceTag_void_NoVirtual(long pNativeObject);
	protected double getDistanceTag_NoVirtual()
	{
		double returnValue = getDistanceTag_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDistanceTag_ev_real64(long pNativeObject, double value);
	/**
	 * 设置航线上需要航行的距离，单位：海里
	 * @param value 距离
	 */
	public void setDistanceTag(double value)
	{
		double valueParamValue = value;
		setDistanceTag_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDistanceTag_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setDistanceTag_NoVirtual(double value)
	{
		double valueParamValue = value;
		setDistanceTag_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private int getTimeTags_void(long pNativeObject);
	/**
	 * 获取船舶航迹的时间标记
	 * @return 时间间隔，单位：分
	 */
	public int getTimeTags()
	{
		int returnValue = getTimeTags_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTimeTags_void_NoVirtual(long pNativeObject);
	protected int getTimeTags_NoVirtual()
	{
		int returnValue = getTimeTags_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTimeTages_ev_int32(long pNativeObject, int value);
	/**
	 * 设置船舶航迹的时间标记
	 * @param value 时间间隔，单位：分
	 */
	public void setTimeTages(int value)
	{
		int valueParamValue = value;
		setTimeTages_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setTimeTages_ev_int32_NoVirtual(long pNativeObject, int value);
	protected void setTimeTages_NoVirtual(int value)
	{
		int valueParamValue = value;
		setTimeTages_ev_int32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private int getSymbolGroup_void(long pNativeObject);
	/**
	 * 获取显示符号组
	 * @return 显示符号组代码
	 */
	public int getSymbolGroup()
	{
		int returnValue = getSymbolGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolGroup_void_NoVirtual(long pNativeObject);
	protected int getSymbolGroup_NoVirtual()
	{
		int returnValue = getSymbolGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSymbolGroup_ev_int32(long pNativeObject, int value);
	/**
	 * 设置显示符号组
	 * @param value 显示符号组代码
	 */
	public void setSymbolGroup(int value)
	{
		int valueParamValue = value;
		setSymbolGroup_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSymbolGroup_ev_int32_NoVirtual(long pNativeObject, int value);
	protected void setSymbolGroup_NoVirtual(int value)
	{
		int valueParamValue = value;
		setSymbolGroup_ev_int32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private int getTextGroup_void(long pNativeObject);
	/**
	 * 获取显示注记组
	 * @return 显示注记组代码
	 */
	public int getTextGroup()
	{
		int returnValue = getTextGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTextGroup_void_NoVirtual(long pNativeObject);
	protected int getTextGroup_NoVirtual()
	{
		int returnValue = getTextGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTextGroup_ev_int32(long pNativeObject, int group);
	/**
	 * 设置显示注记组
	 * @param group 显示注记组代码
	 */
	public void setTextGroup(int group)
	{
		int groupParamValue = group;
		setTextGroup_ev_int32(this.nativeObject.pointer, groupParamValue);
	}
	native private void setTextGroup_ev_int32_NoVirtual(long pNativeObject, int group);
	protected void setTextGroup_NoVirtual(int group)
	{
		int groupParamValue = group;
		setTextGroup_ev_int32_NoVirtual(this.nativeObject.pointer, groupParamValue);
	}

	native private double getChartScale_void(long pNativeObject);
	/**
	 * 获取海图比例尺
	 * @return 海图比例尺
	 */
	public double getChartScale()
	{
		double returnValue = getChartScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getChartScale_void_NoVirtual(long pNativeObject);
	protected double getChartScale_NoVirtual()
	{
		double returnValue = getChartScale_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setChartScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置海图比例尺
	 * @param scale 海图比例尺
	 */
	public void setChartScale(double scale)
	{
		double scaleParamValue = scale;
		setChartScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setChartScale_ev_real64_NoVirtual(long pNativeObject, double scale);
	protected void setChartScale_NoVirtual(double scale)
	{
		double scaleParamValue = scale;
		setChartScale_ev_real64_NoVirtual(this.nativeObject.pointer, scaleParamValue);
	}

	native private boolean isShowOtherVessel_void(long pNativeObject);
	/**
	 * 获取是否显示其他船只
	 * @return true显示其他船只/false不显示
	 */
	public boolean isShowOtherVessel()
	{
		boolean returnValue = isShowOtherVessel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowOtherVessel_void_NoVirtual(long pNativeObject);
	protected boolean isShowOtherVessel_NoVirtual()
	{
		boolean returnValue = isShowOtherVessel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowOtherVesselValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示其他船只
	 * @param value true显示/false不显示
	 */
	public void setShowOtherVesselValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowOtherVesselValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowOtherVesselValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowOtherVesselValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowOtherVesselValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShowCourseSpeedVessel_void(long pNativeObject);
	/**
	 * 获取是否显示路线及速度矢量
	 * @return true显示/false不显示
	 */
	public boolean isShowCourseSpeedVessel()
	{
		boolean returnValue = isShowCourseSpeedVessel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowCourseSpeedVessel_void_NoVirtual(long pNativeObject);
	protected boolean isShowCourseSpeedVessel_NoVirtual()
	{
		boolean returnValue = isShowCourseSpeedVessel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowCourseSpeedVesselValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示路线及速度矢量
	 * @return true显示/false不显示
	 */
	public void setShowCourseSpeedVesselValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowCourseSpeedVesselValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowCourseSpeedVesselValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowCourseSpeedVesselValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowCourseSpeedVesselValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShowBeamBearingLine_void(long pNativeObject);
	/**
	 * 获取是否显示船宽度轴线
	 * @return true显示/不显示
	 */
	public boolean isShowBeamBearingLine()
	{
		boolean returnValue = isShowBeamBearingLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowBeamBearingLine_void_NoVirtual(long pNativeObject);
	protected boolean isShowBeamBearingLine_NoVirtual()
	{
		boolean returnValue = isShowBeamBearingLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowBeamBearingLineValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示船的宽度轴线
	 * @param value true显示/不显示
	 */
	public void setShowBeamBearingLineValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowBeamBearingLineValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowBeamBearingLineValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowBeamBearingLineValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowBeamBearingLineValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShowStabilization_void(long pNativeObject);
	/**
	 * 获取是否显示速度矢量稳定性
	 * @return true显示/false不显示
	 */
	public boolean isShowStabilization()
	{
		boolean returnValue = isShowStabilization_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowStabilization_void_NoVirtual(long pNativeObject);
	protected boolean isShowStabilization_NoVirtual()
	{
		boolean returnValue = isShowStabilization_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowStabilizationValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示速度矢量稳定性
	 * @param value true显示/false不显示
	 */
	public void setShowStabilizationValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowStabilizationValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowStabilizationValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowStabilizationValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowStabilizationValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShowTimeMarks_void(long pNativeObject);
	/**
	 * 获取是否在速度矢量上做时间标记
	 * @return true显示时间标记/false不显示
	 */
	public boolean isShowTimeMarks()
	{
		boolean returnValue = isShowTimeMarks_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowTimeMarks_void_NoVirtual(long pNativeObject);
	protected boolean isShowTimeMarks_NoVirtual()
	{
		boolean returnValue = isShowTimeMarks_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowTimeMarksValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否在速度矢量上做时间标记
	 * @param value true显示时间标记/false不显示
	 */
	public void setShowTimeMarksValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowTimeMarksValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowTimeMarksValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowTimeMarksValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowTimeMarksValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isShowHeadingLine_void(long pNativeObject);
	/**
	 * 获取是否显示航向线
	 * @return true显示，false不显示
	 */
	public boolean isShowHeadingLine()
	{
		boolean returnValue = isShowHeadingLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShowHeadingLine_void_NoVirtual(long pNativeObject);
	protected boolean isShowHeadingLine_NoVirtual()
	{
		boolean returnValue = isShowHeadingLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShowHeadingLineValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示航向线
	 * @param value true显示，false不显示
	 */
	public void setShowHeadingLineValue(boolean value)
	{
		boolean valueParamValue = value;
		setShowHeadingLineValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShowHeadingLineValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setShowHeadingLineValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setShowHeadingLineValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private int getShipBeamLengthValue_void(long pNativeObject);
	/**
	 * 获取船宽度线的长度，单位：毫米
	 * @return 长度，默认值：10
	 */
	public int getShipBeamLengthValue()
	{
		int returnValue = getShipBeamLengthValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getShipBeamLengthValue_void_NoVirtual(long pNativeObject);
	protected int getShipBeamLengthValue_NoVirtual()
	{
		int returnValue = getShipBeamLengthValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setShipBeamLengthValue_ev_int32(long pNativeObject, int value);
	/**
	 * 设置船宽度线的长度单位：毫米，默认值10
	 * @param value 线的长度
	 */
	public void setShipBeamLengthValue(int value)
	{
		int valueParamValue = value;
		setShipBeamLengthValue_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setShipBeamLengthValue_ev_int32_NoVirtual(long pNativeObject, int value);
	protected void setShipBeamLengthValue_NoVirtual(int value)
	{
		int valueParamValue = value;
		setShipBeamLengthValue_ev_int32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void insertVRMRadius_ev_real64(long pNativeObject, double radius);
	/**
	 * 插入可变距离标识的半径
	 * @param radius 标识的半径，单位：海里
	 */
	public void insertVRMRadius(double radius)
	{
		double radiusParamValue = radius;
		insertVRMRadius_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private void insertVRMRadius_ev_real64_NoVirtual(long pNativeObject, double radius);
	protected void insertVRMRadius_NoVirtual(double radius)
	{
		double radiusParamValue = radius;
		insertVRMRadius_ev_real64_NoVirtual(this.nativeObject.pointer, radiusParamValue);
	}

	native private long getVRMRadiusNum_void(long pNativeObject);
	/**
	 * 获取可变距离标识的总数
	 * @return 标识总数
	 */
	public long getVRMRadiusNum()
	{
		long returnValue = getVRMRadiusNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVRMRadiusNum_void_NoVirtual(long pNativeObject);
	protected long getVRMRadiusNum_NoVirtual()
	{
		long returnValue = getVRMRadiusNum_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getVRMRadiusValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的标识半径
	 * @param index 索引
	 * @return 标识的半径，单位：海里
	 */
	public double getVRMRadiusValue(long index)
	{
		long indexParamValue = index;
		double returnValue = getVRMRadiusValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getVRMRadiusValue_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected double getVRMRadiusValue_NoVirtual(long index)
	{
		long indexParamValue = index;
		double returnValue = getVRMRadiusValue_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void removeVRMRadius_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的标识半径
	 * @param index 标识半径
	 */
	public void removeVRMRadius(long index)
	{
		long indexParamValue = index;
		removeVRMRadius_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeVRMRadius_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeVRMRadius_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeVRMRadius_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private void clearVRMRadius_void(long pNativeObject);
	/**
	 * 清空已设的标识半径
	 */
	public void clearVRMRadius()
	{
		clearVRMRadius_void(this.nativeObject.pointer);
	}
	native private void clearVRMRadius_void_NoVirtual(long pNativeObject);
	protected void clearVRMRadius_NoVirtual()
	{
		clearVRMRadius_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean isUseVRMEBLSymbolA_void(long pNativeObject);
	/**
	 * 获取渲染可变距离标识和电子方位线时采用的符号
	 * @return true采用ERBLNA01,false采用ERBLNB01
	 */
	public boolean isUseVRMEBLSymbolA()
	{
		boolean returnValue = isUseVRMEBLSymbolA_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUseVRMEBLSymbolA_void_NoVirtual(long pNativeObject);
	protected boolean isUseVRMEBLSymbolA_NoVirtual()
	{
		boolean returnValue = isUseVRMEBLSymbolA_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setUseVRMEBLSymbolAValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置渲染可变距离标识和电子方位线时采用的符号
	 * @param value true采用ERBLNA01,false采用ERBLNB01
	 */
	public void setUseVRMEBLSymbolAValue(boolean value)
	{
		boolean valueParamValue = value;
		setUseVRMEBLSymbolAValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setUseVRMEBLSymbolAValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setUseVRMEBLSymbolAValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setUseVRMEBLSymbolAValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private double getEBLLength_void(long pNativeObject);
	/**
	 * 获取电子方位线的长度
	 * @return 长度，单位：海里
	 */
	public double getEBLLength()
	{
		double returnValue = getEBLLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getEBLLength_void_NoVirtual(long pNativeObject);
	protected double getEBLLength_NoVirtual()
	{
		double returnValue = getEBLLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEBLLength_ev_real64(long pNativeObject, double length);
	/**
	 * 设置电子方位线的长度
	 * @param length 长度，单位：海里
	 */
	public void setEBLLength(double length)
	{
		double lengthParamValue = length;
		setEBLLength_ev_real64(this.nativeObject.pointer, lengthParamValue);
	}
	native private void setEBLLength_ev_real64_NoVirtual(long pNativeObject, double length);
	protected void setEBLLength_NoVirtual(double length)
	{
		double lengthParamValue = length;
		setEBLLength_ev_real64_NoVirtual(this.nativeObject.pointer, lengthParamValue);
	}

	native private double getEBLAngle_void(long pNativeObject);
	/**
	 * 获取电子方位线的角度
	 * @return 电子方位线的角度
	 */
	public double getEBLAngle()
	{
		double returnValue = getEBLAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getEBLAngle_void_NoVirtual(long pNativeObject);
	protected double getEBLAngle_NoVirtual()
	{
		double returnValue = getEBLAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setEBLAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置电子方位线的角度
	 * @param angle 电子方位线的角度
	 */
	public void setEBLAngle(double angle)
	{
		double angleParamValue = angle;
		setEBLAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setEBLAngle_ev_real64_NoVirtual(long pNativeObject, double angle);
	protected void setEBLAngle_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		setEBLAngle_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	native private void setUseEnglishValue_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否显示英语
	 * @param value true用英语/用其他语言
	 */
	public void setUseEnglishValue(boolean value)
	{
		boolean valueParamValue = value;
		setUseEnglishValue_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setUseEnglishValue_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setUseEnglishValue_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setUseEnglishValue_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean getUseEnglishValue_void(long pNativeObject);
	/**
	 * 注记是否显示英语
	 * @return true用英语/用其他语言
	 */
	public boolean getUseEnglishValue()
	{
		boolean returnValue = getUseEnglishValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseEnglishValue_void_NoVirtual(long pNativeObject);
	protected boolean getUseEnglishValue_NoVirtual()
	{
		boolean returnValue = getUseEnglishValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setUseBlurSpatialRelation_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否模糊查询空间关系，默认为true
	 * @param value true表示模糊查询/false表示精确查询
	 */
	public void setUseBlurSpatialRelation(boolean value)
	{
		boolean valueParamValue = value;
		setUseBlurSpatialRelation_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setUseBlurSpatialRelation_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setUseBlurSpatialRelation_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setUseBlurSpatialRelation_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isUseBlurSpatialRelation_void(long pNativeObject);
	/**
	 * 获取是否模糊查询空间关系，默认为true
	 * @return true表示模糊查询/false表示精确查询
	 */
	public boolean isUseBlurSpatialRelation()
	{
		boolean returnValue = isUseBlurSpatialRelation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUseBlurSpatialRelation_void_NoVirtual(long pNativeObject);
	protected boolean isUseBlurSpatialRelation_NoVirtual()
	{
		boolean returnValue = isUseBlurSpatialRelation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setGeneralizeSoundgPoints_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置渲染时是否对水深注记进行综合，默认为false
	 * @param value true对水深注记进行制图综合，false按原始状态渲染
	 */
	public void setGeneralizeSoundgPoints(boolean value)
	{
		boolean valueParamValue = value;
		setGeneralizeSoundgPoints_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setGeneralizeSoundgPoints_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setGeneralizeSoundgPoints_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setGeneralizeSoundgPoints_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private boolean isGeneralizeSoundgPoints_void(long pNativeObject);
	/**
	 * 获取渲染时是否对水深注记进行综合
	 * @return true对水深注记进行制图综合，false按原始状态渲染，默认为false
	 */
	public boolean isGeneralizeSoundgPoints()
	{
		boolean returnValue = isGeneralizeSoundgPoints_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isGeneralizeSoundgPoints_void_NoVirtual(long pNativeObject);
	protected boolean isGeneralizeSoundgPoints_NoVirtual()
	{
		boolean returnValue = isGeneralizeSoundgPoints_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果指针
	 */
	public com.earthview.world.spatial.display.Ichartoption ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ichartoption __returnValue = new com.earthview.world.spatial.display.Ichartoption(CreatedWhenConstruct.CWC_NotToCreate, "IChartOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ichartoption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IChartOption");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ichartoption ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ichartoption __returnValue = new com.earthview.world.spatial.display.Ichartoption(CreatedWhenConstruct.CWC_NotToCreate, "IChartOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ichartoption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IChartOption");
		}
		return __returnValue;
	}

	public ChartOption(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartOption(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getChartPointType_void(long pNativeObject, String method);
	native protected void register_setChartPointType_EVChartLookUpType(long pNativeObject, String method);
	native protected void register_getChartAreaType_void(long pNativeObject, String method);
	native protected void register_setChartAreaType_EVChartLookUpType(long pNativeObject, String method);
	native protected void register_getCartoAssistLineType_void(long pNativeObject, String method);
	native protected void register_setCartoAssistLineType_EVChartSimpleLineType(long pNativeObject, String method);
	native protected void register_setColorType_EVChartColorType(long pNativeObject, String method);
	native protected void register_getColorType_void(long pNativeObject, String method);
	native protected void register_getDisplayCategory_void(long pNativeObject, String method);
	native protected void register_setDisplayCategory_EVChartDisplayCategory(long pNativeObject, String method);
	native protected void register_getSafetyDeep_void(long pNativeObject, String method);
	native protected void register_setSafetyDeep_ev_real64(long pNativeObject, String method);
	native protected void register_getSafetyContour_void(long pNativeObject, String method);
	native protected void register_setSafetyContour_ev_real64(long pNativeObject, String method);
	native protected void register_getShallowContour_void(long pNativeObject, String method);
	native protected void register_setShallowContour_ev_real64(long pNativeObject, String method);
	native protected void register_getDeepContour_void(long pNativeObject, String method);
	native protected void register_setDeepContour_ev_real64(long pNativeObject, String method);
	native protected void register_isTwoShadesOn_void(long pNativeObject, String method);
	native protected void register_setTwoShadesValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShallowPatternOn_void(long pNativeObject, String method);
	native protected void register_setShallowPatternValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShipOutlineOn_void(long pNativeObject, String method);
	native protected void register_setShipOutlineValue_ev_bool(long pNativeObject, String method);
	native protected void register_isFullSectorsOn_void(long pNativeObject, String method);
	native protected void register_setFullSectorsValue_ev_bool(long pNativeObject, String method);
	native protected void register_getDistanceTag_void(long pNativeObject, String method);
	native protected void register_setDistanceTag_ev_real64(long pNativeObject, String method);
	native protected void register_getTimeTags_void(long pNativeObject, String method);
	native protected void register_setTimeTages_ev_int32(long pNativeObject, String method);
	native protected void register_getSymbolGroup_void(long pNativeObject, String method);
	native protected void register_setSymbolGroup_ev_int32(long pNativeObject, String method);
	native protected void register_getTextGroup_void(long pNativeObject, String method);
	native protected void register_setTextGroup_ev_int32(long pNativeObject, String method);
	native protected void register_getChartScale_void(long pNativeObject, String method);
	native protected void register_setChartScale_ev_real64(long pNativeObject, String method);
	native protected void register_isShowOtherVessel_void(long pNativeObject, String method);
	native protected void register_setShowOtherVesselValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShowCourseSpeedVessel_void(long pNativeObject, String method);
	native protected void register_setShowCourseSpeedVesselValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShowBeamBearingLine_void(long pNativeObject, String method);
	native protected void register_setShowBeamBearingLineValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShowStabilization_void(long pNativeObject, String method);
	native protected void register_setShowStabilizationValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShowTimeMarks_void(long pNativeObject, String method);
	native protected void register_setShowTimeMarksValue_ev_bool(long pNativeObject, String method);
	native protected void register_isShowHeadingLine_void(long pNativeObject, String method);
	native protected void register_setShowHeadingLineValue_ev_bool(long pNativeObject, String method);
	native protected void register_getShipBeamLengthValue_void(long pNativeObject, String method);
	native protected void register_setShipBeamLengthValue_ev_int32(long pNativeObject, String method);
	native protected void register_insertVRMRadius_ev_real64(long pNativeObject, String method);
	native protected void register_getVRMRadiusNum_void(long pNativeObject, String method);
	native protected void register_getVRMRadiusValue_ev_uint32(long pNativeObject, String method);
	native protected void register_removeVRMRadius_ev_uint32(long pNativeObject, String method);
	native protected void register_clearVRMRadius_void(long pNativeObject, String method);
	native protected void register_isUseVRMEBLSymbolA_void(long pNativeObject, String method);
	native protected void register_setUseVRMEBLSymbolAValue_ev_bool(long pNativeObject, String method);
	native protected void register_getEBLLength_void(long pNativeObject, String method);
	native protected void register_setEBLLength_ev_real64(long pNativeObject, String method);
	native protected void register_getEBLAngle_void(long pNativeObject, String method);
	native protected void register_setEBLAngle_ev_real64(long pNativeObject, String method);
	native protected void register_setUseEnglishValue_ev_bool(long pNativeObject, String method);
	native protected void register_getUseEnglishValue_void(long pNativeObject, String method);
	native protected void register_setUseBlurSpatialRelation_ev_bool(long pNativeObject, String method);
	native protected void register_isUseBlurSpatialRelation_void(long pNativeObject, String method);
	native protected void register_setGeneralizeSoundgPoints_ev_bool(long pNativeObject, String method);
	native protected void register_isGeneralizeSoundgPoints_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getChartPointType_void(this.nativeObject.pointer, "getChartPointType_void_callback");
			this.register_setChartPointType_EVChartLookUpType(this.nativeObject.pointer, "setChartPointType_EVChartLookUpType_callback");
			this.register_getChartAreaType_void(this.nativeObject.pointer, "getChartAreaType_void_callback");
			this.register_setChartAreaType_EVChartLookUpType(this.nativeObject.pointer, "setChartAreaType_EVChartLookUpType_callback");
			this.register_getCartoAssistLineType_void(this.nativeObject.pointer, "getCartoAssistLineType_void_callback");
			this.register_setCartoAssistLineType_EVChartSimpleLineType(this.nativeObject.pointer, "setCartoAssistLineType_EVChartSimpleLineType_callback");
			this.register_setColorType_EVChartColorType(this.nativeObject.pointer, "setColorType_EVChartColorType_callback");
			this.register_getColorType_void(this.nativeObject.pointer, "getColorType_void_callback");
			this.register_getDisplayCategory_void(this.nativeObject.pointer, "getDisplayCategory_void_callback");
			this.register_setDisplayCategory_EVChartDisplayCategory(this.nativeObject.pointer, "setDisplayCategory_EVChartDisplayCategory_callback");
			this.register_getSafetyDeep_void(this.nativeObject.pointer, "getSafetyDeep_void_callback");
			this.register_setSafetyDeep_ev_real64(this.nativeObject.pointer, "setSafetyDeep_ev_real64_callback");
			this.register_getSafetyContour_void(this.nativeObject.pointer, "getSafetyContour_void_callback");
			this.register_setSafetyContour_ev_real64(this.nativeObject.pointer, "setSafetyContour_ev_real64_callback");
			this.register_getShallowContour_void(this.nativeObject.pointer, "getShallowContour_void_callback");
			this.register_setShallowContour_ev_real64(this.nativeObject.pointer, "setShallowContour_ev_real64_callback");
			this.register_getDeepContour_void(this.nativeObject.pointer, "getDeepContour_void_callback");
			this.register_setDeepContour_ev_real64(this.nativeObject.pointer, "setDeepContour_ev_real64_callback");
			this.register_isTwoShadesOn_void(this.nativeObject.pointer, "isTwoShadesOn_void_callback");
			this.register_setTwoShadesValue_ev_bool(this.nativeObject.pointer, "setTwoShadesValue_ev_bool_callback");
			this.register_isShallowPatternOn_void(this.nativeObject.pointer, "isShallowPatternOn_void_callback");
			this.register_setShallowPatternValue_ev_bool(this.nativeObject.pointer, "setShallowPatternValue_ev_bool_callback");
			this.register_isShipOutlineOn_void(this.nativeObject.pointer, "isShipOutlineOn_void_callback");
			this.register_setShipOutlineValue_ev_bool(this.nativeObject.pointer, "setShipOutlineValue_ev_bool_callback");
			this.register_isFullSectorsOn_void(this.nativeObject.pointer, "isFullSectorsOn_void_callback");
			this.register_setFullSectorsValue_ev_bool(this.nativeObject.pointer, "setFullSectorsValue_ev_bool_callback");
			this.register_getDistanceTag_void(this.nativeObject.pointer, "getDistanceTag_void_callback");
			this.register_setDistanceTag_ev_real64(this.nativeObject.pointer, "setDistanceTag_ev_real64_callback");
			this.register_getTimeTags_void(this.nativeObject.pointer, "getTimeTags_void_callback");
			this.register_setTimeTages_ev_int32(this.nativeObject.pointer, "setTimeTages_ev_int32_callback");
			this.register_getSymbolGroup_void(this.nativeObject.pointer, "getSymbolGroup_void_callback");
			this.register_setSymbolGroup_ev_int32(this.nativeObject.pointer, "setSymbolGroup_ev_int32_callback");
			this.register_getTextGroup_void(this.nativeObject.pointer, "getTextGroup_void_callback");
			this.register_setTextGroup_ev_int32(this.nativeObject.pointer, "setTextGroup_ev_int32_callback");
			this.register_getChartScale_void(this.nativeObject.pointer, "getChartScale_void_callback");
			this.register_setChartScale_ev_real64(this.nativeObject.pointer, "setChartScale_ev_real64_callback");
			this.register_isShowOtherVessel_void(this.nativeObject.pointer, "isShowOtherVessel_void_callback");
			this.register_setShowOtherVesselValue_ev_bool(this.nativeObject.pointer, "setShowOtherVesselValue_ev_bool_callback");
			this.register_isShowCourseSpeedVessel_void(this.nativeObject.pointer, "isShowCourseSpeedVessel_void_callback");
			this.register_setShowCourseSpeedVesselValue_ev_bool(this.nativeObject.pointer, "setShowCourseSpeedVesselValue_ev_bool_callback");
			this.register_isShowBeamBearingLine_void(this.nativeObject.pointer, "isShowBeamBearingLine_void_callback");
			this.register_setShowBeamBearingLineValue_ev_bool(this.nativeObject.pointer, "setShowBeamBearingLineValue_ev_bool_callback");
			this.register_isShowStabilization_void(this.nativeObject.pointer, "isShowStabilization_void_callback");
			this.register_setShowStabilizationValue_ev_bool(this.nativeObject.pointer, "setShowStabilizationValue_ev_bool_callback");
			this.register_isShowTimeMarks_void(this.nativeObject.pointer, "isShowTimeMarks_void_callback");
			this.register_setShowTimeMarksValue_ev_bool(this.nativeObject.pointer, "setShowTimeMarksValue_ev_bool_callback");
			this.register_isShowHeadingLine_void(this.nativeObject.pointer, "isShowHeadingLine_void_callback");
			this.register_setShowHeadingLineValue_ev_bool(this.nativeObject.pointer, "setShowHeadingLineValue_ev_bool_callback");
			this.register_getShipBeamLengthValue_void(this.nativeObject.pointer, "getShipBeamLengthValue_void_callback");
			this.register_setShipBeamLengthValue_ev_int32(this.nativeObject.pointer, "setShipBeamLengthValue_ev_int32_callback");
			this.register_insertVRMRadius_ev_real64(this.nativeObject.pointer, "insertVRMRadius_ev_real64_callback");
			this.register_getVRMRadiusNum_void(this.nativeObject.pointer, "getVRMRadiusNum_void_callback");
			this.register_getVRMRadiusValue_ev_uint32(this.nativeObject.pointer, "getVRMRadiusValue_ev_uint32_callback");
			this.register_removeVRMRadius_ev_uint32(this.nativeObject.pointer, "removeVRMRadius_ev_uint32_callback");
			this.register_clearVRMRadius_void(this.nativeObject.pointer, "clearVRMRadius_void_callback");
			this.register_isUseVRMEBLSymbolA_void(this.nativeObject.pointer, "isUseVRMEBLSymbolA_void_callback");
			this.register_setUseVRMEBLSymbolAValue_ev_bool(this.nativeObject.pointer, "setUseVRMEBLSymbolAValue_ev_bool_callback");
			this.register_getEBLLength_void(this.nativeObject.pointer, "getEBLLength_void_callback");
			this.register_setEBLLength_ev_real64(this.nativeObject.pointer, "setEBLLength_ev_real64_callback");
			this.register_getEBLAngle_void(this.nativeObject.pointer, "getEBLAngle_void_callback");
			this.register_setEBLAngle_ev_real64(this.nativeObject.pointer, "setEBLAngle_ev_real64_callback");
			this.register_setUseEnglishValue_ev_bool(this.nativeObject.pointer, "setUseEnglishValue_ev_bool_callback");
			this.register_getUseEnglishValue_void(this.nativeObject.pointer, "getUseEnglishValue_void_callback");
			this.register_setUseBlurSpatialRelation_ev_bool(this.nativeObject.pointer, "setUseBlurSpatialRelation_ev_bool_callback");
			this.register_isUseBlurSpatialRelation_void(this.nativeObject.pointer, "isUseBlurSpatialRelation_void_callback");
			this.register_setGeneralizeSoundgPoints_ev_bool(this.nativeObject.pointer, "setGeneralizeSoundgPoints_ev_bool_callback");
			this.register_isGeneralizeSoundgPoints_void(this.nativeObject.pointer, "isGeneralizeSoundgPoints_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static ChartOption fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartOption obj = null;
 		if(baseObj instanceof ChartOption)
		{
			obj = (ChartOption)baseObj;
		} else {
			obj = new ChartOption(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartOption");
			obj.increaseCast();
		}

		return obj;
	}
}
