package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerFactoryEnumerator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator", new LayerFactoryEnumeratorClassFactory());
	}

	public LayerFactoryEnumerator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLayerFactoryEnumerator", null);
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回图层工厂迭代器单体(指针类型)
	 * @param  
	 */
	public static com.earthview.world.spatial.atlas.LayerFactoryEnumerator getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.LayerFactoryEnumerator __returnValue = new com.earthview.world.spatial.atlas.LayerFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CLayerFactoryEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.LayerFactoryEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerFactoryEnumerator");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	/**
	 * 返回图层工厂迭代器单体(对象引用)
	 * @param  
	 */
	public static com.earthview.world.spatial.atlas.LayerFactoryEnumerator getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial.atlas.LayerFactoryEnumerator __returnValue = new com.earthview.world.spatial.atlas.LayerFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CLayerFactoryEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.LayerFactoryEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayerFactoryEnumerator");
		}
		return __returnValue;
	}
	native private static void releaseSingletonPtr_void();
	/**
	 * 释放图层工厂迭代器单体
	 * @param  
	 */
	public static void releaseSingletonPtr()
	{
		releaseSingletonPtr_void();
	}
	native private boolean existLayerFactory_ev_int32(long pNativeObject, int layerType);
	/**
	 * 检测指定类型的工厂是否存在
	 * @param layerType 工厂类型
	 * @return 如果存在则返回true,反之则否
	 */
	public boolean existLayerFactory(int layerType)
	{
		int layerTypeParamValue = layerType;
		boolean returnValue = existLayerFactory_ev_int32(this.nativeObject.pointer, layerTypeParamValue);
		return returnValue;
	}
	native private long getLayerFactory_ev_int32(long pNativeObject, int layerType);
	/**
	 * 获取指定工厂类型的指针
	 * @param layerType 工厂类型
	 * @return 工厂指针
	 */
	public com.earthview.world.spatial.atlas.Ilayerfactory getLayerFactory(int layerType)
	{
		int layerTypeParamValue = layerType;
		long returnValue = getLayerFactory_ev_int32(this.nativeObject.pointer, layerTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayerfactory __returnValue = new com.earthview.world.spatial.atlas.Ilayerfactory(CreatedWhenConstruct.CWC_NotToCreate, "ILayerFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayerfactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayerFactory");
		}
		return __returnValue;
	}
	native private boolean addLayerFactory_ILayerFactory(long pNativeObject, long ref_factory);
	/**
	 * 添加一个图层工厂
	 * @param facotry 图层工厂
	 * @return 如果成功就返回true,反之则否
	 */
	public boolean addLayerFactory(com.earthview.world.spatial.atlas.Ilayerfactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		boolean returnValue = addLayerFactory_ILayerFactory(this.nativeObject.pointer, ref_factoryParamValue);
		return returnValue;
	}
	native private boolean removeLayerFactory_ev_int32(long pNativeObject, int layerType);
	/**
	 * 移除指定类型的工厂
	 * @param layerType 待删除的工厂类型
	 * @return 如果成功则返回true,反之则否
	 */
	public boolean removeLayerFactory(int layerType)
	{
		int layerTypeParamValue = layerType;
		boolean returnValue = removeLayerFactory_ev_int32(this.nativeObject.pointer, layerTypeParamValue);
		return returnValue;
	}
	native private boolean removeLayerFactory_ILayerFactory(long pNativeObject, long factory);
	/**
	 * 移除指定工厂
	 * @param facotry 待移除的工厂
	 * @return 如果成功就返回true,反之则否
	 */
	public boolean removeLayerFactory(com.earthview.world.spatial.atlas.Ilayerfactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		boolean returnValue = removeLayerFactory_ILayerFactory(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public LayerFactoryEnumerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerFactoryEnumerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerFactoryEnumerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerFactoryEnumerator obj = null;
 		if(baseObj instanceof LayerFactoryEnumerator)
		{
			obj = (LayerFactoryEnumerator)baseObj;
		} else {
			obj = new LayerFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerFactoryEnumerator");
			obj.increaseCast();
		}

		return obj;
	}
}
