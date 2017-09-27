package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLodListener", new LodListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLodListenerProxy", new LodListenerClassFactory());
	}

	public LodListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLodListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LodListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.MovableObjectLodChangedEvent evtParamValue = new com.earthview.world.graphic.MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.MovableObjectLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		boolean returnValue = prequeueMovableObjectLodChanged(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent(long pNativeObject, long evt);
	public boolean prequeueMovableObjectLodChanged(com.earthview.world.graphic.MovableObjectLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean prequeueMovableObjectLodChanged_NoVirtual(com.earthview.world.graphic.MovableObjectLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  void postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.MovableObjectLodChangedEvent evtParamValue = new com.earthview.world.graphic.MovableObjectLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.MovableObjectLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		postqueueMovableObjectLodChanged(evtParamValue);
	}

	native private void postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent(long pNativeObject, long evt);
	public void postqueueMovableObjectLodChanged(com.earthview.world.graphic.MovableObjectLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected void postqueueMovableObjectLodChanged_NoVirtual(com.earthview.world.graphic.MovableObjectLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  boolean prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.EntityMeshLodChangedEvent evtParamValue = new com.earthview.world.graphic.EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.EntityMeshLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		boolean returnValue = prequeueEntityMeshLodChanged(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent(long pNativeObject, long evt);
	public boolean prequeueEntityMeshLodChanged(com.earthview.world.graphic.EntityMeshLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean prequeueEntityMeshLodChanged_NoVirtual(com.earthview.world.graphic.EntityMeshLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  void postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.EntityMeshLodChangedEvent evtParamValue = new com.earthview.world.graphic.EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.EntityMeshLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		postqueueEntityMeshLodChanged(evtParamValue);
	}

	native private void postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent(long pNativeObject, long evt);
	public void postqueueEntityMeshLodChanged(com.earthview.world.graphic.EntityMeshLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected void postqueueEntityMeshLodChanged_NoVirtual(com.earthview.world.graphic.EntityMeshLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	protected  boolean prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.EntityMaterialLodChangedEvent evtParamValue = new com.earthview.world.graphic.EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.EntityMaterialLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		boolean returnValue = prequeueEntityMaterialLodChanged(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(long pNativeObject, long evt);
	public boolean prequeueEntityMaterialLodChanged(com.earthview.world.graphic.EntityMaterialLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean prequeueEntityMaterialLodChanged_NoVirtual(com.earthview.world.graphic.EntityMaterialLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  void postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback(long evt)
	{
		com.earthview.world.graphic.EntityMaterialLodChangedEvent evtParamValue = new com.earthview.world.graphic.EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.EntityMaterialLodChangedEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		postqueueEntityMaterialLodChanged(evtParamValue);
	}

	native private void postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(long pNativeObject, long evt);
	public void postqueueEntityMaterialLodChanged(com.earthview.world.graphic.EntityMaterialLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(this.nativeObject.pointer, evtParamValue);
	}
	native private void postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_NoVirtual(long pNativeObject, long evt);
	protected void postqueueEntityMaterialLodChanged_NoVirtual(com.earthview.world.graphic.EntityMaterialLodChangedEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
	}

	public LodListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent(long pNativeObject, String method);
	native protected void register_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent(long pNativeObject, String method);
	native protected void register_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent(long pNativeObject, String method);
	native protected void register_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent(long pNativeObject, String method);
	native protected void register_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(long pNativeObject, String method);
	native protected void register_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent(this.nativeObject.pointer, "prequeueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback");
			this.register_postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent(this.nativeObject.pointer, "postqueueMovableObjectLodChanged_MovableObjectLodChangedEvent_callback");
			this.register_prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent(this.nativeObject.pointer, "prequeueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback");
			this.register_postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent(this.nativeObject.pointer, "postqueueEntityMeshLodChanged_EntityMeshLodChangedEvent_callback");
			this.register_prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(this.nativeObject.pointer, "prequeueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback");
			this.register_postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent(this.nativeObject.pointer, "postqueueEntityMaterialLodChanged_EntityMaterialLodChangedEvent_callback");
		}
	}
	
	public static LodListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodListener obj = null;
 		if(baseObj instanceof LodListener)
		{
			obj = (LodListener)baseObj;
		} else {
			obj = new LodListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodListener");
			obj.increaseCast();
		}

		return obj;
	}
}
