package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summer>
/// 纸张单位转换类，用于转换不同单位的数据
/// </summer>
public class PageUnitConverter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPageUnitConverter", new PageUnitConverterClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public PageUnitConverter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPageUnitConverter", null);
	}

	native private double othersUnitToPixel_EVPageUnits_ev_real64(long pNativeObject, int pageUnits, double dValue);
	/**
	 * 将其他单位的数据转换成像素
	 * @param pageUnits 当前数据的单位
	 * @param dValue 当前数据
	 * @return 其他单位的数据
	 */
	public double othersUnitToPixel(com.earthview.world.spatial.carto.EVPageUnits pageUnits, double dValue)
	{
		int pageUnitsParamValue = pageUnits.getValue();
		double dValueParamValue = dValue;
		double returnValue = othersUnitToPixel_EVPageUnits_ev_real64(this.nativeObject.pointer, pageUnitsParamValue, dValueParamValue);
		return returnValue;
	}
	native private double pixelToOthersUnit_EVPageUnits_ev_real64(long pNativeObject, int pageUnits, double dValue);
	/**
	 * 将像素转换成其他单位的数据
	 * @param pageUnits 需从像素转换成的目标单位
	 * @param dValue 当前单位为像素的数据
	 * @return 其他单位的数据
	 */
	public double pixelToOthersUnit(com.earthview.world.spatial.carto.EVPageUnits pageUnits, double dValue)
	{
		int pageUnitsParamValue = pageUnits.getValue();
		double dValueParamValue = dValue;
		double returnValue = pixelToOthersUnit_EVPageUnits_ev_real64(this.nativeObject.pointer, pageUnitsParamValue, dValueParamValue);
		return returnValue;
	}
	native private String getPageUnitString_EVPageUnits(long pNativeObject, int lengthUnit);
	/**
	 * 获取纸张单位字符
	 * @param mapUnit 纸张单位类型
	 * @return 纸张单位字符
	 */
	public String getPageUnitString(com.earthview.world.spatial.carto.EVPageUnits lengthUnit)
	{
		int lengthUnitParamValue = lengthUnit.getValue();
		String returnValue = getPageUnitString_EVPageUnits(this.nativeObject.pointer, lengthUnitParamValue);
		return returnValue;
	}
	native private int getPageUnitType_EVString(long pNativeObject, String strUnit);
	/**
	 * 获取纸张单位类型
	 * @param strUnit 纸张单位字符
	 * @return 纸张单位类型
	 */
	public com.earthview.world.spatial.carto.EVPageUnits getPageUnitType(String strUnit)
	{
		String strUnitParamValue = strUnit;
		int returnValue = getPageUnitType_EVString(this.nativeObject.pointer, strUnitParamValue);
		return com.earthview.world.spatial.carto.EVPageUnits.toEnum(returnValue);
	}
	public PageUnitConverter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PageUnitConverter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PageUnitConverter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PageUnitConverter obj = null;
 		if(baseObj instanceof PageUnitConverter)
		{
			obj = (PageUnitConverter)baseObj;
		} else {
			obj = new PageUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPageUnitConverter");
			obj.increaseCast();
		}

		return obj;
	}
}
