package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

/**
 * EarthView几何数据集类
 */
public class Evgeometrydataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeometryDataset", new EvgeometrydatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeometryDatasetProxy", new EvgeometrydatasetClassFactory());
	}

	native private int buffer_CGeometryList_ev_real64_ev_bool_CGeometryList(long pNativeObject, long geometrylist, double distance, boolean isunion, long result_geometrylist);
	/**
	 * 求缓冲区
	 * @param geometrylist 集合对象列表
	 * @param distance 缓冲区距离
	 * @param isunion 结果是否合并
	 * @param result_geometrylist 结果
	 * @return ok返回0，其他值均为错误
	 */
	public int buffer(com.earthview.world.spatial.GeometryList geometrylist, double distance, boolean isunion, com.earthview.world.spatial.GeometryList result_geometrylist)
	{
		long geometrylistParamValue = geometrylist.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean isunionParamValue = isunion;
		long result_geometrylistParamValue = result_geometrylist.nativeObject.pointer;
		int returnValue = buffer_CGeometryList_ev_real64_ev_bool_CGeometryList(this.nativeObject.pointer, geometrylistParamValue, distanceParamValue, isunionParamValue, result_geometrylistParamValue);
		return returnValue;
	}
	native private int contains_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否包含对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int contains(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = contains_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int crosses_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否跨过对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int crosses(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = crosses_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int disjoint_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相离
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int disjoint(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = disjoint_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int distance_IGeometry_IGeometry_ev_real64(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1与对象2的距离
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 距离
	 * @return ok返回0，其他值均为错误
	 */
	public int distance(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, DoublePointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = distance_IGeometry_IGeometry_ev_real64(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int intersects_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相交
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int intersects(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = intersects_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int overlaps_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2是否重叠
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int overlaps(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = overlaps_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int touches_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否与对象2相邻接
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int touches(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = touches_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	native private int within_IGeometry_IGeometry_ev_bool(long pNativeObject, long geometry1, long geometry2, long result);
	/**
	 * 检测对象1是否包含于对象2
	 * @param geometry1 几何对象1
	 * @param geometry2 几何对象2
	 * @param result 检测结果，true表示包含
	 * @return ok返回0，其他值均为错误
	 */
	public int within(com.earthview.world.spatial.geometry.Igeometry geometry1, com.earthview.world.spatial.geometry.Igeometry geometry2, BooleanPointer result)
	{
		long geometry1ParamValue = (geometry1 == null ? 0L : geometry1.nativeObject.pointer);
		long geometry2ParamValue = (geometry2 == null ? 0L : geometry2.nativeObject.pointer);
		long resultParamValue = result.nativeObject.pointer;
		int returnValue = within_IGeometry_IGeometry_ev_bool(this.nativeObject.pointer, geometry1ParamValue, geometry2ParamValue, resultParamValue);
		return returnValue;
	}
	public Evgeometrydataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evgeometrydataset(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Evgeometrydataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evgeometrydataset obj = null;
 		if(baseObj instanceof Evgeometrydataset)
		{
			obj = (Evgeometrydataset)baseObj;
		} else {
			obj = new Evgeometrydataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVGeometryDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
