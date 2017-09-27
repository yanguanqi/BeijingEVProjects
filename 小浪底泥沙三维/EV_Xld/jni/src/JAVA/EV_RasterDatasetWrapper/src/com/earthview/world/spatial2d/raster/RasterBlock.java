package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterBlock extends com.earthview.world.spatial2d.raster.Irasterblock {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterBlock", new RasterBlockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterBlockProxy", new RasterBlockClassFactory());
	}

	public RasterBlock(int width, int height, int nBands, com.earthview.world.spatial.geodataset.EVRasterDataType dType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer nBandsPtr = new BasePointer(nBands);
		list.add("nBands", nBandsPtr.get());
		BasePointer dTypePtr = new BasePointer(dType);
		list.add("dType", dTypePtr.get());
		Create("JCRasterBlockProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.RasterBlock".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private double getPixelHeight_void(long pNativeObject);
	public double getPixelHeight()
	{
		double returnValue = getPixelHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPixelWidth_void(long pNativeObject);
	public double getPixelWidth()
	{
		double returnValue = getPixelWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSpatialReference_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private void setSpatialReference_ISpatialReference(long pNativeObject, long pSpatialRef);
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference pSpatialRef)
	{
		long pSpatialRefParamValue = (pSpatialRef == null ? 0L : pSpatialRef.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, pSpatialRefParamValue);
	}
	native private long getGeoEnvelope_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Ienvelope getGeoEnvelope()
	{
		long returnValue = getGeoEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getGeoTransform_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.AffineTransform getGeoTransform()
	{
		long returnValue = getGeoTransform_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.AffineTransform __returnValue = new com.earthview.world.spatial2d.raster.AffineTransform(CreatedWhenConstruct.CWC_NotToCreate, "CAffineTransform");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.AffineTransform)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAffineTransform");
		}
		return __returnValue;
	}
	native private void setGeoTransform_CAffineTransform(long pNativeObject, long tranform);
	public void setGeoTransform(com.earthview.world.spatial2d.raster.AffineTransform tranform)
	{
		long tranformParamValue = tranform.nativeObject.pointer;
		setGeoTransform_CAffineTransform(this.nativeObject.pointer, tranformParamValue);
	}
	native private long getDataset_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Irasterdataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Irasterdataset __returnValue = new com.earthview.world.spatial.geodataset.Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate, "IRasterDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Irasterdataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterDataset");
		}
		return __returnValue;
	}
	native private void setDataset_IRasterDataset(long pNativeObject, long pDataset);
	public void setDataset(com.earthview.world.spatial.geodataset.Irasterdataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		setDataset_IRasterDataset(this.nativeObject.pointer, pDatasetParamValue);
	}
	native private int getRasterBandIndex_ev_int32(long pNativeObject, int index);
	public int getRasterBandIndex(int index)
	{
		int indexParamValue = index;
		int returnValue = getRasterBandIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setRasterBandIndex_ev_int32_ev_int32(long pNativeObject, int index, int bandIndex);
	public void setRasterBandIndex(int index, int bandIndex)
	{
		int indexParamValue = index;
		int bandIndexParamValue = bandIndex;
		setRasterBandIndex_ev_int32_ev_int32(this.nativeObject.pointer, indexParamValue, bandIndexParamValue);
	}
	native private void setRasterResampleType_ev_int32(long pNativeObject, int resampleIndex);
	public void setRasterResampleType(int resampleIndex)
	{
		int resampleIndexParamValue = resampleIndex;
		setRasterResampleType_ev_int32(this.nativeObject.pointer, resampleIndexParamValue);
	}
	native private int getRasterResampleType_void(long pNativeObject);
	public int getRasterResampleType()
	{
		int returnValue = getRasterResampleType_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RasterBlock(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterBlock(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
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
	
	public static RasterBlock fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterBlock obj = null;
 		if(baseObj instanceof RasterBlock)
		{
			obj = (RasterBlock)baseObj;
		} else {
			obj = new RasterBlock(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterBlock");
			obj.increaseCast();
		}

		return obj;
	}
}
