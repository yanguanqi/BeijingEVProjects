package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 辅助线渲染类，用于布局时绘图，调节坐标等
 */
public class LayoutSublineRender extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutSublineRender", new LayoutSublineRenderClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayoutSublineRender(com.earthview.world.layout.controls.LayoutControl pControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pControlPtr = new BasePointer(pControl);
		list.add("pControl", pControlPtr.get());
		Create("CLayoutSublineRender", list);
	}

	native private void drawSubline_IGeometry_ISymbol(long pNativeObject, long pGeometry, long pSymbol);
	/**
	 * 绘制辅助线
	 * @param pGeometry 辅助线的几何
	 * @param pSymbol 辅助线的风格
	 */
	public void drawSubline(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		drawSubline_IGeometry_ISymbol(this.nativeObject.pointer, pGeometryParamValue, pSymbolParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空辅助线
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public LayoutSublineRender(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutSublineRender(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayoutSublineRender fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutSublineRender obj = null;
 		if(baseObj instanceof LayoutSublineRender)
		{
			obj = (LayoutSublineRender)baseObj;
		} else {
			obj = new LayoutSublineRender(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutSublineRender");
			obj.increaseCast();
		}

		return obj;
	}
}
