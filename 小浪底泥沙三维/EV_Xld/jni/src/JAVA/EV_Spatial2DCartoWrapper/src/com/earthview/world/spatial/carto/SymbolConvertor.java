package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 符号转换类
 */
public class SymbolConvertor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CSymbolConvertor", new SymbolConvertorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SymbolConvertor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSymbolConvertor", null);
	}

	native private long resetLineSymbolWidth_CLineSymbol_ev_real64(long pNativeObject, long pLineSymbol, double dPageScale);
	/**
	 * 线状符号的转化
	 * @param pLineSymbol 线状符号
	 * @param dPageScale 纸张比例尺
	 */
	public com.earthview.world.spatial.display.LineSymbol resetLineSymbolWidth(com.earthview.world.spatial.display.LineSymbol pLineSymbol, double dPageScale)
	{
		long pLineSymbolParamValue = (pLineSymbol == null ? 0L : pLineSymbol.nativeObject.pointer);
		double dPageScaleParamValue = dPageScale;
		long returnValue = resetLineSymbolWidth_CLineSymbol_ev_real64(this.nativeObject.pointer, pLineSymbolParamValue, dPageScaleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LineSymbol __returnValue = new com.earthview.world.spatial.display.LineSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CLineSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LineSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineSymbol");
		}
		return __returnValue;
	}
	native private long resetTextSymbolSize_CTextSymbol_ev_real64(long pNativeObject, long pTextSymbol, double dPageScale);
	/**
	 * 文本符号的转化
	 * @param pTextSymbol 文本符号
	 * @param dPageScale 纸张比例尺
	 */
	public com.earthview.world.spatial.display.TextSymbol resetTextSymbolSize(com.earthview.world.spatial.display.TextSymbol pTextSymbol, double dPageScale)
	{
		long pTextSymbolParamValue = (pTextSymbol == null ? 0L : pTextSymbol.nativeObject.pointer);
		double dPageScaleParamValue = dPageScale;
		long returnValue = resetTextSymbolSize_CTextSymbol_ev_real64(this.nativeObject.pointer, pTextSymbolParamValue, dPageScaleParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.TextSymbol __returnValue = new com.earthview.world.spatial.display.TextSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CTextSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.TextSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextSymbol");
		}
		return __returnValue;
	}
	public SymbolConvertor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolConvertor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SymbolConvertor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolConvertor obj = null;
 		if(baseObj instanceof SymbolConvertor)
		{
			obj = (SymbolConvertor)baseObj;
		} else {
			obj = new SymbolConvertor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolConvertor");
			obj.increaseCast();
		}

		return obj;
	}
}
