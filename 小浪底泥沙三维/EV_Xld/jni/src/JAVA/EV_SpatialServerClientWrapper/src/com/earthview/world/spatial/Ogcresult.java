package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC查询结果类
 */
public class Ogcresult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCResult", new OgcresultClassFactory());
	}

	native private long getDataPtr_void(long pNativeObject);
	/**
	 * 获取查询结果智能指针
	 * @return 查询结果智能指针
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getDataPtr()
	{
		long returnValue = getDataPtr_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate, "MemoryDataStreamPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcresult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCResult", null);
	}

	public Ogcresult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcresult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcresult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcresult obj = null;
 		if(baseObj instanceof Ogcresult)
		{
			obj = (Ogcresult)baseObj;
		} else {
			obj = new Ogcresult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCResult");
			obj.increaseCast();
		}

		return obj;
	}
}
