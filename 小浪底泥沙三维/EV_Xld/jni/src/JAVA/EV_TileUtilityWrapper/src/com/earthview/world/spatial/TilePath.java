package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片路径类
 */
public class TilePath extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePath", new TilePathClassFactory());
	}

	native private void setTilePathRule_CTilePathRule(long pNativeObject, long tilepathrule);
	/**
	 * 设置瓦片路径规则
	 * @param tilepathrule 瓦片路径规则对象
	 */
	public void setTilePathRule(com.earthview.world.spatial.TilePathRule tilepathrule)
	{
		long tilepathruleParamValue = (tilepathrule == null ? 0L : tilepathrule.nativeObject.pointer);
		setTilePathRule_CTilePathRule(this.nativeObject.pointer, tilepathruleParamValue);
	}
	native private long getTilePathRule_void(long pNativeObject);
	/**
	 * 获取瓦片路径规则对象
	 * @return 瓦片路径规则对象，不需释放
	 */
	public com.earthview.world.spatial.TilePathRule getTilePathRule()
	{
		long returnValue = getTilePathRule_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePathRule __returnValue = new com.earthview.world.spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate, "CTilePathRule");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePathRule)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTilePathRule");
		}
		return __returnValue;
	}
	native private String getPath_ev_int32_ev_uint32_ev_uint32_EVString(long pNativeObject, int level, long row, long col, String format);
	/**
	 * 获取指定参数的路径
	 * @param level 级别
	 * @param row 行
	 * @param col 列
	 * @param format 数据格式，如“jpg”
	 * @return 相应路径
	 */
	public String getPath(int level, long row, long col, String format)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String formatParamValue = format;
		String returnValue = getPath_ev_int32_ev_uint32_ev_uint32_EVString(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, formatParamValue);
		return returnValue;
	}
	/**
	 * 构造函数
	 * @param tilepathrule 瓦片路径规则
	 */
	public TilePath(com.earthview.world.spatial.TilePathRule tilepathrule) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tilepathrulePtr = new BasePointer(tilepathrule);
		list.add("tilepathrule", tilepathrulePtr.get());
		Create("CTilePath", list);
	}

	public TilePath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TilePath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TilePath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TilePath obj = null;
 		if(baseObj instanceof TilePath)
		{
			obj = (TilePath)baseObj;
		} else {
			obj = new TilePath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTilePath");
			obj.increaseCast();
		}

		return obj;
	}
}
