package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 填充符号类提供方法如下：获取与设置外边框对象、是否使用外边框、是否填充获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class FillSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CFillSymbol", new FillSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCFillSymbolProxy", new FillSymbolClassFactory());
	}

	protected  long getOutline_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getOutline();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOutline_void(long pNativeObject);
	/**
	 * 获取外边框对象
	 * @param  
	 * @return 外边框
	 */
	public com.earthview.world.spatial.display.Isymbol getOutline()
	{
		long returnValue = getOutline_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long getOutline_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getOutline_NoVirtual()
	{
		long returnValue = getOutline_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	protected  void setOutline_ISymbol_callback(long outline)
	{
		com.earthview.world.spatial.display.Isymbol outlineParamValue = (outline == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(outlineParamValue != null)
		{
		outlineParamValue.setDelegate(true);
		outlineParamValue.setInstancePointer(new InstancePointer(outline));
		IClassFactory outlineParamValueClassFactory = GlobalClassFactoryMap.get(outlineParamValue.getCppInstanceTypeName());
		if (outlineParamValueClassFactory != null)
		{
			outlineParamValue.setDelegate(true);
			outlineParamValue = (com.earthview.world.spatial.display.Isymbol)outlineParamValueClassFactory.create();
			outlineParamValue.setDelegate(true);
			outlineParamValue.setInstancePointer(new InstancePointer(outline));
		}
		}
		setOutline(outlineParamValue);
	}

	native private void setOutline_ISymbol(long pNativeObject, long outline);
	/**
	 * 设置外边框对象
	 * @param outline 外边框指针
	 */
	public void setOutline(com.earthview.world.spatial.display.Isymbol outline)
	{
		long outlineParamValue = (outline == null ? 0L : outline.nativeObject.pointer);
		setOutline_ISymbol(this.nativeObject.pointer, outlineParamValue);
	}
	native private void setOutline_ISymbol_NoVirtual(long pNativeObject, long outline);
	protected void setOutline_NoVirtual(com.earthview.world.spatial.display.Isymbol outline)
	{
		long outlineParamValue = (outline == null ? 0L : outline.nativeObject.pointer);
		setOutline_ISymbol_NoVirtual(this.nativeObject.pointer, outlineParamValue);
	}

	protected  boolean isUseOutline_void_callback()
	{
		boolean returnValue = isUseOutline();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isUseOutline_void(long pNativeObject);
	/**
	 * 是否使用外边框
	 * @param  
	 * @return 如果使用，则返回true；否则，返回false
	 */
	public boolean isUseOutline()
	{
		boolean returnValue = isUseOutline_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUseOutline_void_NoVirtual(long pNativeObject);
	protected boolean isUseOutline_NoVirtual()
	{
		boolean returnValue = isUseOutline_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUseOutline_ev_bool_callback(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		setUseOutline(bUseParamValue);
	}

	native private void setUseOutline_ev_bool(long pNativeObject, boolean bUse);
	/**
	 * 设置是否使用外边框
	 * @param bUse 是否使用
	 */
	public void setUseOutline(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		setUseOutline_ev_bool(this.nativeObject.pointer, bUseParamValue);
	}
	native private void setUseOutline_ev_bool_NoVirtual(long pNativeObject, boolean bUse);
	protected void setUseOutline_NoVirtual(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		setUseOutline_ev_bool_NoVirtual(this.nativeObject.pointer, bUseParamValue);
	}

	protected  boolean isFill_void_callback()
	{
		boolean returnValue = isFill();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isFill_void(long pNativeObject);
	/**
	 * 是否填充
	 * @param  
	 * @return 如果填充，则返回true；否则，返回false
	 */
	public boolean isFill()
	{
		boolean returnValue = isFill_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFill_void_NoVirtual(long pNativeObject);
	protected boolean isFill_NoVirtual()
	{
		boolean returnValue = isFill_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setFill_ev_bool_callback(boolean bFill)
	{
		boolean bFillParamValue = bFill;
		setFill(bFillParamValue);
	}

	native private void setFill_ev_bool(long pNativeObject, boolean bFill);
	/**
	 * 设置是否填充
	 * @param bUse 是否填充
	 */
	public void setFill(boolean bFill)
	{
		boolean bFillParamValue = bFill;
		setFill_ev_bool(this.nativeObject.pointer, bFillParamValue);
	}
	native private void setFill_ev_bool_NoVirtual(long pNativeObject, boolean bFill);
	protected void setFill_NoVirtual(boolean bFill)
	{
		boolean bFillParamValue = bFill;
		setFill_ev_bool_NoVirtual(this.nativeObject.pointer, bFillParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 获取流
	 * @param stream 流对象
	 */
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
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
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
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

	native private String toSLD_void(long pNativeObject);
	/**
	 * 获取SLD
	 * @param  
	 * @return SLD字符串
	 */
	public String toSLD()
	{
		String returnValue = toSLD_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toSLD_void_NoVirtual(long pNativeObject);
	protected String toSLD_NoVirtual()
	{
		String returnValue = toSLD_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private void fromSLD_EVString(long pNativeObject, long sld);
	/**
	 * 从SLD恢复Symbol属性
	 * @param sld SLD字符串
	 */
	public void fromSLD(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString(this.nativeObject.pointer, sldParamValue);
	}
	native private void fromSLD_EVString_NoVirtual(long pNativeObject, long sld);
	protected void fromSLD_NoVirtual(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
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

	public FillSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FillSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 复制符号
	 * @param  
	 * @return 返回复制的符号
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 获取符号类型
	 * @param  
	 * @return 返回类型
	 */
	public int getSymbolType()
	{
		return super.getSymbolType_NoVirtual();
	}
	/**
	 * 符号知否包含图像
	 * @param  
	 * @return 如果包含返回true；否则返回false
	 */
	public boolean hasImage()
	{
		return super.hasImage_NoVirtual();
	}
	/**
	 * 获取包含图像数量
	 * @param  
	 * @return 返回包含图像数量
	 */
	public long getImageCount()
	{
		return super.getImageCount_NoVirtual();
	}
	/**
	 * 获取指定索引处图像ID
	 * @param index 指定位置
	 * @return 返回图像ID
	 */
	public String getImageID(long index)
	{
		return super.getImageID_NoVirtual(index);
	}
	/**
	 * 以内存流的形式获取指定索引处图像
	 * @param index 指定位置
	 * @return 返回图像流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		return super.getImage_NoVirtual(index);
	}
	/**
	 * 设置指定索引的图像
	 * @param index 指定位置
	 * @param imageID 输出，图像
	 * @param stream 输入，流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		super.setImage_NoVirtual(index, imageID, stream);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	
	native protected void register_getOutline_void(long pNativeObject, String method);
	native protected void register_setOutline_ISymbol(long pNativeObject, String method);
	native protected void register_isUseOutline_void(long pNativeObject, String method);
	native protected void register_setUseOutline_ev_bool(long pNativeObject, String method);
	native protected void register_isFill_void(long pNativeObject, String method);
	native protected void register_setFill_ev_bool(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getOutline_void(this.nativeObject.pointer, "getOutline_void_callback");
			this.register_setOutline_ISymbol(this.nativeObject.pointer, "setOutline_ISymbol_callback");
			this.register_isUseOutline_void(this.nativeObject.pointer, "isUseOutline_void_callback");
			this.register_setUseOutline_ev_bool(this.nativeObject.pointer, "setUseOutline_ev_bool_callback");
			this.register_isFill_void(this.nativeObject.pointer, "isFill_void_callback");
			this.register_setFill_ev_bool(this.nativeObject.pointer, "setFill_ev_bool_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static FillSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FillSymbol obj = null;
 		if(baseObj instanceof FillSymbol)
		{
			obj = (FillSymbol)baseObj;
		} else {
			obj = new FillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFillSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
