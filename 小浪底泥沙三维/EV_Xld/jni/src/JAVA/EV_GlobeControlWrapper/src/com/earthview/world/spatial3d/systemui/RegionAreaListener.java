package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 区域范围监听类
 */
public class RegionAreaListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CRegionAreaListener", new RegionAreaListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCRegionAreaListenerProxy", new RegionAreaListenerClassFactory());
	}

	public RegionAreaListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRegionAreaListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.RegionAreaListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onOperateStart_CRegionAreaTool_callback(long tool)
	{
		com.earthview.world.spatial3d.systemui.RegionAreaTool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.systemui.RegionAreaTool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.systemui.RegionAreaTool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onOperateStart(toolParamValue);
	}

	native private void onOperateStart_CRegionAreaTool(long pNativeObject, long tool);
	/**
	 * 操作开始
	 * @param tool 工具对象
	 */
	public void onOperateStart(com.earthview.world.spatial3d.systemui.RegionAreaTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateStart_CRegionAreaTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onOperateStart_CRegionAreaTool_NoVirtual(long pNativeObject, long tool);
	protected void onOperateStart_NoVirtual(com.earthview.world.spatial3d.systemui.RegionAreaTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateStart_CRegionAreaTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onOperateEnd_CRegionAreaTool_callback(long tool)
	{
		com.earthview.world.spatial3d.systemui.RegionAreaTool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.systemui.RegionAreaTool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.systemui.RegionAreaTool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onOperateEnd(toolParamValue);
	}

	native private void onOperateEnd_CRegionAreaTool(long pNativeObject, long tool);
	/**
	 * 操作结束
	 * @param tool 工具对象
	 */
	public void onOperateEnd(com.earthview.world.spatial3d.systemui.RegionAreaTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateEnd_CRegionAreaTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onOperateEnd_CRegionAreaTool_NoVirtual(long pNativeObject, long tool);
	protected void onOperateEnd_NoVirtual(com.earthview.world.spatial3d.systemui.RegionAreaTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateEnd_CRegionAreaTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	public RegionAreaListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RegionAreaListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onOperateStart_CRegionAreaTool(long pNativeObject, String method);
	native protected void register_onOperateEnd_CRegionAreaTool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onOperateStart_CRegionAreaTool(this.nativeObject.pointer, "onOperateStart_CRegionAreaTool_callback");
			this.register_onOperateEnd_CRegionAreaTool(this.nativeObject.pointer, "onOperateEnd_CRegionAreaTool_callback");
		}
	}
	
	public static RegionAreaListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RegionAreaListener obj = null;
 		if(baseObj instanceof RegionAreaListener)
		{
			obj = (RegionAreaListener)baseObj;
		} else {
			obj = new RegionAreaListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRegionAreaListener");
			obj.increaseCast();
		}

		return obj;
	}
}
