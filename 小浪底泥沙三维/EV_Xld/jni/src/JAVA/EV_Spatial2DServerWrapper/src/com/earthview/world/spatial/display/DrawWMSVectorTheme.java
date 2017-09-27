package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * evwms地图渲染器基类
 */
public class DrawWMSVectorTheme extends com.earthview.world.spatial.display.DrawServerLayerTheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawWMSVectorTheme", new DrawWMSVectorThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawWMSVectorThemeProxy", new DrawWMSVectorThemeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DrawWMSVectorTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawWMSVectorThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.DrawWMSVectorTheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean draw_IDataset(long pNativeObject, long pDataset);
	/**
	 * 渲染
	 * @param  
	 */
	public boolean draw(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		boolean returnValue = draw_IDataset(this.nativeObject.pointer, pDatasetParamValue);
		return returnValue;
	}
	native private boolean draw_IDataset_NoVirtual(long pNativeObject, long pDataset);
	protected boolean draw_NoVirtual(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		boolean returnValue = draw_IDataset_NoVirtual(this.nativeObject.pointer, pDatasetParamValue);
		return returnValue;
	}

	public DrawWMSVectorTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawWMSVectorTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 开始渲染
	 * @param display 设备
	 * @param pSymbol 渲染符号
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, short transparent, com.earthview.world.spatial.theme.Itheme ref_pTheme, int mode)
	{
		super.startDraw_NoVirtual(ref_display, transparent, ref_pTheme, mode);
	}
	/**
	 * 停止渲染
	 * @param  
	 */
	public void endDraw()
	{
		super.endDraw_NoVirtual();
	}
	/**
	 * 渲染（仅使用缓存的情况）
	 * @param pGeometry 数据集名字
	 */
	public boolean draw(String datasetName, String datasourceName, com.earthview.world.spatial.geometry.Ienvelope pEnv, com.earthview.world.spatial.geometry.Ispatialreference pSRS)
	{
		return super.draw_NoVirtual(datasetName, datasourceName, pEnv, pSRS);
	}
	public void drawTile(com.earthview.world.core.WorkQueue.RequestPara req)
	{
		super.drawTile_NoVirtual(req);
	}
	
	native protected void register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32(long pNativeObject, String method);
	native protected void register_endDraw_void(long pNativeObject, String method);
	native protected void register_draw_IDataset(long pNativeObject, String method);
	native protected void register_draw_EVString_EVString_IEnvelope_ISpatialReference(long pNativeObject, String method);
	native protected void register_drawTile_RequestPara(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32(this.nativeObject.pointer, "startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback");
			this.register_endDraw_void(this.nativeObject.pointer, "endDraw_void_callback");
			this.register_draw_IDataset(this.nativeObject.pointer, "draw_IDataset_callback");
			this.register_draw_EVString_EVString_IEnvelope_ISpatialReference(this.nativeObject.pointer, "draw_EVString_EVString_IEnvelope_ISpatialReference_callback");
			this.register_drawTile_RequestPara(this.nativeObject.pointer, "drawTile_RequestPara_callback");
		}
	}
	
	public static DrawWMSVectorTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawWMSVectorTheme obj = null;
 		if(baseObj instanceof DrawWMSVectorTheme)
		{
			obj = (DrawWMSVectorTheme)baseObj;
		} else {
			obj = new DrawWMSVectorTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawWMSVectorTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
