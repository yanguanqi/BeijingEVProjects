package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集迭代器
 */
public class DatasetIterator extends com.earthview.world.spatial.geodataset.Idatasetiterator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetIterator", new DatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDatasetIteratorProxy", new DatasetIteratorClassFactory());
	}

	native private long next_void(long pNativeObject);
	/**
	 * 下一个数据集对象，如果超出范围，这返回NULL
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idataset next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private long next_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idataset next_NoVirtual()
	{
		long returnValue = next_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	native private long getSize_void(long pNativeObject);
	/**
	 * 获取迭代器中数据集的个数
	 * @param  
	 * @return 数据集的个数
	 */
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void_NoVirtual(long pNativeObject);
	protected long getSize_NoVirtual()
	{
		long returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取迭代器中数据集的类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	public DatasetIterator(com.earthview.world.spatial.geodataset.Idatasource ref_ds, com.earthview.world.spatial.geodataset.EVDatasetType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_dsPtr = new BasePointer(ref_ds);
		list.add("ref_ds", ref_dsPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("JCDatasetIteratorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.DatasetIterator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DatasetIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_next_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_next_void(this.nativeObject.pointer, "next_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
		}
	}
	
	public static DatasetIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetIterator obj = null;
 		if(baseObj instanceof DatasetIterator)
		{
			obj = (DatasetIterator)baseObj;
		} else {
			obj = new DatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasetIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
