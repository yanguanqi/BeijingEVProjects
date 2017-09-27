package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityDataset extends com.earthview.world.spatial3d.dataset.ModelDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityDataset", new EntityDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityDatasetProxy", new EntityDatasetClassFactory());
	}

	native private String getDataVersion_void(long pNativeObject);
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private boolean checkVersion_void(long pNativeObject);
	public boolean checkVersion()
	{
		boolean returnValue = checkVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒
	 * @param  
	 * @return 数据集包围盒对象
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		long returnValue = getEnvelopeRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelopeRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef_NoVirtual()
	{
		long returnValue = getEnvelopeRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getSpatialReferenceRef_void(long pNativeObject);
	/**
	 * 获取坐标系统信息
	 * @param  
	 * @return 坐标参考信息
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef()
	{
		long returnValue = getSpatialReferenceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReferenceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReferenceRef_NoVirtual()
	{
		long returnValue = getSpatialReferenceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
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

	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取别名
	 * @param  
	 * @return 数据集别名
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
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。开始编辑后，数据集被锁定，事务自动开启
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

	native private boolean startEditingSimple_void(long pNativeObject);
	/**
	 * 开始编辑后，数据集被锁定，无需saveEditing，直接入库，未在内部开启事务
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditingSimple()
	{
		boolean returnValue = startEditingSimple_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean stopEditingSimple_void(long pNativeObject);
	/**
	 * 结束编辑，解除数据集锁定
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditingSimple()
	{
		boolean returnValue = stopEditingSimple_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isTransaction_void(long pNativeObject);
	/**
	 * 是否开启事务
	 */
	public boolean isTransaction()
	{
		boolean returnValue = isTransaction_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void transaction_void_callback()
	{
		transaction();
	}

	native private void transaction_void(long pNativeObject);
	/**
	 * 开始事务
	 */
	public void transaction()
	{
		transaction_void(this.nativeObject.pointer);
	}
	native private void transaction_void_NoVirtual(long pNativeObject);
	protected void transaction_NoVirtual()
	{
		transaction_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void commit_void_callback()
	{
		commit();
	}

	native private void commit_void(long pNativeObject);
	/**
	 * 提交事务
	 */
	public void commit()
	{
		commit_void(this.nativeObject.pointer);
	}
	native private void commit_void_NoVirtual(long pNativeObject);
	protected void commit_NoVirtual()
	{
		commit_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void rollback_void_callback()
	{
		rollback();
	}

	native private void rollback_void(long pNativeObject);
	/**
	 * 撤消事务
	 */
	public void rollback()
	{
		rollback_void(this.nativeObject.pointer);
	}
	native private void rollback_void_NoVirtual(long pNativeObject);
	protected void rollback_NoVirtual()
	{
		rollback_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getUpdateID_void_callback()
	{
		long returnValue = getUpdateID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getUpdateID_void(long pNativeObject);
	/**
	 * 数据更新后，返回更新的ID
	 * @return 更新的ID
	 */
	public long getUpdateID()
	{
		long returnValue = getUpdateID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getUpdateID_void_NoVirtual(long pNativeObject);
	protected long getUpdateID_NoVirtual()
	{
		long returnValue = getUpdateID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getMeshID_ev_uint32_callback(long entID)
	{
		long entIDParamValue = entID;
		long returnValue = getMeshID(entIDParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getMeshID_ev_uint32(long pNativeObject, long entID);
	/**
	 * 数据更新后，通过返回的实体ID取MESHID
	 * @return MESHID
	 */
	public long getMeshID(long entID)
	{
		long entIDParamValue = entID;
		long returnValue = getMeshID_ev_uint32(this.nativeObject.pointer, entIDParamValue);
		return returnValue;
	}
	native private long getMeshID_ev_uint32_NoVirtual(long pNativeObject, long entID);
	protected long getMeshID_NoVirtual(long entID)
	{
		long entIDParamValue = entID;
		long returnValue = getMeshID_ev_uint32_NoVirtual(this.nativeObject.pointer, entIDParamValue);
		return returnValue;
	}

	protected  long getID_void_callback()
	{
		long returnValue = getID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取ID值
	 * @param  
	 * @return SRID
	 */
	public long getID()
	{
		long returnValue = getID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getID_void_NoVirtual(long pNativeObject);
	protected long getID_NoVirtual()
	{
		long returnValue = getID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getSRID_void_callback()
	{
		int returnValue = getSRID();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSRID_void(long pNativeObject);
	/**
	 * 获取数据集坐标参考SRID值
	 * @param  
	 * @return SRID
	 */
	public int getSRID()
	{
		int returnValue = getSRID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSRID_void_NoVirtual(long pNativeObject);
	protected int getSRID_NoVirtual()
	{
		int returnValue = getSRID_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取GEOMETRY类别
	 * @return EarthView::World::Spatial::Geometry::EVGeometryType，返回GEOMETRY类别
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
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

	native private int getFeatureClassType_void(long pNativeObject);
	/**
	 * 获取要素类别
	 * @return EarthView::World::Spatial::GeoDataset::EVFeatureClassType，要素类别
	 */
	public com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType()
	{
		int returnValue = getFeatureClassType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
	}
	native private int getFeatureClassType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVFeatureClassType getFeatureClassType_NoVirtual()
	{
		int returnValue = getFeatureClassType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFeatureClassType.toEnum(returnValue);
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

	protected  long getAttrFieldsRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = getAttrFieldsRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAttrFieldsRef_void(long pNativeObject);
	/**
	 * 获取属性表字段结构
	 * @return EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空
	 */
	public com.earthview.world.spatial.geodataset.Ifields getAttrFieldsRef()
	{
		long returnValue = getAttrFieldsRef_void(this.nativeObject.pointer);
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
	native private long getAttrFieldsRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getAttrFieldsRef_NoVirtual()
	{
		long returnValue = getAttrFieldsRef_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getCustomerFieldsRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = getCustomerFieldsRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCustomerFieldsRef_void(long pNativeObject);
	/**
	 * 获取用户定义字段结构
	 * @return EarthView::World::Spatial::GeoDataset::IFields*，失败则返回空
	 */
	public com.earthview.world.spatial.geodataset.Ifields getCustomerFieldsRef()
	{
		long returnValue = getCustomerFieldsRef_void(this.nativeObject.pointer);
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
	native private long getCustomerFieldsRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getCustomerFieldsRef_NoVirtual()
	{
		long returnValue = getCustomerFieldsRef_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean addField_IField(long pNativeObject, long field);
	/**
	 * 添加扩展表字段(会修改数据库表)
	 * @param field 字段
	 * @return ture，成功；false，失败
	 */
	public boolean addField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = addField_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private boolean addField_IField_NoVirtual(long pNativeObject, long field);
	protected boolean addField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = addField_IField_NoVirtual(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}

	native private boolean deleteField_IField(long pNativeObject, long field);
	/**
	 * 删除扩展表指定的字段(会修改数据库表)
	 * @param field 字段
	 * @return ture，成功；false，失败
	 */
	public boolean deleteField(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = deleteField_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	native private boolean deleteField_IField_NoVirtual(long pNativeObject, long field);
	protected boolean deleteField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		boolean returnValue = deleteField_IField_NoVirtual(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}

	native private long getFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 根据ID获取要素
	 * @param id 实体ID
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getFeature(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
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
	native private long getFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.spatial.geodataset.Ifeature getFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
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

	protected  long getAttrFeature_ev_uint32_callback(long id)
	{
		long idParamValue = id;
		com.earthview.world.spatial.geodataset.Ifeature returnValue = getAttrFeature(idParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAttrFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 根据ID获取只包含基本属性的要素
	 * @param id 实体ID
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，失败返回NULL，内存由内部申请，外部需要释放，可调用静态函数releaseFeautre
	 */
	public com.earthview.world.spatial.geodataset.Ifeature getAttrFeature(long id)
	{
		long idParamValue = id;
		long returnValue = getAttrFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
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
	native private long getAttrFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected com.earthview.world.spatial.geodataset.Ifeature getAttrFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		long returnValue = getAttrFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
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

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 要素查询，返回迭代器遍历
	 * @param filter 查询条件
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureIterator*，返回迭代器指针，外部需要释放,在迭代的时候返回的FEATURE指针内存由内部管理，每次NEXT会释放上一次FEATURE
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
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureSelection*，外部需要释放,失败返回NULL
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

	native private long getFeatureCount_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 根据查询条件获取要素个数
	 * @param filter 查询条件
	 * @return ev_uint32，返回要素个数
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
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL
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

	native private long createFeatureBufferWithoutID_void(long pNativeObject);
	/**
	 * 创建一条空的要素对象，在插入时需要创建一个这样的对象来设置字段值，内部申请空间需要外部释放realeasefeature不指定ID
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBufferWithoutID()
	{
		long returnValue = createFeatureBufferWithoutID_void(this.nativeObject.pointer);
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
	 * @return EarthView::World::Spatial::GeoDataset::IFeature*，内存由内部申请，外部需要释放,失败返回NULL
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
	 * 插入要素，根据createfeaturebuffer句柄来插入
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

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 删除要素
	 * @param feature 要素句柄
	 * @return ev_bool，TURE成功，FALSE失败
	 */
	public boolean deleteFeature(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean deleteFeature_ev_uint32_NoVirtual(long pNativeObject, long id);
	protected boolean deleteFeature_NoVirtual(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteFeature_ev_uint32_NoVirtual(this.nativeObject.pointer, idParamValue);
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

	native private long getResourceDatasetRef_void(long pNativeObject);
	/**
	 * 获取资源数据集句柄
	 * @param bFromTemplate TRUE获取模板库的资源数据集，FALSE获取本地模型资源数据集
	 * @return EarthView::World::Spatial::GeoDataset::IFeatureClass*，数据集句柄
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass getResourceDatasetRef()
	{
		long returnValue = getResourceDatasetRef_void(this.nativeObject.pointer);
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
	native private long getResourceDatasetRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeatureclass getResourceDatasetRef_NoVirtual()
	{
		long returnValue = getResourceDatasetRef_void_NoVirtual(this.nativeObject.pointer);
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

	protected  boolean isDatasetLocked_void_callback()
	{
		boolean returnValue = isDatasetLocked();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDatasetLocked_void(long pNativeObject);
	/**
	 * 判断数据集是否被锁
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean isDatasetLocked()
	{
		boolean returnValue = isDatasetLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDatasetLocked_void_NoVirtual(long pNativeObject);
	protected boolean isDatasetLocked_NoVirtual()
	{
		boolean returnValue = isDatasetLocked_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean lockDataset_void_callback()
	{
		boolean returnValue = lockDataset();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean lockDataset_void(long pNativeObject);
	/**
	 * 锁数据集
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean lockDataset()
	{
		boolean returnValue = lockDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean lockDataset_void_NoVirtual(long pNativeObject);
	protected boolean lockDataset_NoVirtual()
	{
		boolean returnValue = lockDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void unlockDataset_void_callback()
	{
		unlockDataset();
	}

	native private void unlockDataset_void(long pNativeObject);
	/**
	 * 解锁数据集
	 */
	public void unlockDataset()
	{
		unlockDataset_void(this.nativeObject.pointer);
	}
	native private void unlockDataset_void_NoVirtual(long pNativeObject);
	protected void unlockDataset_NoVirtual()
	{
		unlockDataset_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, int spaIndex);
	/**
	 * 创建八叉树索引，如果修改了数据集，在关闭的时候默认创建
	 * @param spaIndex 索引类别，目前只支持SIE_OCTREE
	 * @return ev_bool，TRUE成功/FALSE失败
	 */
	public boolean createSpatialIndex(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		int spaIndexParamValue = spaIndex.getValue();
		boolean returnValue = createSpatialIndex_EVSpatialIndexEnum(this.nativeObject.pointer, spaIndexParamValue);
		return returnValue;
	}
	native private boolean createSpatialIndex_EVSpatialIndexEnum_NoVirtual(long pNativeObject, int spaIndex);
	protected boolean createSpatialIndex_NoVirtual(com.earthview.world.spatial.geodataset.EVSpatialIndexEnum spaIndex)
	{
		int spaIndexParamValue = spaIndex.getValue();
		boolean returnValue = createSpatialIndex_EVSpatialIndexEnum_NoVirtual(this.nativeObject.pointer, spaIndexParamValue);
		return returnValue;
	}

	protected  void updateSpatialIndex_IFeature_EntityDatasetOperType_callback(long feature, int type)
	{
		com.earthview.world.spatial.geodataset.Ifeature featureParamValue = (feature == 0L ? null : new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate));
		if(featureParamValue != null)
		{
		featureParamValue.setDelegate(true);
		featureParamValue.setInstancePointer(new InstancePointer(feature));
		IClassFactory featureParamValueClassFactory = GlobalClassFactoryMap.get(featureParamValue.getCppInstanceTypeName());
		if (featureParamValueClassFactory != null)
		{
			featureParamValue.setDelegate(true);
			featureParamValue = (com.earthview.world.spatial.geodataset.Ifeature)featureParamValueClassFactory.create();
			featureParamValue.setDelegate(true);
			featureParamValue.setInstancePointer(new InstancePointer(feature));
		}
		}
		com.earthview.world.spatial3d.dataset.EntityDatasetOperType typeParamValue = com.earthview.world.spatial3d.dataset.EntityDatasetOperType.toEnum(type);
		updateSpatialIndex(featureParamValue, typeParamValue);
	}

	native private void updateSpatialIndex_IFeature_EntityDatasetOperType(long pNativeObject, long feature, int type);
	/**
	 * 修改对象后，同步索引
	 * @param feature 要素句柄
	 * @return ev_bool，TURE成功，FALSE失败
	 */
	public void updateSpatialIndex(com.earthview.world.spatial.geodataset.Ifeature feature, com.earthview.world.spatial3d.dataset.EntityDatasetOperType type)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		int typeParamValue = type.getValue();
		updateSpatialIndex_IFeature_EntityDatasetOperType(this.nativeObject.pointer, featureParamValue, typeParamValue);
	}
	native private void updateSpatialIndex_IFeature_EntityDatasetOperType_NoVirtual(long pNativeObject, long feature, int type);
	protected void updateSpatialIndex_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature, com.earthview.world.spatial3d.dataset.EntityDatasetOperType type)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		int typeParamValue = type.getValue();
		updateSpatialIndex_IFeature_EntityDatasetOperType_NoVirtual(this.nativeObject.pointer, featureParamValue, typeParamValue);
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类别
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private boolean getMaxID_ev_uint32_ev_uint32(long pNativeObject, long entID, long meshID);
	/**
	 * 获取最大实体ID和MESHID
	 */
	public boolean getMaxID(UIntegerPointer entID, UIntegerPointer meshID)
	{
		long entIDParamValue = entID.nativeObject.pointer;
		long meshIDParamValue = meshID.nativeObject.pointer;
		boolean returnValue = getMaxID_ev_uint32_ev_uint32(this.nativeObject.pointer, entIDParamValue, meshIDParamValue);
		return returnValue;
	}
	native private boolean clearDataset_void(long pNativeObject);
	/**
	 * 清空数据集记录
	 */
	public boolean clearDataset()
	{
		boolean returnValue = clearDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int refreshDataset_void(long pNativeObject);
	/**
	 * 刷新数据集
	 * @param  
	 * @return 0:不需要刷新1：刷新成功2:刷新失败
	 */
	public int refreshDataset()
	{
		int returnValue = refreshDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int refreshDataset_void_NoVirtual(long pNativeObject);
	protected int refreshDataset_NoVirtual()
	{
		int returnValue = refreshDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public EntityDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 在数据集上，插入新要素。
	 * @param feature 返回的要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		return super.insert_NoVirtual(feature);
	}
	/**
	 * 创建一个数据表的代理对象。
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		return super.createTableProxy_NoVirtual();
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
	
	native protected void register_saveEditing_void(long pNativeObject, String method);
	native protected void register_transaction_void(long pNativeObject, String method);
	native protected void register_commit_void(long pNativeObject, String method);
	native protected void register_rollback_void(long pNativeObject, String method);
	native protected void register_getUpdateID_void(long pNativeObject, String method);
	native protected void register_getMeshID_ev_uint32(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getSRID_void(long pNativeObject, String method);
	native protected void register_getAttrFieldsRef_void(long pNativeObject, String method);
	native protected void register_getCustomerFieldsRef_void(long pNativeObject, String method);
	native protected void register_getAttrFeature_ev_uint32(long pNativeObject, String method);
	native protected void register_insert_void(long pNativeObject, String method);
	native protected void register_isDatasetLocked_void(long pNativeObject, String method);
	native protected void register_lockDataset_void(long pNativeObject, String method);
	native protected void register_unlockDataset_void(long pNativeObject, String method);
	native protected void register_updateSpatialIndex_IFeature_EntityDatasetOperType(long pNativeObject, String method);
	native protected void register_getResourceDatasetRef_void(long pNativeObject, String method);
	native protected void register_refreshDataset_void(long pNativeObject, String method);
	native protected void register_getAliasName_void(long pNativeObject, String method);
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
			this.register_saveEditing_void(this.nativeObject.pointer, "saveEditing_void_callback");
			this.register_transaction_void(this.nativeObject.pointer, "transaction_void_callback");
			this.register_commit_void(this.nativeObject.pointer, "commit_void_callback");
			this.register_rollback_void(this.nativeObject.pointer, "rollback_void_callback");
			this.register_getUpdateID_void(this.nativeObject.pointer, "getUpdateID_void_callback");
			this.register_getMeshID_ev_uint32(this.nativeObject.pointer, "getMeshID_ev_uint32_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getSRID_void(this.nativeObject.pointer, "getSRID_void_callback");
			this.register_getAttrFieldsRef_void(this.nativeObject.pointer, "getAttrFieldsRef_void_callback");
			this.register_getCustomerFieldsRef_void(this.nativeObject.pointer, "getCustomerFieldsRef_void_callback");
			this.register_getAttrFeature_ev_uint32(this.nativeObject.pointer, "getAttrFeature_ev_uint32_callback");
			this.register_insert_void(this.nativeObject.pointer, "insert_void_callback");
			this.register_isDatasetLocked_void(this.nativeObject.pointer, "isDatasetLocked_void_callback");
			this.register_lockDataset_void(this.nativeObject.pointer, "lockDataset_void_callback");
			this.register_unlockDataset_void(this.nativeObject.pointer, "unlockDataset_void_callback");
			this.register_updateSpatialIndex_IFeature_EntityDatasetOperType(this.nativeObject.pointer, "updateSpatialIndex_IFeature_EntityDatasetOperType_callback");
			this.register_getResourceDatasetRef_void(this.nativeObject.pointer, "getResourceDatasetRef_void_callback");
			this.register_refreshDataset_void(this.nativeObject.pointer, "refreshDataset_void_callback");
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
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
	
	public static EntityDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityDataset obj = null;
 		if(baseObj instanceof EntityDataset)
		{
			obj = (EntityDataset)baseObj;
		} else {
			obj = new EntityDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntityDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
