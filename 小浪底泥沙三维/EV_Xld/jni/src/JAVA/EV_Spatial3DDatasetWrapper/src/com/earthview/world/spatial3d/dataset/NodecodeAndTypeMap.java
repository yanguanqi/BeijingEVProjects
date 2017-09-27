package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodecodeAndTypeMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap", new NodecodeAndTypeMapClassFactory());
	}

	public NodecodeAndTypeMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("NodecodeAndTypeMap", null);
	}

	native private boolean push_EVString_EVString(long pNativeObject, String key, String val);
	public boolean push(String key, String val)
	{
		String keyParamValue = key;
		String valParamValue = val;
		boolean returnValue = push_EVString_EVString(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorAssign_NodecodeAndTypeMap(long pNativeObject, long other);
	public com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap OperatorAssign(com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_NodecodeAndTypeMap(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap __returnValue = new com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap(CreatedWhenConstruct.CWC_NotToCreate, "NodecodeAndTypeMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.NodecodeAndTypeMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "NodecodeAndTypeMap");
		}
		return __returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	public StringPointer OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public StringPointer get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
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
	public NodecodeAndTypeMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodecodeAndTypeMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NodecodeAndTypeMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodecodeAndTypeMap obj = null;
 		if(baseObj instanceof NodecodeAndTypeMap)
		{
			obj = (NodecodeAndTypeMap)baseObj;
		} else {
			obj = new NodecodeAndTypeMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "NodecodeAndTypeMap");
			obj.increaseCast();
		}

		return obj;
	}
}
