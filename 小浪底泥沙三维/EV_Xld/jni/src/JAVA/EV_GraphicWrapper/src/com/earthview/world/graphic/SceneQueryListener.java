package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSceneQueryListener", new SceneQueryListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSceneQueryListenerProxy", new SceneQueryListenerClassFactory());
	}

	public SceneQueryListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSceneQueryListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SceneQueryListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean queryResult_CMovableObject_callback(long object)
	{
		com.earthview.world.graphic.MovableObject objectParamValue = (object == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.graphic.MovableObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		boolean returnValue = queryResult(objectParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject(long pNativeObject, long object);
	public boolean queryResult(com.earthview.world.graphic.MovableObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject(this.nativeObject.pointer, objectParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_NoVirtual(long pNativeObject, long object);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject object)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_NoVirtual(this.nativeObject.pointer, objectParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_IntVector_callback(long object, long indexVec)
	{
		com.earthview.world.graphic.MovableObject objectParamValue = (object == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(objectParamValue != null)
		{
		objectParamValue.setDelegate(true);
		objectParamValue.setInstancePointer(new InstancePointer(object));
		IClassFactory objectParamValueClassFactory = GlobalClassFactoryMap.get(objectParamValue.getCppInstanceTypeName());
		if (objectParamValueClassFactory != null)
		{
			objectParamValue.setDelegate(true);
			objectParamValue = (com.earthview.world.graphic.MovableObject)objectParamValueClassFactory.create();
			objectParamValue.setDelegate(true);
			objectParamValue.setInstancePointer(new InstancePointer(object));
		}
		}
		com.earthview.world.core.IntVector indexVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		indexVecParamValue.setDelegate(true);
		indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		IClassFactory indexVecParamValueClassFactory = GlobalClassFactoryMap.get(indexVecParamValue.getCppInstanceTypeName());
		if (indexVecParamValueClassFactory != null)
		{
			indexVecParamValue.setDelegate(true);
			indexVecParamValue = (com.earthview.world.core.IntVector)indexVecParamValueClassFactory.create();
			indexVecParamValue.setDelegate(true);
			indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		}
		boolean returnValue = queryResult(objectParamValue, indexVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_IntVector(long pNativeObject, long object, long indexVec);
	public boolean queryResult(com.earthview.world.graphic.MovableObject object, com.earthview.world.core.IntVector indexVec)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_IntVector(this.nativeObject.pointer, objectParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_IntVector_NoVirtual(long pNativeObject, long object, long indexVec);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject object, com.earthview.world.core.IntVector indexVec)
	{
		long objectParamValue = (object == null ? 0L : object.nativeObject.pointer);
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_IntVector_NoVirtual(this.nativeObject.pointer, objectParamValue, indexVecParamValue);
		return returnValue;
	}

	protected  boolean queryResult_WorldFragment_callback(long fragment)
	{
		com.earthview.world.graphic.SceneQuery.WorldFragment fragmentParamValue = (fragment == 0L ? null : new com.earthview.world.graphic.SceneQuery.WorldFragment(CreatedWhenConstruct.CWC_NotToCreate));
		if(fragmentParamValue != null)
		{
		fragmentParamValue.setDelegate(true);
		fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		IClassFactory fragmentParamValueClassFactory = GlobalClassFactoryMap.get(fragmentParamValue.getCppInstanceTypeName());
		if (fragmentParamValueClassFactory != null)
		{
			fragmentParamValue.setDelegate(true);
			fragmentParamValue = (com.earthview.world.graphic.SceneQuery.WorldFragment)fragmentParamValueClassFactory.create();
			fragmentParamValue.setDelegate(true);
			fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		}
		}
		boolean returnValue = queryResult(fragmentParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_WorldFragment(long pNativeObject, long fragment);
	public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_WorldFragment(this.nativeObject.pointer, fragmentParamValue);
		return returnValue;
	}
	native private boolean queryResult_WorldFragment_NoVirtual(long pNativeObject, long fragment);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_WorldFragment_NoVirtual(this.nativeObject.pointer, fragmentParamValue);
		return returnValue;
	}

	public SceneQueryListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_queryResult_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_IntVector(long pNativeObject, String method);
	native protected void register_queryResult_WorldFragment(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_queryResult_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_callback");
			this.register_queryResult_CMovableObject_IntVector(this.nativeObject.pointer, "queryResult_CMovableObject_IntVector_callback");
			this.register_queryResult_WorldFragment(this.nativeObject.pointer, "queryResult_WorldFragment_callback");
		}
	}
	
	public static SceneQueryListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryListener obj = null;
 		if(baseObj instanceof SceneQueryListener)
		{
			obj = (SceneQueryListener)baseObj;
		} else {
			obj = new SceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneQueryListener");
			obj.increaseCast();
		}

		return obj;
	}
}
