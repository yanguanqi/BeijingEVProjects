package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的数据库字段描述类
 */
public class ServerDBField extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerDBField", new ServerDBFieldClassFactory());
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAliasName_void(long pNativeObject);
	/**
	 * 获取字段别名
	 * @return 字段别名
	 */
	public StringPointer getAliasName()
	{
		long returnValue = getAliasName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getDescription_void(long pNativeObject);
	/**
	 * 获取描述
	 * @return 描述信息
	 */
	public StringPointer getDescription()
	{
		long returnValue = getDescription_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getFieldType_void(long pNativeObject);
	/**
	 * 获取字段类型
	 * @return 字段类型
	 */
	public com.earthview.world.spatial.geodataset.EVFieldType getFieldType()
	{
		int returnValue = getFieldType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFieldType.toEnum(returnValue);
	}
	native private int getPrecision_void(long pNativeObject);
	/**
	 * 获取字段精度
	 * @return 精度大小
	 */
	public int getPrecision()
	{
		int returnValue = getPrecision_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSize_void(long pNativeObject);
	/**
	 * 获取字段长度
	 * @return 最大字段长
	 */
	public int getSize()
	{
		int returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerDBField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerDBField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerDBField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerDBField obj = null;
 		if(baseObj instanceof ServerDBField)
		{
			obj = (ServerDBField)baseObj;
		} else {
			obj = new ServerDBField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerDBField");
			obj.increaseCast();
		}

		return obj;
	}
}
