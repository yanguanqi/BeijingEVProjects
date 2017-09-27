package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

/**
 * 多级LOD模型要素Vector
 */
public class ModelFeatureVector extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeatureVector", new ModelFeatureVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ModelFeatureVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelFeatureVector", null);
	}

	native private void push_back_ModelFeature(long pNativeObject, long t);
	/**
	 * 为当前容器添加一个ModelFeature
	 * @param t ModelFeature
	 */
	public void push_back(com.earthview.world.spatial.download.ModelFeature t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_ModelFeature(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除最后一个数据
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回容器中第一个元素的引用
	 * @param  
	 * @return ModelFeature的引用
	 */
	public com.earthview.world.spatial.download.ModelFeature front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial.download.ModelFeature __returnValue = new com.earthview.world.spatial.download.ModelFeature(CreatedWhenConstruct.CWC_NotToCreate, "ModelFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ModelFeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ModelFeature");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 传回容器中最后一个ModelFeature,不检查这个ModelFeature是否存在
	 * @param  
	 * @return ModelFeature的引用
	 */
	public com.earthview.world.spatial.download.ModelFeature back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial.download.ModelFeature __returnValue = new com.earthview.world.spatial.download.ModelFeature(CreatedWhenConstruct.CWC_NotToCreate, "ModelFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ModelFeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ModelFeature");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_ModelFeature(long pNativeObject, long pos, long t);
	/**
	 * 在pos位置插入一个ModelFeature
	 * @param pos 位置
	 * @param t ModelFeature
	 */
	public void insert(long pos, com.earthview.world.spatial.download.ModelFeature t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_ModelFeature(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 删除pos位置的数据
	 * @param pos 位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/// <summary>
	/// 判断容器是否为空
	/// </summary>
	/// <param name=""></param>
	/// <returns>
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个ModelFeature的引用
	 */
	public com.earthview.world.spatial.download.ModelFeature OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial.download.ModelFeature __returnValue = new com.earthview.world.spatial.download.ModelFeature(CreatedWhenConstruct.CWC_NotToCreate, "ModelFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ModelFeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ModelFeature");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个ModelFeature的引用
	 */
	public com.earthview.world.spatial.download.ModelFeature at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial.download.ModelFeature __returnValue = new com.earthview.world.spatial.download.ModelFeature(CreatedWhenConstruct.CWC_NotToCreate, "ModelFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.download.ModelFeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ModelFeature");
		}
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器中数据个数
	 * @param  
	 * @return 数据个数
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 重新指定容器的容量
	 * @param newSize 容量大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	/**
	 * 设置容器预留容量
	 * @param count 容量大小
	 */
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 移除容器中所有的数据
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ModelFeatureVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelFeatureVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelFeatureVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelFeatureVector obj = null;
 		if(baseObj instanceof ModelFeatureVector)
		{
			obj = (ModelFeatureVector)baseObj;
		} else {
			obj = new ModelFeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelFeatureVector");
			obj.increaseCast();
		}

		return obj;
	}
}
