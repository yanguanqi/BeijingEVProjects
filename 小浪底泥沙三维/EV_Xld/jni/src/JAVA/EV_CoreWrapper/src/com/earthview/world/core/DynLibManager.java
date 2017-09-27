package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 动态加载库管理类用于管理动态加载库，追踪加载动态库的打开
 */
public class DynLibManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDynLibManager", new DynLibManagerClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public DynLibManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDynLibManager", null);
	}

	native private static long getSingleton_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.core.DynLibManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.core.DynLibManager __returnValue = new com.earthview.world.core.DynLibManager(CreatedWhenConstruct.CWC_NotToCreate, "CDynLibManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DynLibManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynLibManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.core.DynLibManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.DynLibManager __returnValue = new com.earthview.world.core.DynLibManager(CreatedWhenConstruct.CWC_NotToCreate, "CDynLibManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DynLibManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynLibManager");
		}
		return __returnValue;
	}
	native private long load_EVString(long pNativeObject, String filename);
	/**
	 * 加载库
	 * @param filename 库的名字
	 * @return 返回指向库的指针
	 */
	public com.earthview.world.core.DynLib load(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = load_EVString(this.nativeObject.pointer, filenameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.DynLib __returnValue = new com.earthview.world.core.DynLib(CreatedWhenConstruct.CWC_NotToCreate, "CDynLib");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DynLib)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynLib");
		}
		return __returnValue;
	}
	native private void unload_CDynLib(long pNativeObject, long lib);
	/**
	 * 卸载库
	 * @param lib 指向库的指针
	 */
	public void unload(com.earthview.world.core.DynLib lib)
	{
		long libParamValue = (lib == null ? 0L : lib.nativeObject.pointer);
		unload_CDynLib(this.nativeObject.pointer, libParamValue);
	}
	public DynLibManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynLibManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DynLibManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynLibManager obj = null;
 		if(baseObj instanceof DynLibManager)
		{
			obj = (DynLibManager)baseObj;
		} else {
			obj = new DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynLibManager");
			obj.increaseCast();
		}

		return obj;
	}
}
