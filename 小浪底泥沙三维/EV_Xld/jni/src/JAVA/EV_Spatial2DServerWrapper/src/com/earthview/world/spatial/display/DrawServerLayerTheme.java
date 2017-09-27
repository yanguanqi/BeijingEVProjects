package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 服务器图层渲染器基类
 */
public class DrawServerLayerTheme extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerTheme", new DrawServerLayerThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawServerLayerThemeProxy", new DrawServerLayerThemeClassFactory());
	}

	protected  void startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_callback(long ref_display, short transparent, long ref_pTheme, int mode)
	{
		com.earthview.world.spatial.display.Ispatialdisplay ref_displayParamValue = (ref_display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_displayParamValue != null)
		{
		ref_displayParamValue.setDelegate(true);
		ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		IClassFactory ref_displayParamValueClassFactory = GlobalClassFactoryMap.get(ref_displayParamValue.getCppInstanceTypeName());
		if (ref_displayParamValueClassFactory != null)
		{
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)ref_displayParamValueClassFactory.create();
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		}
		}
		short transparentParamValue = transparent;
		com.earthview.world.spatial.theme.Itheme ref_pThemeParamValue = (ref_pTheme == 0L ? null : new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pThemeParamValue != null)
		{
		ref_pThemeParamValue.setDelegate(true);
		ref_pThemeParamValue.setInstancePointer(new InstancePointer(ref_pTheme));
		IClassFactory ref_pThemeParamValueClassFactory = GlobalClassFactoryMap.get(ref_pThemeParamValue.getCppInstanceTypeName());
		if (ref_pThemeParamValueClassFactory != null)
		{
			ref_pThemeParamValue.setDelegate(true);
			ref_pThemeParamValue = (com.earthview.world.spatial.theme.Itheme)ref_pThemeParamValueClassFactory.create();
			ref_pThemeParamValue.setDelegate(true);
			ref_pThemeParamValue.setInstancePointer(new InstancePointer(ref_pTheme));
		}
		}
		int modeParamValue = mode;
		startDraw(ref_displayParamValue, transparentParamValue, ref_pThemeParamValue, modeParamValue);
	}

	native private void startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32(long pNativeObject, long ref_display, short transparent, long ref_pTheme, int mode);
	/**
	 * 开始渲染
	 * @param display 设备
	 * @param pSymbol 渲染符号
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, short transparent, com.earthview.world.spatial.theme.Itheme ref_pTheme, int mode)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		short transparentParamValue = transparent;
		long ref_pThemeParamValue = (ref_pTheme == null ? 0L : ref_pTheme.nativeObject.pointer);
		int modeParamValue = mode;
		startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32(this.nativeObject.pointer, ref_displayParamValue, transparentParamValue, ref_pThemeParamValue, modeParamValue);
	}
	native private void startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_NoVirtual(long pNativeObject, long ref_display, short transparent, long ref_pTheme, int mode);
	protected void startDraw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay ref_display, short transparent, com.earthview.world.spatial.theme.Itheme ref_pTheme, int mode)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		short transparentParamValue = transparent;
		long ref_pThemeParamValue = (ref_pTheme == null ? 0L : ref_pTheme.nativeObject.pointer);
		int modeParamValue = mode;
		startDraw_ISpatialDisplay_ev_uint8_ITheme_ev_int32_NoVirtual(this.nativeObject.pointer, ref_displayParamValue, transparentParamValue, ref_pThemeParamValue, modeParamValue);
	}

	protected  void endDraw_void_callback()
	{
		endDraw();
	}

	native private void endDraw_void(long pNativeObject);
	/**
	 * 停止渲染
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

	protected  boolean draw_IDataset_callback(long pDataset)
	{
		com.earthview.world.spatial.geodataset.Idataset pDatasetParamValue = (pDataset == 0L ? null : new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDatasetParamValue != null)
		{
		pDatasetParamValue.setDelegate(true);
		pDatasetParamValue.setInstancePointer(new InstancePointer(pDataset));
		IClassFactory pDatasetParamValueClassFactory = GlobalClassFactoryMap.get(pDatasetParamValue.getCppInstanceTypeName());
		if (pDatasetParamValueClassFactory != null)
		{
			pDatasetParamValue.setDelegate(true);
			pDatasetParamValue = (com.earthview.world.spatial.geodataset.Idataset)pDatasetParamValueClassFactory.create();
			pDatasetParamValue.setDelegate(true);
			pDatasetParamValue.setInstancePointer(new InstancePointer(pDataset));
		}
		}
		boolean returnValue = draw(pDatasetParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean draw_IDataset(long pNativeObject, long pDataset);
	/**
	 * 渲染
	 * @param pDataset 数据集
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

	protected  boolean draw_EVString_EVString_IEnvelope_ISpatialReference_callback(String datasetName, String datasourceName, long pEnv, long pSRS)
	{
		String datasetNameParamValue = datasetName;
		String datasourceNameParamValue = datasourceName;
		com.earthview.world.spatial.geometry.Ienvelope pEnvParamValue = (pEnv == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvParamValue != null)
		{
		pEnvParamValue.setDelegate(true);
		pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		IClassFactory pEnvParamValueClassFactory = GlobalClassFactoryMap.get(pEnvParamValue.getCppInstanceTypeName());
		if (pEnvParamValueClassFactory != null)
		{
			pEnvParamValue.setDelegate(true);
			pEnvParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvParamValueClassFactory.create();
			pEnvParamValue.setDelegate(true);
			pEnvParamValue.setInstancePointer(new InstancePointer(pEnv));
		}
		}
		com.earthview.world.spatial.geometry.Ispatialreference pSRSParamValue = (pSRS == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSRSParamValue != null)
		{
		pSRSParamValue.setDelegate(true);
		pSRSParamValue.setInstancePointer(new InstancePointer(pSRS));
		IClassFactory pSRSParamValueClassFactory = GlobalClassFactoryMap.get(pSRSParamValue.getCppInstanceTypeName());
		if (pSRSParamValueClassFactory != null)
		{
			pSRSParamValue.setDelegate(true);
			pSRSParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)pSRSParamValueClassFactory.create();
			pSRSParamValue.setDelegate(true);
			pSRSParamValue.setInstancePointer(new InstancePointer(pSRS));
		}
		}
		boolean returnValue = draw(datasetNameParamValue, datasourceNameParamValue, pEnvParamValue, pSRSParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean draw_EVString_EVString_IEnvelope_ISpatialReference(long pNativeObject, String datasetName, String datasourceName, long pEnv, long pSRS);
	/**
	 * 渲染（仅使用缓存的情况）
	 * @param pGeometry 数据集名字
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

	protected  void drawTile_RequestPara_callback(long req)
	{
		com.earthview.world.core.WorkQueue.RequestPara reqParamValue = (req == 0L ? null : new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate));
		if(reqParamValue != null)
		{
		reqParamValue.setDelegate(true);
		reqParamValue.setInstancePointer(new InstancePointer(req));
		IClassFactory reqParamValueClassFactory = GlobalClassFactoryMap.get(reqParamValue.getCppInstanceTypeName());
		if (reqParamValueClassFactory != null)
		{
			reqParamValue.setDelegate(true);
			reqParamValue = (com.earthview.world.core.WorkQueue.RequestPara)reqParamValueClassFactory.create();
			reqParamValue.setDelegate(true);
			reqParamValue.setInstancePointer(new InstancePointer(req));
		}
		}
		drawTile(reqParamValue);
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

	public DrawServerLayerTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawServerLayerTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static DrawServerLayerTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawServerLayerTheme obj = null;
 		if(baseObj instanceof DrawServerLayerTheme)
		{
			obj = (DrawServerLayerTheme)baseObj;
		} else {
			obj = new DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawServerLayerTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
