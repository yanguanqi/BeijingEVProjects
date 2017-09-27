package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CSymbol类的创建工厂提供方法如下：获取符号工厂指针、通过数据流恢复符号信息虚方法：是否为符号的xml文本头、通过xmlElement恢复符号信息、通过SLD恢复符号信息、销毁符号、销毁所有符号
 */
public class SymbolFactory extends com.earthview.world.spatial.display.Isymbolfactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSymbolFactory", new SymbolFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSymbolFactoryProxy", new SymbolFactoryClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取符号工厂指针
	 * @param  
	 * @return 符号工厂指针
	 */
	public static com.earthview.world.spatial.display.SymbolFactory getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.SymbolFactory __returnValue = new com.earthview.world.spatial.display.SymbolFactory(CreatedWhenConstruct.CWC_NotToCreate, "CSymbolFactory");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SymbolFactory)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSymbolFactory");
		}
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private long createSymbolFromSLD_EVString(long pNativeObject, String sldText);
	/**
	 * 通过SLD恢复符号信息
	 * @param stream SLD字符串
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

	public SymbolFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 销毁所有符号
	 * @param  
	 */
	public void destroySymbols()
	{
		super.destroySymbols_NoVirtual();
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
	
	public static SymbolFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolFactory obj = null;
 		if(baseObj instanceof SymbolFactory)
		{
			obj = (SymbolFactory)baseObj;
		} else {
			obj = new SymbolFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
