package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS资源描述类
 */
public class Ogcwmsattribution extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSAttribution", new OgcwmsattributionClassFactory());
	}

	native private long getTitle_void(long pNativeObject);
	/**
	 * 获取标题
	 * @return 标题
	 */
	public StringPointer getTitle()
	{
		long returnValue = getTitle_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setTitle_EVString(long pNativeObject, String value);
	/**
	 * 设置标题
	 * @param value 标题
	 */
	public void setTitle(String value)
	{
		String valueParamValue = value;
		setTitle_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getOnlineHref_void(long pNativeObject);
	/**
	 * 获取网络地址
	 * @return 网址
	 */
	public StringPointer getOnlineHref()
	{
		long returnValue = getOnlineHref_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setOnlineHref_EVString(long pNativeObject, String value);
	/**
	 * 设置网络地址
	 * @param value 网址
	 */
	public void setOnlineHref(String value)
	{
		String valueParamValue = value;
		setOnlineHref_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getLogoWidth_void(long pNativeObject);
	/**
	 * 获取标识的宽度
	 * @return 宽度
	 */
	public long getLogoWidth()
	{
		long returnValue = getLogoWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLogoWidth_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置标识宽度
	 * @param value 宽读
	 */
	public void setLogoWidth(long value)
	{
		long valueParamValue = value;
		setLogoWidth_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getLogoHeight_void(long pNativeObject);
	/**
	 * 获取标识高度
	 * @param value 高度
	 */
	public long getLogoHeight()
	{
		long returnValue = getLogoHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLogoHeight_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置标识高度
	 * @param value 高度
	 */
	public void setLogoHeight(long value)
	{
		long valueParamValue = value;
		setLogoHeight_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long getLogoFormat_void(long pNativeObject);
	/**
	 * 获取标识的格式
	 * @return 标识格式
	 */
	public StringPointer getLogoFormat()
	{
		long returnValue = getLogoFormat_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setLogoFormat_EVString(long pNativeObject, String value);
	/**
	 * 获取标识的格式
	 * @param value 标识格式
	 */
	public void setLogoFormat(String value)
	{
		String valueParamValue = value;
		setLogoFormat_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getLogoHref_void(long pNativeObject);
	/**
	 * 获取标识的资源地址
	 * @return 资源地址
	 */
	public StringPointer getLogoHref()
	{
		long returnValue = getLogoHref_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setLogoHref_EVString(long pNativeObject, String value);
	/**
	 * 设置标识的资源地址
	 * @param value 资源地址
	 */
	public void setLogoHref(String value)
	{
		String valueParamValue = value;
		setLogoHref_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.Ogcwmsattribution ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsattribution __returnValue = new com.earthview.world.spatial.Ogcwmsattribution(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSAttribution");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsattribution)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSAttribution");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwmsattribution() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMSAttribution", null);
	}

	public Ogcwmsattribution(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmsattribution(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmsattribution fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmsattribution obj = null;
 		if(baseObj instanceof Ogcwmsattribution)
		{
			obj = (Ogcwmsattribution)baseObj;
		} else {
			obj = new Ogcwmsattribution(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMSAttribution");
			obj.increaseCast();
		}

		return obj;
	}
}
