package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片信息类
 */
public class TileInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileInfo", new TileInfoClassFactory());
	}

	native private long getRow_void(long pNativeObject);
	/**
	 * 获取瓦片行号
	 * @return 瓦片行号
	 */
	public long getRow()
	{
		long returnValue = getRow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCol_void(long pNativeObject);
	/**
	 * 获取瓦片列号
	 * @return 瓦片列号
	 */
	public long getCol()
	{
		long returnValue = getCol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取最大X值
	 * @return 瓦片对应离地范围X方向最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取最小X值
	 * @return 瓦片对应离地范围X方向最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取最大Y值
	 * @return 瓦片对应离地范围Y方向最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取最小Y值
	 * @return 瓦片对应离地范围Y方向最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getSize_ev_uint32_ev_uint32(long pNativeObject, long width, long height);
	/**
	 * 获取瓦片大小
	 * @param width 瓦片宽度
	 * @param height 瓦片高度
	 */
	public void getSize(UIntegerPointer width, UIntegerPointer height)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		getSize_ev_uint32_ev_uint32(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void toTilePoint_ev_real64_ev_real64(long pNativeObject, long x, long y);
	/**
	 * 像素点转换为世界点,像素起点为左上
	 * @param x x坐标
	 * @param y y坐标
	 */
	public void toTilePoint(DoublePointer x, DoublePointer y)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		toTilePoint_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void toPixelPoint_ev_real64_ev_real64(long pNativeObject, long x, long y);
	/**
	 * 世界点转换为像素点,像素起点为左上
	 * @param x x坐标
	 * @param y y坐标
	 */
	public void toPixelPoint(DoublePointer x, DoublePointer y)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		toPixelPoint_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private long getTileLevelInfo_void(long pNativeObject);
	/**
	 * 获取所关联的TileLevelInfo
	 * @return 相应对象指针，不需释放
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
	public TileInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileInfo obj = null;
 		if(baseObj instanceof TileInfo)
		{
			obj = (TileInfo)baseObj;
		} else {
			obj = new TileInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
