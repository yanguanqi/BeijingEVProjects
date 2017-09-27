package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径分析
 */
public class RouteAnalyst extends com.earthview.world.spatial2d.analyst.NetworkAnalyst {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteAnalyst", new RouteAnalystClassFactory());
	}

	/**
	 * 构造函数
	 * @param ds 数据集
	 */
	public RouteAnalyst(com.earthview.world.spatial2d.geodataset.NetworkDataset ds) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dsPtr = new BasePointer(ds);
		list.add("ds", dsPtr.get());
		Create("CRouteAnalyst", list);
	}

	native private boolean solve_CRouteParam_CRouteResult(long pNativeObject, long param, long result);
	/**
	 * 求解
	 * @param param 停靠点、障碍参数（已转换为关联的边、交点）
	 * @param result 输出参数，求解结果集
	 * @return 如果求解成功，则返回true；否则，返回false
	 */
	public boolean solve(com.earthview.world.spatial2d.analyst.RouteParam param, com.earthview.world.spatial2d.analyst.RouteResult result)
	{
		long paramParamValue = param.nativeObject.pointer;
		long resultParamValue = result.nativeObject.pointer;
		boolean returnValue = solve_CRouteParam_CRouteResult(this.nativeObject.pointer, paramParamValue, resultParamValue);
		return returnValue;
	}
	native private boolean solve_CRouteParamI_CRouteResult(long pNativeObject, long param, long result);
	/**
	 * 求解
	 * @param param 停靠点、障碍参数（原始点）
	 * @param result 输出参数，求解结果集
	 * @return 如果求解成功，则返回true；否则，返回false
	 */
	public boolean solve(com.earthview.world.spatial2d.analyst.RouteParamI param, com.earthview.world.spatial2d.analyst.RouteResult result)
	{
		long paramParamValue = param.nativeObject.pointer;
		long resultParamValue = result.nativeObject.pointer;
		boolean returnValue = solve_CRouteParamI_CRouteResult(this.nativeObject.pointer, paramParamValue, resultParamValue);
		return returnValue;
	}
	native private void setAnalystMethod_EVNAAnalystMethod(long pNativeObject, int method);
	/**
	 * 设置路径分析时查找停靠点方法
	 * @param  查找停靠点方法枚举
	 */
	public void setAnalystMethod(com.earthview.world.spatial2d.analyst.EVNAAnalystMethod method)
	{
		int methodParamValue = method.getValue();
		setAnalystMethod_EVNAAnalystMethod(this.nativeObject.pointer, methodParamValue);
	}
	native private double getImpedance_ev_uint32_ev_bool(long pNativeObject, long edgeID, boolean FT);
	/**
	 * 获取阻抗值
	 * @param edgeID 边id
	 * @param FT 方向
	 * @return 返回阻抗值
	 */
	public double getImpedance(long edgeID, boolean FT)
	{
		long edgeIDParamValue = edgeID;
		boolean FTParamValue = FT;
		double returnValue = getImpedance_ev_uint32_ev_bool(this.nativeObject.pointer, edgeIDParamValue, FTParamValue);
		return returnValue;
	}
	public RouteAnalyst(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RouteAnalyst(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RouteAnalyst fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RouteAnalyst obj = null;
 		if(baseObj instanceof RouteAnalyst)
		{
			obj = (RouteAnalyst)baseObj;
		} else {
			obj = new RouteAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRouteAnalyst");
			obj.increaseCast();
		}

		return obj;
	}
}
