package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView::World::Spatial2D::Raster::CSensorInfo时间结构信息
 */
public class SensorInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CSensorInfo", new SensorInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCSensorInfoProxy", new SensorInfoClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SensorInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSensorInfoProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.SensorInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 赋值构造函数
	 * @param strRasterFormat 图像数据的编码格式如JPEG
	 * @param strSensorName 传感器名称
	 * @param objdateTime 过境时间
	 */
	public SensorInfo(String strRasterFormat, String strSensorName, com.earthview.world.spatial2d.raster.DataTime objdateTime) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strRasterFormatPtr = new BasePointer(strRasterFormat);
		list.add("strRasterFormat", strRasterFormatPtr.get());
		BasePointer strSensorNamePtr = new BasePointer(strSensorName);
		list.add("strSensorName", strSensorNamePtr.get());
		BasePointer objdateTimePtr = new BasePointer(objdateTime);
		list.add("objdateTime", objdateTimePtr.get());
		Create("JCSensorInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.SensorInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CSensorInfo(long pNativeObject, long objsensor);
	/**
	 * 赋值函数
	 * @param objsensor 传感器信息对象
	 * @return 传感器信息对象
	 */
	public com.earthview.world.spatial2d.raster.SensorInfo OperatorAssign(com.earthview.world.spatial2d.raster.SensorInfo objsensor)
	{
		long objsensorParamValue = objsensor.nativeObject.pointer;
		long returnValue = OperatorAssign_CSensorInfo(this.nativeObject.pointer, objsensorParamValue);
		com.earthview.world.spatial2d.raster.SensorInfo __returnValue = new com.earthview.world.spatial2d.raster.SensorInfo(CreatedWhenConstruct.CWC_NotToCreate, "CSensorInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.SensorInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSensorInfo");
		}
		return __returnValue;
	}
	/**
	 * 拷贝构造函数
	 * @param objsensor 传感器信息对象
	 */
	public SensorInfo(com.earthview.world.spatial2d.raster.SensorInfo objsensor) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer objsensorPtr = new BasePointer(objsensor);
		list.add("objsensor", objsensorPtr.get());
		Create("JCSensorInfoProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.SensorInfo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getRasterFormat_void_callback()
	{
		String returnValue = getRasterFormat();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getRasterFormat_void(long pNativeObject);
	/**
	 * 获取编码格式字符串如“JPEG”
	 * @return 图像数据的编码格式如JPEG
	 */
	public String getRasterFormat()
	{
		String returnValue = getRasterFormat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRasterFormat_void_NoVirtual(long pNativeObject);
	protected String getRasterFormat_NoVirtual()
	{
		String returnValue = getRasterFormat_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getSensorName_void_callback()
	{
		String returnValue = getSensorName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSensorName_void(long pNativeObject);
	/**
	 * 获取传感器名称
	 * @return 传感器名称
	 */
	public String getSensorName()
	{
		String returnValue = getSensorName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSensorName_void_NoVirtual(long pNativeObject);
	protected String getSensorName_NoVirtual()
	{
		String returnValue = getSensorName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getDataTime_void_callback()
	{
		com.earthview.world.spatial2d.raster.DataTime returnValue = getDataTime();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataTime_void(long pNativeObject);
	/**
	 * 获取数据采集时间,外部不能释放
	 * @return 传感器采集数据时间
	 */
	public com.earthview.world.spatial2d.raster.DataTime getDataTime()
	{
		long returnValue = getDataTime_void(this.nativeObject.pointer);
		com.earthview.world.spatial2d.raster.DataTime __returnValue = new com.earthview.world.spatial2d.raster.DataTime(CreatedWhenConstruct.CWC_NotToCreate, "CDataTime");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.DataTime)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataTime");
		}
		return __returnValue;
	}
	native private long getDataTime_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.DataTime getDataTime_NoVirtual()
	{
		long returnValue = getDataTime_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial2d.raster.DataTime __returnValue = new com.earthview.world.spatial2d.raster.DataTime(CreatedWhenConstruct.CWC_NotToCreate, "CDataTime");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.DataTime)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataTime");
		}
		return __returnValue;
	}

	public SensorInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SensorInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRasterFormat_void(long pNativeObject, String method);
	native protected void register_getSensorName_void(long pNativeObject, String method);
	native protected void register_getDataTime_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRasterFormat_void(this.nativeObject.pointer, "getRasterFormat_void_callback");
			this.register_getSensorName_void(this.nativeObject.pointer, "getSensorName_void_callback");
			this.register_getDataTime_void(this.nativeObject.pointer, "getDataTime_void_callback");
		}
	}
	
	public static SensorInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SensorInfo obj = null;
 		if(baseObj instanceof SensorInfo)
		{
			obj = (SensorInfo)baseObj;
		} else {
			obj = new SensorInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSensorInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
