package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据源打开链接时，用来保存数据源的设置
 */
public class DataSourceUrl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CDataSourceUrl", new DataSourceUrlClassFactory());
	}

	/**
	 * 构造函数
	 */
	public DataSourceUrl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceUrl", null);
	}

	/**
	 * 构造函数
	 * @param url 数据源配置字符串
	 */
	public DataSourceUrl(String url) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		Create("CDataSourceUrl", list);
	}

	native private void setURL_EVString(long pNativeObject, String url);
	/**
	 * 设置链接字符串
	 * @param url 链接字符串
	 */
	public void setURL(String url)
	{
		String urlParamValue = url;
		setURL_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private String getURL_void(long pNativeObject);
	/**
	 * 获取链接字符串
	 * @return 返回链接字符串
	 */
	public String getURL()
	{
		String returnValue = getURL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long medium_void(long pNativeObject);
	/**
	 * 获取数据库的类型
	 * @return 返回数据库的类型字符串
	 */
	public StringPointer medium()
	{
		long returnValue = medium_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long connectParameter_void(long pNativeObject);
	/**
	 * 获取链接参数
	 * @return 返回链接参数
	 */
	public StringPointer connectParameter()
	{
		long returnValue = connectParameter_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public DataSourceUrl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceUrl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceUrl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceUrl obj = null;
 		if(baseObj instanceof DataSourceUrl)
		{
			obj = (DataSourceUrl)baseObj;
		} else {
			obj = new DataSourceUrl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceUrl");
			obj.increaseCast();
		}

		return obj;
	}
}
