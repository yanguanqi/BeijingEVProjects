package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的查询条件信息类
 */
public class ServerSearchCondition extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerSearchCondition", new ServerSearchConditionClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerSearchCondition() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerSearchCondition", null);
	}

	native private long getPointCount_void(long pNativeObject);
	/**
	 * 获取查询要素所含点数
	 * @return 点数
	 */
	public long getPointCount()
	{
		long returnValue = getPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPointRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的点坐标
	 * @param index 索引
	 * @return 指定点坐标对象指针
	 */
	public com.earthview.world.spatial.ServerPoint3DF getPointRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getPointRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerPoint3DF __returnValue = new com.earthview.world.spatial.ServerPoint3DF(CreatedWhenConstruct.CWC_NotToCreate, "CServerPoint3DF");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerPoint3DF)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerPoint3DF");
		}
		return __returnValue;
	}
	native private void addPoint_CServerPoint3DF(long pNativeObject, long point);
	/**
	 * 追加查询要素点
	 * @param point 点坐标对象
	 */
	public void addPoint(com.earthview.world.spatial.ServerPoint3DF point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		addPoint_CServerPoint3DF(this.nativeObject.pointer, pointParamValue);
	}
	native private void addPoint_CServerPoint3DF_ev_uint32(long pNativeObject, long points, long count);
	/**
	 * 追加查询点串
	 * @param points 坐标数组
	 * @param count 坐标个数
	 */
	public void addPoint(com.earthview.world.spatial.ServerPoint3DF points, long count)
	{
		long pointsParamValue = (points == null ? 0L : points.nativeObject.pointer);
		long countParamValue = count;
		addPoint_CServerPoint3DF_ev_uint32(this.nativeObject.pointer, pointsParamValue, countParamValue);
	}
	native private void insertPoint_CServerPoint3DF_ev_uint32(long pNativeObject, long point, long index);
	/**
	 * 插入坐标查询点
	 * @param point 坐标点
	 * @param index 位置
	 */
	public void insertPoint(com.earthview.world.spatial.ServerPoint3DF point, long index)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		long indexParamValue = index;
		insertPoint_CServerPoint3DF_ev_uint32(this.nativeObject.pointer, pointParamValue, indexParamValue);
	}
	native private void removePoint_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除查询坐标点
	 * @param index 索引
	 */
	public void removePoint(long index)
	{
		long indexParamValue = index;
		removePoint_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void clearPoints_void(long pNativeObject);
	/**
	 * 起初查询坐标
	 */
	public void clearPoints()
	{
		clearPoints_void(this.nativeObject.pointer);
	}
	native private void setGeometryType_EVSSCGeometryType(long pNativeObject, int type);
	/**
	 * 设置查询点组成要素的几何类型
	 * @param type 几何类型
	 */
	public void setGeometryType(com.earthview.world.spatial.EVSSCGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVSSCGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取查询点组成要素的几何类型
	 */
	public com.earthview.world.spatial.EVSSCGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCGeometryType.toEnum(returnValue);
	}
	native private void setSQL_EVString(long pNativeObject, String strSQL);
	/**
	 * 设置查询的sql语句
	 * @param strSQL sql语句
	 */
	public void setSQL(String strSQL)
	{
		String strSQLParamValue = strSQL;
		setSQL_EVString(this.nativeObject.pointer, strSQLParamValue);
	}
	native private long getSQL_void(long pNativeObject);
	/**
	 * 获取查询的sql语句
	 * @return sql语句
	 */
	public StringPointer getSQL()
	{
		long returnValue = getSQL_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setSearchFields_EVString(long pNativeObject, String strSearchFields);
	/**
	 * 设置需要查询的字段名
	 * @param strSearchFields 字段名
	 */
	public void setSearchFields(String strSearchFields)
	{
		String strSearchFieldsParamValue = strSearchFields;
		setSearchFields_EVString(this.nativeObject.pointer, strSearchFieldsParamValue);
	}
	native private String getSearchFields_void(long pNativeObject);
	/**
	 * 获取需要查询的字段名
	 * @param  
	 * @return 字段名
	 */
	public String getSearchFields()
	{
		String returnValue = getSearchFields_void(this.nativeObject.pointer);
		return returnValue;
	}
	public ServerSearchCondition(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerSearchCondition(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerSearchCondition fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerSearchCondition obj = null;
 		if(baseObj instanceof ServerSearchCondition)
		{
			obj = (ServerSearchCondition)baseObj;
		} else {
			obj = new ServerSearchCondition(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerSearchCondition");
			obj.increaseCast();
		}

		return obj;
	}
}
