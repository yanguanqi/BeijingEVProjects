package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集迭代器类
 */
public class WebDatasetIterator extends com.earthview.world.spatial.geodataset.Idatasetiterator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebDatasetIterator", new WebDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebDatasetIteratorProxy", new WebDatasetIteratorClassFactory());
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

	public WebDatasetIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebDatasetIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 下一个数据集对象，如果超出范围，这返回NULL
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idataset next()
	{
		return super.next_NoVirtual();
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
	
	public static WebDatasetIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebDatasetIterator obj = null;
 		if(baseObj instanceof WebDatasetIterator)
		{
			obj = (WebDatasetIterator)baseObj;
		} else {
			obj = new WebDatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebDatasetIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
