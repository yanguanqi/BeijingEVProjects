package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS专题类
 */
public class Ogcwmtstheme extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSTheme", new OgcwmtsthemeClassFactory());
	}

	native private long getIdentifier_void(long pNativeObject);
	/**
	 * 获取标识
	 * @return 标识
	 */
	public StringPointer getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getTitleCount_void(long pNativeObject);
	/**
	 * 获取标题数目
	 * @return 标题数目
	 */
	public long getTitleCount()
	{
		long returnValue = getTitleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTitle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定标题
	 * @param index 索引
	 * @return 指定标题
	 */
	public String getTitle(long index)
	{
		long indexParamValue = index;
		String returnValue = getTitle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getKeywordCount_void(long pNativeObject);
	/**
	 * 获取关键词数目
	 * @return 关键词数目
	 */
	public long getKeywordCount()
	{
		long returnValue = getKeywordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getKeyword_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定关键词
	 * @param index 索引
	 * @return 指定关键词
	 */
	public String getKeyword(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeyword_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getAbstractCount_void(long pNativeObject);
	/**
	 * 获取描述数目
	 * @return 描述数目
	 */
	public long getAbstractCount()
	{
		long returnValue = getAbstractCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAbstract_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定描述
	 * @param index 索引
	 * @return 描述
	 */
	public String getAbstract(long index)
	{
		long indexParamValue = index;
		String returnValue = getAbstract_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getSubThemeCount_void(long pNativeObject);
	/**
	 * 获取子Theme数目
	 * @return 子Theme数目
	 */
	public long getSubThemeCount()
	{
		long returnValue = getSubThemeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubThemeRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定子Theme引用
	 * @param index 索引
	 * @return 指定子Theme引用
	 */
	public com.earthview.world.spatial.Ogcwmtstheme getSubThemeRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getSubThemeRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtstheme __returnValue = new com.earthview.world.spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtstheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSTheme");
		}
		return __returnValue;
	}
	native private long getRefLayerCount_void(long pNativeObject);
	/**
	 * 获取所含图层数目
	 * @return 所含图层数目
	 */
	public long getRefLayerCount()
	{
		long returnValue = getRefLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRefLayerName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定所含图层名
	 * @param index 索引
	 * @return 指定图层名
	 */
	public String getRefLayerName(long index)
	{
		long indexParamValue = index;
		String returnValue = getRefLayerName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogcwmtstheme ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtstheme __returnValue = new com.earthview.world.spatial.Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSTheme");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtstheme)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSTheme");
		}
		return __returnValue;
	}
	public Ogcwmtstheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmtstheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmtstheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmtstheme obj = null;
 		if(baseObj instanceof Ogcwmtstheme)
		{
			obj = (Ogcwmtstheme)baseObj;
		} else {
			obj = new Ogcwmtstheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMTSTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
