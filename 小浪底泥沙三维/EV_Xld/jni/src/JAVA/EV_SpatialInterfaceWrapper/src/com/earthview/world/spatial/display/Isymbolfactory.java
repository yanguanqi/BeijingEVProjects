package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 符号工厂基类
 */
public class Isymbolfactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ISymbolFactory", new IsymbolfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JISymbolFactoryProxy", new IsymbolfactoryClassFactory());
	}

	protected  long createSymbolFromStream_CDataStream_callback(long stream)
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
		com.earthview.world.spatial.display.Isymbol returnValue = createSymbolFromStream(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSymbolFromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过数据流恢复符号信息
	 * @param stream 数据流
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol createSymbolFromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createSymbolFromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
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
	native private long createSymbolFromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.display.Isymbol createSymbolFromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createSymbolFromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
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

	protected  boolean isSymbolHeader_EVString_callback(String xmlNodeName)
	{
		String xmlNodeNameParamValue = xmlNodeName;
		boolean returnValue = isSymbolHeader(xmlNodeNameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSymbolHeader_EVString(long pNativeObject, String xmlNodeName);
	/**
	 * 是否为符号的xml文本头
	 * @param xmlNodeName XML节点名字
	 */
	public boolean isSymbolHeader(String xmlNodeName)
	{
		String xmlNodeNameParamValue = xmlNodeName;
		boolean returnValue = isSymbolHeader_EVString(this.nativeObject.pointer, xmlNodeNameParamValue);
		return returnValue;
	}
	native private boolean isSymbolHeader_EVString_NoVirtual(long pNativeObject, String xmlNodeName);
	protected boolean isSymbolHeader_NoVirtual(String xmlNodeName)
	{
		String xmlNodeNameParamValue = xmlNodeName;
		boolean returnValue = isSymbolHeader_EVString_NoVirtual(this.nativeObject.pointer, xmlNodeNameParamValue);
		return returnValue;
	}

	protected  long createSymbolFromXmlElement_CXmlElement_callback(long element)
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
		com.earthview.world.spatial.display.Isymbol returnValue = createSymbolFromXmlElement(elementParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSymbolFromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 通过xmlElement恢复符号信息
	 * @param xmlText xmlElement字符串
	 */
	public com.earthview.world.spatial.display.Isymbol createSymbolFromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createSymbolFromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
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
	native private long createSymbolFromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.display.Isymbol createSymbolFromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createSymbolFromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
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

	protected  long createSymbolFromSLD_EVString_callback(String sldText)
	{
		String sldTextParamValue = sldText;
		com.earthview.world.spatial.display.Isymbol returnValue = createSymbolFromSLD(sldTextParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createSymbolFromSLD_EVString(long pNativeObject, String sldText);
	/**
	 * 通过SLD恢复符号信息
	 * @param sldText SLD字符串
	 */
	public com.earthview.world.spatial.display.Isymbol createSymbolFromSLD(String sldText)
	{
		String sldTextParamValue = sldText;
		long returnValue = createSymbolFromSLD_EVString(this.nativeObject.pointer, sldTextParamValue);
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
	native private long createSymbolFromSLD_EVString_NoVirtual(long pNativeObject, String sldText);
	protected com.earthview.world.spatial.display.Isymbol createSymbolFromSLD_NoVirtual(String sldText)
	{
		String sldTextParamValue = sldText;
		long returnValue = createSymbolFromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldTextParamValue);
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

	protected  void destroySymbol_ISymbol_callback(long pSymbol)
	{
		com.earthview.world.spatial.display.Isymbol pSymbolParamValue = (pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSymbolParamValue != null)
		{
		pSymbolParamValue.setDelegate(true);
		pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		IClassFactory pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(pSymbolParamValue.getCppInstanceTypeName());
		if (pSymbolParamValueClassFactory != null)
		{
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)pSymbolParamValueClassFactory.create();
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		}
		}
		destroySymbol(pSymbolParamValue);
	}

	native private void destroySymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 销毁符号
	 * @param pSymbol 符号对象
	 */
	public void destroySymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		destroySymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void destroySymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void destroySymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		destroySymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	protected  void destroySymbols_void_callback()
	{
		destroySymbols();
	}

	native private void destroySymbols_void(long pNativeObject);
	/**
	 * 销毁所有符号
	 * @param  
	 */
	public void destroySymbols()
	{
		destroySymbols_void(this.nativeObject.pointer);
	}
	native private void destroySymbols_void_NoVirtual(long pNativeObject);
	protected void destroySymbols_NoVirtual()
	{
		destroySymbols_void_NoVirtual(this.nativeObject.pointer);
	}

	public Isymbolfactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Isymbolfactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createSymbolFromStream_CDataStream(long pNativeObject, String method);
	native protected void register_isSymbolHeader_EVString(long pNativeObject, String method);
	native protected void register_createSymbolFromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_createSymbolFromSLD_EVString(long pNativeObject, String method);
	native protected void register_destroySymbol_ISymbol(long pNativeObject, String method);
	native protected void register_destroySymbols_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createSymbolFromStream_CDataStream(this.nativeObject.pointer, "createSymbolFromStream_CDataStream_callback");
			this.register_isSymbolHeader_EVString(this.nativeObject.pointer, "isSymbolHeader_EVString_callback");
			this.register_createSymbolFromXmlElement_CXmlElement(this.nativeObject.pointer, "createSymbolFromXmlElement_CXmlElement_callback");
			this.register_createSymbolFromSLD_EVString(this.nativeObject.pointer, "createSymbolFromSLD_EVString_callback");
			this.register_destroySymbol_ISymbol(this.nativeObject.pointer, "destroySymbol_ISymbol_callback");
			this.register_destroySymbols_void(this.nativeObject.pointer, "destroySymbols_void_callback");
		}
	}
	
	public static Isymbolfactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Isymbolfactory obj = null;
 		if(baseObj instanceof Isymbolfactory)
		{
			obj = (Isymbolfactory)baseObj;
		} else {
			obj = new Isymbolfactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISymbolFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
