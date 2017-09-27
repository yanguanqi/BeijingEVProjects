package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据库驱动工厂的基类通过实现createobject返回所需要提供的数据库对象
 */
public class SqlDriverCreatorBase extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlDriverCreatorBase", new SqlDriverCreatorBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlDriverCreatorBaseProxy", new SqlDriverCreatorBaseClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SqlDriverCreatorBase() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSqlDriverCreatorBaseProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.database.SqlDriverCreatorBase".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createObject_void_callback()
	{
		com.earthview.world.core.database.SqlDriver returnValue = createObject();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createObject_void(long pNativeObject);
	/**
	 * 创建driver
	 * @return 数据库driver句柄
	 */
	public com.earthview.world.core.database.SqlDriver createObject()
	{
		long returnValue = createObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.database.SqlDriver __returnValue = new com.earthview.world.core.database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDriver");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDriver)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDriver");
		}
		return __returnValue;
	}
	native private long createObject_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.database.SqlDriver createObject_NoVirtual()
	{
		long returnValue = createObject_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.database.SqlDriver __returnValue = new com.earthview.world.core.database.SqlDriver(CreatedWhenConstruct.CWC_NotToCreate, "CSqlDriver");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDriver)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSqlDriver");
		}
		return __returnValue;
	}

	public SqlDriverCreatorBase(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlDriverCreatorBase(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createObject_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createObject_void(this.nativeObject.pointer, "createObject_void_callback");
		}
	}
	
	public static SqlDriverCreatorBase fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlDriverCreatorBase obj = null;
 		if(baseObj instanceof SqlDriverCreatorBase)
		{
			obj = (SqlDriverCreatorBase)baseObj;
		} else {
			obj = new SqlDriverCreatorBase(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlDriverCreatorBase");
			obj.increaseCast();
		}

		return obj;
	}
}
