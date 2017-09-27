package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDatasetSpatialUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility", new ModelDatasetSpatialUtilityClassFactory());
	}

	public ModelDatasetSpatialUtility(com.earthview.world.spatial3d.dataset.EntityDataset ds) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dsPtr = new BasePointer(ds);
		list.add("ds", dsPtr.get());
		Create("CModelDatasetSpatialUtility", list);
	}

	native private boolean rebuildSpatialIndex_void(long pNativeObject);
	public boolean rebuildSpatialIndex()
	{
		boolean returnValue = rebuildSpatialIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebuildSpatialIndex_start_void(long pNativeObject);
	///开始重建索引的准备工作
	public boolean rebuildSpatialIndex_start()
	{
		boolean returnValue = rebuildSpatialIndex_start_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebuildSpatialIndex_hasNextRecord_void(long pNativeObject);
	///返回是否还有下一条需要计算
	public boolean rebuildSpatialIndex_hasNextRecord()
	{
		boolean returnValue = rebuildSpatialIndex_hasNextRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebuildSpatialIndex_execNextRecord_void(long pNativeObject);
	///执行下一条记录的计算
	public boolean rebuildSpatialIndex_execNextRecord()
	{
		boolean returnValue = rebuildSpatialIndex_execNextRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebuildSpatialIndex_save_void(long pNativeObject);
	///保存到数据库，并重新开启事务
	public boolean rebuildSpatialIndex_save()
	{
		boolean returnValue = rebuildSpatialIndex_save_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean rebuildSpatialIndex_stop_ev_bool(long pNativeObject, boolean commitFlag);
	///停止计算
	public boolean rebuildSpatialIndex_stop(boolean commitFlag)
	{
		boolean commitFlagParamValue = commitFlag;
		boolean returnValue = rebuildSpatialIndex_stop_ev_bool(this.nativeObject.pointer, commitFlagParamValue);
		return returnValue;
	}
	native private boolean updateSpatialIndex_EVAltitudeMode_ev_real64(long pNativeObject, int altitudeMode, double altitudeVal);
	///一次性计算整个数据集
	public boolean updateSpatialIndex(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeVal)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValParamValue = altitudeVal;
		boolean returnValue = updateSpatialIndex_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altitudeModeParamValue, altitudeValParamValue);
		return returnValue;
	}
	native private boolean updateSpatialIndex_start_EVAltitudeMode_ev_real64(long pNativeObject, int altitudeMode, double altitudeVal);
	///分次计算数据集每条记录
	///开始重建索引的准备工作
	public boolean updateSpatialIndex_start(com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeVal)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValParamValue = altitudeVal;
		boolean returnValue = updateSpatialIndex_start_EVAltitudeMode_ev_real64(this.nativeObject.pointer, altitudeModeParamValue, altitudeValParamValue);
		return returnValue;
	}
	native private boolean updateSpatialIndex_hasNextRecord_void(long pNativeObject);
	///返回是否还有下一条需要计算
	public boolean updateSpatialIndex_hasNextRecord()
	{
		boolean returnValue = updateSpatialIndex_hasNextRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateSpatialIndex_execNextRecord_void(long pNativeObject);
	///执行下一条记录的计算
	public boolean updateSpatialIndex_execNextRecord()
	{
		boolean returnValue = updateSpatialIndex_execNextRecord_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateSpatialIndex_save_void(long pNativeObject);
	///保存到数据库，并重新开启事务
	public boolean updateSpatialIndex_save()
	{
		boolean returnValue = updateSpatialIndex_save_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateSpatialIndex_stop_ev_bool(long pNativeObject, boolean commitFlag);
	///停止，事务结束
	public boolean updateSpatialIndex_stop(boolean commitFlag)
	{
		boolean commitFlagParamValue = commitFlag;
		boolean returnValue = updateSpatialIndex_stop_ev_bool(this.nativeObject.pointer, commitFlagParamValue);
		return returnValue;
	}
	native private static void getTransformAfterChangeAltitude_CAxisAlignedBox_CMatrix4_CMatrix4_EVAltitudeMode_ev_real64_ev_real64_CMatrix4_CMatrix4(long meshBound, long meshModelDBMatrix, long sceneMatrix, int altitudeMode, double altitudeVal, double dem, long outSceneMatrix, long outBoundMatrix);
	public static void getTransformAfterChangeAltitude(com.earthview.world.spatial.math.AxisAlignedBox meshBound, com.earthview.world.spatial.math.Matrix4 meshModelDBMatrix, com.earthview.world.spatial.math.Matrix4 sceneMatrix, com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeVal, double dem, com.earthview.world.spatial.math.Matrix4 outSceneMatrix, com.earthview.world.spatial.math.Matrix4 outBoundMatrix)
	{
		long meshBoundParamValue = meshBound.nativeObject.pointer;
		long meshModelDBMatrixParamValue = meshModelDBMatrix.nativeObject.pointer;
		long sceneMatrixParamValue = sceneMatrix.nativeObject.pointer;
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValParamValue = altitudeVal;
		double demParamValue = dem;
		long outSceneMatrixParamValue = outSceneMatrix.nativeObject.pointer;
		long outBoundMatrixParamValue = outBoundMatrix.nativeObject.pointer;
		getTransformAfterChangeAltitude_CAxisAlignedBox_CMatrix4_CMatrix4_EVAltitudeMode_ev_real64_ev_real64_CMatrix4_CMatrix4(meshBoundParamValue, meshModelDBMatrixParamValue, sceneMatrixParamValue, altitudeModeParamValue, altitudeValParamValue, demParamValue, outSceneMatrixParamValue, outBoundMatrixParamValue);
	}
	public ModelDatasetSpatialUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDatasetSpatialUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDatasetSpatialUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDatasetSpatialUtility obj = null;
 		if(baseObj instanceof ModelDatasetSpatialUtility)
		{
			obj = (ModelDatasetSpatialUtility)baseObj;
		} else {
			obj = new ModelDatasetSpatialUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDatasetSpatialUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
