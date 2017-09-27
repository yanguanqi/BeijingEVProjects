package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的贴图纹理信息类
 */
public class ServerOrigTexture extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerOrigTexture", new ServerOrigTextureClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerOrigTexture() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerOrigTexture", null);
	}

	native private String getDatasetName_void(long pNativeObject);
	/**
	 * 获取数据名称
	 * @return 数据名称
	 */
	public String getDatasetName()
	{
		String returnValue = getDatasetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEntityID_void(long pNativeObject);
	/**
	 * 获取数据对应的ID号
	 * @return ID号
	 */
	public int getEntityID()
	{
		int returnValue = getEntityID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getModelResourceCount_void(long pNativeObject);
	/**
	 * 获取相关的资源数目
	 * @return 相关的资源数
	 */
	public long getModelResourceCount()
	{
		long returnValue = getModelResourceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getModelResourceRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的资源信息
	 * @param index 索引
	 * @return 指定资源对象的指针
	 */
	public com.earthview.world.spatial.ServerModelResource getModelResourceRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getModelResourceRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerModelResource __returnValue = new com.earthview.world.spatial.ServerModelResource(CreatedWhenConstruct.CWC_NotToCreate, "CServerModelResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerModelResource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerModelResource");
		}
		return __returnValue;
	}
	public ServerOrigTexture(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerOrigTexture(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerOrigTexture fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerOrigTexture obj = null;
 		if(baseObj instanceof ServerOrigTexture)
		{
			obj = (ServerOrigTexture)baseObj;
		} else {
			obj = new ServerOrigTexture(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerOrigTexture");
			obj.increaseCast();
		}

		return obj;
	}
}
