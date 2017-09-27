package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用于通知选择集改变，三维分析结束，实时经纬度的监听类
 */
public class GlobeControlListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeControlListener", new GlobeControlListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeControlListenerProxy", new GlobeControlListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeControlListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGlobeControlListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeControlListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onGlobeSelectionChanged_CGlobeSelection_callback(long globeSelection)
	{
		com.earthview.world.spatial3d.GlobeSelection globeSelectionParamValue = (globeSelection == 0L ? null : new com.earthview.world.spatial3d.GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeSelectionParamValue != null)
		{
		globeSelectionParamValue.setDelegate(true);
		globeSelectionParamValue.setInstancePointer(new InstancePointer(globeSelection));
		IClassFactory globeSelectionParamValueClassFactory = GlobalClassFactoryMap.get(globeSelectionParamValue.getCppInstanceTypeName());
		if (globeSelectionParamValueClassFactory != null)
		{
			globeSelectionParamValue.setDelegate(true);
			globeSelectionParamValue = (com.earthview.world.spatial3d.GlobeSelection)globeSelectionParamValueClassFactory.create();
			globeSelectionParamValue.setDelegate(true);
			globeSelectionParamValue.setInstancePointer(new InstancePointer(globeSelection));
		}
		}
		onGlobeSelectionChanged(globeSelectionParamValue);
	}

	native private void onGlobeSelectionChanged_CGlobeSelection(long pNativeObject, long globeSelection);
	/**
	 * 选择集变化通知函数
	 * @param globeSelection 变化之后的选择集
	 */
	public void onGlobeSelectionChanged(com.earthview.world.spatial3d.GlobeSelection globeSelection)
	{
		long globeSelectionParamValue = (globeSelection == null ? 0L : globeSelection.nativeObject.pointer);
		onGlobeSelectionChanged_CGlobeSelection(this.nativeObject.pointer, globeSelectionParamValue);
	}
	native private void onGlobeSelectionChanged_CGlobeSelection_NoVirtual(long pNativeObject, long globeSelection);
	protected void onGlobeSelectionChanged_NoVirtual(com.earthview.world.spatial3d.GlobeSelection globeSelection)
	{
		long globeSelectionParamValue = (globeSelection == null ? 0L : globeSelection.nativeObject.pointer);
		onGlobeSelectionChanged_CGlobeSelection_NoVirtual(this.nativeObject.pointer, globeSelectionParamValue);
	}

	protected  void onRaySceneQueryResult_RaySceneQueryResult_callback(long result)
	{
		com.earthview.world.graphic.RaySceneQueryResult resultParamValue = new com.earthview.world.graphic.RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		resultParamValue.setDelegate(true);
		resultParamValue.setInstancePointer(new InstancePointer(result));
		IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
		if (resultParamValueClassFactory != null)
		{
			resultParamValue.setDelegate(true);
			resultParamValue = (com.earthview.world.graphic.RaySceneQueryResult)resultParamValueClassFactory.create();
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
		}
		onRaySceneQueryResult(resultParamValue);
	}

	native private void onRaySceneQueryResult_RaySceneQueryResult(long pNativeObject, long result);
	/**
	 * 射线查询通知函数
	 * @param result 射线查询结果
	 */
	public void onRaySceneQueryResult(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		onRaySceneQueryResult_RaySceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void onRaySceneQueryResult_RaySceneQueryResult_NoVirtual(long pNativeObject, long result);
	protected void onRaySceneQueryResult_NoVirtual(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		onRaySceneQueryResult_RaySceneQueryResult_NoVirtual(this.nativeObject.pointer, resultParamValue);
	}

	protected  void onAnalysisStart_ITool_callback(long tool)
	{
		com.earthview.world.spatial.systemui.Itool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial.systemui.Itool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onAnalysisStart(toolParamValue);
	}

	native private void onAnalysisStart_ITool(long pNativeObject, long tool);
	/**
	 * 三维分析开始前的通知事件
	 * @param tool 三维分析工具指针（IAnalysisTool类型）
	 */
	public void onAnalysisStart(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisStart_ITool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onAnalysisStart_ITool_NoVirtual(long pNativeObject, long tool);
	protected void onAnalysisStart_NoVirtual(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisStart_ITool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onAnalysisEnd_ITool_callback(long tool)
	{
		com.earthview.world.spatial.systemui.Itool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial.systemui.Itool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onAnalysisEnd(toolParamValue);
	}

	native private void onAnalysisEnd_ITool(long pNativeObject, long tool);
	/**
	 * 三维分析结束后的通知事件
	 * @param tool 三维分析工具指针（IAnalysisTool类型）
	 */
	public void onAnalysisEnd(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisEnd_ITool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onAnalysisEnd_ITool_NoVirtual(long pNativeObject, long tool);
	protected void onAnalysisEnd_NoVirtual(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisEnd_ITool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onMousePosition_Real_Real_Real_ev_bool_callback(double lat, double lon, double alt, boolean isValid)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		boolean isValidParamValue = isValid;
		onMousePosition(latParamValue, lonParamValue, altParamValue, isValidParamValue);
	}

	native private void onMousePosition_Real_Real_Real_ev_bool(long pNativeObject, double lat, double lon, double alt, boolean isValid);
	/**
	 * 取得鼠标在球上实时位置
	 * @param lat 纬度
	 * @param lon 经度
	 * @param alt 地形高度
	 * @param isValid true代表与球相交，值有效
	 */
	public void onMousePosition(double lat, double lon, double alt, boolean isValid)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		boolean isValidParamValue = isValid;
		onMousePosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, isValidParamValue);
	}
	native private void onMousePosition_Real_Real_Real_ev_bool_NoVirtual(long pNativeObject, double lat, double lon, double alt, boolean isValid);
	protected void onMousePosition_NoVirtual(double lat, double lon, double alt, boolean isValid)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		boolean isValidParamValue = isValid;
		onMousePosition_Real_Real_Real_ev_bool_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, altParamValue, isValidParamValue);
	}

	protected  void onFlyFinished_CGlobeControl_callback(long globeControl)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		onFlyFinished(globeControlParamValue);
	}

	native private void onFlyFinished_CGlobeControl(long pNativeObject, long globeControl);
	/**
	 * 飞行播放自动结束触发的事件
	 */
	public void onFlyFinished(com.earthview.world.spatial3d.controls.GlobeControl globeControl)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		onFlyFinished_CGlobeControl(this.nativeObject.pointer, globeControlParamValue);
	}
	native private void onFlyFinished_CGlobeControl_NoVirtual(long pNativeObject, long globeControl);
	protected void onFlyFinished_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		onFlyFinished_CGlobeControl_NoVirtual(this.nativeObject.pointer, globeControlParamValue);
	}

	protected  void onCurrentToolChanged_CGlobeControl_ITool_ITool_callback(long globeControl, long pOldTool, long pNewTool)
	{
		com.earthview.world.spatial3d.controls.GlobeControl globeControlParamValue = (globeControl == 0L ? null : new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeControlParamValue != null)
		{
		globeControlParamValue.setDelegate(true);
		globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		IClassFactory globeControlParamValueClassFactory = GlobalClassFactoryMap.get(globeControlParamValue.getCppInstanceTypeName());
		if (globeControlParamValueClassFactory != null)
		{
			globeControlParamValue.setDelegate(true);
			globeControlParamValue = (com.earthview.world.spatial3d.controls.GlobeControl)globeControlParamValueClassFactory.create();
			globeControlParamValue.setDelegate(true);
			globeControlParamValue.setInstancePointer(new InstancePointer(globeControl));
		}
		}
		com.earthview.world.spatial.systemui.Itool pOldToolParamValue = (pOldTool == 0L ? null : new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOldToolParamValue != null)
		{
		pOldToolParamValue.setDelegate(true);
		pOldToolParamValue.setInstancePointer(new InstancePointer(pOldTool));
		IClassFactory pOldToolParamValueClassFactory = GlobalClassFactoryMap.get(pOldToolParamValue.getCppInstanceTypeName());
		if (pOldToolParamValueClassFactory != null)
		{
			pOldToolParamValue.setDelegate(true);
			pOldToolParamValue = (com.earthview.world.spatial.systemui.Itool)pOldToolParamValueClassFactory.create();
			pOldToolParamValue.setDelegate(true);
			pOldToolParamValue.setInstancePointer(new InstancePointer(pOldTool));
		}
		}
		com.earthview.world.spatial.systemui.Itool pNewToolParamValue = (pNewTool == 0L ? null : new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewToolParamValue != null)
		{
		pNewToolParamValue.setDelegate(true);
		pNewToolParamValue.setInstancePointer(new InstancePointer(pNewTool));
		IClassFactory pNewToolParamValueClassFactory = GlobalClassFactoryMap.get(pNewToolParamValue.getCppInstanceTypeName());
		if (pNewToolParamValueClassFactory != null)
		{
			pNewToolParamValue.setDelegate(true);
			pNewToolParamValue = (com.earthview.world.spatial.systemui.Itool)pNewToolParamValueClassFactory.create();
			pNewToolParamValue.setDelegate(true);
			pNewToolParamValue.setInstancePointer(new InstancePointer(pNewTool));
		}
		}
		onCurrentToolChanged(globeControlParamValue, pOldToolParamValue, pNewToolParamValue);
	}

	native private void onCurrentToolChanged_CGlobeControl_ITool_ITool(long pNativeObject, long globeControl, long pOldTool, long pNewTool);
	/**
	 * 当前Tool改变的事件
	 * @param globeControl 控件
	 * @param pOldTool 改变之前的Tool
	 * @param pNewTool 改变之后的Tool
	 */
	public void onCurrentToolChanged(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.spatial.systemui.Itool pOldTool, com.earthview.world.spatial.systemui.Itool pNewTool)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long pOldToolParamValue = (pOldTool == null ? 0L : pOldTool.nativeObject.pointer);
		long pNewToolParamValue = (pNewTool == null ? 0L : pNewTool.nativeObject.pointer);
		onCurrentToolChanged_CGlobeControl_ITool_ITool(this.nativeObject.pointer, globeControlParamValue, pOldToolParamValue, pNewToolParamValue);
	}
	native private void onCurrentToolChanged_CGlobeControl_ITool_ITool_NoVirtual(long pNativeObject, long globeControl, long pOldTool, long pNewTool);
	protected void onCurrentToolChanged_NoVirtual(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.spatial.systemui.Itool pOldTool, com.earthview.world.spatial.systemui.Itool pNewTool)
	{
		long globeControlParamValue = (globeControl == null ? 0L : globeControl.nativeObject.pointer);
		long pOldToolParamValue = (pOldTool == null ? 0L : pOldTool.nativeObject.pointer);
		long pNewToolParamValue = (pNewTool == null ? 0L : pNewTool.nativeObject.pointer);
		onCurrentToolChanged_CGlobeControl_ITool_ITool_NoVirtual(this.nativeObject.pointer, globeControlParamValue, pOldToolParamValue, pNewToolParamValue);
	}

	public GlobeControlListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeControlListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onGlobeSelectionChanged_CGlobeSelection(long pNativeObject, String method);
	native protected void register_onRaySceneQueryResult_RaySceneQueryResult(long pNativeObject, String method);
	native protected void register_onAnalysisStart_ITool(long pNativeObject, String method);
	native protected void register_onAnalysisEnd_ITool(long pNativeObject, String method);
	native protected void register_onMousePosition_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_onFlyFinished_CGlobeControl(long pNativeObject, String method);
	native protected void register_onCurrentToolChanged_CGlobeControl_ITool_ITool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onGlobeSelectionChanged_CGlobeSelection(this.nativeObject.pointer, "onGlobeSelectionChanged_CGlobeSelection_callback");
			this.register_onRaySceneQueryResult_RaySceneQueryResult(this.nativeObject.pointer, "onRaySceneQueryResult_RaySceneQueryResult_callback");
			this.register_onAnalysisStart_ITool(this.nativeObject.pointer, "onAnalysisStart_ITool_callback");
			this.register_onAnalysisEnd_ITool(this.nativeObject.pointer, "onAnalysisEnd_ITool_callback");
			this.register_onMousePosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, "onMousePosition_Real_Real_Real_ev_bool_callback");
			this.register_onFlyFinished_CGlobeControl(this.nativeObject.pointer, "onFlyFinished_CGlobeControl_callback");
			this.register_onCurrentToolChanged_CGlobeControl_ITool_ITool(this.nativeObject.pointer, "onCurrentToolChanged_CGlobeControl_ITool_ITool_callback");
		}
	}
	
	public static GlobeControlListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeControlListener obj = null;
 		if(baseObj instanceof GlobeControlListener)
		{
			obj = (GlobeControlListener)baseObj;
		} else {
			obj = new GlobeControlListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeControlListener");
			obj.increaseCast();
		}

		return obj;
	}
}
