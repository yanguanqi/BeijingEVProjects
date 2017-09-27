package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef std::pair<EarthView::World::Graphic::CMovableObject*, EarthView::World::Graphic::CSceneQuery::WorldFragment*> EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair;
public class SceneQueryMovableObjectWorldFragmentPair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryMovableObjectWorldFragmentPair", new SceneQueryMovableObjectWorldFragmentPairClassFactory());
	}

	native private long get_first_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject get_first()
	{
		long jniValue = get_first_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
		}
		return __returnValue;
	}
	
	native private void set_first_CMovableObject (long pNativeObject, long value);
	public void set_first(com.earthview.world.graphic.MovableObject first)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		
		set_first_CMovableObject(this.nativeObject.pointer, firstParamValue);
	}
	
	native private long get_second_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQuery.WorldFragment get_second()
	{
		long jniValue = get_second_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneQuery.WorldFragment __returnValue = new com.earthview.world.graphic.SceneQuery.WorldFragment(CreatedWhenConstruct.CWC_NotToCreate, "WorldFragment");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQuery.WorldFragment)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "WorldFragment");
		}
		return __returnValue;
	}
	
	native private void set_second_WorldFragment (long pNativeObject, long value);
	public void set_second(com.earthview.world.graphic.SceneQuery.WorldFragment second)
	{
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		
		set_second_WorldFragment(this.nativeObject.pointer, secondParamValue);
	}
	
	public SceneQueryMovableObjectWorldFragmentPair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryMovableObjectWorldFragmentPair", null);
	}

	public SceneQueryMovableObjectWorldFragmentPair(com.earthview.world.graphic.MovableObject f, com.earthview.world.graphic.SceneQuery.WorldFragment s) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fPtr = new BasePointer(f);
		list.add("f", fPtr.get());
		BasePointer sPtr = new BasePointer(s);
		list.add("s", sPtr.get());
		Create("SceneQueryMovableObjectWorldFragmentPair", list);
	}

	public SceneQueryMovableObjectWorldFragmentPair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryMovableObjectWorldFragmentPair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryMovableObjectWorldFragmentPair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryMovableObjectWorldFragmentPair obj = null;
 		if(baseObj instanceof SceneQueryMovableObjectWorldFragmentPair)
		{
			obj = (SceneQueryMovableObjectWorldFragmentPair)baseObj;
		} else {
			obj = new SceneQueryMovableObjectWorldFragmentPair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryMovableObjectWorldFragmentPair");
			obj.increaseCast();
		}

		return obj;
	}
}
