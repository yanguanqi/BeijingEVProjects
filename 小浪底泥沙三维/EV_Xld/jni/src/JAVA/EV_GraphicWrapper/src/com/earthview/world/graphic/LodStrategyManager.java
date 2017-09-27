package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodStrategyManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLodStrategyManager", new LodStrategyManagerClassFactory());
	}

	public LodStrategyManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLodStrategyManager", null);
	}

	native private void addStrategy_CLodStrategy(long pNativeObject, long ref_strategy);
	public void addStrategy(com.earthview.world.graphic.LodStrategy ref_strategy)
	{
		long ref_strategyParamValue = (ref_strategy == null ? 0L : ref_strategy.nativeObject.pointer);
		addStrategy_CLodStrategy(this.nativeObject.pointer, ref_strategyParamValue);
	}
	native private long removeStrategy_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.LodStrategy removeStrategy(String name)
	{
		String nameParamValue = name;
		long returnValue = removeStrategy_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategy __returnValue = new com.earthview.world.graphic.LodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategy");
		}
		return __returnValue;
	}
	native private void removeAllStrategies_void(long pNativeObject);
	public void removeAllStrategies()
	{
		removeAllStrategies_void(this.nativeObject.pointer);
	}
	native private long getStrategy_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.LodStrategy getStrategy(String name)
	{
		String nameParamValue = name;
		long returnValue = getStrategy_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategy __returnValue = new com.earthview.world.graphic.LodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategy");
		}
		return __returnValue;
	}
	native private void setDefaultStrategy_CLodStrategy(long pNativeObject, long ref_strategy);
	public void setDefaultStrategy(com.earthview.world.graphic.LodStrategy ref_strategy)
	{
		long ref_strategyParamValue = (ref_strategy == null ? 0L : ref_strategy.nativeObject.pointer);
		setDefaultStrategy_CLodStrategy(this.nativeObject.pointer, ref_strategyParamValue);
	}
	native private void setDefaultStrategy_EVString(long pNativeObject, String name);
	public void setDefaultStrategy(String name)
	{
		String nameParamValue = name;
		setDefaultStrategy_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getDefaultStrategy_void(long pNativeObject);
	public com.earthview.world.graphic.LodStrategy getDefaultStrategy()
	{
		long returnValue = getDefaultStrategy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategy __returnValue = new com.earthview.world.graphic.LodStrategy(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategy");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	public static com.earthview.world.graphic.LodStrategyManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.LodStrategyManager __returnValue = new com.earthview.world.graphic.LodStrategyManager(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategyManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategyManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategyManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.LodStrategyManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LodStrategyManager __returnValue = new com.earthview.world.graphic.LodStrategyManager(CreatedWhenConstruct.CWC_NotToCreate, "CLodStrategyManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LodStrategyManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLodStrategyManager");
		}
		return __returnValue;
	}
	public LodStrategyManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodStrategyManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodStrategyManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodStrategyManager obj = null;
 		if(baseObj instanceof LodStrategyManager)
		{
			obj = (LodStrategyManager)baseObj;
		} else {
			obj = new LodStrategyManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLodStrategyManager");
			obj.increaseCast();
		}

		return obj;
	}
}
