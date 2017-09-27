package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图数据描述信息类
 */
public class ChartDatasetHeaderInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo", new ChartDatasetHeaderInfoClassFactory());
	}

	native private boolean getHeaderInfo_EVString_EVString_CVariant(long pNativeObject, String fieldName, String subFieldName, long var);
	/**
	 * 查询变量
	 * @param fieldName 字段名
	 * @param subFieldName 子字段名
	 * @param var 查询结果
	 * @return 成功返回true，否则返回false
	 */
	public boolean getHeaderInfo(String fieldName, String subFieldName, com.earthview.world.core.Variant var)
	{
		String fieldNameParamValue = fieldName;
		String subFieldNameParamValue = subFieldName;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = getHeaderInfo_EVString_EVString_CVariant(this.nativeObject.pointer, fieldNameParamValue, subFieldNameParamValue, varParamValue);
		return returnValue;
	}
	native private long getHeaderFieldCount_void(long pNativeObject);
	/**
	 * 获取属性字段个数
	 * @return 属性字段个数
	 */
	public long getHeaderFieldCount()
	{
		long returnValue = getHeaderFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeaderSubFieldCount_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取某个字段的子字段个数
	 * @param index 字段索引
	 * @return 子字段个数
	 */
	public long getHeaderSubFieldCount(long index)
	{
		long indexParamValue = index;
		long returnValue = getHeaderSubFieldCount_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean getHeaderInfo_ev_uint32_ev_uint32_CVariant(long pNativeObject, long fieldIndex, long subfieldIndex, long var);
	/**
	 * 查询变量
	 * @param fieldIndex 字段索引
	 * @param subfieldIndex 子字段索引
	 * @param var 查询结果
	 * @return 成功返回true，否则返回false
	 */
	public boolean getHeaderInfo(long fieldIndex, long subfieldIndex, com.earthview.world.core.Variant var)
	{
		long fieldIndexParamValue = fieldIndex;
		long subfieldIndexParamValue = subfieldIndex;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = getHeaderInfo_ev_uint32_ev_uint32_CVariant(this.nativeObject.pointer, fieldIndexParamValue, subfieldIndexParamValue, varParamValue);
		return returnValue;
	}
	native private String getHeaderFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的字段名称
	 * @param index 索引
	 * @return 指定的字段名称
	 */
	public String getHeaderFieldName(long index)
	{
		long indexParamValue = index;
		String returnValue = getHeaderFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getHeaderSubFieldName_ev_uint32_ev_uint32(long pNativeObject, long fieldIndex, long subfieldIndex);
	/**
	 * 获取子字段名称
	 * @param fieldIndex 字段索引
	 * @param subfieldIndex 子字段索引
	 * @return 指定的子字段名称
	 */
	public String getHeaderSubFieldName(long fieldIndex, long subfieldIndex)
	{
		long fieldIndexParamValue = fieldIndex;
		long subfieldIndexParamValue = subfieldIndex;
		String returnValue = getHeaderSubFieldName_ev_uint32_ev_uint32(this.nativeObject.pointer, fieldIndexParamValue, subfieldIndexParamValue);
		return returnValue;
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private static long fromStream_CDataStream(long stream);
	public static com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = fromStream_CDataStream(streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo __returnValue = new com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo(CreatedWhenConstruct.CWC_NotToCreate, "CChartDatasetHeaderInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CChartDatasetHeaderInfo");
		}
		return __returnValue;
	}
	public ChartDatasetHeaderInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartDatasetHeaderInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ChartDatasetHeaderInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartDatasetHeaderInfo obj = null;
 		if(baseObj instanceof ChartDatasetHeaderInfo)
		{
			obj = (ChartDatasetHeaderInfo)baseObj;
		} else {
			obj = new ChartDatasetHeaderInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartDatasetHeaderInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
