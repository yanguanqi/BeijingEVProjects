package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 属性要素类，描述一个要素的一个属性
 */
public class AttributionElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CAttributionElement", new AttributionElementClassFactory());
	}

	native private static long fromStream_CDataStream_EarthView_World_Core_ev_string_ev_int32_ev_int32(long stream, String fieldName, int fieldType, int byteOrder);
	/**
	 * 从流中获取属性元素
	 * @param stream 数据流
	 * @param fieldName 字段名称
	 * @param fieldType 地理要素类型,int321,long2,real6411,string12,unknown0
	 * @param byteOrder 数据流大小尾，小尾1，大尾0
	 * @return 属性元素
	 */
	public static com.earthview.world.spatial.AttributionElement fromStream(com.earthview.world.core.DataStream stream, String fieldName, int fieldType, int byteOrder)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String fieldNameParamValue = fieldName;
		int fieldTypeParamValue = fieldType;
		int byteOrderParamValue = byteOrder;
		long returnValue = fromStream_CDataStream_EarthView_World_Core_ev_string_ev_int32_ev_int32(streamParamValue, fieldNameParamValue, fieldTypeParamValue, byteOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.AttributionElement __returnValue = new com.earthview.world.spatial.AttributionElement(CreatedWhenConstruct.CWC_NotToCreate, "CAttributionElement");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.AttributionElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAttributionElement");
		}
		return __returnValue;
	}
	native private long getID_void(long pNativeObject);
	/**
	 * 获取要素ID
	 * @return 要素ID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAttributionValue_void(long pNativeObject);
	/**
	 * 获取属性元素
	 * @return 属性
	 */
	public com.earthview.world.core.Variant getAttributionValue()
	{
		long returnValue = getAttributionValue_void(this.nativeObject.pointer);
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
	native private String getFieldName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public String getFieldName()
	{
		String returnValue = getFieldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AttributionElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AttributionElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AttributionElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AttributionElement obj = null;
 		if(baseObj instanceof AttributionElement)
		{
			obj = (AttributionElement)baseObj;
		} else {
			obj = new AttributionElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAttributionElement");
			obj.increaseCast();
		}

		return obj;
	}
}
