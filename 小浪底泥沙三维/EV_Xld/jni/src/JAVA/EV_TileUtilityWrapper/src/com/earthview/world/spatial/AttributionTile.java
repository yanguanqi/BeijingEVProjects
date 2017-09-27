package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片属性类，描述一个瓦片所有要素的一种属性
 */
public class AttributionTile extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CAttributionTile", new AttributionTileClassFactory());
	}

	native private static long fromStream_CDataStream_EarthView_World_Core_ev_string(long stream, String fieldName);
	/**
	 * 从信息流解析获取EarthView::World::Spatial::CAttributionTile对象
	 * @param stream 信息流
	 * @param fieldName 字段名称
	 * @return EarthView::World::Spatial::CAttributionTile对象指针
	 */
	public static com.earthview.world.spatial.AttributionTile fromStream(com.earthview.world.core.DataStream stream, String fieldName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String fieldNameParamValue = fieldName;
		long returnValue = fromStream_CDataStream_EarthView_World_Core_ev_string(streamParamValue, fieldNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.AttributionTile __returnValue = new com.earthview.world.spatial.AttributionTile(CreatedWhenConstruct.CWC_NotToCreate, "CAttributionTile");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.AttributionTile)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAttributionTile");
		}
		return __returnValue;
	}
	native private long getElementCount_void(long pNativeObject);
	/**
	 * 获取要素个数
	 * @return 要素个数
	 */
	public long getElementCount()
	{
		long returnValue = getElementCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引相应要素的ID
	 * @param index 索引
	 * @return 相应ID
	 */
	public long getID(long index)
	{
		long indexParamValue = index;
		long returnValue = getID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getAttribution_ev_uint32(long pNativeObject, long index);
	/**
	 * 按索引获取要素属性
	 * @param index 要素索引
	 * @return 指定要素属性
	 */
	public com.earthview.world.core.Variant getAttribution(long index)
	{
		long indexParamValue = index;
		long returnValue = getAttribution_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long getAttributionByID_ev_uint32(long pNativeObject, long id);
	/**
	 * 按ID获取要素属性
	 * @param id 要素的ID
	 * @return 指定要素属性
	 */
	public com.earthview.world.core.Variant getAttributionByID(long id)
	{
		long idParamValue = id;
		long returnValue = getAttributionByID_ev_uint32(this.nativeObject.pointer, idParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long getFieldName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public StringPointer getFieldName()
	{
		long returnValue = getFieldName_void(this.nativeObject.pointer);
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
	public AttributionTile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AttributionTile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AttributionTile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AttributionTile obj = null;
 		if(baseObj instanceof AttributionTile)
		{
			obj = (AttributionTile)baseObj;
		} else {
			obj = new AttributionTile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAttributionTile");
			obj.increaseCast();
		}

		return obj;
	}
}
