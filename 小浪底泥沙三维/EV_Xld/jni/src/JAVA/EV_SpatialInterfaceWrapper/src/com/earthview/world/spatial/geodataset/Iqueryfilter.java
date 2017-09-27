package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 查询条件，用于设置属性查询和空间查询条件
 */
public class Iqueryfilter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IQueryFilter", new IqueryfilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIQueryFilterProxy", new IqueryfilterClassFactory());
	}

	protected  String getFieldName_void_callback()
	{
		String returnValue = getFieldName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFieldName_void(long pNativeObject);
	/**
	 * 获取查询语句中字段名称多个字段名称，用","隔离
	 * @return 字段名称
	 */
	public String getFieldName()
	{
		String returnValue = getFieldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFieldName_void_NoVirtual(long pNativeObject);
	protected String getFieldName_NoVirtual()
	{
		String returnValue = getFieldName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getWhereClause_void_callback()
	{
		String returnValue = getWhereClause();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getWhereClause_void(long pNativeObject);
	/**
	 * 获取查询语句中WhereClause语句
	 * @return WhereClause语句
	 */
	public String getWhereClause()
	{
		String returnValue = getWhereClause_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getWhereClause_void_NoVirtual(long pNativeObject);
	protected String getWhereClause_NoVirtual()
	{
		String returnValue = getWhereClause_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getLimitNum_void_callback()
	{
		long returnValue = getLimitNum();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getLimitNum_void(long pNativeObject);
	/**
	 * 获取查询语句中Limit限制
	 * @return Limit限制，默认为0
	 */
	public long getLimitNum()
	{
		long returnValue = getLimitNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLimitNum_void_NoVirtual(long pNativeObject);
	protected long getLimitNum_NoVirtual()
	{
		long returnValue = getLimitNum_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getOffsetNum_void_callback()
	{
		long returnValue = getOffsetNum();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getOffsetNum_void(long pNativeObject);
	/**
	 * 获取查询语句中Offset限制
	 * @return Offset限制，默认为0
	 */
	public long getOffsetNum()
	{
		long returnValue = getOffsetNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getOffsetNum_void_NoVirtual(long pNativeObject);
	protected long getOffsetNum_NoVirtual()
	{
		long returnValue = getOffsetNum_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getQueryGeometryRef_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = getQueryGeometryRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getQueryGeometryRef_void(long pNativeObject);
	/**
	 * 获取空间查询的几何体
	 * @return 几何体对象，内部引用。
	 */
	public com.earthview.world.spatial.geometry.Igeometry getQueryGeometryRef()
	{
		long returnValue = getQueryGeometryRef_void(this.nativeObject.pointer);
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
	native private long getQueryGeometryRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getQueryGeometryRef_NoVirtual()
	{
		long returnValue = getQueryGeometryRef_void_NoVirtual(this.nativeObject.pointer);
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

	protected  int getSpatialRelation_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType returnValue = getSpatialRelation();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSpatialRelation_void(long pNativeObject);
	/**
	 * 获取空间查询的空间关系条件
	 * @return 空间关系条件
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType getSpatialRelation()
	{
		int returnValue = getSpatialRelation_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType.toEnum(returnValue);
	}
	native private int getSpatialRelation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType getSpatialRelation_NoVirtual()
	{
		int returnValue = getSpatialRelation_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType.toEnum(returnValue);
	}

	protected  int getQueryMode_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVQueryModeType returnValue = getQueryMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getQueryMode_void(long pNativeObject);
	/**
	 * 获取查询中的查询模式
	 * @return 查询模式
	 */
	public com.earthview.world.spatial.geodataset.EVQueryModeType getQueryMode()
	{
		int returnValue = getQueryMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVQueryModeType.toEnum(returnValue);
	}
	native private int getQueryMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVQueryModeType getQueryMode_NoVirtual()
	{
		int returnValue = getQueryMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVQueryModeType.toEnum(returnValue);
	}

	protected  void setFieldName_EVString_callback(String names)
	{
		String namesParamValue = names;
		setFieldName(namesParamValue);
	}

	native private void setFieldName_EVString(long pNativeObject, String names);
	/**
	 * 设置查询语句中查询字段
	 * @param names 字段名称，多个字段，用","隔离
	 */
	public void setFieldName(String names)
	{
		String namesParamValue = names;
		setFieldName_EVString(this.nativeObject.pointer, namesParamValue);
	}
	native private void setFieldName_EVString_NoVirtual(long pNativeObject, String names);
	protected void setFieldName_NoVirtual(String names)
	{
		String namesParamValue = names;
		setFieldName_EVString_NoVirtual(this.nativeObject.pointer, namesParamValue);
	}

	protected  void setWhereClause_EVString_callback(String whereclause)
	{
		String whereclauseParamValue = whereclause;
		setWhereClause(whereclauseParamValue);
	}

	native private void setWhereClause_EVString(long pNativeObject, String whereclause);
	/**
	 * 设置查询语句中WhereClause语句
	 * @param whereclause WhereClause语句
	 */
	public void setWhereClause(String whereclause)
	{
		String whereclauseParamValue = whereclause;
		setWhereClause_EVString(this.nativeObject.pointer, whereclauseParamValue);
	}
	native private void setWhereClause_EVString_NoVirtual(long pNativeObject, String whereclause);
	protected void setWhereClause_NoVirtual(String whereclause)
	{
		String whereclauseParamValue = whereclause;
		setWhereClause_EVString_NoVirtual(this.nativeObject.pointer, whereclauseParamValue);
	}

	protected  void setLimitNum_ev_uint32_callback(long limit)
	{
		long limitParamValue = limit;
		setLimitNum(limitParamValue);
	}

	native private void setLimitNum_ev_uint32(long pNativeObject, long limit);
	/**
	 * 设置查询语句中Limit限制
	 * @param limit 返回限制
	 */
	public void setLimitNum(long limit)
	{
		long limitParamValue = limit;
		setLimitNum_ev_uint32(this.nativeObject.pointer, limitParamValue);
	}
	native private void setLimitNum_ev_uint32_NoVirtual(long pNativeObject, long limit);
	protected void setLimitNum_NoVirtual(long limit)
	{
		long limitParamValue = limit;
		setLimitNum_ev_uint32_NoVirtual(this.nativeObject.pointer, limitParamValue);
	}

	protected  void setOffsetNum_ev_uint32_callback(long offset)
	{
		long offsetParamValue = offset;
		setOffsetNum(offsetParamValue);
	}

	native private void setOffsetNum_ev_uint32(long pNativeObject, long offset);
	/**
	 * 设置查询语句中Offset限制
	 * @param offset offset值
	 */
	public void setOffsetNum(long offset)
	{
		long offsetParamValue = offset;
		setOffsetNum_ev_uint32(this.nativeObject.pointer, offsetParamValue);
	}
	native private void setOffsetNum_ev_uint32_NoVirtual(long pNativeObject, long offset);
	protected void setOffsetNum_NoVirtual(long offset)
	{
		long offsetParamValue = offset;
		setOffsetNum_ev_uint32_NoVirtual(this.nativeObject.pointer, offsetParamValue);
	}

	protected  void setQueryGeometry_IGeometry_callback(long geometry)
	{
		com.earthview.world.spatial.geometry.Igeometry geometryParamValue = (geometry == 0L ? null : new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate));
		if(geometryParamValue != null)
		{
		geometryParamValue.setDelegate(true);
		geometryParamValue.setInstancePointer(new InstancePointer(geometry));
		IClassFactory geometryParamValueClassFactory = GlobalClassFactoryMap.get(geometryParamValue.getCppInstanceTypeName());
		if (geometryParamValueClassFactory != null)
		{
			geometryParamValue.setDelegate(true);
			geometryParamValue = (com.earthview.world.spatial.geometry.Igeometry)geometryParamValueClassFactory.create();
			geometryParamValue.setDelegate(true);
			geometryParamValue.setInstancePointer(new InstancePointer(geometry));
		}
		}
		setQueryGeometry(geometryParamValue);
	}

	native private void setQueryGeometry_IGeometry(long pNativeObject, long geometry);
	/**
	 * 设置空间查询几何体
	 * @param geometry 查询几何体
	 */
	public void setQueryGeometry(com.earthview.world.spatial.geometry.Igeometry geometry)
	{
		long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
		setQueryGeometry_IGeometry(this.nativeObject.pointer, geometryParamValue);
	}
	native private void setQueryGeometry_IGeometry_NoVirtual(long pNativeObject, long geometry);
	protected void setQueryGeometry_NoVirtual(com.earthview.world.spatial.geometry.Igeometry geometry)
	{
		long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
		setQueryGeometry_IGeometry_NoVirtual(this.nativeObject.pointer, geometryParamValue);
	}

	protected  void setQueryMode_EVQueryModeType_callback(int queryMode)
	{
		com.earthview.world.spatial.geodataset.EVQueryModeType queryModeParamValue = com.earthview.world.spatial.geodataset.EVQueryModeType.toEnum(queryMode);
		setQueryMode(queryModeParamValue);
	}

	native private void setQueryMode_EVQueryModeType(long pNativeObject, int queryMode);
	/**
	 * 设置查询模式
	 * @param queryMode 查询模式
	 */
	public void setQueryMode(com.earthview.world.spatial.geodataset.EVQueryModeType queryMode)
	{
		int queryModeParamValue = queryMode.getValue();
		setQueryMode_EVQueryModeType(this.nativeObject.pointer, queryModeParamValue);
	}
	native private void setQueryMode_EVQueryModeType_NoVirtual(long pNativeObject, int queryMode);
	protected void setQueryMode_NoVirtual(com.earthview.world.spatial.geodataset.EVQueryModeType queryMode)
	{
		int queryModeParamValue = queryMode.getValue();
		setQueryMode_EVQueryModeType_NoVirtual(this.nativeObject.pointer, queryModeParamValue);
	}

	protected  void setSpatialRelation_EVSpatialQueryRelationType_callback(int spatialRelType)
	{
		com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType spatialRelTypeParamValue = com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType.toEnum(spatialRelType);
		setSpatialRelation(spatialRelTypeParamValue);
	}

	native private void setSpatialRelation_EVSpatialQueryRelationType(long pNativeObject, int spatialRelType);
	/**
	 * 设置空间查询关系
	 * @param spatialRelType 空间查询关系
	 */
	public void setSpatialRelation(com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType spatialRelType)
	{
		int spatialRelTypeParamValue = spatialRelType.getValue();
		setSpatialRelation_EVSpatialQueryRelationType(this.nativeObject.pointer, spatialRelTypeParamValue);
	}
	native private void setSpatialRelation_EVSpatialQueryRelationType_NoVirtual(long pNativeObject, int spatialRelType);
	protected void setSpatialRelation_NoVirtual(com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType spatialRelType)
	{
		int spatialRelTypeParamValue = spatialRelType.getValue();
		setSpatialRelation_EVSpatialQueryRelationType_NoVirtual(this.nativeObject.pointer, spatialRelTypeParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Iqueryfilter returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆函数
	 * @return 查询对象
	 */
	public com.earthview.world.spatial.geodataset.Iqueryfilter ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Iqueryfilter __returnValue = new com.earthview.world.spatial.geodataset.Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate, "IQueryFilter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Iqueryfilter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IQueryFilter");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Iqueryfilter ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Iqueryfilter __returnValue = new com.earthview.world.spatial.geodataset.Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate, "IQueryFilter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Iqueryfilter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IQueryFilter");
		}
		return __returnValue;
	}

	public Iqueryfilter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iqueryfilter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFieldName_void(long pNativeObject, String method);
	native protected void register_getWhereClause_void(long pNativeObject, String method);
	native protected void register_getLimitNum_void(long pNativeObject, String method);
	native protected void register_getOffsetNum_void(long pNativeObject, String method);
	native protected void register_getQueryGeometryRef_void(long pNativeObject, String method);
	native protected void register_getSpatialRelation_void(long pNativeObject, String method);
	native protected void register_getQueryMode_void(long pNativeObject, String method);
	native protected void register_setFieldName_EVString(long pNativeObject, String method);
	native protected void register_setWhereClause_EVString(long pNativeObject, String method);
	native protected void register_setLimitNum_ev_uint32(long pNativeObject, String method);
	native protected void register_setOffsetNum_ev_uint32(long pNativeObject, String method);
	native protected void register_setQueryGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_setQueryMode_EVQueryModeType(long pNativeObject, String method);
	native protected void register_setSpatialRelation_EVSpatialQueryRelationType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFieldName_void(this.nativeObject.pointer, "getFieldName_void_callback");
			this.register_getWhereClause_void(this.nativeObject.pointer, "getWhereClause_void_callback");
			this.register_getLimitNum_void(this.nativeObject.pointer, "getLimitNum_void_callback");
			this.register_getOffsetNum_void(this.nativeObject.pointer, "getOffsetNum_void_callback");
			this.register_getQueryGeometryRef_void(this.nativeObject.pointer, "getQueryGeometryRef_void_callback");
			this.register_getSpatialRelation_void(this.nativeObject.pointer, "getSpatialRelation_void_callback");
			this.register_getQueryMode_void(this.nativeObject.pointer, "getQueryMode_void_callback");
			this.register_setFieldName_EVString(this.nativeObject.pointer, "setFieldName_EVString_callback");
			this.register_setWhereClause_EVString(this.nativeObject.pointer, "setWhereClause_EVString_callback");
			this.register_setLimitNum_ev_uint32(this.nativeObject.pointer, "setLimitNum_ev_uint32_callback");
			this.register_setOffsetNum_ev_uint32(this.nativeObject.pointer, "setOffsetNum_ev_uint32_callback");
			this.register_setQueryGeometry_IGeometry(this.nativeObject.pointer, "setQueryGeometry_IGeometry_callback");
			this.register_setQueryMode_EVQueryModeType(this.nativeObject.pointer, "setQueryMode_EVQueryModeType_callback");
			this.register_setSpatialRelation_EVSpatialQueryRelationType(this.nativeObject.pointer, "setSpatialRelation_EVSpatialQueryRelationType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Iqueryfilter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iqueryfilter obj = null;
 		if(baseObj instanceof Iqueryfilter)
		{
			obj = (Iqueryfilter)baseObj;
		} else {
			obj = new Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IQueryFilter");
			obj.increaseCast();
		}

		return obj;
	}
}
