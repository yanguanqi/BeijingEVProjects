package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的查询结果集合类
 */
public class ServerQueryResults extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerQueryResults", new ServerQueryResultsClassFactory());
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.ServerQueryResults ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerQueryResults __returnValue = new com.earthview.world.spatial.ServerQueryResults(CreatedWhenConstruct.CWC_NotToCreate, "CServerQueryResults");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerQueryResults)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CServerQueryResults");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public ServerQueryResults() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerQueryResults", null);
	}

	native private long getResultCount_void(long pNativeObject);
	/**
	 * 获取查询结果个数
	 * @return 查询结果数
	 */
	public long getResultCount()
	{
		long returnValue = getResultCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的查询结果
	 * @param index 索引
	 * @return 指定的查询结果
	 */
	public StringPointer getValue(long index)
	{
		long indexParamValue = index;
		long returnValue = getValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public ServerQueryResults(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerQueryResults(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerQueryResults fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerQueryResults obj = null;
 		if(baseObj instanceof ServerQueryResults)
		{
			obj = (ServerQueryResults)baseObj;
		} else {
			obj = new ServerQueryResults(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerQueryResults");
			obj.increaseCast();
		}

		return obj;
	}
}
