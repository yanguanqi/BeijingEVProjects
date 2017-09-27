package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerFactoryEnum extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CModelSerializerFactoryEnum", new ModelSerializerFactoryEnumClassFactory());
	}

	public ModelSerializerFactoryEnum() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelSerializerFactoryEnum", null);
	}

	native private static long getSingleton_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.ModelSerializerFactoryEnum getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ModelSerializerFactoryEnum __returnValue = new com.earthview.world.graphic.ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializerFactoryEnum");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializerFactoryEnum)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializerFactoryEnum");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
	 * @param  
	 * @return 返回单体类的引用
	 */
	public static com.earthview.world.graphic.ModelSerializerFactoryEnum getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializerFactoryEnum __returnValue = new com.earthview.world.graphic.ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializerFactoryEnum");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializerFactoryEnum)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializerFactoryEnum");
		}
		return __returnValue;
	}
	native private boolean registerFactory_CModelSerializerFactory(long pNativeObject, long ref_pFactory);
	public boolean registerFactory(com.earthview.world.graphic.ModelSerializerFactory ref_pFactory)
	{
		long ref_pFactoryParamValue = (ref_pFactory == null ? 0L : ref_pFactory.nativeObject.pointer);
		boolean returnValue = registerFactory_CModelSerializerFactory(this.nativeObject.pointer, ref_pFactoryParamValue);
		return returnValue;
	}
	native private long getFactory_EVString(long pNativeObject, String fileExt);
	public com.earthview.world.graphic.ModelSerializerFactory getFactory(String fileExt)
	{
		String fileExtParamValue = fileExt;
		long returnValue = getFactory_EVString(this.nativeObject.pointer, fileExtParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializerFactory __returnValue = new com.earthview.world.graphic.ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializerFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializerFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializerFactory");
		}
		return __returnValue;
	}
	public ModelSerializerFactoryEnum(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelSerializerFactoryEnum(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelSerializerFactoryEnum fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelSerializerFactoryEnum obj = null;
 		if(baseObj instanceof ModelSerializerFactoryEnum)
		{
			obj = (ModelSerializerFactoryEnum)baseObj;
		} else {
			obj = new ModelSerializerFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelSerializerFactoryEnum");
			obj.increaseCast();
		}

		return obj;
	}
}
