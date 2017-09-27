package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 索引观察者.用于检测操作的过程检测
 */
public class Ilayoutindexobserver extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::ILayoutIndexObserver", new IlayoutindexobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JILayoutIndexObserverProxy", new IlayoutindexobserverClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ilayoutindexobserver() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JILayoutIndexObserverProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.layout.controls.Ilayoutindexobserver".equals(this.getClass().getName()))
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

	public Ilayoutindexobserver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ilayoutindexobserver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onIndexChanged_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onIndexChanged_void(this.nativeObject.pointer, "onIndexChanged_void_callback");
		}
	}
	
	public static Ilayoutindexobserver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ilayoutindexobserver obj = null;
 		if(baseObj instanceof Ilayoutindexobserver)
		{
			obj = (Ilayoutindexobserver)baseObj;
		} else {
			obj = new Ilayoutindexobserver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ILayoutIndexObserver");
			obj.increaseCast();
		}

		return obj;
	}
}
