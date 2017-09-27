package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片集合信息类，用以描述某一范围内的瓦片信息
 */
public class TilesInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilesInfo", new TilesInfoClassFactory());
	}

	native private long getMaxRow_void(long pNativeObject);
	/**
	 * 获取最大行号
	 * @return 最大行号
	 */
	public long getMaxRow()
	{
		long returnValue = getMaxRow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMinRow_void(long pNativeObject);
	/**
	 * 获取最小行号
	 * @return 最小行号
	 */
	public long getMinRow()
	{
		long returnValue = getMinRow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxCol_void(long pNativeObject);
	/**
	 * 获取最大列号
	 * @return 最大列号
	 */
	public long getMaxCol()
	{
		long returnValue = getMaxCol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMinCol_void(long pNativeObject);
	/**
	 * 获取最小列号
	 * @return 最小列号
	 */
	public long getMinCol()
	{
		long returnValue = getMinCol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取真实世界X最大值
	 * @return 真实世界X最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取真实世界X最小值
	 * @return 真实世界X最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取真实世界Y最大值
	 * @return 真实世界Y最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取真实世界Y最小值
	 * @return 真实世界Y最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileInfoByRowCol_ev_uint32_ev_uint32(long pNativeObject, long row, long col);
	/**
	 * 获取指定行列号对应的瓦片信息对象
	 * @return 指定行列号对应瓦片信息对象的指针
	 */
	public com.earthview.world.spatial.TileInfo getTileInfoByRowCol(long row, long col)
	{
		long rowParamValue = row;
		long colParamValue = col;
		long returnValue = getTileInfoByRowCol_ev_uint32_ev_uint32(this.nativeObject.pointer, rowParamValue, colParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileInfo __returnValue = new com.earthview.world.spatial.TileInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileInfo");
		}
		return __returnValue;
	}
	native private long getTileInfoByXY_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 获取指定真实坐标对应的瓦片信息对象
	 * @return 指定真实坐标所在瓦片信息对象的指针
	 */
	public com.earthview.world.spatial.TileInfo getTileInfoByXY(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		long returnValue = getTileInfoByXY_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileInfo __returnValue = new com.earthview.world.spatial.TileInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileInfo");
		}
		return __returnValue;
	}
	native private long getTileLevelInfo_void(long pNativeObject);
	/**
	 * 获取所关联的TileLevelInfo
	 */
	public com.earthview.world.spatial.TileLevelInfo getTileLevelInfo()
	{
		long returnValue = getTileLevelInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileLevelInfo __returnValue = new com.earthview.world.spatial.TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileLevelInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileLevelInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileLevelInfo");
		}
		return __returnValue;
	}
	public TilesInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TilesInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TilesInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TilesInfo obj = null;
 		if(baseObj instanceof TilesInfo)
		{
			obj = (TilesInfo)baseObj;
		} else {
			obj = new TilesInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTilesInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
