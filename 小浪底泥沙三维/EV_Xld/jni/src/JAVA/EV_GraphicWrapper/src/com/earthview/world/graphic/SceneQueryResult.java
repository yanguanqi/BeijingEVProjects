package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryResult", new SceneQueryResultClassFactory());
	}

	native private long get_movables_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResultMovableList get_movables()
	{
		long jniValue = get_movables_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SceneQueryResultMovableList __returnValue = new com.earthview.world.graphic.SceneQueryResultMovableList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultMovableList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultMovableList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultMovableList");
		}
		return __returnValue;
	}
	
	native private void set_movables_SceneQueryResultMovableList (long pNativeObject, long value);
	public void set_movables(com.earthview.world.graphic.SceneQueryResultMovableList movables)
	{
		long movablesParamValue = movables.nativeObject.pointer;
		
		set_movables_SceneQueryResultMovableList(this.nativeObject.pointer, movablesParamValue);
	}
	
	native private long get_movablesEx_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResultMovableListEx get_movablesEx()
	{
		long jniValue = get_movablesEx_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SceneQueryResultMovableListEx __returnValue = new com.earthview.world.graphic.SceneQueryResultMovableListEx(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultMovableListEx");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultMovableListEx)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultMovableListEx");
		}
		return __returnValue;
	}
	
	native private void set_movablesEx_SceneQueryResultMovableListEx (long pNativeObject, long value);
	public void set_movablesEx(com.earthview.world.graphic.SceneQueryResultMovableListEx movablesEx)
	{
		long movablesExParamValue = movablesEx.nativeObject.pointer;
		
		set_movablesEx_SceneQueryResultMovableListEx(this.nativeObject.pointer, movablesExParamValue);
	}
	
	native private long get_worldFragments_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResultWorldFragmentList get_worldFragments()
	{
		long jniValue = get_worldFragments_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.SceneQueryResultWorldFragmentList __returnValue = new com.earthview.world.graphic.SceneQueryResultWorldFragmentList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultWorldFragmentList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultWorldFragmentList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultWorldFragmentList");
		}
		return __returnValue;
	}
	
	native private void set_worldFragments_SceneQueryResultWorldFragmentList (long pNativeObject, long value);
	public void set_worldFragments(com.earthview.world.graphic.SceneQueryResultWorldFragmentList worldFragments)
	{
		long worldFragmentsParamValue = worldFragments.nativeObject.pointer;
		
		set_worldFragments_SceneQueryResultWorldFragmentList(this.nativeObject.pointer, worldFragmentsParamValue);
	}
	
	public SceneQueryResult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryResult", null);
	}

	public SceneQueryResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryResult obj = null;
 		if(baseObj instanceof SceneQueryResult)
		{
			obj = (SceneQueryResult)baseObj;
		} else {
			obj = new SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryResult");
			obj.increaseCast();
		}

		return obj;
	}
}
