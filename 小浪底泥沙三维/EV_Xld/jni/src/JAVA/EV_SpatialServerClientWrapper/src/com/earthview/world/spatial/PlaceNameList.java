package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的地名信息列表类
 */
public class PlaceNameList extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CPlaceNameList", new PlaceNameListClassFactory());
	}

	native private long getRectordCount_void(long pNativeObject);
	/**
	 * 获取记录数
	 * @return 记录数目
	 */
	public long getRectordCount()
	{
		long returnValue = getRectordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRecordRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的记录信息
	 * @param index 索引
	 * @return 指定记录对象指针
	 */
	public com.earthview.world.spatial.Evplacenamerecord getRecordRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getRecordRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evplacenamerecord __returnValue = new com.earthview.world.spatial.Evplacenamerecord(CreatedWhenConstruct.CWC_NotToCreate, "CEVPlaceNameRecord");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evplacenamerecord)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVPlaceNameRecord");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public PlaceNameList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPlaceNameList", null);
	}

	public PlaceNameList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PlaceNameList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PlaceNameList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PlaceNameList obj = null;
 		if(baseObj instanceof PlaceNameList)
		{
			obj = (PlaceNameList)baseObj;
		} else {
			obj = new PlaceNameList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlaceNameList");
			obj.increaseCast();
		}

		return obj;
	}
}
