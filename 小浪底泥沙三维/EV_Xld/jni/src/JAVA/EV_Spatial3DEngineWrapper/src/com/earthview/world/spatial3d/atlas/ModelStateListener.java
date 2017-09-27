package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelStateListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CModelStateListener", new ModelStateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCModelStateListenerProxy", new ModelStateListenerClassFactory());
	}

	public ModelStateListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelStateListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.ModelStateListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void modelUnLoaded_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		modelUnLoaded(objectParamValue);
	}

	native private void modelUnLoaded_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型卸载之后监听
	 * @param object 被卸载的模型对象
	 */
	public void modelUnLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelUnLoaded_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void modelUnLoaded_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void modelUnLoaded_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelUnLoaded_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void modelLoaded_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		modelLoaded(objectParamValue);
	}

	native private void modelLoaded_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型加载之后监听
	 * @param object 被加载的模型对象
	 */
	public void modelLoaded(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelLoaded_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void modelLoaded_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void modelLoaded_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelLoaded_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void modelPreAttach_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		modelPreAttach(objectParamValue);
	}

	native private void modelPreAttach_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型挂接之前监听
	 * @param object 被挂接的模型对象
	 */
	public void modelPreAttach(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelPreAttach_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void modelPreAttach_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void modelPreAttach_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelPreAttach_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void modelAttached_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		modelAttached(objectParamValue);
	}

	native private void modelAttached_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型挂接后监听
	 * @param object 被挂接的模型对象
	 */
	public void modelAttached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelAttached_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void modelAttached_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void modelAttached_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelAttached_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	protected  void modelDetached_CModelBaseObject_callback(long object)
	{
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject objectParamValue = (object == 0L ? null : new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		modelDetached(objectParamValue);
	}

	native private void modelDetached_CModelBaseObject(long pNativeObject, long object);
	/**
	 * 模型反挂接后监听
	 * @param object 被挂接的模型对象
	 */
	public void modelDetached(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelDetached_CModelBaseObject(this.nativeObject.pointer, objectParamValue);
	}
	native private void modelDetached_CModelBaseObject_NoVirtual(long pNativeObject, long object);
	protected void modelDetached_NoVirtual(com.earthview.world.spatial3d.modelmanager.ModelBaseObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		modelDetached_CModelBaseObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
	}

	public ModelStateListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelStateListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_modelUnLoaded_CModelBaseObject(long pNativeObject, String method);
	native protected void register_modelLoaded_CModelBaseObject(long pNativeObject, String method);
	native protected void register_modelPreAttach_CModelBaseObject(long pNativeObject, String method);
	native protected void register_modelAttached_CModelBaseObject(long pNativeObject, String method);
	native protected void register_modelDetached_CModelBaseObject(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_modelUnLoaded_CModelBaseObject(this.nativeObject.pointer, "modelUnLoaded_CModelBaseObject_callback");
			this.register_modelLoaded_CModelBaseObject(this.nativeObject.pointer, "modelLoaded_CModelBaseObject_callback");
			this.register_modelPreAttach_CModelBaseObject(this.nativeObject.pointer, "modelPreAttach_CModelBaseObject_callback");
			this.register_modelAttached_CModelBaseObject(this.nativeObject.pointer, "modelAttached_CModelBaseObject_callback");
			this.register_modelDetached_CModelBaseObject(this.nativeObject.pointer, "modelDetached_CModelBaseObject_callback");
		}
	}
	
	public static ModelStateListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelStateListener obj = null;
 		if(baseObj instanceof ModelStateListener)
		{
			obj = (ModelStateListener)baseObj;
		} else {
			obj = new ModelStateListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelStateListener");
			obj.increaseCast();
		}

		return obj;
	}
}
