package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteFlyListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRouteFlyListener", new RouteFlyListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCRouteFlyListenerProxy", new RouteFlyListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RouteFlyListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRouteFlyListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.RouteFlyListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void startRouteFly_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		startRouteFly(pManualModelObjectParamValue);
	}

	native private void startRouteFly_CModelBaseObject(long pNativeObject, long pManualModelObject);
	/**
	 * 开始路径飞行。
	 * @param pManualModelObject 模型对象。（只有允许模型显示时，这个模型对象才能用）
	 */
	public void startRouteFly(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		startRouteFly_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void startRouteFly_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void startRouteFly_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		startRouteFly_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void onRouteFlyStarted_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		onRouteFlyStarted(pManualModelObjectParamValue);
	}

	native private void onRouteFlyStarted_CModelBaseObject(long pNativeObject, long pManualModelObject);
	public void onRouteFlyStarted(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyStarted_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void onRouteFlyStarted_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void onRouteFlyStarted_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyStarted_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void stopRouteFly_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		stopRouteFly(pManualModelObjectParamValue);
	}

	native private void stopRouteFly_CModelBaseObject(long pNativeObject, long pManualModelObject);
	/**
	 * 停止路径飞行。
	 * @param pManualModelObject 模型对象。（只有允许模型显示时，这个模型对象才能用）
	 */
	public void stopRouteFly(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		stopRouteFly_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void stopRouteFly_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void stopRouteFly_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		stopRouteFly_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void onRouteFlyStoped_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		onRouteFlyStoped(pManualModelObjectParamValue);
	}

	native private void onRouteFlyStoped_CModelBaseObject(long pNativeObject, long pManualModelObject);
	public void onRouteFlyStoped(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyStoped_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void onRouteFlyStoped_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void onRouteFlyStoped_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyStoped_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void pauseRouteFly_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		pauseRouteFly(pManualModelObjectParamValue);
	}

	native private void pauseRouteFly_CModelBaseObject(long pNativeObject, long pManualModelObject);
	/**
	 * 暂停路径飞行。
	 * @param pManualModelObject 模型对象。（只有允许模型显示时，这个模型对象才能用）
	 */
	public void pauseRouteFly(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		pauseRouteFly_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void pauseRouteFly_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void pauseRouteFly_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		pauseRouteFly_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void onRouteFlyPaused_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		onRouteFlyPaused(pManualModelObjectParamValue);
	}

	native private void onRouteFlyPaused_CModelBaseObject(long pNativeObject, long pManualModelObject);
	public void onRouteFlyPaused(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyPaused_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void onRouteFlyPaused_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void onRouteFlyPaused_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyPaused_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void continueRouteFly_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		continueRouteFly(pManualModelObjectParamValue);
	}

	native private void continueRouteFly_CModelBaseObject(long pNativeObject, long pManualModelObject);
	/**
	 * 继续路径飞行。
	 * @param pManualModelObject 模型对象。（只有允许模型显示时，这个模型对象才能用）
	 */
	public void continueRouteFly(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		continueRouteFly_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void continueRouteFly_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void continueRouteFly_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		continueRouteFly_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void onRouteFlyContinued_CModelBaseObject_callback(long pManualModelObject)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObjectParamValue = (pManualModelObject == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pManualModelObjectParamValue != null)
		{
		pManualModelObjectParamValue.setDelegate(true);
		pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		IClassFactory pManualModelObjectParamValueClassFactory = GlobalClassFactoryMap.get(pManualModelObjectParamValue.getCppInstanceTypeName());
		if (pManualModelObjectParamValueClassFactory != null)
		{
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)pManualModelObjectParamValueClassFactory.create();
			pManualModelObjectParamValue.setDelegate(true);
			pManualModelObjectParamValue.setInstancePointer(new InstancePointer(pManualModelObject));
		}
		}
		onRouteFlyContinued(pManualModelObjectParamValue);
	}

	native private void onRouteFlyContinued_CModelBaseObject(long pNativeObject, long pManualModelObject);
	public void onRouteFlyContinued(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyContinued_CModelBaseObject(this.nativeObject.pointer, pManualModelObjectParamValue);
	}
	native private void onRouteFlyContinued_CModelBaseObject_NoVirtual(long pNativeObject, long pManualModelObject);
	protected void onRouteFlyContinued_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject pManualModelObject)
	{
		long pManualModelObjectParamValue = (pManualModelObject == null ? 0L : pManualModelObject.nativeObject.pointer);
		onRouteFlyContinued_CModelBaseObject_NoVirtual(this.nativeObject.pointer, pManualModelObjectParamValue);
	}

	protected  void onRouteFlyFinished_void_callback()
	{
		onRouteFlyFinished();
	}

	native private void onRouteFlyFinished_void(long pNativeObject);
	/**
	 * 飞行到终点时触发
	 */
	public void onRouteFlyFinished()
	{
		onRouteFlyFinished_void(this.nativeObject.pointer);
	}
	native private void onRouteFlyFinished_void_NoVirtual(long pNativeObject);
	protected void onRouteFlyFinished_NoVirtual()
	{
		onRouteFlyFinished_void_NoVirtual(this.nativeObject.pointer);
	}

	public RouteFlyListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteFlyListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_startRouteFly_CModelBaseObject(long pNativeObject, String method);
	native protected void register_onRouteFlyStarted_CModelBaseObject(long pNativeObject, String method);
	native protected void register_stopRouteFly_CModelBaseObject(long pNativeObject, String method);
	native protected void register_onRouteFlyStoped_CModelBaseObject(long pNativeObject, String method);
	native protected void register_pauseRouteFly_CModelBaseObject(long pNativeObject, String method);
	native protected void register_onRouteFlyPaused_CModelBaseObject(long pNativeObject, String method);
	native protected void register_continueRouteFly_CModelBaseObject(long pNativeObject, String method);
	native protected void register_onRouteFlyContinued_CModelBaseObject(long pNativeObject, String method);
	native protected void register_onRouteFlyFinished_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_startRouteFly_CModelBaseObject(this.nativeObject.pointer, "startRouteFly_CModelBaseObject_callback");
			this.register_onRouteFlyStarted_CModelBaseObject(this.nativeObject.pointer, "onRouteFlyStarted_CModelBaseObject_callback");
			this.register_stopRouteFly_CModelBaseObject(this.nativeObject.pointer, "stopRouteFly_CModelBaseObject_callback");
			this.register_onRouteFlyStoped_CModelBaseObject(this.nativeObject.pointer, "onRouteFlyStoped_CModelBaseObject_callback");
			this.register_pauseRouteFly_CModelBaseObject(this.nativeObject.pointer, "pauseRouteFly_CModelBaseObject_callback");
			this.register_onRouteFlyPaused_CModelBaseObject(this.nativeObject.pointer, "onRouteFlyPaused_CModelBaseObject_callback");
			this.register_continueRouteFly_CModelBaseObject(this.nativeObject.pointer, "continueRouteFly_CModelBaseObject_callback");
			this.register_onRouteFlyContinued_CModelBaseObject(this.nativeObject.pointer, "onRouteFlyContinued_CModelBaseObject_callback");
			this.register_onRouteFlyFinished_void(this.nativeObject.pointer, "onRouteFlyFinished_void_callback");
		}
	}
	
	public static RouteFlyListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteFlyListener obj = null;
 		if(baseObj instanceof RouteFlyListener)
		{
			obj = (RouteFlyListener)baseObj;
		} else {
			obj = new RouteFlyListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteFlyListener");
			obj.increaseCast();
		}

		return obj;
	}
}
