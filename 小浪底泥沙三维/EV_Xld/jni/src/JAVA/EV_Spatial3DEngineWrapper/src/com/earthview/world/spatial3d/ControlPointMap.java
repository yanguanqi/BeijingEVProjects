package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 控制点map容器
 */
public class ControlPointMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CControlPointMap", new ControlPointMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ControlPointMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CControlPointMap", null);
	}

	native private boolean push_ev_real64_CControlPoint(long pNativeObject, double key, long val);
	/**
	 * 添加数据
	 * @param key 键
	 * @param val 值
	 */
	public boolean push(double key, com.earthview.world.spatial3d.ControlPoint val)
	{
		double keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_real64_CControlPoint(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_real64(long pNativeObject, double key);
	/**
	 * 判断指的指定的键是否存在
	 * @param key 键
	 */
	public boolean exist(double key)
	{
		double keyParamValue = key;
		boolean returnValue = exist_ev_real64(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_real64(long pNativeObject, double key);
	public com.earthview.world.spatial3d.ControlPoint OperatorIndex(double key)
	{
		double keyParamValue = key;
		long returnValue = OperatorIndex_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.ControlPoint __returnValue = new com.earthview.world.spatial3d.ControlPoint(CreatedWhenConstruct.CWC_NotToCreate, "CControlPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ControlPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlPoint");
		}
		return __returnValue;
	}
	native private long get_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键返回值
	 * @param key 键
	 */
	public com.earthview.world.spatial3d.ControlPoint get(double key)
	{
		double keyParamValue = key;
		long returnValue = get_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.ControlPoint __returnValue = new com.earthview.world.spatial3d.ControlPoint(CreatedWhenConstruct.CWC_NotToCreate, "CControlPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ControlPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControlPoint");
		}
		return __returnValue;
	}
	native private void erase_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键删除数据
	 * @param key 键
	 */
	public void erase(double key)
	{
		double keyParamValue = key;
		erase_ev_real64(this.nativeObject.pointer, keyParamValue);
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
	native private boolean getKey_ev_int32_ev_real64(long pNativeObject, int index, long key);
	/**
	 * 根据索引取得键
	 * @param index 索引
	 * @param key 键，返回值
	 */
	public boolean getKey(int index, DoublePointer key)
	{
		int indexParamValue = index;
		long keyParamValue = key.nativeObject.pointer;
		boolean returnValue = getKey_ev_int32_ev_real64(this.nativeObject.pointer, indexParamValue, keyParamValue);
		return returnValue;
	}
	public ControlPointMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlPointMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControlPointMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlPointMap obj = null;
 		if(baseObj instanceof ControlPointMap)
		{
			obj = (ControlPointMap)baseObj;
		} else {
			obj = new ControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlPointMap");
			obj.increaseCast();
		}

		return obj;
	}
}
