package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集构建类
 */
public class NetworkDatasetBuilder extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder", new NetworkDatasetBuilderClassFactory());
	}

	native private boolean build_void(long pNativeObject);
	/**
	 * 创建网络数据集
	 * @param  
	 */
	public boolean build()
	{
		boolean returnValue = build_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean buildWithEndPointConnectivityPolicy_void(long pNativeObject);
	public boolean buildWithEndPointConnectivityPolicy()
	{
		boolean returnValue = buildWithEndPointConnectivityPolicy_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean buildWithVertexConnectivityPolicy_void(long pNativeObject);
	public boolean buildWithVertexConnectivityPolicy()
	{
		boolean returnValue = buildWithVertexConnectivityPolicy_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置网络数据集名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setSourceFeatureClass_IFeatureClass(long pNativeObject, long fc);
	/**
	 * 设置网络数据集源数据集
	 * @param fc 源数据集
	 */
	public void setSourceFeatureClass(com.earthview.world.spatial.geodataset.Ifeatureclass fc)
	{
		long fcParamValue = (fc == null ? 0L : fc.nativeObject.pointer);
		setSourceFeatureClass_IFeatureClass(this.nativeObject.pointer, fcParamValue);
	}
	native private void addSourceFeatureClass_IFeatureClass(long pNativeObject, long fc);
	/**
	 * 添加参与构建的数据集
	 * @param fc 数据集
	 */
	public void addSourceFeatureClass(com.earthview.world.spatial.geodataset.Ifeatureclass fc)
	{
		long fcParamValue = (fc == null ? 0L : fc.nativeObject.pointer);
		addSourceFeatureClass_IFeatureClass(this.nativeObject.pointer, fcParamValue);
	}
	native private void addConnectivityPolicy_EVString_EVConnectivityPolicy(long pNativeObject, String srcName, int policy);
	/**
	 * /添加连通性策略/
	 * @param policy 连通性策略
	 */
	public void addConnectivityPolicy(String srcName, com.earthview.world.spatial2d.geodataset.EVConnectivityPolicy policy)
	{
		String srcNameParamValue = srcName;
		int policyParamValue = policy.getValue();
		addConnectivityPolicy_EVString_EVConnectivityPolicy(this.nativeObject.pointer, srcNameParamValue, policyParamValue);
	}
	native private void addElevationSetting_ElevationSetting(long pNativeObject, long elevation);
	/**
	 * 添加高程设置
	 * @param elevation 高程设置
	 */
	public void addElevationSetting(com.earthview.world.spatial2d.geodataset.ElevationSetting elevation)
	{
		long elevationParamValue = elevation.nativeObject.pointer;
		addElevationSetting_ElevationSetting(this.nativeObject.pointer, elevationParamValue);
	}
	native private void addTurnSource_EVString(long pNativeObject, String turn);
	/**
	 * 添加转弯策略数据源
	 * @param turn 转弯策略
	 */
	public void addTurnSource(String turn)
	{
		String turnParamValue = turn;
		addTurnSource_EVString(this.nativeObject.pointer, turnParamValue);
	}
	native private void addAttribute_CNAAttribute(long pNativeObject, long attr);
	/**
	 * 添加属性
	 * @param attr 属性
	 */
	public void addAttribute(com.earthview.world.spatial2d.geodataset.Naattribute attr)
	{
		long attrParamValue = attr.nativeObject.pointer;
		addAttribute_CNAAttribute(this.nativeObject.pointer, attrParamValue);
	}
	native private void setTolerance_ev_real64(long pNativeObject, double tolerance);
	/**
	 * /设置网络数据集创建过程中坐标点比较的误差容忍度/
	 * @param tolerance 容忍度
	 */
	public void setTolerance(double tolerance)
	{
		double toleranceParamValue = tolerance;
		setTolerance_ev_real64(this.nativeObject.pointer, toleranceParamValue);
	}
	native private static double getTolerance_void();
	/**
	 * 获取网络数据集创建过程中坐标点比较的误差容忍度
	 * @param  
	 * @return 容忍度
	 */
	public static double getTolerance()
	{
		double returnValue = getTolerance_void();
		return returnValue;
	}
	native private double getFinishPercent_void(long pNativeObject);
	/**
	 * 获取完成百分比
	 * @param  
	 * @return 完成百分比
	 */
	public double getFinishPercent()
	{
		double returnValue = getFinishPercent_void(this.nativeObject.pointer);
		return returnValue;
	}
	public NetworkDatasetBuilder(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NetworkDatasetBuilder(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NetworkDatasetBuilder fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NetworkDatasetBuilder obj = null;
 		if(baseObj instanceof NetworkDatasetBuilder)
		{
			obj = (NetworkDatasetBuilder)baseObj;
		} else {
			obj = new NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNetworkDatasetBuilder");
			obj.increaseCast();
		}

		return obj;
	}
}
