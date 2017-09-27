package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 提供一个从特定结果集上获取数据的接口
 */
public class SqlResult extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::CSqlResult", new SqlResultClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Database::JCSqlResultProxy", new SqlResultClassFactory());
	}

	protected  long handle_void_callback()
	{
		com.earthview.world.core.Variant returnValue = handle();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long handle_void(long pNativeObject);
	/**
	 * 获取一个低级别的数据库句柄并绑定到cvariant对象上
	 * @param  
	 * @return 绑定有数据库句柄的cvariant对象
	 */
	public com.earthview.world.core.Variant handle()
	{
		long returnValue = handle_void(this.nativeObject.pointer);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long handle_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.Variant handle_NoVirtual()
	{
		long returnValue = handle_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	public SqlResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handle_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handle_void(this.nativeObject.pointer, "handle_void_callback");
		}
	}
	
	public static SqlResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlResult obj = null;
 		if(baseObj instanceof SqlResult)
		{
			obj = (SqlResult)baseObj;
		} else {
			obj = new SqlResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlResult");
			obj.increaseCast();
		}

		return obj;
	}
}
