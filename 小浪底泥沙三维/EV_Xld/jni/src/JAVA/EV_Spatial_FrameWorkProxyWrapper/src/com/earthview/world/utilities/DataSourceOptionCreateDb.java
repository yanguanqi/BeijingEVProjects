package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionCreateDb extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Create_DB", new DataSourceOptionCreateDbClassFactory());
	}

	native private long sqlite_EVString(long pNativeObject, String filepath);
	/**
	 * 设置一个创建sqlite数据源的选项，具体请见AppDataSource::openDataSource()。
	 * @param filepath sqlite数据库文件路径。
	 */
	public com.earthview.world.utilities.DataSourceOption sqlite(String filepath)
	{
		String filepathParamValue = filepath;
		long returnValue = sqlite_EVString(this.nativeObject.pointer, filepathParamValue);
		com.earthview.world.utilities.DataSourceOption __returnValue = new com.earthview.world.utilities.DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOption)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption");
		}
		return __returnValue;
	}
	public DataSourceOptionCreateDb(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceOptionCreateDb(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceOptionCreateDb fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceOptionCreateDb obj = null;
 		if(baseObj instanceof DataSourceOptionCreateDb)
		{
			obj = (DataSourceOptionCreateDb)baseObj;
		} else {
			obj = new DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceOption_Create_DB");
			obj.increaseCast();
		}

		return obj;
	}
}
