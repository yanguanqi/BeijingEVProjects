package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMTS专题集合类
 */
public class Ogcwmtsthemes extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSThemes", new OgcwmtsthemesClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ogcwmtsthemes() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMTSThemes", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogcwmtsthemes ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmtsthemes __returnValue = new com.earthview.world.spatial.Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMTSThemes");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmtsthemes)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMTSThemes");
		}
		return __returnValue;
	}
	native private long getThemeRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的专题信息
	 * @param index 索引
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogcwmtstheme getThemeRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getThemeRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getThemeCount_void(long pNativeObject);
	/**
	 * 获取专题个数
	 * @return 专题个数
	 */
	public long getThemeCount()
	{
		long returnValue = getThemeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Ogcwmtsthemes(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmtsthemes(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmtsthemes fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmtsthemes obj = null;
 		if(baseObj instanceof Ogcwmtsthemes)
		{
			obj = (Ogcwmtsthemes)baseObj;
		} else {
			obj = new Ogcwmtsthemes(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMTSThemes");
			obj.increaseCast();
		}

		return obj;
	}
}
