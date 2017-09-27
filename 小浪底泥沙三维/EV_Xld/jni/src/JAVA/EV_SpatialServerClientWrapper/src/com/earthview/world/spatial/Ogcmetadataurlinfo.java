package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC数据源描述信息类适用于metaDataUrl\dataUrl\FeatureListUrl,后两者不含strType变量
 */
public class Ogcmetadataurlinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCMetaDataURLInfo", new OgcmetadataurlinfoClassFactory());
	}

	native private String get_strType_void(long pNativeObject);
	public String get_strType()
	{
		String jniValue = get_strType_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strType_EVString (long pNativeObject, String value);
	public void set_strType(String strType)
	{
		String strTypeParamValue = strType;
		
		set_strType_EVString(this.nativeObject.pointer, strTypeParamValue);
	}
	
	native private String get_strFormat_void(long pNativeObject);
	public String get_strFormat()
	{
		String jniValue = get_strFormat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strFormat_EVString (long pNativeObject, String value);
	public void set_strFormat(String strFormat)
	{
		String strFormatParamValue = strFormat;
		
		set_strFormat_EVString(this.nativeObject.pointer, strFormatParamValue);
	}
	
	native private String get_strHref_void(long pNativeObject);
	public String get_strHref()
	{
		String jniValue = get_strHref_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strHref_EVString (long pNativeObject, String value);
	public void set_strHref(String strHref)
	{
		String strHrefParamValue = strHref;
		
		set_strHref_EVString(this.nativeObject.pointer, strHrefParamValue);
	}
	
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 结果对象指针
	 */
	public com.earthview.world.spatial.Ogcmetadataurlinfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcmetadataurlinfo __returnValue = new com.earthview.world.spatial.Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCMetaDataURLInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcmetadataurlinfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCMetaDataURLInfo");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcmetadataurlinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCMetaDataURLInfo", null);
	}

	public Ogcmetadataurlinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcmetadataurlinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcmetadataurlinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcmetadataurlinfo obj = null;
 		if(baseObj instanceof Ogcmetadataurlinfo)
		{
			obj = (Ogcmetadataurlinfo)baseObj;
		} else {
			obj = new Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCMetaDataURLInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
