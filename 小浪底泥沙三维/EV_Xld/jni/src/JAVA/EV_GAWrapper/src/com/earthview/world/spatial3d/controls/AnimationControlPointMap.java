package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationControlPointMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CAnimationControlPointMap", new AnimationControlPointMapClassFactory());
	}

	/**
	 * 构造函数
	 */
	public AnimationControlPointMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAnimationControlPointMap", null);
	}

	native private boolean push_ev_real64_CGlobeAnimationControlPoint(long pNativeObject, double key, long val);
	/**
	 * 增加新键值
	 * @param key 键
	 * @param val 值
	 */
	public boolean push(double key, com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint val)
	{
		double keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_ev_real64_CGlobeAnimationControlPoint(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键，判断对应的值是否存在
	 * @param key 键
	 */
	public boolean exist(double key)
	{
		double keyParamValue = key;
		boolean returnValue = exist_ev_real64(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键，返回对应的值
	 * @param key 键
	 */
	public com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint OperatorIndex(double key)
	{
		double keyParamValue = key;
		long returnValue = OperatorIndex_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint __returnValue = new com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeAnimationControlPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeAnimationControlPoint");
		}
		return __returnValue;
	}
	native private long get_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键，返回对应的值
	 * @param key 键
	 */
	public com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint get(double key)
	{
		double keyParamValue = key;
		long returnValue = get_ev_real64(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint __returnValue = new com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeAnimationControlPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeAnimationControlPoint");
		}
		return __returnValue;
	}
	native private void erase_ev_real64(long pNativeObject, double key);
	/**
	 * 根据指定的键，删除值
	 * @param key 键
	 */
	public void erase(double key)
	{
		double keyParamValue = key;
		erase_ev_real64(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器的长度
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AnimationControlPointMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationControlPointMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationControlPointMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationControlPointMap obj = null;
 		if(baseObj instanceof AnimationControlPointMap)
		{
			obj = (AnimationControlPointMap)baseObj;
		} else {
			obj = new AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationControlPointMap");
			obj.increaseCast();
		}

		return obj;
	}
}
