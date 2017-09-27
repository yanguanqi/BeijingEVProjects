package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的坐标点串信息类
 */
public class ServerPointList extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerPointList", new ServerPointListClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerPointList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerPointList", null);
	}

	native private long getPointCount_void(long pNativeObject);
	/**
	 * 获取点数
	 * @return 点数
	 */
	public long getPointCount()
	{
		long returnValue = getPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPointRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的点坐标
	 * @param index 索引
	 * @return 指定的点坐标对象
	 */
	public com.earthview.world.spatial.ServerPoint3DF getPointRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getPointRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerPoint3DF __returnValue = new com.earthview.world.spatial.ServerPoint3DF(CreatedWhenConstruct.CWC_NotToCreate, "CServerPoint3DF");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerPoint3DF)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerPoint3DF");
		}
		return __returnValue;
	}
	native private void addPoint_CServerPoint3DF(long pNativeObject, long point);
	/**
	 * 追加点坐标
	 * @param point 点坐标对象
	 */
	public void addPoint(com.earthview.world.spatial.ServerPoint3DF point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		addPoint_CServerPoint3DF(this.nativeObject.pointer, pointParamValue);
	}
	native private void addPoint_CServerPoint3DF_ev_uint32(long pNativeObject, long points, long count);
	/**
	 * 追加点坐标
	 * @param points 坐标数组
	 * @param count 坐标个数
	 */
	public void addPoint(com.earthview.world.spatial.ServerPoint3DF points, long count)
	{
		long pointsParamValue = (points == null ? 0L : points.nativeObject.pointer);
		long countParamValue = count;
		addPoint_CServerPoint3DF_ev_uint32(this.nativeObject.pointer, pointsParamValue, countParamValue);
	}
	native private void insertPoint_CServerPoint3DF_ev_uint32(long pNativeObject, long point, long index);
	/**
	 * 插入点坐标
	 * @param point 点坐标对象
	 * @param index 插入位置
	 */
	public void insertPoint(com.earthview.world.spatial.ServerPoint3DF point, long index)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		long indexParamValue = index;
		insertPoint_CServerPoint3DF_ev_uint32(this.nativeObject.pointer, pointParamValue, indexParamValue);
	}
	native private void removePoint_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除点坐标
	 * @param index 移除坐标的索引
	 */
	public void removePoint(long index)
	{
		long indexParamValue = index;
		removePoint_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除点坐标
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ServerPointList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerPointList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerPointList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerPointList obj = null;
 		if(baseObj instanceof ServerPointList)
		{
			obj = (ServerPointList)baseObj;
		} else {
			obj = new ServerPointList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerPointList");
			obj.increaseCast();
		}

		return obj;
	}
}
