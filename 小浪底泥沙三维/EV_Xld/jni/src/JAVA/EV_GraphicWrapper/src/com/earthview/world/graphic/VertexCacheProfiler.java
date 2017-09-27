package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexCacheProfiler extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexCacheProfiler", new VertexCacheProfilerClassFactory());
	}

	public enum CacheType implements INativeEnum<CacheType> {
		FIFO(CacheTypeHelper.ENUM_VALUES[0]),
		LRU(CacheTypeHelper.ENUM_VALUES[1]);
		private int value;
		CacheType(int i) {
			this.value = i;
		}
		public CacheType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final CacheType toEnum(int retval) {
			if(retval == FIFO.value){
				return FIFO;
			}
			else if(retval == LRU.value){
				return LRU;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class CacheTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public VertexCacheProfiler(long cachesize, com.earthview.world.graphic.VertexCacheProfiler.CacheType cachetype) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cachesizePtr = new BasePointer(cachesize);
		list.add("cachesize", cachesizePtr.get());
		BasePointer cachetypePtr = new BasePointer(cachetype);
		list.add("cachetype", cachetypePtr.get());
		Create("CVertexCacheProfiler", list);
	}

	public VertexCacheProfiler(long cachesize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cachesizePtr = new BasePointer(cachesize);
		list.add("cachesize", cachesizePtr.get());
		Create("CVertexCacheProfiler", list);
	}

	public VertexCacheProfiler() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVertexCacheProfiler", null);
	}

	native private void profile_CHardwareIndexBufferSharedPtr(long pNativeObject, long indexBuffer);
	public void profile(com.earthview.world.graphic.HardwareIndexBufferSharedPtr indexBuffer)
	{
		long indexBufferParamValue = indexBuffer.nativeObject.pointer;
		profile_CHardwareIndexBufferSharedPtr(this.nativeObject.pointer, indexBufferParamValue);
	}
	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void flush_void(long pNativeObject);
	public void flush()
	{
		flush_void(this.nativeObject.pointer);
	}
	native private long getHits_void(long pNativeObject);
	public long getHits()
	{
		long returnValue = getHits_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMisses_void(long pNativeObject);
	public long getMisses()
	{
		long returnValue = getMisses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void(long pNativeObject);
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	public VertexCacheProfiler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexCacheProfiler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VertexCacheProfiler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexCacheProfiler obj = null;
 		if(baseObj instanceof VertexCacheProfiler)
		{
			obj = (VertexCacheProfiler)baseObj;
		} else {
			obj = new VertexCacheProfiler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexCacheProfiler");
			obj.increaseCast();
		}

		return obj;
	}
}
