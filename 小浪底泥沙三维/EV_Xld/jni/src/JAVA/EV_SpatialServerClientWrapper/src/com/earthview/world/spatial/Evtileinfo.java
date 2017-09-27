package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的瓦片数据信息类
 */
public class Evtileinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVTileInfo", new EvtileinfoClassFactory());
	}

	native private long getDataStreamPtr_void(long pNativeObject);
	/**
	 * 获取瓦片信息流的智能指针
	 * @return 对应瓦片信息流的智能指针
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getDataStreamPtr()
	{
		long returnValue = getDataStreamPtr_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long isLastest_void(long pNativeObject);
	/**
	 * 判断数据是否最新
	 * @return 非空表示可以获取到数据，根据值判断；空指针表示未获取到该数据
	 */
	public BooleanPointer isLastest()
	{
		long returnValue = isLastest_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getFileFormat_void(long pNativeObject);
	/**
	 * 获取瓦片数据对应的数据格式
	 * @return 瓦片数据格式
	 */
	public com.earthview.world.spatial.EVSSCFileFormat getFileFormat()
	{
		int returnValue = getFileFormat_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCFileFormat.toEnum(returnValue);
	}
	native private long getDataTime_void(long pNativeObject);
	/**
	 * 获取瓦片数据生成时间
	 * @return 数据生成时间
	 */
	public StringPointer getDataTime()
	{
		long returnValue = getDataTime_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getUpdateTime_void(long pNativeObject);
	/**
	 * 获取瓦片数据更新时间
	 * @return 数据更新时间
	 */
	public StringPointer getUpdateTime()
	{
		long returnValue = getUpdateTime_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getProperty_void(long pNativeObject);
	/**
	 * 获取其他信息
	 * @return 信息描述
	 */
	public StringPointer getProperty()
	{
		long returnValue = getProperty_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Evtileinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEVTileInfo", null);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清除所有信息
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public Evtileinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evtileinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evtileinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evtileinfo obj = null;
 		if(baseObj instanceof Evtileinfo)
		{
			obj = (Evtileinfo)baseObj;
		} else {
			obj = new Evtileinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVTileInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
