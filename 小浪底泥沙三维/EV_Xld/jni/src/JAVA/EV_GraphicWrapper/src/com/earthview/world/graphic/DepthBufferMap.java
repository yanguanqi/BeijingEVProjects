package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef map< uint16, EarthView::World::Graphic::DepthBufferVec >::type DepthBufferMap;
public class DepthBufferMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::DepthBufferMap", new DepthBufferMapClassFactory());
	}

	native private boolean push_ev_uint16_DepthBufferVec(long pNativeObject, int key, long val);
	public boolean push(int key, com.earthview.world.graphic.DepthBufferVec val)
	{
		int keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_uint16_DepthBufferVec(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_uint16(long pNativeObject, int key);
	public boolean exist(int key)
	{
		int keyParamValue = key;
		boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
	public com.earthview.world.graphic.DepthBufferVec OperatorIndex(int key)
	{
		int keyParamValue = key;
		long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.DepthBufferVec __returnValue = new com.earthview.world.graphic.DepthBufferVec(CreatedWhenConstruct.CWC_NotToCreate, "DepthBufferVec");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DepthBufferVec)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DepthBufferVec");
		}
		return __returnValue;
	}
	native private long get_ev_uint16(long pNativeObject, int key);
	public com.earthview.world.graphic.DepthBufferVec get(int key)
	{
		int keyParamValue = key;
		long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.graphic.DepthBufferVec __returnValue = new com.earthview.world.graphic.DepthBufferVec(CreatedWhenConstruct.CWC_NotToCreate, "DepthBufferVec");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DepthBufferVec)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DepthBufferVec");
		}
		return __returnValue;
	}
	native private void erase_ev_uint16(long pNativeObject, int key);
	public void erase(int key)
	{
		int keyParamValue = key;
		erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DepthBufferMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DepthBufferMap", null);
	}

	public DepthBufferMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DepthBufferMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DepthBufferMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DepthBufferMap obj = null;
 		if(baseObj instanceof DepthBufferMap)
		{
			obj = (DepthBufferMap)baseObj;
		} else {
			obj = new DepthBufferMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DepthBufferMap");
			obj.increaseCast();
		}

		return obj;
	}
}
