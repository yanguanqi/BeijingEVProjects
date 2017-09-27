package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类定义所有渲染实体必须应用的接口
 */
public class Renderable extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable", new RenderableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderableProxy", new RenderableClassFactory());
	}

	/**
	 * 内部类，只能在渲染系统内部使用
	 */
	public static class RenderSystemData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::CRenderSystemData", new RenderSystemDataClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public RenderSystemData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CRenderSystemData", null);
		}

		public RenderSystemData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderSystemData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RenderSystemData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderSystemData obj = null;
 			if(baseObj instanceof RenderSystemData)
			{
				obj = (RenderSystemData)baseObj;
			} else {
				obj = new RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderSystemDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderSystemData emptyInstance = new RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * renderable对象监听类此类是对renderable对象事件的响应，
	 */
	public static class RenderableListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::CRenderableListener", new RenderableListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::JCRenderableListenerProxy", new RenderableListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public RenderableListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRenderableListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Renderable$RenderableListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean preRender_CSceneManager_CRenderSystem_CRenderable_callback(long sm, long rsys, long renderable)
		{
			com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
			if(smParamValue != null)
			{
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
			IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
			if (smParamValueClassFactory != null)
			{
				smParamValue.setDelegate(true);
				smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
				smParamValue.setDelegate(true);
				smParamValue.setInstancePointer(new InstancePointer(sm));
			}
			}
			com.earthview.world.graphic.RenderSystem rsysParamValue = (rsys == 0L ? null : new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate));
			if(rsysParamValue != null)
			{
			rsysParamValue.setDelegate(true);
			rsysParamValue.setInstancePointer(new InstancePointer(rsys));
			IClassFactory rsysParamValueClassFactory = GlobalClassFactoryMap.get(rsysParamValue.getCppInstanceTypeName());
			if (rsysParamValueClassFactory != null)
			{
				rsysParamValue.setDelegate(true);
				rsysParamValue = (com.earthview.world.graphic.RenderSystem)rsysParamValueClassFactory.create();
				rsysParamValue.setDelegate(true);
				rsysParamValue.setInstancePointer(new InstancePointer(rsys));
			}
			}
			com.earthview.world.graphic.Renderable renderableParamValue = (renderable == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(renderableParamValue != null)
			{
			renderableParamValue.setDelegate(true);
			renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			IClassFactory renderableParamValueClassFactory = GlobalClassFactoryMap.get(renderableParamValue.getCppInstanceTypeName());
			if (renderableParamValueClassFactory != null)
			{
				renderableParamValue.setDelegate(true);
				renderableParamValue = (com.earthview.world.graphic.Renderable)renderableParamValueClassFactory.create();
				renderableParamValue.setDelegate(true);
				renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			}
			}
			boolean returnValue = preRender(smParamValue, rsysParamValue, renderableParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
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

		protected  void postRender_CSceneManager_CRenderSystem_CRenderable_callback(long sm, long rsys, long renderable)
		{
			com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
			if(smParamValue != null)
			{
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
			IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
			if (smParamValueClassFactory != null)
			{
				smParamValue.setDelegate(true);
				smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
				smParamValue.setDelegate(true);
				smParamValue.setInstancePointer(new InstancePointer(sm));
			}
			}
			com.earthview.world.graphic.RenderSystem rsysParamValue = (rsys == 0L ? null : new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate));
			if(rsysParamValue != null)
			{
			rsysParamValue.setDelegate(true);
			rsysParamValue.setInstancePointer(new InstancePointer(rsys));
			IClassFactory rsysParamValueClassFactory = GlobalClassFactoryMap.get(rsysParamValue.getCppInstanceTypeName());
			if (rsysParamValueClassFactory != null)
			{
				rsysParamValue.setDelegate(true);
				rsysParamValue = (com.earthview.world.graphic.RenderSystem)rsysParamValueClassFactory.create();
				rsysParamValue.setDelegate(true);
				rsysParamValue.setInstancePointer(new InstancePointer(rsys));
			}
			}
			com.earthview.world.graphic.Renderable renderableParamValue = (renderable == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(renderableParamValue != null)
			{
			renderableParamValue.setDelegate(true);
			renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			IClassFactory renderableParamValueClassFactory = GlobalClassFactoryMap.get(renderableParamValue.getCppInstanceTypeName());
			if (renderableParamValueClassFactory != null)
			{
				renderableParamValue.setDelegate(true);
				renderableParamValue = (com.earthview.world.graphic.Renderable)renderableParamValueClassFactory.create();
				renderableParamValue.setDelegate(true);
				renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			}
			}
			postRender(smParamValue, rsysParamValue, renderableParamValue);
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

		protected  void destroyed_CRenderable_callback(long renderable)
		{
			com.earthview.world.graphic.Renderable renderableParamValue = (renderable == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(renderableParamValue != null)
			{
			renderableParamValue.setDelegate(true);
			renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			IClassFactory renderableParamValueClassFactory = GlobalClassFactoryMap.get(renderableParamValue.getCppInstanceTypeName());
			if (renderableParamValueClassFactory != null)
			{
				renderableParamValue.setDelegate(true);
				renderableParamValue = (com.earthview.world.graphic.Renderable)renderableParamValueClassFactory.create();
				renderableParamValue.setDelegate(true);
				renderableParamValue.setInstancePointer(new InstancePointer(renderable));
			}
			}
			destroyed(renderableParamValue);
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

		public RenderableListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RenderableListener(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static RenderableListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RenderableListener obj = null;
 			if(baseObj instanceof RenderableListener)
			{
				obj = (RenderableListener)baseObj;
			} else {
				obj = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRenderableListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RenderableListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RenderableListener emptyInstance = new RenderableListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Renderable() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderableProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Renderable".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getMaterial_void_callback()
	{
		com.earthview.world.graphic.MaterialPtr returnValue = getMaterial();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMaterial_void(long pNativeObject);
	/**
	 * 获得材质
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	protected  long getTechnique_void_callback()
	{
		com.earthview.world.graphic.Technique returnValue = getTechnique();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTechnique_void(long pNativeObject);
	/**
	 * 获得技术
	 * @param  
	 */
	public com.earthview.world.graphic.Technique getTechnique()
	{
		long returnValue = getTechnique_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private long getTechnique_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Technique getTechnique_NoVirtual()
	{
		long returnValue = getTechnique_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}

	protected  void getRenderOperation_CRenderOperation_callback(long op)
	{
		com.earthview.world.graphic.RenderOperation opParamValue = new com.earthview.world.graphic.RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
		opParamValue.setDelegate(true);
		opParamValue.setInstancePointer(new InstancePointer(op));
		IClassFactory opParamValueClassFactory = GlobalClassFactoryMap.get(opParamValue.getCppInstanceTypeName());
		if (opParamValueClassFactory != null)
		{
			opParamValue.setDelegate(true);
			opParamValue = (com.earthview.world.graphic.RenderOperation)opParamValueClassFactory.create();
			opParamValue.setDelegate(true);
			opParamValue.setInstancePointer(new InstancePointer(op));
		}
		getRenderOperation(opParamValue);
	}

	native private void getRenderOperation_CRenderOperation(long pNativeObject, long op);
	/**
	 * 获得渲染操作
	 * @param op 
	 */
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation(this.nativeObject.pointer, opParamValue);
	}
	native private void getRenderOperation_CRenderOperation_NoVirtual(long pNativeObject, long op);
	protected void getRenderOperation_NoVirtual(com.earthview.world.graphic.RenderOperation op)
	{
		long opParamValue = op.nativeObject.pointer;
		getRenderOperation_CRenderOperation_NoVirtual(this.nativeObject.pointer, opParamValue);
	}

	protected  boolean preRender_CSceneManager_CRenderSystem_callback(long sm, long rsys)
	{
		com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(smParamValue != null)
		{
		smParamValue.setDelegate(true);
		smParamValue.setInstancePointer(new InstancePointer(sm));
		IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
		if (smParamValueClassFactory != null)
		{
			smParamValue.setDelegate(true);
			smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
		}
		}
		com.earthview.world.graphic.RenderSystem rsysParamValue = (rsys == 0L ? null : new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate));
		if(rsysParamValue != null)
		{
		rsysParamValue.setDelegate(true);
		rsysParamValue.setInstancePointer(new InstancePointer(rsys));
		IClassFactory rsysParamValueClassFactory = GlobalClassFactoryMap.get(rsysParamValue.getCppInstanceTypeName());
		if (rsysParamValueClassFactory != null)
		{
			rsysParamValue.setDelegate(true);
			rsysParamValue = (com.earthview.world.graphic.RenderSystem)rsysParamValueClassFactory.create();
			rsysParamValue.setDelegate(true);
			rsysParamValue.setInstancePointer(new InstancePointer(rsys));
		}
		}
		boolean returnValue = preRender(smParamValue, rsysParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean preRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	/**
	 * 渲染开始时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 * @return 如果自动执行渲染过程返回true,手动执行返回false
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}
	native private boolean preRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}

	protected  void postRender_CSceneManager_CRenderSystem_callback(long sm, long rsys)
	{
		com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(smParamValue != null)
		{
		smParamValue.setDelegate(true);
		smParamValue.setInstancePointer(new InstancePointer(sm));
		IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
		if (smParamValueClassFactory != null)
		{
			smParamValue.setDelegate(true);
			smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
		}
		}
		com.earthview.world.graphic.RenderSystem rsysParamValue = (rsys == 0L ? null : new com.earthview.world.graphic.RenderSystem(CreatedWhenConstruct.CWC_NotToCreate));
		if(rsysParamValue != null)
		{
		rsysParamValue.setDelegate(true);
		rsysParamValue.setInstancePointer(new InstancePointer(rsys));
		IClassFactory rsysParamValueClassFactory = GlobalClassFactoryMap.get(rsysParamValue.getCppInstanceTypeName());
		if (rsysParamValueClassFactory != null)
		{
			rsysParamValue.setDelegate(true);
			rsysParamValue = (com.earthview.world.graphic.RenderSystem)rsysParamValueClassFactory.create();
			rsysParamValue.setDelegate(true);
			rsysParamValue.setInstancePointer(new InstancePointer(rsys));
		}
		}
		postRender(smParamValue, rsysParamValue);
	}

	native private void postRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	/**
	 * 渲染完成时向外通知的事件
	 * @param sm 渲染场景
	 * @param rsys 渲染系统
	 */
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}
	native private void postRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}

	protected  void getWorldTransforms_CMatrix4_callback(long xform)
	{
		com.earthview.world.spatial.math.Matrix4 xformParamValue = (xform == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(xformParamValue != null)
		{
		xformParamValue.setDelegate(true);
		xformParamValue.setInstancePointer(new InstancePointer(xform));
		IClassFactory xformParamValueClassFactory = GlobalClassFactoryMap.get(xformParamValue.getCppInstanceTypeName());
		if (xformParamValueClassFactory != null)
		{
			xformParamValue.setDelegate(true);
			xformParamValue = (com.earthview.world.spatial.math.Matrix4)xformParamValueClassFactory.create();
			xformParamValue.setDelegate(true);
			xformParamValue.setInstancePointer(new InstancePointer(xform));
		}
		}
		getWorldTransforms(xformParamValue);
	}

	native private void getWorldTransforms_CMatrix4(long pNativeObject, long xform);
	/**
	 * 获得渲染对象的世界变换矩阵
	 * @param xform 
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4(this.nativeObject.pointer, xformParamValue);
	}
	native private void getWorldTransforms_CMatrix4_NoVirtual(long pNativeObject, long xform);
	protected void getWorldTransforms_NoVirtual(com.earthview.world.spatial.math.Matrix4 xform)
	{
		long xformParamValue = (xform == null ? 0L : xform.nativeObject.pointer);
		getWorldTransforms_CMatrix4_NoVirtual(this.nativeObject.pointer, xformParamValue);
	}

	protected  int getNumWorldTransforms_void_callback()
	{
		int returnValue = getNumWorldTransforms();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumWorldTransforms_void(long pNativeObject);
	/**
	 * 获得渲染对象的世界变换矩阵的数量
	 * @param  
	 */
	public int getNumWorldTransforms()
	{
		int returnValue = getNumWorldTransforms_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumWorldTransforms_void_NoVirtual(long pNativeObject);
	protected int getNumWorldTransforms_NoVirtual()
	{
		int returnValue = getNumWorldTransforms_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setUseIdentityProjection_ev_bool(long pNativeObject, boolean useIdentityProjection);
	/**
	 * 设置是否使用单位投影矩阵
	 * @param useIdentityProjection 
	 */
	public void setUseIdentityProjection(boolean useIdentityProjection)
	{
		boolean useIdentityProjectionParamValue = useIdentityProjection;
		setUseIdentityProjection_ev_bool(this.nativeObject.pointer, useIdentityProjectionParamValue);
	}
	native private boolean getUseIdentityProjection_void(long pNativeObject);
	/**
	 * 返回是否使用单位投影矩阵
	 * @param  
	 * @return 需要统一投影返回true否则返回false
	 */
	public boolean getUseIdentityProjection()
	{
		boolean returnValue = getUseIdentityProjection_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCustomProjection_ev_bool(long pNativeObject, boolean customProjection);
	/**
	 * 设置是否使用用自定义投影
	 * @param useIdentityProjection 设置的状态参数
	 * @return 需要统一投影设置为true否则返回false
	 */
	public void setCustomProjection(boolean customProjection)
	{
		boolean customProjectionParamValue = customProjection;
		setCustomProjection_ev_bool(this.nativeObject.pointer, customProjectionParamValue);
	}
	native private boolean getCustomProjection_void(long pNativeObject);
	/**
	 * 返回是否使用用自定义投影
	 * @param  
	 * @return 需要统一投影返回true否则返回false
	 */
	public boolean getCustomProjection()
	{
		boolean returnValue = getCustomProjection_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseIdentityView_ev_bool(long pNativeObject, boolean useIdentityView);
	/**
	 * 设置是否使用单位观察矩阵
	 * @param useIdentityView 
	 */
	public void setUseIdentityView(boolean useIdentityView)
	{
		boolean useIdentityViewParamValue = useIdentityView;
		setUseIdentityView_ev_bool(this.nativeObject.pointer, useIdentityViewParamValue);
	}
	native private boolean getUseIdentityView_void(long pNativeObject);
	/**
	 * 返回是否使用单位观察矩阵
	 * @param  
	 */
	public boolean getUseIdentityView()
	{
		boolean returnValue = getUseIdentityView_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  double getSquaredViewDepth_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		double returnValue = getSquaredViewDepth(camParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
	/// <summary>
	/// 返回渲染实体相对虚拟相机的观察深度的平方
	/// </summary>
	/// <param name="cam"></param>
	/// <returns</returns>
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}
	native private double getSquaredViewDepth_CCamera_NoVirtual(long pNativeObject, long cam);
	protected double getSquaredViewDepth_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		double returnValue = getSquaredViewDepth_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
		return returnValue;
	}

	protected  long getLights_void_callback()
	{
		com.earthview.world.graphic.LightList returnValue = getLights();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLights_void(long pNativeObject);
	/**
	 * 获得光照的列表，按照相对于渲染实体的远近排列
	 * @param  
	 */
	public com.earthview.world.graphic.LightList getLights()
	{
		long returnValue = getLights_void(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}
	native private long getLights_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.LightList getLights_NoVirtual()
	{
		long returnValue = getLights_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.LightList __returnValue = new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate, "LightList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LightList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LightList");
		}
		return __returnValue;
	}

	protected  boolean getCastsShadows_void_callback()
	{
		boolean returnValue = getCastsShadows();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCastsShadows_void(long pNativeObject);
	/**
	 * 是否投射投影
	 * @param  
	 */
	public boolean getCastsShadows()
	{
		boolean returnValue = getCastsShadows_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCastsShadows_void_NoVirtual(long pNativeObject);
	protected boolean getCastsShadows_NoVirtual()
	{
		boolean returnValue = getCastsShadows_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCustomParameter_ev_size_t_CVector4(long pNativeObject, long index, long value);
	/**
	 * 设置渲染接口的自定义参数，它可以用来获得特殊渲染的计算，如GPU参数
	 * @param index 值的索引
	 * @param value 四维向量值
	 */
	public void setCustomParameter(long index, com.earthview.world.spatial.math.Vector4 value)
	{
		long indexParamValue = index;
		long valueParamValue = value.nativeObject.pointer;
		setCustomParameter_ev_size_t_CVector4(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private void removeCustomParameter_size_t(long pNativeObject, long index);
	///zxt updatefor v1.8
	public void removeCustomParameter(long index)
	{
		long indexParamValue = index;
		removeCustomParameter_size_t(this.nativeObject.pointer, indexParamValue);
	}
	native private boolean hasCustomParameter_size_t(long pNativeObject, long index);
	public boolean hasCustomParameter(long index)
	{
		long indexParamValue = index;
		boolean returnValue = hasCustomParameter_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getCustomParameter_ev_size_t(long pNativeObject, long index);
	/**
	 * 获得和已给索引相关联的定制值
	 * @param index 值的索引
	 */
	public com.earthview.world.spatial.math.Vector4 getCustomParameter(long index)
	{
		long indexParamValue = index;
		long returnValue = getCustomParameter_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	protected  void _updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(long constantEntry, long params)
	{
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntryParamValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
		constantEntryParamValue.setDelegate(true);
		constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		IClassFactory constantEntryParamValueClassFactory = GlobalClassFactoryMap.get(constantEntryParamValue.getCppInstanceTypeName());
		if (constantEntryParamValueClassFactory != null)
		{
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)constantEntryParamValueClassFactory.create();
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		}
		com.earthview.world.graphic.GpuProgramParameters paramsParamValue = (params == 0L ? null : new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.graphic.GpuProgramParameters)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		_updateCustomGpuParameter(constantEntryParamValue, paramsParamValue);
	}

	native private void _updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, long constantEntry, long params);
	/**
	 * 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
	 * @param constantEntry CAutoConstantEntry的别名
	 * @param params EarthView::World::Graphic::CGpuProgramParameters的指针
	 */
	public void _updateCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
	}
	native private void _updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(long pNativeObject, long constantEntry, long params);
	protected void _updateCustomGpuParameter_NoVirtual(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
	}

	protected  void setPolygonModeOverrideable_ev_bool_callback(boolean override)
	{
		boolean overrideParamValue = override;
		setPolygonModeOverrideable(overrideParamValue);
	}

	native private void setPolygonModeOverrideable_ev_bool(long pNativeObject, boolean override);
	/**
	 * 设置多边形渲染方式是否可重写
	 * @param override 设置参数
	 * @return true可以超越，false不可以
	 */
	public void setPolygonModeOverrideable(boolean override)
	{
		boolean overrideParamValue = override;
		setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, overrideParamValue);
	}
	native private void setPolygonModeOverrideable_ev_bool_NoVirtual(long pNativeObject, boolean override);
	protected void setPolygonModeOverrideable_NoVirtual(boolean override)
	{
		boolean overrideParamValue = override;
		setPolygonModeOverrideable_ev_bool_NoVirtual(this.nativeObject.pointer, overrideParamValue);
	}

	protected  boolean getPolygonModeOverrideable_void_callback()
	{
		boolean returnValue = getPolygonModeOverrideable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPolygonModeOverrideable_void(long pNativeObject);
	/**
	 * 获得多边形渲染方式是否可重写
	 * @param  
	 */
	public boolean getPolygonModeOverrideable()
	{
		boolean returnValue = getPolygonModeOverrideable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPolygonModeOverrideable_void_NoVirtual(long pNativeObject);
	protected boolean getPolygonModeOverrideable_NoVirtual()
	{
		boolean returnValue = getPolygonModeOverrideable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCustomAmbient_CColourValue_callback(long ambient)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		setCustomAmbient(ambientParamValue);
	}

	native private void setCustomAmbient_CColourValue(long pNativeObject, long ambient);
	/**
	 * 设置自定义环境光系数
	 * @param  
	 */
	public void setCustomAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setCustomAmbient_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setCustomAmbient_CColourValue_NoVirtual(long pNativeObject, long ambient);
	protected void setCustomAmbient_NoVirtual(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setCustomAmbient_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue);
	}

	protected  long getCustomAmbient_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getCustomAmbient();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCustomAmbient_void(long pNativeObject);
	/**
	 * 获取自定义环境光系数
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getCustomAmbient()
	{
		long returnValue = getCustomAmbient_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getCustomAmbient_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getCustomAmbient_NoVirtual()
	{
		long returnValue = getCustomAmbient_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  boolean getCustomAmbientEnabled_void_callback()
	{
		boolean returnValue = getCustomAmbientEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCustomAmbientEnabled_void(long pNativeObject);
	/**
	 * 获取自定义环境光系数是否启用
	 * @param  
	 */
	public boolean getCustomAmbientEnabled()
	{
		boolean returnValue = getCustomAmbientEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCustomAmbientEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getCustomAmbientEnabled_NoVirtual()
	{
		boolean returnValue = getCustomAmbientEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCustomAmbientEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCustomAmbientEnabled(enabledParamValue);
	}

	native private void setCustomAmbientEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置自定义环境光系数是否启用
	 * @param  
	 */
	public void setCustomAmbientEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCustomAmbientEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setCustomAmbientEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCustomAmbientEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  long getMovableObject_void_callback()
	{
		com.earthview.world.graphic.MovableObject returnValue = getMovableObject();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMovableObject_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject getMovableObject()
	{
		long returnValue = getMovableObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	native private long getMovableObject_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MovableObject getMovableObject_NoVirtual()
	{
		long returnValue = getMovableObject_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}

	protected  void addListener_CRenderableListener_callback(long ref_listener)
	{
		com.earthview.world.graphic.Renderable.RenderableListener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.graphic.Renderable.RenderableListener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		addListener(ref_listenerParamValue);
	}

	native private void addListener_CRenderableListener(long pNativeObject, long ref_listener);
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CRenderableListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void addListener_CRenderableListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void addListener_NoVirtual(com.earthview.world.graphic.Renderable.RenderableListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CRenderableListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  void removeListener_CRenderableListener_callback(long listener)
	{
		com.earthview.world.graphic.Renderable.RenderableListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.Renderable.RenderableListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		removeListener(listenerParamValue);
	}

	native private void removeListener_CRenderableListener(long pNativeObject, long listener);
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CRenderableListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeListener_CRenderableListener_NoVirtual(long pNativeObject, long listener);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CRenderableListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  boolean existListener_CRenderableListener_callback(long listener)
	{
		com.earthview.world.graphic.Renderable.RenderableListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.Renderable.RenderableListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		boolean returnValue = existListener(listenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existListener_CRenderableListener(long pNativeObject, long listener);
	/**
	 * 添加监听器
	 * @param listener 
	 */
	public boolean existListener(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = existListener_CRenderableListener(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}
	native private boolean existListener_CRenderableListener_NoVirtual(long pNativeObject, long listener);
	protected boolean existListener_NoVirtual(com.earthview.world.graphic.Renderable.RenderableListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = existListener_CRenderableListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}

	protected  long getListenerCount_void_callback()
	{
		long returnValue = getListenerCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getListenerCount_void(long pNativeObject);
	/**
	 * 获取监听器
	 * @param  
	 */
	public long getListenerCount()
	{
		long returnValue = getListenerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getListenerCount_void_NoVirtual(long pNativeObject);
	protected long getListenerCount_NoVirtual()
	{
		long returnValue = getListenerCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.Renderable.RenderableListener returnValue = getListener(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderableListener getListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable.RenderableListener __returnValue = new com.earthview.world.graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate, "CRenderableListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable.RenderableListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderableListener");
		}
		return __returnValue;
	}
	native private long getListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.Renderable.RenderableListener getListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable.RenderableListener __returnValue = new com.earthview.world.graphic.Renderable.RenderableListener(CreatedWhenConstruct.CWC_NotToCreate, "CRenderableListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable.RenderableListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderableListener");
		}
		return __returnValue;
	}

	native private long getUserObjectBindings_void(long pNativeObject);
	/**
	 * 返回一个绑定对象和类相关的实例，可以用这个类的实例联系一个或多个自定义的对象
	 * @param  
	 */
	public com.earthview.world.graphic.UserObjectBindings getUserObjectBindings()
	{
		long returnValue = getUserObjectBindings_void(this.nativeObject.pointer);
		com.earthview.world.graphic.UserObjectBindings __returnValue = new com.earthview.world.graphic.UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate, "CUserObjectBindings");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.UserObjectBindings)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserObjectBindings");
		}
		return __returnValue;
	}
	/**
	 * CVistor对象被用来迭代抽象渲染接口实例的集合
	 */
	public static class Visitor extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::CVisitor", new VisitorClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::JCVisitorProxy", new VisitorClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public Visitor() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCVisitorProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Renderable$Visitor".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void visit_CRenderable_ev_uint16_ev_bool_callback(long rend, int lodIndex, boolean isDebug)
		{
			com.earthview.world.graphic.Renderable rendParamValue = (rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
			if(rendParamValue != null)
			{
			rendParamValue.setDelegate(true);
			rendParamValue.setInstancePointer(new InstancePointer(rend));
			IClassFactory rendParamValueClassFactory = GlobalClassFactoryMap.get(rendParamValue.getCppInstanceTypeName());
			if (rendParamValueClassFactory != null)
			{
				rendParamValue.setDelegate(true);
				rendParamValue = (com.earthview.world.graphic.Renderable)rendParamValueClassFactory.create();
				rendParamValue.setDelegate(true);
				rendParamValue.setInstancePointer(new InstancePointer(rend));
			}
			}
			int lodIndexParamValue = lodIndex;
			boolean isDebugParamValue = isDebug;
			visit(rendParamValue, lodIndexParamValue, isDebugParamValue);
		}

		native private void visit_CRenderable_ev_uint16_ev_bool(long pNativeObject, long rend, int lodIndex, boolean isDebug);
		/**
		 * 使渲染接口实例可见
		 * @param rend 渲染接口
		 * @param lodindex LOD索引
		 * @param isDebug debug状态
		 */
		public void visit(com.earthview.world.graphic.Renderable rend, int lodIndex, boolean isDebug)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			int lodIndexParamValue = lodIndex;
			boolean isDebugParamValue = isDebug;
			visit_CRenderable_ev_uint16_ev_bool(this.nativeObject.pointer, rendParamValue, lodIndexParamValue, isDebugParamValue);
		}
		native private void visit_CRenderable_ev_uint16_ev_bool_NoVirtual(long pNativeObject, long rend, int lodIndex, boolean isDebug);
		protected void visit_NoVirtual(com.earthview.world.graphic.Renderable rend, int lodIndex, boolean isDebug)
		{
			long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
			int lodIndexParamValue = lodIndex;
			boolean isDebugParamValue = isDebug;
			visit_CRenderable_ev_uint16_ev_bool_NoVirtual(this.nativeObject.pointer, rendParamValue, lodIndexParamValue, isDebugParamValue);
		}

		public Visitor(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Visitor(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_visit_CRenderable_ev_uint16_ev_bool(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_visit_CRenderable_ev_uint16_ev_bool(this.nativeObject.pointer, "visit_CRenderable_ev_uint16_ev_bool_callback");
			}
		}
		
		public static Visitor fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Visitor obj = null;
 			if(baseObj instanceof Visitor)
			{
				obj = (Visitor)baseObj;
			} else {
				obj = new Visitor(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CVisitor");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VisitorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Visitor emptyInstance = new Visitor(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long getRenderSystemData_void_callback()
	{
		com.earthview.world.graphic.Renderable.RenderSystemData returnValue = getRenderSystemData();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderSystemData_void(long pNativeObject);
	/**
	 * 设置渲染系统的私有数据
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData()
	{
		long returnValue = getRenderSystemData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable.RenderSystemData __returnValue = new com.earthview.world.graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable.RenderSystemData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemData");
		}
		return __returnValue;
	}
	native private long getRenderSystemData_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Renderable.RenderSystemData getRenderSystemData_NoVirtual()
	{
		long returnValue = getRenderSystemData_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable.RenderSystemData __returnValue = new com.earthview.world.graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate, "CRenderSystemData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable.RenderSystemData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderSystemData");
		}
		return __returnValue;
	}

	protected  void setRenderSystemData_CRenderSystemData_callback(long ref_val)
	{
		com.earthview.world.graphic.Renderable.RenderSystemData ref_valParamValue = (ref_val == 0L ? null : new com.earthview.world.graphic.Renderable.RenderSystemData(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_valParamValue != null)
		{
		ref_valParamValue.setDelegate(true);
		ref_valParamValue.setInstancePointer(new InstancePointer(ref_val));
		IClassFactory ref_valParamValueClassFactory = GlobalClassFactoryMap.get(ref_valParamValue.getCppInstanceTypeName());
		if (ref_valParamValueClassFactory != null)
		{
			ref_valParamValue.setDelegate(true);
			ref_valParamValue = (com.earthview.world.graphic.Renderable.RenderSystemData)ref_valParamValueClassFactory.create();
			ref_valParamValue.setDelegate(true);
			ref_valParamValue.setInstancePointer(new InstancePointer(ref_val));
		}
		}
		setRenderSystemData(ref_valParamValue);
	}

	native private void setRenderSystemData_CRenderSystemData(long pNativeObject, long ref_val);
	/**
	 * 获得渲染系统的私有数据
	 * @param  
	 */
	public void setRenderSystemData(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		long ref_valParamValue = (ref_val == null ? 0L : ref_val.nativeObject.pointer);
		setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, ref_valParamValue);
	}
	native private void setRenderSystemData_CRenderSystemData_NoVirtual(long pNativeObject, long ref_val);
	protected void setRenderSystemData_NoVirtual(com.earthview.world.graphic.Renderable.RenderSystemData ref_val)
	{
		long ref_valParamValue = (ref_val == null ? 0L : ref_val.nativeObject.pointer);
		setRenderSystemData_CRenderSystemData_NoVirtual(this.nativeObject.pointer, ref_valParamValue);
	}

	public static class CustomParameterMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderable::CustomParameterMap", new CustomParameterMapClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public CustomParameterMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CustomParameterMap", null);
		}

		native private boolean push_ev_size_t_CVector4(long pNativeObject, long key, long val);
		/**
		 * 在map容器中添加元素
		 * @param key 键
		 * @param val 值
		 * @return 成功增加true，否则false
		 */
		public boolean push(long key, com.earthview.world.spatial.math.Vector4 val)
		{
			long keyParamValue = key;
			long valParamValue = val.nativeObject.pointer;
			boolean returnValue = push_ev_size_t_CVector4(this.nativeObject.pointer, keyParamValue, valParamValue);
			return returnValue;
		}
		native private boolean exist_ev_size_t(long pNativeObject, long key);
		/**
		 * 判断元素是否存在
		 * @param key 键
		 * @return 存在true，否则false
		 */
		public boolean exist(long key)
		{
			long keyParamValue = key;
			boolean returnValue = exist_ev_size_t(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long key);
		/**
		 * 重载[]操作符
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public com.earthview.world.spatial.math.Vector4 OperatorIndex(long key)
		{
			long keyParamValue = key;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private long get_ev_size_t(long pNativeObject, long key);
		/**
		 * 获得键对应的值
		 * @param key 键
		 * @return 返回键对应的值
		 */
		public com.earthview.world.spatial.math.Vector4 get(long key)
		{
			long keyParamValue = key;
			long returnValue = get_ev_size_t(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVector4");
			}
			return __returnValue;
		}
		native private void erase_ev_size_t(long pNativeObject, long key);
		/**
		 * 删除键对应的值
		 * @param key 键
		 */
		public void erase(long key)
		{
			long keyParamValue = key;
			erase_ev_size_t(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		/**
		 * 返回容器的大小
		 * @param  
		 * @return 容器的大小
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空容器
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断容器是否为空
		 * @param  
		 * @return 容器为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public CustomParameterMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CustomParameterMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CustomParameterMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CustomParameterMap obj = null;
 			if(baseObj instanceof CustomParameterMap)
			{
				obj = (CustomParameterMap)baseObj;
			} else {
				obj = new CustomParameterMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CustomParameterMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CustomParameterMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CustomParameterMap emptyInstance = new CustomParameterMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public Renderable(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Renderable(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getTechnique_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_preRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_postRender_CSceneManager_CRenderSystem(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getNumWorldTransforms_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getCastsShadows_void(long pNativeObject, String method);
	native protected void register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_setPolygonModeOverrideable_ev_bool(long pNativeObject, String method);
	native protected void register_getPolygonModeOverrideable_void(long pNativeObject, String method);
	native protected void register_setCustomAmbient_CColourValue(long pNativeObject, String method);
	native protected void register_getCustomAmbient_void(long pNativeObject, String method);
	native protected void register_getCustomAmbientEnabled_void(long pNativeObject, String method);
	native protected void register_setCustomAmbientEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getMovableObject_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_existListener_CRenderableListener(long pNativeObject, String method);
	native protected void register_getListenerCount_void(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getRenderSystemData_void(long pNativeObject, String method);
	native protected void register_setRenderSystemData_CRenderSystemData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getTechnique_void(this.nativeObject.pointer, "getTechnique_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "preRender_CSceneManager_CRenderSystem_callback");
			this.register_postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, "postRender_CSceneManager_CRenderSystem_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getNumWorldTransforms_void(this.nativeObject.pointer, "getNumWorldTransforms_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getCastsShadows_void(this.nativeObject.pointer, "getCastsShadows_void_callback");
			this.register__updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "_updateCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_setPolygonModeOverrideable_ev_bool(this.nativeObject.pointer, "setPolygonModeOverrideable_ev_bool_callback");
			this.register_getPolygonModeOverrideable_void(this.nativeObject.pointer, "getPolygonModeOverrideable_void_callback");
			this.register_setCustomAmbient_CColourValue(this.nativeObject.pointer, "setCustomAmbient_CColourValue_callback");
			this.register_getCustomAmbient_void(this.nativeObject.pointer, "getCustomAmbient_void_callback");
			this.register_getCustomAmbientEnabled_void(this.nativeObject.pointer, "getCustomAmbientEnabled_void_callback");
			this.register_setCustomAmbientEnabled_ev_bool(this.nativeObject.pointer, "setCustomAmbientEnabled_ev_bool_callback");
			this.register_getMovableObject_void(this.nativeObject.pointer, "getMovableObject_void_callback");
			this.register_addListener_CRenderableListener(this.nativeObject.pointer, "addListener_CRenderableListener_callback");
			this.register_removeListener_CRenderableListener(this.nativeObject.pointer, "removeListener_CRenderableListener_callback");
			this.register_existListener_CRenderableListener(this.nativeObject.pointer, "existListener_CRenderableListener_callback");
			this.register_getListenerCount_void(this.nativeObject.pointer, "getListenerCount_void_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getRenderSystemData_void(this.nativeObject.pointer, "getRenderSystemData_void_callback");
			this.register_setRenderSystemData_CRenderSystemData(this.nativeObject.pointer, "setRenderSystemData_CRenderSystemData_callback");
		}
	}
	
	public static Renderable fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Renderable obj = null;
 		if(baseObj instanceof Renderable)
		{
			obj = (Renderable)baseObj;
		} else {
			obj = new Renderable(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderable");
			obj.increaseCast();
		}

		return obj;
	}
}
