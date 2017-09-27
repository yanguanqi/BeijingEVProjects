package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndexData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CIndexData", new IndexDataClassFactory());
	}

	public IndexData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CIndexData", null);
	}

	native private long get_indexBuffer_void(long pNativeObject);
	public com.earthview.world.graphic.HardwareIndexBufferSharedPtr get_indexBuffer()
	{
		long jniValue = get_indexBuffer_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		}
		return __returnValue;
	}
	
	native private void set_indexBuffer_CHardwareIndexBufferSharedPtr (long pNativeObject, long value);
	public void set_indexBuffer(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
	{
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		
		set_indexBuffer_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, indexBufferParamValue);
	}
	
	native private long get_indexStart_void(long pNativeObject);
	public long get_indexStart()
	{
		long jniValue = get_indexStart_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_indexStart_ev_size_t (long pNativeObject, long value);
	public void set_indexStart(long indexStart)
	{
		long indexStartParamValue = indexStart;
		
		set_indexStart_ev_size_t(this.nativeObject.pointer, indexStartParamValue);
	}
	
	native private long get_indexCount_void(long pNativeObject);
	public long get_indexCount()
	{
		long jniValue = get_indexCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_indexCount_ev_size_t (long pNativeObject, long value);
	public void set_indexCount(long indexCount)
	{
		long indexCountParamValue = indexCount;
		
		set_indexCount_ev_size_t(this.nativeObject.pointer, indexCountParamValue);
	}
	
	native private long ev_clone_ev_bool_CHardwareBufferManagerBase(long pNativeObject, boolean copyData, long mgr);
	///EarthView::World::Graphic::CIndexData* clone(ev_bool copyData = true, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0) const;
	public com.earthview.world.graphic.IndexData ev_clone(boolean copyData, com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		boolean copyDataParamValue = copyData;
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long returnValue = ev_clone_ev_bool_CHardwareBufferManagerBase(this.nativeObject.pointer, copyDataParamValue, mgrParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CIndexData");
		}
		return __returnValue;
	}
	native private long ev_clone_ev_bool(long pNativeObject, boolean copyData);
	public com.earthview.world.graphic.IndexData ev_clone(boolean copyData)
	{
		boolean copyDataParamValue = copyData;
		long returnValue = ev_clone_ev_bool(this.nativeObject.pointer, copyDataParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CIndexData");
		}
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.graphic.IndexData ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CIndexData");
		}
		return __returnValue;
	}
	native private void optimiseVertexCacheTriList_void(long pNativeObject);
	public void optimiseVertexCacheTriList()
	{
		optimiseVertexCacheTriList_void(this.nativeObject.pointer);
	}
	public IndexData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IndexData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IndexData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IndexData obj = null;
 		if(baseObj instanceof IndexData)
		{
			obj = (IndexData)baseObj;
		} else {
			obj = new IndexData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIndexData");
			obj.increaseCast();
		}

		return obj;
	}
}
