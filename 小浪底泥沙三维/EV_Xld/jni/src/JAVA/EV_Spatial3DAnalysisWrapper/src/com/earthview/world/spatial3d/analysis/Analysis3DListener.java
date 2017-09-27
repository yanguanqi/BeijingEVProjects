package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间分析监听类用户根据需求重写此类已达到监听效果
 */
public class Analysis3DListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DListener", new Analysis3DListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DListenerProxy", new Analysis3DListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Analysis3DListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAnalysis3DListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onAnalysisStart_IAnalysis3DTool_callback(long tool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onAnalysisStart(toolParamValue);
	}

	native private void onAnalysisStart_IAnalysis3DTool(long pNativeObject, long tool);
	/**
	 * 在启动空间分析时调用的函数
	 * @param tool 空间分析的指针
	 */
	public void onAnalysisStart(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisStart_IAnalysis3DTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onAnalysisStart_IAnalysis3DTool_NoVirtual(long pNativeObject, long tool);
	protected void onAnalysisStart_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisStart_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onAnalysisEnd_IAnalysis3DTool_callback(long tool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onAnalysisEnd(toolParamValue);
	}

	native private void onAnalysisEnd_IAnalysis3DTool(long pNativeObject, long tool);
	/**
	 * 在结束空间分析时调用的函数
	 * @param tool 空间分析的指针
	 */
	public void onAnalysisEnd(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisEnd_IAnalysis3DTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onAnalysisEnd_IAnalysis3DTool_NoVirtual(long pNativeObject, long tool);
	protected void onAnalysisEnd_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onAnalysisEnd_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onEventStart_IAnalysis3DTool_callback(long tool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onEventStart(toolParamValue);
	}

	native private void onEventStart_IAnalysis3DTool(long pNativeObject, long tool);
	/**
	 * 在触发ITool事件的时候调用的监听函数
	 * @param tool 空间分析的指针
	 */
	public void onEventStart(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onEventStart_IAnalysis3DTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onEventStart_IAnalysis3DTool_NoVirtual(long pNativeObject, long tool);
	protected void onEventStart_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onEventStart_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onEventEnd_IAnalysis3DTool_callback(long tool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onEventEnd(toolParamValue);
	}

	native private void onEventEnd_IAnalysis3DTool(long pNativeObject, long tool);
	/**
	 * 在ITool事件结束的时候调用的监听函数
	 * @param tool 空间分析的指针
	 */
	public void onEventEnd(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onEventEnd_IAnalysis3DTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onEventEnd_IAnalysis3DTool_NoVirtual(long pNativeObject, long tool);
	protected void onEventEnd_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onEventEnd_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void prepareParma_IAnalysis3DTool_callback(long tool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		prepareParma(toolParamValue);
	}

	native private void prepareParma_IAnalysis3DTool(long pNativeObject, long tool);
	/**
	 * 在开始分析前调用的函数，用于准备数据
	 * @param tool 空间分析的指针
	 */
	public void prepareParma(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		prepareParma_IAnalysis3DTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void prepareParma_IAnalysis3DTool_NoVirtual(long pNativeObject, long tool);
	protected void prepareParma_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		prepareParma_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onStepChanged_IAnalysis3DTool_EVString_callback(long tool, String info)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		String infoParamValue = info;
		onStepChanged(toolParamValue, infoParamValue);
	}

	native private void onStepChanged_IAnalysis3DTool_EVString(long pNativeObject, long tool, String info);
	/**
	 * 空间分析中步骤发生改变调用的函数
	 * @param tool 空间分析的指针
	 * @param info 给出的提示
	 */
	public void onStepChanged(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool, String info)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		String infoParamValue = info;
		onStepChanged_IAnalysis3DTool_EVString(this.nativeObject.pointer, toolParamValue, infoParamValue);
	}
	native private void onStepChanged_IAnalysis3DTool_EVString_NoVirtual(long pNativeObject, long tool, String info);
	protected void onStepChanged_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool, String info)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		String infoParamValue = info;
		onStepChanged_IAnalysis3DTool_EVString_NoVirtual(this.nativeObject.pointer, toolParamValue, infoParamValue);
	}

	protected  void onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback(long tool, long value, long count)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		long valueParamValue = value;
		long countParamValue = count;
		onProgressChanged(toolParamValue, valueParamValue, countParamValue);
	}

	native private void onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32(long pNativeObject, long tool, long value, long count);
	/**
	 * 在ITool事件结束的时候调用的监听函数
	 * @param tool 空间分析的指针
	 * @param value 当前处理的值
	 * @param count 总值
	 */
	public void onProgressChanged(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool, long value, long count)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		long valueParamValue = value;
		long countParamValue = count;
		onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32(this.nativeObject.pointer, toolParamValue, valueParamValue, countParamValue);
	}
	native private void onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long tool, long value, long count);
	protected void onProgressChanged_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool tool, long value, long count)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		long valueParamValue = value;
		long countParamValue = count;
		onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, toolParamValue, valueParamValue, countParamValue);
	}

	protected  void onMouseClicked_IAnalysis3DTool_callback(long pTool)
	{
		com.earthview.world.spatial3d.analysis.Ianalysis3dtool pToolParamValue = (pTool == 0L ? null : new com.earthview.world.spatial3d.analysis.Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate));
		if(pToolParamValue != null)
		{
		pToolParamValue.setDelegate(true);
		pToolParamValue.setInstancePointer(new InstancePointer(pTool));
		IClassFactory pToolParamValueClassFactory = GlobalClassFactoryMap.get(pToolParamValue.getCppInstanceTypeName());
		if (pToolParamValueClassFactory != null)
		{
			pToolParamValue.setDelegate(true);
			pToolParamValue = (com.earthview.world.spatial3d.analysis.Ianalysis3dtool)pToolParamValueClassFactory.create();
			pToolParamValue.setDelegate(true);
			pToolParamValue.setInstancePointer(new InstancePointer(pTool));
		}
		}
		onMouseClicked(pToolParamValue);
	}

	native private void onMouseClicked_IAnalysis3DTool(long pNativeObject, long pTool);
	/**
	 * 空间分析中鼠标点击后调用的函数
	 * @param pTool 空间分析的指针
	 */
	public void onMouseClicked(com.earthview.world.spatial3d.analysis.Ianalysis3dtool pTool)
	{
		long pToolParamValue = (pTool == null ? 0L : pTool.nativeObject.pointer);
		onMouseClicked_IAnalysis3DTool(this.nativeObject.pointer, pToolParamValue);
	}
	native private void onMouseClicked_IAnalysis3DTool_NoVirtual(long pNativeObject, long pTool);
	protected void onMouseClicked_NoVirtual(com.earthview.world.spatial3d.analysis.Ianalysis3dtool pTool)
	{
		long pToolParamValue = (pTool == null ? 0L : pTool.nativeObject.pointer);
		onMouseClicked_IAnalysis3DTool_NoVirtual(this.nativeObject.pointer, pToolParamValue);
	}

	public Analysis3DListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onAnalysisStart_IAnalysis3DTool(long pNativeObject, String method);
	native protected void register_onAnalysisEnd_IAnalysis3DTool(long pNativeObject, String method);
	native protected void register_onEventStart_IAnalysis3DTool(long pNativeObject, String method);
	native protected void register_onEventEnd_IAnalysis3DTool(long pNativeObject, String method);
	native protected void register_prepareParma_IAnalysis3DTool(long pNativeObject, String method);
	native protected void register_onStepChanged_IAnalysis3DTool_EVString(long pNativeObject, String method);
	native protected void register_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_onMouseClicked_IAnalysis3DTool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onAnalysisStart_IAnalysis3DTool(this.nativeObject.pointer, "onAnalysisStart_IAnalysis3DTool_callback");
			this.register_onAnalysisEnd_IAnalysis3DTool(this.nativeObject.pointer, "onAnalysisEnd_IAnalysis3DTool_callback");
			this.register_onEventStart_IAnalysis3DTool(this.nativeObject.pointer, "onEventStart_IAnalysis3DTool_callback");
			this.register_onEventEnd_IAnalysis3DTool(this.nativeObject.pointer, "onEventEnd_IAnalysis3DTool_callback");
			this.register_prepareParma_IAnalysis3DTool(this.nativeObject.pointer, "prepareParma_IAnalysis3DTool_callback");
			this.register_onStepChanged_IAnalysis3DTool_EVString(this.nativeObject.pointer, "onStepChanged_IAnalysis3DTool_EVString_callback");
			this.register_onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32(this.nativeObject.pointer, "onProgressChanged_IAnalysis3DTool_ev_uint32_ev_uint32_callback");
			this.register_onMouseClicked_IAnalysis3DTool(this.nativeObject.pointer, "onMouseClicked_IAnalysis3DTool_callback");
		}
	}
	
	public static Analysis3DListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DListener obj = null;
 		if(baseObj instanceof Analysis3DListener)
		{
			obj = (Analysis3DListener)baseObj;
		} else {
			obj = new Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DListener");
			obj.increaseCast();
		}

		return obj;
	}
}
