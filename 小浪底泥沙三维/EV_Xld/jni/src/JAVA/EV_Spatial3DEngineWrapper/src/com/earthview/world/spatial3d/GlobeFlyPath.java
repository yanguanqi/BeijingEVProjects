package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 飞行路径类飞行路径及播放控制
 */
public class GlobeFlyPath extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeFlyPath", new GlobeFlyPathClassFactory());
	}

	/**
	 * 循环模式
	 */
	public enum LOOPMODE implements INativeEnum<LOOPMODE> {
		LOOP(LOOPMODEHelper.ENUM_VALUES[0]),
		NOLOOP(LOOPMODEHelper.ENUM_VALUES[1]);
		private int value;
		LOOPMODE(int i) {
			this.value = i;
		}
		public LOOPMODE getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LOOPMODE toEnum(int retval) {
			if(retval == LOOP.value){
				return LOOP;
			}
			else if(retval == NOLOOP.value){
				return NOLOOP;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LOOPMODEHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 */
	public GlobeFlyPath(String name, double radious, com.earthview.world.spatial3d.GlobeFlyPath.LOOPMODE mode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer radiousPtr = new BasePointer(radious);
		list.add("radious", radiousPtr.get());
		BasePointer modePtr = new BasePointer(mode);
		list.add("mode", modePtr.get());
		Create("CGlobeFlyPath", list);
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyPath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPath", null);
	}

	native private boolean start_ev_real64(long pNativeObject, double time);
	/**
	 * 开始飞行
	 * @param time 开始的时刻
	 */
	public boolean start(double time)
	{
		double timeParamValue = time;
		boolean returnValue = start_ev_real64(this.nativeObject.pointer, timeParamValue);
		return returnValue;
	}
	native private boolean end_void(long pNativeObject);
	/**
	 * 结束飞行
	 * @param  
	 */
	public boolean end()
	{
		boolean returnValue = end_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除控制点
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private int getControlPointCount_void(long pNativeObject);
	/**
	 * 清除控制点
	 * @param  
	 */
	public int getControlPointCount()
	{
		int returnValue = getControlPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addControlPoint_CGlobeControlPoint(long pNativeObject, long point);
	/**
	 * 增加控制点
	 * @param point 控制点
	 */
	public void addControlPoint(com.earthview.world.spatial3d.GlobeControlPoint point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addControlPoint_CGlobeControlPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void removeControlPoint_int(long pNativeObject, int index);
	/**
	 * 移除控制点
	 * @param index 索引
	 */
	public void removeControlPoint(int index)
	{
		int indexParamValue = index;
		removeControlPoint_int(this.nativeObject.pointer, indexParamValue);
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置路径的名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取路径的名称
	 * @param  
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLoopMode_ev_bool(long pNativeObject, boolean loop);
	/**
	 * 设置循环模式
	 * @param loop 是否循环
	 */
	public void setLoopMode(boolean loop)
	{
		boolean loopParamValue = loop;
		setLoopMode_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private boolean getLoopMode_void(long pNativeObject);
	/**
	 * 获取循环模式
	 * @param  
	 */
	public boolean getLoopMode()
	{
		boolean returnValue = getLoopMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRadious_void(long pNativeObject);
	/**
	 * 获取半径(默认为地球半径)
	 * @param  
	 * @return 球半径
	 */
	public double getRadious()
	{
		double returnValue = getRadious_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRadious_ev_real64(long pNativeObject, double radius);
	/**
	 * 设置半径(默认为地球半径)
	 * @param radius 半径
	 */
	public void setRadious(double radius)
	{
		double radiusParamValue = radius;
		setRadious_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private void toXml_EVString(long pNativeObject, String path);
	/**
	 * 保存成xml
	 * @param path xml文件路径
	 */
	public void toXml(String path)
	{
		String pathParamValue = path;
		toXml_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private long toXml_void(long pNativeObject);
	/**
	 * 序列化成XML对象
	 * @param  
	 */
	public com.earthview.world.core.XmlElement toXml()
	{
		long returnValue = toXml_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private void fromXml_EVString(long pNativeObject, String path);
	/**
	 * 从XML文件中恢复
	 * @param path xml文件路径
	 */
	public void fromXml(String path)
	{
		String pathParamValue = path;
		fromXml_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void fromXml_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 从XML对象中恢复
	 * @param xmlElement xml对象
	 */
	public void fromXml(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		fromXml_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
	}
	native private long getFlyParam_void(long pNativeObject);
	/**
	 * 获取飞行参数
	 * @param  
	 * @return 飞行参数
	 */
	public com.earthview.world.spatial3d.Flyparam getFlyParam()
	{
		long returnValue = getFlyParam_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.Flyparam __returnValue = new com.earthview.world.spatial3d.Flyparam(CreatedWhenConstruct.CWC_NotToCreate, "CFLyParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Flyparam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFLyParam");
		}
		return __returnValue;
	}
	native private long getControlPoint_void(long pNativeObject);
	/**
	 * 获取控制点
	 * @param  
	 * @return 数字地球飞行控制点集合
	 */
	public com.earthview.world.spatial3d.GlobeControlPointMap getControlPoint()
	{
		long returnValue = getControlPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControlPointMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	native private long getFlyControlPoint_void(long pNativeObject);
	/**
	 * 获取飞行控制点(由插值生成的全部节点)
	 * @param  
	 * @return 数字地球飞行控制点集合
	 */
	public com.earthview.world.spatial3d.GlobeControlPointMap getFlyControlPoint()
	{
		long returnValue = getFlyControlPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControlPointMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	native private long getAngleDistance_void(long pNativeObject);
	/**
	 * 获得角度距离字典
	 * @param  
	 */
	public com.earthview.world.spatial3d.AngleDistanceMap getAngleDistance()
	{
		long returnValue = getAngleDistance_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.AngleDistanceMap __returnValue = new com.earthview.world.spatial3d.AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.AngleDistanceMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		}
		return __returnValue;
	}
	native private long getRealAngleDistance_void(long pNativeObject);
	/**
	 * 获得角度距离字典
	 * @param  
	 */
	public com.earthview.world.spatial3d.AngleDistanceMap getRealAngleDistance()
	{
		long returnValue = getRealAngleDistance_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.AngleDistanceMap __returnValue = new com.earthview.world.spatial3d.AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.AngleDistanceMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		}
		return __returnValue;
	}
	native private long getTimeRateList_void(long pNativeObject);
	/**
	 * 获得时刻与进度百分比对的列表
	 * @param  
	 */
	public com.earthview.world.spatial3d.TimeRatePairList getTimeRateList()
	{
		long returnValue = getTimeRateList_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.TimeRatePairList __returnValue = new com.earthview.world.spatial3d.TimeRatePairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CTimeRatePairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TimeRatePairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTimeRatePairList");
		}
		return __returnValue;
	}
	native private void smoothRouteLine_void(long pNativeObject);
	/**
	 * 对路径进行平滑处理
	 * @param  
	 */
	public void smoothRouteLine()
	{
		smoothRouteLine_void(this.nativeObject.pointer);
	}
	native private boolean needToSlowDown_ev_real64(long pNativeObject, double timeRate);
	public boolean needToSlowDown(double timeRate)
	{
		double timeRateParamValue = timeRate;
		boolean returnValue = needToSlowDown_ev_real64(this.nativeObject.pointer, timeRateParamValue);
		return returnValue;
	}
	native private boolean findCureControlPoint_int(long pNativeObject, int number);
	public boolean findCureControlPoint(int number)
	{
		int numberParamValue = number;
		boolean returnValue = findCureControlPoint_int(this.nativeObject.pointer, numberParamValue);
		return returnValue;
	}
	native private void computeAngleDistance_void(long pNativeObject);
	/**
	 * 计算角度及距离
	 * @param  
	 */
	public void computeAngleDistance()
	{
		computeAngleDistance_void(this.nativeObject.pointer);
	}
	native private void computeRealAngleDistance_void(long pNativeObject);
	/**
	 * 计算角度及距离
	 * @param  
	 */
	public void computeRealAngleDistance()
	{
		computeRealAngleDistance_void(this.nativeObject.pointer);
	}
	native private long getInterpolaterdControlPoint_ev_real64(long pNativeObject, double time);
	/**
	 * 根据时刻生成控制点
	 * @param time 时刻
	 */
	public com.earthview.world.spatial3d.GlobeControlPoint getInterpolaterdControlPoint(double time)
	{
		double timeParamValue = time;
		long returnValue = getInterpolaterdControlPoint_ev_real64(this.nativeObject.pointer, timeParamValue);
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}
	native private long ComputerHead_CGlobeControlPoint_CGlobeControlPoint(long pNativeObject, long point1, long point2);
	/**
	 * 计算航向角
	 * @param point1 控制点
	 * @param point2 控制点
	 */
	public com.earthview.world.spatial.math.Radian ComputerHead(com.earthview.world.spatial3d.GlobeControlPoint point1, com.earthview.world.spatial3d.GlobeControlPoint point2)
	{
		long point1ParamValue = point1.nativeObject.pointer;
		long point2ParamValue = point2.nativeObject.pointer;
		long returnValue = ComputerHead_CGlobeControlPoint_CGlobeControlPoint(this.nativeObject.pointer, point1ParamValue, point2ParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private double getVelocity_void(long pNativeObject);
	/**
	 * 获得速度
	 * @param  
	 */
	public double getVelocity()
	{
		double returnValue = getVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVelocity_ev_real64(long pNativeObject, double velocity);
	/**
	 * 设置速度
	 * @param  
	 */
	public void setVelocity(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity_ev_real64(this.nativeObject.pointer, velocityParamValue);
	}
	native private double getAngleVelocity_void(long pNativeObject);
	public double getAngleVelocity()
	{
		double returnValue = getAngleVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String get_mname_void(long pNativeObject);
	public String get_mname()
	{
		String jniValue = get_mname_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mname_EVString (long pNativeObject, String value);
	public void set_mname(String mname)
	{
		String mnameParamValue = mname;
		
		set_mname_EVString(this.nativeObject.pointer, mnameParamValue);
	}
	
	native private long get_mcontrolPoint_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeControlPointMap get_mcontrolPoint()
	{
		long jniValue = get_mcontrolPoint_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	
	native private void set_mcontrolPoint_CGlobeControlPointMap (long pNativeObject, long value);
	public void set_mcontrolPoint(com.earthview.world.spatial3d.GlobeControlPointMap mcontrolPoint)
	{
		long mcontrolPointParamValue = mcontrolPoint.nativeObject.pointer;
		
		set_mcontrolPoint_CGlobeControlPointMap(this.nativeObject.pointer, mcontrolPointParamValue);
	}
	
	native private long get_mflyControlPoint_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeControlPointMap get_mflyControlPoint()
	{
		long jniValue = get_mflyControlPoint_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	
	native private void set_mflyControlPoint_CGlobeControlPointMap (long pNativeObject, long value);
	public void set_mflyControlPoint(com.earthview.world.spatial3d.GlobeControlPointMap mflyControlPoint)
	{
		long mflyControlPointParamValue = mflyControlPoint.nativeObject.pointer;
		
		set_mflyControlPoint_CGlobeControlPointMap(this.nativeObject.pointer, mflyControlPointParamValue);
	}
	
	native private long get_mLastControlPoint_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeControlPoint get_mLastControlPoint()
	{
		long jniValue = get_mLastControlPoint_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}
	
	native private void set_mLastControlPoint_CGlobeControlPoint (long pNativeObject, long value);
	public void set_mLastControlPoint(com.earthview.world.spatial3d.GlobeControlPoint mLastControlPoint)
	{
		long mLastControlPointParamValue = mLastControlPoint.nativeObject.pointer;
		
		set_mLastControlPoint_CGlobeControlPoint(this.nativeObject.pointer, mLastControlPointParamValue);
	}
	
	native private long get_mangleDistance_void(long pNativeObject);
	public com.earthview.world.spatial3d.AngleDistanceMap get_mangleDistance()
	{
		long jniValue = get_mangleDistance_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.AngleDistanceMap __returnValue = new com.earthview.world.spatial3d.AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.AngleDistanceMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		}
		return __returnValue;
	}
	
	native private void set_mangleDistance_CAngleDistanceMap (long pNativeObject, long value);
	public void set_mangleDistance(com.earthview.world.spatial3d.AngleDistanceMap mangleDistance)
	{
		long mangleDistanceParamValue = mangleDistance.nativeObject.pointer;
		
		set_mangleDistance_CAngleDistanceMap(this.nativeObject.pointer, mangleDistanceParamValue);
	}
	
	native private long get_mrealAngleDistance_void(long pNativeObject);
	public com.earthview.world.spatial3d.AngleDistanceMap get_mrealAngleDistance()
	{
		long jniValue = get_mrealAngleDistance_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.AngleDistanceMap __returnValue = new com.earthview.world.spatial3d.AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.AngleDistanceMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAngleDistanceMap");
		}
		return __returnValue;
	}
	
	native private void set_mrealAngleDistance_CAngleDistanceMap (long pNativeObject, long value);
	public void set_mrealAngleDistance(com.earthview.world.spatial3d.AngleDistanceMap mrealAngleDistance)
	{
		long mrealAngleDistanceParamValue = mrealAngleDistance.nativeObject.pointer;
		
		set_mrealAngleDistance_CAngleDistanceMap(this.nativeObject.pointer, mrealAngleDistanceParamValue);
	}
	
	native private int get_mloopMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeFlyPath.LOOPMODE get_mloopMode()
	{
		int jniValue = get_mloopMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.GlobeFlyPath.LOOPMODE.toEnum(jniValue);
	}
	
	native private void set_mloopMode_LOOPMODE (long pNativeObject, int value);
	public void set_mloopMode(com.earthview.world.spatial3d.GlobeFlyPath.LOOPMODE mloopMode)
	{
		int mloopModeParamValue = mloopMode.getValue();
		
		set_mloopMode_LOOPMODE(this.nativeObject.pointer, mloopModeParamValue);
	}
	
	native private double get_mbezierStartPostion_void(long pNativeObject);
	public double get_mbezierStartPostion()
	{
		double jniValue = get_mbezierStartPostion_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbezierStartPostion_ev_real64 (long pNativeObject, double value);
	public void set_mbezierStartPostion(double mbezierStartPostion)
	{
		double mbezierStartPostionParamValue = mbezierStartPostion;
		
		set_mbezierStartPostion_ev_real64(this.nativeObject.pointer, mbezierStartPostionParamValue);
	}
	
	native private double get_mbezierSmoothScale_void(long pNativeObject);
	public double get_mbezierSmoothScale()
	{
		double jniValue = get_mbezierSmoothScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbezierSmoothScale_ev_real64 (long pNativeObject, double value);
	public void set_mbezierSmoothScale(double mbezierSmoothScale)
	{
		double mbezierSmoothScaleParamValue = mbezierSmoothScale;
		
		set_mbezierSmoothScale_ev_real64(this.nativeObject.pointer, mbezierSmoothScaleParamValue);
	}
	
	native private double get_mangularVelocity_void(long pNativeObject);
	public double get_mangularVelocity()
	{
		double jniValue = get_mangularVelocity_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mangularVelocity_ev_real64 (long pNativeObject, double value);
	public void set_mangularVelocity(double mangularVelocity)
	{
		double mangularVelocityParamValue = mangularVelocity;
		
		set_mangularVelocity_ev_real64(this.nativeObject.pointer, mangularVelocityParamValue);
	}
	
	native private double get_mradious_void(long pNativeObject);
	public double get_mradious()
	{
		double jniValue = get_mradious_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mradious_ev_real64 (long pNativeObject, double value);
	public void set_mradious(double mradious)
	{
		double mradiousParamValue = mradious;
		
		set_mradious_ev_real64(this.nativeObject.pointer, mradiousParamValue);
	}
	
	native private boolean get_misRun_void(long pNativeObject);
	public boolean get_misRun()
	{
		boolean jniValue = get_misRun_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misRun_ev_bool (long pNativeObject, boolean value);
	public void set_misRun(boolean misRun)
	{
		boolean misRunParamValue = misRun;
		
		set_misRun_ev_bool(this.nativeObject.pointer, misRunParamValue);
	}
	
	native private double get_mstartTime_void(long pNativeObject);
	public double get_mstartTime()
	{
		double jniValue = get_mstartTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mstartTime_ev_real64 (long pNativeObject, double value);
	public void set_mstartTime(double mstartTime)
	{
		double mstartTimeParamValue = mstartTime;
		
		set_mstartTime_ev_real64(this.nativeObject.pointer, mstartTimeParamValue);
	}
	
	native private long get_mflyParam_void(long pNativeObject);
	public com.earthview.world.spatial3d.Flyparam get_mflyParam()
	{
		long jniValue = get_mflyParam_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.Flyparam __returnValue = new com.earthview.world.spatial3d.Flyparam(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CFLyParam");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Flyparam)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFLyParam");
		}
		return __returnValue;
	}
	
	native private void set_mflyParam_CFLyParam (long pNativeObject, long value);
	public void set_mflyParam(com.earthview.world.spatial3d.Flyparam mflyParam)
	{
		long mflyParamParamValue = mflyParam.nativeObject.pointer;
		
		set_mflyParam_CFLyParam(this.nativeObject.pointer, mflyParamParamValue);
	}
	
	native private long get_mcontrolPointMap_void(long pNativeObject);
	public com.earthview.world.spatial3d.ControlPointMap get_mcontrolPointMap()
	{
		long jniValue = get_mcontrolPointMap_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.ControlPointMap __returnValue = new com.earthview.world.spatial3d.ControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CControlPointMap");
		}
		return __returnValue;
	}
	
	native private void set_mcontrolPointMap_CControlPointMap (long pNativeObject, long value);
	public void set_mcontrolPointMap(com.earthview.world.spatial3d.ControlPointMap mcontrolPointMap)
	{
		long mcontrolPointMapParamValue = mcontrolPointMap.nativeObject.pointer;
		
		set_mcontrolPointMap_CControlPointMap(this.nativeObject.pointer, mcontrolPointMapParamValue);
	}
	
	native private double get_mtotalAngleDistance_void(long pNativeObject);
	public double get_mtotalAngleDistance()
	{
		double jniValue = get_mtotalAngleDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtotalAngleDistance_ev_real64 (long pNativeObject, double value);
	public void set_mtotalAngleDistance(double mtotalAngleDistance)
	{
		double mtotalAngleDistanceParamValue = mtotalAngleDistance;
		
		set_mtotalAngleDistance_ev_real64(this.nativeObject.pointer, mtotalAngleDistanceParamValue);
	}
	
	native private double get_mrrealTotalAngleDistance_void(long pNativeObject);
	public double get_mrrealTotalAngleDistance()
	{
		double jniValue = get_mrrealTotalAngleDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrrealTotalAngleDistance_ev_real64 (long pNativeObject, double value);
	public void set_mrrealTotalAngleDistance(double mrrealTotalAngleDistance)
	{
		double mrrealTotalAngleDistanceParamValue = mrrealTotalAngleDistance;
		
		set_mrrealTotalAngleDistance_ev_real64(this.nativeObject.pointer, mrrealTotalAngleDistanceParamValue);
	}
	
	native private long get_mtimeRateList_void(long pNativeObject);
	public com.earthview.world.spatial3d.TimeRateList get_mtimeRateList()
	{
		long jniValue = get_mtimeRateList_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.TimeRateList __returnValue = new com.earthview.world.spatial3d.TimeRateList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTimeRateList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TimeRateList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTimeRateList");
		}
		return __returnValue;
	}
	
	native private void set_mtimeRateList_CTimeRateList (long pNativeObject, long value);
	public void set_mtimeRateList(com.earthview.world.spatial3d.TimeRateList mtimeRateList)
	{
		long mtimeRateListParamValue = mtimeRateList.nativeObject.pointer;
		
		set_mtimeRateList_CTimeRateList(this.nativeObject.pointer, mtimeRateListParamValue);
	}
	
	native private long get_mtimeRatePairList_void(long pNativeObject);
	public com.earthview.world.spatial3d.TimeRatePairList get_mtimeRatePairList()
	{
		long jniValue = get_mtimeRatePairList_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.TimeRatePairList __returnValue = new com.earthview.world.spatial3d.TimeRatePairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CTimeRatePairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TimeRatePairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTimeRatePairList");
		}
		return __returnValue;
	}
	
	native private void set_mtimeRatePairList_CTimeRatePairList (long pNativeObject, long value);
	public void set_mtimeRatePairList(com.earthview.world.spatial3d.TimeRatePairList mtimeRatePairList)
	{
		long mtimeRatePairListParamValue = mtimeRatePairList.nativeObject.pointer;
		
		set_mtimeRatePairList_CTimeRatePairList(this.nativeObject.pointer, mtimeRatePairListParamValue);
	}
	
	public GlobeFlyPath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPath obj = null;
 		if(baseObj instanceof GlobeFlyPath)
		{
			obj = (GlobeFlyPath)baseObj;
		} else {
			obj = new GlobeFlyPath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPath");
			obj.increaseCast();
		}

		return obj;
	}
}
