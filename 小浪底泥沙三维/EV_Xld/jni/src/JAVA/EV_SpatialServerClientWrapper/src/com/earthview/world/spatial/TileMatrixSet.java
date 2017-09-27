package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS瓦片数据集类
 */
public class TileMatrixSet extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileMatrixSet", new TileMatrixSetClassFactory());
	}

	native private long getIdentifier_void(long pNativeObject);
	/**
	 * 获取TileMatrixSet的标识
	 * @return TileMatrixSet的标识
	 */
	public StringPointer getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSupportedCRS_void(long pNativeObject);
	/**
	 * 获取支持的坐标参考系统
	 * @return 获取支持的坐标参考系统
	 */
	public StringPointer getSupportedCRS()
	{
		long returnValue = getSupportedCRS_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getWellKnownScaleSet_void(long pNativeObject);
	/**
	 * 获取比例尺几何名称
	 * @return 比例尺几何名称
	 */
	public StringPointer getWellKnownScaleSet()
	{
		long returnValue = getWellKnownScaleSet_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getTileMatrixCount_void(long pNativeObject);
	/**
	 * 获取TileMatrix数目
	 * @return TileMatrix数目
	 */
	public long getTileMatrixCount()
	{
		long returnValue = getTileMatrixCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTileMatrixRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定索引的TileMatrix引用
	 * @param index 索引
	 * @return 指定TileMatrix引用
	 */
	public com.earthview.world.spatial.TileMatrix getTileMatrixRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getTileMatrixRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileMatrix __returnValue = new com.earthview.world.spatial.TileMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CTileMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileMatrix");
		}
		return __returnValue;
	}
	native private long getTileMatrixRef_EVString(long pNativeObject, String tileMatrix);
	/**
	 * 获取制定名称的TileMatrix引用
	 * @param tileMatrix 名称
	 * @return 指定TileMatrix引用
	 */
	public com.earthview.world.spatial.TileMatrix getTileMatrixRef(String tileMatrix)
	{
		String tileMatrixParamValue = tileMatrix;
		long returnValue = getTileMatrixRef_EVString(this.nativeObject.pointer, tileMatrixParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileMatrix __returnValue = new com.earthview.world.spatial.TileMatrix(CreatedWhenConstruct.CWC_NotToCreate, "CTileMatrix");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileMatrix)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTileMatrix");
		}
		return __returnValue;
	}
	native private long getBoundingBoxRef_void(long pNativeObject);
	/**
	 * 获取数据理论范围
	 * @return 数据理论范围
	 */
	public com.earthview.world.spatial.Ogcwebserviceboundingbox getBoundingBoxRef()
	{
		long returnValue = getBoundingBoxRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebserviceboundingbox __returnValue = new com.earthview.world.spatial.Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebserviceboundingbox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceBoundingBox");
		}
		return __returnValue;
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
	public TileMatrixSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileMatrixSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileMatrixSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileMatrixSet obj = null;
 		if(baseObj instanceof TileMatrixSet)
		{
			obj = (TileMatrixSet)baseObj;
		} else {
			obj = new TileMatrixSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileMatrixSet");
			obj.increaseCast();
		}

		return obj;
	}
}
