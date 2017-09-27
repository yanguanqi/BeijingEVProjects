package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateFeature extends com.earthview.world.spatial.geodataset.Ifeature {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature", new MeshTemplateFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCMeshTemplateFeatureProxy", new MeshTemplateFeatureClassFactory());
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取模型实体要素ID
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

	native private void getValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * 根据字段下标获取字段的值
	 * @param value 返回的字段的值
	 * @param index 字段下标
	 * @return ev_bool
	 */
	public void getValue(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}
	native private void getValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long value, long index);
	protected void getValue_NoVirtual(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		getValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}

	protected  void getValue_CVariant_EVString_callback(long value, String name)
	{
		com.earthview.world.core.Variant valueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		valueParamValue.setDelegate(true);
		valueParamValue.setInstancePointer(new InstancePointer(value));
		IClassFactory valueParamValueClassFactory = GlobalClassFactoryMap.get(valueParamValue.getCppInstanceTypeName());
		if (valueParamValueClassFactory != null)
		{
			valueParamValue.setDelegate(true);
			valueParamValue = (com.earthview.world.core.Variant)valueParamValueClassFactory.create();
			valueParamValue.setDelegate(true);
			valueParamValue.setInstancePointer(new InstancePointer(value));
		}
		String nameParamValue = name;
		getValue(valueParamValue, nameParamValue);
	}

	native private void getValue_CVariant_EVString(long pNativeObject, long value, String name);
	/**
	 * 根据字段名称获取字段的值
	 * @param value 返回的字段的值
	 * @param name 字段名称
	 * @return ev_void
	 */
	public void getValue(com.earthview.world.core.Variant value, String name)
	{
		long valueParamValue = value.nativeObject.pointer;
		String nameParamValue = name;
		getValue_CVariant_EVString(this.nativeObject.pointer, valueParamValue, nameParamValue);
	}
	native private void getValue_CVariant_EVString_NoVirtual(long pNativeObject, long value, String name);
	protected void getValue_NoVirtual(com.earthview.world.core.Variant value, String name)
	{
		long valueParamValue = value.nativeObject.pointer;
		String nameParamValue = name;
		getValue_CVariant_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue, nameParamValue);
	}

	native private long getGeometryRef_void(long pNativeObject);
	/**
	 * 获取GEOMETRY的引用
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

	native private void setValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * 根据下标设置字段值
	 * @param value 设置的字段值
	 * @param index 字段下标
	 * @return ev_void
	 */
	public void setValue(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}
	native private void setValue_CVariant_ev_uint32_NoVirtual(long pNativeObject, long value, long index);
	protected void setValue_NoVirtual(com.earthview.world.core.Variant value, long index)
	{
		long valueParamValue = value.nativeObject.pointer;
		long indexParamValue = index;
		setValue_CVariant_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue, indexParamValue);
	}

	protected  void setValue_CVariant_EVString_callback(long value, String name)
	{
		com.earthview.world.core.Variant valueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		valueParamValue.setDelegate(true);
		valueParamValue.setInstancePointer(new InstancePointer(value));
		IClassFactory valueParamValueClassFactory = GlobalClassFactoryMap.get(valueParamValue.getCppInstanceTypeName());
		if (valueParamValueClassFactory != null)
		{
			valueParamValue.setDelegate(true);
			valueParamValue = (com.earthview.world.core.Variant)valueParamValueClassFactory.create();
			valueParamValue.setDelegate(true);
			valueParamValue.setInstancePointer(new InstancePointer(value));
		}
		String nameParamValue = name;
		setValue(valueParamValue, nameParamValue);
	}

	native private void setValue_CVariant_EVString(long pNativeObject, long value, String name);
	/**
	 * 根据下标名称设置字段值
	 * @param value 设置的字段值
	 * @param name 字段名称
	 * @return ev_bool
	 */
	public void setValue(com.earthview.world.core.Variant value, String name)
	{
		long valueParamValue = value.nativeObject.pointer;
		String nameParamValue = name;
		setValue_CVariant_EVString(this.nativeObject.pointer, valueParamValue, nameParamValue);
	}
	native private void setValue_CVariant_EVString_NoVirtual(long pNativeObject, long value, String name);
	protected void setValue_NoVirtual(com.earthview.world.core.Variant value, String name)
	{
		long valueParamValue = value.nativeObject.pointer;
		String nameParamValue = name;
		setValue_CVariant_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue, nameParamValue);
	}

	native private boolean deleteFeature_void(long pNativeObject);
	/**
	 * 删除要素
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

	protected  void setMeshDataRef_ev_uint32_callback(long meshID)
	{
		long meshIDParamValue = meshID;
		setMeshDataRef(meshIDParamValue);
	}

	native private void setMeshDataRef_ev_uint32(long pNativeObject, long meshID);
	/**
	 * 绑定已入库的模型，此接口在N个INSTANCE同时引用同一个模型时使用
	 * @param meshID 已入库模型的ID
	 * @return ev_void
	 */
	public void setMeshDataRef(long meshID)
	{
		long meshIDParamValue = meshID;
		setMeshDataRef_ev_uint32(this.nativeObject.pointer, meshIDParamValue);
	}
	native private void setMeshDataRef_ev_uint32_NoVirtual(long pNativeObject, long meshID);
	protected void setMeshDataRef_NoVirtual(long meshID)
	{
		long meshIDParamValue = meshID;
		setMeshDataRef_ev_uint32_NoVirtual(this.nativeObject.pointer, meshIDParamValue);
	}

	protected  String getPropertyType_void_callback()
	{
		String returnValue = getPropertyType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getPropertyType_void(long pNativeObject);
	/**
	 * 获取属性类别
	 * @return EVString，属性类别名称
	 */
	public String getPropertyType()
	{
		String returnValue = getPropertyType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getPropertyType_void_NoVirtual(long pNativeObject);
	protected String getPropertyType_NoVirtual()
	{
		String returnValue = getPropertyType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getPropertyFieldRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = getPropertyFieldRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPropertyFieldRef_void(long pNativeObject);
	/**
	 * 获取属性类别字段结构
	 * @return EarthView::World::Spatial::GeoDataset::IFields*，失败返回NULL
	 */
	public com.earthview.world.spatial.geodataset.Ifields getPropertyFieldRef()
	{
		long returnValue = getPropertyFieldRef_void(this.nativeObject.pointer);
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
	native private long getPropertyFieldRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getPropertyFieldRef_NoVirtual()
	{
		long returnValue = getPropertyFieldRef_void_NoVirtual(this.nativeObject.pointer);
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
	 * 克隆
	 * @param  
	 * @return 克隆的要素
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

	public MeshTemplateFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshTemplateFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取要素的几何体类型
	 * @return 几何体类型枚举
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		return super.getGeometryType_NoVirtual();
	}
	/**
	 * 获取要素的外包围盒
	 * @return 内部引用，外部无需释放
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelopeRef()
	{
		return super.getEnvelopeRef_NoVirtual();
	}
	/**
	 * 在数据集上保存要素
	 * @return true，成功；false，失败
	 */
	public boolean saveFeature()
	{
		return super.saveFeature_NoVirtual();
	}
	
	native protected void register_getValue_CVariant_EVString(long pNativeObject, String method);
	native protected void register_setValue_CVariant_EVString(long pNativeObject, String method);
	native protected void register_setMeshDataRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getPropertyType_void(long pNativeObject, String method);
	native protected void register_getPropertyFieldRef_void(long pNativeObject, String method);
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
			this.register_setMeshDataRef_ev_uint32(this.nativeObject.pointer, "setMeshDataRef_ev_uint32_callback");
			this.register_getPropertyType_void(this.nativeObject.pointer, "getPropertyType_void_callback");
			this.register_getPropertyFieldRef_void(this.nativeObject.pointer, "getPropertyFieldRef_void_callback");
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
	
	public static MeshTemplateFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshTemplateFeature obj = null;
 		if(baseObj instanceof MeshTemplateFeature)
		{
			obj = (MeshTemplateFeature)baseObj;
		} else {
			obj = new MeshTemplateFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshTemplateFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
