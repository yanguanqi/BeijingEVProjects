package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterColorMapRenderer extends com.earthview.world.spatial2d.raster.Irasterrenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterColorMapRenderer", new RasterColorMapRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterColorMapRendererProxy", new RasterColorMapRendererClassFactory());
	}

	public RasterColorMapRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRasterColorMapRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.RasterColorMapRenderer".equals(this.getClass().getName()))
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
	native private long getColorTable_void(long pNativeObject);
	public com.earthview.world.spatial.display.ColorTable getColorTable()
	{
		long returnValue = getColorTable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorTable __returnValue = new com.earthview.world.spatial.display.ColorTable(CreatedWhenConstruct.CWC_NotToCreate, "CColorTable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorTable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColorTable");
		}
		return __returnValue;
	}
	native private void setColorTable_CColorTable(long pNativeObject, long pColorTable);
	public void setColorTable(com.earthview.world.spatial.display.ColorTable pColorTable)
	{
		long pColorTableParamValue = (pColorTable == null ? 0L : pColorTable.nativeObject.pointer);
		setColorTable_CColorTable(this.nativeObject.pointer, pColorTableParamValue);
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

	public RasterColorMapRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterColorMapRenderer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static RasterColorMapRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterColorMapRenderer obj = null;
 		if(baseObj instanceof RasterColorMapRenderer)
		{
			obj = (RasterColorMapRenderer)baseObj;
		} else {
			obj = new RasterColorMapRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterColorMapRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
