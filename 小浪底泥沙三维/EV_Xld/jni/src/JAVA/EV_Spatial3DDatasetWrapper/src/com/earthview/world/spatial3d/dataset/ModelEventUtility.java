package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEventUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelEventUtility", new ModelEventUtilityClassFactory());
	}

	public ModelEventUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelEventUtility", null);
	}

	native private static void sendStopRenderEvent_IDataset(long pDataset);
	/**
	 * 发送停止渲染事件
	 */
	public static void sendStopRenderEvent(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		sendStopRenderEvent_IDataset(pDatasetParamValue);
	}
	native private static void sendStartRenderEvent_IDataset(long pDataset);
	/**
	 * 发送开始渲染事件
	 */
	public static void sendStartRenderEvent(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		sendStartRenderEvent_IDataset(pDatasetParamValue);
	}
	native private static void sendRefreshAllModelEvent_IDataset(long pDataset);
	/**
	 * 发送更新所有模型事件
	 */
	public static void sendRefreshAllModelEvent(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		sendRefreshAllModelEvent_IDataset(pDatasetParamValue);
	}
	native private static void sendUpdateModelEvent_IDataset_IFeature_EntityDatasetOperType(long pDataset, long info, int operType);
	/**
	 * 发送更新模型事件
	 */
	public static void sendUpdateModelEvent(com.earthview.world.spatial.geodataset.Idataset pDataset, com.earthview.world.spatial.geodataset.Ifeature info, com.earthview.world.spatial3d.dataset.EntityDatasetOperType operType)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		int operTypeParamValue = operType.getValue();
		sendUpdateModelEvent_IDataset_IFeature_EntityDatasetOperType(pDatasetParamValue, infoParamValue, operTypeParamValue);
	}
	native private static void sendUpdateAltitudeEvent_IDataset(long pDataset);
	/**
	 * 发送更新高度模式事件
	 */
	public static void sendUpdateAltitudeEvent(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		sendUpdateAltitudeEvent_IDataset(pDatasetParamValue);
	}
	native private static void sendUpdateOctreeEvent_IDataset_IFeature_EntityDatasetOperType(long pDataset, long info, int operType);
	/**
	 * 发送更新索引事件
	 */
	public static void sendUpdateOctreeEvent(com.earthview.world.spatial.geodataset.Idataset pDataset, com.earthview.world.spatial.geodataset.Ifeature info, com.earthview.world.spatial3d.dataset.EntityDatasetOperType operType)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		long infoParamValue = (info == null ? 0L : info.nativeObject.pointer);
		int operTypeParamValue = operType.getValue();
		sendUpdateOctreeEvent_IDataset_IFeature_EntityDatasetOperType(pDatasetParamValue, infoParamValue, operTypeParamValue);
	}
	native private static void sendRefreshOctreeEvent_IDataset(long pDataset);
	/**
	 * 通知刷新八叉树
	 * @param  
	 */
	public static void sendRefreshOctreeEvent(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		sendRefreshOctreeEvent_IDataset(pDatasetParamValue);
	}
	native private static void sendCommitIDEvent_IDataset_EntityDatasetOperType_ev_uint32_ev_uint32(long pDataset, int operType, long cacheID, long dbID);
	/**
	 * 通知提交的ID
	 * @param  
	 */
	public static void sendCommitIDEvent(com.earthview.world.spatial.geodataset.Idataset pDataset, com.earthview.world.spatial3d.dataset.EntityDatasetOperType operType, long cacheID, long dbID)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		int operTypeParamValue = operType.getValue();
		long cacheIDParamValue = cacheID;
		long dbIDParamValue = dbID;
		sendCommitIDEvent_IDataset_EntityDatasetOperType_ev_uint32_ev_uint32(pDatasetParamValue, operTypeParamValue, cacheIDParamValue, dbIDParamValue);
	}
	public ModelEventUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelEventUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelEventUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelEventUtility obj = null;
 		if(baseObj instanceof ModelEventUtility)
		{
			obj = (ModelEventUtility)baseObj;
		} else {
			obj = new ModelEventUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelEventUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
