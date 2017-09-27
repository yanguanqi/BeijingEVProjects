package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CDataTime时间结构信息
 */
public class DataTime extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDataTime", new DataTimeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DataTime() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataTime", null);
	}

	/**
	 * 赋值构造函数
	 * @param iYear 年
	 * @param iMonth 月
	 * @param iDate 日
	 * @param iHour 时
	 * @param iMinute 分
	 */
	public DataTime(int iYear, int iMonth, int iDate, int iHour, int iMinute) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer iYearPtr = new BasePointer(iYear);
		list.add("iYear", iYearPtr.get());
		BasePointer iMonthPtr = new BasePointer(iMonth);
		list.add("iMonth", iMonthPtr.get());
		BasePointer iDatePtr = new BasePointer(iDate);
		list.add("iDate", iDatePtr.get());
		BasePointer iHourPtr = new BasePointer(iHour);
		list.add("iHour", iHourPtr.get());
		BasePointer iMinutePtr = new BasePointer(iMinute);
		list.add("iMinute", iMinutePtr.get());
		Create("CDataTime", list);
	}

	native private int getYear_void(long pNativeObject);
	///<summary>
	///获取年份
	///</summary>
	///<retrun> 年份</returns>
	public int getYear()
	{
		int returnValue = getYear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMonth_void(long pNativeObject);
	///<summary>
	///获取月份
	///</summary>
	///<retrun> 月份</returns>
	public int getMonth()
	{
		int returnValue = getMonth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDate_void(long pNativeObject);
	///<summary>
	///获取日期
	///</summary>
	///<retrun> 日期</returns>
	public int getDate()
	{
		int returnValue = getDate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHour_void(long pNativeObject);
	///<summary>
	///获取小时
	///</summary>
	///<retrun> 分钟</returns>
	public int getHour()
	{
		int returnValue = getHour_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinute_void(long pNativeObject);
	///<summary>
	///获取分钟
	///</summary>
	///<retrun> 小时</returns>
	public int getMinute()
	{
		int returnValue = getMinute_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DataTime(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataTime(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataTime fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataTime obj = null;
 		if(baseObj instanceof DataTime)
		{
			obj = (DataTime)baseObj;
		} else {
			obj = new DataTime(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataTime");
			obj.increaseCast();
		}

		return obj;
	}
}
