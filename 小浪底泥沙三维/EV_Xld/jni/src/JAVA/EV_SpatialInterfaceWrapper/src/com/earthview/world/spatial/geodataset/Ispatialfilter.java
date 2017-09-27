package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间查询过滤器
 */
public class Ispatialfilter extends com.earthview.world.spatial.geodataset.Iqueryfilter {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::ISpatialFilter", new IspatialfilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JISpatialFilterProxy", new IspatialfilterClassFactory());
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
	 * 获取查询几何体
	 * @param  
	 * @return 返回几何体
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

	protected  long getCopyGeometry_void_callback()
	{
		com.earthview.world.spatial.geometry.Igeometry returnValue = getCopyGeometry();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCopyGeometry_void(long pNativeObject);
	/**
	 * 获取查询几何体拷贝
	 * @param  
	 * @return 返回拷贝几何体
	 */
	public com.earthview.world.spatial.geometry.Igeometry getCopyGeometry()
	{
		long returnValue = getCopyGeometry_void(this.nativeObject.pointer);
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
	native private long getCopyGeometry_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Igeometry getCopyGeometry_NoVirtual()
	{
		long returnValue = getCopyGeometry_void_NoVirtual(this.nativeObject.pointer);
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

	protected  int getQueryOrder_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVQueryOrderType returnValue = getQueryOrder();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getQueryOrder_void(long pNativeObject);
	/**
	 * 获取查询顺序
	 * @param  
	 * @return 返回查询顺序
	 */
	public com.earthview.world.spatial.geodataset.EVQueryOrderType getQueryOrder()
	{
		int returnValue = getQueryOrder_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVQueryOrderType.toEnum(returnValue);
	}
	native private int getQueryOrder_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVQueryOrderType getQueryOrder_NoVirtual()
	{
		int returnValue = getQueryOrder_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVQueryOrderType.toEnum(returnValue);
	}

	protected  int getRelationEnum_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVSpatialRelationEnum returnValue = getRelationEnum();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getRelationEnum_void(long pNativeObject);
	/**
	 * 获取查询空间关系枚举
	 * @param  
	 * @return 返回空间关系枚举
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialRelationEnum getRelationEnum()
	{
		int returnValue = getRelationEnum_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialRelationEnum.toEnum(returnValue);
	}
	native private int getRelationEnum_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVSpatialRelationEnum getRelationEnum_NoVirtual()
	{
		int returnValue = getRelationEnum_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVSpatialRelationEnum.toEnum(returnValue);
	}

	protected  String getSpatialRelationMatrix_void_callback()
	{
		String returnValue = getSpatialRelationMatrix();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSpatialRelationMatrix_void(long pNativeObject);
	/**
	 * 获取查询空间关系矩阵
	 * @param  
	 * @return 返回空间关系矩阵
	 */
	public String getSpatialRelationMatrix()
	{
		String returnValue = getSpatialRelationMatrix_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSpatialRelationMatrix_void_NoVirtual(long pNativeObject);
	protected String getSpatialRelationMatrix_NoVirtual()
	{
		String returnValue = getSpatialRelationMatrix_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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
	 * 设置查询几何体
	 * @param geom 几何体
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

	protected  void setQueryOrder_EVQueryOrderType_callback(int type)
	{
		com.earthview.world.spatial.geodataset.EVQueryOrderType typeParamValue = com.earthview.world.spatial.geodataset.EVQueryOrderType.toEnum(type);
		setQueryOrder(typeParamValue);
	}

	native private void setQueryOrder_EVQueryOrderType(long pNativeObject, int type);
	/**
	 * 设置查询顺序
	 * @param type 顺序
	 */
	public void setQueryOrder(com.earthview.world.spatial.geodataset.EVQueryOrderType type)
	{
		int typeParamValue = type.getValue();
		setQueryOrder_EVQueryOrderType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setQueryOrder_EVQueryOrderType_NoVirtual(long pNativeObject, int type);
	protected void setQueryOrder_NoVirtual(com.earthview.world.spatial.geodataset.EVQueryOrderType type)
	{
		int typeParamValue = type.getValue();
		setQueryOrder_EVQueryOrderType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  void setSpatialRelationEnum_EVSpatialRelationEnum_callback(int relation)
	{
		com.earthview.world.spatial.geodataset.EVSpatialRelationEnum relationParamValue = com.earthview.world.spatial.geodataset.EVSpatialRelationEnum.toEnum(relation);
		setSpatialRelationEnum(relationParamValue);
	}

	native private void setSpatialRelationEnum_EVSpatialRelationEnum(long pNativeObject, int relation);
	/**
	 * 设置空间关系枚举
	 * @param type 空间关系枚举
	 */
	public void setSpatialRelationEnum(com.earthview.world.spatial.geodataset.EVSpatialRelationEnum relation)
	{
		int relationParamValue = relation.getValue();
		setSpatialRelationEnum_EVSpatialRelationEnum(this.nativeObject.pointer, relationParamValue);
	}
	native private void setSpatialRelationEnum_EVSpatialRelationEnum_NoVirtual(long pNativeObject, int relation);
	protected void setSpatialRelationEnum_NoVirtual(com.earthview.world.spatial.geodataset.EVSpatialRelationEnum relation)
	{
		int relationParamValue = relation.getValue();
		setSpatialRelationEnum_EVSpatialRelationEnum_NoVirtual(this.nativeObject.pointer, relationParamValue);
	}

	protected  void setSpatialRelationMatrix_EVString_callback(String matrix)
	{
		String matrixParamValue = matrix;
		setSpatialRelationMatrix(matrixParamValue);
	}

	native private void setSpatialRelationMatrix_EVString(long pNativeObject, String matrix);
	/**
	 * 设置空间关系矩阵
	 * @param matrix 空间关系矩阵
	 */
	public void setSpatialRelationMatrix(String matrix)
	{
		String matrixParamValue = matrix;
		setSpatialRelationMatrix_EVString(this.nativeObject.pointer, matrixParamValue);
	}
	native private void setSpatialRelationMatrix_EVString_NoVirtual(long pNativeObject, String matrix);
	protected void setSpatialRelationMatrix_NoVirtual(String matrix)
	{
		String matrixParamValue = matrix;
		setSpatialRelationMatrix_EVString_NoVirtual(this.nativeObject.pointer, matrixParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
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

	public Ispatialfilter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialfilter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取查询语句中字段名称多个字段名称，用","隔离
	 * @return 字段名称
	 */
	public String getFieldName()
	{
		return super.getFieldName_NoVirtual();
	}
	/**
	 * 获取查询语句中WhereClause语句
	 * @return WhereClause语句
	 */
	public String getWhereClause()
	{
		return super.getWhereClause_NoVirtual();
	}
	/**
	 * 获取查询语句中Limit限制
	 * @return Limit限制，默认为0
	 */
	public long getLimitNum()
	{
		return super.getLimitNum_NoVirtual();
	}
	/**
	 * 获取查询语句中Offset限制
	 * @return Offset限制，默认为0
	 */
	public long getOffsetNum()
	{
		return super.getOffsetNum_NoVirtual();
	}
	/**
	 * 获取空间查询的几何体
	 * @return 几何体对象，内部引用。
	 */
	public com.earthview.world.spatial.geometry.Igeometry getQueryGeometryRef()
	{
		return super.getQueryGeometryRef_NoVirtual();
	}
	/**
	 * 获取空间查询的空间关系条件
	 * @return 空间关系条件
	 */
	public com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType getSpatialRelation()
	{
		return super.getSpatialRelation_NoVirtual();
	}
	/**
	 * 获取查询中的查询模式
	 * @return 查询模式
	 */
	public com.earthview.world.spatial.geodataset.EVQueryModeType getQueryMode()
	{
		return super.getQueryMode_NoVirtual();
	}
	/**
	 * 设置查询语句中查询字段
	 * @param names 字段名称，多个字段，用","隔离
	 */
	public void setFieldName(String names)
	{
		super.setFieldName_NoVirtual(names);
	}
	/**
	 * 设置查询语句中WhereClause语句
	 * @param whereclause WhereClause语句
	 */
	public void setWhereClause(String whereclause)
	{
		super.setWhereClause_NoVirtual(whereclause);
	}
	/**
	 * 设置查询语句中Limit限制
	 * @param limit 返回限制
	 */
	public void setLimitNum(long limit)
	{
		super.setLimitNum_NoVirtual(limit);
	}
	/**
	 * 设置查询语句中Offset限制
	 * @param offset offset值
	 */
	public void setOffsetNum(long offset)
	{
		super.setOffsetNum_NoVirtual(offset);
	}
	/**
	 * 设置空间查询几何体
	 * @param geometry 查询几何体
	 */
	public void setQueryGeometry(com.earthview.world.spatial.geometry.Igeometry geometry)
	{
		super.setQueryGeometry_NoVirtual(geometry);
	}
	/**
	 * 设置查询模式
	 * @param queryMode 查询模式
	 */
	public void setQueryMode(com.earthview.world.spatial.geodataset.EVQueryModeType queryMode)
	{
		super.setQueryMode_NoVirtual(queryMode);
	}
	/**
	 * 设置空间查询关系
	 * @param spatialRelType 空间查询关系
	 */
	public void setSpatialRelation(com.earthview.world.spatial.geodataset.EVSpatialQueryRelationType spatialRelType)
	{
		super.setSpatialRelation_NoVirtual(spatialRelType);
	}
	
	native protected void register_getGeometryRef_void(long pNativeObject, String method);
	native protected void register_getCopyGeometry_void(long pNativeObject, String method);
	native protected void register_getQueryOrder_void(long pNativeObject, String method);
	native protected void register_getRelationEnum_void(long pNativeObject, String method);
	native protected void register_getSpatialRelationMatrix_void(long pNativeObject, String method);
	native protected void register_setGeometry_IGeometry(long pNativeObject, String method);
	native protected void register_setQueryOrder_EVQueryOrderType(long pNativeObject, String method);
	native protected void register_setSpatialRelationEnum_EVSpatialRelationEnum(long pNativeObject, String method);
	native protected void register_setSpatialRelationMatrix_EVString(long pNativeObject, String method);
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
			this.register_getGeometryRef_void(this.nativeObject.pointer, "getGeometryRef_void_callback");
			this.register_getCopyGeometry_void(this.nativeObject.pointer, "getCopyGeometry_void_callback");
			this.register_getQueryOrder_void(this.nativeObject.pointer, "getQueryOrder_void_callback");
			this.register_getRelationEnum_void(this.nativeObject.pointer, "getRelationEnum_void_callback");
			this.register_getSpatialRelationMatrix_void(this.nativeObject.pointer, "getSpatialRelationMatrix_void_callback");
			this.register_setGeometry_IGeometry(this.nativeObject.pointer, "setGeometry_IGeometry_callback");
			this.register_setQueryOrder_EVQueryOrderType(this.nativeObject.pointer, "setQueryOrder_EVQueryOrderType_callback");
			this.register_setSpatialRelationEnum_EVSpatialRelationEnum(this.nativeObject.pointer, "setSpatialRelationEnum_EVSpatialRelationEnum_callback");
			this.register_setSpatialRelationMatrix_EVString(this.nativeObject.pointer, "setSpatialRelationMatrix_EVString_callback");
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
	
	public static Ispatialfilter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialfilter obj = null;
 		if(baseObj instanceof Ispatialfilter)
		{
			obj = (Ispatialfilter)baseObj;
		} else {
			obj = new Ispatialfilter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialFilter");
			obj.increaseCast();
		}

		return obj;
	}
}
