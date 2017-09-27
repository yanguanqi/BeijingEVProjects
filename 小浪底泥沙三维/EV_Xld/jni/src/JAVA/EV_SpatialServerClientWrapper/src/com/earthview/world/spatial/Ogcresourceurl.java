package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC资源地址描述类
 */
public class Ogcresourceurl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCResourceURL", new OgcresourceurlClassFactory());
	}

	native private void setFormat_EVString(long pNativeObject, String value);
	/**
	 * 设置格式
	 * @param value 格式
	 */
	public void setFormat(String value)
	{
		String valueParamValue = value;
		setFormat_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getFormat_void(long pNativeObject);
	/**
	 * 获取格式
	 * @return 格式
	 */
	public StringPointer getFormat()
	{
		long returnValue = getFormat_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setResourceType_EVString(long pNativeObject, String value);
	/**
	 * 设置资源类型
	 * @param value 资源类型
	 */
	public void setResourceType(String value)
	{
		String valueParamValue = value;
		setResourceType_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getResourceType_void(long pNativeObject);
	/**
	 * 获取资源类型
	 * @return 资源类型
	 */
	public StringPointer getResourceType()
	{
		long returnValue = getResourceType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTemplate_EVString(long pNativeObject, String value);
	/**
	 * 设置模板
	 * @param value 模板描述
	 */
	public void setTemplate(String value)
	{
		String valueParamValue = value;
		setTemplate_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getTemplate_void(long pNativeObject);
	/**
	 * 获取模板描述
	 * @return 模板描述
	 */
	public StringPointer getTemplate()
	{
		long returnValue = getTemplate_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆结果对象指针
	 */
	public com.earthview.world.spatial.Ogcresourceurl ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcresourceurl __returnValue = new com.earthview.world.spatial.Ogcresourceurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCResourceURL");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcresourceurl)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCResourceURL");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcresourceurl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCResourceURL", null);
	}

	public Ogcresourceurl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcresourceurl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcresourceurl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcresourceurl obj = null;
 		if(baseObj instanceof Ogcresourceurl)
		{
			obj = (Ogcresourceurl)baseObj;
		} else {
			obj = new Ogcresourceurl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCResourceURL");
			obj.increaseCast();
		}

		return obj;
	}
}
