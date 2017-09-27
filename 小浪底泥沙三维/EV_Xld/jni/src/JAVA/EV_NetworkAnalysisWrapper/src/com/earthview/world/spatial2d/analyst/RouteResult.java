package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径分析结果
 */
public class RouteResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteResult", new RouteResultClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RouteResult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRouteResult", null);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清除分析结果
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void addGeometry_IGeometry(long pNativeObject, long geom);
	/**
	 * 添加分析结果几何体
	 * @param geom 几何体
	 */
	public void addGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		addGeometry_IGeometry(this.nativeObject.pointer, geomParamValue);
	}
	native private void arrangeGeometry_CPoint(long pNativeObject, long point);
	/**
	 * 为结果几何体重排序
	 * @param  
	 */
	public void arrangeGeometry(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = point.nativeObject.pointer;
		arrangeGeometry_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void addRouteID_ev_uint32(long pNativeObject, long id);
	/**
	 * 添加分析结果子路段id
	 * @param geom 几何体
	 */
	public void addRouteID(long id)
	{
		long idParamValue = id;
		addRouteID_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private long getGeometryRef_ev_int32(long pNativeObject, int index);
	/**
	 * 获取分析结果几何体
	 * @param index index
	 * @return 返回几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometryRef(int index)
	{
		int indexParamValue = index;
		long returnValue = getGeometryRef_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private int getRouteID_ev_int32(long pNativeObject, int index);
	/**
	 * 获取分析结果子路段id
	 * @param index index
	 * @return 返回子路段id
	 */
	public int getRouteID(int index)
	{
		int indexParamValue = index;
		int returnValue = getRouteID_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private int count_void(long pNativeObject);
	/**
	 * 获取分析结果路径数量
	 * @param  
	 * @return 返回数量
	 */
	public int count()
	{
		int returnValue = count_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void select_IGeometry(long pNativeObject, long geom);
	/**
	 * 选择
	 * @param geom 几何体
	 */
	public void select(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		select_IGeometry(this.nativeObject.pointer, geomParamValue);
	}
	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 是否被选
	 * @param  
	 * @return 如果是返回true；否则返回false
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addSkipStop_ev_uint32(long pNativeObject, long id);
	/**
	 * 跳过停靠点
	 * @param id 停靠点
	 */
	public void addSkipStop(long id)
	{
		long idParamValue = id;
		addSkipStop_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	native private void setTotalCost_ev_real64(long pNativeObject, double cost);
	/**
	 * 设置总成本
	 * @param cost 成本
	 */
	public void setTotalCost(double cost)
	{
		double costParamValue = cost;
		setTotalCost_ev_real64(this.nativeObject.pointer, costParamValue);
	}
	native private double getTotalCost_void(long pNativeObject);
	/**
	 * 获取总成本
	 * @param  
	 * @return 返回花费成本
	 */
	public double getTotalCost()
	{
		double returnValue = getTotalCost_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void selectResult_CPoint_ev_real64(long pNativeObject, long pt, double threshold);
	/**
	 * 点选
	 * @param pt 点
	 * @param threshold 范围
	 */
	public void selectResult(com.earthview.world.spatial.geometry.Point pt, double threshold)
	{
		long ptParamValue = pt.nativeObject.pointer;
		double thresholdParamValue = threshold;
		selectResult_CPoint_ev_real64(this.nativeObject.pointer, ptParamValue, thresholdParamValue);
	}
	native private void selectResult_CRectangle(long pNativeObject, long rect);
	/**
	 * 框选
	 * @param rect 范围
	 */
	public void selectResult(com.earthview.world.spatial.geometry.Rectangle rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		selectResult_CRectangle(this.nativeObject.pointer, rectParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制结果
	 * @param  
	 * @return 返回复制后的结果
	 */
	public com.earthview.world.spatial2d.analyst.RouteResult ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.analyst.RouteResult __returnValue = new com.earthview.world.spatial2d.analyst.RouteResult(CreatedWhenConstruct.CWC_NotToCreate, "CRouteResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.analyst.RouteResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRouteResult");
		}
		return __returnValue;
	}
	public RouteResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RouteResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteResult obj = null;
 		if(baseObj instanceof RouteResult)
		{
			obj = (RouteResult)baseObj;
		} else {
			obj = new RouteResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteResult");
			obj.increaseCast();
		}

		return obj;
	}
}
