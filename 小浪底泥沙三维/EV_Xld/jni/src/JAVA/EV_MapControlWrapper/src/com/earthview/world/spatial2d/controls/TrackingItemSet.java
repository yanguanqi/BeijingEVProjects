package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪项集合
 */
public class TrackingItemSet extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingItemSet", new TrackingItemSetClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TrackingItemSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTrackingItemSet", null);
	}

	native private int count_void(long pNativeObject);
	/**
	 * 获取个数
	 * @param  
	 * @return 个数
	 */
	public int count()
	{
		int returnValue = count_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long item_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定位置的Item指针
	 * @param index 索引号
	 * @return 跟踪项指针
	 */
	public com.earthview.world.spatial2d.controls.TrackingItem item(int index)
	{
		int indexParamValue = index;
		long returnValue = item_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.TrackingItem __returnValue = new com.earthview.world.spatial2d.controls.TrackingItem(CreatedWhenConstruct.CWC_NotToCreate, "CTrackingItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItem");
		}
		return __returnValue;
	}
	native private boolean isExist_ev_int32(long pNativeObject, int id);
	/**
	 * 判断指定ID的跟踪项是否存在
	 * @param id 跟踪项之ID
	 * @return true,存在，false不存在
	 */
	public boolean isExist(int id)
	{
		int idParamValue = id;
		boolean returnValue = isExist_ev_int32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	public TrackingItemSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingItemSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TrackingItemSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingItemSet obj = null;
 		if(baseObj instanceof TrackingItemSet)
		{
			obj = (TrackingItemSet)baseObj;
		} else {
			obj = new TrackingItemSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingItemSet");
			obj.increaseCast();
		}

		return obj;
	}
}
