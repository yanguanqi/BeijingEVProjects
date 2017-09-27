package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图集
 */
public class MapSet extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMapSet", new MapSetClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public MapSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMapSet", null);
	}

	native private long getMapCount_void(long pNativeObject);
	/**
	 * 获取地图集合中地图的个数
	 * @param  
	 * @return 地图个数
	 */
	public long getMapCount()
	{
		long returnValue = getMapCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMap_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引处的地图
	 * @param index 地图索引
	 * @return 地图
	 */
	public com.earthview.world.spatial2d.atlas.Map getMap(long index)
	{
		long indexParamValue = index;
		long returnValue = getMap_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.atlas.Map __returnValue = new com.earthview.world.spatial2d.atlas.Map(CreatedWhenConstruct.CWC_NotToCreate, "CMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.atlas.Map)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMap");
		}
		return __returnValue;
	}
	native private boolean add_CMap(long pNativeObject, long ref_map);
	/**
	 * 把地图添加到地图集合中
	 * @param map 待添加的地图指针
	 * @return 如果添加成功则返回true,反之则否
	 */
	public boolean add(com.earthview.world.spatial2d.atlas.Map ref_map)
	{
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		boolean returnValue = add_CMap(this.nativeObject.pointer, ref_mapParamValue);
		return returnValue;
	}
	native private boolean insert_ev_uint32_CMap(long pNativeObject, long index, long ref_map);
	/**
	 * 添加一个地图
	 * @param index 插入的位置
	 * @param map 待插入的地图
	 * @return 如果插入成功则返回true,反之则否
	 */
	public boolean insert(long index, com.earthview.world.spatial2d.atlas.Map ref_map)
	{
		long indexParamValue = index;
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		boolean returnValue = insert_ev_uint32_CMap(this.nativeObject.pointer, indexParamValue, ref_mapParamValue);
		return returnValue;
	}
	native private boolean remove_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除地图索引处的地图
	 * @param index 待移除地图的索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean remove(long index)
	{
		long indexParamValue = index;
		boolean returnValue = remove_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void removeAll_void(long pNativeObject);
	/**
	 * 把所有地图都移除掉
	 * @param  
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private boolean move_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动地图的位置
	 * @param oldIndex 地图原来的索引
	 * @param newIndex 地图的目标索引
	 * @return 移动成功则返回true,反之则否
	 */
	public boolean move(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		boolean returnValue = move_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
		return returnValue;
	}
	native private long getCurrentMapIndex_void(long pNativeObject);
	/**
	 * 获取当前地图的索引
	 * @param  
	 * @return 地图索引
	 */
	public long getCurrentMapIndex()
	{
		long returnValue = getCurrentMapIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCurrentMapIndex_ev_uint32(long pNativeObject, long index);
	/**
	 * 设置当前地图的索引
	 * @param index 地图的索引
	 */
	public void setCurrentMapIndex(long index)
	{
		long indexParamValue = index;
		setCurrentMapIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void load_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流中恢复地图集
	 * @param stream 地图集的流
	 */
	public void load(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		load_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void load_EVString(long pNativeObject, String xml);
	/**
	 * 从xml中恢复地图集
	 * @param xml xml
	 */
	public void load(String xml)
	{
		String xmlParamValue = xml;
		load_EVString(this.nativeObject.pointer, xmlParamValue);
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 把地图集的配置保存到流中
	 * @param stream 流对象
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private String toXML_void(long pNativeObject);
	/**
	 * 把地图集保存到xml中
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	public MapSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapSet obj = null;
 		if(baseObj instanceof MapSet)
		{
			obj = (MapSet)baseObj;
		} else {
			obj = new MapSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapSet");
			obj.increaseCast();
		}

		return obj;
	}
}
