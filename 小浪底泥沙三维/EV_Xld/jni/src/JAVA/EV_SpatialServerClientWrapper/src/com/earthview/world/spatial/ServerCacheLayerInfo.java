package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的缓存数据信息类
 */
public class ServerCacheLayerInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerCacheLayerInfo", new ServerCacheLayerInfoClassFactory());
	}

	native private long getLayerName_void(long pNativeObject);
	/**
	 * 获取图层名称
	 * @return 图层名称
	 */
	public StringPointer getLayerName()
	{
		long returnValue = getLayerName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getSRS_void(long pNativeObject);
	/**
	 * 获取投影信息
	 * @return 投影类型
	 */
	public com.earthview.world.spatial.EVSSCSRS getSRS()
	{
		int returnValue = getSRS_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCSRS.toEnum(returnValue);
	}
	native private int getMinLevel_void(long pNativeObject);
	/**
	 * 获取最小级别
	 * @return 最小级别
	 */
	public int getMinLevel()
	{
		int returnValue = getMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取最大级别
	 * @return 最大级别
	 */
	public int getMaxLevel()
	{
		int returnValue = getMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 包围盒对象指针，不需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public ServerCacheLayerInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerCacheLayerInfo", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.ServerCacheLayerInfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerCacheLayerInfo __returnValue = new com.earthview.world.spatial.ServerCacheLayerInfo(CreatedWhenConstruct.CWC_NotToCreate, "CServerCacheLayerInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerCacheLayerInfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CServerCacheLayerInfo");
		}
		return __returnValue;
	}
	public ServerCacheLayerInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerCacheLayerInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerCacheLayerInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerCacheLayerInfo obj = null;
 		if(baseObj instanceof ServerCacheLayerInfo)
		{
			obj = (ServerCacheLayerInfo)baseObj;
		} else {
			obj = new ServerCacheLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerCacheLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
