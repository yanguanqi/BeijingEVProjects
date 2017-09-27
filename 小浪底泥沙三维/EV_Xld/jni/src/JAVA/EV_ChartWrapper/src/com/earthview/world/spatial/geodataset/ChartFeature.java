package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图要素类
 */
public class ChartFeature extends com.earthview.world.spatial.geodataset.Ifeature {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartFeature", new ChartFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartFeatureProxy", new ChartFeatureClassFactory());
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

	native private void getValue_CVariant_EVString(long pNativeObject, long value, String name);
	/**
	 * 获取指定字段的字段值
	 * @param value 输出，字段值
	 * @param name 字段名
	 */
	public void getValue(com.earthview.world.core.Variant value, String name)
	{
		long valueParamValue = value.nativeObject.pointer;
		String nameParamValue = name;
		getValue_CVariant_EVString(this.nativeObject.pointer, valueParamValue, nameParamValue);
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

	native private String getClassName_void(long pNativeObject);
	/**
	 * 获取要素所属物标类名称
	 * @return 所属物标类名称
	 */
	public String getClassName()
	{
		String returnValue = getClassName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStringValue_EVString(long pNativeObject, String name);
	/**
	 * 获取某字段字符串型属性值
	 * @param name 字段名
	 * @return 属性值
	 */
	public BytePointer getStringValue(String name)
	{
		String nameParamValue = name;
		long returnValue = getStringValue_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getChartType_void(long pNativeObject);
	/**
	 * 获取海图要素类型
	 * @param  
	 * @return 海图要素类型
	 */
	public com.earthview.world.spatial.geodataset.EVChartGeomType getChartType()
	{
		int returnValue = getChartType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVChartGeomType.toEnum(returnValue);
	}
	native private long getMinScale_void(long pNativeObject);
	/**
	 * 获取最小比例尺
	 * @param  
	 * @return 比例尺
	 */
	public long getMinScale()
	{
		long returnValue = getMinScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxScale_void(long pNativeObject);
	/**
	 * 获取最大比例尺
	 * @param  
	 * @return 比例尺
	 */
	public long getMaxScale()
	{
		long returnValue = getMaxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ChartFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置要素的几何体对象，内部拷贝该几何体
	 * @param geom 几何体对象
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry geom)
	{
		super.setGeometry_NoVirtual(geom);
	}
	/**
	 * 设置指定索引的字段值
	 * @param value 字段值
	 * @param index 指定索引
	 */
	public void setValue(com.earthview.world.core.Variant value, long index)
	{
		super.setValue_NoVirtual(value, index);
	}
	/**
	 * 在数据集上删除要素
	 * @return true，成功；false，失败
	 */
	public boolean deleteFeature()
	{
		return super.deleteFeature_NoVirtual();
	}
	/**
	 * 在数据集上保存要素
	 * @return true，成功；false，失败
	 */
	public boolean saveFeature()
	{
		return super.saveFeature_NoVirtual();
	}
	/**
	 * 克隆要素
	 * @return 返回克隆的要素，外部释放
	 */
	public com.earthview.world.spatial.geodataset.Ifeature ev_clone()
	{
		return super.ev_clone_NoVirtual();
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
	
	public static ChartFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartFeature obj = null;
 		if(baseObj instanceof ChartFeature)
		{
			obj = (ChartFeature)baseObj;
		} else {
			obj = new ChartFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
