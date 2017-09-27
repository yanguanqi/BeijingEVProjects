package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的查询记录描述类
 */
public class ServerRecord extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerRecord", new ServerRecordClassFactory());
	}

	native private int getID_void(long pNativeObject);
	/**
	 * 获取记录ID
	 * @return 记录对应的ID
	 */
	public int getID()
	{
		int returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEnveloprRef_void(long pNativeObject);
	/**
	 * 获取包围盒信息
	 * @return 包围盒对象指针
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnveloprRef()
	{
		long returnValue = getEnveloprRef_void(this.nativeObject.pointer);
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
	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取字段数
	 * @return 字段数
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的字段值
	 * @param index 索引
	 * @return 字段值
	 */
	public StringPointer getFieldValue(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public ServerRecord(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerRecord(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerRecord fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerRecord obj = null;
 		if(baseObj instanceof ServerRecord)
		{
			obj = (ServerRecord)baseObj;
		} else {
			obj = new ServerRecord(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerRecord");
			obj.increaseCast();
		}

		return obj;
	}
}
