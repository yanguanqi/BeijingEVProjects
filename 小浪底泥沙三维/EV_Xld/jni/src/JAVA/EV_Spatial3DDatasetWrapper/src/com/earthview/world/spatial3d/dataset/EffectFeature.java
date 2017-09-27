package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效要素
 */
public class EffectFeature extends com.earthview.world.spatial.geodataset.Ifeature {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectFeature", new EffectFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectFeatureProxy", new EffectFeatureClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public EffectFeature() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEffectFeatureProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.dataset.EffectFeature".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isDelete_void(long pNativeObject);
	/**
	 * 此Feature是否被删除
	 * @param  
	 */
	public boolean isDelete()
	{
		boolean returnValue = isDelete_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsDelete_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置是否被删除
	 * @param val TRUE/FALSE
	 */
	public void setIsDelete(boolean val)
	{
		boolean valParamValue = val;
		setIsDelete_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isUpdate_void(long pNativeObject);
	/**
	 * 此Feature是否被修改
	 * @param  
	 */
	public boolean isUpdate()
	{
		boolean returnValue = isUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsUpdate_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置是否被修改
	 * @param val TRUE/FALSE
	 */
	public void setIsUpdate(boolean val)
	{
		boolean valParamValue = val;
		setIsUpdate_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean isNewFeature_void(long pNativeObject);
	/**
	 * 此Feature是否为新创建feature
	 * @param  
	 */
	public boolean isNewFeature()
	{
		boolean returnValue = isNewFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsNewFeature_ev_bool(long pNativeObject, boolean val);
	/**
	 * 设置是否为新建
	 * @param val TRUE/FALSE
	 */
	public void setIsNewFeature(boolean val)
	{
		boolean valParamValue = val;
		setIsNewFeature_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private long getID_void(long pNativeObject);
	/**
	 * 获取EffectInstance的ID
	 * @param  
	 * @return ev_uint32，返回ID
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

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取GEOMETRY类别
	 * @param  
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

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * 获取要素字段结构
	 * @param  
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
	 * @param  
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

	native private void getValue_CVariant_ev_uint32(long pNativeObject, long varValue, long index);
	/**
	 * 根据字段下标获取字段的值
	 * @param varValue 返回的字段的值
	 * @param index 字段下标
	 * @return ev_bool
	 */
	public void getValue(com.earthview.world.core.Variant varValue, long index)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32(this.nativeObject.pointer, varValueParamValue, indexParamValue);
	}
	native private void getValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long varValue, long index);
	protected void getValue_NoVirtual(com.earthview.world.core.Variant varValue, long index)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, varValueParamValue, indexParamValue);
	}

	protected  void getValue_CVariant_EVString_callback(long varValue, String name)
	{
		com.earthview.world.core.Variant varValueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		varValueParamValue.setDelegate(true);
		varValueParamValue.setInstancePointer(new InstancePointer(varValue));
		IClassFactory varValueParamValueClassFactory = GlobalClassFactoryMap.get(varValueParamValue.getCppInstanceTypeName());
		if (varValueParamValueClassFactory != null)
		{
			varValueParamValue.setDelegate(true);
			varValueParamValue = (com.earthview.world.core.Variant)varValueParamValueClassFactory.create();
			varValueParamValue.setDelegate(true);
			varValueParamValue.setInstancePointer(new InstancePointer(varValue));
		}
		String nameParamValue = name;
		getValue(varValueParamValue, nameParamValue);
	}

	native private void getValue_CVariant_EVString(long pNativeObject, long varValue, String name);
	/**
	 * 根据字段名称获取字段的值
	 * @param varValue 返回的字段的值
	 * @param name 字段名称
	 * @return ev_void
	 */
	public void getValue(com.earthview.world.core.Variant varValue, String name)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		String nameParamValue = name;
		getValue_CVariant_EVString(this.nativeObject.pointer, varValueParamValue, nameParamValue);
	}
	native private void getValue_CVariant_EVString_NoVirtual(long pNativeObject, long varValue, String name);
	protected void getValue_NoVirtual(com.earthview.world.core.Variant varValue, String name)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		String nameParamValue = name;
		getValue_CVariant_EVString_NoVirtual(this.nativeObject.pointer, varValueParamValue, nameParamValue);
	}

