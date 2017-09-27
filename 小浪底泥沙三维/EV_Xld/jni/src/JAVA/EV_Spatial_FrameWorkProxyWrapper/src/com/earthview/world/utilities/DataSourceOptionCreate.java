package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionCreate extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Create", new DataSourceOptionCreateClassFactory());
	}

	native private long db_void(long pNativeObject);
	/**
	 * 设置一个创建数据库数据源的选项，具体请见AppDataSource::createDataSource()。
	 */
	public com.earthview.world.utilities.DataSourceOptionCreateDb db()
	{
		long returnValue = db_void(this.nativeObject.pointer);
		com.earthview.world.utilities.DataSourceOptionCreateDb __returnValue = new com.earthview.world.utilities.DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate, "DataSourceOption_Create_DB");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.utilities.DataSourceOptionCreateDb)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataSourceOption_Create_DB");
		}
		return __returnValue;
	}
	public DataSourceOptionCreate(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceOptionCreate(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceOptionCreate fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceOptionCreate obj = null;
 		if(baseObj instanceof DataSourceOptionCreate)
		{
			obj = (DataSourceOptionCreate)baseObj;
		} else {
			obj = new DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataSourceOption_Create");
			obj.increaseCast();
		}

		return obj;
	}
}
