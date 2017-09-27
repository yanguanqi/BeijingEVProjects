package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Irasterblock extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::IRasterBlock", new IrasterblockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JIRasterBlockProxy", new IrasterblockClassFactory());
	}

	protected  int getWidth_void_callback()
	{
		int returnValue = getWidth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getWidth_void(long pNativeObject);
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWidth_void_NoVirtual(long pNativeObject);
	protected int getWidth_NoVirtual()
	{
		int returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getHeight_void_callback()
	{
		int returnValue = getHeight();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getHeight_void(long pNativeObject);
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void_NoVirtual(long pNativeObject);
	protected int getHeight_NoVirtual()
	{
		int returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getBandCount_void_callback()
	{
		int returnValue = getBandCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getBandCount_void(long pNativeObject);
	public int getBandCount()
	{
		int returnValue = getBandCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getBandCount_void_NoVirtual(long pNativeObject);
	protected int getBandCount_NoVirtual()
	{
		int returnValue = getBandCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getDataType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVRasterDataType returnValue = getDataType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDataType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVRasterDataType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVRasterDataType.toEnum(returnValue);
	}
	native private int getDataType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVRasterDataType getDataType_NoVirtual()
	{
		int returnValue = getDataType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVRasterDataType.toEnum(returnValue);
	}

	protected  double getPixelValue_ev_int32_ev_int32_callback(int bandIndex, int offset)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double returnValue = getPixelValue(bandIndexParamValue, offsetParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getPixelValue_ev_int32_ev_int32(long pNativeObject, int bandIndex, int offset);
	public double getPixelValue(int bandIndex, int offset)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double returnValue = getPixelValue_ev_int32_ev_int32(this.nativeObject.pointer, bandIndexParamValue, offsetParamValue);
		return returnValue;
	}
	native private double getPixelValue_ev_int32_ev_int32_NoVirtual(long pNativeObject, int bandIndex, int offset);
	protected double getPixelValue_NoVirtual(int bandIndex, int offset)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double returnValue = getPixelValue_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, bandIndexParamValue, offsetParamValue);
		return returnValue;
	}

	protected  void setPixelValue_ev_int32_ev_int32_ev_real64_callback(int bandIndex, int offset, double value)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double valueParamValue = value;
		setPixelValue(bandIndexParamValue, offsetParamValue, valueParamValue);
	}

	native private void setPixelValue_ev_int32_ev_int32_ev_real64(long pNativeObject, int bandIndex, int offset, double value);
	public void setPixelValue(int bandIndex, int offset, double value)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double valueParamValue = value;
		setPixelValue_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, bandIndexParamValue, offsetParamValue, valueParamValue);
	}
	native private void setPixelValue_ev_int32_ev_int32_ev_real64_NoVirtual(long pNativeObject, int bandIndex, int offset, double value);
	protected void setPixelValue_NoVirtual(int bandIndex, int offset, double value)
	{
		int bandIndexParamValue = bandIndex;
		int offsetParamValue = offset;
		double valueParamValue = value;
		setPixelValue_ev_int32_ev_int32_ev_real64_NoVirtual(this.nativeObject.pointer, bandIndexParamValue, offsetParamValue, valueParamValue);
	}

	protected  double getNodataValue_void_callback()
	{
		double returnValue = getNodataValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getNodataValue_void(long pNativeObject);
	public double getNodataValue()
	{
		double returnValue = getNodataValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getNodataValue_void_NoVirtual(long pNativeObject);
	protected double getNodataValue_NoVirtual()
	{
		double returnValue = getNodataValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setNodataValue_ev_real64_callback(double nodataValue)
	{
		double nodataValueParamValue = nodataValue;
		setNodataValue(nodataValueParamValue);
	}

	native private void setNodataValue_ev_real64(long pNativeObject, double nodataValue);
	public void setNodataValue(double nodataValue)
	{
		double nodataValueParamValue = nodataValue;
		setNodataValue_ev_real64(this.nativeObject.pointer, nodataValueParamValue);
	}
	native private void setNodataValue_ev_real64_NoVirtual(long pNativeObject, double nodataValue);
	protected void setNodataValue_NoVirtual(double nodataValue)
	{
		double nodataValueParamValue = nodataValue;
		setNodataValue_ev_real64_NoVirtual(this.nativeObject.pointer, nodataValueParamValue);
	}

	protected  long getDataRef_ev_int32_callback(int bandIndex)
	{
		int bandIndexParamValue = bandIndex;
		UBytePointer returnValue = getDataRef(bandIndexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataRef_ev_int32(long pNativeObject, int bandIndex);
	public UBytePointer getDataRef(int bandIndex)
	{
		int bandIndexParamValue = bandIndex;
		long returnValue = getDataRef_ev_int32(this.nativeObject.pointer, bandIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDataRef_ev_int32_NoVirtual(long pNativeObject, int bandIndex);
	protected UBytePointer getDataRef_NoVirtual(int bandIndex)
	{
		int bandIndexParamValue = bandIndex;
		long returnValue = getDataRef_ev_int32_NoVirtual(this.nativeObject.pointer, bandIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial2d.raster.Irasterblock returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.Irasterblock ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterblock __returnValue = new com.earthview.world.spatial2d.raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate, "IRasterBlock");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterblock)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterBlock");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.Irasterblock ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterblock __returnValue = new com.earthview.world.spatial2d.raster.Irasterblock(CreatedWhenConstruct.CWC_NotToCreate, "IRasterBlock");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterblock)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterBlock");
		}
		return __returnValue;
	}

	protected  void setDefaultValue_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setDefaultValue(valueParamValue);
	}

	native private void setDefaultValue_ev_real64(long pNativeObject, double value);
	public void setDefaultValue(double value)
	{
		double valueParamValue = value;
		setDefaultValue_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDefaultValue_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setDefaultValue_NoVirtual(double value)
	{
		double valueParamValue = value;
		setDefaultValue_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void createValidMask_void_callback()
	{
		createValidMask();
	}

	native private void createValidMask_void(long pNativeObject);
	public void createValidMask()
	{
		createValidMask_void(this.nativeObject.pointer);
	}
	native private void createValidMask_void_NoVirtual(long pNativeObject);
	protected void createValidMask_NoVirtual()
	{
		createValidMask_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getValidMaskDataRef_void_callback()
	{
		UBytePointer returnValue = getValidMaskDataRef();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getValidMaskDataRef_void(long pNativeObject);
	public UBytePointer getValidMaskDataRef()
	{
		long returnValue = getValidMaskDataRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getValidMaskDataRef_void_NoVirtual(long pNativeObject);
	protected UBytePointer getValidMaskDataRef_NoVirtual()
	{
		long returnValue = getValidMaskDataRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void fromStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		fromStream(streamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Irasterblock(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Irasterblock(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getBandCount_void(long pNativeObject, String method);
	native protected void register_getDataType_void(long pNativeObject, String method);
	native protected void register_getPixelValue_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_setPixelValue_ev_int32_ev_int32_ev_real64(long pNativeObject, String method);
	native protected void register_getNodataValue_void(long pNativeObject, String method);
	native protected void register_setNodataValue_ev_real64(long pNativeObject, String method);
	native protected void register_getDataRef_ev_int32(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_setDefaultValue_ev_real64(long pNativeObject, String method);
	native protected void register_createValidMask_void(long pNativeObject, String method);
	native protected void register_getValidMaskDataRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getBandCount_void(this.nativeObject.pointer, "getBandCount_void_callback");
			this.register_getDataType_void(this.nativeObject.pointer, "getDataType_void_callback");
			this.register_getPixelValue_ev_int32_ev_int32(this.nativeObject.pointer, "getPixelValue_ev_int32_ev_int32_callback");
			this.register_setPixelValue_ev_int32_ev_int32_ev_real64(this.nativeObject.pointer, "setPixelValue_ev_int32_ev_int32_ev_real64_callback");
			this.register_getNodataValue_void(this.nativeObject.pointer, "getNodataValue_void_callback");
			this.register_setNodataValue_ev_real64(this.nativeObject.pointer, "setNodataValue_ev_real64_callback");
			this.register_getDataRef_ev_int32(this.nativeObject.pointer, "getDataRef_ev_int32_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_setDefaultValue_ev_real64(this.nativeObject.pointer, "setDefaultValue_ev_real64_callback");
			this.register_createValidMask_void(this.nativeObject.pointer, "createValidMask_void_callback");
			this.register_getValidMaskDataRef_void(this.nativeObject.pointer, "getValidMaskDataRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Irasterblock fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Irasterblock obj = null;
 		if(baseObj instanceof Irasterblock)
		{
			obj = (Irasterblock)baseObj;
		} else {
			obj = new Irasterblock(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IRasterBlock");
			obj.increaseCast();
		}

		return obj;
	}
}
