package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView网络数据集迭代器类
 */
public class Evwebdatasetiterator extends com.earthview.world.spatial.WebDatasetIterator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWebDatasetIterator", new EvwebdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWebDatasetIteratorProxy", new EvwebdatasetiteratorClassFactory());
	}

	native private long next_void(long pNativeObject);
	/**
	 * 下一个数据集对象，需要外部释放；如果超出范围，这返回NULL
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idataset next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}

	public Evwebdatasetiterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwebdatasetiterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取迭代器中数据集的个数
	 * @param  
	 * @return 数据集的个数
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取迭代器中数据集的类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		return super.getDatasetType_NoVirtual();
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
	
	public static Evwebdatasetiterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwebdatasetiterator obj = null;
 		if(baseObj instanceof Evwebdatasetiterator)
		{
			obj = (Evwebdatasetiterator)baseObj;
		} else {
			obj = new Evwebdatasetiterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWebDatasetIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
