package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerTileList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CLayerTileList", new LayerTileListClassFactory());
	}

	public LayerTileList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLayerTileList", null);
	}

	native private void push_back_CLayerTilePair(long pNativeObject, long t);
	public void push_back(com.earthview.world.spatial3d.atlas.LayerTilePair t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CLayerTilePair(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_CLayerTilePair(long pNativeObject, long t);
	public void push_front(com.earthview.world.spatial3d.atlas.LayerTilePair t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_CLayerTilePair(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.spatial3d.atlas.LayerTilePair front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.LayerTilePair __returnValue = new com.earthview.world.spatial3d.atlas.LayerTilePair(CreatedWhenConstruct.CWC_NotToCreate, "CLayerTilePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.LayerTilePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerTilePair");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.LayerTilePair back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.atlas.LayerTilePair __returnValue = new com.earthview.world.spatial3d.atlas.LayerTilePair(CreatedWhenConstruct.CWC_NotToCreate, "CLayerTilePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.LayerTilePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerTilePair");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.world.spatial3d.atlas.LayerTilePair at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.spatial3d.atlas.LayerTilePair __returnValue = new com.earthview.world.spatial3d.atlas.LayerTilePair(CreatedWhenConstruct.CWC_NotToCreate, "CLayerTilePair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.LayerTilePair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerTilePair");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CLayerTilePair(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.spatial3d.atlas.LayerTilePair t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CLayerTilePair(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public LayerTileList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerTileList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerTileList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerTileList obj = null;
 		if(baseObj instanceof LayerTileList)
		{
			obj = (LayerTileList)baseObj;
		} else {
			obj = new LayerTileList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerTileList");
			obj.increaseCast();
		}

		return obj;
	}
}
