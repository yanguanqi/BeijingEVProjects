package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片级别信息类
 */
public class TileLevelInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileLevelInfo", new TileLevelInfoClassFactory());
	}

	native private double getResolution_void(long pNativeObject);
	/**
	 * 获取当前级别分辨率
	 * @return 分辨率大小,单位：米
	 */
	public double getResolution()
	{
		double returnValue = getResolution_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSpan_void(long pNativeObject);
	/**
	 * 获取当前级别跨度
	 * @return 瓦片跨度
	 */
	public double getSpan()
	{
		double returnValue = getSpan_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScale_void(long pNativeObject);
	/**
	 * 获取当前级别比例尺
	 * @return 比例尺大小
	 */
	public double getScale()
	{
		double returnValue = getScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLevel_void(long pNativeObject);
	/**
	 * 获取当前级别
	 * @return 当前级别
	 */
	public int getLevel()
	{
		int returnValue = getLevel_void(this.nativeObject.pointer);
		return returnValue;
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
	native private long getTileInfoByRowCol_ev_uint32_ev_uint32(long pNativeObject, long row, long col);
	/**
	 * 获取指定行号列号的瓦片信息
	 * @param row 指定行号
	 * @param col 指定列号
	 * @return 指定行号列号的瓦片信息对象的指针（瓦片行列超出范围返回空）
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
	native private long getTileInfoByRowCol_ev_uint32_ev_uint32_void(long pNativeObject, long row, long col, long ptr1);
	/**
	 * 获取指定行号列号的瓦片信息
	 * @param row 指定行号
	 * @param col 指定列号
	 * @param ptr1 现有对象首地址
	 * @return 指定行号列号的瓦片信息对象的指针（瓦片行列超出范围返回空）
	 */
	public com.earthview.world.spatial.TileInfo getTileInfoByRowCol(long row, long col, VoidPointer ptr1)
	{
		long rowParamValue = row;
		long colParamValue = col;
		long ptr1ParamValue = (ptr1 == null ? 0L : ptr1.nativeObject.pointer);
		long returnValue = getTileInfoByRowCol_ev_uint32_ev_uint32_void(this.nativeObject.pointer, rowParamValue, colParamValue, ptr1ParamValue);
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
	 * 获取指定世界坐标的瓦片信息
	 * @param x 指定位置的x坐标，单位：同瓦片切割对应的坐标系统
	 * @param y 指定位置的y坐标，单位：同瓦片切割对应的坐标系统
	 * @return 指定坐标的瓦片信息对象的指针（坐标点超出范围返回空）
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
	native private long getTileInfoByXY_ev_real64_ev_real64_void(long pNativeObject, double x, double y, long ptr);
	/**
	 * 获取指定世界坐标的瓦片信息
	 * @param x 指定位置的x坐标，单位：同瓦片切割对应的坐标系统
	 * @param y 指定位置的y坐标，单位：同瓦片切割对应的坐标系统
	 * @param ptr 现有对象首地址
	 * @return 指定坐标的瓦片信息对象的指针（坐标点超出范围返回空）
	 */
	public com.earthview.world.spatial.TileInfo getTileInfoByXY(double x, double y, VoidPointer ptr)
	{
		double xParamValue = x;
		double yParamValue = y;
		long ptrParamValue = (ptr == null ? 0L : ptr.nativeObject.pointer);
		long returnValue = getTileInfoByXY_ev_real64_ev_real64_void(this.nativeObject.pointer, xParamValue, yParamValue, ptrParamValue);
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
	native private long getTilesInfo_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double minx, double miny, double maxx, double maxy);
	/**
	 * 获取指定范围的瓦片信息
	 * @param minx 坐标X轴最小值，单位：同瓦片切割对应的坐标系统
	 * @param miny 坐标Y轴最小值，单位：同瓦片切割对应的坐标系统
	 * @param maxx 坐标X轴最大值，单位：同瓦片切割对应的坐标系统
	 * @param maxy 坐标Y轴最大值，单位：同瓦片切割对应的坐标系统
	 * @return 指定坐标的瓦片信息对象的指针（范围完全超出界限返回为空）
	 */
	public com.earthview.world.spatial.TilesInfo getTilesInfo(double minx, double miny, double maxx, double maxy)
	{
		double minxParamValue = minx;
		double minyParamValue = miny;
		double maxxParamValue = maxx;
		double maxyParamValue = maxy;
		long returnValue = getTilesInfo_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, minxParamValue, minyParamValue, maxxParamValue, maxyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilesInfo __returnValue = new com.earthview.world.spatial.TilesInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTilesInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilesInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTilesInfo");
		}
		return __returnValue;
	}
	native private long getTileReferenceRef_void(long pNativeObject);
	/**
	 * 获取相关的tileReference对象
	 * @return 相关的tileReference对象引用
	 */
	public com.earthview.world.spatial.TileReference getTileReferenceRef()
	{
		long returnValue = getTileReferenceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileReference __returnValue = new com.earthview.world.spatial.TileReference(CreatedWhenConstruct.CWC_NotToCreate, "CTileReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileReference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileReference");
		}
		return __returnValue;
	}
	public TileLevelInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileLevelInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileLevelInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileLevelInfo obj = null;
 		if(baseObj instanceof TileLevelInfo)
		{
			obj = (TileLevelInfo)baseObj;
		} else {
			obj = new TileLevelInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileLevelInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
