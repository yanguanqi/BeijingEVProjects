package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqmodelstatelistener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::COBQModelStateListener", new ObqmodelstatelistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCOBQModelStateListenerProxy", new ObqmodelstatelistenerClassFactory());
	}

	public Obqmodelstatelistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOBQModelStateListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.Obqmodelstatelistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void modelLoaded_CEntity_callback(long entity)
	{
		com.earthview.world.graphic.Entity entityParamValue = (entity == 0L ? null : new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate));
		if(entityParamValue != null)
		{
		entityParamValue.setDelegate(true);
		entityParamValue.setInstancePointer(new InstancePointer(entity));
		IClassFactory entityParamValueClassFactory = GlobalClassFactoryMap.get(entityParamValue.getCppInstanceTypeName());
		if (entityParamValueClassFactory != null)
		{
			entityParamValue.setDelegate(true);
			entityParamValue = (com.earthview.world.graphic.Entity)entityParamValueClassFactory.create();
			entityParamValue.setDelegate(true);
			entityParamValue.setInstancePointer(new InstancePointer(entity));
		}
		}
		modelLoaded(entityParamValue);
	}

	native private void modelLoaded_CEntity(long pNativeObject, long entity);
	/**
	 * 模型加载之后监听
	 * @param object 被加载的模型对象
	 */
	public void modelLoaded(com.earthview.world.graphic.Entity entity)
	{
		long entityParamValue = (entity == null ? 0L : entity.nativeObject.pointer);
		modelLoaded_CEntity(this.nativeObject.pointer, entityParamValue);
	}
	native private void modelLoaded_CEntity_NoVirtual(long pNativeObject, long entity);
	protected void modelLoaded_NoVirtual(com.earthview.world.graphic.Entity entity)
	{
		long entityParamValue = (entity == null ? 0L : entity.nativeObject.pointer);
		modelLoaded_CEntity_NoVirtual(this.nativeObject.pointer, entityParamValue);
	}

	public Obqmodelstatelistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqmodelstatelistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_modelLoaded_CEntity(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_modelLoaded_CEntity(this.nativeObject.pointer, "modelLoaded_CEntity_callback");
		}
	}
	
	public static Obqmodelstatelistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqmodelstatelistener obj = null;
 		if(baseObj instanceof Obqmodelstatelistener)
		{
			obj = (Obqmodelstatelistener)baseObj;
		} else {
			obj = new Obqmodelstatelistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COBQModelStateListener");
			obj.increaseCast();
		}

		return obj;
	}
}
