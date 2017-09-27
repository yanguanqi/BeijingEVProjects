package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 当单个渲染对象将被渲染时，如果希望从场景管理中获得事件，就必须执行该抽象接口
 */
public class RenderObjectListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderObjectListener", new RenderObjectListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderObjectListenerProxy", new RenderObjectListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderObjectListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderObjectListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderObjectListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges)
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
		com.earthview.world.graphic.Pass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(passParamValue != null)
		{
		passParamValue.setDelegate(true);
		passParamValue.setInstancePointer(new InstancePointer(pass));
		IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
		if (passParamValueClassFactory != null)
		{
			passParamValue.setDelegate(true);
			passParamValue = (com.earthview.world.graphic.Pass)passParamValueClassFactory.create();
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
		}
		}
		com.earthview.world.graphic.AutoParamDataSource sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.AutoParamDataSource)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.LightList pLightListParamValue = (pLightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLightListParamValue != null)
		{
		pLightListParamValue.setDelegate(true);
		pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		IClassFactory pLightListParamValueClassFactory = GlobalClassFactoryMap.get(pLightListParamValue.getCppInstanceTypeName());
		if (pLightListParamValueClassFactory != null)
		{
			pLightListParamValue.setDelegate(true);
			pLightListParamValue = (com.earthview.world.graphic.LightList)pLightListParamValueClassFactory.create();
			pLightListParamValue.setDelegate(true);
			pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		}
		}
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectStarted(rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}

	native private void notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
	/**
	 * 开始渲染单个对象时调用该事件
	 * @param rend 渲染接口
	 * @param pass 渲染通路
	 * @param source 动态参数源
	 * @param pLightList 光照列表
	 * @param suppressRenderStateChanges 抑制渲染状态改变的参数
	 */
	public void notifyRenderSingleObjectStarted(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}
	native private void notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
	protected void notifyRenderSingleObjectStarted_NoVirtual(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}

	protected  void notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges)
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
		com.earthview.world.graphic.Pass passParamValue = (pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(passParamValue != null)
		{
		passParamValue.setDelegate(true);
		passParamValue.setInstancePointer(new InstancePointer(pass));
		IClassFactory passParamValueClassFactory = GlobalClassFactoryMap.get(passParamValue.getCppInstanceTypeName());
		if (passParamValueClassFactory != null)
		{
			passParamValue.setDelegate(true);
			passParamValue = (com.earthview.world.graphic.Pass)passParamValueClassFactory.create();
			passParamValue.setDelegate(true);
			passParamValue.setInstancePointer(new InstancePointer(pass));
		}
		}
		com.earthview.world.graphic.AutoParamDataSource sourceParamValue = (source == 0L ? null : new com.earthview.world.graphic.AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceParamValue != null)
		{
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.AutoParamDataSource)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		}
		com.earthview.world.graphic.LightList pLightListParamValue = (pLightList == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
		if(pLightListParamValue != null)
		{
		pLightListParamValue.setDelegate(true);
		pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		IClassFactory pLightListParamValueClassFactory = GlobalClassFactoryMap.get(pLightListParamValue.getCppInstanceTypeName());
		if (pLightListParamValueClassFactory != null)
		{
			pLightListParamValue.setDelegate(true);
			pLightListParamValue = (com.earthview.world.graphic.LightList)pLightListParamValueClassFactory.create();
			pLightListParamValue.setDelegate(true);
			pLightListParamValue.setInstancePointer(new InstancePointer(pLightList));
		}
		}
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectEnd(rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}

	native private void notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
	public void notifyRenderSingleObjectEnd(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}
	native private void notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(long pNativeObject, long rend, long pass, long source, long pLightList, boolean suppressRenderStateChanges);
	protected void notifyRenderSingleObjectEnd_NoVirtual(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		long rendParamValue = (rend == null ? 0L : rend.nativeObject.pointer);
		long passParamValue = (pass == null ? 0L : pass.nativeObject.pointer);
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long pLightListParamValue = (pLightList == null ? 0L : pLightList.nativeObject.pointer);
		boolean suppressRenderStateChangesParamValue = suppressRenderStateChanges;
		notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_NoVirtual(this.nativeObject.pointer, rendParamValue, passParamValue, sourceParamValue, pLightListParamValue, suppressRenderStateChangesParamValue);
	}

	public RenderObjectListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderObjectListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
	native protected void register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
			this.register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
		}
	}
	
	public static RenderObjectListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderObjectListener obj = null;
 		if(baseObj instanceof RenderObjectListener)
		{
			obj = (RenderObjectListener)baseObj;
		} else {
			obj = new RenderObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderObjectListener");
			obj.increaseCast();
		}

		return obj;
	}
}
