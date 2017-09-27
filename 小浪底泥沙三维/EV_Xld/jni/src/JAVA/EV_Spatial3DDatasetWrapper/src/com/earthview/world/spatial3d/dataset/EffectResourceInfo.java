package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效资源信息类
 */
public class EffectResourceInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectResourceInfo", new EffectResourceInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectResourceInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectResourceInfo", null);
	}

	native private void setResourceID_ev_uint32(long pNativeObject, long resourceID);
	/**
	 * 设置资源ID
	 * @param resourceID 资源ID
	 */
	public void setResourceID(long resourceID)
	{
		long resourceIDParamValue = resourceID;
		setResourceID_ev_uint32(this.nativeObject.pointer, resourceIDParamValue);
	}
	native private long getResourceID_void(long pNativeObject);
	/**
	 * 获取资源ID
	 * @param  
	 * @return 资源ID
	 */
	public long getResourceID()
	{
		long returnValue = getResourceID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置特效资源信息名称
	 * @param name 资源信息名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取特效资源信息名称
	 * @param  
	 * @return 特效资源信息名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceType_MaterialResourceType(long pNativeObject, int type);
	/**
	 * 设置特效资源信息类型
	 * @param type 特效资源信息类型
	 */
	public void setResourceType(com.earthview.world.spatial3d.dataset.MaterialResourceType type)
	{
		int typeParamValue = type.getValue();
		setResourceType_MaterialResourceType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getResourceType_void(long pNativeObject);
	/**
	 * 获取特效资源信息类型
	 * @param type 
	 * @return 特效资源信息类型
	 */
	public com.earthview.world.spatial3d.dataset.MaterialResourceType getResourceType()
	{
		int returnValue = getResourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.MaterialResourceType.toEnum(returnValue);
	}
	native private void setResourceData_MemoryDataStreamPtr(long pNativeObject, long val);
	/**
	 * 设置特效资源信息数据
	 * @param val 数据流
	 */
	public void setResourceData(com.earthview.world.core.MemoryDataStreamPtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setResourceData_MemoryDataStreamPtr(this.nativeObject.pointer, valParamValue);
	}
	native private long getResourceData_void(long pNativeObject);
	/**
	 * 获取特效资源信息数据
	 * @param  
	 * @return 数据流
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
	public EffectResourceInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectResourceInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectResourceInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectResourceInfo obj = null;
 		if(baseObj instanceof EffectResourceInfo)
		{
			obj = (EffectResourceInfo)baseObj;
		} else {
			obj = new EffectResourceInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectResourceInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
