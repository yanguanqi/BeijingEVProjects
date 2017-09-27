package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 显示选项
 */
public class DisplayOptions extends com.earthview.world.display.Idisplayoptions {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CDisplayOptions", new DisplayOptionsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCDisplayOptionsProxy", new DisplayOptionsClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DisplayOptions() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDisplayOptionsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.display.DisplayOptions".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean getCompositingMode_EVCompositingMode(long pNativeObject, long mode);
	/**
	 * 获取显示叠加模式
	 * @param mode 输出：叠加模式
	 * @return 成功返回true；否则返回false
	 */
	public boolean getCompositingMode(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getCompositingMode_EVCompositingMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private boolean getCompositingMode_EVCompositingMode_NoVirtual(long pNativeObject, long mode);
	protected boolean getCompositingMode_NoVirtual(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getCompositingMode_EVCompositingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}

	native private void setEVCompositingMode_EVCompositingMode(long pNativeObject, int mode);
	/**
	 * 设置显示叠加模式
	 * @param mode 叠加模式
	 */
	public void setEVCompositingMode(com.earthview.world.display.EVCompositingMode mode)
	{
		int modeParamValue = mode.getValue();
		setEVCompositingMode_EVCompositingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setEVCompositingMode_EVCompositingMode_NoVirtual(long pNativeObject, int mode);
	protected void setEVCompositingMode_NoVirtual(com.earthview.world.display.EVCompositingMode mode)
	{
		int modeParamValue = mode.getValue();
		setEVCompositingMode_EVCompositingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	native private boolean getCompositingQuality_EVCompositingQuality(long pNativeObject, long quality);
	/**
	 * 获取显示质量
	 * @param mode 输出：叠加质量
	 * @return 成功返回true；否则返回false
	 */
	public boolean getCompositingQuality(EnumPointer quality)
	{
		long qualityParamValue = (quality == null ? 0L : quality.nativeObject.pointer);
		boolean returnValue = getCompositingQuality_EVCompositingQuality(this.nativeObject.pointer, qualityParamValue);
		return returnValue;
	}
	native private boolean getCompositingQuality_EVCompositingQuality_NoVirtual(long pNativeObject, long quality);
	protected boolean getCompositingQuality_NoVirtual(EnumPointer quality)
	{
		long qualityParamValue = (quality == null ? 0L : quality.nativeObject.pointer);
		boolean returnValue = getCompositingQuality_EVCompositingQuality_NoVirtual(this.nativeObject.pointer, qualityParamValue);
		return returnValue;
	}

	native private void setCompositingQuality_EVCompositingQuality(long pNativeObject, int quality);
	/**
	 * 设置显示叠加质量
	 * @param mode 叠加质量
	 */
	public void setCompositingQuality(com.earthview.world.display.EVCompositingQuality quality)
	{
		int qualityParamValue = quality.getValue();
		setCompositingQuality_EVCompositingQuality(this.nativeObject.pointer, qualityParamValue);
	}
	native private void setCompositingQuality_EVCompositingQuality_NoVirtual(long pNativeObject, int quality);
	protected void setCompositingQuality_NoVirtual(com.earthview.world.display.EVCompositingQuality quality)
	{
		int qualityParamValue = quality.getValue();
		setCompositingQuality_EVCompositingQuality_NoVirtual(this.nativeObject.pointer, qualityParamValue);
	}

	native private boolean getTextRenderingHint_EVTextRenderingHint(long pNativeObject, long hint);
	/**
	 * 获取字体渲染方式
	 * @param mode 输出：字体渲染方式
	 * @return 成功返回true；否则返回false
	 */
	public boolean getTextRenderingHint(EnumPointer hint)
	{
		long hintParamValue = (hint == null ? 0L : hint.nativeObject.pointer);
		boolean returnValue = getTextRenderingHint_EVTextRenderingHint(this.nativeObject.pointer, hintParamValue);
		return returnValue;
	}
	native private boolean getTextRenderingHint_EVTextRenderingHint_NoVirtual(long pNativeObject, long hint);
	protected boolean getTextRenderingHint_NoVirtual(EnumPointer hint)
	{
		long hintParamValue = (hint == null ? 0L : hint.nativeObject.pointer);
		boolean returnValue = getTextRenderingHint_EVTextRenderingHint_NoVirtual(this.nativeObject.pointer, hintParamValue);
		return returnValue;
	}

	native private void setTextRenderingHint_EVTextRenderingHint(long pNativeObject, int hint);
	/**
	 * 设置字体渲染方式
	 * @param mode 字体渲染方式
	 */
	public void setTextRenderingHint(com.earthview.world.display.EVTextRenderingHint hint)
	{
		int hintParamValue = hint.getValue();
		setTextRenderingHint_EVTextRenderingHint(this.nativeObject.pointer, hintParamValue);
	}
	native private void setTextRenderingHint_EVTextRenderingHint_NoVirtual(long pNativeObject, int hint);
	protected void setTextRenderingHint_NoVirtual(com.earthview.world.display.EVTextRenderingHint hint)
	{
		int hintParamValue = hint.getValue();
		setTextRenderingHint_EVTextRenderingHint_NoVirtual(this.nativeObject.pointer, hintParamValue);
	}

	native private boolean getInterpolationMode_EVInterpolationMode(long pNativeObject, long mode);
	/**
	 * 获取插值模式
	 * @param mode 输出：插值模式
	 * @return 成功返回true；否则返回false
	 */
	public boolean getInterpolationMode(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getInterpolationMode_EVInterpolationMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private boolean getInterpolationMode_EVInterpolationMode_NoVirtual(long pNativeObject, long mode);
	protected boolean getInterpolationMode_NoVirtual(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getInterpolationMode_EVInterpolationMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}

	native private void setInterpolationMode_EVInterpolationMode(long pNativeObject, int mode);
	/**
	 * 设置插值模式
	 * @param mode 插值模式
	 */
	public void setInterpolationMode(com.earthview.world.display.EVInterpolationMode mode)
	{
		int modeParamValue = mode.getValue();
		setInterpolationMode_EVInterpolationMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setInterpolationMode_EVInterpolationMode_NoVirtual(long pNativeObject, int mode);
	protected void setInterpolationMode_NoVirtual(com.earthview.world.display.EVInterpolationMode mode)
	{
		int modeParamValue = mode.getValue();
		setInterpolationMode_EVInterpolationMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	native private boolean getSmoothingMode_EVSmoothingMode(long pNativeObject, long mode);
	/**
	 * 获取平滑模式
	 * @param mode 输出：平滑模式
	 * @return 成功返回true；否则返回false
	 */
	public boolean getSmoothingMode(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getSmoothingMode_EVSmoothingMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private boolean getSmoothingMode_EVSmoothingMode_NoVirtual(long pNativeObject, long mode);
	protected boolean getSmoothingMode_NoVirtual(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getSmoothingMode_EVSmoothingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}

	native private void setSmoothingMode_EVSmoothingMode(long pNativeObject, int mode);
	/**
	 * 设置平滑模式
	 * @param mode 平滑模式
	 */
	public void setSmoothingMode(com.earthview.world.display.EVSmoothingMode mode)
	{
		int modeParamValue = mode.getValue();
		setSmoothingMode_EVSmoothingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setSmoothingMode_EVSmoothingMode_NoVirtual(long pNativeObject, int mode);
	protected void setSmoothingMode_NoVirtual(com.earthview.world.display.EVSmoothingMode mode)
	{
		int modeParamValue = mode.getValue();
		setSmoothingMode_EVSmoothingMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	native private boolean getPixelOffsetMode_EVPixelOffsetMode(long pNativeObject, long mode);
	/**
	 * 获取像素偏移模式
	 * @param mode 输出：叠加质量
	 * @return 成功返回true；否则返回false
	 */
	public boolean getPixelOffsetMode(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getPixelOffsetMode_EVPixelOffsetMode(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}
	native private boolean getPixelOffsetMode_EVPixelOffsetMode_NoVirtual(long pNativeObject, long mode);
	protected boolean getPixelOffsetMode_NoVirtual(EnumPointer mode)
	{
		long modeParamValue = (mode == null ? 0L : mode.nativeObject.pointer);
		boolean returnValue = getPixelOffsetMode_EVPixelOffsetMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
		return returnValue;
	}

	native private void setPixelOffsetMode_EVPixelOffsetMode(long pNativeObject, int mode);
	/**
	 * 设置像素偏移模式
	 * @param mode 像素偏移模式
	 */
	public void setPixelOffsetMode(com.earthview.world.display.EVPixelOffsetMode mode)
	{
		int modeParamValue = mode.getValue();
		setPixelOffsetMode_EVPixelOffsetMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setPixelOffsetMode_EVPixelOffsetMode_NoVirtual(long pNativeObject, int mode);
	protected void setPixelOffsetMode_NoVirtual(com.earthview.world.display.EVPixelOffsetMode mode)
	{
		int modeParamValue = mode.getValue();
		setPixelOffsetMode_EVPixelOffsetMode_NoVirtual(this.nativeObject.pointer, modeParamValue);
	}

	native private void loadFromXML_CXmlElement(long pNativeObject, long element);
	/**
	 * 反序列化
	 */
	public void loadFromXML(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		loadFromXML_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void loadFromXML_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void loadFromXML_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		loadFromXML_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化
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

	public DisplayOptions(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DisplayOptions(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCompositingMode_EVCompositingMode(long pNativeObject, String method);
	native protected void register_setEVCompositingMode_EVCompositingMode(long pNativeObject, String method);
	native protected void register_getCompositingQuality_EVCompositingQuality(long pNativeObject, String method);
	native protected void register_setCompositingQuality_EVCompositingQuality(long pNativeObject, String method);
	native protected void register_getTextRenderingHint_EVTextRenderingHint(long pNativeObject, String method);
	native protected void register_setTextRenderingHint_EVTextRenderingHint(long pNativeObject, String method);
	native protected void register_getInterpolationMode_EVInterpolationMode(long pNativeObject, String method);
	native protected void register_setInterpolationMode_EVInterpolationMode(long pNativeObject, String method);
	native protected void register_getSmoothingMode_EVSmoothingMode(long pNativeObject, String method);
	native protected void register_setSmoothingMode_EVSmoothingMode(long pNativeObject, String method);
	native protected void register_getPixelOffsetMode_EVPixelOffsetMode(long pNativeObject, String method);
	native protected void register_setPixelOffsetMode_EVPixelOffsetMode(long pNativeObject, String method);
	native protected void register_loadFromXML_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCompositingMode_EVCompositingMode(this.nativeObject.pointer, "getCompositingMode_EVCompositingMode_callback");
			this.register_setEVCompositingMode_EVCompositingMode(this.nativeObject.pointer, "setEVCompositingMode_EVCompositingMode_callback");
			this.register_getCompositingQuality_EVCompositingQuality(this.nativeObject.pointer, "getCompositingQuality_EVCompositingQuality_callback");
			this.register_setCompositingQuality_EVCompositingQuality(this.nativeObject.pointer, "setCompositingQuality_EVCompositingQuality_callback");
			this.register_getTextRenderingHint_EVTextRenderingHint(this.nativeObject.pointer, "getTextRenderingHint_EVTextRenderingHint_callback");
			this.register_setTextRenderingHint_EVTextRenderingHint(this.nativeObject.pointer, "setTextRenderingHint_EVTextRenderingHint_callback");
			this.register_getInterpolationMode_EVInterpolationMode(this.nativeObject.pointer, "getInterpolationMode_EVInterpolationMode_callback");
			this.register_setInterpolationMode_EVInterpolationMode(this.nativeObject.pointer, "setInterpolationMode_EVInterpolationMode_callback");
			this.register_getSmoothingMode_EVSmoothingMode(this.nativeObject.pointer, "getSmoothingMode_EVSmoothingMode_callback");
			this.register_setSmoothingMode_EVSmoothingMode(this.nativeObject.pointer, "setSmoothingMode_EVSmoothingMode_callback");
			this.register_getPixelOffsetMode_EVPixelOffsetMode(this.nativeObject.pointer, "getPixelOffsetMode_EVPixelOffsetMode_callback");
			this.register_setPixelOffsetMode_EVPixelOffsetMode(this.nativeObject.pointer, "setPixelOffsetMode_EVPixelOffsetMode_callback");
			this.register_loadFromXML_CXmlElement(this.nativeObject.pointer, "loadFromXML_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static DisplayOptions fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DisplayOptions obj = null;
 		if(baseObj instanceof DisplayOptions)
		{
			obj = (DisplayOptions)baseObj;
		} else {
			obj = new DisplayOptions(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDisplayOptions");
			obj.increaseCast();
		}

		return obj;
	}
}
