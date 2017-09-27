package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片分块信息类
 */
public class TileBlockInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileBlockInfo", new TileBlockInfoClassFactory());
	}

	native private boolean isValid_void(long pNativeObject);
	/**
	 * 是否可用
	 * @return 可用返回true，否则返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBlockLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置瓦片分块的基础级别
	 * @param level 基础级别
	 */
	public void setBlockLevel(int level)
	{
		int levelParamValue = level;
		setBlockLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private void setStartLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置瓦片分块的开始级别
	 * @param level 开始级别
	 */
	public void setStartLevel(int level)
	{
		int levelParamValue = level;
		setStartLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private void setEndLevel_ev_int32(long pNativeObject, int level);
	/**
	 * 设置瓦片分块的终止级别
	 * @param level 终止级别
	 */
	public void setEndLevel(int level)
	{
		int levelParamValue = level;
		setEndLevel_ev_int32(this.nativeObject.pointer, levelParamValue);
	}
	native private long getBlockLevel_void(long pNativeObject);
	/**
	 * 获取瓦片分块的基础级别
	 * @return 基础级别
	 */
	public long getBlockLevel()
	{
		long returnValue = getBlockLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStartLevel_void(long pNativeObject);
	/**
	 * 获取瓦片分块的开始级别
	 * @return 开始级别
	 */
	public long getStartLevel()
	{
		long returnValue = getStartLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEndLevel_void(long pNativeObject);
	/**
	 * 获取瓦片分块的终止级别
	 * @return 终止级别
	 */
	public long getEndLevel()
	{
		long returnValue = getEndLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.TileBlockInfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.TileBlockInfo __returnValue = new com.earthview.world.spatial.TileBlockInfo(CreatedWhenConstruct.CWC_NotToCreate, "CTileBlockInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.TileBlockInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CTileBlockInfo");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 * @param blocklevel 分块的基础级别
	 * @param startlevel 分块的开始级别
	 * @param endlevel 分块的终止级别
	 */
	public TileBlockInfo(int blocklevel, int startlevel, int endlevel) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer blocklevelPtr = new BasePointer(blocklevel);
		list.add("blocklevel", blocklevelPtr.get());
		BasePointer startlevelPtr = new BasePointer(startlevel);
		list.add("startlevel", startlevelPtr.get());
		BasePointer endlevelPtr = new BasePointer(endlevel);
		list.add("endlevel", endlevelPtr.get());
		Create("CTileBlockInfo", list);
	}

	public TileBlockInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TileBlockInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TileBlockInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TileBlockInfo obj = null;
 		if(baseObj instanceof TileBlockInfo)
		{
			obj = (TileBlockInfo)baseObj;
		} else {
			obj = new TileBlockInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTileBlockInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
