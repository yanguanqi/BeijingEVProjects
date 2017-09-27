package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据源创建工厂容器
 */
public class DataSourceFactoryEnumerator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator", new DataSourceFactoryEnumeratorClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DataSourceFactoryEnumerator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataSourceFactoryEnumerator", null);
	}

	native private static long getSingletonPtr_void();
	/**
	 * 静态函数，获取对象单件
	 */
	public static com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator __returnValue = new com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourceFactoryEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceFactoryEnumerator");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	/**
	 * 静态函数，获取对象单件
	 */
	public static com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator __returnValue = new com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate, "CDataSourceFactoryEnumerator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.DataSourceFactoryEnumerator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataSourceFactoryEnumerator");
		}
		return __returnValue;
	}
	native private boolean existDataSourceFactory_ev_int32(long pNativeObject, int typeOfDataSource);
	/**
	 * 是否存在指定类型的数据源创建工厂
	 * @param typeOfDataSource 指定数据源类型，用INT表示
	 * @return ture，已经存在；false，不存在
	 */
	public boolean existDataSourceFactory(int typeOfDataSource)
	{
		int typeOfDataSourceParamValue = typeOfDataSource;
		boolean returnValue = existDataSourceFactory_ev_int32(this.nativeObject.pointer, typeOfDataSourceParamValue);
		return returnValue;
	}
	native private long getDataSourceFactory_ev_int32(long pNativeObject, int typeOfDataSource);
	/**
	 * 获取指定类型的数据源创建工厂
	 * @param typeOfDataSource 指定数据源类型，用INT表示
	 * @return 数据源工厂对象
	 */
	public com.earthview.world.spatial.geodataset.Idatasourcefactory getDataSourceFactory(int typeOfDataSource)
	{
		int typeOfDataSourceParamValue = typeOfDataSource;
		long returnValue = getDataSourceFactory_ev_int32(this.nativeObject.pointer, typeOfDataSourceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasourcefactory __returnValue = new com.earthview.world.spatial.geodataset.Idatasourcefactory(CreatedWhenConstruct.CWC_NotToCreate, "IDataSourceFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasourcefactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSourceFactory");
		}
		return __returnValue;
	}
	native private boolean addDataSourceFactory_IDataSourceFactory(long pNativeObject, long ref_factory);
	/**
	 * 添加数据源创建工厂
	 * @param factory 数据源工厂对象
	 * @return true，成功添加；false，添加不成功
	 */
	public boolean addDataSourceFactory(com.earthview.world.spatial.geodataset.Idatasourcefactory ref_factory)
	{
		long ref_factoryParamValue = (ref_factory == null ? 0L : ref_factory.nativeObject.pointer);
		boolean returnValue = addDataSourceFactory_IDataSourceFactory(this.nativeObject.pointer, ref_factoryParamValue);
		return returnValue;
	}
	native private boolean removeDataSourceFactory_ev_int32(long pNativeObject, int typeOfDataSource);
	/**
	 * 移除指定类型的数据源创建工厂
	 * @param typeOfDataSource 指定数据源类型，用INT表示
	 * @return true，成功移除；false，移除不成功
	 */
	public boolean removeDataSourceFactory(int typeOfDataSource)
	{
		int typeOfDataSourceParamValue = typeOfDataSource;
		boolean returnValue = removeDataSourceFactory_ev_int32(this.nativeObject.pointer, typeOfDataSourceParamValue);
		return returnValue;
	}
	native private boolean removeDataSourceFactory_IDataSourceFactory(long pNativeObject, long factory);
	/**
	 * 移除数据源创建工厂
	 * @param factory 数据源工厂对象
	 * @return true，成功移除；false，移除不成功
	 */
	public boolean removeDataSourceFactory(com.earthview.world.spatial.geodataset.Idatasourcefactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		boolean returnValue = removeDataSourceFactory_IDataSourceFactory(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private void clearDataSourceFactory_void(long pNativeObject);
	/**
	 * 移除所有数据源创建工厂
	 */
	public void clearDataSourceFactory()
	{
		clearDataSourceFactory_void(this.nativeObject.pointer);
	}
	public DataSourceFactoryEnumerator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataSourceFactoryEnumerator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataSourceFactoryEnumerator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataSourceFactoryEnumerator obj = null;
 		if(baseObj instanceof DataSourceFactoryEnumerator)
		{
			obj = (DataSourceFactoryEnumerator)baseObj;
		} else {
			obj = new DataSourceFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataSourceFactoryEnumerator");
			obj.increaseCast();
		}

		return obj;
	}
}
