package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.utilities.*;
import com.earthview.world.core.*;

public class DataSourceURL extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL", new DataSourceURLClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DataSourceURL() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceURL", null);
	}

	/**
	 * 构造函数
	 * @param url 数据源描述字符串
	 */
	public DataSourceURL(String url) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		Create("CDataSourceURL", list);
	}

	native private void setURL_EVString(long pNativeObject, String url);
	/**
	 * 设置数据源描述字符串
	 * @param url 数据源描述字符串
	 */
	public void setURL(String url)
	{
		String urlParamValue = url;
		setURL_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private String getURL_void(long pNativeObject);
	/**
	 * 获取数据源描述字符串
	 * @param  
	 * @return 数据源描述字符串
	 */
	public String getURL()
	{
		String returnValue = getURL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long medium_void(long pNativeObject);
	/**
	 * 获取数据源介质
	 * @param  
	 * @return 数据源介质
	 */
	public StringPointer medium()
	{
		long returnValue = medium_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long connectParameter_void(long pNativeObject);
	/**
	 * 获取数据源连接参数
	 * @param  
	 * @return 数据源连接参数
	 */
	public StringPointer connectParameter()
	{
		long returnValue = connectParameter_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getAliasName_void(long pNativeObject);
	/**
	 * 获取数据源别名
	 * @param  
	 * @return 数据源别名
	 */
	public StringPointer getAliasName()
	{
		long returnValue = getAliasName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setAliasName_EVString(long pNativeObject, String strAliasName);
	/**
	 * 设置数据源别名
	 * @param  
	 * @return 数据源别名
	 */
	public void setAliasName(String strAliasName)
	{
		String strAliasNameParamValue = strAliasName;
		setAliasName_EVString(this.nativeObject.pointer, strAliasNameParamValue);
	}
	public DataSourceURL(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceURL(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceURL fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceURL obj = null;
 		if(baseObj instanceof DataSourceURL)
		{
			obj = (DataSourceURL)baseObj;
		} else {
			obj = new DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceURL");
			obj.increaseCast();
		}

		return obj;
	}
}
