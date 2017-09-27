package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片级别规则类
 */
public class TileLevel extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileLevel", new TileLevelClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TileLevel() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTileLevel", null);
	}

	native private int getBaseLevel_void(long pNativeObject);
	/**
	 * 获取基础级别
	 * @return 瓦片基础级别
	 */
	public int getBaseLevel()
	{
		int returnValue = getBaseLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSpanOfBaseLevel_void(long pNativeObject);
	/**
	 * 获取基础级别跨度
	 * @return 基础级别跨度
	 */
	public double getSpanOfBaseLevel()
	{
		double returnValue = getSpanOfBaseLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinLevel_void(long pNativeObject);
	/**
	 * 获取最小级别
	 * @return 最小级别，如果hasMinLevel=false，返回-100
	 */
	public int getMinLevel()
	{
		int returnValue = getMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取最大级别
	 * @return 最大级别，如果hasMaxLevel=false，返回100
	 */
	public int getMaxLevel()
	{
		int returnValue = getMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasMinLevel_void(long pNativeObject);
	/**
	 * 判断是否具有最小级别
	 * @return 具有最小级别返回真，否则返回假
	 */
	public boolean hasMinLevel()
	{
		boolean returnValue = hasMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasMaxLevel_void(long pNativeObject);
	/**
	 * 判断是否具有最大级别
	 * @return 具有最大级别返回真，否则返回假
	 */
	public boolean hasMaxLevel()
	{
		boolean returnValue = hasMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBaseLevel_ev_int32(long pNativeObject, int nLevel);
	/**
	 * 设置基础级别
	 * @param nLevel 基础级别
	 */
	public void setBaseLevel(int nLevel)
	{
		int nLevelParamValue = nLevel;
		setBaseLevel_ev_int32(this.nativeObject.pointer, nLevelParamValue);
	}
	native private void setSpanOfBaseLevel_ev_real64(long pNativeObject, double dSpan);
	/**
	 * 设置基础级别跨度
	 * @param dSpan 基础级别跨度
	 */
	public void setSpanOfBaseLevel(double dSpan)
	{
		double dSpanParamValue = dSpan;
		setSpanOfBaseLevel_ev_real64(this.nativeObject.pointer, dSpanParamValue);
	}
	native private void setMinLevel_ev_int32(long pNativeObject, int nLevel);
	/**
	 * 设置最小级别
	 * @param nLevel 最小级别
	 */
	public void setMinLevel(int nLevel)
	{
		int nLevelParamValue = nLevel;
		setMinLevel_ev_int32(this.nativeObject.pointer, nLevelParamValue);
	}
	native private void setMaxLevel_ev_int32(long pNativeObject, int nLevel);
	/**
	 * 设置最大级别
	 * @param nLevel 最大级别
	 */
	public void setMaxLevel(int nLevel)
	{
		int nLevelParamValue = nLevel;
		setMaxLevel_ev_int32(this.nativeObject.pointer, nLevelParamValue);
	}
	native private void setHasMinLevel_ev_bool(long pNativeObject, boolean bHas);
	/**
	 * 设置是否含有最小级别
	 * @param bHas 是否含有最小级别
	 */
	public void setHasMinLevel(boolean bHas)
	{
		boolean bHasParamValue = bHas;
		setHasMinLevel_ev_bool(this.nativeObject.pointer, bHasParamValue);
	}
	native private void setHasMaxLevel_ev_bool(long pNativeObject, boolean bHas);
	/**
	 * 设置是否含有最大级别
	 * @param bHas 是否含有最大级别
	 */
	public void setHasMaxLevel(boolean bHas)
	{
		boolean bHasParamValue = bHas;
		setHasMaxLevel_ev_bool(this.nativeObject.pointer, bHasParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @return 新对象指针
	 */
	public com.earthview.world.spatial.TileLevel ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileLevel __returnValue = new com.earthview.world.spatial.TileLevel(CreatedWhenConstruct.CWC_NotToCreate, "CTileLevel");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileLevel)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileLevel");
		}
		return __returnValue;
	}
	public TileLevel(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileLevel(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileLevel fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileLevel obj = null;
 		if(baseObj instanceof TileLevel)
		{
			obj = (TileLevel)baseObj;
		} else {
			obj = new TileLevel(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileLevel");
			obj.increaseCast();
		}

		return obj;
	}
}
