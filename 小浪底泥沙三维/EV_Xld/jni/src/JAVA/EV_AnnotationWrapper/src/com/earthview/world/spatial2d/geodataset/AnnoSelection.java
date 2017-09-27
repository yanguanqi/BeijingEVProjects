package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素选择器，用于存放数据集中被选中的要素ID。
 */
public class AnnoSelection extends com.earthview.world.spatial.geodataset.Ifeatureselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoSelection", new AnnoSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoSelectionProxy", new AnnoSelectionClassFactory());
	}

	/**
	 * 构造函数
	 * @param fc 要素集
	 * @param flag 标记
	 */
	public AnnoSelection(com.earthview.world.spatial2d.geodataset.AnnoFeatureClass ref_fc, int flag) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_fcPtr = new BasePointer(ref_fc);
		list.add("ref_fc", ref_fcPtr.get());
		BasePointer flagPtr = new BasePointer(flag);
		list.add("flag", flagPtr.get());
		Create("JCAnnoSelectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.geodataset.AnnoSelection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getCount_void(long pNativeObject);
	/**
	 * 获取要素数目
	 * @return 要素数目
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
	 * 获取要素ID
	 * @param index 指定索引
	 * @return 要素ID
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
	 * 获取所有ID
	 * @param ids 输出，ID数组
	 * @return 要素ID个数
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
	 * 判断指定ID是否存在
	 * @param id 指定ID
	 * @return 存在，返回索引，不存在，返回-1
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
	 * 在选择器中，再查询指定条件要素
	 * @param filter 指定条件
	 * @return 要素结果迭代器
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
	 * 在选择器中，再选择指定条件要素
	 * @param filter 指定条件
	 * @return 要素选择器
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureselection select(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = select_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureselection __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureselection(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureSelection");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureselection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureSelection");
		}
		return __returnValue;
	}

	native private boolean addID_ev_uint32(long pNativeObject, long id);
	/**
	 * 添加指定ID
	 * @param id 指定ID
	 * @return true，成功；false，失败
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
	 * 添加ID数组
	 * @param id ID数组
	 * @param size ID数组大小
	 * @return 添加个数
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
	 * 移除指定索引出的指定个数的ID
	 * @param index 指定索引
	 * @param size 指定大小
	 * @return 成功移除数目
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
	 * 移除所有的ID
	 * @return 要素选择器
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

	native private void intersect_IFeatureSelection(long pNativeObject, long set);
	/**
	 * 取两个选择器的交集ID
	 * @param set 指定选择器
	 */
	public void intersect(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		intersect_IFeatureSelection(this.nativeObject.pointer, setParamValue);
	}
	native private void intersect_IFeatureSelection_NoVirtual(long pNativeObject, long set);
	protected void intersect_NoVirtual(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		intersect_IFeatureSelection_NoVirtual(this.nativeObject.pointer, setParamValue);
	}

	native private void difference_IFeatureSelection(long pNativeObject, long set);
	/**
	 * 取两个选择器的不同ID
	 * @param set 指定选择器
	 */
	public void difference(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		difference_IFeatureSelection(this.nativeObject.pointer, setParamValue);
	}
	native private void difference_IFeatureSelection_NoVirtual(long pNativeObject, long set);
	protected void difference_NoVirtual(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		difference_IFeatureSelection_NoVirtual(this.nativeObject.pointer, setParamValue);
	}

	native private void append_IFeatureSelection(long pNativeObject, long set);
	/**
	 * 追加指定选择器ID
	 * @param set 指定选择器
	 */
	public void append(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		append_IFeatureSelection(this.nativeObject.pointer, setParamValue);
	}
	native private void append_IFeatureSelection_NoVirtual(long pNativeObject, long set);
	protected void append_NoVirtual(com.earthview.world.spatial.geodataset.Ifeatureselection set)
	{
		long setParamValue = (set == null ? 0L : set.nativeObject.pointer);
		append_IFeatureSelection_NoVirtual(this.nativeObject.pointer, setParamValue);
	}

	public AnnoSelection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnnoSelection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static AnnoSelection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnnoSelection obj = null;
 		if(baseObj instanceof AnnoSelection)
		{
			obj = (AnnoSelection)baseObj;
		} else {
			obj = new AnnoSelection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnnoSelection");
			obj.increaseCast();
		}

		return obj;
	}
}
