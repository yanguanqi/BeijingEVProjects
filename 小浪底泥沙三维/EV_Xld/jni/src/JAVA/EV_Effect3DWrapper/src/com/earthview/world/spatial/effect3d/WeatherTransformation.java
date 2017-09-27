package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WeatherTransformation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWeatherTransformation", new WeatherTransformationClassFactory());
	}

	public WeatherTransformation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWeatherTransformation", null);
	}

	native private int addControlPoint_CWeatherControlPoint(long pNativeObject, long controlpoint);
	/**
	 * 新增控制点
	 * @param controlpoint 控制点对象
	 * @return 获取控制点索引
	 */
	public int addControlPoint(com.earthview.world.spatial.effect3d.WeatherControlPoint controlpoint)
	{
		long controlpointParamValue = controlpoint.nativeObject.pointer;
		int returnValue = addControlPoint_CWeatherControlPoint(this.nativeObject.pointer, controlpointParamValue);
		return returnValue;
	}
	native private boolean getControlPoint_ev_uint32_CWeatherControlPoint(long pNativeObject, long index, long controlpoint);
	/**
	 * 根据索引获取控制点对象
	 * @param index 索引
	 * @param controlpoint 控制点对象
	 * @return 是否获取成功
	 */
	public boolean getControlPoint(long index, com.earthview.world.spatial.effect3d.WeatherControlPoint controlpoint)
	{
		long indexParamValue = index;
		long controlpointParamValue = controlpoint.nativeObject.pointer;
		boolean returnValue = getControlPoint_ev_uint32_CWeatherControlPoint(this.nativeObject.pointer, indexParamValue, controlpointParamValue);
		return returnValue;
	}
	native private boolean removeControlPoint_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引删除控制点
	 * @param index 索引
	 * @return 删除结果
	 */
	public boolean removeControlPoint(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeControlPoint_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getControlPointCount_void(long pNativeObject);
	/**
	 * 获取控制点对象总数
	 * @return 控制点总数
	 */
	public long getControlPointCount()
	{
		long returnValue = getControlPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean transformWeather_CRegionAtmosphere_CCoreTime_Real(long pNativeObject, long atmosphere, long time, double alt);
	/**
	 * 转换天气
	 * @param atmosphere 转换对象
	 * @param time 时间
	 * @param alt 镜头高度
	 * @return 转换结果
	 */
	public boolean transformWeather(com.earthview.world.spatial.effect3d.RegionAtmosphere atmosphere, com.earthview.world.core.CoreTime time, double alt)
	{
		long atmosphereParamValue = (atmosphere == null ? 0L : atmosphere.nativeObject.pointer);
		long timeParamValue = time.nativeObject.pointer;
		double altParamValue = alt;
		boolean returnValue = transformWeather_CRegionAtmosphere_CCoreTime_Real(this.nativeObject.pointer, atmosphereParamValue, timeParamValue, altParamValue);
		return returnValue;
	}
	native private void setDefaultWeather_EVWeatherType(long pNativeObject, int type);
	/**
	 * 设置默认天气
	 * @param type 天气类型
	 * @return 设置结果
	 */
	public void setDefaultWeather(com.earthview.world.spatial.effect3d.EVWeatherType type)
	{
		int typeParamValue = type.getValue();
		setDefaultWeather_EVWeatherType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setStartEndTransitionTime_ev_uint32(long pNativeObject, long seconds);
	/**
	 * 设置转换时间差
	 * @param seconds 时间差
	 */
	public void setStartEndTransitionTime(long seconds)
	{
		long secondsParamValue = seconds;
		setStartEndTransitionTime_ev_uint32(this.nativeObject.pointer, secondsParamValue);
	}
	native private void setNeedRestoreToDefault_ev_bool(long pNativeObject, boolean restore);
	/**
	 * 设置是否需要存储默认状态
	 * @param restore 是否
	 */
	public void setNeedRestoreToDefault(boolean restore)
	{
		boolean restoreParamValue = restore;
		setNeedRestoreToDefault_ev_bool(this.nativeObject.pointer, restoreParamValue);
	}
	public WeatherTransformation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WeatherTransformation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WeatherTransformation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WeatherTransformation obj = null;
 		if(baseObj instanceof WeatherTransformation)
		{
			obj = (WeatherTransformation)baseObj;
		} else {
			obj = new WeatherTransformation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWeatherTransformation");
			obj.increaseCast();
		}

		return obj;
	}
}
