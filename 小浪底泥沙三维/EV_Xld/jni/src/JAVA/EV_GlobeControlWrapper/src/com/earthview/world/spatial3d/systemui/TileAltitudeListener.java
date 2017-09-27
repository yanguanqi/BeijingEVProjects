package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地形修改监听器抽象基类
 */
public class TileAltitudeListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener", new TileAltitudeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCTileAltitudeListenerProxy", new TileAltitudeListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TileAltitudeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTileAltitudeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.TileAltitudeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onOperateStart_CTileAltitudeTool_callback(long tool)
	{
		com.earthview.world.spatial3d.systemui.TileAltitudeTool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.systemui.TileAltitudeTool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.systemui.TileAltitudeTool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onOperateStart(toolParamValue);
	}

	native private void onOperateStart_CTileAltitudeTool(long pNativeObject, long tool);
	/**
	 * 通知操作开始
	 * @param tool 地形修改工具
	 */
	public void onOperateStart(com.earthview.world.spatial3d.systemui.TileAltitudeTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateStart_CTileAltitudeTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onOperateStart_CTileAltitudeTool_NoVirtual(long pNativeObject, long tool);
	protected void onOperateStart_NoVirtual(com.earthview.world.spatial3d.systemui.TileAltitudeTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateStart_CTileAltitudeTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	protected  void onOperateEnd_CTileAltitudeTool_callback(long tool)
	{
		com.earthview.world.spatial3d.systemui.TileAltitudeTool toolParamValue = (tool == 0L ? null : new com.earthview.world.spatial3d.systemui.TileAltitudeTool(CreatedWhenConstruct.CWC_NotToCreate));
		if(toolParamValue != null)
		{
		toolParamValue.setDelegate(true);
		toolParamValue.setInstancePointer(new InstancePointer(tool));
		IClassFactory toolParamValueClassFactory = GlobalClassFactoryMap.get(toolParamValue.getCppInstanceTypeName());
		if (toolParamValueClassFactory != null)
		{
			toolParamValue.setDelegate(true);
			toolParamValue = (com.earthview.world.spatial3d.systemui.TileAltitudeTool)toolParamValueClassFactory.create();
			toolParamValue.setDelegate(true);
			toolParamValue.setInstancePointer(new InstancePointer(tool));
		}
		}
		onOperateEnd(toolParamValue);
	}

	native private void onOperateEnd_CTileAltitudeTool(long pNativeObject, long tool);
	/**
	 * 通知操作结束
	 * @param tool 地形修改工具
	 */
	public void onOperateEnd(com.earthview.world.spatial3d.systemui.TileAltitudeTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateEnd_CTileAltitudeTool(this.nativeObject.pointer, toolParamValue);
	}
	native private void onOperateEnd_CTileAltitudeTool_NoVirtual(long pNativeObject, long tool);
	protected void onOperateEnd_NoVirtual(com.earthview.world.spatial3d.systemui.TileAltitudeTool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		onOperateEnd_CTileAltitudeTool_NoVirtual(this.nativeObject.pointer, toolParamValue);
	}

	public TileAltitudeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileAltitudeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onOperateStart_CTileAltitudeTool(long pNativeObject, String method);
	native protected void register_onOperateEnd_CTileAltitudeTool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onOperateStart_CTileAltitudeTool(this.nativeObject.pointer, "onOperateStart_CTileAltitudeTool_callback");
			this.register_onOperateEnd_CTileAltitudeTool(this.nativeObject.pointer, "onOperateEnd_CTileAltitudeTool_callback");
		}
	}
	
	public static TileAltitudeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileAltitudeListener obj = null;
 		if(baseObj instanceof TileAltitudeListener)
		{
			obj = (TileAltitudeListener)baseObj;
		} else {
			obj = new TileAltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileAltitudeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
