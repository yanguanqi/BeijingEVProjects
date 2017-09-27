package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

/**
 * EarthViewWFS数据集类
 */
public class Evwfsdataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSDataset", new EvwfsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSDatasetProxy", new EvwfsdatasetClassFactory());
	}

	native private int getQueryAttribute_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(long pNativeObject, String layer, long condition, int startrecord, int recordcount, long recordset);
	/**
	 * 查询属性
	 * @param layer 查询图层
	 * @param condition 查询条件
	 * @param startrecord 起始记录
	 * @param recordcount 每次返回结果
	 * @param recordset 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getQueryAttribute(String layer, com.earthview.world.spatial.ServerSearchCondition condition, int startrecord, int recordcount, com.earthview.world.spatial.ServerSet recordset)
	{
		String layerParamValue = layer;
		long conditionParamValue = (condition == null ? 0L : condition.nativeObject.pointer);
		int startrecordParamValue = startrecord;
		int recordcountParamValue = recordcount;
		long recordsetParamValue = recordset.nativeObject.pointer;
		int returnValue = getQueryAttribute_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(this.nativeObject.pointer, layerParamValue, conditionParamValue, startrecordParamValue, recordcountParamValue, recordsetParamValue);
		return returnValue;
	}
	native private int getLayerAttributeValue_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(long pNativeObject, String querylayers, long featurecount, double x, double y, String fieldname, long queryresult);
	/**
	 * 获取图层上某点的属性
	 * @param querylayers 查询图层
	 * @param featurecount 返回要素的个数
	 * @param x x坐标
	 * @param y y坐标
	 * @param fieldname 查询字段名
	 * @param queryresult 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getLayerAttributeValue(String querylayers, long featurecount, double x, double y, String fieldname, com.earthview.world.spatial.ServerQueryResults queryresult)
	{
		String querylayersParamValue = querylayers;
		long featurecountParamValue = featurecount;
		double xParamValue = x;
		double yParamValue = y;
		String fieldnameParamValue = fieldname;
		long queryresultParamValue = queryresult.nativeObject.pointer;
		int returnValue = getLayerAttributeValue_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(this.nativeObject.pointer, querylayersParamValue, featurecountParamValue, xParamValue, yParamValue, fieldnameParamValue, queryresultParamValue);
		return returnValue;
	}
	native private int getUniqueFieldValue_EVString_EVString_CServerQueryResults(long pNativeObject, String querylayer, String fieldname, long queryresult);
	/**
	 * 查询单值
	 * @param querylayer 图层
	 * @param fieldname 字段名
	 * @param queryresult 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getUniqueFieldValue(String querylayer, String fieldname, com.earthview.world.spatial.ServerQueryResults queryresult)
	{
		String querylayerParamValue = querylayer;
		String fieldnameParamValue = fieldname;
		long queryresultParamValue = queryresult.nativeObject.pointer;
		int returnValue = getUniqueFieldValue_EVString_EVString_CServerQueryResults(this.nativeObject.pointer, querylayerParamValue, fieldnameParamValue, queryresultParamValue);
		return returnValue;
	}
	native private int getLayerFeature_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(long pNativeObject, String layer, boolean hasgeometry, boolean hasattribute, String attributenames, long feature);
	/**
	 * 查询要素
	 * @param layer 查询图层
	 * @param hasgeometry true表示查询几何信息
	 * @param hasattribute true表示查询属性信息
	 * @param attributenames 所需查询的属性字段名称，可为空
	 * @param feature 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getLayerFeature(String layer, boolean hasgeometry, boolean hasattribute, String attributenames, com.earthview.world.spatial.Evwebfeature feature)
	{
		String layerParamValue = layer;
		boolean hasgeometryParamValue = hasgeometry;
		boolean hasattributeParamValue = hasattribute;
		String attributenamesParamValue = attributenames;
		long featureParamValue = feature.nativeObject.pointer;
		int returnValue = getLayerFeature_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(this.nativeObject.pointer, layerParamValue, hasgeometryParamValue, hasattributeParamValue, attributenamesParamValue, featureParamValue);
		return returnValue;
	}
	native private int getSearchGeometry_EVString_CServerSearchCondition_CGeometryList(long pNativeObject, String layer, long condition, long geometrylist);
	/**
	 * 查询几何对象
	 * @param layer 查询图层
	 * @param condition 查询条件
	 * @param geometrylist 查询结果
	 * @return ok返回0，其他值均为错误
	 */
	public int getSearchGeometry(String layer, com.earthview.world.spatial.ServerSearchCondition condition, com.earthview.world.spatial.GeometryList geometrylist)
	{
		String layerParamValue = layer;
		long conditionParamValue = (condition == null ? 0L : condition.nativeObject.pointer);
		long geometrylistParamValue = geometrylist.nativeObject.pointer;
		int returnValue = getSearchGeometry_EVString_CServerSearchCondition_CGeometryList(this.nativeObject.pointer, layerParamValue, conditionParamValue, geometrylistParamValue);
		return returnValue;
	}
	public Evwfsdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evwfsdataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 获取数据集更新时间
	 * @param  
	 * @return 数据集更新时间
	 */
	public String getUpdateTime()
	{
		return super.getUpdateTime_NoVirtual();
	}
	/**
	 * 判断是否包含子数据集
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean hasSubDataset()
	{
		return super.hasSubDataset_NoVirtual();
	}
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		return super.getDataSourceRef_NoVirtual();
	}
	/**
	 * 判断数据集是否具有编辑能力
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 判断数据集是否处在编辑状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	 * @param withUndo 确定是否开启Undo功能
	 * @return 开启编辑成功，返回true；否则，返回false
	 */
	public boolean startEditing(boolean withUndo)
	{
		return super.startEditing_NoVirtual(withUndo);
	}
	/**
	 * 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	 * @param isSave 需要保存编辑数据，设置true;否则，设置false
	 * @return 结束编辑成功，返回true;否则，返回false
	 */
	public boolean stopEditing(boolean isSave)
	{
		return super.stopEditing_NoVirtual(isSave);
	}
	/**
	 * 判断数据集是否处在编辑操作状态
	 * @param  
	 * @return 是，返回true;否则，返回false
	 */
	public boolean isBeginEditingOperation()
	{
		return super.isBeginEditingOperation_NoVirtual();
	}
	/**
	 * 开启编辑操作，用于标识数据集编辑操作。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param  
	 * @return 开启编辑操作成功，返回true;否则，返回false
	 */
	public boolean beginEditingOperation()
	{
		return super.beginEditingOperation_NoVirtual();
	}
	/**
	 * 结束编辑操作，用于标识数据集编辑操作结束。在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	 * @param isConfirm 提交操作，设置true;否则，设置false
	 * @return 结束编辑操作成功，返回true;否则，返回false
	 */
	public boolean endEditingOperation(boolean isConfirm)
	{
		return super.endEditingOperation_NoVirtual(isConfirm);
	}
	
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
	
	public static Evwfsdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evwfsdataset obj = null;
 		if(baseObj instanceof Evwfsdataset)
		{
			obj = (Evwfsdataset)baseObj;
		} else {
			obj = new Evwfsdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVWFSDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
