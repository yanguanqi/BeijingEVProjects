package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据交换参数类
 */
public class DataExchangeParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchangeParam", new DataExchangeParamClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public DataExchangeParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDataExchangeParam", null);
	}

	/**
	 * 拷贝构造函数
	 * @param param 拷贝对象
	 */
	public DataExchangeParam(com.earthview.world.spatial.convertor.DataExchangeParam param) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer paramPtr = new BasePointer(param);
		list.add("param", paramPtr.get());
		Create("CDataExchangeParam", list);
	}

	native private boolean isDiscardEmptyGeometryRecord_void(long pNativeObject);
	/**
	 * 是否抛弃空几何对象对应的记录
	 * @return true抛弃对应记录，false保留
	 */
	public boolean isDiscardEmptyGeometryRecord()
	{
		boolean returnValue = isDiscardEmptyGeometryRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDiscardInsignificanceGeometryRecord_void(long pNativeObject);
	/**
	 * 是否抛弃无效几何对象对应的记录，如某线只含1个点，多边形含有一点或2点
	 * @return true抛弃对应记录，false保留
	 */
	public boolean isDiscardInsignificanceGeometryRecord()
	{
		boolean returnValue = isDiscardInsignificanceGeometryRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDiscardEmptyGeometryRecord_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否抛弃空几何对象对应的记录
	 * @param value true抛弃空几何对象对应记录，false保留
	 */
	public void setDiscardEmptyGeometryRecord(boolean value)
	{
		boolean valueParamValue = value;
		setDiscardEmptyGeometryRecord_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDiscardInsignificanceGeometryRecord_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否抛弃无效几何对象对应的记录
	 * @param value true抛弃无效几何对象对应记录，false保留
	 */
	public void setDiscardInsignificanceGeometryRecord(boolean value)
	{
		boolean valueParamValue = value;
		setDiscardInsignificanceGeometryRecord_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setProject7Param_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double dx, double dy, double dz, double rx, double ry, double rz, double ppm);
	/**
	 * 设置投影7参数
	 * @param dx 偏移参数x
	 * @param dy 偏移参数y
	 * @param dz 偏移参数z
	 * @param rx 旋转参数x
	 * @param ry 旋转参数y
	 * @param rz 旋转参数z
	 * @param ppm 比例参数
	 */
	public void setProject7Param(double dx, double dy, double dz, double rx, double ry, double rz, double ppm)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		double dzParamValue = dz;
		double rxParamValue = rx;
		double ryParamValue = ry;
		double rzParamValue = rz;
		double ppmParamValue = ppm;
		setProject7Param_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue, dzParamValue, rxParamValue, ryParamValue, rzParamValue, ppmParamValue);
	}
	native private long getProject7Param_void(long pNativeObject);
	/**
	 * 获取坐标转换7参数
	 * @return 参数首地址，不需释放
	 */
	public DoublePointer getProject7Param()
	{
		long returnValue = getProject7Param_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDestSpatialReference_ISpatialReference_ev_bool(long pNativeObject, long sr, boolean translateCoordinates);
	/**
	 * 为目标数据设置新坐标系
	 * @param sr 坐标系对象
	 * @param translateCoordinates 是否转换坐标
	 */
	public void setDestSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr, boolean translateCoordinates)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		boolean translateCoordinatesParamValue = translateCoordinates;
		setDestSpatialReference_ISpatialReference_ev_bool(this.nativeObject.pointer, srParamValue, translateCoordinatesParamValue);
	}
	native private boolean isTranslateCoordiantes_void(long pNativeObject);
	/**
	 * 获取是否转换坐标
	 * @return true标识进行坐标转换，false表示直接拷贝坐标
	 */
	public boolean isTranslateCoordiantes()
	{
		boolean returnValue = isTranslateCoordiantes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resetProject7Param_void(long pNativeObject);
	/**
	 * 投影转换参数恢复默认
	 */
	public void resetProject7Param()
	{
		resetProject7Param_void(this.nativeObject.pointer);
	}
	native private long getDestSpatialReference_void(long pNativeObject);
	/**
	 * 获取目标数据集坐标参考
	 * @return 坐标参考对象指针，不需释放
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getDestSpatialReference()
	{
		long returnValue = getDestSpatialReference_void(this.nativeObject.pointer);
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
	native private void setDestDimension_EVDatasetDimension(long pNativeObject, int dimesion);
	/**
	 * 设置目标数据集维度
	 * @param dimesion 目标数据集维度
	 */
	public void setDestDimension(com.earthview.world.spatial.convertor.EVDatasetDimension dimesion)
	{
		int dimesionParamValue = dimesion.getValue();
		setDestDimension_EVDatasetDimension(this.nativeObject.pointer, dimesionParamValue);
	}
	native private int getDestDimension_void(long pNativeObject);
	/**
	 * 获取目标数据集维度
	 * @return 目标数据集维度
	 */
	public com.earthview.world.spatial.convertor.EVDatasetDimension getDestDimension()
	{
		int returnValue = getDestDimension_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.convertor.EVDatasetDimension.toEnum(returnValue);
	}
	native private void setSelectFeatureSQL_EVString(long pNativeObject, String sql);
	/**
	 * 设置选择要素的sql语句
	 * @param sql sql语句
	 */
	public void setSelectFeatureSQL(String sql)
	{
		String sqlParamValue = sql;
		setSelectFeatureSQL_EVString(this.nativeObject.pointer, sqlParamValue);
	}
	native private String getSelectFeatureSQL_void(long pNativeObject);
	/**
	 * 获取选择要素的sql语句
	 * @return 选择要素所用的sql语句
	 */
	public String getSelectFeatureSQL()
	{
		String returnValue = getSelectFeatureSQL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectFeatureBySQL_void(long pNativeObject);
	/**
	 * 使用sql语句选择要素
	 * @return 处理全部要素时，返回false
	 */
	public boolean isSelectFeatureBySQL()
	{
		boolean returnValue = isSelectFeatureBySQL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelectFeatureByIDs_void(long pNativeObject);
	/**
	 * 使用选定id号选择要素
	 * @return 处理全部要素时，返回false
	 */
	public boolean isSelectFeatureByIDs()
	{
		boolean returnValue = isSelectFeatureByIDs_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectedFeatures_ev_int32_ev_uint32(long pNativeObject, long featureIDs, long count);
	/**
	 * 设置选择要素（需要转换的要素）
	 * @param features 要素ID序列
	 * @param count 要素ID个数
	 */
	public void setSelectedFeatures(IntegerPointer featureIDs, long count)
	{
		long featureIDsParamValue = (featureIDs == null ? 0L : featureIDs.nativeObject.pointer);
		long countParamValue = count;
		setSelectedFeatures_ev_int32_ev_uint32(this.nativeObject.pointer, featureIDsParamValue, countParamValue);
	}
	native private long getSelectedFeatureCount_void(long pNativeObject);
	/**
	 * 获取所选择要素的个数
	 * @return 选择要素的个数
	 */
	public long getSelectedFeatureCount()
	{
		long returnValue = getSelectedFeatureCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSelectedFeatureID_ev_uint32(long pNativeObject, long index);
	/**
	 * 选择要素中指定索引的id
	 * @param index 索引
	 * @return 对应要素id
	 */
	public int getSelectedFeatureID(long index)
	{
		long indexParamValue = index;
		int returnValue = getSelectedFeatureID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void resetConvertFeatures_void(long pNativeObject);
	/**
	 * 重新设置需要转换的要素
	 */
	public void resetConvertFeatures()
	{
		resetConvertFeatures_void(this.nativeObject.pointer);
	}
	native private boolean isConvertAllFeatures_void(long pNativeObject);
	/**
	 * 是否转换所有要素
	 * @return true/false
	 */
	public boolean isConvertAllFeatures()
	{
		boolean returnValue = isConvertAllFeatures_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelectedFields_StringVector(long pNativeObject, long fieldnamelist);
	/**
	 * /设置要转换的字段/
	 * @param fieldnamelist 字段名称列表
	 */
	public void setSelectedFields(com.earthview.world.core.StringVector fieldnamelist)
	{
		long fieldnamelistParamValue = fieldnamelist.nativeObject.pointer;
		setSelectedFields_StringVector(this.nativeObject.pointer, fieldnamelistParamValue);
	}
	native private long getSelectedFieldCount_void(long pNativeObject);
	/**
	 * 获取要转换的字段个数
	 * @return 字段个数
	 */
	public long getSelectedFieldCount()
	{
		long returnValue = getSelectedFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSelectedFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 选择字段指定索引对应的名称
	 * @param index 索引
	 * @return 对应名称
	 */
	public String getSelectedFieldName(long index)
	{
		long indexParamValue = index;
		String returnValue = getSelectedFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void resetConvertFields_void(long pNativeObject);
	/**
	 * 重新设置要选则的字段
	 */
	public void resetConvertFields()
	{
		resetConvertFields_void(this.nativeObject.pointer);
	}
	native private boolean isConvertAllFields_void(long pNativeObject);
	/**
	 * 是否转换所有字段
	 * @return true/false
	 */
	public boolean isConvertAllFields()
	{
		boolean returnValue = isConvertAllFields_void(this.nativeObject.pointer);
		return returnValue;
	}
	public DataExchangeParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataExchangeParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataExchangeParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataExchangeParam obj = null;
 		if(baseObj instanceof DataExchangeParam)
		{
			obj = (DataExchangeParam)baseObj;
		} else {
			obj = new DataExchangeParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataExchangeParam");
			obj.increaseCast();
		}

		return obj;
	}
}