	native private long getGeometryRef_void(long pNativeObject);
	/**
	 * 获取GEOMETRY的引用
	 * @param  
	 * @return EarthView::World::Spatial::Geometry::IGeometry*，返回句柄
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometryRef()
	{
		long returnValue = getGeometryRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private long getGeometryRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getGeometryRef_NoVirtual()
	{
		long returnValue = getGeometryRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取包围盒相关参数
	 * @param  
	 * @return EarthView::World::Spatial::Geometry::IEnvelope*，失败则返回空
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

	native private void setGeometry_IGeometry(long pNativeObject, long geom);
	/**
	 * 设置GEOMETRY，可以快速设置模型、资源二进制字段
	 * @param geom GEOMETRY句柄
	 * @return ev_void
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		setGeometry_IGeometry(this.nativeObject.pointer, geomParamValue);
	}
	native private void setGeometry_IGeometry_NoVirtual(long pNativeObject, long geom);
	protected void setGeometry_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		setGeometry_IGeometry_NoVirtual(this.nativeObject.pointer, geomParamValue);
	}

	native private void setValue_CVariant_ev_uint32(long pNativeObject, long varValue, long index);
	/**
	 * 根据下标设置字段值
	 * @param varValue 设置的字段值
	 * @param index 字段下标
	 * @return ev_void
	 */
	public void setValue(com.earthview.world.core.Variant varValue, long index)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32(this.nativeObject.pointer, varValueParamValue, indexParamValue);
	}
	native private void setValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long varValue, long index);
	protected void setValue_NoVirtual(com.earthview.world.core.Variant varValue, long index)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, varValueParamValue, indexParamValue);
	}

	protected  void setValue_CVariant_EVString_callback(long varValue, String name)
	{
		com.earthview.world.core.Variant varValueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		varValueParamValue.setDelegate(true);
		varValueParamValue.setInstancePointer(new InstancePointer(varValue));
		IClassFactory varValueParamValueClassFactory = GlobalClassFactoryMap.get(varValueParamValue.getCppInstanceTypeName());
		if (varValueParamValueClassFactory != null)
		{
			varValueParamValue.setDelegate(true);
			varValueParamValue = (com.earthview.world.core.Variant)varValueParamValueClassFactory.create();
			varValueParamValue.setDelegate(true);
			varValueParamValue.setInstancePointer(new InstancePointer(varValue));
		}
		String nameParamValue = name;
		setValue(varValueParamValue, nameParamValue);
	}

	native private void setValue_CVariant_EVString(long pNativeObject, long varValue, String name);
	/**
	 * 根据下标名称设置字段值
	 * @param varValue 设置的字段值
	 * @param name 字段名称
	 * @return ev_bool
	 */
	public void setValue(com.earthview.world.core.Variant varValue, String name)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		String nameParamValue = name;
		setValue_CVariant_EVString(this.nativeObject.pointer, varValueParamValue, nameParamValue);
	}
	native private void setValue_CVariant_EVString_NoVirtual(long pNativeObject, long varValue, String name);
	protected void setValue_NoVirtual(com.earthview.world.core.Variant varValue, String name)
	{
		long varValueParamValue = varValue.nativeObject.pointer;
		String nameParamValue = name;
		setValue_CVariant_EVString_NoVirtual(this.nativeObject.pointer, varValueParamValue, nameParamValue);
	}

	native private boolean deleteFeature_void(long pNativeObject);
	/**
	 * 删除要素
	 * @param  
	 * @return ev_bool，成功TRUE，失败FALSE
	 */
	public boolean deleteFeature()
	{
		boolean returnValue = deleteFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean deleteFeature_void_NoVirtual(long pNativeObject);
	protected boolean deleteFeature_NoVirtual()
	{
		boolean returnValue = deleteFeature_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean saveFeature_void(long pNativeObject);
	/**
	 * 保存修改
	 * @param  
	 * @return ev_bool，成功TRUE，失败FALSE
	 */
	public boolean saveFeature()
	{
		boolean returnValue = saveFeature_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveFeature_void_NoVirtual(long pNativeObject);
	protected boolean saveFeature_NoVirtual()
	{
		boolean returnValue = saveFeature_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDataSet_IFeatureClass(long pNativeObject, long ref_fc);
	/**
	 * 设置数据集
	 * @param ref_fc CEffectDataSet指针
	 */
	public void setDataSet(com.earthview.world.spatial.geodataset.Ifeatureclass ref_fc)
	{
		long ref_fcParamValue = (ref_fc == null ? 0L : ref_fc.nativeObject.pointer);
		setDataSet_IFeatureClass(this.nativeObject.pointer, ref_fcParamValue);
	}
	native private long getDataSet_void(long pNativeObject);
	/**
	 * 获得数据集指针
	 * @param  
	 * @return 返回CEffectDataset指针
	 */
	public com.earthview.world.spatial.geodataset.Ifeatureclass getDataSet()
	{
		long returnValue = getDataSet_void(this.nativeObject.pointer);
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
	native private void setEffect_ev_uint32_CEffectInfoVector_CStringArray(long pNativeObject, long effectId, long infoVec, long scriptArray);
	public void setEffect(long effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector infoVec, com.earthview.world.core.StringArray scriptArray)
	{
		long effectIdParamValue = effectId;
		long infoVecParamValue = infoVec.nativeObject.pointer;
		long scriptArrayParamValue = scriptArray.nativeObject.pointer;
		setEffect_ev_uint32_CEffectInfoVector_CStringArray(this.nativeObject.pointer, effectIdParamValue, infoVecParamValue, scriptArrayParamValue);
	}
	native private void getEffect_ev_uint32_CEffectInfoVector_CStringArray(long pNativeObject, long effectId, long vec, long scripts);
	public void getEffect(UIntegerPointer effectId, com.earthview.world.spatial3d.dataset.EffectInfoVector vec, com.earthview.world.core.StringArray scripts)
	{
		long effectIdParamValue = effectId.nativeObject.pointer;
		long vecParamValue = vec.nativeObject.pointer;
		long scriptsParamValue = scripts.nativeObject.pointer;
		getEffect_ev_uint32_CEffectInfoVector_CStringArray(this.nativeObject.pointer, effectIdParamValue, vecParamValue, scriptsParamValue);
	}
	native private void setFields_IFields(long pNativeObject, long ref_fields);
	/**
	 * 设置Feature的字段信息
	 * @param fields 字段集合指针
	 */
	public void setFields(com.earthview.world.spatial.geodataset.Ifields ref_fields)
	{
		long ref_fieldsParamValue = (ref_fields == null ? 0L : ref_fields.nativeObject.pointer);
		setFields_IFields(this.nativeObject.pointer, ref_fieldsParamValue);
	}
	native private long getFields_void(long pNativeObject);
	/**
	 * 返回字段集合
	 * @param  
	 * @return 返回字段集合指针
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFields()
	{
		long returnValue = getFields_void(this.nativeObject.pointer);
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
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆方法
	 * @param  
	 * @return 返回克隆的指针，由外部释放
	 */
	public com.earthview.world.spatial.geodataset.Ifeature ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	public EffectFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getValue_CVariant_EVString(long pNativeObject, String method);
	native protected void register_setValue_CVariant_EVString(long pNativeObject, String method);
	native protected void register_getID_void(long pNativeObject, String method);
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_getFieldsRef_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldRef_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_getValue_CVariant_ev_uint32(long pNativeObject, String method);
	native protected void register_getGeometryRef_void(long pNativeObject, String method);
	native protected void register_getEnvelopeRef_void(long pNativeObject, String method);
	native protected void register_setGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_setValue_CVariant_ev_uint32(long pNativeObject, String method);
	native protected void register_deleteFeature_void(long pNativeObject, String method);
	native protected void register_saveFeature_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getValue_CVariant_EVString(this.nativeObject.pointer, "getValue_CVariant_EVString_callback");
			this.register_setValue_CVariant_EVString(this.nativeObject.pointer, "setValue_CVariant_EVString_callback");
			this.register_getID_void(this.nativeObject.pointer, "getID_void_callback");
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_getFieldsRef_void(this.nativeObject.pointer, "getFieldsRef_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldRef_ev_uint32(this.nativeObject.pointer, "getFieldRef_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_getValue_CVariant_ev_uint32(this.nativeObject.pointer, "getValue_CVariant_ev_uint32_callback");
			this.register_getGeometryRef_void(this.nativeObject.pointer, "getGeometryRef_void_callback");
			this.register_getEnvelopeRef_void(this.nativeObject.pointer, "getEnvelopeRef_void_callback");
			this.register_setGeometry_IGeometry(this.nativeObject.pointer, "setGeometry_IGeometry_callback");
			this.register_setValue_CVariant_ev_uint32(this.nativeObject.pointer, "setValue_CVariant_ev_uint32_callback");
			this.register_deleteFeature_void(this.nativeObject.pointer, "deleteFeature_void_callback");
			this.register_saveFeature_void(this.nativeObject.pointer, "saveFeature_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static EffectFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectFeature obj = null;
 		if(baseObj instanceof EffectFeature)
		{
			obj = (EffectFeature)baseObj;
		} else {
			obj = new EffectFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
