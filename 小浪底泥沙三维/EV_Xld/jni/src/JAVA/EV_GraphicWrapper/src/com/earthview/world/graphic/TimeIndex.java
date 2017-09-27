package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画帧的时间索引类管理通过时间索引位置查找动画帧
 */
public class TimeIndex extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTimeIndex", new TimeIndexClassFactory());
	}

	/**
	 * 构造函数
	 * @param timePos 时间点
	 */
	public TimeIndex(double timePos) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer timePosPtr = new BasePointer(timePos);
		list.add("timePos", timePosPtr.get());
		Create("CTimeIndex", list);
	}

	/**
	 * 构造函数
	 * @param timePos 时间点
	 * @param keyIndex 关键帧索引
	 */
	public TimeIndex(double timePos, long keyIndex) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer timePosPtr = new BasePointer(timePos);
		list.add("timePos", timePosPtr.get());
		BasePointer keyIndexPtr = new BasePointer(keyIndex);
		list.add("keyIndex", keyIndexPtr.get());
		Create("CTimeIndex", list);
	}

	native private boolean hasKeyIndex_void(long pNativeObject);
	/**
	 * 判断是否存在有效的关键帧索引
	 * @param  
	 * @return 存在返回true，否则false
	 */
	public boolean hasKeyIndex()
	{
		boolean returnValue = hasKeyIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTimePos_void(long pNativeObject);
	/**
	 * 获得动画帧的时间点
	 * @param  
	 * @return 时间点
	 */
	public double getTimePos()
	{
		double returnValue = getTimePos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getKeyIndex_void(long pNativeObject);
	/**
	 * 获得动画关键帧索引
	 * @param  
	 * @return 关键帧索引
	 */
	public long getKeyIndex()
	{
		long returnValue = getKeyIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TimeIndex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TimeIndex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TimeIndex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TimeIndex obj = null;
 		if(baseObj instanceof TimeIndex)
		{
			obj = (TimeIndex)baseObj;
		} else {
			obj = new TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTimeIndex");
			obj.increaseCast();
		}

		return obj;
	}
}
