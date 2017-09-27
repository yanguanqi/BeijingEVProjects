package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Vector3DCacheField extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVector3DCacheField", new Vector3DCacheFieldClassFactory());
	}

	native private String get_mFieldName_void(long pNativeObject);
	public String get_mFieldName()
	{
		String jniValue = get_mFieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFieldName_EVString (long pNativeObject, String value);
	public void set_mFieldName(String mFieldName)
	{
		String mFieldNameParamValue = mFieldName;
		
		set_mFieldName_EVString(this.nativeObject.pointer, mFieldNameParamValue);
	}
	
	native private int get_mFieldType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVFieldType get_mFieldType()
	{
		int jniValue = get_mFieldType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.geodataset.EVFieldType.toEnum(jniValue);
	}
	
	native private void set_mFieldType_EVFieldType (long pNativeObject, int value);
	public void set_mFieldType(com.earthview.world.spatial.geodataset.EVFieldType mFieldType)
	{
		int mFieldTypeParamValue = mFieldType.getValue();
		
		set_mFieldType_EVFieldType(this.nativeObject.pointer, mFieldTypeParamValue);
	}
	
	public Vector3DCacheField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVector3DCacheField", null);
	}

	public Vector3DCacheField(String fieldName, com.earthview.world.spatial.geodataset.EVFieldType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fieldNamePtr = new BasePointer(fieldName);
		list.add("fieldName", fieldNamePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CVector3DCacheField", list);
	}

	native private String getFieldName_void(long pNativeObject);
	public String getFieldName()
	{
		String returnValue = getFieldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFieldType_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.EVFieldType getFieldType()
	{
		int returnValue = getFieldType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFieldType.toEnum(returnValue);
	}
	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml恢复图层参数
	 * @param element xml
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	public Vector3DCacheField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vector3DCacheField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vector3DCacheField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vector3DCacheField obj = null;
 		if(baseObj instanceof Vector3DCacheField)
		{
			obj = (Vector3DCacheField)baseObj;
		} else {
			obj = new Vector3DCacheField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVector3DCacheField");
			obj.increaseCast();
		}

		return obj;
	}
}
