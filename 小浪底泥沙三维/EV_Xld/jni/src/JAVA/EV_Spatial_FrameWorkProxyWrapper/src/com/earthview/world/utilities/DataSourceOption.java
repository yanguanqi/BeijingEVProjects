package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// class DataSourceOption
/// 数据源选项类 - 通过此类生成打开或创建数据源时所需的选项，通过将此类对象传给
/// AppDataSource::openDataSource或createDataSource来打开或创建一个数据源。
///
/// (1) 使用DataSourceOption().open()来生成一个数据源打开选项，并且在open()之后
/// 根据要打开的数据源的类型选择对应的函数，例如，生成打开sqlite的选项如下：
///		DataSourceOption().open().db().sqlite("c:\\test.end")
///
/// (2) 使用DataSourceOption().create()来生成一个数据源创建选项，方式与打开相同。
public class DataSourceOption extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption", new DataSourceOptionClassFactory());
	}

	/**
	 * 构造函数。
	 */
	public DataSourceOption() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DataSourceOption", null);
	}

	native private long open_void(long pNativeObject);
	/**
	 * 设置一个打开数据源的选项，具体请见AppDataSource::openDataSource()。
	 */
	public com.earthview.world.utilities.DataSourceOptionOpen open()
	{
		long returnValue = open_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DataSourceOptionOpen __returnValue = new com.earthview.world.utilities.DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption_Open");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOptionOpen)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption_Open");
		}
		return __returnValue;
	}
	native private long create_void(long pNativeObject);
	/**
	 * 设置一个创建数据源的选项，具体请见AppDataSource::createDataSource()。
	 */
	public com.earthview.world.utilities.DataSourceOptionCreate create()
	{
		long returnValue = create_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DataSourceOptionCreate __returnValue = new com.earthview.world.utilities.DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption_Create");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOptionCreate)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption_Create");
		}
		return __returnValue;
	}
	public DataSourceOption(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceOption(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceOption fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceOption obj = null;
 		if(baseObj instanceof DataSourceOption)
		{
			obj = (DataSourceOption)baseObj;
		} else {
			obj = new DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceOption");
			obj.increaseCast();
		}

		return obj;
	}
}
