package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的查询记录集合类
 */
public class ServerSet extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerSet", new ServerSetClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerSet", null);
	}

	native private int getLayerIndex_void(long pNativeObject);
	/**
	 * 获取图层对应的索引
	 * @return 图层对应的索引
	 */
	public int getLayerIndex()
	{
		int returnValue = getLayerIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMapName_void(long pNativeObject);
	/**
	 * 获取地图的名称
	 * @return 地图名
	 */
	public StringPointer getMapName()
	{
		long returnValue = getMapName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取图层名
	 * @return 图层名
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getRecordCount_void(long pNativeObject);
	/**
	 * 获取记录个数
	 * @return 记录数
	 */
	public long getRecordCount()
	{
		long returnValue = getRecordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取字段个数
	 * @return 字段数
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRecordRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的记录
	 * @param index 索引
	 * @return 指定记录对象的指针
	 */
	public com.earthview.world.spatial.ServerRecord getRecordRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getRecordRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerRecord __returnValue = new com.earthview.world.spatial.ServerRecord(CreatedWhenConstruct.CWC_NotToCreate, "CServerRecord");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerRecord)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerRecord");
		}
		return __returnValue;
	}
	native private long getFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的字段名
	 * @param index 索引
	 * @return 指定字段名
	 */
	public StringPointer getFieldName(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public ServerSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerSet obj = null;
 		if(baseObj instanceof ServerSet)
		{
			obj = (ServerSet)baseObj;
		} else {
			obj = new ServerSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerSet");
			obj.increaseCast();
		}

		return obj;
	}
}
