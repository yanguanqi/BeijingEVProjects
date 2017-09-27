package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地形修改器类
 */
public class TerrainRevisor extends com.earthview.world.spatial3d.Iterrainrevisor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTerrainRevisor", new TerrainRevisorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCTerrainRevisorProxy", new TerrainRevisorClassFactory());
	}

	/**
	 * 构造函数
	 * @param key 主键
	 * @param rangemode 范围类型
	 * @param mode 修改类型
	 * @param factor 比例
	 * @param extent 范围
	 */
	public TerrainRevisor(String key, com.earthview.world.spatial3d.TerrainRangeMode rangemode, com.earthview.world.spatial3d.TerrainReviseMode mode, double factor, com.earthview.world.spatial.geometry.Polygon extent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer keyPtr = new BasePointer(key);
		list.add("key", keyPtr.get());
		BasePointer rangemodePtr = new BasePointer(rangemode);
		list.add("rangemode", rangemodePtr.get());
		BasePointer modePtr = new BasePointer(mode);
		list.add("mode", modePtr.get());
		BasePointer factorPtr = new BasePointer(factor);
		list.add("factor", factorPtr.get());
		BasePointer extentPtr = new BasePointer(extent);
		list.add("extent", extentPtr.get());
		Create("JCTerrainRevisorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.TerrainRevisor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 赋值构造函数
	 * @param tr 地形修改器
	 */
	public TerrainRevisor(com.earthview.world.spatial3d.TerrainRevisor tr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer trPtr = new BasePointer(tr);
		list.add("tr", trPtr.get());
		Create("JCTerrainRevisorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.TerrainRevisor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TerrainRevisor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTerrainRevisorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.TerrainRevisor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long OperatorAssign_CTerrainRevisor(long pNativeObject, long tr);
	/**
	 * 重写=操作符
	 * @param tr 地形修改器
	 */
	public com.earthview.world.spatial3d.TerrainRevisor OperatorAssign(com.earthview.world.spatial3d.TerrainRevisor tr)
	{
		long trParamValue = tr.nativeObject.pointer;
		long returnValue = OperatorAssign_CTerrainRevisor(this.nativeObject.pointer, trParamValue);
		com.earthview.world.spatial3d.TerrainRevisor __returnValue = new com.earthview.world.spatial3d.TerrainRevisor(CreatedWhenConstruct.CWC_NotToCreate, "CTerrainRevisor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TerrainRevisor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTerrainRevisor");
		}
		return __returnValue;
	}
	native private String getKey_void(long pNativeObject);
	/**
	 * 获取主键
	 * @param  
	 * @return 主键
	 */
	public String getKey()
	{
		String returnValue = getKey_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKey_void_NoVirtual(long pNativeObject);
	protected String getKey_NoVirtual()
	{
		String returnValue = getKey_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getRangeMode_void(long pNativeObject);
	/**
	 * 获取修改范围类型
	 * @param  
	 * @return 范围类型
	 */
	public com.earthview.world.spatial3d.TerrainRangeMode getRangeMode()
	{
		int returnValue = getRangeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.TerrainRangeMode.toEnum(returnValue);
	}
	native private void setRangeMode_TerrainRangeMode(long pNativeObject, int m);
	/**
	 * 设置修改范围类型
	 * @param m 范围类型
	 */
	public void setRangeMode(com.earthview.world.spatial3d.TerrainRangeMode m)
	{
		int mParamValue = m.getValue();
		setRangeMode_TerrainRangeMode(this.nativeObject.pointer, mParamValue);
	}
	native private int getMode_void(long pNativeObject);
	/**
	 * 获取修改类型
	 * @param  
	 * @return 修改类型
	 */
	public com.earthview.world.spatial3d.TerrainReviseMode getMode()
	{
		int returnValue = getMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.TerrainReviseMode.toEnum(returnValue);
	}
	native private void setMode_TerrainReviseMode(long pNativeObject, int m);
	/**
	 * 设置修改类型
	 * @param m 修改类型
	 */
	public void setMode(com.earthview.world.spatial3d.TerrainReviseMode m)
	{
		int mParamValue = m.getValue();
		setMode_TerrainReviseMode(this.nativeObject.pointer, mParamValue);
	}
	native private double getFactor_void(long pNativeObject);
	/**
	 * 获取比例
	 * @param  
	 * @return 比例
	 */
	public double getFactor()
	{
		double returnValue = getFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFactor_Real(long pNativeObject, double factor);
	/**
	 * 设置比例
	 * @param factor 比例
	 */
	public void setFactor(double factor)
	{
		double factorParamValue = factor;
		setFactor_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private long getExtent_void(long pNativeObject);
	/**
	 * 获取范围
	 * @param  
	 * @return 范围
	 */
	public com.earthview.world.spatial.geometry.Polygon getExtent()
	{
		long returnValue = getExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Polygon __returnValue = new com.earthview.world.spatial.geometry.Polygon(CreatedWhenConstruct.CWC_NotToCreate, "CPolygon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Polygon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolygon");
		}
		return __returnValue;
	}
	native private void setExtent_CPolygon(long pNativeObject, long extent);
	/**
	 * 设置范围
	 * @param extent 范围
	 */
	public void setExtent(com.earthview.world.spatial.geometry.Polygon extent)
	{
		long extentParamValue = (extent == null ? 0L : extent.nativeObject.pointer);
		setExtent_CPolygon(this.nativeObject.pointer, extentParamValue);
	}
	native private boolean modifyTerrain_CPoint(long pNativeObject, long pt);
	/**
	 * 修改地形
	 * @param pt 位置
	 * @return 是否成功
	 */
	public boolean modifyTerrain(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		boolean returnValue = modifyTerrain_CPoint(this.nativeObject.pointer, ptParamValue);
		return returnValue;
	}
	native private boolean modifyTerrain_CPoint_NoVirtual(long pNativeObject, long pt);
	protected boolean modifyTerrain_NoVirtual(com.earthview.world.spatial.geometry.Point pt)
	{
		long ptParamValue = pt.nativeObject.pointer;
		boolean returnValue = modifyTerrain_CPoint_NoVirtual(this.nativeObject.pointer, ptParamValue);
		return returnValue;
	}

	native private void setEnabled_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否可用
	 * @param value 是否可用
	 */
	public void setEnabled(boolean value)
	{
		boolean valueParamValue = value;
		setEnabled_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 获取是否可用
	 * @param  
	 * @return 是否可用
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAltitude_ev_real64(long pNativeObject, double alt);
	/**
	 * 设置高度值
	 * @param  
	 */
	public void setAltitude(double alt)
	{
		double altParamValue = alt;
		setAltitude_ev_real64(this.nativeObject.pointer, altParamValue);
	}
	native private double getAltitude_void(long pNativeObject);
	/**
	 * 获取高度值
	 * @param  
	 */
	public double getAltitude()
	{
		double returnValue = getAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 自我复制
	 * @param  
	 */
	public com.earthview.world.spatial3d.Iterrainrevisor ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Iterrainrevisor __returnValue = new com.earthview.world.spatial3d.Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate, "ITerrainRevisor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Iterrainrevisor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITerrainRevisor");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.Iterrainrevisor ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Iterrainrevisor __returnValue = new com.earthview.world.spatial3d.Iterrainrevisor(CreatedWhenConstruct.CWC_NotToCreate, "ITerrainRevisor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Iterrainrevisor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITerrainRevisor");
		}
		return __returnValue;
	}

	public TerrainRevisor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TerrainRevisor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getKey_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_modifyTerrain_CPoint(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getKey_void(this.nativeObject.pointer, "getKey_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_modifyTerrain_CPoint(this.nativeObject.pointer, "modifyTerrain_CPoint_callback");
		}
	}
	
	public static TerrainRevisor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TerrainRevisor obj = null;
 		if(baseObj instanceof TerrainRevisor)
		{
			obj = (TerrainRevisor)baseObj;
		} else {
			obj = new TerrainRevisor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTerrainRevisor");
			obj.increaseCast();
		}

		return obj;
	}
}
