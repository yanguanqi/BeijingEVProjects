package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片路径规则类
 */
public class TilePathRule extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePathRule", new TilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCTilePathRuleProxy", new TilePathRuleClassFactory());
	}

	protected  String getPath_ev_int32_ev_uint32_ev_uint32_EVString_callback(int level, long row, long col, String format)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String formatParamValue = format;
		String returnValue = getPath(levelParamValue, rowParamValue, colParamValue, formatParamValue);
		String __returnValue = returnValue;
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
	native private String getPath_ev_int32_ev_uint32_ev_uint32_EVString_NoVirtual(long pNativeObject, int level, long row, long col, String format);
	protected String getPath_NoVirtual(int level, long row, long col, String format)
	{
		int levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		String formatParamValue = format;
		String returnValue = getPath_ev_int32_ev_uint32_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, formatParamValue);
		return returnValue;
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.EVTilePathType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取路径类型
	 * @return 路径类型：离散文件
	 */
	public com.earthview.world.spatial.EVTilePathType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTilePathType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.EVTilePathType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTilePathType.toEnum(returnValue);
	}

	native private int getDataType_void(long pNativeObject);
	/**
	 * 获取数据类型
	 * @return 数据类型：影像、矢量、DEM
	 */
	public com.earthview.world.spatial.EVTileDataType getDataType()
	{
		int returnValue = getDataType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileDataType.toEnum(returnValue);
	}
	native private int getModeType_void(long pNativeObject);
	/**
	 * 获取瓦片分块模式
	 * @return 模式：WGS84、Mercator还是古唐
	 */
	public com.earthview.world.spatial.EVTileModeType getModeType()
	{
		int returnValue = getModeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVTileModeType.toEnum(returnValue);
	}
	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.TilePathRule returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象的指针
	 */
	public com.earthview.world.spatial.TilePathRule ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePathRule __returnValue = new com.earthview.world.spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate, "CTilePathRule");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePathRule)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTilePathRule");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.TilePathRule ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TilePathRule __returnValue = new com.earthview.world.spatial.TilePathRule(CreatedWhenConstruct.CWC_NotToCreate, "CTilePathRule");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TilePathRule)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTilePathRule");
		}
		return __returnValue;
	}

	public TilePathRule(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TilePathRule(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getPath_ev_int32_ev_uint32_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getPath_ev_int32_ev_uint32_ev_uint32_EVString(this.nativeObject.pointer, "getPath_ev_int32_ev_uint32_ev_uint32_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static TilePathRule fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TilePathRule obj = null;
 		if(baseObj instanceof TilePathRule)
		{
			obj = (TilePathRule)baseObj;
		} else {
			obj = new TilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTilePathRule");
			obj.increaseCast();
		}

		return obj;
	}
}
