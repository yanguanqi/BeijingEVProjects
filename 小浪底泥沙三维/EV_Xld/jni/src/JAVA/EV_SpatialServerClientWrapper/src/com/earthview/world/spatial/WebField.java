package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的字段定义类
 */
public class WebField extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebField", new WebFieldClassFactory());
	}

	native private String get_strFieldName_void(long pNativeObject);
	public String get_strFieldName()
	{
		String jniValue = get_strFieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strFieldName_EVString (long pNativeObject, String value);
	public void set_strFieldName(String strFieldName)
	{
		String strFieldNameParamValue = strFieldName;
		
		set_strFieldName_EVString(this.nativeObject.pointer, strFieldNameParamValue);
	}
	
	native private int get_nFieldType_void(long pNativeObject);
	public com.earthview.world.spatial.EVSSCWebFieldType get_nFieldType()
	{
		int jniValue = get_nFieldType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.EVSSCWebFieldType.toEnum(jniValue);
	}
	
	native private void set_nFieldType_EVSSCWebFieldType (long pNativeObject, int value);
	public void set_nFieldType(com.earthview.world.spatial.EVSSCWebFieldType nFieldType)
	{
		int nFieldTypeParamValue = nFieldType.getValue();
		
		set_nFieldType_EVSSCWebFieldType(this.nativeObject.pointer, nFieldTypeParamValue);
	}
	
	native private long get_value_void(long pNativeObject);
	public com.earthview.world.core.Variant get_value()
	{
		long jniValue = get_value_void(this.nativeObject.pointer);
		
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_value_CVariant (long pNativeObject, long value);
	public void set_value(com.earthview.world.core.Variant value)
	{
		long valueParamValue = value.nativeObject.pointer;
		
		set_value_CVariant(this.nativeObject.pointer, valueParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public WebField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWebField", null);
	}

	public WebField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WebField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebField obj = null;
 		if(baseObj instanceof WebField)
		{
			obj = (WebField)baseObj;
		} else {
			obj = new WebField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebField");
			obj.increaseCast();
		}

		return obj;
	}
}
