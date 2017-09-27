package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CBandHistogram波段统计直方图
 */
public class BandHistogram extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CBandHistogram", new BandHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCBandHistogramProxy", new BandHistogramClassFactory());
	}

	protected  long getGrayFraquaency_void_callback()
	{
		IntegerPointer returnValue = getGrayFraquaency();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGrayFraquaency_void(long pNativeObject);
	/**
	 * 获取相应指针频率指针
	 */
	public IntegerPointer getGrayFraquaency()
	{
		long returnValue = getGrayFraquaency_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getGrayFraquaency_void_NoVirtual(long pNativeObject);
	protected IntegerPointer getGrayFraquaency_NoVirtual()
	{
		long returnValue = getGrayFraquaency_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
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
	public BandHistogram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BandHistogram(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getGrayFraquaency_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getGrayFraquaency_void(this.nativeObject.pointer, "getGrayFraquaency_void_callback");
		}
	}
	
	public static BandHistogram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BandHistogram obj = null;
 		if(baseObj instanceof BandHistogram)
		{
			obj = (BandHistogram)baseObj;
		} else {
			obj = new BandHistogram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBandHistogram");
			obj.increaseCast();
		}

		return obj;
	}
}
