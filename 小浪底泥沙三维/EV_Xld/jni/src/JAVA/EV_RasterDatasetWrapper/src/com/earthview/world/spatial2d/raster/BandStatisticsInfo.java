package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CBandStatisticsInfo波段统计信息最大值最小值均值方差
 */
public class BandStatisticsInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CBandStatisticsInfo", new BandStatisticsInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCBandStatisticsInfoProxy", new BandStatisticsInfoClassFactory());
	}

	protected  double getMax_void_callback()
	{
		double returnValue = getMax();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMax_void(long pNativeObject);
	/**
	 * 获取最大值
	 * @return 灰度最大值
	 */
	public double getMax()
	{
		double returnValue = getMax_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMax_void_NoVirtual(long pNativeObject);
	protected double getMax_NoVirtual()
	{
		double returnValue = getMax_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMin_void_callback()
	{
		double returnValue = getMin();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMin_void(long pNativeObject);
	/**
	 * 获取最小值
	 * @return 灰度最小值
	 */
	public double getMin()
	{
		double returnValue = getMin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMin_void_NoVirtual(long pNativeObject);
	protected double getMin_NoVirtual()
	{
		double returnValue = getMin_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getMean_void_callback()
	{
		double returnValue = getMean();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMean_void(long pNativeObject);
	/**
	 * 获取最平均值
	 * @return 平均值
	 */
	public double getMean()
	{
		double returnValue = getMean_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMean_void_NoVirtual(long pNativeObject);
	protected double getMean_NoVirtual()
	{
		double returnValue = getMean_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getStdDev_void_callback()
	{
		double returnValue = getStdDev();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getStdDev_void(long pNativeObject);
	/**
	 * 获取最标准差
	 * @return 标准差
	 */
	public double getStdDev()
	{
		double returnValue = getStdDev_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getStdDev_void_NoVirtual(long pNativeObject);
	protected double getStdDev_NoVirtual()
	{
		double returnValue = getStdDev_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 转为流
	 * @param stream 流对象
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private long toXmlElement_void(long pNativeObject);
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
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
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	public BandStatisticsInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BandStatisticsInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getMax_void(long pNativeObject, String method);
	native protected void register_getMin_void(long pNativeObject, String method);
	native protected void register_getMean_void(long pNativeObject, String method);
	native protected void register_getStdDev_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMax_void(this.nativeObject.pointer, "getMax_void_callback");
			this.register_getMin_void(this.nativeObject.pointer, "getMin_void_callback");
			this.register_getMean_void(this.nativeObject.pointer, "getMean_void_callback");
			this.register_getStdDev_void(this.nativeObject.pointer, "getStdDev_void_callback");
		}
	}
	
	public static BandStatisticsInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BandStatisticsInfo obj = null;
 		if(baseObj instanceof BandStatisticsInfo)
		{
			obj = (BandStatisticsInfo)baseObj;
		} else {
			obj = new BandStatisticsInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBandStatisticsInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
