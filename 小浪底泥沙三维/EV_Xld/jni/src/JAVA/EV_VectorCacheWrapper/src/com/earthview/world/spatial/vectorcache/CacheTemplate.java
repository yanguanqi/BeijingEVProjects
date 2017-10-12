package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存模板；WGS84ORMercator	
 */
public class CacheTemplate extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheTemplate", new CacheTemplateClassFactory());
	}

	/**
	 * 构造函数
	 * @param mode 切割模式
	 */
	public CacheTemplate(com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateType mode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer modePtr = new BasePointer(mode);
		list.add("mode", modePtr.get());
		Create("CCacheTemplate", list);
	}

	native private int getTemplateMode_void(long pNativeObject);
	/**
	 * 获取设置缓存模式
	 * @return 缓存模式
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateType getTemplateMode()
	{
		int returnValue = getTemplateMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheTemplateType.toEnum(returnValue);
	}
	native private long getDivisionLevel_void(long pNativeObject);
	/**
	 * 获取分块级别数
	 * @return 分块层级数目
	 */
	public long getDivisionLevel()
	{
		long returnValue = getDivisionLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDivesionInfoRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取制定层级的分块信息
	 * @param index 指定层级
	 * @return 分块信息
	 */
	public com.earthview.world.spatial.vectorcache.DivisionInfo getDivesionInfoRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getDivesionInfoRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.DivisionInfo __returnValue = new com.earthview.world.spatial.vectorcache.DivisionInfo(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getOrientPosition_void(long pNativeObject);
	/**
	 * 获取瓦片起始点
	 * @return 瓦片起始点
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheOrientPosition getOrientPosition()
	{
		int returnValue = getOrientPosition_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheOrientPosition.toEnum(returnValue);
	}
	native private double getFirstTileSize_void(long pNativeObject);
	/**
	 * 获取初级瓦片对应实际大小
	 * @return 初级瓦片对应范围的大小
	 */
	public double getFirstTileSize()
	{
		double returnValue = getFirstTileSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTileSizeType_void(long pNativeObject);
	/**
	 * 获取描述瓦片大小的单位
	 * @return 瓦片大小的单位
	 */
	public com.earthview.world.spatial.vectorcache.EVVectorCacheUnitType getTileSizeType()
	{
		int returnValue = getTileSizeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.vectorcache.EVVectorCacheUnitType.toEnum(returnValue);
	}
	native private long getTemplateClipRect_void(long pNativeObject);
	/**
	 * 获取当前模板囊括的真实地理范围
	 * @return 地理范围，不需释放
	 */
	public com.earthview.world.spatial.vectorcache.GeoRect getTemplateClipRect()
	{
		long returnValue = getTemplateClipRect_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.GeoRect __returnValue = new com.earthview.world.spatial.vectorcache.GeoRect(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getFirstLevel_void(long pNativeObject);
	/**
	 * 获取模板起始级别
	 * @return 开始级别
	 */
	public int getFirstLevel()
	{
		int returnValue = getFirstLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEndLevel_void(long pNativeObject);
	/**
	 * 获取模板终止级别
	 * @return 终止级别
	 */
	public int getEndLevel()
	{
		int returnValue = getEndLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSubTileNum_void(long pNativeObject);
	/**
	 * 获取当前级别瓦片在下一级能被分割的数目
	 * @return 当前级别瓦片在下一级能被分割的数目
	 */
	public int getSubTileNum()
	{
		int returnValue = getSubTileNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getDefaultTemplate_void(long pNativeObject);
	/**
	 * 是否默认模板
	 * @return true默认模板/false自定义
	 */
	public boolean getDefaultTemplate()
	{
		boolean returnValue = getDefaultTemplate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getStartTileNumber_void(long pNativeObject);
	/**
	 * 获取行列的起始序号
	 * @return 起始行列号
	 */
	public int getStartTileNumber()
	{
		int returnValue = getStartTileNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆模板
	 * @return 克隆结果对象的指针
	 */
	public com.earthview.world.spatial.vectorcache.CacheTemplate ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.CacheTemplate __returnValue = new com.earthview.world.spatial.vectorcache.CacheTemplate(CreatedWhenConstruct.CWC_NotToCreate, "CCacheTemplate");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorcache.CacheTemplate)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCacheTemplate");
		}
		return __returnValue;
	}
	public CacheTemplate(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheTemplate(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheTemplate fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheTemplate obj = null;
 		if(baseObj instanceof CacheTemplate)
		{
			obj = (CacheTemplate)baseObj;
		} else {
			obj = new CacheTemplate(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheTemplate");
			obj.increaseCast();
		}

		return obj;
	}
}
