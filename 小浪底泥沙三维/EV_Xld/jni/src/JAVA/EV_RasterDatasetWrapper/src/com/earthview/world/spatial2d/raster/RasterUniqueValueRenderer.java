package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterUniqueValueRenderer extends com.earthview.world.spatial2d.raster.Irasterrenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterUniqueValueRenderer", new RasterUniqueValueRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterUniqueValueRendererProxy", new RasterUniqueValueRendererClassFactory());
	}

	public RasterUniqueValueRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRasterUniqueValueRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.RasterUniqueValueRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getRendererType_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.EVRasterRendererType getRendererType()
	{
		int returnValue = getRendererType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.raster.EVRasterRendererType.toEnum(returnValue);
	}
	native private int getRendererType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.EVRasterRendererType getRendererType_NoVirtual()
	{
		int returnValue = getRendererType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.raster.EVRasterRendererType.toEnum(returnValue);
	}

	native private boolean draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, long pDisplay, long pRaster, int leftUpX, int leftUpY, int width, int height);
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay pDisplay, com.earthview.world.spatial2d.raster.Irasterblock pRaster, int leftUpX, int leftUpY, int width, int height)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		long pRasterParamValue = (pRaster == null ? 0L : pRaster.nativeObject.pointer);
		int leftUpXParamValue = leftUpX;
		int leftUpYParamValue = leftUpY;
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, pDisplayParamValue, pRasterParamValue, leftUpXParamValue, leftUpYParamValue, widthParamValue, heightParamValue);
		return returnValue;
	}
	native private boolean draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, long pDisplay, long pRaster, int leftUpX, int leftUpY, int width, int height);
	protected boolean draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pDisplay, com.earthview.world.spatial2d.raster.Irasterblock pRaster, int leftUpX, int leftUpY, int width, int height)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		long pRasterParamValue = (pRaster == null ? 0L : pRaster.nativeObject.pointer);
		int leftUpXParamValue = leftUpX;
		int leftUpYParamValue = leftUpY;
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, pDisplayParamValue, pRasterParamValue, leftUpXParamValue, leftUpYParamValue, widthParamValue, heightParamValue);
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

	native private int getBandIndex_ev_int32(long pNativeObject, int channel);
	public int getBandIndex(int channel)
	{
		int channelParamValue = channel;
		int returnValue = getBandIndex_ev_int32(this.nativeObject.pointer, channelParamValue);
		return returnValue;
	}
	native private int getBandIndex_ev_int32_NoVirtual(long pNativeObject, int channel);
	protected int getBandIndex_NoVirtual(int channel)
	{
		int channelParamValue = channel;
		int returnValue = getBandIndex_ev_int32_NoVirtual(this.nativeObject.pointer, channelParamValue);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial2d.raster.Irasterrenderer ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterrenderer __returnValue = new com.earthview.world.spatial2d.raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate, "IRasterRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterrenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterRenderer");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.raster.Irasterrenderer ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.raster.Irasterrenderer __returnValue = new com.earthview.world.spatial2d.raster.Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate, "IRasterRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.raster.Irasterrenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IRasterRenderer");
		}
		return __returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml中恢复图层的配置
	 * @param element xml要素
	 */
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把图层的信息导出到xml中
	 * @param  
	 * @return xml要素
	 */
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

	native private String getCaption_void(long pNativeObject);
	public String getCaption()
	{
		String returnValue = getCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCaption_EVString(long pNativeObject, long caption);
	public void setCaption(StringPointer caption)
	{
		long captionParamValue = caption.nativeObject.pointer;
		setCaption_EVString(this.nativeObject.pointer, captionParamValue);
	}
	native private String getSubCaption_ev_uint32(long pNativeObject, long index);
	public String getSubCaption(long index)
	{
		long indexParamValue = index;
		String returnValue = getSubCaption_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setSubCaption_ev_uint32_EVString(long pNativeObject, long index, long subCaption);
	public void setSubCaption(long index, StringPointer subCaption)
	{
		long indexParamValue = index;
		long subCaptionParamValue = subCaption.nativeObject.pointer;
		setSubCaption_ev_uint32_EVString(this.nativeObject.pointer, indexParamValue, subCaptionParamValue);
	}
	native private int getBandIndex_void(long pNativeObject);
	public int getBandIndex()
	{
		int returnValue = getBandIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBandIndex_ev_int32(long pNativeObject, int index);
	public void setBandIndex(int index)
	{
		int indexParamValue = index;
		setBandIndex_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private String getFieldName_void(long pNativeObject);
	public String getFieldName()
	{
		String returnValue = getFieldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFieldName_EVString(long pNativeObject, long fieldName);
	public void setFieldName(StringPointer fieldName)
	{
		long fieldNameParamValue = fieldName.nativeObject.pointer;
		setFieldName_EVString(this.nativeObject.pointer, fieldNameParamValue);
	}
	native private String getDefaultCaption_void(long pNativeObject);
	public String getDefaultCaption()
	{
		String returnValue = getDefaultCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultCaption_EVString(long pNativeObject, String defaultCaption);
	public void setDefaultCaption(String defaultCaption)
	{
		String defaultCaptionParamValue = defaultCaption;
		setDefaultCaption_EVString(this.nativeObject.pointer, defaultCaptionParamValue);
	}
	native private long getDefaultColor_void(long pNativeObject);
	public com.earthview.world.spatial.display.Icolor getDefaultColor()
	{
		long returnValue = getDefaultColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private void setDefaultColor_IColor(long pNativeObject, long color);
	public void setDefaultColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setDefaultColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private long getColor_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.display.Icolor getColor(long index)
	{
		long indexParamValue = index;
		long returnValue = getColor_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long getColor_CVariant(long pNativeObject, long value);
	public com.earthview.world.spatial.display.Icolor getColor(com.earthview.world.core.Variant value)
	{
		long valueParamValue = value.nativeObject.pointer;
		long returnValue = getColor_CVariant(this.nativeObject.pointer, valueParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private void setColor_ev_uint32_IColor(long pNativeObject, long index, long color);
	public void setColor(long index, com.earthview.world.spatial.display.Icolor color)
	{
		long indexParamValue = index;
		long colorParamValue = color.nativeObject.pointer;
		setColor_ev_uint32_IColor(this.nativeObject.pointer, indexParamValue, colorParamValue);
	}
	native private void addValue_CVariant_IColor(long pNativeObject, long value, long color);
	public void addValue(com.earthview.world.core.Variant value, com.earthview.world.spatial.display.Icolor color)
	{
		long valueParamValue = value.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		addValue_CVariant_IColor(this.nativeObject.pointer, valueParamValue, colorParamValue);
	}
	native private void removeValue_ev_uint32(long pNativeObject, long index);
	public void removeValue(long index)
	{
		long indexParamValue = index;
		removeValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAll_void(long pNativeObject);
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private long getValueCount_void(long pNativeObject);
	public long getValueCount()
	{
		long returnValue = getValueCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getValue_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.core.Variant getValue(long index)
	{
		long indexParamValue = index;
		long returnValue = getValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private boolean equal_IRasterRenderer(long pNativeObject, long other);
	public boolean equal(com.earthview.world.spatial2d.raster.Irasterrenderer other)
	{
		long otherParamValue = (other == null ? 0L : other.nativeObject.pointer);
		boolean returnValue = equal_IRasterRenderer(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean equal_IRasterRenderer_NoVirtual(long pNativeObject, long other);
	protected boolean equal_NoVirtual(com.earthview.world.spatial2d.raster.Irasterrenderer other)
	{
		long otherParamValue = (other == null ? 0L : other.nativeObject.pointer);
		boolean returnValue = equal_IRasterRenderer_NoVirtual(this.nativeObject.pointer, otherParamValue);
		return returnValue;
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

	public RasterUniqueValueRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterUniqueValueRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRendererType_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getBandCount_void(long pNativeObject, String method);
	native protected void register_getBandIndex_ev_int32(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_equal_IRasterRenderer(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRendererType_void(this.nativeObject.pointer, "getRendererType_void_callback");
			this.register_draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "draw_ISpatialDisplay_IRasterBlock_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_getBandCount_void(this.nativeObject.pointer, "getBandCount_void_callback");
			this.register_getBandIndex_ev_int32(this.nativeObject.pointer, "getBandIndex_ev_int32_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_equal_IRasterRenderer(this.nativeObject.pointer, "equal_IRasterRenderer_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static RasterUniqueValueRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterUniqueValueRenderer obj = null;
 		if(baseObj instanceof RasterUniqueValueRenderer)
		{
			obj = (RasterUniqueValueRenderer)baseObj;
		} else {
			obj = new RasterUniqueValueRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterUniqueValueRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
