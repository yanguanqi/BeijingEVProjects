package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 制图输出
 */
public class CartoOutput2D extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CCartoOutput2D", new CartoOutput2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCCartoOutput2DProxy", new CartoOutput2DClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public CartoOutput2D(Ipagelayout pagelayout) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pagelayoutPtr = new BasePointer(pagelayout);
		list.add("pagelayout", pagelayoutPtr.get());
		Create("JCCartoOutput2DProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.CartoOutput2D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getPrinter_void_callback()
	{
		com.earthview.world.display.Printer returnValue = getPrinter();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPrinter_void(long pNativeObject);
	/**
	 * 获取打印机
	 * @param  
	 */
	public com.earthview.world.display.Printer getPrinter()
	{
		long returnValue = getPrinter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Printer __returnValue = new com.earthview.world.display.Printer(CreatedWhenConstruct.CWC_NotToCreate, "CPrinter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Printer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPrinter");
		}
		return __returnValue;
	}
	native private long getPrinter_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Printer getPrinter_NoVirtual()
	{
		long returnValue = getPrinter_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Printer __returnValue = new com.earthview.world.display.Printer(CreatedWhenConstruct.CWC_NotToCreate, "CPrinter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Printer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPrinter");
		}
		return __returnValue;
	}

	protected  void setUsingPrinterPaperSettings_ev_bool_callback(boolean usingMapPageSettings)
	{
		boolean usingMapPageSettingsParamValue = usingMapPageSettings;
		setUsingPrinterPaperSettings(usingMapPageSettingsParamValue);
	}

	native private void setUsingPrinterPaperSettings_ev_bool(long pNativeObject, boolean usingMapPageSettings);
	/**
	 * 设置地图布局页面大小是否采用打印机页面设置
	 * @param  
	 */
	public void setUsingPrinterPaperSettings(boolean usingMapPageSettings)
	{
		boolean usingMapPageSettingsParamValue = usingMapPageSettings;
		setUsingPrinterPaperSettings_ev_bool(this.nativeObject.pointer, usingMapPageSettingsParamValue);
	}
	native private void setUsingPrinterPaperSettings_ev_bool_NoVirtual(long pNativeObject, boolean usingMapPageSettings);
	protected void setUsingPrinterPaperSettings_NoVirtual(boolean usingMapPageSettings)
	{
		boolean usingMapPageSettingsParamValue = usingMapPageSettings;
		setUsingPrinterPaperSettings_ev_bool_NoVirtual(this.nativeObject.pointer, usingMapPageSettingsParamValue);
	}

	protected  boolean isUsingPrinterPaperSettings_void_callback()
	{
		boolean returnValue = isUsingPrinterPaperSettings();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isUsingPrinterPaperSettings_void(long pNativeObject);
	/**
	 * 获取地图布局页面大小是否采用打印机页面设置
	 * @param  
	 */
	public boolean isUsingPrinterPaperSettings()
	{
		boolean returnValue = isUsingPrinterPaperSettings_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUsingPrinterPaperSettings_void_NoVirtual(long pNativeObject);
	protected boolean isUsingPrinterPaperSettings_NoVirtual()
	{
		boolean returnValue = isUsingPrinterPaperSettings_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPrinterAll_ev_bool_callback(boolean printerAll)
	{
		boolean printerAllParamValue = printerAll;
		setPrinterAll(printerAllParamValue);
	}

	native private void setPrinterAll_ev_bool(long pNativeObject, boolean printerAll);
	/**
	 * 设置是否打印所有页面
	 * @param  
	 */
	public void setPrinterAll(boolean printerAll)
	{
		boolean printerAllParamValue = printerAll;
		setPrinterAll_ev_bool(this.nativeObject.pointer, printerAllParamValue);
	}
	native private void setPrinterAll_ev_bool_NoVirtual(long pNativeObject, boolean printerAll);
	protected void setPrinterAll_NoVirtual(boolean printerAll)
	{
		boolean printerAllParamValue = printerAll;
		setPrinterAll_ev_bool_NoVirtual(this.nativeObject.pointer, printerAllParamValue);
	}

	protected  boolean isPrinterAll_void_callback()
	{
		boolean returnValue = isPrinterAll();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPrinterAll_void(long pNativeObject);
	/**
	 * 获取是否打印所有页面
	 * @param  
	 */
	public boolean isPrinterAll()
	{
		boolean returnValue = isPrinterAll_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPrinterAll_void_NoVirtual(long pNativeObject);
	protected boolean isPrinterAll_NoVirtual()
	{
		boolean returnValue = isPrinterAll_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setScaleMap_ev_bool_callback(boolean scaleMap)
	{
		boolean scaleMapParamValue = scaleMap;
		setScaleMap(scaleMapParamValue);
	}

	native private void setScaleMap_ev_bool(long pNativeObject, boolean scaleMap);
	/**
	 * 设置是否缩放地图
	 * @param  
	 */
	public void setScaleMap(boolean scaleMap)
	{
		boolean scaleMapParamValue = scaleMap;
		setScaleMap_ev_bool(this.nativeObject.pointer, scaleMapParamValue);
	}
	native private void setScaleMap_ev_bool_NoVirtual(long pNativeObject, boolean scaleMap);
	protected void setScaleMap_NoVirtual(boolean scaleMap)
	{
		boolean scaleMapParamValue = scaleMap;
		setScaleMap_ev_bool_NoVirtual(this.nativeObject.pointer, scaleMapParamValue);
	}

	protected  boolean isScaleMap_void_callback()
	{
		boolean returnValue = isScaleMap();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isScaleMap_void(long pNativeObject);
	/**
	 * 获取是否缩放地图
	 * @param  
	 */
	public boolean isScaleMap()
	{
		boolean returnValue = isScaleMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isScaleMap_void_NoVirtual(long pNativeObject);
	protected boolean isScaleMap_NoVirtual()
	{
		boolean returnValue = isScaleMap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getPrintCopyCount_void_callback()
	{
		long returnValue = getPrintCopyCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getPrintCopyCount_void(long pNativeObject);
	/**
	 * 获取打印份数
	 * @param  
	 */
	public long getPrintCopyCount()
	{
		long returnValue = getPrintCopyCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPrintCopyCount_void_NoVirtual(long pNativeObject);
	protected long getPrintCopyCount_NoVirtual()
	{
		long returnValue = getPrintCopyCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPrintCopyCount_ev_uint32_callback(long count)
	{
		long countParamValue = count;
		setPrintCopyCount(countParamValue);
	}

	native private void setPrintCopyCount_ev_uint32(long pNativeObject, long count);
	/**
	 * 设置打印份数
	 * @param  
	 */
	public void setPrintCopyCount(long count)
	{
		long countParamValue = count;
		setPrintCopyCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private void setPrintCopyCount_ev_uint32_NoVirtual(long pNativeObject, long count);
	protected void setPrintCopyCount_NoVirtual(long count)
	{
		long countParamValue = count;
		setPrintCopyCount_ev_uint32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	protected  void setFromTo_int_int_callback(int fromPage, int toPage)
	{
		int fromPageParamValue = fromPage;
		int toPageParamValue = toPage;
		setFromTo(fromPageParamValue, toPageParamValue);
	}

	native private void setFromTo_int_int(long pNativeObject, int fromPage, int toPage);
	/**
	 * 设置打印起始页面
	 * @param  
	 */
	public void setFromTo(int fromPage, int toPage)
	{
		int fromPageParamValue = fromPage;
		int toPageParamValue = toPage;
		setFromTo_int_int(this.nativeObject.pointer, fromPageParamValue, toPageParamValue);
	}
	native private void setFromTo_int_int_NoVirtual(long pNativeObject, int fromPage, int toPage);
	protected void setFromTo_NoVirtual(int fromPage, int toPage)
	{
		int fromPageParamValue = fromPage;
		int toPageParamValue = toPage;
		setFromTo_int_int_NoVirtual(this.nativeObject.pointer, fromPageParamValue, toPageParamValue);
	}

	protected  int getFromPage_void_callback()
	{
		int returnValue = getFromPage();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getFromPage_void(long pNativeObject);
	/**
	 * 获取打印起始页面索引
	 * @param  
	 */
	public int getFromPage()
	{
		int returnValue = getFromPage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFromPage_void_NoVirtual(long pNativeObject);
	protected int getFromPage_NoVirtual()
	{
		int returnValue = getFromPage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getToPage_void(long pNativeObject);
	/**
	 * 获取打印终止页面索引
	 * @param  
	 */
	public int getToPage()
	{
		int returnValue = getToPage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getAllPageCount_void(long pNativeObject);
	/**
	 * 获取所有页面数
	 * @param  
	 */
	public int getAllPageCount()
	{
		int returnValue = getAllPageCount_void(this.nativeObject.pointer);
		return returnValue;
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
	/**
	 * 从xml元素中恢复制图输出的配置
	 * @param element xml元素
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将制图输出的配置以XML的方式导出
	 * @param  
	 * @return xml元素
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

	public CartoOutput2D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CartoOutput2D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getPrinter_void(long pNativeObject, String method);
	native protected void register_setUsingPrinterPaperSettings_ev_bool(long pNativeObject, String method);
	native protected void register_isUsingPrinterPaperSettings_void(long pNativeObject, String method);
	native protected void register_setPrinterAll_ev_bool(long pNativeObject, String method);
	native protected void register_isPrinterAll_void(long pNativeObject, String method);
	native protected void register_setScaleMap_ev_bool(long pNativeObject, String method);
	native protected void register_isScaleMap_void(long pNativeObject, String method);
	native protected void register_getPrintCopyCount_void(long pNativeObject, String method);
	native protected void register_setPrintCopyCount_ev_uint32(long pNativeObject, String method);
	native protected void register_setFromTo_int_int(long pNativeObject, String method);
	native protected void register_getFromPage_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getPrinter_void(this.nativeObject.pointer, "getPrinter_void_callback");
			this.register_setUsingPrinterPaperSettings_ev_bool(this.nativeObject.pointer, "setUsingPrinterPaperSettings_ev_bool_callback");
			this.register_isUsingPrinterPaperSettings_void(this.nativeObject.pointer, "isUsingPrinterPaperSettings_void_callback");
			this.register_setPrinterAll_ev_bool(this.nativeObject.pointer, "setPrinterAll_ev_bool_callback");
			this.register_isPrinterAll_void(this.nativeObject.pointer, "isPrinterAll_void_callback");
			this.register_setScaleMap_ev_bool(this.nativeObject.pointer, "setScaleMap_ev_bool_callback");
			this.register_isScaleMap_void(this.nativeObject.pointer, "isScaleMap_void_callback");
			this.register_getPrintCopyCount_void(this.nativeObject.pointer, "getPrintCopyCount_void_callback");
			this.register_setPrintCopyCount_ev_uint32(this.nativeObject.pointer, "setPrintCopyCount_ev_uint32_callback");
			this.register_setFromTo_int_int(this.nativeObject.pointer, "setFromTo_int_int_callback");
			this.register_getFromPage_void(this.nativeObject.pointer, "getFromPage_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static CartoOutput2D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CartoOutput2D obj = null;
 		if(baseObj instanceof CartoOutput2D)
		{
			obj = (CartoOutput2D)baseObj;
		} else {
			obj = new CartoOutput2D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCartoOutput2D");
			obj.increaseCast();
		}

		return obj;
	}
}
