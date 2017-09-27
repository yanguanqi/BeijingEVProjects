package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素类接口
 */
public class Ifeature extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IFeature", new IfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIFeatureProxy", new IfeatureClassFactory());
	}

	protected  long getID_void_callback()
	{
		long returnValue = getID();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getID_void(long pNativeObject);
	/**
	 * 获取要素ID
	 * @return ID号，一般情况下，大于0
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

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取要素的几何体类型
	 * @return 几何体类型枚举
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

	protected  long getFieldsRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = getFieldsRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFieldsRef_void(long pNativeObject);
	/**
	 * 获取要素字段集合
	 * @return 字段集合，内部引用，外部无需释放
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

	protected  long getFieldCount_void_callback()
	{
		long returnValue = getFieldCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取要素字段数目
	 * @return 字段数目
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

	protected  long getFieldRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.geodataset.Ifield returnValue = getFieldRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFieldRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的要素字段
	 * @param index 指定索引
	 * @return 字段对象，内部引用，外部无需释放
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

	protected  int findField_EVString_callback(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField(fieldNameParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	/**
	 * 找到指定字段名称的字段
	 * @param fieldName 字段名称
	 * @return 如果找到，返回该索引，如果没有找到，返回-1
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

	protected  void getValue_CVariant_ev_uint32_callback(long value, long index)
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
		long indexParamValue = index;
		getValue(valueParamValue, indexParamValue);
	}

	native private void getValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * 获取指定索引的字段值
	 * @param value 输出，字段值
	 * @param index 指定索引
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

	protected  long getGeometryRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = getGeometryRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeometryRef_void(long pNativeObject);
	/**
	 * 获取要素的几何体对象
	 * @return 内部引用，外部无需释放
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

	protected  long getEnvelopeRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelopeRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelopeRef_void(long pNativeObject);
	/**
	 * 获取要素的外包围盒
	 * @return 内部引用，外部无需释放
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

	protected  void setGeometry_IGeometry_callback(long geom)
	{
		com.earthview.world.spatial.geometry.Igeometry geomParamValue = (geom == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geomParamValue != null)
		{
		geomParamValue.setDelegate(true);
		geomParamValue.setInstancePointer(new InstancePointer(geom));
		IClassFactory geomParamValueClassFactory = GlobalClassFactoryMap.get(geomParamValue.getCppInstanceTypeName());
		if (geomParamValueClassFactory != null)
		{
			geomParamValue.setDelegate(true);
			geomParamValue = (com.earthview.world.spatial.geometry.Igeometry)geomParamValueClassFactory.create();
			geomParamValue.setDelegate(true);
			geomParamValue.setInstancePointer(new InstancePointer(geom));
		}
		}
		setGeometry(geomParamValue);
	}

	native private void setGeometry_IGeometry(long pNativeObject, long geom);
	/**
	 * 设置要素的几何体对象，内部拷贝该几何体
	 * @param geom 几何体对象
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

	protected  void setValue_CVariant_ev_uint32_callback(long value, long index)
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
		long indexParamValue = index;
		setValue(valueParamValue, indexParamValue);
	}

	native private void setValue_CVariant_ev_uint32(long pNativeObject, long value, long index);
	/**
	 * 设置指定索引的字段值
	 * @param value 字段值
	 * @param index 指定索引
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

	protected  boolean deleteFeature_void_callback()
	{
		boolean returnValue = deleteFeature();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteFeature_void(long pNativeObject);
	/**
	 * 在数据集上删除要素
	 * @return true，成功；false，失败
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

	protected  boolean saveFeature_void_callback()
	{
		boolean returnValue = saveFeature();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean saveFeature_void(long pNativeObject);
	/**
	 * 在数据集上保存要素
	 * @return true，成功；false，失败
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifeature returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆要素
	 * @return 返回克隆的要素，外部释放
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

	public Ifeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ifeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static Ifeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ifeature obj = null;
 		if(baseObj instanceof Ifeature)
		{
			obj = (Ifeature)baseObj;
		} else {
			obj = new Ifeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
