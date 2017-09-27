package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS权威的资源地址描述类
 */
public class Ogcwmsauthorityurl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSAuthorityURL", new OgcwmsauthorityurlClassFactory());
	}

	native private long getAuthorityName_void(long pNativeObject);
	/**
	 * 获取标识
	 * @return 标识
	 */
	public StringPointer getAuthorityName()
	{
		long returnValue = getAuthorityName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getHref_void(long pNativeObject);
	/**
	 * 获取资源地址
	 * @return 资源地址
	 */
	public StringPointer getHref()
	{
		long returnValue = getHref_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getIDValue_void(long pNativeObject);
	/**
	 * 获取ID值
	 * @return ID值
	 */
	public StringPointer getIDValue()
	{
		long returnValue = getIDValue_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setIDValue_EVString(long pNativeObject, String value);
	/**
	 * 设置ID值
	 * @param value id
	 */
	public void setIDValue(String value)
	{
		String valueParamValue = value;
		setIDValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setAuthorityName_EVString(long pNativeObject, String value);
	/**
	 * 设置标识
	 * @param value 标识
	 */
	public void setAuthorityName(String value)
	{
		String valueParamValue = value;
		setAuthorityName_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setHref_EVString(long pNativeObject, String value);
	/**
	 * 设置资源地址
	 * @param value 资源地址
	 */
	public void setHref(String value)
	{
		String valueParamValue = value;
		setHref_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 新建对象指针
	 */
	public com.earthview.world.spatial.Ogcwmsauthorityurl ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsauthorityurl __returnValue = new com.earthview.world.spatial.Ogcwmsauthorityurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSAuthorityURL");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsauthorityurl)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSAuthorityURL");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwmsauthorityurl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMSAuthorityURL", null);
	}

	public Ogcwmsauthorityurl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmsauthorityurl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmsauthorityurl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmsauthorityurl obj = null;
 		if(baseObj instanceof Ogcwmsauthorityurl)
		{
			obj = (Ogcwmsauthorityurl)baseObj;
		} else {
			obj = new Ogcwmsauthorityurl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMSAuthorityURL");
			obj.increaseCast();
		}

		return obj;
	}
}
