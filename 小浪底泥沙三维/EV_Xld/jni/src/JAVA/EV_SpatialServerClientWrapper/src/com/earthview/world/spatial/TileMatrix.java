package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS瓦片层描述类
 */
public class TileMatrix extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileMatrix", new TileMatrixClassFactory());
	}

	native private long getIdentifier_void(long pNativeObject);
	/**
	 * 获取TileMatrix的标识
	 * @return TileMatrix的标识
	 */
	public StringPointer getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double getScaleDenominator_void(long pNativeObject);
	/**
	 * 获取比例尺分母值
	 * @return 比例尺分母值
	 */
	public double getScaleDenominator()
	{
		double returnValue = getScaleDenominator_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getTopLeftCorner_ev_real64_ev_real64(long pNativeObject, long left, long top);
	/**
	 * 获取左上角坐标值
	 * @param x 左上角x值
	 * @param y 左上角y值
	 */
	public void getTopLeftCorner(DoublePointer left, DoublePointer top)
	{
		long leftParamValue = left.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		getTopLeftCorner_ev_real64_ev_real64(this.nativeObject.pointer, leftParamValue, topParamValue);
	}
	native private long getMatrixWidth_void(long pNativeObject);
	/**
	 * 获取数据矩阵宽度
	 * @return 数据矩阵宽度
	 */
	public long getMatrixWidth()
	{
		long returnValue = getMatrixWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMatrixHeight_void(long pNativeObject);
	/**
	 * 获取数据矩阵高度
	 * @return 数据矩阵高度
	 */
	public long getMatrixHeight()
	{
		long returnValue = getMatrixHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileWidth_void(long pNativeObject);
	/**
	 * 获取瓦片宽度
	 * @return 瓦片宽度
	 */
	public long getTileWidth()
	{
		long returnValue = getTileWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileHeight_void(long pNativeObject);
	/**
	 * 获取瓦片高度
	 * @return 瓦片高度
	 */
	public long getTileHeight()
	{
		long returnValue = getTileHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTitleCount_void(long pNativeObject);
	/**
	 * 获取标题数
	 * @return 标题数
	 */
	public long getTitleCount()
	{
		long returnValue = getTitleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTitle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的标题
	 * @param index 索引
	 * @return 指定标题
	 */
	public String getTitle(long index)
	{
		long indexParamValue = index;
		String returnValue = getTitle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getAbstractCount_void(long pNativeObject);
	/**
	 * 获取描述数
	 * @return 描述数目
	 */
	public long getAbstractCount()
	{
		long returnValue = getAbstractCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAbstract_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的描述
	 * @param index 索引
	 * @return 指定描述
	 */
	public String getAbstract(long index)
	{
		long indexParamValue = index;
		String returnValue = getAbstract_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getKeywordCount_void(long pNativeObject);
	/**
	 * 获取关键字数
	 * @return 关键字
	 */
	public long getKeywordCount()
	{
		long returnValue = getKeywordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKeyword_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的关键字
	 * @param index 索引
	 * @return 指定关键字
	 */
	public String getKeyword(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeyword_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	public TileMatrix(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileMatrix(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileMatrix fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileMatrix obj = null;
 		if(baseObj instanceof TileMatrix)
		{
			obj = (TileMatrix)baseObj;
		} else {
			obj = new TileMatrix(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileMatrix");
			obj.increaseCast();
		}

		return obj;
	}
}
