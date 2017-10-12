package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存信息
 */
public class CacheProcessInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheProcessInfo", new CacheProcessInfoClassFactory());
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.vectorcache.CacheProcessInfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.CacheProcessInfo __returnValue = new com.earthview.world.spatial.vectorcache.CacheProcessInfo(CreatedWhenConstruct.CWC_NotToCreate, "CCacheProcessInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorcache.CacheProcessInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCacheProcessInfo");
		}
		return __returnValue;
	}
	/**
	 * 默认构造函数
	 */
	public CacheProcessInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCacheProcessInfo", null);
	}

	native private int getTotalProcessNum_void(long pNativeObject);
	/**
	 * 获取某数据集总要素数
	 * @return 总要素数
	 */
	public int getTotalProcessNum()
	{
		int returnValue = getTotalProcessNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPrecession_ev_real64(long pNativeObject, double value);
	/**
	 * 设置图层精度
	 * @param value 图层精度
	 */
	public void setPrecession(double value)
	{
		double valueParamValue = value;
		setPrecession_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getPrecession_void(long pNativeObject);
	/**
	 * 获取数图层精度
	 * @return 图层精度
	 */
	public double getPrecession()
	{
		double returnValue = getPrecession_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRemarkInfo_void(long pNativeObject);
	/**
	 * 获取备注信息
	 * @return 备注信息
	 */
	public BytePointer getRemarkInfo()
	{
		long returnValue = getRemarkInfo_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean setRemartkInfo_ev_char(long pNativeObject, long value);
	/**
	 * 设置备注信息
	 * @param value 备注信息
	 * @return 成功返回ture,失败返回false
	 */
	public boolean setRemartkInfo(BytePointer value)
	{
		long valueParamValue = (value == null ? 0L : value.nativeObject.pointer);
		boolean returnValue = setRemartkInfo_ev_char(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private void setOutAttribute_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否输出属性
	 * @param value 是否输出属性
	 */
	public void setOutAttribute(boolean value)
	{
		boolean valueParamValue = value;
		setOutAttribute_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getOutAttribute_void(long pNativeObject);
	/**
	 * 获取是否输出属性
	 * @return 是否输出属性
	 */
	public boolean getOutAttribute()
	{
		boolean returnValue = getOutAttribute_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAttributeMinLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置属性最小切割级别
	 * @param level 属性最小切割级别
	 */
	public void setAttributeMinLevel(int level)
	{
		int levelParamValue = level;
		setAttributeMinLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private void setAttributeMaxLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置属性最大切割级别
	 * @param level 属性最大切割级别
	 */
	public void setAttributeMaxLevel(int level)
	{
		int levelParamValue = level;
		setAttributeMaxLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private int getAttributeMinLevel_void(long pNativeObject);
	/**
	 * 获取属性最小切割级别
	 * @return 属性最小切割级别
	 */
	public int getAttributeMinLevel()
	{
		int returnValue = getAttributeMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getAttributeMaxLevel_void(long pNativeObject);
	/**
	 * 获取属性最大切割级别
	 * @return 属性最大切割级别
	 */
	public int getAttributeMaxLevel()
	{
		int returnValue = getAttributeMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addFieldInfo_CCacheFieldInfo(long pNativeObject, long info);
	/**
	 * 为数据集添加属性定义
	 * @param info 属性定义
	 */
	public void addFieldInfo(com.earthview.world.spatial.vectorcache.CacheFieldInfo info)
	{
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		addFieldInfo_CCacheFieldInfo(this.nativeObject.pointer, infoParamValue);
	}
	native private void setClipAttriIndex_ev_uint32_ev_uint32(long pNativeObject, long index, long count);
	/**
	 * 设置索要输出的属性在总属性定义中的索引
	 * @param index 索引指针
	 * @param count 索引数目
	 */
	public void setClipAttriIndex(UIntegerPointer index, long count)
	{
		long indexParamValue = (index == null ? 0L : index.nativeObject.pointer);
		long countParamValue = count;
		setClipAttriIndex_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, countParamValue);
	}
	native private long getFieldInfo_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取所输入的字段定义
	 * @param index 所在索引
	 * @return 指定的字段定义
	 */
	public com.earthview.world.spatial.vectorcache.CacheFieldInfo getFieldInfo(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldInfo_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.CacheFieldInfo __returnValue = new com.earthview.world.spatial.vectorcache.CacheFieldInfo(CreatedWhenConstruct.CWC_NotToCreate, "CCacheFieldInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.vectorcache.CacheFieldInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCacheFieldInfo");
		}
		return __returnValue;
	}
	native private long getClipFieldNum_void(long pNativeObject);
	/**
	 * 获取要输出的字段数目
	 * @return 要输出的字段数目
	 */
	public long getClipFieldNum()
	{
		long returnValue = getClipFieldNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getClipAttributeIndex_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取输出字段在总字段定义中的索引
	 * @param index 输出字段的索引
	 * @return 输出字段在总字段定义中的索引
	 */
	public long getClipAttributeIndex(long index)
	{
		long indexParamValue = index;
		long returnValue = getClipAttributeIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getTotalFieldNum_void(long pNativeObject);
	/**
	 * 获取总字段数目
	 * @return 总字段数目
	 */
	public long getTotalFieldNum()
	{
		long returnValue = getTotalFieldNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setDataTime_ev_char(long pNativeObject, long szValue);
	/**
	 * 设置数据时间
	 * @param szValue 数据时间，10字节，YYYYMMDDHH
	 * @return 时间格式正确返回true
	 */
	public boolean setDataTime(BytePointer szValue)
	{
		long szValueParamValue = (szValue == null ? 0L : szValue.nativeObject.pointer);
		boolean returnValue = setDataTime_ev_char(this.nativeObject.pointer, szValueParamValue);
		return returnValue;
	}
	native private long getDataTime_void(long pNativeObject);
	/**
	 * 获取数据时间
	 * @return 数据时间
	 */
	public BytePointer getDataTime()
	{
		long returnValue = getDataTime_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean setDatasetName_ev_char(long pNativeObject, long szValue);
	/**
	 * 设置数据集名称
	 * @param szValue 数据集名称，50字节之内
	 * @return 成功返回true
	 */
	public boolean setDatasetName(BytePointer szValue)
	{
		long szValueParamValue = (szValue == null ? 0L : szValue.nativeObject.pointer);
		boolean returnValue = setDatasetName_ev_char(this.nativeObject.pointer, szValueParamValue);
		return returnValue;
	}
	native private long getDatasetName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return 数据集名称
	 */
	public BytePointer getDatasetName()
	{
		long returnValue = getDatasetName_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void clearFieldInfos_void(long pNativeObject);
	/**
	 * 清除添加的字段定义,同时清除添加的切割字段索引
	 */
	public void clearFieldInfos()
	{
		clearFieldInfos_void(this.nativeObject.pointer);
	}
	native private void clearClipAttriIndex_void(long pNativeObject);
	/**
	 * 清除所设置的字段索引
	 */
	public void clearClipAttriIndex()
	{
		clearClipAttriIndex_void(this.nativeObject.pointer);
	}
	native private void setMinRange_ev_int32(long pNativeObject, int nStartLevel);
	/**
	 * 设置最小切割级别
	 * @param nStartLevel 最小切割级别
	 */
	public void setMinRange(int nStartLevel)
	{
		int nStartLevelParamValue = nStartLevel;
		setMinRange_ev_int32(this.nativeObject.pointer, nStartLevelParamValue);
	}
	native private void setMaxRange_ev_int32(long pNativeObject, int nEndLevel);
	/**
	 * 设置最大切割级别
	 * @param nEndLevel 最大切割级别
	 */
	public void setMaxRange(int nEndLevel)
	{
		int nEndLevelParamValue = nEndLevel;
		setMaxRange_ev_int32(this.nativeObject.pointer, nEndLevelParamValue);
	}
	native private int getMinRange_void(long pNativeObject);
	/**
	 * 获取最小切割级别
	 */
	public int getMinRange()
	{
		int returnValue = getMinRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxRange_void(long pNativeObject);
	/**
	 * 获取最大切割级别
	 */
	public int getMaxRange()
	{
		int returnValue = getMaxRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCacheRect_GeoRect(long pNativeObject, long rect);
	/**
	 * 设置切割范围
	 */
	public void setCacheRect(com.earthview.world.spatial.vectorcache.GeoRect rect)
	{
		long rectParamValue = rect.nativeObject.pointer;
		setCacheRect_GeoRect(this.nativeObject.pointer, rectParamValue);
	}
	native private long getCacheRect_void(long pNativeObject);
	/**
	 * 获取切割范围
	 * @return 获取切割范围
	 */
	public com.earthview.world.spatial.vectorcache.GeoRect getCacheRect()
	{
		long returnValue = getCacheRect_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.vectorcache.GeoRect __returnValue = new com.earthview.world.spatial.vectorcache.GeoRect(new InstancePointer(returnValue));
		return __returnValue;
	}
	public CacheProcessInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheProcessInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheProcessInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheProcessInfo obj = null;
 		if(baseObj instanceof CacheProcessInfo)
		{
			obj = (CacheProcessInfo)baseObj;
		} else {
			obj = new CacheProcessInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheProcessInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
