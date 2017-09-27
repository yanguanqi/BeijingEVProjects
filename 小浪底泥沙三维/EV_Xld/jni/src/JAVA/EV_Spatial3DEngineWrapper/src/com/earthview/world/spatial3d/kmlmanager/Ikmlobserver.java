package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ikmlobserver extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::IKmlObserver", new IkmlobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::JIKmlObserverProxy", new IkmlobserverClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Ikmlobserver() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIKmlObserverProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.kmlmanager.Ikmlobserver".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void update_void_callback()
	{
		update();
	}

	native private void update_void(long pNativeObject);
	///<Summary>
	///更新视图数据
	///</Summary>
	/// <returns></returns>
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void refresh_void_callback()
	{
		refresh();
	}

	native private void refresh_void(long pNativeObject);
	///<Summary>
	///刷新非视图数据
	///</Summary>
	/// <returns></returns>
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void refresh_void_NoVirtual(long pNativeObject);
	protected void refresh_NoVirtual()
	{
		refresh_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void toolDeactivatedUpdate_void_callback()
	{
		toolDeactivatedUpdate();
	}

	native private void toolDeactivatedUpdate_void(long pNativeObject);
	///<Summary>
	////Tool Deactivate 刷新
	////</Summary>
	//// <returns></returns>
	public void toolDeactivatedUpdate()
	{
		toolDeactivatedUpdate_void(this.nativeObject.pointer);
	}
	native private void toolDeactivatedUpdate_void_NoVirtual(long pNativeObject);
	protected void toolDeactivatedUpdate_NoVirtual()
	{
		toolDeactivatedUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	public Ikmlobserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ikmlobserver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_refresh_void(long pNativeObject, String method);
	native protected void register_toolDeactivatedUpdate_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_refresh_void(this.nativeObject.pointer, "refresh_void_callback");
			this.register_toolDeactivatedUpdate_void(this.nativeObject.pointer, "toolDeactivatedUpdate_void_callback");
		}
	}
	
	public static Ikmlobserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ikmlobserver obj = null;
 		if(baseObj instanceof Ikmlobserver)
		{
			obj = (Ikmlobserver)baseObj;
		} else {
			obj = new Ikmlobserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IKmlObserver");
			obj.increaseCast();
		}

		return obj;
	}
}
