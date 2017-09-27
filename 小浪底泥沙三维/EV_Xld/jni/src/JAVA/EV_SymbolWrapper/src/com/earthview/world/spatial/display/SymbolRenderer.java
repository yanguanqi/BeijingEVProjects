package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 符号渲染类提供方法如下：虚方法：绘制前设置、绘制符号、绘制完成、绘制图例
 */
public class SymbolRenderer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSymbolRenderer", new SymbolRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSymbolRendererProxy", new SymbolRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public SymbolRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSymbolRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SymbolRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void startDraw_IDisplay2D_ISymbol_callback(long ref_display, long ref_pSymbol)
	{
		com.earthview.world.display.Idisplay2d ref_displayParamValue = (ref_display == 0L ? null : new com.earthview.world.display.Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_displayParamValue != null)
		{
		ref_displayParamValue.setDelegate(true);
		ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		IClassFactory ref_displayParamValueClassFactory = GlobalClassFactoryMap.get(ref_displayParamValue.getCppInstanceTypeName());
		if (ref_displayParamValueClassFactory != null)
		{
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue = (com.earthview.world.display.Idisplay2d)ref_displayParamValueClassFactory.create();
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		}
		}
		com.earthview.world.spatial.display.Isymbol ref_pSymbolParamValue = (ref_pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pSymbolParamValue != null)
		{
		ref_pSymbolParamValue.setDelegate(true);
		ref_pSymbolParamValue.setInstancePointer(new InstancePointer(ref_pSymbol));
		IClassFactory ref_pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(ref_pSymbolParamValue.getCppInstanceTypeName());
		if (ref_pSymbolParamValueClassFactory != null)
		{
			ref_pSymbolParamValue.setDelegate(true);
			ref_pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)ref_pSymbolParamValueClassFactory.create();
			ref_pSymbolParamValue.setDelegate(true);
			ref_pSymbolParamValue.setInstancePointer(new InstancePointer(ref_pSymbol));
		}
		}
		startDraw(ref_displayParamValue, ref_pSymbolParamValue);
	}

	native private void startDraw_IDisplay2D_ISymbol(long pNativeObject, long ref_display, long ref_pSymbol);
	/**
	 * 绘制前设置
	 * @param pDevice 设备
	 * @param pSymbol 符号
	 */
	public void startDraw(com.earthview.world.display.Idisplay2d ref_display, com.earthview.world.spatial.display.Isymbol ref_pSymbol)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long ref_pSymbolParamValue = (ref_pSymbol == null ? 0L : ref_pSymbol.nativeObject.pointer);
		startDraw_IDisplay2D_ISymbol(this.nativeObject.pointer, ref_displayParamValue, ref_pSymbolParamValue);
	}
	native private void startDraw_IDisplay2D_ISymbol_NoVirtual(long pNativeObject, long ref_display, long ref_pSymbol);
	protected void startDraw_NoVirtual(com.earthview.world.display.Idisplay2d ref_display, com.earthview.world.spatial.display.Isymbol ref_pSymbol)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long ref_pSymbolParamValue = (ref_pSymbol == null ? 0L : ref_pSymbol.nativeObject.pointer);
		startDraw_IDisplay2D_ISymbol_NoVirtual(this.nativeObject.pointer, ref_displayParamValue, ref_pSymbolParamValue);
	}

	protected  void draw_ev_real64_ev_real64_ev_int32_ev_int32_callback(long dx, long dy, long pSegments, int nCount)
	{
		DoublePointer dxParamValue = (dx == 0L ? null : new DoublePointer(new InstancePointer(dx)));
		DoublePointer dyParamValue = (dy == 0L ? null : new DoublePointer(new InstancePointer(dy)));
		IntegerPointer pSegmentsParamValue = (pSegments == 0L ? null : new IntegerPointer(new InstancePointer(pSegments)));
		int nCountParamValue = nCount;
		draw(dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue);
	}

	native private void draw_ev_real64_ev_real64_ev_int32_ev_int32(long pNativeObject, long dx, long dy, long pSegments, int nCount);
	/**
	 * 绘制符号
	 * @param dx x坐标数组
	 * @param dy y坐标数组
	 * @param pSegments 分割数组
	 * @param nCount 分割数目
	 */
	public void draw(DoublePointer dx, DoublePointer dy, IntegerPointer pSegments, int nCount)
	{
		long dxParamValue = (dx == null ? 0L : dx.nativeObject.pointer);
		long dyParamValue = (dy == null ? 0L : dy.nativeObject.pointer);
		long pSegmentsParamValue = (pSegments == null ? 0L : pSegments.nativeObject.pointer);
		int nCountParamValue = nCount;
		draw_ev_real64_ev_real64_ev_int32_ev_int32(this.nativeObject.pointer, dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue);
	}
	native private void draw_ev_real64_ev_real64_ev_int32_ev_int32_NoVirtual(long pNativeObject, long dx, long dy, long pSegments, int nCount);
	protected void draw_NoVirtual(DoublePointer dx, DoublePointer dy, IntegerPointer pSegments, int nCount)
	{
		long dxParamValue = (dx == null ? 0L : dx.nativeObject.pointer);
		long dyParamValue = (dy == null ? 0L : dy.nativeObject.pointer);
		long pSegmentsParamValue = (pSegments == null ? 0L : pSegments.nativeObject.pointer);
		int nCountParamValue = nCount;
		draw_ev_real64_ev_real64_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue);
	}

	protected  void draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback(long dx, long dy, long pSegments, int nCount, boolean bUseOutline)
	{
		DoublePointer dxParamValue = (dx == 0L ? null : new DoublePointer(new InstancePointer(dx)));
		DoublePointer dyParamValue = (dy == 0L ? null : new DoublePointer(new InstancePointer(dy)));
		IntegerPointer pSegmentsParamValue = (pSegments == 0L ? null : new IntegerPointer(new InstancePointer(pSegments)));
		int nCountParamValue = nCount;
		boolean bUseOutlineParamValue = bUseOutline;
		draw(dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue, bUseOutlineParamValue);
	}

	native private void draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(long pNativeObject, long dx, long dy, long pSegments, int nCount, boolean bUseOutline);
	/**
	 * 绘制符号
	 * @param dx x坐标数组
	 * @param dy y坐标数组
	 * @param pSegments 分割数组
	 * @param nCount 分割数目
	 * @param bUseOutline 是否使用外边框
	 */
	public void draw(DoublePointer dx, DoublePointer dy, IntegerPointer pSegments, int nCount, boolean bUseOutline)
	{
		long dxParamValue = (dx == null ? 0L : dx.nativeObject.pointer);
		long dyParamValue = (dy == null ? 0L : dy.nativeObject.pointer);
		long pSegmentsParamValue = (pSegments == null ? 0L : pSegments.nativeObject.pointer);
		int nCountParamValue = nCount;
		boolean bUseOutlineParamValue = bUseOutline;
		draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue, bUseOutlineParamValue);
	}
	native private void draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_NoVirtual(long pNativeObject, long dx, long dy, long pSegments, int nCount, boolean bUseOutline);
	protected void draw_NoVirtual(DoublePointer dx, DoublePointer dy, IntegerPointer pSegments, int nCount, boolean bUseOutline)
	{
		long dxParamValue = (dx == null ? 0L : dx.nativeObject.pointer);
		long dyParamValue = (dy == null ? 0L : dy.nativeObject.pointer);
		long pSegmentsParamValue = (pSegments == null ? 0L : pSegments.nativeObject.pointer);
		int nCountParamValue = nCount;
		boolean bUseOutlineParamValue = bUseOutline;
		draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, dxParamValue, dyParamValue, pSegmentsParamValue, nCountParamValue, bUseOutlineParamValue);
	}

	protected  void drawPath_CDataPath_callback(long pPath)
	{
		com.earthview.world.display.DataPath pPathParamValue = (pPath == 0L ? null : new com.earthview.world.display.DataPath(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPathParamValue != null)
		{
		pPathParamValue.setDelegate(true);
		pPathParamValue.setInstancePointer(new InstancePointer(pPath));
		IClassFactory pPathParamValueClassFactory = GlobalClassFactoryMap.get(pPathParamValue.getCppInstanceTypeName());
		if (pPathParamValueClassFactory != null)
		{
			pPathParamValue.setDelegate(true);
			pPathParamValue = (com.earthview.world.display.DataPath)pPathParamValueClassFactory.create();
			pPathParamValue.setDelegate(true);
			pPathParamValue.setInstancePointer(new InstancePointer(pPath));
		}
		}
		drawPath(pPathParamValue);
	}

	native private void drawPath_CDataPath(long pNativeObject, long pPath);
	public void drawPath(com.earthview.world.display.DataPath pPath)
	{
		long pPathParamValue = (pPath == null ? 0L : pPath.nativeObject.pointer);
		drawPath_CDataPath(this.nativeObject.pointer, pPathParamValue);
	}
	native private void drawPath_CDataPath_NoVirtual(long pNativeObject, long pPath);
	protected void drawPath_NoVirtual(com.earthview.world.display.DataPath pPath)
	{
		long pPathParamValue = (pPath == null ? 0L : pPath.nativeObject.pointer);
		drawPath_CDataPath_NoVirtual(this.nativeObject.pointer, pPathParamValue);
	}

	protected  void drawPath_CDataPath_ev_bool_callback(long pPath, boolean bUseOutline)
	{
		com.earthview.world.display.DataPath pPathParamValue = (pPath == 0L ? null : new com.earthview.world.display.DataPath(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPathParamValue != null)
		{
		pPathParamValue.setDelegate(true);
		pPathParamValue.setInstancePointer(new InstancePointer(pPath));
		IClassFactory pPathParamValueClassFactory = GlobalClassFactoryMap.get(pPathParamValue.getCppInstanceTypeName());
		if (pPathParamValueClassFactory != null)
		{
			pPathParamValue.setDelegate(true);
			pPathParamValue = (com.earthview.world.display.DataPath)pPathParamValueClassFactory.create();
			pPathParamValue.setDelegate(true);
			pPathParamValue.setInstancePointer(new InstancePointer(pPath));
		}
		}
		boolean bUseOutlineParamValue = bUseOutline;
		drawPath(pPathParamValue, bUseOutlineParamValue);
	}

	native private void drawPath_CDataPath_ev_bool(long pNativeObject, long pPath, boolean bUseOutline);
	public void drawPath(com.earthview.world.display.DataPath pPath, boolean bUseOutline)
	{
		long pPathParamValue = (pPath == null ? 0L : pPath.nativeObject.pointer);
		boolean bUseOutlineParamValue = bUseOutline;
		drawPath_CDataPath_ev_bool(this.nativeObject.pointer, pPathParamValue, bUseOutlineParamValue);
	}
	native private void drawPath_CDataPath_ev_bool_NoVirtual(long pNativeObject, long pPath, boolean bUseOutline);
	protected void drawPath_NoVirtual(com.earthview.world.display.DataPath pPath, boolean bUseOutline)
	{
		long pPathParamValue = (pPath == null ? 0L : pPath.nativeObject.pointer);
		boolean bUseOutlineParamValue = bUseOutline;
		drawPath_CDataPath_ev_bool_NoVirtual(this.nativeObject.pointer, pPathParamValue, bUseOutlineParamValue);
	}

	protected  void endDraw_void_callback()
	{
		endDraw();
	}

	native private void endDraw_void(long pNativeObject);
	/**
	 * 绘制完成
	 * @param  
	 */
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	native private void endDraw_void_NoVirtual(long pNativeObject);
	protected void endDraw_NoVirtual()
	{
		endDraw_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback(double left, double top, double width, double height)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double widthParamValue = width;
		double heightParamValue = height;
		drawLegend(leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}

	native private void drawLegend_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double left, double top, double width, double height);
	/**
	 * 绘制图例
	 * @param left 距左边距离
	 * @param top 距上部距离
	 * @param width 图例宽度
	 * @param height 图例高度
	 */
	public void drawLegend(double left, double top, double width, double height)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double widthParamValue = width;
		double heightParamValue = height;
		drawLegend_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}
	native private void drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double left, double top, double width, double height);
	protected void drawLegend_NoVirtual(double left, double top, double width, double height)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double widthParamValue = width;
		double heightParamValue = height;
		drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}

	public SymbolRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_startDraw_IDisplay2D_ISymbol(long pNativeObject, String method);
	native protected void register_draw_ev_real64_ev_real64_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register_drawPath_CDataPath(long pNativeObject, String method);
	native protected void register_drawPath_CDataPath_ev_bool(long pNativeObject, String method);
	native protected void register_endDraw_void(long pNativeObject, String method);
	native protected void register_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_startDraw_IDisplay2D_ISymbol(this.nativeObject.pointer, "startDraw_IDisplay2D_ISymbol_callback");
			this.register_draw_ev_real64_ev_real64_ev_int32_ev_int32(this.nativeObject.pointer, "draw_ev_real64_ev_real64_ev_int32_ev_int32_callback");
			this.register_draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool(this.nativeObject.pointer, "draw_ev_real64_ev_real64_ev_int32_ev_int32_ev_bool_callback");
			this.register_drawPath_CDataPath(this.nativeObject.pointer, "drawPath_CDataPath_callback");
			this.register_drawPath_CDataPath_ev_bool(this.nativeObject.pointer, "drawPath_CDataPath_ev_bool_callback");
			this.register_endDraw_void(this.nativeObject.pointer, "endDraw_void_callback");
			this.register_drawLegend_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "drawLegend_ev_real64_ev_real64_ev_real64_ev_real64_callback");
		}
	}
	
	public static SymbolRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolRenderer obj = null;
 		if(baseObj instanceof SymbolRenderer)
		{
			obj = (SymbolRenderer)baseObj;
		} else {
			obj = new SymbolRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
