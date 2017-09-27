package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.utilities.*;
import com.earthview.world.core.*;

public class DataSourceURLTool extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool", new DataSourceURLToolClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DataSourceURLTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceURLTool", null);
	}

	native private static long createFileDataSourceUrl_CDataSourceURLStruct(long urlStruct);
	/**
	 * 通过参数构造url
	 * @param urlStruct URL结构体
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL createFileDataSourceUrl(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct urlStruct)
	{
		long urlStructParamValue = urlStruct.nativeObject.pointer;
		long returnValue = createFileDataSourceUrl_CDataSourceURLStruct(urlStructParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDataSourceURL");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceURL");
		}
		return __returnValue;
	}
	native private static long parseDataSourceUrl_EVString(String url);
	/**
	 * 解析数据源描述符
	 * @param url 数据源描述字符串
	 * @return 数据源描述对象
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct parseDataSourceUrl(String url)
	{
		String urlParamValue = url;
		long returnValue = parseDataSourceUrl_EVString(urlParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDataSourceURLStruct");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceURLStruct");
		}
		return __returnValue;
	}
	native private static long parseDataSourceUrl_CDataSourceURL(long url);
	/**
	 * 解析数据源描述符
	 * @param url 数据源描述对象
	 * @return 数据源描述对象
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct parseDataSourceUrl(com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURL url)
	{
		long urlParamValue = url.nativeObject.pointer;
		long returnValue = parseDataSourceUrl_CDataSourceURL(urlParamValue);
		com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDataSourceURLStruct");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStruct)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceURLStruct");
		}
		return __returnValue;
	}
	public DataSourceURLTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceURLTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceURLTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceURLTool obj = null;
 		if(baseObj instanceof DataSourceURLTool)
		{
			obj = (DataSourceURLTool)baseObj;
		} else {
			obj = new DataSourceURLTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceURLTool");
			obj.increaseCast();
		}

		return obj;
	}
}
