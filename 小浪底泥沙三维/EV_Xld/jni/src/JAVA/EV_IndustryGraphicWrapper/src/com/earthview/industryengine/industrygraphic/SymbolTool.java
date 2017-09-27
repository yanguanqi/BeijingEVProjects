package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 工具类
 */
public class SymbolTool extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CSymbolTool", new SymbolToolClassFactory());
	}

	native private static void loadImage_EVString_MemoryDataStreamPtr(String imagePath, long dataStream);
	/**
	 * 静态加载图片
	 * @param imagePath 图片路径
	 * @param dataStream 返回的数据流
	 */
	public static void loadImage(String imagePath, com.earthview.world.core.MemoryDataStreamPtr dataStream)
	{
		String imagePathParamValue = imagePath;
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		loadImage_EVString_MemoryDataStreamPtr(imagePathParamValue, dataStreamParamValue);
	}
	native private static boolean isEqualSymbol_ISymbol_ISymbol(long pSymbol1, long pSymbol2);
	public static boolean isEqualSymbol(com.earthview.world.spatial.display.Isymbol pSymbol1, com.earthview.world.spatial.display.Isymbol pSymbol2)
	{
		long pSymbol1ParamValue = (pSymbol1 == null ? 0L : pSymbol1.nativeObject.pointer);
		long pSymbol2ParamValue = (pSymbol2 == null ? 0L : pSymbol2.nativeObject.pointer);
		boolean returnValue = isEqualSymbol_ISymbol_ISymbol(pSymbol1ParamValue, pSymbol2ParamValue);
		return returnValue;
	}
	public SymbolTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SymbolTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolTool obj = null;
 		if(baseObj instanceof SymbolTool)
		{
			obj = (SymbolTool)baseObj;
		} else {
			obj = new SymbolTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolTool");
			obj.increaseCast();
		}

		return obj;
	}
}
