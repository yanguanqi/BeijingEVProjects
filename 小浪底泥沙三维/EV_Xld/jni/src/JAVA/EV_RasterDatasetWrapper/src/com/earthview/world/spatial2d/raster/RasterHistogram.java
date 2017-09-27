package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterHistogram extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterHistogram", new RasterHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterHistogramProxy", new RasterHistogramClassFactory());
	}

	public RasterHistogram() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRasterHistogramProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.RasterHistogram".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getFrequence_ev_byte_callback(short grayIndex)
	{
		short grayIndexParamValue = grayIndex;
		long returnValue = getFrequence(grayIndexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFrequence_ev_byte(long pNativeObject, short grayIndex);
	public long getFrequence(short grayIndex)
	{
		short grayIndexParamValue = grayIndex;
		long returnValue = getFrequence_ev_byte(this.nativeObject.pointer, grayIndexParamValue);
		return returnValue;
	}
	native private long getFrequence_ev_byte_NoVirtual(long pNativeObject, short grayIndex);
	protected long getFrequence_NoVirtual(short grayIndex)
	{
		short grayIndexParamValue = grayIndex;
		long returnValue = getFrequence_ev_byte_NoVirtual(this.nativeObject.pointer, grayIndexParamValue);
		return returnValue;
	}

	protected  void setFrequence_ev_byte_ev_uint32_callback(short grayIndex, long frequence)
	{
		short grayIndexParamValue = grayIndex;
		long frequenceParamValue = frequence;
		setFrequence(grayIndexParamValue, frequenceParamValue);
	}

	native private void setFrequence_ev_byte_ev_uint32(long pNativeObject, short grayIndex, long frequence);
	public void setFrequence(short grayIndex, long frequence)
	{
		short grayIndexParamValue = grayIndex;
		long frequenceParamValue = frequence;
		setFrequence_ev_byte_ev_uint32(this.nativeObject.pointer, grayIndexParamValue, frequenceParamValue);
	}
	native private void setFrequence_ev_byte_ev_uint32_NoVirtual(long pNativeObject, short grayIndex, long frequence);
	protected void setFrequence_NoVirtual(short grayIndex, long frequence)
	{
		short grayIndexParamValue = grayIndex;
		long frequenceParamValue = frequence;
		setFrequence_ev_byte_ev_uint32_NoVirtual(this.nativeObject.pointer, grayIndexParamValue, frequenceParamValue);
	}

	protected  short getGrayIndex_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		short returnValue = getGrayIndex(valueParamValue);
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getGrayIndex_ev_real64(long pNativeObject, double value);
	public short getGrayIndex(double value)
	{
		double valueParamValue = value;
		short returnValue = getGrayIndex_ev_real64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private short getGrayIndex_ev_real64_NoVirtual(long pNativeObject, double value);
	protected short getGrayIndex_NoVirtual(double value)
	{
		double valueParamValue = value;
		short returnValue = getGrayIndex_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream(long pNativeObject, long stream);
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
	public RasterHistogram(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterHistogram(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFrequence_ev_byte(long pNativeObject, String method);
	native protected void register_setFrequence_ev_byte_ev_uint32(long pNativeObject, String method);
	native protected void register_getGrayIndex_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFrequence_ev_byte(this.nativeObject.pointer, "getFrequence_ev_byte_callback");
			this.register_setFrequence_ev_byte_ev_uint32(this.nativeObject.pointer, "setFrequence_ev_byte_ev_uint32_callback");
			this.register_getGrayIndex_ev_real64(this.nativeObject.pointer, "getGrayIndex_ev_real64_callback");
		}
	}
	
	public static RasterHistogram fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterHistogram obj = null;
 		if(baseObj instanceof RasterHistogram)
		{
			obj = (RasterHistogram)baseObj;
		} else {
			obj = new RasterHistogram(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterHistogram");
			obj.increaseCast();
		}

		return obj;
	}
}
