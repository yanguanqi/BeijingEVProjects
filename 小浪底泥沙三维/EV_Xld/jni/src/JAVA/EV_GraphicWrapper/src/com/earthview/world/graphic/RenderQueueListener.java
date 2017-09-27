package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 如果希望从渲染队列中获得事件就必须执行该抽象接口
 */
public class RenderQueueListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderQueueListener", new RenderQueueListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderQueueListenerProxy", new RenderQueueListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderQueueListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderQueueListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderQueueListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void preRenderQueues_void_callback()
	{
		preRenderQueues();
	}

	native private void preRenderQueues_void(long pNativeObject);
	/**
	 * 在所有渲染队列被执行前事件通知
	 * @param  
	 */
	public void preRenderQueues()
	{
		preRenderQueues_void(this.nativeObject.pointer);
	}
	native private void preRenderQueues_void_NoVirtual(long pNativeObject);
	protected void preRenderQueues_NoVirtual()
	{
		preRenderQueues_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void postRenderQueues_void_callback()
	{
		postRenderQueues();
	}

	native private void postRenderQueues_void(long pNativeObject);
	/**
	 * 在所有渲染队列被执行后事件通知
	 * @param  
	 */
	public void postRenderQueues()
	{
		postRenderQueues_void(this.nativeObject.pointer);
	}
	native private void postRenderQueues_void_NoVirtual(long pNativeObject);
	protected void postRenderQueues_NoVirtual()
	{
		postRenderQueues_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback(long pSceneMgr, short queueGroupId, String invocation, long skipThisInvocation)
	{
		com.earthview.world.graphic.SceneManager pSceneMgrParamValue = (pSceneMgr == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneMgrParamValue != null)
		{
		pSceneMgrParamValue.setDelegate(true);
		pSceneMgrParamValue.setInstancePointer(new InstancePointer(pSceneMgr));
		IClassFactory pSceneMgrParamValueClassFactory = GlobalClassFactoryMap.get(pSceneMgrParamValue.getCppInstanceTypeName());
		if (pSceneMgrParamValueClassFactory != null)
		{
			pSceneMgrParamValue.setDelegate(true);
			pSceneMgrParamValue = (com.earthview.world.graphic.SceneManager)pSceneMgrParamValueClassFactory.create();
			pSceneMgrParamValue.setDelegate(true);
			pSceneMgrParamValue.setInstancePointer(new InstancePointer(pSceneMgr));
		}
		}
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		BooleanPointer skipThisInvocationParamValue = new BooleanPointer(new InstancePointer(skipThisInvocation));
		renderQueueStarted(pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, skipThisInvocationParamValue);
	}

	native private void renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, long pSceneMgr, short queueGroupId, String invocation, long skipThisInvocation);
	/**
	 * 在渲染队列组被渲染之前事件通知
	 * @param queueGroupId 队列组的ID号
	 * @param invocation 
	 * @param skipThisInvocation 
	 */
	public void renderQueueStarted(com.earthview.world.graphic.SceneManager pSceneMgr, short queueGroupId, String invocation, BooleanPointer skipThisInvocation)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		long skipThisInvocationParamValue = skipThisInvocation.nativeObject.pointer;
		renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, skipThisInvocationParamValue);
	}
	native private void renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(long pNativeObject, long pSceneMgr, short queueGroupId, String invocation, long skipThisInvocation);
	protected void renderQueueStarted_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr, short queueGroupId, String invocation, BooleanPointer skipThisInvocation)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		long skipThisInvocationParamValue = skipThisInvocation.nativeObject.pointer;
		renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, skipThisInvocationParamValue);
	}

	protected  void renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback(long pSceneMgr, short queueGroupId, String invocation, long repeatThisInvocation)
	{
		com.earthview.world.graphic.SceneManager pSceneMgrParamValue = (pSceneMgr == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSceneMgrParamValue != null)
		{
		pSceneMgrParamValue.setDelegate(true);
		pSceneMgrParamValue.setInstancePointer(new InstancePointer(pSceneMgr));
		IClassFactory pSceneMgrParamValueClassFactory = GlobalClassFactoryMap.get(pSceneMgrParamValue.getCppInstanceTypeName());
		if (pSceneMgrParamValueClassFactory != null)
		{
			pSceneMgrParamValue.setDelegate(true);
			pSceneMgrParamValue = (com.earthview.world.graphic.SceneManager)pSceneMgrParamValueClassFactory.create();
			pSceneMgrParamValue.setDelegate(true);
			pSceneMgrParamValue.setInstancePointer(new InstancePointer(pSceneMgr));
		}
		}
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		BooleanPointer repeatThisInvocationParamValue = new BooleanPointer(new InstancePointer(repeatThisInvocation));
		renderQueueEnded(pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, repeatThisInvocationParamValue);
	}

	native private void renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, long pSceneMgr, short queueGroupId, String invocation, long repeatThisInvocation);
	/**
	 * 在渲染队列组被渲染之后事件通知
	 * @param queueGroupId 队列组的ID号
	 * @param invocation 
	 * @param skipThisInvocation 
	 */
	public void renderQueueEnded(com.earthview.world.graphic.SceneManager pSceneMgr, short queueGroupId, String invocation, BooleanPointer repeatThisInvocation)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		long repeatThisInvocationParamValue = repeatThisInvocation.nativeObject.pointer;
		renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, repeatThisInvocationParamValue);
	}
	native private void renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(long pNativeObject, long pSceneMgr, short queueGroupId, String invocation, long repeatThisInvocation);
	protected void renderQueueEnded_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr, short queueGroupId, String invocation, BooleanPointer repeatThisInvocation)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		short queueGroupIdParamValue = queueGroupId;
		String invocationParamValue = invocation;
		long repeatThisInvocationParamValue = repeatThisInvocation.nativeObject.pointer;
		renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue, queueGroupIdParamValue, invocationParamValue, repeatThisInvocationParamValue);
	}

	public RenderQueueListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueueListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_preRenderQueues_void(long pNativeObject, String method);
	native protected void register_postRenderQueues_void(long pNativeObject, String method);
	native protected void register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preRenderQueues_void(this.nativeObject.pointer, "preRenderQueues_void_callback");
			this.register_postRenderQueues_void(this.nativeObject.pointer, "postRenderQueues_void_callback");
			this.register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, "renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback");
			this.register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool(this.nativeObject.pointer, "renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback");
		}
	}
	
	public static RenderQueueListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueueListener obj = null;
 		if(baseObj instanceof RenderQueueListener)
		{
			obj = (RenderQueueListener)baseObj;
		} else {
			obj = new RenderQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderQueueListener");
			obj.increaseCast();
		}

		return obj;
	}
}
