package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectionSceneQueryResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::IntersectionSceneQueryResult", new IntersectionSceneQueryResultClassFactory());
	}

	public IntersectionSceneQueryResult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IntersectionSceneQueryResult", null);
	}

	native private long get_movables2movables_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryMovableIntersectionList get_movables2movables()
	{
		long jniValue = get_movables2movables_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SceneQueryMovableIntersectionList __returnValue = new com.earthview.world.graphic.SceneQueryMovableIntersectionList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneQueryMovableIntersectionList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryMovableIntersectionList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryMovableIntersectionList");
		}
		return __returnValue;
	}
	
	native private void set_movables2movables_SceneQueryMovableIntersectionList (long pNativeObject, long value);
	public void set_movables2movables(com.earthview.world.graphic.SceneQueryMovableIntersectionList movables2movables)
	{
		long movables2movablesParamValue = movables2movables.nativeObject.pointer;
		
		set_movables2movables_SceneQueryMovableIntersectionList(this.nativeObject.pointer, movables2movablesParamValue);
	}
	
	native private long get_movables2world_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryMovableWorldFragmentIntersectionList get_movables2world()
	{
		long jniValue = get_movables2world_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SceneQueryMovableWorldFragmentIntersectionList __returnValue = new com.earthview.world.graphic.SceneQueryMovableWorldFragmentIntersectionList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneQueryMovableWorldFragmentIntersectionList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryMovableWorldFragmentIntersectionList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryMovableWorldFragmentIntersectionList");
		}
		return __returnValue;
	}
	
	native private void set_movables2world_SceneQueryMovableWorldFragmentIntersectionList (long pNativeObject, long value);
	public void set_movables2world(com.earthview.world.graphic.SceneQueryMovableWorldFragmentIntersectionList movables2world)
	{
		long movables2worldParamValue = movables2world.nativeObject.pointer;
		
		set_movables2world_SceneQueryMovableWorldFragmentIntersectionList(this.nativeObject.pointer, movables2worldParamValue);
	}
	
	public IntersectionSceneQueryResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntersectionSceneQueryResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IntersectionSceneQueryResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntersectionSceneQueryResult obj = null;
 		if(baseObj instanceof IntersectionSceneQueryResult)
		{
			obj = (IntersectionSceneQueryResult)baseObj;
		} else {
			obj = new IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IntersectionSceneQueryResult");
			obj.increaseCast();
		}

		return obj;
	}
}
