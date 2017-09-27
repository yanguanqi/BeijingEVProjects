package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用户扩展符号的序列化类纯虚类
 */
public class Isymbollistener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ISymbolListener", new IsymbollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JISymbolListenerProxy", new IsymbollistenerClassFactory());
	}

	public Isymbollistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JISymbolListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Isymbollistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long customSymbolFromXml_EVString_callback(String strXml)
	{
		String strXmlParamValue = strXml;
		com.earthview.world.spatial.display.Isymbol returnValue = customSymbolFromXml(strXmlParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long customSymbolFromXml_EVString(long pNativeObject, String strXml);
	/**
	 * 从XML中恢复用户自定义类型的符号			
	 * @param strXml 符号的XML文本
	 */
	public com.earthview.world.spatial.display.Isymbol customSymbolFromXml(String strXml)
	{
		String strXmlParamValue = strXml;
		long returnValue = customSymbolFromXml_EVString(this.nativeObject.pointer, strXmlParamValue);
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
	native private long customSymbolFromXml_EVString_NoVirtual(long pNativeObject, String strXml);
	protected com.earthview.world.spatial.display.Isymbol customSymbolFromXml_NoVirtual(String strXml)
	{
		String strXmlParamValue = strXml;
		long returnValue = customSymbolFromXml_EVString_NoVirtual(this.nativeObject.pointer, strXmlParamValue);
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

	protected  String customSymbolToXml_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		String returnValue = customSymbolToXml(symbolParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String customSymbolToXml_ISymbol(long pNativeObject, long symbol);
	/**
	 * 将用户自定义类型的符号序列化成XML文本			
	 * @param symbol 符号对象
	 */
	public String customSymbolToXml(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String returnValue = customSymbolToXml_ISymbol(this.nativeObject.pointer, symbolParamValue);
		return returnValue;
	}
	native private String customSymbolToXml_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected String customSymbolToXml_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String returnValue = customSymbolToXml_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
		return returnValue;
	}

	public Isymbollistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Isymbollistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_customSymbolFromXml_EVString(long pNativeObject, String method);
	native protected void register_customSymbolToXml_ISymbol(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_customSymbolFromXml_EVString(this.nativeObject.pointer, "customSymbolFromXml_EVString_callback");
			this.register_customSymbolToXml_ISymbol(this.nativeObject.pointer, "customSymbolToXml_ISymbol_callback");
		}
	}
	
	public static Isymbollistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Isymbollistener obj = null;
 		if(baseObj instanceof Isymbollistener)
		{
			obj = (Isymbollistener)baseObj;
		} else {
			obj = new Isymbollistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISymbolListener");
			obj.increaseCast();
		}

		return obj;
	}
}
