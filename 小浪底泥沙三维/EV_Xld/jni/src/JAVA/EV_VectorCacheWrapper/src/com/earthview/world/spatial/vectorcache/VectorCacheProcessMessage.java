package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 处理进程
 */
public class VectorCacheProcessMessage extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage", new VectorCacheProcessMessageClassFactory());
	}

	native private int get_nDone_void(long pNativeObject);
	public int get_nDone()
	{
		int jniValue = get_nDone_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nDone_ev_int32 (long pNativeObject, int value);
	public void set_nDone(int nDone)
	{
		int nDoneParamValue = nDone;
		
		set_nDone_ev_int32(this.nativeObject.pointer, nDoneParamValue);
	}
	
	native private int get_nTotal_void(long pNativeObject);
	public int get_nTotal()
	{
		int jniValue = get_nTotal_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nTotal_ev_int32 (long pNativeObject, int value);
	public void set_nTotal(int nTotal)
	{
		int nTotalParamValue = nTotal;
		
		set_nTotal_ev_int32(this.nativeObject.pointer, nTotalParamValue);
	}
	
	native private int get_nCurrentDatasetIndex_void(long pNativeObject);
	public int get_nCurrentDatasetIndex()
	{
		int jniValue = get_nCurrentDatasetIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nCurrentDatasetIndex_ev_int32 (long pNativeObject, int value);
	public void set_nCurrentDatasetIndex(int nCurrentDatasetIndex)
	{
		int nCurrentDatasetIndexParamValue = nCurrentDatasetIndex;
		
		set_nCurrentDatasetIndex_ev_int32(this.nativeObject.pointer, nCurrentDatasetIndexParamValue);
	}
	
	native private long get_nTotalDatasetNum_void(long pNativeObject);
	public long get_nTotalDatasetNum()
	{
		long jniValue = get_nTotalDatasetNum_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nTotalDatasetNum_ev_uint32 (long pNativeObject, long value);
	public void set_nTotalDatasetNum(long nTotalDatasetNum)
	{
		long nTotalDatasetNumParamValue = nTotalDatasetNum;
		
		set_nTotalDatasetNum_ev_uint32(this.nativeObject.pointer, nTotalDatasetNumParamValue);
	}
	
	native private int get_nProcess_void(long pNativeObject);
	public com.earthview.world.spatial.vectorcache.EVVectorCacheProcess get_nProcess()
	{
		int jniValue = get_nProcess_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.vectorcache.EVVectorCacheProcess.toEnum(jniValue);
	}
	
	native private void set_nProcess_EVVectorCacheProcess (long pNativeObject, int value);
	public void set_nProcess(com.earthview.world.spatial.vectorcache.EVVectorCacheProcess nProcess)
	{
		int nProcessParamValue = nProcess.getValue();
		
		set_nProcess_EVVectorCacheProcess(this.nativeObject.pointer, nProcessParamValue);
	}
	
	native private void setSavedProcessNum_void(long pNativeObject);
	/**
	 * 完成数目加1
	 */
	public void setSavedProcessNum()
	{
		setSavedProcessNum_void(this.nativeObject.pointer);
	}
	/**
	 * 构造函数
	 */
	public VectorCacheProcessMessage() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVectorCacheProcessMessage", null);
	}

	public VectorCacheProcessMessage(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorCacheProcessMessage(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorCacheProcessMessage fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorCacheProcessMessage obj = null;
 		if(baseObj instanceof VectorCacheProcessMessage)
		{
			obj = (VectorCacheProcessMessage)baseObj;
		} else {
			obj = new VectorCacheProcessMessage(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorCacheProcessMessage");
			obj.increaseCast();
		}

		return obj;
	}
}
