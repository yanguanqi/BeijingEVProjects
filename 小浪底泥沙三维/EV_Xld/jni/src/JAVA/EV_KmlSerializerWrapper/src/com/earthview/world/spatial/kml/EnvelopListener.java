package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 接口类，定义了一个监听器可以被用来获得渲染目标事件的通知
 */
public class EnvelopListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CEnvelopListener", new EnvelopListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCEnvelopListenerProxy", new EnvelopListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public EnvelopListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEnvelopListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.kml.EnvelopListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void envelopChangedUpdate_void_callback()
	{
		envelopChangedUpdate();
	}

	native private void envelopChangedUpdate_void(long pNativeObject);
	/**
	 * 包围盒改变后通知
	 */
	public void envelopChangedUpdate()
	{
		envelopChangedUpdate_void(this.nativeObject.pointer);
	}
	native private void envelopChangedUpdate_void_NoVirtual(long pNativeObject);
	protected void envelopChangedUpdate_NoVirtual()
	{
		envelopChangedUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	public EnvelopListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EnvelopListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_envelopChangedUpdate_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_envelopChangedUpdate_void(this.nativeObject.pointer, "envelopChangedUpdate_void_callback");
		}
	}
	
	public static EnvelopListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EnvelopListener obj = null;
 		if(baseObj instanceof EnvelopListener)
		{
			obj = (EnvelopListener)baseObj;
		} else {
			obj = new EnvelopListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEnvelopListener");
			obj.increaseCast();
		}

		return obj;
	}
}
