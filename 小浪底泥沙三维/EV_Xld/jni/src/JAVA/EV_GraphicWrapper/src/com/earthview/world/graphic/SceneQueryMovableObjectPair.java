package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef std::pair<EarthView::World::Graphic::CMovableObject*, EarthView::World::Graphic::CMovableObject*> EarthView::World::Graphic::SceneQueryMovableObjectPair;
public class SceneQueryMovableObjectPair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryMovableObjectPair", new SceneQueryMovableObjectPairClassFactory());
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
	public com.earthview.world.graphic.MovableObject get_second()
	{
		long jniValue = get_second_void(this.nativeObject.pointer);
		
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
	
	native private void set_second_CMovableObject (long pNativeObject, long value);
	public void set_second(com.earthview.world.graphic.MovableObject second)
	{
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		
		set_second_CMovableObject(this.nativeObject.pointer, secondParamValue);
	}
	
	public SceneQueryMovableObjectPair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryMovableObjectPair", null);
	}

	public SceneQueryMovableObjectPair(com.earthview.world.graphic.MovableObject f, com.earthview.world.graphic.MovableObject s) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fPtr = new BasePointer(f);
		list.add("f", fPtr.get());
		BasePointer sPtr = new BasePointer(s);
		list.add("s", sPtr.get());
		Create("SceneQueryMovableObjectPair", list);
	}

	public SceneQueryMovableObjectPair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryMovableObjectPair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryMovableObjectPair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryMovableObjectPair obj = null;
 		if(baseObj instanceof SceneQueryMovableObjectPair)
		{
			obj = (SceneQueryMovableObjectPair)baseObj;
		} else {
			obj = new SceneQueryMovableObjectPair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryMovableObjectPair");
			obj.increaseCast();
		}

		return obj;
	}
}
