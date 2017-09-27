package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Category extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCategory", new CategoryClassFactory());
	}

	public Category() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCategory", null);
	}

	native private String get_mTagName_void(long pNativeObject);
	public String get_mTagName()
	{
		String jniValue = get_mTagName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTagName_EVString (long pNativeObject, String value);
	public void set_mTagName(String mTagName)
	{
		String mTagNameParamValue = mTagName;
		
		set_mTagName_EVString(this.nativeObject.pointer, mTagNameParamValue);
	}
	
	native private String get_mTagDescription_void(long pNativeObject);
	public String get_mTagDescription()
	{
		String jniValue = get_mTagDescription_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTagDescription_EVString (long pNativeObject, String value);
	public void set_mTagDescription(String mTagDescription)
	{
		String mTagDescriptionParamValue = mTagDescription;
		
		set_mTagDescription_EVString(this.nativeObject.pointer, mTagDescriptionParamValue);
	}
	
	native private long get_mID_void(long pNativeObject);
	public long get_mID()
	{
		long jniValue = get_mID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mID_ev_uint32 (long pNativeObject, long value);
	public void set_mID(long mID)
	{
		long mIDParamValue = mID;
		
		set_mID_ev_uint32(this.nativeObject.pointer, mIDParamValue);
	}
	
	native private long get_mCategoryAttributeList_void(long pNativeObject);
	public com.earthview.world.core.CommonStringPairList get_mCategoryAttributeList()
	{
		long jniValue = get_mCategoryAttributeList_void(this.nativeObject.pointer);
		
		com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		}
		return __returnValue;
	}
	
	native private void set_mCategoryAttributeList_CommonStringPairList (long pNativeObject, long value);
	public void set_mCategoryAttributeList(com.earthview.world.core.CommonStringPairList mCategoryAttributeList)
	{
		long mCategoryAttributeListParamValue = mCategoryAttributeList.nativeObject.pointer;
		
		set_mCategoryAttributeList_CommonStringPairList(this.nativeObject.pointer, mCategoryAttributeListParamValue);
	}
	
	public Category(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Category(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Category fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Category obj = null;
 		if(baseObj instanceof Category)
		{
			obj = (Category)baseObj;
		} else {
			obj = new Category(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCategory");
			obj.increaseCast();
		}

		return obj;
	}
}
