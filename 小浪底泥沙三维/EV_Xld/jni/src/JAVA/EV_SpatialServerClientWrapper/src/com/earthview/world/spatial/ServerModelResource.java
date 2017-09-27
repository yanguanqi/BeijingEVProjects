package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的模型资源信息类
 */
public class ServerModelResource extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerModelResource", new ServerModelResourceClassFactory());
	}

	native private int getResourceID_void(long pNativeObject);
	/**
	 * 获取数据对应的ID号
	 * @return ID号
	 */
	public int getResourceID()
	{
		int returnValue = getResourceID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getResourceType_void(long pNativeObject);
	/**
	 * 获取资源类型
	 * @param  
	 */
	public int getResourceType()
	{
		int returnValue = getResourceType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getResourceCount_void(long pNativeObject);
	/**
	 * 获取资源数目
	 * @return 资源数
	 */
	public int getResourceCount()
	{
		int returnValue = getResourceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getResourceData_void(long pNativeObject);
	/**
	 * 获取资源对象的智能指针
	 * @return 资源对象的智能指针
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getResourceData()
	{
		long returnValue = getResourceData_void(this.nativeObject.pointer);
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
	native private String getSourceFileName_void(long pNativeObject);
	/**
	 * 获文件名称
	 * @return 文件名称
	 */
	public String getSourceFileName()
	{
		String returnValue = getSourceFileName_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerModelResource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerModelResource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerModelResource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerModelResource obj = null;
 		if(baseObj instanceof ServerModelResource)
		{
			obj = (ServerModelResource)baseObj;
		} else {
			obj = new ServerModelResource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerModelResource");
			obj.increaseCast();
		}

		return obj;
	}
}
