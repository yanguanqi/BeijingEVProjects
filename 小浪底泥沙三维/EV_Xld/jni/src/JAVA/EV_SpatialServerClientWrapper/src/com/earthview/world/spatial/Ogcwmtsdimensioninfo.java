package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCwmts的其他维度信息类
 */
public class Ogcwmtsdimensioninfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSDimensionInfo", new OgcwmtsdimensioninfoClassFactory());
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @return 名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUOM_void(long pNativeObject);
	/**
	 * 获取测量单位
	 * @return 测量单位
	 */
	public StringPointer getUOM()
	{
		long returnValue = getUOM_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUnitSymbol_void(long pNativeObject);
	/**
	 * 获取符号
	 * @return 符号描述
	 */
	public StringPointer getUnitSymbol()
	{
		long returnValue = getUnitSymbol_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDefault_void(long pNativeObject);
	/**
	 * 获取默认值
	 * @param value 
	 */
	public StringPointer getDefault()
	{
		long returnValue = getDefault_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long isCurrent_void(long pNativeObject);
	/**
	 * 是否当前值
	 * @return NULL表示无此值，否则按所指值
	 */
	public BooleanPointer isCurrent()
	{
		long returnValue = isCurrent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private String getTitle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引标题
	 * @param index 索引
	 * @return 指定标题
	 */
	public String getTitle(long index)
	{
		long indexParamValue = index;
		String returnValue = getTitle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getTitleCount_void(long pNativeObject);
	/**
	 * 获取标题数目
	 * @return 标题数
	 */
	public long getTitleCount()
	{
		long returnValue = getTitleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAbstract_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的摘要
	 * @param index 索引
	 * @return 指定摘要
	 */
	public String getAbstract(long index)
	{
		long indexParamValue = index;
		String returnValue = getAbstract_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getAbstractCount_void(long pNativeObject);
	/**
	 * 获取摘要数目
	 * @param value 
	 * @return 摘要数目
	 */
	public long getAbstractCount()
	{
		long returnValue = getAbstractCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKeyword_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的关键词
	 * @param index 索引
	 * @return 指定关键词
	 */
	public String getKeyword(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeyword_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getKeywordCount_void(long pNativeObject);
	/**
	 * 获取关键词个数
	 * @param value 
	 */
	public long getKeywordCount()
	{
		long returnValue = getKeywordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的值
	 * @param index 索引
	 * @return 指定值
	 */
	public String getValue(long index)
	{
		long indexParamValue = index;
		String returnValue = getValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getValueCount_void(long pNativeObject);
	/**
	 * 获取值的个数
	 * @param value 
	 */
	public long getValueCount()
	{
		long returnValue = getValueCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwmtsdimensioninfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMTSDimensionInfo", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.Ogcwmtsdimensioninfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtsdimensioninfo __returnValue = new com.earthview.world.spatial.Ogcwmtsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSDimensionInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtsdimensioninfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSDimensionInfo");
		}
		return __returnValue;
	}
	public Ogcwmtsdimensioninfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmtsdimensioninfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmtsdimensioninfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmtsdimensioninfo obj = null;
 		if(baseObj instanceof Ogcwmtsdimensioninfo)
		{
			obj = (Ogcwmtsdimensioninfo)baseObj;
		} else {
			obj = new Ogcwmtsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMTSDimensionInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
