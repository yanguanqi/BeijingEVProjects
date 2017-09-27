package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorLogic extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCompositorLogic", new CompositorLogicClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCCompositorLogicProxy", new CompositorLogicClassFactory());
	}

	public CompositorLogic() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCompositorLogicProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.CompositorLogic".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void compositorInstanceCreated_CCompositorInstance_callback(long newInstance)
	{
		com.earthview.world.graphic.CompositorInstance newInstanceParamValue = (newInstance == 0L ? null : new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate));
		if(newInstanceParamValue != null)
		{
		newInstanceParamValue.setDelegate(true);
		newInstanceParamValue.setInstancePointer(new InstancePointer(newInstance));
		IClassFactory newInstanceParamValueClassFactory = GlobalClassFactoryMap.get(newInstanceParamValue.getCppInstanceTypeName());
		if (newInstanceParamValueClassFactory != null)
		{
			newInstanceParamValue.setDelegate(true);
			newInstanceParamValue = (com.earthview.world.graphic.CompositorInstance)newInstanceParamValueClassFactory.create();
			newInstanceParamValue.setDelegate(true);
			newInstanceParamValue.setInstancePointer(new InstancePointer(newInstance));
		}
		}
		compositorInstanceCreated(newInstanceParamValue);
	}

	native private void compositorInstanceCreated_CCompositorInstance(long pNativeObject, long newInstance);
	public void compositorInstanceCreated(com.earthview.world.graphic.CompositorInstance newInstance)
	{
		long newInstanceParamValue = (newInstance == null ? 0L : newInstance.nativeObject.pointer);
		compositorInstanceCreated_CCompositorInstance(this.nativeObject.pointer, newInstanceParamValue);
	}
	native private void compositorInstanceCreated_CCompositorInstance_NoVirtual(long pNativeObject, long newInstance);
	protected void compositorInstanceCreated_NoVirtual(com.earthview.world.graphic.CompositorInstance newInstance)
	{
		long newInstanceParamValue = (newInstance == null ? 0L : newInstance.nativeObject.pointer);
		compositorInstanceCreated_CCompositorInstance_NoVirtual(this.nativeObject.pointer, newInstanceParamValue);
	}

	protected  void compositorInstanceDestroyed_CCompositorInstance_callback(long destroyedInstance)
	{
		com.earthview.world.graphic.CompositorInstance destroyedInstanceParamValue = (destroyedInstance == 0L ? null : new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate));
		if(destroyedInstanceParamValue != null)
		{
		destroyedInstanceParamValue.setDelegate(true);
		destroyedInstanceParamValue.setInstancePointer(new InstancePointer(destroyedInstance));
		IClassFactory destroyedInstanceParamValueClassFactory = GlobalClassFactoryMap.get(destroyedInstanceParamValue.getCppInstanceTypeName());
		if (destroyedInstanceParamValueClassFactory != null)
		{
			destroyedInstanceParamValue.setDelegate(true);
			destroyedInstanceParamValue = (com.earthview.world.graphic.CompositorInstance)destroyedInstanceParamValueClassFactory.create();
			destroyedInstanceParamValue.setDelegate(true);
			destroyedInstanceParamValue.setInstancePointer(new InstancePointer(destroyedInstance));
		}
		}
		compositorInstanceDestroyed(destroyedInstanceParamValue);
	}

	native private void compositorInstanceDestroyed_CCompositorInstance(long pNativeObject, long destroyedInstance);
	public void compositorInstanceDestroyed(com.earthview.world.graphic.CompositorInstance destroyedInstance)
	{
		long destroyedInstanceParamValue = (destroyedInstance == null ? 0L : destroyedInstance.nativeObject.pointer);
		compositorInstanceDestroyed_CCompositorInstance(this.nativeObject.pointer, destroyedInstanceParamValue);
	}
	native private void compositorInstanceDestroyed_CCompositorInstance_NoVirtual(long pNativeObject, long destroyedInstance);
	protected void compositorInstanceDestroyed_NoVirtual(com.earthview.world.graphic.CompositorInstance destroyedInstance)
	{
		long destroyedInstanceParamValue = (destroyedInstance == null ? 0L : destroyedInstance.nativeObject.pointer);
		compositorInstanceDestroyed_CCompositorInstance_NoVirtual(this.nativeObject.pointer, destroyedInstanceParamValue);
	}

	public CompositorLogic(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorLogic(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_compositorInstanceCreated_CCompositorInstance(long pNativeObject, String method);
	native protected void register_compositorInstanceDestroyed_CCompositorInstance(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_compositorInstanceCreated_CCompositorInstance(this.nativeObject.pointer, "compositorInstanceCreated_CCompositorInstance_callback");
			this.register_compositorInstanceDestroyed_CCompositorInstance(this.nativeObject.pointer, "compositorInstanceDestroyed_CCompositorInstance_callback");
		}
	}
	
	public static CompositorLogic fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorLogic obj = null;
 		if(baseObj instanceof CompositorLogic)
		{
			obj = (CompositorLogic)baseObj;
		} else {
			obj = new CompositorLogic(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompositorLogic");
			obj.increaseCast();
		}

		return obj;
	}
}
