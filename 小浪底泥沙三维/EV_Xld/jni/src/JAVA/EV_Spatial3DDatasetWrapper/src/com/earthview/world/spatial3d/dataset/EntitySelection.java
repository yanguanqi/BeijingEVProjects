package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntitySelection extends com.earthview.world.spatial.geodataset.Ifeatureselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntitySelection", new EntitySelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntitySelectionProxy", new EntitySelectionClassFactory());
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取选择的entity数量
	 * @param  
	 * @return 选择的entity数量
	 */
	public long getCount()
	{
		long returnValue = getCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCount_void_NoVirtual(long pNativeObject);
	protected long getCount_NoVirtual()
	{
		long returnValue = getCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取给定序号的entity的id
	 * @param index 序号
	 * @return entityid
	 */
	public long getID(long index)
	{
		long indexParamValue = index;
		long returnValue = getID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getID_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected long getID_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getID_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getIDs_ev_uint32(long pNativeObject, long ids);
	/**
	 * 获取所有选择的entity的id
	 * @param ids id集合
	 * @return 选择的entity数量
	 */
	public long getIDs(UIntegerPointer ids)
	{
		long idsParamValue = (ids == null ? 0L : ids.nativeObject.pointer);
		long returnValue = getIDs_ev_uint32(this.nativeObject.pointer, idsParamValue);
		return returnValue;
	}
	native private long getIDs_ev_uint32_NoVirtual(long pNativeObject, long ids);
	protected long getIDs_NoVirtual(UIntegerPointer ids)
	{
		long idsParamValue = (ids == null ? 0L : ids.nativeObject.pointer);
		long returnValue = getIDs_ev_uint32_NoVirtual(this.nativeObject.pointer, idsParamValue);
		return returnValue;
	}

	native private int findID_ev_uint32(long pNativeObject, long id);
	/**
	 * 查找给定entityid是否选中
	 * @param id id
	 * @return 选中的entity序号
	 */
	public int findID(long id)
	{
		long idParamValue = id;
		int returnValue = findID_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private int findID_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected int findID_NoVirtual(long id)
	{
		long idParamValue = id;
		int returnValue = findID_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 进行查询
	 * @param filter 查询Filter
	 * @return 查询结果迭代器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureiterator query(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}
	native private long query_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureiterator query_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}

	native private long select_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 进行选择
	 * @param filter 查询Filter
	 * @return 查询到的要素选择器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection select(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}
	native private long select_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected com.earthview.world.spatial.geodataset.Ifeatureselection select_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}

	native private boolean addID_ev_uint32(long pNativeObject, long id);
	/**
	 * 添加一个选择的entityid
	 * @param id id
	 * @return 成功返回true,失败返回false
	 */
	public boolean addID(long id)
	{
		long idParamValue = id;
		boolean returnValue = addID_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean addID_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean addID_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = addID_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}

	native private long addIDs_ev_uint32_ev_uint32(long pNativeObject, long id, long size);
	/**
	 * 添加多个选择的entityid
	 * @param id id集合
	 * @param size id数量
	 * @return 添加成功的数量
	 */
	public long addIDs(UIntegerPointer id, long size)
	{
		long idParamValue = (id == null ? 0L : id.nativeObject.pointer);
		long sizeParamValue = size;
		long returnValue = addIDs_ev_uint32_ev_uint32(this.nativeObject.pointer, idParamValue, sizeParamValue);
		return returnValue;
	}
	native private long addIDs_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long id, long size);
	protected long addIDs_NoVirtual(UIntegerPointer id, long size)
	{
		long idParamValue = (id == null ? 0L : id.nativeObject.pointer);
		long sizeParamValue = size;
		long returnValue = addIDs_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue, sizeParamValue);
		return returnValue;
	}

	native private long remove_ev_uint32_ev_uint32(long pNativeObject, long index, long size);
	/**
	 * 从给定序号开始移除选择的entity
	 * @param index 移除起始序号
	 * @param size 移除数量
	 * @return 成功移除的数量
	 */
	public long remove(long index, long size)
	{
		long indexParamValue = index;
		long sizeParamValue = size;
		long returnValue = remove_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, sizeParamValue);
		return returnValue;
	}
	native private long remove_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long index, long size);
	protected long remove_NoVirtual(long index, long size)
	{
		long indexParamValue = index;
		long sizeParamValue = size;
		long returnValue = remove_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue, sizeParamValue);
		return returnValue;
	}

	native private long clear_void(long pNativeObject);
	/**
	 * 清除所有选择的entity
	 * @param  
	 * @return 清理的数量
	 */
	public long clear()
	{
		long returnValue = clear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long clear_void_NoVirtual(long pNativeObject);
	protected long clear_NoVirtual()
	{
		long returnValue = clear_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public EntitySelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntitySelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 取两个选择器的交集ID
	 * @param set 指定选择器
	 */
	public void intersect(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		super.intersect_NoVirtual(set);
	}
	/**
	 * 取两个选择器的不同ID
	 * @param set 指定选择器
	 */
	public void difference(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		super.difference_NoVirtual(set);
	}
	/**
	 * 追加指定选择器ID
	 * @param set 指定选择器
	 */
	public void append(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		super.append_NoVirtual(set);
	}
	
	native protected void register_getCount_void(long pNativeObject, String method);
	native protected void register_getID_ev_uint32(long pNativeObject, String method);
	native protected void register_getIDs_ev_uint32(long pNativeObject, String method);
	native protected void register_findID_ev_uint32(long pNativeObject, String method);
	native protected void register_query_IQueryFilter(long pNativeObject, String method);
	native protected void register_select_IQueryFilter(long pNativeObject, String method);
	native protected void register_addID_ev_uint32(long pNativeObject, String method);
	native protected void register_addIDs_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_remove_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_intersect_IFeatureSelection(long pNativeObject, String method);
	native protected void register_difference_IFeatureSelection(long pNativeObject, String method);
	native protected void register_append_IFeatureSelection(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCount_void(this.nativeObject.pointer, "getCount_void_callback");
			this.register_getID_ev_uint32(this.nativeObject.pointer, "getID_ev_uint32_callback");
			this.register_getIDs_ev_uint32(this.nativeObject.pointer, "getIDs_ev_uint32_callback");
			this.register_findID_ev_uint32(this.nativeObject.pointer, "findID_ev_uint32_callback");
			this.register_query_IQueryFilter(this.nativeObject.pointer, "query_IQueryFilter_callback");
			this.register_select_IQueryFilter(this.nativeObject.pointer, "select_IQueryFilter_callback");
			this.register_addID_ev_uint32(this.nativeObject.pointer, "addID_ev_uint32_callback");
			this.register_addIDs_ev_uint32_ev_uint32(this.nativeObject.pointer, "addIDs_ev_uint32_ev_uint32_callback");
			this.register_remove_ev_uint32_ev_uint32(this.nativeObject.pointer, "remove_ev_uint32_ev_uint32_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_intersect_IFeatureSelection(this.nativeObject.pointer, "intersect_IFeatureSelection_callback");
			this.register_difference_IFeatureSelection(this.nativeObject.pointer, "difference_IFeatureSelection_callback");
			this.register_append_IFeatureSelection(this.nativeObject.pointer, "append_IFeatureSelection_callback");
		}
	}
	
	public static EntitySelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntitySelection obj = null;
 		if(baseObj instanceof EntitySelection)
		{
			obj = (EntitySelection)baseObj;
		} else {
			obj = new EntitySelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntitySelection");
			obj.increaseCast();
		}

		return obj;
	}
}
