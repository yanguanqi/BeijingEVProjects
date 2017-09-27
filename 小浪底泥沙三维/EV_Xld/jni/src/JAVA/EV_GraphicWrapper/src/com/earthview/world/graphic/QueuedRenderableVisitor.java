package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CVisitor接口服务于EarthView::World::Graphic::CQueuedRenderableCollection中的消息
 */
public class QueuedRenderableVisitor extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CQueuedRenderableVisitor", new QueuedRenderableVisitorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCQueuedRenderableVisitorProxy", new QueuedRenderableVisitorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public QueuedRenderableVisitor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCQueuedRenderableVisitorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.QueuedRenderableVisitor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void visit_RenderablePass_callback(long rp)
	{
		com.earthview.world.graphic.RenderablePass rpParamValue = (rp == 0L ? null : new com.earthview.world.graphic.RenderablePass(CreatedWhenConstruct.CWC_NotToCreate));
		if(rpParamValue != null)
		{
		rpParamValue.setDelegate(true);
		rpParamValue.setInstancePointer(new InstancePointer(rp));
		IClassFactory rpParamValueClassFactory = GlobalClassFactoryMap.get(rpParamValue.getCppInstanceTypeName());
		if (rpParamValueClassFactory != null)
		{
			rpParamValue.setDelegate(true);
			rpParamValue = (com.earthview.world.graphic.RenderablePass)rpParamValueClassFactory.create();
			rpParamValue.setDelegate(true);
			rpParamValue.setInstancePointer(new InstancePointer(rp));
		}
		}
		visit(rpParamValue);
	}

	native private void visit_RenderablePass(long pNativeObject, long rp);
	/**
	 * 当访问渲染通路时被调用，消息在一个分类的集合里，但不是通过通路分类的
	 * @param rp 渲染通路
	 */
	public void visit(com.earthview.world.graphic.RenderablePass rp)
	{
		long rpParamValue = (rp == null ? 0L : rp.nativeObject.pointer);
		visit_RenderablePass(this.nativeObject.pointer, rpParamValue);
	}
	native private void visit_RenderablePass_NoVirtual(long pNativeObject, long rp);
	protected void visit_NoVirtual(com.earthview.world.graphic.RenderablePass rp)
	{
		long rpParamValue = (rp == null ? 0L : rp.nativeObject.pointer);
		visit_RenderablePass_NoVirtual(this.nativeObject.pointer, rpParamValue);
	}

	protected  boolean visit_CPass_callback(long p)
	{
		com.earthview.world.graphic.Pass pParamValue = (p == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(pParamValue != null)
		{
		pParamValue.setDelegate(true);
		pParamValue.setInstancePointer(new InstancePointer(p));
		IClassFactory pParamValueClassFactory = GlobalClassFactoryMap.get(pParamValue.getCppInstanceTypeName());
		if (pParamValueClassFactory != null)
		{
			pParamValue.setDelegate(true);
			pParamValue = (com.earthview.world.graphic.Pass)pParamValueClassFactory.create();
			pParamValue.setDelegate(true);
			pParamValue.setInstancePointer(new InstancePointer(p));
		}
		}
		boolean returnValue = visit(pParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean visit_CPass(long pNativeObject, long p);
	/**
	 * 当访问一个通过通路分类的集合，当通路改变时，这个函数被调用
	 * @param p 通路
	 */
	public boolean visit(com.earthview.world.graphic.Pass p)
	{
		long pParamValue = (p == null ? 0L : p.nativeObject.pointer);
		boolean returnValue = visit_CPass(this.nativeObject.pointer, pParamValue);
		return returnValue;
	}
	native private boolean visit_CPass_NoVirtual(long pNativeObject, long p);
	protected boolean visit_NoVirtual(com.earthview.world.graphic.Pass p)
	{
		long pParamValue = (p == null ? 0L : p.nativeObject.pointer);
		boolean returnValue = visit_CPass_NoVirtual(this.nativeObject.pointer, pParamValue);
		return returnValue;
	}

	protected  void visit_CRenderable_callback(long r)
	{
		com.earthview.world.graphic.Renderable rParamValue = (r == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
		if(rParamValue != null)
		{
		rParamValue.setDelegate(true);
		rParamValue.setInstancePointer(new InstancePointer(r));
		IClassFactory rParamValueClassFactory = GlobalClassFactoryMap.get(rParamValue.getCppInstanceTypeName());
		if (rParamValueClassFactory != null)
		{
			rParamValue.setDelegate(true);
			rParamValue = (com.earthview.world.graphic.Renderable)rParamValueClassFactory.create();
			rParamValue.setDelegate(true);
			rParamValue.setInstancePointer(new InstancePointer(r));
		}
		}
		visit(rParamValue);
	}

	native private void visit_CRenderable(long pNativeObject, long r);
	/**
	 * 在集合里面的每个渲染接口调用一次访问方法
	 * @param r 渲染接口
	 */
	public void visit(com.earthview.world.graphic.Renderable r)
	{
		long rParamValue = (r == null ? 0L : r.nativeObject.pointer);
		visit_CRenderable(this.nativeObject.pointer, rParamValue);
	}
	native private void visit_CRenderable_NoVirtual(long pNativeObject, long r);
	protected void visit_NoVirtual(com.earthview.world.graphic.Renderable r)
	{
		long rParamValue = (r == null ? 0L : r.nativeObject.pointer);
		visit_CRenderable_NoVirtual(this.nativeObject.pointer, rParamValue);
	}

	public QueuedRenderableVisitor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public QueuedRenderableVisitor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_visit_RenderablePass(long pNativeObject, String method);
	native protected void register_visit_CPass(long pNativeObject, String method);
	native protected void register_visit_CRenderable(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_visit_RenderablePass(this.nativeObject.pointer, "visit_RenderablePass_callback");
			this.register_visit_CPass(this.nativeObject.pointer, "visit_CPass_callback");
			this.register_visit_CRenderable(this.nativeObject.pointer, "visit_CRenderable_callback");
		}
	}
	
	public static QueuedRenderableVisitor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		QueuedRenderableVisitor obj = null;
 		if(baseObj instanceof QueuedRenderableVisitor)
		{
			obj = (QueuedRenderableVisitor)baseObj;
		} else {
			obj = new QueuedRenderableVisitor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CQueuedRenderableVisitor");
			obj.increaseCast();
		}

		return obj;
	}
}
