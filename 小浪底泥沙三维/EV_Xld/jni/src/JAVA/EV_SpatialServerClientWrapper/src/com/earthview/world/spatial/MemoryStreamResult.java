package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务查询结果内存流类
 */
public class MemoryStreamResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMemoryStreamResult", new MemoryStreamResultClassFactory());
	}

	native private long getDataStreamPtr_void(long pNativeObject);
	/**
	 * 获取数据的智能指针
	 * @return 数据智能指针
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
	/**
	 * 构造函数
	 */
	public MemoryStreamResult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMemoryStreamResult", null);
	}

	public MemoryStreamResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MemoryStreamResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MemoryStreamResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MemoryStreamResult obj = null;
 		if(baseObj instanceof MemoryStreamResult)
		{
			obj = (MemoryStreamResult)baseObj;
		} else {
			obj = new MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMemoryStreamResult");
			obj.increaseCast();
		}

		return obj;
	}
}
