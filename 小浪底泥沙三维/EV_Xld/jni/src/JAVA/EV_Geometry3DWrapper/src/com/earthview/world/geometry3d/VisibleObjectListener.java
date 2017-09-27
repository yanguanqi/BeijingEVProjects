package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CVisibleObjectListener", new VisibleObjectListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCVisibleObjectListenerProxy", new VisibleObjectListenerClassFactory());
	}

	public VisibleObjectListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVisibleObjectListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.VisibleObjectListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void notifyLoaded_CVisibleObject_callback(long pObj)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		notifyLoaded(pObjParamValue);
	}

	native private void notifyLoaded_CVisibleObject(long pNativeObject, long pObj);
	/**
	 * 通知加载资源完成
	 */
	public void notifyLoaded(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyLoaded_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void notifyLoaded_CVisibleObject_NoVirtual(long pNativeObject, long pObj);
	protected void notifyLoaded_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyLoaded_CVisibleObject_NoVirtual(this.nativeObject.pointer, pObjParamValue);
	}

	protected  void notifyUnloaded_CVisibleObject_callback(long pObj)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		notifyUnloaded(pObjParamValue);
	}

	native private void notifyUnloaded_CVisibleObject(long pNativeObject, long pObj);
	/**
	 * 通知卸载资源完成
	 */
	public void notifyUnloaded(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyUnloaded_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void notifyUnloaded_CVisibleObject_NoVirtual(long pNativeObject, long pObj);
	protected void notifyUnloaded_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyUnloaded_CVisibleObject_NoVirtual(this.nativeObject.pointer, pObjParamValue);
	}

	protected  void notifyAttachedToNode_CVisibleObject_CNode_callback(long pObj, long parentNode)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		com.earthview.world.graphic.Node parentNodeParamValue = (parentNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(parentNodeParamValue != null)
		{
		parentNodeParamValue.setDelegate(true);
		parentNodeParamValue.setInstancePointer(new InstancePointer(parentNode));
		IClassFactory parentNodeParamValueClassFactory = GlobalClassFactoryMap.get(parentNodeParamValue.getCppInstanceTypeName());
		if (parentNodeParamValueClassFactory != null)
		{
			parentNodeParamValue.setDelegate(true);
			parentNodeParamValue = (com.earthview.world.graphic.Node)parentNodeParamValueClassFactory.create();
			parentNodeParamValue.setDelegate(true);
			parentNodeParamValue.setInstancePointer(new InstancePointer(parentNode));
		}
		}
		notifyAttachedToNode(pObjParamValue, parentNodeParamValue);
	}

	native private void notifyAttachedToNode_CVisibleObject_CNode(long pNativeObject, long pObj, long parentNode);
	/**
	 * 通知挂接完成
	 */
	public void notifyAttachedToNode(com.earthview.world.geometry3d.VisibleObject pObj, com.earthview.world.graphic.Node parentNode)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		long parentNodeParamValue = (parentNode == null ? 0L : parentNode.nativeObject.pointer);
		notifyAttachedToNode_CVisibleObject_CNode(this.nativeObject.pointer, pObjParamValue, parentNodeParamValue);
	}
	native private void notifyAttachedToNode_CVisibleObject_CNode_NoVirtual(long pNativeObject, long pObj, long parentNode);
	protected void notifyAttachedToNode_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj, com.earthview.world.graphic.Node parentNode)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		long parentNodeParamValue = (parentNode == null ? 0L : parentNode.nativeObject.pointer);
		notifyAttachedToNode_CVisibleObject_CNode_NoVirtual(this.nativeObject.pointer, pObjParamValue, parentNodeParamValue);
	}

	protected  void notifyDetachedFromNode_CVisibleObject_CNode_callback(long pObj, long parentNode)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		com.earthview.world.graphic.Node parentNodeParamValue = (parentNode == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(parentNodeParamValue != null)
		{
		parentNodeParamValue.setDelegate(true);
		parentNodeParamValue.setInstancePointer(new InstancePointer(parentNode));
		IClassFactory parentNodeParamValueClassFactory = GlobalClassFactoryMap.get(parentNodeParamValue.getCppInstanceTypeName());
		if (parentNodeParamValueClassFactory != null)
		{
			parentNodeParamValue.setDelegate(true);
			parentNodeParamValue = (com.earthview.world.graphic.Node)parentNodeParamValueClassFactory.create();
			parentNodeParamValue.setDelegate(true);
			parentNodeParamValue.setInstancePointer(new InstancePointer(parentNode));
		}
		}
		notifyDetachedFromNode(pObjParamValue, parentNodeParamValue);
	}

	native private void notifyDetachedFromNode_CVisibleObject_CNode(long pNativeObject, long pObj, long parentNode);
	/**
	 * 通知反挂接完成
	 */
	public void notifyDetachedFromNode(com.earthview.world.geometry3d.VisibleObject pObj, com.earthview.world.graphic.Node parentNode)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		long parentNodeParamValue = (parentNode == null ? 0L : parentNode.nativeObject.pointer);
		notifyDetachedFromNode_CVisibleObject_CNode(this.nativeObject.pointer, pObjParamValue, parentNodeParamValue);
	}
	native private void notifyDetachedFromNode_CVisibleObject_CNode_NoVirtual(long pNativeObject, long pObj, long parentNode);
	protected void notifyDetachedFromNode_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj, com.earthview.world.graphic.Node parentNode)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		long parentNodeParamValue = (parentNode == null ? 0L : parentNode.nativeObject.pointer);
		notifyDetachedFromNode_CVisibleObject_CNode_NoVirtual(this.nativeObject.pointer, pObjParamValue, parentNodeParamValue);
	}

	protected  void notifyAttachedToScene_CVisibleObject_callback(long pObj)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		notifyAttachedToScene(pObjParamValue);
	}

	native private void notifyAttachedToScene_CVisibleObject(long pNativeObject, long pObj);
	/**
	 * 通知挂接完成
	 */
	public void notifyAttachedToScene(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyAttachedToScene_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void notifyAttachedToScene_CVisibleObject_NoVirtual(long pNativeObject, long pObj);
	protected void notifyAttachedToScene_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyAttachedToScene_CVisibleObject_NoVirtual(this.nativeObject.pointer, pObjParamValue);
	}

	protected  void notifyDetachedFromScene_CVisibleObject_callback(long pObj)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		notifyDetachedFromScene(pObjParamValue);
	}

	native private void notifyDetachedFromScene_CVisibleObject(long pNativeObject, long pObj);
	/**
	 * 通知反挂接完成
	 */
	public void notifyDetachedFromScene(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyDetachedFromScene_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void notifyDetachedFromScene_CVisibleObject_NoVirtual(long pNativeObject, long pObj);
	protected void notifyDetachedFromScene_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyDetachedFromScene_CVisibleObject_NoVirtual(this.nativeObject.pointer, pObjParamValue);
	}

	protected  void notifyDestroyed_CVisibleObject_callback(long pObj)
	{
		com.earthview.world.geometry3d.VisibleObject pObjParamValue = (pObj == 0L ? null : new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(pObjParamValue != null)
		{
		pObjParamValue.setDelegate(true);
		pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		IClassFactory pObjParamValueClassFactory = GlobalClassFactoryMap.get(pObjParamValue.getCppInstanceTypeName());
		if (pObjParamValueClassFactory != null)
		{
			pObjParamValue.setDelegate(true);
			pObjParamValue = (com.earthview.world.geometry3d.VisibleObject)pObjParamValueClassFactory.create();
			pObjParamValue.setDelegate(true);
			pObjParamValue.setInstancePointer(new InstancePointer(pObj));
		}
		}
		notifyDestroyed(pObjParamValue);
	}

	native private void notifyDestroyed_CVisibleObject(long pNativeObject, long pObj);
	/**
	 * 通知即将销毁
	 */
	public void notifyDestroyed(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyDestroyed_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void notifyDestroyed_CVisibleObject_NoVirtual(long pNativeObject, long pObj);
	protected void notifyDestroyed_NoVirtual(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		notifyDestroyed_CVisibleObject_NoVirtual(this.nativeObject.pointer, pObjParamValue);
	}

	public VisibleObjectListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VisibleObjectListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_notifyLoaded_CVisibleObject(long pNativeObject, String method);
	native protected void register_notifyUnloaded_CVisibleObject(long pNativeObject, String method);
	native protected void register_notifyAttachedToNode_CVisibleObject_CNode(long pNativeObject, String method);
	native protected void register_notifyDetachedFromNode_CVisibleObject_CNode(long pNativeObject, String method);
	native protected void register_notifyAttachedToScene_CVisibleObject(long pNativeObject, String method);
	native protected void register_notifyDetachedFromScene_CVisibleObject(long pNativeObject, String method);
	native protected void register_notifyDestroyed_CVisibleObject(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_notifyLoaded_CVisibleObject(this.nativeObject.pointer, "notifyLoaded_CVisibleObject_callback");
			this.register_notifyUnloaded_CVisibleObject(this.nativeObject.pointer, "notifyUnloaded_CVisibleObject_callback");
			this.register_notifyAttachedToNode_CVisibleObject_CNode(this.nativeObject.pointer, "notifyAttachedToNode_CVisibleObject_CNode_callback");
			this.register_notifyDetachedFromNode_CVisibleObject_CNode(this.nativeObject.pointer, "notifyDetachedFromNode_CVisibleObject_CNode_callback");
			this.register_notifyAttachedToScene_CVisibleObject(this.nativeObject.pointer, "notifyAttachedToScene_CVisibleObject_callback");
			this.register_notifyDetachedFromScene_CVisibleObject(this.nativeObject.pointer, "notifyDetachedFromScene_CVisibleObject_callback");
			this.register_notifyDestroyed_CVisibleObject(this.nativeObject.pointer, "notifyDestroyed_CVisibleObject_callback");
		}
	}
	
	public static VisibleObjectListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VisibleObjectListener obj = null;
 		if(baseObj instanceof VisibleObjectListener)
		{
			obj = (VisibleObjectListener)baseObj;
		} else {
			obj = new VisibleObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVisibleObjectListener");
			obj.increaseCast();
		}

		return obj;
	}
}
