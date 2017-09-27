package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqrecordinfolist extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList", new ObqrecordinfolistClassFactory());
	}

	public Obqrecordinfolist() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQRecordInfoList", null);
	}

	native private void push_back_OBQRecordInfo(long pNativeObject, long t);
	public void push_back(com.earthview.world.spatial3d.modelmanager.Obqrecordinfo t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_OBQRecordInfo(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_OBQRecordInfo(long pNativeObject, long t);
	public void push_front(com.earthview.world.spatial3d.modelmanager.Obqrecordinfo t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_OBQRecordInfo(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.spatial3d.modelmanager.Obqrecordinfo front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.Obqrecordinfo __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqrecordinfo(CreatedWhenConstruct.CWC_NotToCreate, "OBQRecordInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqrecordinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OBQRecordInfo");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.Obqrecordinfo back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.Obqrecordinfo __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqrecordinfo(CreatedWhenConstruct.CWC_NotToCreate, "OBQRecordInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqrecordinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OBQRecordInfo");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.world.spatial3d.modelmanager.Obqrecordinfo at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.spatial3d.modelmanager.Obqrecordinfo __returnValue = new com.earthview.world.spatial3d.modelmanager.Obqrecordinfo(CreatedWhenConstruct.CWC_NotToCreate, "OBQRecordInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.Obqrecordinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "OBQRecordInfo");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_OBQRecordInfo(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.spatial3d.modelmanager.Obqrecordinfo t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_OBQRecordInfo(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public Obqrecordinfolist(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqrecordinfolist(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqrecordinfolist fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqrecordinfolist obj = null;
 		if(baseObj instanceof Obqrecordinfolist)
		{
			obj = (Obqrecordinfolist)baseObj;
		} else {
			obj = new Obqrecordinfolist(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQRecordInfoList");
			obj.increaseCast();
		}

		return obj;
	}
}
