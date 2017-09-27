package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换字段名检查器(平台内部保留字段，sql关键字等)判断传入名称是否与关键字冲突
 */
public class Sqlkeychecker extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CSQLKeyChecker", new SqlkeycheckerClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取检查器单例
	 */
	public static com.earthview.world.spatial.convertor.Sqlkeychecker getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.convertor.Sqlkeychecker __returnValue = new com.earthview.world.spatial.convertor.Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate, "CSQLKeyChecker");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.convertor.Sqlkeychecker)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSQLKeyChecker");
		}
		return __returnValue;
	}
	native private int reloadKeyValue_void(long pNativeObject);
	/**
	 * 重新加载关键字
	 */
	public int reloadKeyValue()
	{
		int returnValue = reloadKeyValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isNameConflict_EVString(long pNativeObject, String name);
	/**
	 * 检查名称是否与关键字冲突
	 * @return 冲突返回true
	 */
	public boolean isNameConflict(String name)
	{
		String nameParamValue = name;
		boolean returnValue = isNameConflict_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	public Sqlkeychecker(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sqlkeychecker(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Sqlkeychecker fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sqlkeychecker obj = null;
 		if(baseObj instanceof Sqlkeychecker)
		{
			obj = (Sqlkeychecker)baseObj;
		} else {
			obj = new Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSQLKeyChecker");
			obj.increaseCast();
		}

		return obj;
	}
}
