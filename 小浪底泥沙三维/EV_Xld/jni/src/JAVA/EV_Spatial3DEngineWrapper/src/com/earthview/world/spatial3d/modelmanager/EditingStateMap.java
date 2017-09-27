package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingStateMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::EditingStateMap", new EditingStateMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public EditingStateMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EditingStateMap", null);
	}

	native private boolean push_ev_uint32_EditingState(long pNativeObject, long key, long val);
	/**
	 * 添加数据
	 * @param key 键
	 * @param val 值
	 */
	public boolean push(long key, com.earthview.world.spatial3d.modelmanager.EditingState val)
	{
		long keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_uint32_EditingState(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_uint32(long pNativeObject, long key);
	/**
	 * 判断指的指定的键是否存在
	 * @param key 键
	 */
	public boolean exist(long key)
	{
		long keyParamValue = key;
		boolean returnValue = exist_ev_uint32(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_uint32(long pNativeObject, long key);
	public com.earthview.world.spatial3d.modelmanager.EditingState OperatorIndex(long key)
	{
		long keyParamValue = key;
		long returnValue = OperatorIndex_ev_uint32(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.modelmanager.EditingState __returnValue = new com.earthview.world.spatial3d.modelmanager.EditingState(CreatedWhenConstruct.CWC_NotToCreate, "EditingState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EditingState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EditingState");
		}
		return __returnValue;
	}
	native private long get_ev_uint32(long pNativeObject, long key);
	/**
	 * 根据指定的键返回值
	 * @param key 键
	 */
	public com.earthview.world.spatial3d.modelmanager.EditingState get(long key)
	{
		long keyParamValue = key;
		long returnValue = get_ev_uint32(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.modelmanager.EditingState __returnValue = new com.earthview.world.spatial3d.modelmanager.EditingState(CreatedWhenConstruct.CWC_NotToCreate, "EditingState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EditingState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EditingState");
		}
		return __returnValue;
	}
	native private void erase_ev_uint32(long pNativeObject, long key);
	/**
	 * 根据指定的键删除数据
	 * @param key 键
	 */
	public void erase(long key)
	{
		long keyParamValue = key;
		erase_ev_uint32(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回长度
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回容器是否为空
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public EditingStateMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingStateMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EditingStateMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingStateMap obj = null;
 		if(baseObj instanceof EditingStateMap)
		{
			obj = (EditingStateMap)baseObj;
		} else {
			obj = new EditingStateMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EditingStateMap");
			obj.increaseCast();
		}

		return obj;
	}
}
