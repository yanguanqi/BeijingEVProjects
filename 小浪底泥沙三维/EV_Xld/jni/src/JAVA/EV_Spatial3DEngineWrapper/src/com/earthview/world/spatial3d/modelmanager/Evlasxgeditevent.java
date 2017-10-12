package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evlasxgeditevent extends com.earthview.world.spatial.systemui.DatasetEditEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent", new EvlasxgediteventClassFactory());
	}

	public Evlasxgeditevent(com.earthview.world.spatial.geodataset.Idataset dataset, int eventtype) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer datasetPtr = new BasePointer(dataset);
		list.add("dataset", datasetPtr.get());
		BasePointer eventtypePtr = new BasePointer(eventtype);
		list.add("eventtype", eventtypePtr.get());
		Create("CEVLasxgEditEvent", list);
	}

	native private long get_mpDataset_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Idataset get_mpDataset()
	{
		long jniValue = get_mpDataset_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	
	native private void set_mpDataset_IDataset (long pNativeObject, long value);
	public void set_mpDataset(com.earthview.world.spatial.geodataset.Idataset mpDataset)
	{
		long mpDatasetParamValue = (mpDataset == null ? 0L : mpDataset.nativeObject.pointer);
		
		set_mpDataset_IDataset(this.nativeObject.pointer, mpDatasetParamValue);
	}
	
	native private long get_mCacheID_void(long pNativeObject);
	public long get_mCacheID()
	{
		long jniValue = get_mCacheID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCacheID_ev_uint32 (long pNativeObject, long value);
	public void set_mCacheID(long mCacheID)
	{
		long mCacheIDParamValue = mCacheID;
		
		set_mCacheID_ev_uint32(this.nativeObject.pointer, mCacheIDParamValue);
	}
	
	native private long get_mRecordID_void(long pNativeObject);
	public long get_mRecordID()
	{
		long jniValue = get_mRecordID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRecordID_ev_uint32 (long pNativeObject, long value);
	public void set_mRecordID(long mRecordID)
	{
		long mRecordIDParamValue = mRecordID;
		
		set_mRecordID_ev_uint32(this.nativeObject.pointer, mRecordIDParamValue);
	}
	
	public Evlasxgeditevent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evlasxgeditevent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evlasxgeditevent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evlasxgeditevent obj = null;
 		if(baseObj instanceof Evlasxgeditevent)
		{
			obj = (Evlasxgeditevent)baseObj;
		} else {
			obj = new Evlasxgeditevent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVLasxgEditEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
