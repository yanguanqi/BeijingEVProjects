package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径分析参数（原始点）
 */
public class RouteParamI extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteParamI", new RouteParamIClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RouteParamI() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRouteParamI", null);
	}

	native private void addStop_CPoint(long pNativeObject, long point);
	/**
	 * 添加停靠点
	 * @param point 停靠点
	 */
	public void addStop(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addStop_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void addBarriar_CPoint(long pNativeObject, long point);
	/**
	 * 添加障碍点
	 * @param point 障碍点
	 */
	public void addBarriar(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addBarriar_CPoint(this.nativeObject.pointer, pointParamValue);
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
	public RouteParamI(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteParamI(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RouteParamI fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteParamI obj = null;
 		if(baseObj instanceof RouteParamI)
		{
			obj = (RouteParamI)baseObj;
		} else {
			obj = new RouteParamI(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteParamI");
			obj.increaseCast();
		}

		return obj;
	}
}
