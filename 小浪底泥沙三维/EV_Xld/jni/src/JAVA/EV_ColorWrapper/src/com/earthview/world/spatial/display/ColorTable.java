package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ColorTable extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorTable", new ColorTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorTableProxy", new ColorTableClassFactory());
	}

	public ColorTable() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCColorTableProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.ColorTable".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public ColorTable(long colorCount) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer colorCountPtr = new BasePointer(colorCount);
		list.add("colorCount", colorCountPtr.get());
		Create("JCColorTableProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.ColorTable".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getColorCount_void_callback()
	{
		long returnValue = getColorCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getColorCount_void(long pNativeObject);
	public long getColorCount()
	{
		long returnValue = getColorCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColorCount_void_NoVirtual(long pNativeObject);
	protected long getColorCount_NoVirtual()
	{
		long returnValue = getColorCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColorCount_ev_uint32_callback(long colorCount)
	{
		long colorCountParamValue = colorCount;
		setColorCount(colorCountParamValue);
	}

	native private void setColorCount_ev_uint32(long pNativeObject, long colorCount);
	public void setColorCount(long colorCount)
	{
		long colorCountParamValue = colorCount;
		setColorCount_ev_uint32(this.nativeObject.pointer, colorCountParamValue);
	}
	native private void setColorCount_ev_uint32_NoVirtual(long pNativeObject, long colorCount);
	protected void setColorCount_NoVirtual(long colorCount)
	{
		long colorCountParamValue = colorCount;
		setColorCount_ev_uint32_NoVirtual(this.nativeObject.pointer, colorCountParamValue);
	}

	protected  long getColor_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.display.Icolor returnValue = getColor(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
	native private long getColor_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.display.Icolor getColor_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getColor_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  void setColor_ev_uint32_IColor_callback(long index, long pColor)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		setColor(indexParamValue, pColorParamValue);
	}

	native private void setColor_ev_uint32_IColor(long pNativeObject, long index, long pColor);
	public void setColor(long index, com.earthview.world.spatial.display.Icolor pColor)
	{
		long indexParamValue = index;
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setColor_ev_uint32_IColor(this.nativeObject.pointer, indexParamValue, pColorParamValue);
	}
	native private void setColor_ev_uint32_IColor_NoVirtual(long pNativeObject, long index, long pColor);
	protected void setColor_NoVirtual(long index, com.earthview.world.spatial.display.Icolor pColor)
	{
		long indexParamValue = index;
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setColor_ev_uint32_IColor_NoVirtual(this.nativeObject.pointer, indexParamValue, pColorParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.display.ColorTable returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.display.ColorTable ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.ColorTable ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean equal_CColorTable_callback(long other)
	{
		com.earthview.world.spatial.display.ColorTable otherParamValue = (other == 0L ? null : new com.earthview.world.spatial.display.ColorTable(CreatedWhenConstruct.CWC_NotToCreate));
		if(otherParamValue != null)
		{
		otherParamValue.setDelegate(true);
		otherParamValue.setInstancePointer(new InstancePointer(other));
		IClassFactory otherParamValueClassFactory = GlobalClassFactoryMap.get(otherParamValue.getCppInstanceTypeName());
		if (otherParamValueClassFactory != null)
		{
			otherParamValue.setDelegate(true);
			otherParamValue = (com.earthview.world.spatial.display.ColorTable)otherParamValueClassFactory.create();
			otherParamValue.setDelegate(true);
			otherParamValue.setInstancePointer(new InstancePointer(other));
		}
		}
		boolean returnValue = equal(otherParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean equal_CColorTable(long pNativeObject, long other);
	public boolean equal(com.earthview.world.spatial.display.ColorTable other)
	{
		long otherParamValue = (other == null ? 0L : other.nativeObject.pointer);
		boolean returnValue = equal_CColorTable(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean equal_CColorTable_NoVirtual(long pNativeObject, long other);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.ColorTable other)
	{
		long otherParamValue = (other == null ? 0L : other.nativeObject.pointer);
		boolean returnValue = equal_CColorTable_NoVirtual(this.nativeObject.pointer, otherParamValue);
		return returnValue;
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

	public ColorTable(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorTable(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getColorCount_void(long pNativeObject, String method);
	native protected void register_setColorCount_ev_uint32(long pNativeObject, String method);
	native protected void register_getColor_ev_uint32(long pNativeObject, String method);
	native protected void register_setColor_ev_uint32_IColor(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_equal_CColorTable(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getColorCount_void(this.nativeObject.pointer, "getColorCount_void_callback");
			this.register_setColorCount_ev_uint32(this.nativeObject.pointer, "setColorCount_ev_uint32_callback");
			this.register_getColor_ev_uint32(this.nativeObject.pointer, "getColor_ev_uint32_callback");
			this.register_setColor_ev_uint32_IColor(this.nativeObject.pointer, "setColor_ev_uint32_IColor_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_equal_CColorTable(this.nativeObject.pointer, "equal_CColorTable_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static ColorTable fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorTable obj = null;
 		if(baseObj instanceof ColorTable)
		{
			obj = (ColorTable)baseObj;
		} else {
			obj = new ColorTable(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColorTable");
			obj.increaseCast();
		}

		return obj;
	}
}
