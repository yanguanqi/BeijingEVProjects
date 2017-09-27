package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectionSceneQueryListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CIntersectionSceneQueryListener", new IntersectionSceneQueryListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCIntersectionSceneQueryListenerProxy", new IntersectionSceneQueryListenerClassFactory());
	}

	public IntersectionSceneQueryListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCIntersectionSceneQueryListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.IntersectionSceneQueryListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean queryResult_CMovableObject_CMovableObject_callback(long first, long second)
	{
		com.earthview.world.graphic.MovableObject firstParamValue = (first == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(firstParamValue != null)
		{
		firstParamValue.setDelegate(true);
		firstParamValue.setInstancePointer(new InstancePointer(first));
		IClassFactory firstParamValueClassFactory = GlobalClassFactoryMap.get(firstParamValue.getCppInstanceTypeName());
		if (firstParamValueClassFactory != null)
		{
			firstParamValue.setDelegate(true);
			firstParamValue = (com.earthview.world.graphic.MovableObject)firstParamValueClassFactory.create();
			firstParamValue.setDelegate(true);
			firstParamValue.setInstancePointer(new InstancePointer(first));
		}
		}
		com.earthview.world.graphic.MovableObject secondParamValue = (second == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(secondParamValue != null)
		{
		secondParamValue.setDelegate(true);
		secondParamValue.setInstancePointer(new InstancePointer(second));
		IClassFactory secondParamValueClassFactory = GlobalClassFactoryMap.get(secondParamValue.getCppInstanceTypeName());
		if (secondParamValueClassFactory != null)
		{
			secondParamValue.setDelegate(true);
			secondParamValue = (com.earthview.world.graphic.MovableObject)secondParamValueClassFactory.create();
			secondParamValue.setDelegate(true);
			secondParamValue.setInstancePointer(new InstancePointer(second));
		}
		}
		boolean returnValue = queryResult(firstParamValue, secondParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_CMovableObject(long pNativeObject, long first, long second);
	public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, firstParamValue, secondParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_CMovableObject_NoVirtual(long pNativeObject, long first, long second);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_CMovableObject_NoVirtual(this.nativeObject.pointer, firstParamValue, secondParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_WorldFragment_callback(long movable, long fragment)
	{
		com.earthview.world.graphic.MovableObject movableParamValue = (movable == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(movableParamValue != null)
		{
		movableParamValue.setDelegate(true);
		movableParamValue.setInstancePointer(new InstancePointer(movable));
		IClassFactory movableParamValueClassFactory = GlobalClassFactoryMap.get(movableParamValue.getCppInstanceTypeName());
		if (movableParamValueClassFactory != null)
		{
			movableParamValue.setDelegate(true);
			movableParamValue = (com.earthview.world.graphic.MovableObject)movableParamValueClassFactory.create();
			movableParamValue.setDelegate(true);
			movableParamValue.setInstancePointer(new InstancePointer(movable));
		}
		}
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
		boolean returnValue = queryResult(movableParamValue, fragmentParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_WorldFragment(long pNativeObject, long movable, long fragment);
	public boolean queryResult(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_WorldFragment_NoVirtual(long pNativeObject, long movable, long fragment);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_WorldFragment_NoVirtual(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
		return returnValue;
	}

	public IntersectionSceneQueryListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntersectionSceneQueryListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_queryResult_CMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_WorldFragment(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_CMovableObject_callback");
			this.register_queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, "queryResult_CMovableObject_WorldFragment_callback");
		}
	}
	
	public static IntersectionSceneQueryListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntersectionSceneQueryListener obj = null;
 		if(baseObj instanceof IntersectionSceneQueryListener)
		{
			obj = (IntersectionSceneQueryListener)baseObj;
		} else {
			obj = new IntersectionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIntersectionSceneQueryListener");
			obj.increaseCast();
		}

		return obj;
	}
}
