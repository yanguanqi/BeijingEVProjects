package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BilBuilder extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CBilBuilder", new BilBuilderClassFactory());
	}

	public BilBuilder() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBilBuilder", null);
	}

	native private void setRasterDataset_IRasterDataset(long pNativeObject, long ref_pRasterDataset);
	/**
	 * 设置切割dem的源RasterDataset，数据集波段数必须为1
	 * @param pRasterDataset 源数据集
	 */
	public void setRasterDataset(com.earthview.world.spatial.geodataset.Irasterdataset ref_pRasterDataset)
	{
		long ref_pRasterDatasetParamValue = (ref_pRasterDataset == null ? 0L : ref_pRasterDataset.nativeObject.pointer);
		setRasterDataset_IRasterDataset(this.nativeObject.pointer, ref_pRasterDatasetParamValue);
	}
	native private void getRowColRange_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int level, long minRow, long maxRow, long minCol, long maxCol);
	/**
	 * 获取源栅格数据集在指定级别所覆盖的行列号范围
	 * @param level 级别
	 * @param minRow 最小行号
	 * @param maxRow 最大行号
	 * @param minCol 最小列号
	 * @param maxCol 最大列号
	 */
	public void getRowColRange(int level, IntegerPointer minRow, IntegerPointer maxRow, IntegerPointer minCol, IntegerPointer maxCol)
	{
		int levelParamValue = level;
		long minRowParamValue = minRow.nativeObject.pointer;
		long maxRowParamValue = maxRow.nativeObject.pointer;
		long minColParamValue = minCol.nativeObject.pointer;
		long maxColParamValue = maxCol.nativeObject.pointer;
		getRowColRange_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, levelParamValue, minRowParamValue, maxRowParamValue, minColParamValue, maxColParamValue);
	}
	native private void getTile_ev_int32_ev_int32_ev_int32_ev_byte(long pNativeObject, int level, int row, int col, long pBuffer);
	/**
	 * 获取指定级别行列号的dem瓦片的数据
	 * @param level 级别
	 * @param row 行号
	 * @param col 列号
	 * @param pBuffer 数据缓冲区（大小为瓦片宽度×高度×像素占字节数）
	 */
	public void getTile(int level, int row, int col, UBytePointer pBuffer)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long pBufferParamValue = (pBuffer == null ? 0L : pBuffer.nativeObject.pointer);
		getTile_ev_int32_ev_int32_ev_int32_ev_byte(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, pBufferParamValue);
	}
	native private int getTileWidth_void(long pNativeObject);
	/**
	 * 获取dem瓦片宽度
	 * @param  
	 * @return 瓦片宽度
	 */
	public int getTileWidth()
	{
		int returnValue = getTileWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTileHeight_void(long pNativeObject);
	/**
	 * 获取dem瓦片高度
	 * @param  
	 * @return 瓦片高度
	 */
	public int getTileHeight()
	{
		int returnValue = getTileHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTileDataLength_void(long pNativeObject);
	/**
	 * 获取瓦片数据长度(瓦片数据类型与源数据集类型一致，因此设置新的源数据集后瓦片数据长度可能改变)
	 * @param  
	 * @return 瓦片数据长度
	 */
	public int getTileDataLength()
	{
		int returnValue = getTileDataLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSpatialRef_void(long pNativeObject);
	/**
	 * 获取dem瓦片的坐标系，用WKT字符串描述
	 * @param  
	 * @return 坐标系字符串
	 */
	public StringPointer getSpatialRef()
	{
		long returnValue = getSpatialRef_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getLowestLevel_void(long pNativeObject);
	/**
	 * 获取最低级别号（分辨率最低）
	 * @param  
	 * @return 级别号
	 */
	public int getLowestLevel()
	{
		int returnValue = getLowestLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHighestLevel_void(long pNativeObject);
	/**
	 * 获取最高级别号（分辨率最高）
	 * @param  
	 * @return 级别号
	 */
	public int getHighestLevel()
	{
		int returnValue = getHighestLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLevelSpan_ev_int32(long pNativeObject, int level);
	/**
	 * 获取指定级别的瓦片的地理宽度
	 * @param level 级别
	 * @return 地理宽度
	 */
	public double getLevelSpan(int level)
	{
		int levelParamValue = level;
		double returnValue = getLevelSpan_ev_int32(this.nativeObject.pointer, levelParamValue);
		return returnValue;
	}
	native private void getRowColByCoord_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(long pNativeObject, int level, double X, double Y, long row, long col);
	/**
	 * 获取指定坐标（必须是dem瓦片的坐标系下的坐标）在某一级别所属的瓦片的行列号
	 * @param level 指定级别号
	 * @param X X坐标
	 * @param Y Y坐标
	 * @param row 行号
	 * @param col 列号
	 */
	public void getRowColByCoord(int level, double X, double Y, IntegerPointer row, IntegerPointer col)
	{
		int levelParamValue = level;
		double XParamValue = X;
		double YParamValue = Y;
		long rowParamValue = row.nativeObject.pointer;
		long colParamValue = col.nativeObject.pointer;
		getRowColByCoord_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(this.nativeObject.pointer, levelParamValue, XParamValue, YParamValue, rowParamValue, colParamValue);
	}
	native private void getTileCoordRange_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, int level, int row, int col, long minX, long maxX, long minY, long maxY);
	/**
	 * 获取指定级别行列号的瓦片的地理范围
	 * @param level 级别号
	 * @param row 行号
	 * @param col 列号
	 * @param minX 最小X
	 * @param maxX 最大X
	 * @param minY 最小Y
	 * @param maxY 最大Y
	 */
	public void getTileCoordRange(int level, int row, int col, DoublePointer minX, DoublePointer maxX, DoublePointer minY, DoublePointer maxY)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long minXParamValue = minX.nativeObject.pointer;
		long maxXParamValue = maxX.nativeObject.pointer;
		long minYParamValue = minY.nativeObject.pointer;
		long maxYParamValue = maxY.nativeObject.pointer;
		getTileCoordRange_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, minXParamValue, maxXParamValue, minYParamValue, maxYParamValue);
	}
	public BilBuilder(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BilBuilder(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BilBuilder fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BilBuilder obj = null;
 		if(baseObj instanceof BilBuilder)
		{
			obj = (BilBuilder)baseObj;
		} else {
			obj = new BilBuilder(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBilBuilder");
			obj.increaseCast();
		}

		return obj;
	}
}
