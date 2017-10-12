package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RichTextRender extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRichTextRender", new RichTextRenderClassFactory());
	}

	public RichTextRender() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRichTextRender", null);
	}

	native private void startDraw_IDisplay2D_ISymbol(long pNativeObject, long display, long pSymbol);
	public void startDraw(com.earthview.world.display.Idisplay2d display, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		startDraw_IDisplay2D_ISymbol(this.nativeObject.pointer, displayParamValue, pSymbolParamValue);
	}
	native private void draw_ev_real64_ev_real64_ev_int32_ev_int32(long pNativeObject, long dx, long dy, long pSegments, int nCount);
	public void draw(DoublePointer dx, DoublePointer dy, IntegerPointer pSegments, int nCount)
	{
		long dxParamValue = (dx == null ? 0L : dx.nativeObject.pointer);
		long dyParamValue = (dy == null ? 0L : dy.nativeObject.pointer);
		long pSegmentsParamValue = (pSegments == null ? 0L : pSegments.nativeObject.pointer);
		int nCountParamValue = nCount;
		draw_ev_real64_ev_real64_ev_int32_ev_int32(this.nativeObject.pointer, dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue);
	}
	native private void endDraw_void(long pNativeObject);
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	public RichTextRender(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RichTextRender(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RichTextRender fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RichTextRender obj = null;
 		if(baseObj instanceof RichTextRender)
		{
			obj = (RichTextRender)baseObj;
		} else {
			obj = new RichTextRender(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRichTextRender");
			obj.increaseCast();
		}

		return obj;
	}
}
