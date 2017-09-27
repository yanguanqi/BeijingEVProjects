package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 离散文件格式瓦片的路径规则类
 */
public class TileFilePathRule extends com.earthview.world.spatial.TilePathRule {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileFilePathRule", new TileFilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCTileFilePathRuleProxy", new TileFilePathRuleClassFactory());
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

	public TileFilePathRule(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileFilePathRule(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static TileFilePathRule fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileFilePathRule obj = null;
 		if(baseObj instanceof TileFilePathRule)
		{
			obj = (TileFilePathRule)baseObj;
		} else {
			obj = new TileFilePathRule(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileFilePathRule");
			obj.increaseCast();
		}

		return obj;
	}
}
