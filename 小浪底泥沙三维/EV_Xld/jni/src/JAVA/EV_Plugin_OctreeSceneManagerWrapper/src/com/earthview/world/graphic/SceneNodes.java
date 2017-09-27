package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef list< EarthView::World::Graphic::CSceneNode * >::type SceneNodeList;
public class SceneNodes extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneNodes", new SceneNodesClassFactory());
	}

	public SceneNodes() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneNodes", null);
	}

	native private void push_back_CSceneNode(long pNativeObject, long ref_t);
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.SceneNode> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CSceneNode(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void push_front_CSceneNode(long pNativeObject, long ref_t);
	public void push_front(NativeObjectPointer<com.earthview.world.graphic.SceneNode> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_front_CSceneNode(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private void pop_front_void(long pNativeObject);
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.SceneNode> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.SceneNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneNode>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.SceneNode> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.SceneNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneNode>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public NativeObjectPointer<com.earthview.world.graphic.SceneNode> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.graphic.SceneNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneNode>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CSceneNode(long pNativeObject, long pos, long ref_t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.SceneNode> ref_t)
	{
		long posParamValue = pos;
		long ref_tParamValue = ref_t.nativeObject.pointer;
		insert_ev_uint32_CSceneNode(this.nativeObject.pointer, posParamValue, ref_tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public SceneNodes(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneNodes(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneNodes fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneNodes obj = null;
 		if(baseObj instanceof SceneNodes)
		{
			obj = (SceneNodes)baseObj;
		} else {
			obj = new SceneNodes(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneNodes");
			obj.increaseCast();
		}

		return obj;
	}
}
