package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultEntry extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryResultEntry", new SceneQueryResultEntryClassFactory());
	}

	public SceneQueryResultEntry(com.earthview.world.graphic.MovableObject ref_mo, com.earthview.world.core.IntVector indexVec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_moPtr = new BasePointer(ref_mo);
		list.add("ref_mo", ref_moPtr.get());
		BasePointer indexVecPtr = new BasePointer(indexVec);
		list.add("indexVec", indexVecPtr.get());
		Create("SceneQueryResultEntry", list);
	}

	public SceneQueryResultEntry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryResultEntry", null);
	}

	native private long get_movable_void(long pNativeObject);
	public com.earthview.world.graphic.MovableObject get_movable()
	{
		long jniValue = get_movable_void(this.nativeObject.pointer);
		
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
	
	native private void set_movable_CMovableObject (long pNativeObject, long value);
	public void set_movable(com.earthview.world.graphic.MovableObject movable)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		
		set_movable_CMovableObject(this.nativeObject.pointer, movableParamValue);
	}
	
	native private long get_objIndexVec_void(long pNativeObject);
	public com.earthview.world.core.IntVector get_objIndexVec()
	{
		long jniValue = get_objIndexVec_void(this.nativeObject.pointer);
		
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	
	native private void set_objIndexVec_IntVector (long pNativeObject, long value);
	public void set_objIndexVec(com.earthview.world.core.IntVector objIndexVec)
	{
		long objIndexVecParamValue = objIndexVec.nativeObject.pointer;
		
		set_objIndexVec_IntVector(this.nativeObject.pointer, objIndexVecParamValue);
	}
	
	public SceneQueryResultEntry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryResultEntry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryResultEntry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryResultEntry obj = null;
 		if(baseObj instanceof SceneQueryResultEntry)
		{
			obj = (SceneQueryResultEntry)baseObj;
		} else {
			obj = new SceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryResultEntry");
			obj.increaseCast();
		}

		return obj;
	}
}
