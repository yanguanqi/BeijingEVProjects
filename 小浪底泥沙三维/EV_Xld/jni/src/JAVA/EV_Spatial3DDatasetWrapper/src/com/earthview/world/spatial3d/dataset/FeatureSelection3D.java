package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 记录选择集
 */
public class FeatureSelection3D extends com.earthview.world.spatial.geodataset.Ifeatureselection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CFeatureSelection3D", new FeatureSelection3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCFeatureSelection3DProxy", new FeatureSelection3DClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_fc 数据集
	 */
	public FeatureSelection3D(com.earthview.world.spatial.geodataset.Ifeatureclass ref_fc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_fcPtr = new BasePointer(ref_fc);
		list.add("ref_fc", ref_fcPtr.get());
		Create("JCFeatureSelection3DProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataset.FeatureSelection3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getFeatureClass_void(long pNativeObject);
	/**
	 * 返回构造中传入的FeatureClass
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass getFeatureClass()
	{
		long returnValue = getFeatureClass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureclass __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureClass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeatureClass");
		}
		return __returnValue;
	}
	native private long getCount_void(long pNativeObject);
	/**
	 * 获得选择集中的记录数
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
	 * 获得选择集中指定索引的记录ID
	 * @param index 索引
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
	 * 获得选择集中的记录的所有ID
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
	 * 找到选择集中的指定ID记录的索引
	 * @param id 记录的ID
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
	 * 查询选择集
	 * @param filter 筛选器
	 * @return 选择集迭代器指针
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
	 * 查询选择集
	 * @param filter 筛选器
	 * @return 子选择集
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
	 * 添加记录ID
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

	native private boolean addSubIndexs_ev_uint32_Int3Vector(long pNativeObject, long id, long subIndexs);
	/**
	 * 添加模型ID和子组件ID
	 * @param id 模型ID
	 * @param subIndexs 子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,
	 * @return 是否添加成功
	 */
	public boolean addSubIndexs(long id, com.earthview.world.core.Int3Vector subIndexs)
	{
		long idParamValue = id;
		long subIndexsParamValue = subIndexs.nativeObject.pointer;
		boolean returnValue = addSubIndexs_ev_uint32_Int3Vector(this.nativeObject.pointer, idParamValue, subIndexsParamValue);
		return returnValue;
	}
	native private long getSubIndexs_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过模型ID获取子部件索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex
	 * @param id 模型ID
	 * @return 子部件的索引集合
	 */
	public com.earthview.world.core.Int3Vector getSubIndexs(long id)
	{
		long idParamValue = id;
		long returnValue = getSubIndexs_ev_uint32(this.nativeObject.pointer, idParamValue);
		com.earthview.world.core.Int3Vector __returnValue = new com.earthview.world.core.Int3Vector(CreatedWhenConstruct.CWC_NotToCreate, "Int3Vector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Int3Vector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Int3Vector");
		}
		return __returnValue;
	}
	native private boolean addMeshXSubIndexs_ev_uint32_IntVector(long pNativeObject, long id, long subIndexs);
	/**
	 * 添加LT_MeshXLayer,LT_MeshXGLayer,,LT_SERVER_MeshXGLayer图层模型ID和子组件ID
	 * @param id 模型ID
	 * @param subIndexs 子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,objectHandle
	 * @return 是否添加成功
	 */
	public boolean addMeshXSubIndexs(long id, com.earthview.world.core.IntVector subIndexs)
	{
		long idParamValue = id;
		long subIndexsParamValue = subIndexs.nativeObject.pointer;
		boolean returnValue = addMeshXSubIndexs_ev_uint32_IntVector(this.nativeObject.pointer, idParamValue, subIndexsParamValue);
		return returnValue;
	}
	native private long getMeshXSubIndexs_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过模型ID获取LT_MeshXLayer,LT_MeshXGLayer,,LT_SERVER_MeshXGLayer图层模型子部件索引集合
	 * @param id 模型ID
	 * @return 子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,objectHandle
	 */
	public com.earthview.world.core.IntVector getMeshXSubIndexs(long id)
	{
		long idParamValue = id;
		long returnValue = getMeshXSubIndexs_ev_uint32(this.nativeObject.pointer, idParamValue);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate, "IntVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long addIDs_ev_uint32_ev_uint32(long pNativeObject, long id, long size);
	/**
	 * 批量添加记录id
	 * @param id id数组指针
	 * @param size 数组大小
	 * @return 成功添加的个数
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
	 * 清除选择集
	 * @return 成功清除的个数
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
	 * 求与另一个选择集的交集
	 * @param set 选择集
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
	 * 求与另一个选择集的补集
	 * @param set 选择集
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
	 * 追加选择集
	 * @param set 选择集
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 读取数据流
	 * @param stream 数据流
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	public FeatureSelection3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureSelection3D(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static FeatureSelection3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureSelection3D obj = null;
 		if(baseObj instanceof FeatureSelection3D)
		{
			obj = (FeatureSelection3D)baseObj;
		} else {
			obj = new FeatureSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureSelection3D");
			obj.increaseCast();
		}

		return obj;
	}
}
