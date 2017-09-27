package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceDataset extends com.earthview.world.spatial.geodataset.Ifeatureclass {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceDataset", new ResourceDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCResourceDatasetProxy", new ResourceDatasetClassFactory());
	}

	native private boolean get_mIsTempl_void(long pNativeObject);
	public boolean get_mIsTempl()
	{
		boolean jniValue = get_mIsTempl_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsTempl_ev_bool (long pNativeObject, boolean value);
	public void set_mIsTempl(boolean mIsTempl)
	{
		boolean mIsTemplParamValue = mIsTempl;
		
		set_mIsTempl_ev_bool(this.nativeObject.pointer, mIsTemplParamValue);
	}
	
	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @return EVString，数据集名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getAliasName_void_callback()
	{
		String returnValue = getAliasName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取数据集别名
	 * @param  
	 */
	public String getAliasName()
	{
		String returnValue = getAliasName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAliasName_void_NoVirtual(long pNativeObject);
	protected String getAliasName_NoVirtual()
	{
		String returnValue = getAliasName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isEditing_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		boolean returnValue = isEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isEditing_void_NoVirtual(long pNativeObject);
	protected boolean isEditing_NoVirtual()
	{
		boolean returnValue = isEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean startEditing_ev_bool(long pNativeObject, boolean withUndo);
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}
	native private boolean startEditing_ev_bool_NoVirtual(long pNativeObject, boolean withUndo);
	protected boolean startEditing_NoVirtual(boolean withUndo)
	{
		boolean withUndoParamValue = withUndo;
		boolean returnValue = startEditing_ev_bool_NoVirtual(this.nativeObject.pointer, withUndoParamValue);
		return returnValue;
	}

	protected  boolean saveEditing_void_callback()
	{
		boolean returnValue = saveEditing();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean saveEditing_void(long pNativeObject);
	/**
	 * 保存编辑
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean saveEditing()
	{
		boolean returnValue = saveEditing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveEditing_void_NoVirtual(long pNativeObject);
	protected boolean saveEditing_NoVirtual()
	{
		boolean returnValue = saveEditing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}
	native private boolean stopEditing_ev_bool_NoVirtual(long pNativeObject, boolean isSave);
	protected boolean stopEditing_NoVirtual(boolean isSave)
	{
		boolean isSaveParamValue = isSave;
		boolean returnValue = stopEditing_ev_bool_NoVirtual(this.nativeObject.pointer, isSaveParamValue);
		return returnValue;
	}

	native private long getGeometryField_void(long pNativeObject);
	/**
	 * 获取GEOMETRY字段
	 * @return EarthView::World::Spatial::GeoDataset::IField*，字段描述
	 */
	public com.earthview.world.spatial.geodataset.Ifield getGeometryField()
	{
		long returnValue = getGeometryField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getGeometryField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getGeometryField_NoVirtual()
	{
		long returnValue = getGeometryField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private long getIDField_void(long pNativeObject);
	/**
	 * 获取主键ID字段
	 * @return EarthView::World::Spatial::GeoDataset::IField*，字段描述
	 */
	public com.earthview.world.spatial.geodataset.Ifield getIDField()
	{
		long returnValue = getIDField_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getIDField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getIDField_NoVirtual()
	{
		long returnValue = getIDField_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * 获取要素字段结构
	 * @return EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFieldsRef()
	{
		long returnValue = getFieldsRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long getFieldsRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getFieldsRef_NoVirtual()
	{
		long returnValue = getFieldsRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取要素字段个数
	 * @return ev_uint32，返回要素字段个数
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据字段下标获取字段结构描述
	 * @param index 字段下标
	 * @return EarthView::World::Spatial::GeoDataset::IField*，失败则返回空
	 */
	public com.earthview.world.spatial.geodataset.Ifield getFieldRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getFieldRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getFieldRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * 查询字段
	 * @param fieldName 字段名称
	 * @return ev_int32，如果失败则返回-1，成功则返回字段下标
	 */
	public int findField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private int findField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected int findField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	protected  long getFeature_ev_uint32_ev_uint32_callback(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		com.earthview.world.spatial.geodataset.Ifeature returnValue = getFeature(meshIDParamValue, resIDParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFeature_ev_uint32_ev_uint32(long pNativeObject, long meshID, long resID);
	/**
	 * 根据MeshID和resID获取要素
	 * @param meshID 模型ID
	 * @param resID 资源ID
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		long returnValue = getFeature_ev_uint32_ev_uint32(this.nativeObject.pointer, meshIDParamValue, resIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long getFeature_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long meshID, long resID);
	protected com.earthview.world.spatial.geodataset.Ifeature getFeature_NoVirtual(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		long returnValue = getFeature_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, meshIDParamValue, resIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	protected  boolean getFeatureVector_ev_uint32_FeatureVector_callback(long meshID, long fs)
	{
		long meshIDParamValue = meshID;
		com.earthview.world.spatial3d.dataset.FeatureVector fsParamValue = new com.earthview.world.spatial3d.dataset.FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		fsParamValue.setDelegate(true);
		fsParamValue.setInstancePointer(new InstancePointer(fs));
		IClassFactory fsParamValueClassFactory = GlobalClassFactoryMap.get(fsParamValue.getCppInstanceTypeName());
		if (fsParamValueClassFactory != null)
		{
			fsParamValue.setDelegate(true);
			fsParamValue = (com.earthview.world.spatial3d.dataset.FeatureVector)fsParamValueClassFactory.create();
			fsParamValue.setDelegate(true);
			fsParamValue.setInstancePointer(new InstancePointer(fs));
		}
		boolean returnValue = getFeatureVector(meshIDParamValue, fsParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getFeatureVector_ev_uint32_FeatureVector(long pNativeObject, long meshID, long fs);
	/**
	 * 根据MESHid获取FEATURE
	 * @param meshID 模型ID
	 * @param resID 资源ID
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre
	 */
	public boolean getFeatureVector(long meshID, com.earthview.world.spatial3d.dataset.FeatureVector fs)
	{
		long meshIDParamValue = meshID;
		long fsParamValue = fs.nativeObject.pointer;
		boolean returnValue = getFeatureVector_ev_uint32_FeatureVector(this.nativeObject.pointer, meshIDParamValue, fsParamValue);
		return returnValue;
	}
	native private boolean getFeatureVector_ev_uint32_FeatureVector_NoVirtual(long pNativeObject, long meshID, long fs);
	protected boolean getFeatureVector_NoVirtual(long meshID, com.earthview.world.spatial3d.dataset.FeatureVector fs)
	{
		long meshIDParamValue = meshID;
		long fsParamValue = fs.nativeObject.pointer;
		boolean returnValue = getFeatureVector_ev_uint32_FeatureVector_NoVirtual(this.nativeObject.pointer, meshIDParamValue, fsParamValue);
		return returnValue;
	}

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 要素查询，返回迭代器遍历
	 * @param filter 查询条件
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureiterator query(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = query_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeatureiterator __returnValue = new com.earthview.world.spatial.geodataset.Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate, "IFeatureIterator");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
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
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeatureiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeatureIterator");
		}
		return __returnValue;
	}

	native private long select_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 要素查询，返回选择器遍历
	 * @param filter 查询条件
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureSelection*，失败返回NULL
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

	native private long getFeatureCount_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 根据查询条件获取要素个数
	 * @param filter 查询条件
	 * @return ev_uint32，失败返回-1
	 */
	public long getFeatureCount(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}
	native private long getFeatureCount_IQueryFilter_NoVirtual(long pNativeObject, long filter);
	protected long getFeatureCount_NoVirtual(com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		long returnValue = getFeatureCount_IQueryFilter_NoVirtual(this.nativeObject.pointer, filterParamValue);
		return returnValue;
	}

	native private long createFeatureBuffer_void(long pNativeObject);
	/**
	 * 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature
	 * @param bFromTemplate 是否创建从模板库来的FEATURE
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer()
	{
		long returnValue = createFeatureBuffer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long createFeatureBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer_NoVirtual()
	{
		long returnValue = createFeatureBuffer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	protected  long insert_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifeature returnValue = insert();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long insert_void(long pNativeObject);
	/**
	 * 直接插入一条空的要素到数据库
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifeature insert()
	{
		long returnValue = insert_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long insert_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature insert_NoVirtual()
	{
		long returnValue = insert_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private long insertFeatureBuffer_IFeature(long pNativeObject, long buffer);
	/**
	 * 插入要素(不计算，重复的则为多条记录)，根据createfeaturebuffer句柄来插入
	 * @param buffer 将要插入的要素句柄
	 * @return ev_uint32，返回插入成功后要素的ID
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private long insertFeatureBuffer_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected long insertFeatureBuffer_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	protected  long insertFeatureBuffer_IFeature_ev_bool_callback(long buffer, boolean bRefCount)
	{
		com.earthview.world.spatial.geodataset.Ifeature bufferParamValue = (buffer == 0L ? null : new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate));
		if(bufferParamValue != null)
		{
		bufferParamValue.setDelegate(true);
		bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		IClassFactory bufferParamValueClassFactory = GlobalClassFactoryMap.get(bufferParamValue.getCppInstanceTypeName());
		if (bufferParamValueClassFactory != null)
		{
			bufferParamValue.setDelegate(true);
			bufferParamValue = (com.earthview.world.spatial.geodataset.Ifeature)bufferParamValueClassFactory.create();
			bufferParamValue.setDelegate(true);
			bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		}
		}
		boolean bRefCountParamValue = bRefCount;
		long returnValue = insertFeatureBuffer(bufferParamValue, bRefCountParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long insertFeatureBuffer_IFeature_ev_bool(long pNativeObject, long buffer, boolean bRefCount);
	/**
	 * 插入要素，根据createfeaturebuffer句柄来插入
	 * @param buffer 将要插入的要素句柄
	 * @param bRefCount true重复名称文件会计数，false重复的文件为多条记录
	 * @return ev_uint32，返回插入成功后要素的ID
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature buffer, boolean bRefCount)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean bRefCountParamValue = bRefCount;
		long returnValue = insertFeatureBuffer_IFeature_ev_bool(this.nativeObject.pointer, bufferParamValue, bRefCountParamValue);
		return returnValue;
	}
	native private long insertFeatureBuffer_IFeature_ev_bool_NoVirtual(long pNativeObject, long buffer, boolean bRefCount);
	protected long insertFeatureBuffer_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer, boolean bRefCount)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean bRefCountParamValue = bRefCount;
		long returnValue = insertFeatureBuffer_IFeature_ev_bool_NoVirtual(this.nativeObject.pointer, bufferParamValue, bRefCountParamValue);
		return returnValue;
	}

	native private boolean update_IFeature(long pNativeObject, long buffer);
	/**
	 * 更新要素
	 * @param buffer 将要更新的要素句柄，一般为查询返回的句柄
	 * @return ev_bool，TURE成功，FALSE失败
	 */
	public boolean update(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}
	native private boolean update_IFeature_NoVirtual(long pNativeObject, long buffer);
	protected boolean update_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature buffer)
	{
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		boolean returnValue = update_IFeature_NoVirtual(this.nativeObject.pointer, bufferParamValue);
		return returnValue;
	}

	protected  boolean deleteFeature_ev_uint32_ev_uint32_callback(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		boolean returnValue = deleteFeature(meshIDParamValue, resIDParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteFeature_ev_uint32_ev_uint32(long pNativeObject, long meshID, long resID);
	/// <summary>
	/// 删除MeshID对应的一条资源
	/// </summary>
	/// <param name="meshID">MeshID/param>
	/// <param name="resID">resID/param>
	/// <returns>ev_bool，TURE成功，FALSE失败</returns>
	public boolean deleteFeature(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		boolean returnValue = deleteFeature_ev_uint32_ev_uint32(this.nativeObject.pointer, meshIDParamValue, resIDParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long meshID, long resID);
	protected boolean deleteFeature_NoVirtual(long meshID, long resID)
	{
		long meshIDParamValue = meshID;
		long resIDParamValue = resID;
		boolean returnValue = deleteFeature_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, meshIDParamValue, resIDParamValue);
		return returnValue;
	}

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long meshID);
	public boolean deleteFeature(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteFeature_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_NoVirtual(long pNativeObject, long meshID);
	protected boolean deleteFeature_NoVirtual(long meshID)
	{
		long meshIDParamValue = meshID;
		boolean returnValue = deleteFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, meshIDParamValue);
		return returnValue;
	}

	native private static void releaseFeature_IFeature(long feature);
	/**
	 * 释放要素空间，静态函数
	 * @param feature 要素句柄
	 * @return ev_bool，TURE成功，FALSE失败
	 */
	public static void releaseFeature(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		releaseFeature_IFeature(featureParamValue);
	}
	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据源句柄
	 * @return EarthView::World::Spatial::GeoDataset::IDataSource*，数据源句柄
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	public ResourceDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取要素数据集类型
	 * @return 要素数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType()
	{
		return super.getFeatureClassType_NoVirtual();
	}
	/**
	 * 获取几何体类型
	 * @return 几何体类型枚举
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取空间索引类型枚举
	 * @return 空间索引类型枚举
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum()
	{
		return super.getSpatialIndexEnum_NoVirtual();
	}
	/**
	 * 获取指定ID的要素
	 * @param id 指定ID
	 * @return 要素对象。如果无该ID，返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long id)
	{
		return super.getFeature_NoVirtual(id);
	}
	/**
	 * 为数据集，创建指定空间索引
	 * @param spaIndex 指定空间索引类型
	 * @return ture，成功；false，失败
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		return super.createSpatialIndex_NoVirtual(spaIndex);
	}
	/**
	 * 重建空间索引
	 * @return true，成功；false，失败
	 */
	public boolean rebulidSpatialIndex()
	{
		return super.rebulidSpatialIndex_NoVirtual();
	}
	/**
	 * 删除空间索引
	 * @return true，成功；false，失败
	 */
	public boolean deleteSpatialIndex()
	{
		return super.deleteSpatialIndex_NoVirtual();
	}
	/**
	 * 添加字段
	 * @param field 指定索引
	 * @return ture，成功；false，失败
	 */
	public boolean addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.addField_NoVirtual(field);
	}
	/**
	 * 删除指定字段
	 * @param field 指定字段
	 * @return ture，成功；false，失败
	 */
	public boolean deleteField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		return super.deleteField_NoVirtual(field);
	}
	/**
	 * 在数据集上，插入新要素。
	 * @param feature 返回的要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		return super.insert_NoVirtual(feature);
	}
	/**
	 * 获取数据集的范围
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 获取数据集的空间坐标系参考对象
	 * @return 空间坐标参考系对象，内部引用，无需释放
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		return super.getSpatialReferenceRef_NoVirtual();
	}
	/**
	 * 创建一个数据表的代理对象。
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		return super.createTableProxy_NoVirtual();
	}
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		return super.hasSubDataset_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		return super.isBeginEditingOperation_NoVirtual();
	}
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		return super.beginEditingOperation_NoVirtual();
	}
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		return super.endEditingOperation_NoVirtual(isConfirm);
	}
	
	native protected void register_getAliasName_void(long pNativeObject, String method);
	native protected void register_saveEditing_void(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getFeatureVector_ev_uint32_FeatureVector(long pNativeObject, String method);
	native protected void register_insert_void(long pNativeObject, String method);
	native protected void register_insertFeatureBuffer_IFeature_ev_bool(long pNativeObject, String method);
	native protected void register_deleteFeature_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getFeatureClassType_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getFieldsRef_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_getGeometryField_void(long pNativeObject, String method);
	native protected void register_getIDField_void(long pNativeObject, String method);
	native protected void register_getSpatialIndexEnum_void(long pNativeObject, String method);
	native protected void register_getFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_query_IQueryFilter(long pNativeObject, String method);
	native protected void register_select_IQueryFilter(long pNativeObject, String method);
	native protected void register_getFeatureCount_IQueryFilter(long pNativeObject, String method);
	native protected void register_createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, String method);
	native protected void register_rebulidSpatialIndex_void(long pNativeObject, String method);
	native protected void register_deleteSpatialIndex_void(long pNativeObject, String method);
	native protected void register_addField_IField(long pNativeObject, String method);
	native protected void register_deleteField_IField(long pNativeObject, String method);
	native protected void register_createFeatureBuffer_void(long pNativeObject, String method);
	native protected void register_insert_IFeature(long pNativeObject, String method);
	native protected void register_insertFeatureBuffer_IFeature(long pNativeObject, String method);
	native protected void register_update_IFeature(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_getSpatialReferenceRef_void(long pNativeObject, String method);
	native protected void register_deleteFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_createTableProxy_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getDataVersion_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_getUpdateTime_void(long pNativeObject, String method);
	native protected void register_hasSubDataset_void(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_startEditing_ev_bool(long pNativeObject, String method);
	native protected void register_stopEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isBeginEditingOperation_void(long pNativeObject, String method);
	native protected void register_beginEditingOperation_void(long pNativeObject, String method);
	native protected void register_endEditingOperation_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
			this.register_saveEditing_void(this.nativeObject.pointer, "saveEditing_void_callback");
			this.register_getFeature_ev_uint32_ev_uint32(this.nativeObject.pointer, "getFeature_ev_uint32_ev_uint32_callback");
			this.register_getFeatureVector_ev_uint32_FeatureVector(this.nativeObject.pointer, "getFeatureVector_ev_uint32_FeatureVector_callback");
			this.register_insert_void(this.nativeObject.pointer, "insert_void_callback");
			this.register_insertFeatureBuffer_IFeature_ev_bool(this.nativeObject.pointer, "insertFeatureBuffer_IFeature_ev_bool_callback");
			this.register_deleteFeature_ev_uint32_ev_uint32(this.nativeObject.pointer, "deleteFeature_ev_uint32_ev_uint32_callback");
			this.register_getFeatureClassType_void(this.nativeObject.pointer, "getFeatureClassType_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getFieldsRef_void(this.nativeObject.pointer, "getFieldsRef_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_getGeometryField_void(this.nativeObject.pointer, "getGeometryField_void_callback");
			this.register_getIDField_void(this.nativeObject.pointer, "getIDField_void_callback");
			this.register_getSpatialIndexEnum_void(this.nativeObject.pointer, "getSpatialIndexEnum_void_callback");
			this.register_getFeature_ev_uint32(this.nativeObject.pointer, "getFeature_ev_uint32_callback");
			this.register_query_IQueryFilter(this.nativeObject.pointer, "query_IQueryFilter_callback");
			this.register_select_IQueryFilter(this.nativeObject.pointer, "select_IQueryFilter_callback");
			this.register_getFeatureCount_IQueryFilter(this.nativeObject.pointer, "getFeatureCount_IQueryFilter_callback");
			this.register_createSpatialIndex_EVSpatialIndexEnum(this.nativeObject.pointer, "createSpatialIndex_EVSpatialIndexEnum_callback");
			this.register_rebulidSpatialIndex_void(this.nativeObject.pointer, "rebulidSpatialIndex_void_callback");
			this.register_deleteSpatialIndex_void(this.nativeObject.pointer, "deleteSpatialIndex_void_callback");
			this.register_addField_IField(this.nativeObject.pointer, "addField_IField_callback");
			this.register_deleteField_IField(this.nativeObject.pointer, "deleteField_IField_callback");
			this.register_createFeatureBuffer_void(this.nativeObject.pointer, "createFeatureBuffer_void_callback");
			this.register_insert_IFeature(this.nativeObject.pointer, "insert_IFeature_callback");
			this.register_insertFeatureBuffer_IFeature(this.nativeObject.pointer, "insertFeatureBuffer_IFeature_callback");
			this.register_update_IFeature(this.nativeObject.pointer, "update_IFeature_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_getSpatialReferenceRef_void(this.nativeObject.pointer, "getSpatialReferenceRef_void_callback");
			this.register_deleteFeature_ev_uint32(this.nativeObject.pointer, "deleteFeature_ev_uint32_callback");
			this.register_createTableProxy_void(this.nativeObject.pointer, "createTableProxy_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getDataVersion_void(this.nativeObject.pointer, "getDataVersion_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_getUpdateTime_void(this.nativeObject.pointer, "getUpdateTime_void_callback");
			this.register_hasSubDataset_void(this.nativeObject.pointer, "hasSubDataset_void_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_startEditing_ev_bool(this.nativeObject.pointer, "startEditing_ev_bool_callback");
			this.register_stopEditing_ev_bool(this.nativeObject.pointer, "stopEditing_ev_bool_callback");
			this.register_isBeginEditingOperation_void(this.nativeObject.pointer, "isBeginEditingOperation_void_callback");
			this.register_beginEditingOperation_void(this.nativeObject.pointer, "beginEditingOperation_void_callback");
			this.register_endEditingOperation_ev_bool(this.nativeObject.pointer, "endEditingOperation_ev_bool_callback");
		}
	}
	
	public static ResourceDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceDataset obj = null;
 		if(baseObj instanceof ResourceDataset)
		{
			obj = (ResourceDataset)baseObj;
		} else {
			obj = new ResourceDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
