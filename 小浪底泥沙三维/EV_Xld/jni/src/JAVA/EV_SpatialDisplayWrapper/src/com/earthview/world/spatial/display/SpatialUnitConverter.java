package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///未知单位
public class SpatialUnitConverter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialUnitConverter", new SpatialUnitConverterClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param   
	 * @return 
	 */
	public SpatialUnitConverter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSpatialUnitConverter", null);
	}

	native private double otherLengthUnitTokm_ev_real64_EVMapUnits(long pNativeObject, double defaultUnitValue, int mapUnit);
	/**
	 * 其他长度单位转化为千米
	 * @param defaultUnitValue 地图默认单位值
	 * @param mapUnit 地图默认单位
	 * @return 转化为千米后所对应的值
	 */
	public double otherLengthUnitTokm(double defaultUnitValue, com.earthview.world.spatial.atlas.EVMapUnits mapUnit)
	{
		double defaultUnitValueParamValue = defaultUnitValue;
		int mapUnitParamValue = mapUnit.getValue();
		double returnValue = otherLengthUnitTokm_ev_real64_EVMapUnits(this.nativeObject.pointer, defaultUnitValueParamValue, mapUnitParamValue);
		return returnValue;
	}
	native private double kmToOtherLengthUnit_ev_real64_LengthUnitType(long pNativeObject, double kiloValuve, int uintType);
	/**
	 * 千米转化为其他长度单位
	 * @param kiloValuve  单位为千米的值
	 * @param uintType  需要转化成的长度单位类型
	 * @return 转化后的单位对应的值
	 */
	public double kmToOtherLengthUnit(double kiloValuve, com.earthview.world.spatial.display.LengthUnitType uintType)
	{
		double kiloValuveParamValue = kiloValuve;
		int uintTypeParamValue = uintType.getValue();
		double returnValue = kmToOtherLengthUnit_ev_real64_LengthUnitType(this.nativeObject.pointer, kiloValuveParamValue, uintTypeParamValue);
		return returnValue;
	}
	native private double otherAreaUnitTokm2_ev_real64_EVMapUnits(long pNativeObject, double defaultUnitValue, int mapUnit);
	/**
	 * 其他面积单位转化为平方千米
	 * @param defaultUnitValue 地图默认面积单位的值
	 * @param mapUnit 地图默认的面积单位类型
	 * @return 转化为平方千米后所对应的值
	 */
	public double otherAreaUnitTokm2(double defaultUnitValue, com.earthview.world.spatial.atlas.EVMapUnits mapUnit)
	{
		double defaultUnitValueParamValue = defaultUnitValue;
		int mapUnitParamValue = mapUnit.getValue();
		double returnValue = otherAreaUnitTokm2_ev_real64_EVMapUnits(this.nativeObject.pointer, defaultUnitValueParamValue, mapUnitParamValue);
		return returnValue;
	}
	native private double km2ToOtherAreaUnit_ev_real64_AreaUnitType(long pNativeObject, double squareKiloValuve, int unitType);
	/**
	 * 平方千米转化为其他面积单位
	 * @param squareKiloValuve 单位为平方千米的值
	 * @param uintType  需要转化成的面积单位类型
	 * @return 转化后的面积单位类型所对应的值
	 */
	public double km2ToOtherAreaUnit(double squareKiloValuve, com.earthview.world.spatial.display.AreaUnitType unitType)
	{
		double squareKiloValuveParamValue = squareKiloValuve;
		int unitTypeParamValue = unitType.getValue();
		double returnValue = km2ToOtherAreaUnit_ev_real64_AreaUnitType(this.nativeObject.pointer, squareKiloValuveParamValue, unitTypeParamValue);
		return returnValue;
	}
	native private String getMapUnitString_EVMapUnits(long pNativeObject, int mapUnit);
	/**
	 * 获取地图单位字符
	 * @param mapUnit 地图单位类型
	 * @return 地图单位字符
	 */
	public String getMapUnitString(com.earthview.world.spatial.atlas.EVMapUnits mapUnit)
	{
		int mapUnitParamValue = mapUnit.getValue();
		String returnValue = getMapUnitString_EVMapUnits(this.nativeObject.pointer, mapUnitParamValue);
		return returnValue;
	}
	native private int getMapUnitType_EVString(long pNativeObject, String strUnit);
	/**
	 * 获取地图单位类型
	 * @param strUnit 地图单位字符
	 * @return 地图单位类型
	 */
	public com.earthview.world.spatial.atlas.EVMapUnits getMapUnitType(String strUnit)
	{
		String strUnitParamValue = strUnit;
		int returnValue = getMapUnitType_EVString(this.nativeObject.pointer, strUnitParamValue);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}
	native private String getLengthUnitString_LengthUnitType(long pNativeObject, int lengthUnit);
	/**
	 * 获取长度单位字符
	 * @param mapUnit 长度单位类型
	 * @return 长度单位字符
	 */
	public String getLengthUnitString(com.earthview.world.spatial.display.LengthUnitType lengthUnit)
	{
		int lengthUnitParamValue = lengthUnit.getValue();
		String returnValue = getLengthUnitString_LengthUnitType(this.nativeObject.pointer, lengthUnitParamValue);
		return returnValue;
	}
	native private int getLengthUnitType_EVString(long pNativeObject, String strUnit);
	/**
	 * 获取长度单位类型
	 * @param strUnit 长度单位字符
	 * @return 长度单位类型
	 */
	public com.earthview.world.spatial.display.LengthUnitType getLengthUnitType(String strUnit)
	{
		String strUnitParamValue = strUnit;
		int returnValue = getLengthUnitType_EVString(this.nativeObject.pointer, strUnitParamValue);
		return com.earthview.world.spatial.display.LengthUnitType.toEnum(returnValue);
	}
	native private String getAreaUnitString_AreaUnitType(long pNativeObject, int areaUnit);
	/**
	 * 获取面积单位字符
	 * @param mapUnit 面积单位类型
	 * @return 面积单位字符
	 */
	public String getAreaUnitString(com.earthview.world.spatial.display.AreaUnitType areaUnit)
	{
		int areaUnitParamValue = areaUnit.getValue();
		String returnValue = getAreaUnitString_AreaUnitType(this.nativeObject.pointer, areaUnitParamValue);
		return returnValue;
	}
	native private int getAreaUnitType_EVString(long pNativeObject, String strUnit);
	/**
	 * 获取面积单位类型
	 * @param strUnit 面积单位字符
	 * @return 面积单位类型
	 */
	public com.earthview.world.spatial.display.AreaUnitType getAreaUnitType(String strUnit)
	{
		String strUnitParamValue = strUnit;
		int returnValue = getAreaUnitType_EVString(this.nativeObject.pointer, strUnitParamValue);
		return com.earthview.world.spatial.display.AreaUnitType.toEnum(returnValue);
	}
	native private void toDMS_ev_real64_int_int_ev_real64(long pNativeObject, double dDecimal, long nDeg, long nMin, long dSec);
	/**
	 * 由十进制度格式转化成度分秒
	 * @param dDecimal 十进制度的值
	 * @param nDgr 度
	 * @param nMin 分
	 * @param dSec 秒
	 */
	public void toDMS(double dDecimal, IntegerPointer nDeg, IntegerPointer nMin, DoublePointer dSec)
	{
		double dDecimalParamValue = dDecimal;
		long nDegParamValue = nDeg.nativeObject.pointer;
		long nMinParamValue = nMin.nativeObject.pointer;
		long dSecParamValue = dSec.nativeObject.pointer;
		toDMS_ev_real64_int_int_ev_real64(this.nativeObject.pointer, dDecimalParamValue, nDegParamValue, nMinParamValue, dSecParamValue);
	}
	native private void toDecimal_int_int_ev_real64_ev_real64(long pNativeObject, int nDgr, int nMin, double dSec, long dDecimal);
	/**
	 * 由度分秒格式转化成十进制度
	 * @param nDgr 度
	 * @param nMin 分
	 * @param dSec 秒
	 * @param dDecimal 十进制度的值
	 */
	public void toDecimal(int nDgr, int nMin, double dSec, DoublePointer dDecimal)
	{
		int nDgrParamValue = nDgr;
		int nMinParamValue = nMin;
		double dSecParamValue = dSec;
		long dDecimalParamValue = dDecimal.nativeObject.pointer;
		toDecimal_int_int_ev_real64_ev_real64(this.nativeObject.pointer, nDgrParamValue, nMinParamValue, dSecParamValue, dDecimalParamValue);
	}
	native private String getOrientationString_ev_bool_ev_real64(long pNativeObject, boolean bXCoord, double dCoordinate);
	/**
	 * 获取经纬所在的半球
	 * @param bXCoord 如果是X坐标，输入true,如果为Y坐标，输入false
	 * @param dCoordinate 十进制度的值
	 * @return 坐标值所在的半球
	 */
	public String getOrientationString(boolean bXCoord, double dCoordinate)
	{
		boolean bXCoordParamValue = bXCoord;
		double dCoordinateParamValue = dCoordinate;
		String returnValue = getOrientationString_ev_bool_ev_real64(this.nativeObject.pointer, bXCoordParamValue, dCoordinateParamValue);
		return returnValue;
	}
	native private void toWGS84Point_ISpatialReference_ev_real64_ev_real64_ev_int32(long pNativeObject, long pPointRef, long dPX, long dPY, int nCount);
	/**
	 * 转化为WGS84坐标系的点
	 * @param pPointRef 当前点对应的坐标系
	 * @param dPX 点的X坐标值
	 * @param dPY 点的Y坐标值
	 * @param nCount 进行转化的点的个数
	 * @return 坐标值所在的半球
	 */
	public void toWGS84Point(com.earthview.world.spatial.geometry.Ispatialreference pPointRef, DoublePointer dPX, DoublePointer dPY, int nCount)
	{
		long pPointRefParamValue = (pPointRef == null ? 0L : pPointRef.nativeObject.pointer);
		long dPXParamValue = (dPX == null ? 0L : dPX.nativeObject.pointer);
		long dPYParamValue = (dPY == null ? 0L : dPY.nativeObject.pointer);
		int nCountParamValue = nCount;
		toWGS84Point_ISpatialReference_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, pPointRefParamValue, dPXParamValue, dPYParamValue, nCountParamValue);
	}
	public SpatialUnitConverter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialUnitConverter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SpatialUnitConverter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialUnitConverter obj = null;
 		if(baseObj instanceof SpatialUnitConverter)
		{
			obj = (SpatialUnitConverter)baseObj;
		} else {
			obj = new SpatialUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialUnitConverter");
			obj.increaseCast();
		}

		return obj;
	}
}
