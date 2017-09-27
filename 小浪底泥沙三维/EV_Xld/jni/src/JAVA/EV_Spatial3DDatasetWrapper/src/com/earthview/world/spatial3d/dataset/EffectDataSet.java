package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效数据集
 */
public class EffectDataSet extends com.earthview.world.spatial.geodataset.Ifeatureclass {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSet", new EffectDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSetProxy", new EffectDataSetClassFactory());
	}

	native private long getFeatures_void(long pNativeObject);
	/**
	 * 获得所有数据集下的feature
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectFeatureVector,feature
	 */
	public com.earthview.world.spatial3d.dataset.EffectFeatureVector getFeatures()
	{
		long returnValue = getFeatures_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.EffectFeatureVector __returnValue = new com.earthview.world.spatial3d.dataset.EffectFeatureVector(CreatedWhenConstruct.CWC_NotToCreate, "CEffectFeatureVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectFeatureVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEffectFeatureVector");
		}
		return __returnValue;
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 当数据集表有修改时，刷新数据
	 * @param  
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private int getMaxID_void(long pNativeObject);
	/**
	 * 取得最大的ID
	 * @return ev_int32,返回的编码
	 */
	public int getMaxID()
	{
		int returnValue = getMaxID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSrid_void(long pNativeObject);
	/**
	 * 取得所属坐标系的ID编码
	 * @param  
	 * @return ev_int32,返回的编码
	 */
	public int getSrid()
	{
		int returnValue = getSrid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long addEffectInstance_CEffectInstance(long pNativeObject, long val);
	/**
	 * 插入特效实例表
	 * @param val EarthView::World::Spatial3D::Dataset::CEffectInstance值
	 * @return ev_uint32,返回主键
	 */
	public long addEffectInstance(com.earthview.world.spatial3d.dataset.EffectInstance val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = addEffectInstance_CEffectInstance(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean deleteEffectInstance_ev_uint32(long pNativeObject, long id);
	/**
	 * 删除特效实例
	 * @param id EVID
	 * @return ev_bool,删除成功，返回true;删除失败，返回false
	 */
	public boolean deleteEffectInstance(long id)
	{
		long idParamValue = id;
		boolean returnValue = deleteEffectInstance_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean updateEffectInstance_CEffectInstance(long pNativeObject, long val);
	/**
	 * 修改特效实例
	 * @param val 特效实例
	 * @return ev_bool,更新成功，返回true;更新失败，返回false
	 */
	public boolean updateEffectInstance(com.earthview.world.spatial3d.dataset.EffectInstance val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = updateEffectInstance_CEffectInstance(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean getEffectInstanceById_ev_uint32_CEffectInstance(long pNativeObject, long id, long val);
	/**
	 * 通过主键获取特效实例
	 * @param id EVID
	 * @return EarthView::World::Spatial3D::Dataset::CEffectInstance,特效实例
	 */
	public boolean getEffectInstanceById(long id, com.earthview.world.spatial3d.dataset.EffectInstance val)
	{
		long idParamValue = id;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = getEffectInstanceById_ev_uint32_CEffectInstance(this.nativeObject.pointer, idParamValue, valParamValue);
		return returnValue;
	}
	native private long getEffectInstances_void(long pNativeObject);
	/**
	 * 查询出所有的特效实例
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectInstanceVector,返回特效实例信息集合
	 */
	public com.earthview.world.spatial3d.dataset.EffectInstanceVector getEffectInstances()
	{
		long returnValue = getEffectInstances_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.dataset.EffectInstanceVector __returnValue = new com.earthview.world.spatial3d.dataset.EffectInstanceVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CEffectInstanceVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EffectInstanceVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEffectInstanceVector");
		}
		return __returnValue;
	}
	native private boolean removeFeatureBuffer_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过feature的ID从数据集里移除feature
	 * @param id 特效ID
	 * @return EarthView::World::Spatial3D::Dataset::CEffectInfo*,特效信息
	 */
	public boolean removeFeatureBuffer(long id)
	{
		long idParamValue = id;
		boolean returnValue = removeFeatureBuffer_ev_uint32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	native private boolean getEffectInfoById_ev_uint32_CEffectInfo(long pNativeObject, long id, long info);
	/**
	 * 根据特效ID查找EffectInfo
	 * @param id 特效ID
	 * @param info 查询到的EarthView::World::Spatial3D::Dataset::CEffectInfo
	 * @return 操作是否成功
	 */
	public boolean getEffectInfoById(long id, com.earthview.world.spatial3d.dataset.EffectInfo info)
	{
		long idParamValue = id;
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = getEffectInfoById_ev_uint32_CEffectInfo(this.nativeObject.pointer, idParamValue, infoParamValue);
		return returnValue;
	}
	native private void getResourceIdsByEffectID_ev_uint32_CStringArray(long pNativeObject, long effectId, long resouceIds);
	/**
	 * 根据特效ID查找相应特效资源ID集合
	 * @param id 特效ID
	 * @param resouceIds 特效资源ID集合
	 */
	public void getResourceIdsByEffectID(long effectId, com.earthview.world.core.StringArray resouceIds)
	{
		long effectIdParamValue = effectId;
		long resouceIdsParamValue = resouceIds.nativeObject.pointer;
		getResourceIdsByEffectID_ev_uint32_CStringArray(this.nativeObject.pointer, effectIdParamValue, resouceIdsParamValue);
	}
	native private boolean getResourceByID_ev_uint32_CEffectResourceInfo(long pNativeObject, long id, long val);
	/**
	 * 通过资源ID获取资源信息
	 * @param id 资源ID
	 * @param val 查询到的资源的对象EarthView::World::Spatial3D::Dataset::CEffectResourceInfo
	 * @return 数据操作是否成功
	 */
	public boolean getResourceByID(long id, com.earthview.world.spatial3d.dataset.EffectResourceInfo val)
	{
		long idParamValue = id;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = getResourceByID_ev_uint32_CEffectResourceInfo(this.nativeObject.pointer, idParamValue, valParamValue);
		return returnValue;
	}
	native private long addEffect_ev_uint32_CEffectInfoVector_CStringArray(long pNativeObject, long effectId, long infoVec, long scriptArray);
	/**
	 * 将EV_Effect表中相关的资源和Effect插入到数据集相关的表中
	 * @param effect 
	 * @return ev_uint32,数据集Effect表中新插入的EffectID
	 */
	public long addEffect(long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector infoVec, com.earthview.world.core.StringArray scriptArray)
	{
		long effectIdParamValue = effectId;
		long infoVecParamValue = infoVec.nativeObject.pointer;
		long scriptArrayParamValue = scriptArray.nativeObject.pointer;
		long returnValue = addEffect_ev_uint32_CEffectInfoVector_CStringArray(this.nativeObject.pointer, effectIdParamValue, infoVecParamValue, scriptArrayParamValue);
		return returnValue;
	}
	native private void updateEffect_ev_uint32_CEffectInfoVector_CStringArray(long pNativeObject, long effectId, long infoVec, long scriptArray);
	/**
	 * 更新相应的Effect记录
	 * @param effect Effect对象
	 */
	public void updateEffect(long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector infoVec, com.earthview.world.core.StringArray scriptArray)
	{
		long effectIdParamValue = effectId;
		long infoVecParamValue = infoVec.nativeObject.pointer;
		long scriptArrayParamValue = scriptArray.nativeObject.pointer;
		updateEffect_ev_uint32_CEffectInfoVector_CStringArray(this.nativeObject.pointer, effectIdParamValue, infoVecParamValue, scriptArrayParamValue);
	}
	native private long addEffectInfo_CEffectInfo(long pNativeObject, long info);
	/**
	 * 插入一条Effect对象信息，并更新与其相关联的表
	 * @param info Effect对象信息
	 * @return ev_uint32,最后添加进去的特效ID
	 */
	public long addEffectInfo(com.earthview.world.spatial3d.dataset.EffectInfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		long returnValue = addEffectInfo_CEffectInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateEffectInfo_CEffectInfo(long pNativeObject, long info);
	/**
	 * 更新一条Effect对象信息
	 * @param info Effect对象信息
	 * @return ev_bool,更新成功，返回true;更新失败，返回false
	 */
	public boolean updateEffectInfo(com.earthview.world.spatial3d.dataset.EffectInfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateEffectInfo_CEffectInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private int getFeatureClassType_void(long pNativeObject);
	/**
	 * 获取特效要素类型
	 * @return EarthView::World::Spatial::GeoDataset::EVFeatureClassType,特效要素类类型
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

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 几何体类型
	 * @return EarthView::World::Spatial::Geometry::EVGeometryType,几何体类型
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

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * 获得数据集表里的字段集合
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
	 * 获得字段的个数
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
	 * 通过索引返回具体的字段对象
	 * @param index 字段的索引号
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
	 * 通过字段名称来获得字段所在的索引号
	 * @param fieldName 字段名称
	 * @return 返回字段的索引号
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

	native private long getGeometryField_void(long pNativeObject);
	/**
	 * 获得Geometry字段对象（在特效数据集中，没有使用此对象，所以一直返回NULL)
	 * @return Geometry字段对象
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
	 * 获得主键的字段对象
	 * @return 字段对象
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

	native private int getSpatialIndexEnum_void(long pNativeObject);
	/**
	 * 获得空间索引类型
	 * @return 控件索引类型枚举
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum()
	{
		int returnValue = getSpatialIndexEnum_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialIndexEnum.toEnum(returnValue);
	}
	native private int getSpatialIndexEnum_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVSpatialIndexEnum getSpatialIndexEnum_NoVirtual()
	{
		int returnValue = getSpatialIndexEnum_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialIndexEnum.toEnum(returnValue);
	}

	native private long getFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 通过Feature的ID来获得Feature对象
	 * @param id 
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

	native private long query_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 通过筛选器来获得Feature的迭代器
	 * @param filter 
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
	 * 按照指定条件，进行选择
	 * @param filter 指定空间索引类型
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

	native private long getFeatureCount_IQueryFilter(long pNativeObject, long filter);
	/**
	 * 获取指定查询条件的要素数目
	 * @param filter 查询条件
	 * @return 要素数目
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

	native private boolean createSpatialIndex_EVSpatialIndexEnum(long pNativeObject, int spaIndex);
	/**
	 * 为数据集，创建指定空间索引
	 * @param spaIndex 指定空间索引类型
	 * @return ture，成功；false，失败
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

	native private boolean rebulidSpatialIndex_void(long pNativeObject);
	/**
	 * 重建空间索引
	 * @return true，成功；false，失败
	 */
	public boolean rebulidSpatialIndex()
	{
		boolean returnValue = rebulidSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebulidSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean rebulidSpatialIndex_NoVirtual()
	{
		boolean returnValue = rebulidSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean deleteSpatialIndex_void(long pNativeObject);
	/**
	 * 删除空间索引
	 * @return true，成功；false，失败
	 */
	public boolean deleteSpatialIndex()
	{
		boolean returnValue = deleteSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deleteSpatialIndex_void_NoVirtual(long pNativeObject);
	protected boolean deleteSpatialIndex_NoVirtual()
	{
		boolean returnValue = deleteSpatialIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean deleteField_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteField_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除指定索引的字段
	 * @param index 指定索引
	 * @return ture，成功；false，失败
	 */
	public boolean deleteField(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean deleteField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean deleteField_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = deleteField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long createFeatureBuffer_void(long pNativeObject);
	/**
	 * 创建要素缓存对象，内存中创建，用于一次性写入数据集。
	 * @return 要素对象
	 */
	public com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer()
	{
		long returnValue = createFeatureBuffer_void(this.nativeObject.pointer);
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
	native private long createFeatureBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature createFeatureBuffer_NoVirtual()
	{
		long returnValue = createFeatureBuffer_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean insert_IFeature(long pNativeObject, long feature);
	/**
	 * 在数据集上，插入新要素。
	 * @param feature 返回的要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean insert(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}
	native private boolean insert_IFeature_NoVirtual(long pNativeObject, long feature);
	protected boolean insert_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = insert_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}

	native private long insertFeatureBuffer_IFeature(long pNativeObject, long feature);
	/**
	 * 插入已知要素到数据集中
	 * @param buffer 指定要素对象
	 * @return 返回插入索引
	 */
	public long insertFeatureBuffer(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}
	native private long insertFeatureBuffer_IFeature_NoVirtual(long pNativeObject, long feature);
	protected long insertFeatureBuffer_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		long returnValue = insertFeatureBuffer_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}

	native private boolean update_IFeature(long pNativeObject, long feature);
	/**
	 * 更新已知要素
	 * @param buffer 要素对象
	 * @return ture，成功；false，失败
	 */
	public boolean update(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = update_IFeature(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}
	native private boolean update_IFeature_NoVirtual(long pNativeObject, long feature);
	protected boolean update_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		boolean returnValue = update_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
		return returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取数据集的范围
	 * @return 包围盒对象
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
	 * 获取数据集的空间坐标系参考对象
	 * @return 空间坐标参考系对象，内部引用，无需释放
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

	native private boolean deleteFeature_ev_uint32(long pNativeObject, long id);
	/**
	 * 删除指定ID的要素
	 * @param id 指定ID
	 * @return ture，成功；false，失败
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

	native private long createTableProxy_void(long pNativeObject);
	/**
	 * 创建一个数据表的代理对象。
	 */
	public com.earthview.world.spatial.geodataset.Itableproxy createTableProxy()
	{
		long returnValue = createTableProxy_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}
	native private long createTableProxy_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Itableproxy createTableProxy_NoVirtual()
	{
		long returnValue = createTableProxy_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Itableproxy __returnValue = new com.earthview.world.spatial.geodataset.Itableproxy(CreatedWhenConstruct.CWC_NotToCreate, "ITableProxy");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Itableproxy)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITableProxy");
		}
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::EVDatasetType,数据集类型
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
	 * @return EVString,数据集名称
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

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return ev_uint64,数据集版本号
	 */
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

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据集描述
	 * @param  
	 * @return EVString,数据集描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getUpdateTime_void(long pNativeObject);
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return EVString,数据集更新时间
	 */
	public String getUpdateTime()
	{
		String returnValue = getUpdateTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getUpdateTime_void_NoVirtual(long pNativeObject);
	protected String getUpdateTime_NoVirtual()
	{
		String returnValue = getUpdateTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean hasSubDataset_void(long pNativeObject);
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return ev_bool,是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		boolean returnValue = hasSubDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSubDataset_void_NoVirtual(long pNativeObject);
	protected boolean hasSubDataset_NoVirtual()
	{
		boolean returnValue = hasSubDataset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return EarthView::World::Spatial::GeoDataset::IDataSource*,数据集所在数据源对象指针
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

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return ev_bool,是，返回true;否则，返回false
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
	 * @return ev_bool,是，返回true;否则，返回false
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
	 * @return ev_bool,开启编辑成功，返回true；否则，返回false
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

	native private boolean stopEditing_ev_bool(long pNativeObject, boolean isSave);
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return ev_bool,结束编辑成功，返回true;否则，返回false
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

	protected  boolean saveEditing_void_callback()
	{
		boolean returnValue = saveEditing();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean saveEditing_void(long pNativeObject);
	/**
	 * 保存数据。
	 * @param  
	 * @return ev_bool,保存成功，返回true;否则，返回false
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

	native private boolean isBeginEditingOperation_void(long pNativeObject);
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return ev_bool,是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		boolean returnValue = isBeginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBeginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean isBeginEditingOperation_NoVirtual()
	{
		boolean returnValue = isBeginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean beginEditingOperation_void(long pNativeObject);
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return ev_bool,开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		boolean returnValue = beginEditingOperation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean beginEditingOperation_void_NoVirtual(long pNativeObject);
	protected boolean beginEditingOperation_NoVirtual()
	{
		boolean returnValue = beginEditingOperation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean endEditingOperation_ev_bool(long pNativeObject, boolean isConfirm);
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return ev_bool,结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}
	native private boolean endEditingOperation_ev_bool_NoVirtual(long pNativeObject, boolean isConfirm);
	protected boolean endEditingOperation_NoVirtual(boolean isConfirm)
	{
		boolean isConfirmParamValue = isConfirm;
		boolean returnValue = endEditingOperation_ev_bool_NoVirtual(this.nativeObject.pointer, isConfirmParamValue);
		return returnValue;
	}

	native private boolean isDatasetLocked_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean isDatasetLocked()
	{
		boolean returnValue = isDatasetLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean lockDataset_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean lockDataset()
	{
		boolean returnValue = lockDataset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void unlockDataset_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void unlockDataset()
	{
		unlockDataset_void(this.nativeObject.pointer);
	}
	public EffectDataSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectDataSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_deleteField_ev_uint32(long pNativeObject, String method);
	native protected void register_saveEditing_void(long pNativeObject, String method);
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
			this.register_deleteField_ev_uint32(this.nativeObject.pointer, "deleteField_ev_uint32_callback");
			this.register_saveEditing_void(this.nativeObject.pointer, "saveEditing_void_callback");
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
	
	public static EffectDataSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectDataSet obj = null;
 		if(baseObj instanceof EffectDataSet)
		{
			obj = (EffectDataSet)baseObj;
		} else {
			obj = new EffectDataSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectDataSet");
			obj.increaseCast();
		}

		return obj;
	}
}
