package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//////////////////////////////////////////////////////////////
///EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex
//////////////////////////////////////////////////////////////
public class Ispatialindex extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex", new IspatialindexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JISpatialIndexProxy", new IspatialindexClassFactory());
	}

	protected  void insertData_Data_callback(long data)
	{
		com.earthview.world.spatial2d.spatialindex.Data dataParamValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.spatial2d.spatialindex.Data)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
		}
		insertData(dataParamValue);
	}

	native private void insertData_Data(long pNativeObject, long data);
	/**
	 * 插入数据
	 * @param data featue只最小外接矩形及ID
	 */
	public void insertData(com.earthview.world.spatial2d.spatialindex.Data data)
	{
		long dataParamValue = data.nativeObject.pointer;
		insertData_Data(this.nativeObject.pointer, dataParamValue);
	}
	native private void insertData_Data_NoVirtual(long pNativeObject, long data);
	protected void insertData_NoVirtual(com.earthview.world.spatial2d.spatialindex.Data data)
	{
		long dataParamValue = data.nativeObject.pointer;
		insertData_Data_NoVirtual(this.nativeObject.pointer, dataParamValue);
	}

	protected  void deleteData_Data_callback(long data)
	{
		com.earthview.world.spatial2d.spatialindex.Data dataParamValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		dataParamValue.setDelegate(true);
		dataParamValue.setInstancePointer(new InstancePointer(data));
		IClassFactory dataParamValueClassFactory = GlobalClassFactoryMap.get(dataParamValue.getCppInstanceTypeName());
		if (dataParamValueClassFactory != null)
		{
			dataParamValue.setDelegate(true);
			dataParamValue = (com.earthview.world.spatial2d.spatialindex.Data)dataParamValueClassFactory.create();
			dataParamValue.setDelegate(true);
			dataParamValue.setInstancePointer(new InstancePointer(data));
		}
		deleteData(dataParamValue);
	}

	native private void deleteData_Data(long pNativeObject, long data);
	/**
	 * 删除数据
	 * @param data featue只最小外接矩形及ID
	 */
	public void deleteData(com.earthview.world.spatial2d.spatialindex.Data data)
	{
		long dataParamValue = data.nativeObject.pointer;
		deleteData_Data(this.nativeObject.pointer, dataParamValue);
	}
	native private void deleteData_Data_NoVirtual(long pNativeObject, long data);
	protected void deleteData_NoVirtual(com.earthview.world.spatial2d.spatialindex.Data data)
	{
		long dataParamValue = data.nativeObject.pointer;
		deleteData_Data_NoVirtual(this.nativeObject.pointer, dataParamValue);
	}

	protected  void containsWhatQuery_Data_IDVistor_callback(long query, long presultIDList)
	{
		com.earthview.world.spatial2d.spatialindex.Data queryParamValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		queryParamValue.setDelegate(true);
		queryParamValue.setInstancePointer(new InstancePointer(query));
		IClassFactory queryParamValueClassFactory = GlobalClassFactoryMap.get(queryParamValue.getCppInstanceTypeName());
		if (queryParamValueClassFactory != null)
		{
			queryParamValue.setDelegate(true);
			queryParamValue = (com.earthview.world.spatial2d.spatialindex.Data)queryParamValueClassFactory.create();
			queryParamValue.setDelegate(true);
			queryParamValue.setInstancePointer(new InstancePointer(query));
		}
		com.earthview.world.spatial2d.spatialindex.Idvistor presultIDListParamValue = new com.earthview.world.spatial2d.spatialindex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
		presultIDListParamValue.setDelegate(true);
		presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		IClassFactory presultIDListParamValueClassFactory = GlobalClassFactoryMap.get(presultIDListParamValue.getCppInstanceTypeName());
		if (presultIDListParamValueClassFactory != null)
		{
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue = (com.earthview.world.spatial2d.spatialindex.Idvistor)presultIDListParamValueClassFactory.create();
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		}
		containsWhatQuery(queryParamValue, presultIDListParamValue);
	}

	native private void containsWhatQuery_Data_IDVistor(long pNativeObject, long query, long presultIDList);
	/**
	 * 数据包含查询,返回该查询窗口中所包含的feature之ID
	 * @param query 查询窗口
	 * @param presultIDList featueID列表
	 */
	public void containsWhatQuery(com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		containsWhatQuery_Data_IDVistor(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}
	native private void containsWhatQuery_Data_IDVistor_NoVirtual(long pNativeObject, long query, long presultIDList);
	protected void containsWhatQuery_NoVirtual(com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		containsWhatQuery_Data_IDVistor_NoVirtual(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}

	protected  void intersectsWithQuery_Data_IDVistor_callback(long query, long presultIDList)
	{
		com.earthview.world.spatial2d.spatialindex.Data queryParamValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		queryParamValue.setDelegate(true);
		queryParamValue.setInstancePointer(new InstancePointer(query));
		IClassFactory queryParamValueClassFactory = GlobalClassFactoryMap.get(queryParamValue.getCppInstanceTypeName());
		if (queryParamValueClassFactory != null)
		{
			queryParamValue.setDelegate(true);
			queryParamValue = (com.earthview.world.spatial2d.spatialindex.Data)queryParamValueClassFactory.create();
			queryParamValue.setDelegate(true);
			queryParamValue.setInstancePointer(new InstancePointer(query));
		}
		com.earthview.world.spatial2d.spatialindex.Idvistor presultIDListParamValue = new com.earthview.world.spatial2d.spatialindex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
		presultIDListParamValue.setDelegate(true);
		presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		IClassFactory presultIDListParamValueClassFactory = GlobalClassFactoryMap.get(presultIDListParamValue.getCppInstanceTypeName());
		if (presultIDListParamValueClassFactory != null)
		{
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue = (com.earthview.world.spatial2d.spatialindex.Idvistor)presultIDListParamValueClassFactory.create();
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		}
		intersectsWithQuery(queryParamValue, presultIDListParamValue);
	}

	native private void intersectsWithQuery_Data_IDVistor(long pNativeObject, long query, long presultIDList);
	/**
	 * 数据数据相交查询,返回与之相交的featrue之最小外接矩形之ID不包括包含情况
	 * @param query 查询窗口
	 * @param presultIDList featueID列表
	 */
	public void intersectsWithQuery(com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		intersectsWithQuery_Data_IDVistor(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}
	native private void intersectsWithQuery_Data_IDVistor_NoVirtual(long pNativeObject, long query, long presultIDList);
	protected void intersectsWithQuery_NoVirtual(com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		intersectsWithQuery_Data_IDVistor_NoVirtual(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}

	protected  void pointLocationQuery_Point2DF_IDVistor_callback(long query, long presultIDList)
	{
		com.earthview.world.spatial2d.spatialindex.Point2DF queryParamValue = new com.earthview.world.spatial2d.spatialindex.Point2DF(CreatedWhenConstruct.CWC_NotToCreate);
		queryParamValue.setDelegate(true);
		queryParamValue.setInstancePointer(new InstancePointer(query));
		IClassFactory queryParamValueClassFactory = GlobalClassFactoryMap.get(queryParamValue.getCppInstanceTypeName());
		if (queryParamValueClassFactory != null)
		{
			queryParamValue.setDelegate(true);
			queryParamValue = (com.earthview.world.spatial2d.spatialindex.Point2DF)queryParamValueClassFactory.create();
			queryParamValue.setDelegate(true);
			queryParamValue.setInstancePointer(new InstancePointer(query));
		}
		com.earthview.world.spatial2d.spatialindex.Idvistor presultIDListParamValue = new com.earthview.world.spatial2d.spatialindex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
		presultIDListParamValue.setDelegate(true);
		presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		IClassFactory presultIDListParamValueClassFactory = GlobalClassFactoryMap.get(presultIDListParamValue.getCppInstanceTypeName());
		if (presultIDListParamValueClassFactory != null)
		{
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue = (com.earthview.world.spatial2d.spatialindex.Idvistor)presultIDListParamValueClassFactory.create();
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		}
		pointLocationQuery(queryParamValue, presultIDListParamValue);
	}

	native private void pointLocationQuery_Point2DF_IDVistor(long pNativeObject, long query, long presultIDList);
	/**
	 * 返回点落在某个feature时该feature之的ID
	 * @param query 查询点
	 * @param presultIDList featueID列表,长度为零表示没有
	 */
	public void pointLocationQuery(com.earthview.world.spatial2d.spatialindex.Point2DF query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		pointLocationQuery_Point2DF_IDVistor(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}
	native private void pointLocationQuery_Point2DF_IDVistor_NoVirtual(long pNativeObject, long query, long presultIDList);
	protected void pointLocationQuery_NoVirtual(com.earthview.world.spatial2d.spatialindex.Point2DF query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		pointLocationQuery_Point2DF_IDVistor_NoVirtual(this.nativeObject.pointer, queryParamValue, presultIDListParamValue);
	}

	protected  void nearestNeighborQuery_ev_real32_Data_IDVistor_callback(float dfthreshold, long query, long presultIDList)
	{
		float dfthresholdParamValue = dfthreshold;
		com.earthview.world.spatial2d.spatialindex.Data queryParamValue = new com.earthview.world.spatial2d.spatialindex.Data(CreatedWhenConstruct.CWC_NotToCreate);
		queryParamValue.setDelegate(true);
		queryParamValue.setInstancePointer(new InstancePointer(query));
		IClassFactory queryParamValueClassFactory = GlobalClassFactoryMap.get(queryParamValue.getCppInstanceTypeName());
		if (queryParamValueClassFactory != null)
		{
			queryParamValue.setDelegate(true);
			queryParamValue = (com.earthview.world.spatial2d.spatialindex.Data)queryParamValueClassFactory.create();
			queryParamValue.setDelegate(true);
			queryParamValue.setInstancePointer(new InstancePointer(query));
		}
		com.earthview.world.spatial2d.spatialindex.Idvistor presultIDListParamValue = new com.earthview.world.spatial2d.spatialindex.Idvistor(CreatedWhenConstruct.CWC_NotToCreate);
		presultIDListParamValue.setDelegate(true);
		presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		IClassFactory presultIDListParamValueClassFactory = GlobalClassFactoryMap.get(presultIDListParamValue.getCppInstanceTypeName());
		if (presultIDListParamValueClassFactory != null)
		{
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue = (com.earthview.world.spatial2d.spatialindex.Idvistor)presultIDListParamValueClassFactory.create();
			presultIDListParamValue.setDelegate(true);
			presultIDListParamValue.setInstancePointer(new InstancePointer(presultIDList));
		}
		nearestNeighborQuery(dfthresholdParamValue, queryParamValue, presultIDListParamValue);
	}

	native private void nearestNeighborQuery_ev_real32_Data_IDVistor(long pNativeObject, float dfthreshold, long query, long presultIDList);
	/**
	 * 与query距离小于dfthreshold之featureID
	 * @param dfthreshold query中心外扩距离
	 * @param query 邻近查询
	 * @param presultIDList featueID列表
	 */
	public void nearestNeighborQuery(float dfthreshold, com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		float dfthresholdParamValue = dfthreshold;
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		nearestNeighborQuery_ev_real32_Data_IDVistor(this.nativeObject.pointer, dfthresholdParamValue, queryParamValue, presultIDListParamValue);
	}
	native private void nearestNeighborQuery_ev_real32_Data_IDVistor_NoVirtual(long pNativeObject, float dfthreshold, long query, long presultIDList);
	protected void nearestNeighborQuery_NoVirtual(float dfthreshold, com.earthview.world.spatial2d.spatialindex.Data query, com.earthview.world.spatial2d.spatialindex.Idvistor presultIDList)
	{
		float dfthresholdParamValue = dfthreshold;
		long queryParamValue = query.nativeObject.pointer;
		long presultIDListParamValue = presultIDList.nativeObject.pointer;
		nearestNeighborQuery_ev_real32_Data_IDVistor_NoVirtual(this.nativeObject.pointer, dfthresholdParamValue, queryParamValue, presultIDListParamValue);
	}

	protected  int getIndexType_void_callback()
	{
		com.earthview.world.spatial2d.spatialindex.SINDEXTYPE returnValue = getIndexType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getIndexType_void(long pNativeObject);
	/**
	 * 获取索引类型
	 * @return 索引类型
	 */
	public com.earthview.world.spatial2d.spatialindex.SINDEXTYPE getIndexType()
	{
		int returnValue = getIndexType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.spatialindex.SINDEXTYPE.toEnum(returnValue);
	}
	native private int getIndexType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial2d.spatialindex.SINDEXTYPE getIndexType_NoVirtual()
	{
		int returnValue = getIndexType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.spatialindex.SINDEXTYPE.toEnum(returnValue);
	}

	protected  void getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback(long pnFeatureCount, long pnNodeCount, long pnMaxDepth, long pnMaxBucketCapacity)
	{
		IntegerPointer pnFeatureCountParamValue = new IntegerPointer(new InstancePointer(pnFeatureCount));
		IntegerPointer pnNodeCountParamValue = new IntegerPointer(new InstancePointer(pnNodeCount));
		IntegerPointer pnMaxDepthParamValue = new IntegerPointer(new InstancePointer(pnMaxDepth));
		IntegerPointer pnMaxBucketCapacityParamValue = new IntegerPointer(new InstancePointer(pnMaxBucketCapacity));
		getStatistics(pnFeatureCountParamValue, pnNodeCountParamValue, pnMaxDepthParamValue, pnMaxBucketCapacityParamValue);
	}

	native private void getStatistics_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, long pnFeatureCount, long pnNodeCount, long pnMaxDepth, long pnMaxBucketCapacity);
	/**
	 * 获取统计信息
	 * @param pnFeatureCount 要素个数
	 * @param pnNodeCount 节点个数
	 * @param pnMaxDepth 树的深度
	 * @param pnMaxBucketCapacity 每个叶子节点最大要素个数
	 */
	public void getStatistics(IntegerPointer pnFeatureCount, IntegerPointer pnNodeCount, IntegerPointer pnMaxDepth, IntegerPointer pnMaxBucketCapacity)
	{
		long pnFeatureCountParamValue = pnFeatureCount.nativeObject.pointer;
		long pnNodeCountParamValue = pnNodeCount.nativeObject.pointer;
		long pnMaxDepthParamValue = pnMaxDepth.nativeObject.pointer;
		long pnMaxBucketCapacityParamValue = pnMaxBucketCapacity.nativeObject.pointer;
		getStatistics_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, pnFeatureCountParamValue, pnNodeCountParamValue, pnMaxDepthParamValue, pnMaxBucketCapacityParamValue);
	}
	native private void getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, long pnFeatureCount, long pnNodeCount, long pnMaxDepth, long pnMaxBucketCapacity);
	protected void getStatistics_NoVirtual(IntegerPointer pnFeatureCount, IntegerPointer pnNodeCount, IntegerPointer pnMaxDepth, IntegerPointer pnMaxBucketCapacity)
	{
		long pnFeatureCountParamValue = pnFeatureCount.nativeObject.pointer;
		long pnNodeCountParamValue = pnNodeCount.nativeObject.pointer;
		long pnMaxDepthParamValue = pnMaxDepth.nativeObject.pointer;
		long pnMaxBucketCapacityParamValue = pnMaxBucketCapacity.nativeObject.pointer;
		getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, pnFeatureCountParamValue, pnNodeCountParamValue, pnMaxDepthParamValue, pnMaxBucketCapacityParamValue);
	}

	public Ispatialindex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialindex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_insertData_Data(long pNativeObject, String method);
	native protected void register_deleteData_Data(long pNativeObject, String method);
	native protected void register_containsWhatQuery_Data_IDVistor(long pNativeObject, String method);
	native protected void register_intersectsWithQuery_Data_IDVistor(long pNativeObject, String method);
	native protected void register_pointLocationQuery_Point2DF_IDVistor(long pNativeObject, String method);
	native protected void register_nearestNeighborQuery_ev_real32_Data_IDVistor(long pNativeObject, String method);
	native protected void register_getIndexType_void(long pNativeObject, String method);
	native protected void register_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_insertData_Data(this.nativeObject.pointer, "insertData_Data_callback");
			this.register_deleteData_Data(this.nativeObject.pointer, "deleteData_Data_callback");
			this.register_containsWhatQuery_Data_IDVistor(this.nativeObject.pointer, "containsWhatQuery_Data_IDVistor_callback");
			this.register_intersectsWithQuery_Data_IDVistor(this.nativeObject.pointer, "intersectsWithQuery_Data_IDVistor_callback");
			this.register_pointLocationQuery_Point2DF_IDVistor(this.nativeObject.pointer, "pointLocationQuery_Point2DF_IDVistor_callback");
			this.register_nearestNeighborQuery_ev_real32_Data_IDVistor(this.nativeObject.pointer, "nearestNeighborQuery_ev_real32_Data_IDVistor_callback");
			this.register_getIndexType_void(this.nativeObject.pointer, "getIndexType_void_callback");
			this.register_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback");
		}
	}
	
	public static Ispatialindex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialindex obj = null;
 		if(baseObj instanceof Ispatialindex)
		{
			obj = (Ispatialindex)baseObj;
		} else {
			obj = new Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialIndex");
			obj.increaseCast();
		}

		return obj;
	}
}
