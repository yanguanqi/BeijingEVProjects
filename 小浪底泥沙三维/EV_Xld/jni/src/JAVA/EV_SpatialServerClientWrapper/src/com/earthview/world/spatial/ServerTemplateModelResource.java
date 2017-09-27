package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的模型资源信息类
 */
public class ServerTemplateModelResource extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateModelResource", new ServerTemplateModelResourceClassFactory());
	}

	native private int getRefCount_void(long pNativeObject);
	public int getRefCount()
	{
		int returnValue = getRefCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getResData_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr getResData()
	{
		long returnValue = getResData_void(this.nativeObject.pointer);
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
	native private long getResFilename_void(long pNativeObject);
	public StringPointer getResFilename()
	{
		long returnValue = getResFilename_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getResType_void(long pNativeObject);
	public int getResType()
	{
		int returnValue = getResType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getResId_void(long pNativeObject);
	public int getResId()
	{
		int returnValue = getResId_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSubMeshIndex_void(long pNativeObject);
	public int getSubMeshIndex()
	{
		int returnValue = getSubMeshIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getChangeFromTemplate_void(long pNativeObject);
	public int getChangeFromTemplate()
	{
		int returnValue = getChangeFromTemplate_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerTemplateModelResource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerTemplateModelResource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerTemplateModelResource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerTemplateModelResource obj = null;
 		if(baseObj instanceof ServerTemplateModelResource)
		{
			obj = (ServerTemplateModelResource)baseObj;
		} else {
			obj = new ServerTemplateModelResource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerTemplateModelResource");
			obj.increaseCast();
		}

		return obj;
	}
}
