package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 接口类，定义了一个监听器可以被用来获得渲染目标事件的通知
 */
public class RenderTargetListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderTargetListener", new RenderTargetListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderTargetListenerProxy", new RenderTargetListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderTargetListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderTargetListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderTargetListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void preRenderTargetUpdate_RenderTargetEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetEvent evtParamValue = new com.earthview.world.graphic.RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		preRenderTargetUpdate(evtParamValue);
	}

	native private void preRenderTargetUpdate_RenderTargetEvent(long pNativeObject, long evt);
	/**
	 * 在渲染目标被渲染之前调用
	 * @param evt 
	 */
	public void preRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void preRenderTargetUpdate_RenderTargetEvent_NoVirtual(long pNativeObject, long evt);
	protected void preRenderTargetUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preRenderTargetUpdate_RenderTargetEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  void postRenderTargetUpdate_RenderTargetEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetEvent evtParamValue = new com.earthview.world.graphic.RenderTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		postRenderTargetUpdate(evtParamValue);
	}

	native private void postRenderTargetUpdate_RenderTargetEvent(long pNativeObject, long evt);
	/**
	 * 在渲染目标被渲染之后调用
	 * @param evt 
	 */
	public void postRenderTargetUpdate(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postRenderTargetUpdate_RenderTargetEvent_NoVirtual(long pNativeObject, long evt);
	protected void postRenderTargetUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postRenderTargetUpdate_RenderTargetEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  void preViewportUpdate_RenderTargetViewportEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetViewportEvent evtParamValue = new com.earthview.world.graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetViewportEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		preViewportUpdate(evtParamValue);
	}

	native private void preViewportUpdate_RenderTargetViewportEvent(long pNativeObject, long evt);
	/**
	 * 在视口被更新前调用
	 * @param evt 
	 */
	public void preViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void preViewportUpdate_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void preViewportUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		preViewportUpdate_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  void postViewportUpdate_RenderTargetViewportEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetViewportEvent evtParamValue = new com.earthview.world.graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetViewportEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		postViewportUpdate(evtParamValue);
	}

	native private void postViewportUpdate_RenderTargetViewportEvent(long pNativeObject, long evt);
	/**
	 * 在视口被更新后调用
	 * @param evt 
	 */
	public void postViewportUpdate(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postViewportUpdate_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void postViewportUpdate_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postViewportUpdate_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  void viewportAdded_RenderTargetViewportEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetViewportEvent evtParamValue = new com.earthview.world.graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetViewportEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		viewportAdded(evtParamValue);
	}

	native private void viewportAdded_RenderTargetViewportEvent(long pNativeObject, long evt);
	/**
	 * 通知监听器视口已经被加到正在讨论渲染目标中
	 * @param evt 
	 */
	public void viewportAdded(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		viewportAdded_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void viewportAdded_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void viewportAdded_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		viewportAdded_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  void viewportRemoved_RenderTargetViewportEvent_callback(long evt)
	{
		com.earthview.world.graphic.RenderTargetViewportEvent evtParamValue = new com.earthview.world.graphic.RenderTargetViewportEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.RenderTargetViewportEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		viewportRemoved(evtParamValue);
	}

	native private void viewportRemoved_RenderTargetViewportEvent(long pNativeObject, long evt);
	/**
	 * 通知监听器视口已经从正在讨论的渲染目标中去除掉
	 * @param evt 
	 */
	public void viewportRemoved(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		viewportRemoved_RenderTargetViewportEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void viewportRemoved_RenderTargetViewportEvent_NoVirtual(long pNativeObject, long evt);
	protected void viewportRemoved_NoVirtual(com.earthview.world.graphic.RenderTargetViewportEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		viewportRemoved_RenderTargetViewportEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	public RenderTargetListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTargetListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_preRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_postRenderTargetUpdate_RenderTargetEvent(long pNativeObject, String method);
	native protected void register_preViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_postViewportUpdate_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportAdded_RenderTargetViewportEvent(long pNativeObject, String method);
	native protected void register_viewportRemoved_RenderTargetViewportEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "preRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_postRenderTargetUpdate_RenderTargetEvent(this.nativeObject.pointer, "postRenderTargetUpdate_RenderTargetEvent_callback");
			this.register_preViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "preViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_postViewportUpdate_RenderTargetViewportEvent(this.nativeObject.pointer, "postViewportUpdate_RenderTargetViewportEvent_callback");
			this.register_viewportAdded_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportAdded_RenderTargetViewportEvent_callback");
			this.register_viewportRemoved_RenderTargetViewportEvent(this.nativeObject.pointer, "viewportRemoved_RenderTargetViewportEvent_callback");
		}
	}
	
	public static RenderTargetListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTargetListener obj = null;
 		if(baseObj instanceof RenderTargetListener)
		{
			obj = (RenderTargetListener)baseObj;
		} else {
			obj = new RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderTargetListener");
			obj.increaseCast();
		}

		return obj;
	}
}
