package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 索引观察者.用于检测操作的过程检测
 */
public class Iindexobserver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::IIndexObserver", new IindexobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JIIndexObserverProxy", new IindexobserverClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Iindexobserver() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIIndexObserverProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.Iindexobserver".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void onIndexChanged_void_callback()
	{
		onIndexChanged();
	}

	native private void onIndexChanged_void(long pNativeObject);
	/**
	 * 当操作管理器的当前索引值发生变化时,该方法会被调用
	 */
	public void onIndexChanged()
	{
		onIndexChanged_void(this.nativeObject.pointer);
	}
	native private void onIndexChanged_void_NoVirtual(long pNativeObject);
	protected void onIndexChanged_NoVirtual()
	{
		onIndexChanged_void_NoVirtual(this.nativeObject.pointer);
	}

	public Iindexobserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iindexobserver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onIndexChanged_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onIndexChanged_void(this.nativeObject.pointer, "onIndexChanged_void_callback");
		}
	}
	
	public static Iindexobserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iindexobserver obj = null;
 		if(baseObj instanceof Iindexobserver)
		{
			obj = (Iindexobserver)baseObj;
		} else {
			obj = new Iindexobserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IIndexObserver");
			obj.increaseCast();
		}

		return obj;
	}
}
