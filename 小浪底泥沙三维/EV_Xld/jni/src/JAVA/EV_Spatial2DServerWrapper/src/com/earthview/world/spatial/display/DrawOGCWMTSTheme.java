package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * wmts影像渲染器基类
 */
public class DrawOGCWMTSTheme extends com.earthview.world.spatial.display.DrawServerLayerTheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawOGCWMTSTheme", new DrawOGCWMTSThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawOGCWMTSThemeProxy", new DrawOGCWMTSThemeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DrawOGCWMTSTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawOGCWMTSThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.DrawOGCWMTSTheme".equals(this.getClass().getName()))
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

	native private boolean draw_EVString_EVString_IEnvelope_ISpatialReference(long pNativeObject, String datasetName, String datasourceName, long pEnv, long pSRS);
	/**
	 * 渲染（仅使用缓存的情况）
	 * @param datasetName 数据集名字
	 */
	public boolean draw(String datasetName, String datasourceName, com.earthview.world.spatial.geometry.Ienvelope pEnv, com.earthview.world.spatial.geometry.Ispatialreference pSRS)
	{
		String datasetNameParamValue = datasetName;
		String datasourceNameParamValue = datasourceName;
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		long pSRSParamValue = (pSRS == null ? 0L : pSRS.nativeObject.pointer);
		boolean returnValue = draw_EVString_EVString_IEnvelope_ISpatialReference(this.nativeObject.pointer, datasetNameParamValue, datasourceNameParamValue, pEnvParamValue, pSRSParamValue);
		return returnValue;
	}
	native private boolean draw_EVString_EVString_IEnvelope_ISpatialReference_NoVirtual(long pNativeObject, String datasetName, String datasourceName, long pEnv, long pSRS);
	protected boolean draw_NoVirtual(String datasetName, String datasourceName, com.earthview.world.spatial.geometry.Ienvelope pEnv, com.earthview.world.spatial.geometry.Ispatialreference pSRS)
	{
		String datasetNameParamValue = datasetName;
		String datasourceNameParamValue = datasourceName;
		long pEnvParamValue = (pEnv == null ? 0L : pEnv.nativeObject.pointer);
		long pSRSParamValue = (pSRS == null ? 0L : pSRS.nativeObject.pointer);
		boolean returnValue = draw_EVString_EVString_IEnvelope_ISpatialReference_NoVirtual(this.nativeObject.pointer, datasetNameParamValue, datasourceNameParamValue, pEnvParamValue, pSRSParamValue);
		return returnValue;
	}

	native private void drawTile_RequestPara(long pNativeObject, long req);
	public void drawTile(com.earthview.world.core.WorkQueue.RequestPara req)
	{
		long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
		drawTile_RequestPara(this.nativeObject.pointer, reqParamValue);
	}
	native private void drawTile_RequestPara_NoVirtual(long pNativeObject, long req);
	protected void drawTile_NoVirtual(com.earthview.world.core.WorkQueue.RequestPara req)
	{
		long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
		drawTile_RequestPara_NoVirtual(this.nativeObject.pointer, reqParamValue);
	}

	public DrawOGCWMTSTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawOGCWMTSTheme(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DrawOGCWMTSTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawOGCWMTSTheme obj = null;
 		if(baseObj instanceof DrawOGCWMTSTheme)
		{
			obj = (DrawOGCWMTSTheme)baseObj;
		} else {
			obj = new DrawOGCWMTSTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawOGCWMTSTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
