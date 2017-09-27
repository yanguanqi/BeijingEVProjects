package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 如果希望从渲染队列中获得事件就必须执行该抽象接口
 */
public class RenderableGeometryExtensionListener extends com.earthview.world.graphic.Renderable.RenderableListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CRenderableGeometryExtensionListener", new RenderableGeometryExtensionListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCRenderableGeometryExtensionListenerProxy", new RenderableGeometryExtensionListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderableGeometryExtensionListener(com.earthview.world.geometry3d.MultiGeometry3DExtension ex) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer exPtr = new BasePointer(ex);
		list.add("ex", exPtr.get());
		Create("JCRenderableGeometryExtensionListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.RenderableGeometryExtensionListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean preRender_CSceneManager_CRenderSystem_CRenderable(long pNativeObject, long sm, long rsys, long renderable);
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @param renderable renderable
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys, com.earthview.world.graphic.Renderable renderable)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_CRenderable(this.nativeObject.pointer, smParamValue, rsysParamValue, renderableParamValue);
		return returnValue;
	}
	native private boolean preRender_CSceneManager_CRenderSystem_CRenderable_NoVirtual(long pNativeObject, long sm, long rsys, long renderable);
	protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys, com.earthview.world.graphic.Renderable renderable)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_CRenderable_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue, renderableParamValue);
		return returnValue;
	}

	native private void postRender_CSceneManager_CRenderSystem_CRenderable(long pNativeObject, long sm, long rsys, long renderable);
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @param renderable renderable
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys, com.earthview.world.graphic.Renderable renderable)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_CRenderable(this.nativeObject.pointer, smParamValue, rsysParamValue, renderableParamValue);
	}
	native private void postRender_CSceneManager_CRenderSystem_CRenderable_NoVirtual(long pNativeObject, long sm, long rsys, long renderable);
	protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys, com.earthview.world.graphic.Renderable renderable)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_CRenderable_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue, renderableParamValue);
	}

	native private void destroyed_CRenderable(long pNativeObject, long renderable);
	/**
	 * 销毁向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @param renderable renderable
	 */
	public void destroyed(com.earthview.world.graphic.Renderable renderable)
	{
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		destroyed_CRenderable(this.nativeObject.pointer, renderableParamValue);
	}
	native private void destroyed_CRenderable_NoVirtual(long pNativeObject, long renderable);
	protected void destroyed_NoVirtual(com.earthview.world.graphic.Renderable renderable)
	{
		long renderableParamValue = (renderable == null ? 0L : renderable.nativeObject.pointer);
		destroyed_CRenderable_NoVirtual(this.nativeObject.pointer, renderableParamValue);
	}

	public RenderableGeometryExtensionListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderableGeometryExtensionListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_preRender_CSceneManager_CRenderSystem_CRenderable(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem_CRenderable(long pNativeObject, String method);
	native protected void register_destroyed_CRenderable(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preRender_CSceneManager_CRenderSystem_CRenderable(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_CRenderable_callback");
			this.register_postRender_CSceneManager_CRenderSystem_CRenderable(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_CRenderable_callback");
			this.register_destroyed_CRenderable(this.nativeObject.pointer, "destroyed_CRenderable_callback");
		}
	}
	
	public static RenderableGeometryExtensionListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderableGeometryExtensionListener obj = null;
 		if(baseObj instanceof RenderableGeometryExtensionListener)
		{
			obj = (RenderableGeometryExtensionListener)baseObj;
		} else {
			obj = new RenderableGeometryExtensionListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderableGeometryExtensionListener");
			obj.increaseCast();
		}

		return obj;
	}
}
