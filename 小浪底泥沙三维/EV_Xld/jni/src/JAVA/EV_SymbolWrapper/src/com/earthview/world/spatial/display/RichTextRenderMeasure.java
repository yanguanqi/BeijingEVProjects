package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RichTextRenderMeasure extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRichTextRenderMeasure", new RichTextRenderMeasureClassFactory());
	}

	public RichTextRenderMeasure() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRichTextRenderMeasure", null);
	}

	public RichTextRenderMeasure(String str, com.earthview.world.spatial.display.Isymbol symbol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strPtr = new BasePointer(str);
		list.add("str", strPtr.get());
		BasePointer symbolPtr = new BasePointer(symbol);
		list.add("symbol", symbolPtr.get());
		Create("CRichTextRenderMeasure", list);
	}

	native private void measureRichText_EVString_ISymbol(long pNativeObject, String str, long symbol);
	public void measureRichText(String str, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String strParamValue = str;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		measureRichText_EVString_ISymbol(this.nativeObject.pointer, strParamValue, symbolParamValue);
	}
	native private void getTextSize_double_double(long pNativeObject, long w, long h);
	public void getTextSize(DoublePointer w, DoublePointer h)
	{
		long wParamValue = w.nativeObject.pointer;
		long hParamValue = h.nativeObject.pointer;
		getTextSize_double_double(this.nativeObject.pointer, wParamValue, hParamValue);
	}
	native private void getTextSize_EarthView_World_Display_EVDeviceUnits_double_double(long pNativeObject, long unit, long w, long h);
	public void getTextSize(EarthView::World::Display::EVDeviceUnits unit, DoublePointer w, DoublePointer h)
	{
		long unitParamValue = unit.nativeObject.pointer;
		long wParamValue = w.nativeObject.pointer;
		long hParamValue = h.nativeObject.pointer;
		getTextSize_EarthView_World_Display_EVDeviceUnits_double_double(this.nativeObject.pointer, unitParamValue, wParamValue, hParamValue);
	}
	public RichTextRenderMeasure(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RichTextRenderMeasure(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RichTextRenderMeasure fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RichTextRenderMeasure obj = null;
 		if(baseObj instanceof RichTextRenderMeasure)
		{
			obj = (RichTextRenderMeasure)baseObj;
		} else {
			obj = new RichTextRenderMeasure(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRichTextRenderMeasure");
			obj.increaseCast();
		}

		return obj;
	}
}
