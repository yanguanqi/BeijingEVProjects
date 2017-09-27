package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Wfsfeatureiterator extends com.earthview.world.spatial.geodataset.Ifeatureiterator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSFeatureIterator", new WfsfeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSFeatureIteratorProxy", new WfsfeatureiteratorClassFactory());
	}

	native private long next_void(long pNativeObject);
	/**
	 * 获取下一条记录
	 * @param  
	 * @return 返回要素
	 */
	public com.earthview.world.spatial.geodataset.Ifeature next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long next_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature next_NoVirtual()
	{
		long returnValue = next_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	public Wfsfeatureiterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Wfsfeatureiterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取查询结果集中的要素字段
	 * @return 字段集合
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFields()
	{
		return super.getFields_NoVirtual();
	}
	/**
	 * 获取指定索引的字段
	 * @param index 指定索引
	 * @return ture，成功；false，失败
	 */
	public com.earthview.world.spatial.geodataset.Ifield getField(long index)
	{
		return super.getField_NoVirtual(index);
	}
	/**
	 * 能否找到指定字段名称
	 * @param fieldName 字段名称
	 * @return 如果找到，返回索引；如果找不到，返回-1
	 */
	public int findField(String fieldName)
	{
		return super.findField_NoVirtual(fieldName);
	}
	
	native protected void register_next_void(long pNativeObject, String method);
	native protected void register_getFields_void(long pNativeObject, String method);
	native protected void register_getField_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_next_void(this.nativeObject.pointer, "next_void_callback");
			this.register_getFields_void(this.nativeObject.pointer, "getFields_void_callback");
			this.register_getField_ev_uint32(this.nativeObject.pointer, "getField_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
		}
	}
	
	public static Wfsfeatureiterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Wfsfeatureiterator obj = null;
 		if(baseObj instanceof Wfsfeatureiterator)
		{
			obj = (Wfsfeatureiterator)baseObj;
		} else {
			obj = new Wfsfeatureiterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWFSFeatureIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
