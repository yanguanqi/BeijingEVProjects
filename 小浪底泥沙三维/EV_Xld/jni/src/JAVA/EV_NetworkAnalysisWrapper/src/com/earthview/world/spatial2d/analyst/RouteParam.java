package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径分析参数（已转换为关联的边、交点）
 */
public class RouteParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteParam", new RouteParamClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RouteParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRouteParam", null);
	}

	native private void addStopJunction_ev_uint32(long pNativeObject, long jID);
	/**
	 * 添加停靠点
	 * @param jID 相关联的交点ID
	 */
	public void addStopJunction(long jID)
	{
		long jIDParamValue = jID;
		addStopJunction_ev_uint32(this.nativeObject.pointer, jIDParamValue);
	}
	native private void addBarriarEdge_ev_uint32(long pNativeObject, long eID);
	/**
	 * 添加障碍
	 * @param eID 相关联的边ID
	 */
	public void addBarriarEdge(long eID)
	{
		long eIDParamValue = eID;
		addBarriarEdge_ev_uint32(this.nativeObject.pointer, eIDParamValue);
	}
	native private void clearStop_void(long pNativeObject);
	/**
	 * 清除所有停靠点
	 * @param  
	 */
	public void clearStop()
	{
		clearStop_void(this.nativeObject.pointer);
	}
	native private void clearBarriar_void(long pNativeObject);
	/**
	 * 清除所有障碍点
	 * @param  
	 */
	public void clearBarriar()
	{
		clearBarriar_void(this.nativeObject.pointer);
	}
	public RouteParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RouteParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteParam obj = null;
 		if(baseObj instanceof RouteParam)
		{
			obj = (RouteParam)baseObj;
		} else {
			obj = new RouteParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteParam");
			obj.increaseCast();
		}

		return obj;
	}
}
