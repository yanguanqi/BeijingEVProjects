package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelFeatureUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelFeatureUtility", new ModelFeatureUtilityClassFactory());
	}

	public ModelFeatureUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelFeatureUtility", null);
	}

	native private static boolean checkDDS_EVString(String filename);
	public static boolean checkDDS(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = checkDDS_EVString(filenameParamValue);
		return returnValue;
	}
	native private static void releaseFeatureVector_FeatureVector(long featureVec);
	/**
	 * 释放feature容器内存
	 * @param featureVec feature容器
	 */
	public static void releaseFeatureVector(com.earthview.world.spatial3d.dataset.FeatureVector featureVec)
	{
		long featureVecParamValue = featureVec.nativeObject.pointer;
		releaseFeatureVector_FeatureVector(featureVecParamValue);
	}
	native private static void releaseFeature_IFeature(long feature);
	/**
	 * 释放feature内存
	 * @param feature feature
	 */
	public static void releaseFeature(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		releaseFeature_IFeature(featureParamValue);
	}
	native private static void setFeatureVectorDataStreamNull_FeatureVector(long featureVec);
	/**
	 * 设置feature容器的流为空
	 * @param featureVec feature容器
	 */
	public static void setFeatureVectorDataStreamNull(com.earthview.world.spatial3d.dataset.FeatureVector featureVec)
	{
		long featureVecParamValue = featureVec.nativeObject.pointer;
		setFeatureVectorDataStreamNull_FeatureVector(featureVecParamValue);
	}
	native private static boolean setEntityID_IFeature_ev_uint32(long pMeshFeature, long entID);
	/**
	 * 设置实体ID字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param entID 实体ID
	 * @return 成功true，失败false
	 */
	public static boolean setEntityID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, long entID)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long entIDParamValue = entID;
		boolean returnValue = setEntityID_IFeature_ev_uint32(pMeshFeatureParamValue, entIDParamValue);
		return returnValue;
	}
	native private static long getEntityID_IFeature(long pMeshFeature);
	/**
	 * 获取实体ID字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回实体ID
	 */
	public static long getEntityID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getEntityID_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setEntityName_IFeature_EVString(long pMeshFeature, String entName);
	/**
	 * 设置实体名称字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param entName 实体ID
	 * @return 成功true，失败false
	 */
	public static boolean setEntityName(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, String entName)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String entNameParamValue = entName;
		boolean returnValue = setEntityName_IFeature_EVString(pMeshFeatureParamValue, entNameParamValue);
		return returnValue;
	}
	native private static String getEntityName_IFeature(long pMeshFeature);
	/**
	 * 获取实体名称字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回实体名称
	 */
	public static String getEntityName(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String returnValue = getEntityName_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setEntityBound_IFeature_CAxisAlignedBox(long pMeshFeature, long box);
	/**
	 * 设置实体包围盒字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param box 实体包围盒
	 * @return 成功true，失败false
	 */
	public static boolean setEntityBound(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = setEntityBound_IFeature_CAxisAlignedBox(pMeshFeatureParamValue, boxParamValue);
		return returnValue;
	}
	native private static long getEntityBound_IFeature(long pMeshFeature);
	/**
	 * 获取实体包围盒字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回实体包围盒
	 */
	public static com.earthview.world.spatial.math.AxisAlignedBox getEntityBound(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getEntityBound_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private static boolean setEntityPos_ISpatialReference_IFeature_CVector3(long spatialRef, long pMeshFeature, long pos);
	/**
	 * 设置指定坐标系统类型的位置值，输入的是地理坐标（图层的feature）
	 * @param spatialRef 空间参考
	 * @param pMeshFeature mesh的feature
	 * @param pos 地理坐标
	 * @return 成功true，失败false
	 */
	public static boolean setEntityPos(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Vector3 pos)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = setEntityPos_ISpatialReference_IFeature_CVector3(spatialRefParamValue, pMeshFeatureParamValue, posParamValue);
		return returnValue;
	}
	native private static boolean setEntityPos_IFeature_CVector3(long pMeshFeature, long pos);
	public static boolean setEntityPos(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Vector3 pos)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = setEntityPos_IFeature_CVector3(pMeshFeatureParamValue, posParamValue);
		return returnValue;
	}
	native private static long getOriginalEntityPos_IFeature(long pMeshFeature);
	/**
	 * 获取原始坐标系统的位置值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回位置值
	 */
	public static com.earthview.world.spatial.math.Vector3 getOriginalEntityPos(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getOriginalEntityPos_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long getWgs84EntityPos_ISpatialReference_IFeature(long spatialRef, long pMeshFeature);
	/**
	 * 获取地理坐标系统的位置（图层的feature）
	 * @param spatialRef 空间参考
	 * @param pMeshFeature mesh的feature
	 * @return 返回位置值
	 */
	public static com.earthview.world.spatial.math.Vector3 getWgs84EntityPos(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getWgs84EntityPos_ISpatialReference_IFeature(spatialRefParamValue, pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static boolean setEntityScale_IFeature_CVector3(long pMeshFeature, long scale);
	/**
	 * 设置实体缩放（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param scale 缩放
	 * @return 成功true，失败false
	 */
	public static boolean setEntityScale(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Vector3 scale)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = setEntityScale_IFeature_CVector3(pMeshFeatureParamValue, scaleParamValue);
		return returnValue;
	}
	native private static long getEntityScale_IFeature(long pMeshFeature);
	/**
	 * 获取实体缩放（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回实体缩放
	 */
	public static com.earthview.world.spatial.math.Vector3 getEntityScale(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getEntityScale_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static boolean setEntityQuaternion_IFeature_CQuaternion(long pMeshFeature, long qua);
	/**
	 * 设置实体旋转（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param qua 旋转
	 * @return 成功true，失败false
	 */
	public static boolean setEntityQuaternion(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Quaternion qua)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long quaParamValue = qua.nativeObject.pointer;
		boolean returnValue = setEntityQuaternion_IFeature_CQuaternion(pMeshFeatureParamValue, quaParamValue);
		return returnValue;
	}
	native private static long getEntityQuaternion_IFeature(long pMeshFeature);
	/**
	 * 获取实体旋转（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 返回实体缩放
	 */
	public static com.earthview.world.spatial.math.Quaternion getEntityQuaternion(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getEntityQuaternion_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private static boolean setEntityFromTemplate_IFeature_ev_bool(long pMeshFeature, boolean flag);
	/**
	 * 设置是否从模型库字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param flag true是模型库拖入的，false直接导入
	 * @return 成功true，失败false
	 */
	public static boolean setEntityFromTemplate(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, boolean flag)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean flagParamValue = flag;
		boolean returnValue = setEntityFromTemplate_IFeature_ev_bool(pMeshFeatureParamValue, flagParamValue);
		return returnValue;
	}
	native private static boolean getEntityFromTemplate_IFeature(long pMeshFeature);
	/**
	 * 获取是否从模型库字段值（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @return true是模型库拖入的，false直接导入
	 */
	public static boolean getEntityFromTemplate(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		boolean returnValue = getEntityFromTemplate_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setAltitude_IFeature_EVAltitudeMode_ev_real64(long pMeshFeature, int altitudeMode, double altitudeVal);
	/**
	 * 设置实体的高度模式（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param altitudeMode 高度模式
	 * @param altitudeVal 高度模式值
	 * @return 成功true，失败false
	 */
	public static boolean setAltitude(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.utility.EVAltitudeMode altitudeMode, double altitudeVal)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		int altitudeModeParamValue = altitudeMode.getValue();
		double altitudeValParamValue = altitudeVal;
		boolean returnValue = setAltitude_IFeature_EVAltitudeMode_ev_real64(pMeshFeatureParamValue, altitudeModeParamValue, altitudeValParamValue);
		return returnValue;
	}
	native private static boolean getAltitude_IFeature_EVAltitudeMode_ev_real64(long pMeshFeature, long altitudeMode, long altitudeVal);
	/**
	 * 获取实体的高度模式（图层的feature）
	 * @param pMeshFeature mesh的feature
	 * @param altitudeMode 高度模式
	 * @param altitudeVal 高度模式值
	 * @return 成功true，失败false
	 */
	public static boolean getAltitude(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, EnumPointer altitudeMode, DoublePointer altitudeVal)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long altitudeModeParamValue = altitudeMode.nativeObject.pointer;
		long altitudeValParamValue = altitudeVal.nativeObject.pointer;
		boolean returnValue = getAltitude_IFeature_EVAltitudeMode_ev_real64(pMeshFeatureParamValue, altitudeModeParamValue, altitudeValParamValue);
		return returnValue;
	}
	native private static boolean setMeshID_IFeature_ev_uint32(long pMeshFeature, long meshID);
	/**
	 * 设置实体关联的mesh的ID值
	 * @param pMeshFeature mesh的feature
	 * @param meshID meshID
	 * @return 成功true，失败false
	 */
	public static boolean setMeshID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, long meshID)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long meshIDParamValue = meshID;
		boolean returnValue = setMeshID_IFeature_ev_uint32(pMeshFeatureParamValue, meshIDParamValue);
		return returnValue;
	}
	native private static long getMeshID_IFeature(long pMeshFeature);
	/**
	 * 获取实体关联的mesh的ID值
	 * @param pMeshFeature mesh的feature
	 * @return 返回meshID
	 */
	public static long getMeshID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshID_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setMeshTmplID_IFeature_ev_uint32(long pMeshFeature, long meshTmplID);
	/**
	 * 设置模型库模型的ID值（模型库的feature）
	 * @param pMeshFeature mesh的feature
	 * @param meshTmplID 模型库中ID
	 * @return 成功true，失败false
	 */
	public static boolean setMeshTmplID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, long meshTmplID)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long meshTmplIDParamValue = meshTmplID;
		boolean returnValue = setMeshTmplID_IFeature_ev_uint32(pMeshFeatureParamValue, meshTmplIDParamValue);
		return returnValue;
	}
	native private static long getMeshTmplID_IFeature(long pMeshFeature);
	/**
	 * 获取模型库模型的ID值（模型库的feature）
	 * @param pMeshFeature mesh的feature
	 * @return 模型库数据集的ID
	 */
	public static long getMeshTmplID(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshTmplID_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setMeshName_IFeature_EVString(long pMeshFeature, String meshName);
	/**
	 * 设置mesh名称字段值
	 * @param pMeshFeature mesh的feature
	 * @param meshName mesh名称
	 * @return 成功true，失败false
	 */
	public static boolean setMeshName(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, String meshName)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String meshNameParamValue = meshName;
		boolean returnValue = setMeshName_IFeature_EVString(pMeshFeatureParamValue, meshNameParamValue);
		return returnValue;
	}
	native private static String getMeshName_IFeature(long pMeshFeature);
	/**
	 * 获取mesh名称字段值
	 * @param pMeshFeature mesh的feature
	 * @return 返回mesh名称
	 */
	public static String getMeshName(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String returnValue = getMeshName_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setMeshFilename_IFeature_EVString(long pMeshFeature, String meshFilename);
	/**
	 * 设置mesh文件名称字段值
	 * @param pMeshFeature mesh的feature
	 * @param meshFilename mesh文件名称字段值
	 * @return 成功true，失败false
	 */
	public static boolean setMeshFilename(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, String meshFilename)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String meshFilenameParamValue = meshFilename;
		boolean returnValue = setMeshFilename_IFeature_EVString(pMeshFeatureParamValue, meshFilenameParamValue);
		return returnValue;
	}
	native private static String getMeshFilename_IFeature(long pMeshFeature);
	/**
	 * 获取mesh文件名称字段值
	 * @param pMeshFeature mesh的feature
	 * @return 返回mesh文件名称字段值
	 */
	public static String getMeshFilename(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		String returnValue = getMeshFilename_IFeature(pMeshFeatureParamValue);
		return returnValue;
	}
	native private static boolean setMeshData_IFeature_MemoryDataStreamPtr(long pMeshFeature, long meshData);
	/**
	 * 设置mesh数据流字段值
	 * @param pMeshFeature mesh的feature
	 * @param meshData mesh数据流
	 * @return 成功true，失败false
	 */
	public static boolean setMeshData(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.core.MemoryDataStreamPtr meshData)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long meshDataParamValue = meshData.nativeObject.pointer;
		boolean returnValue = setMeshData_IFeature_MemoryDataStreamPtr(pMeshFeatureParamValue, meshDataParamValue);
		return returnValue;
	}
	native private static long getMeshData_IFeature(long pMeshFeature);
	/**
	 * 获取mesh数据流字段值
	 * @param pMeshFeature mesh的feature
	 * @return 返回mesh数据流字段值
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr getMeshData(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshData_IFeature(pMeshFeatureParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static boolean setMeshPos_IFeature_CVector3(long pMeshFeature, long pos);
	/**
	 * 设置mesh在模型库中偏移位置
	 * @param pMeshFeature mesh的feature
	 * @param pos 模型库中偏移位置
	 * @return 成功true，失败false
	 */
	public static boolean setMeshPos(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Vector3 pos)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = setMeshPos_IFeature_CVector3(pMeshFeatureParamValue, posParamValue);
		return returnValue;
	}
	native private static long getMeshPos_IFeature(long pMeshFeature);
	/**
	 * 获取esh在模型库中偏移位置
	 * @param pMeshFeature mesh的feature
	 * @return 返回模型库中偏移位置
	 */
	public static com.earthview.world.spatial.math.Vector3 getMeshPos(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshPos_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static boolean setMeshScale_IFeature_CVector3(long pMeshFeature, long scale);
	/**
	 * 设置mesh在模型库中缩放
	 * @param pMeshFeature mesh的feature
	 * @param scale 模型库中缩放
	 * @return 成功true，失败false
	 */
	public static boolean setMeshScale(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Vector3 scale)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long scaleParamValue = scale.nativeObject.pointer;
		boolean returnValue = setMeshScale_IFeature_CVector3(pMeshFeatureParamValue, scaleParamValue);
		return returnValue;
	}
	native private static long getMeshScale_IFeature(long pMeshFeature);
	/**
	 * 获取mesh在模型库中缩放
	 * @param pMeshFeature mesh的feature
	 * @return 返回模型库中缩放
	 */
	public static com.earthview.world.spatial.math.Vector3 getMeshScale(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshScale_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static boolean setMeshQuaternion_IFeature_CQuaternion(long pMeshFeature, long qua);
	/**
	 * 设置mesh在模型库中旋转
	 * @param pMeshFeature mesh的feature
	 * @param qua 模型库中旋转
	 * @return 成功true，失败false
	 */
	public static boolean setMeshQuaternion(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, com.earthview.world.spatial.math.Quaternion qua)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long quaParamValue = qua.nativeObject.pointer;
		boolean returnValue = setMeshQuaternion_IFeature_CQuaternion(pMeshFeatureParamValue, quaParamValue);
		return returnValue;
	}
	native private static long getMeshQuaternion_IFeature(long pMeshFeature);
	/**
	 * 获取mesh在模型库中旋转
	 * @param pMeshFeature mesh的feature
	 * @return 返回模型库中旋转
	 */
	public static com.earthview.world.spatial.math.Quaternion getMeshQuaternion(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long returnValue = getMeshQuaternion_IFeature(pMeshFeatureParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private static boolean setResID_IFeature_ev_uint32(long pResFeature, long resID);
	/**
	 * 设置mesh关联的资源ID
	 * @param pResFeature mesh的资源feature
	 * @param resID 资源ID
	 * @return 成功true，失败false
	 */
	public static boolean setResID(com.earthview.world.spatial.geodataset.Ifeature pResFeature, long resID)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long resIDParamValue = resID;
		boolean returnValue = setResID_IFeature_ev_uint32(pResFeatureParamValue, resIDParamValue);
		return returnValue;
	}
	native private static long getResID_IFeature(long pResFeature);
	/**
	 * 获取mesh关联的资源ID
	 * @param pResFeature mesh的资源feature
	 * @return 返回资源ID
	 */
	public static long getResID(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long returnValue = getResID_IFeature(pResFeatureParamValue);
		return returnValue;
	}
	native private static boolean setResFilename_IFeature_EVString(long pResFeature, String resFilename);
	/**
	 * 设置mesh关联的资源文件名
	 * @param pResFeature mesh的资源feature
	 * @param resFilename 资源文件名
	 * @return 成功true，失败false
	 */
	public static boolean setResFilename(com.earthview.world.spatial.geodataset.Ifeature pResFeature, String resFilename)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		String resFilenameParamValue = resFilename;
		boolean returnValue = setResFilename_IFeature_EVString(pResFeatureParamValue, resFilenameParamValue);
		return returnValue;
	}
	native private static String getResFilename_IFeature(long pResFeature);
	/**
	 * 获取mesh关联的资源文件名
	 * @param pResFeature mesh的资源feature
	 * @return 返回资源文件名
	 */
	public static String getResFilename(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		String returnValue = getResFilename_IFeature(pResFeatureParamValue);
		return returnValue;
	}
	native private static boolean setResType_IFeature_MaterialResourceType(long pResFeature, int type);
	/**
	 * 设置mesh关联的资源类别
	 * @param pResFeature mesh的资源feature
	 * @param type 资源类别
	 * @return 成功true，失败false
	 */
	public static boolean setResType(com.earthview.world.spatial.geodataset.Ifeature pResFeature, com.earthview.world.spatial3d.dataset.MaterialResourceType type)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = setResType_IFeature_MaterialResourceType(pResFeatureParamValue, typeParamValue);
		return returnValue;
	}
	native private static int getResType_IFeature(long pResFeature);
	/**
	 * 获取mesh关联的资源类别
	 * @param pResFeature mesh的资源feature
	 * @return 返回资源类别
	 */
	public static com.earthview.world.spatial3d.dataset.MaterialResourceType getResType(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		int returnValue = getResType_IFeature(pResFeatureParamValue);
		return com.earthview.world.spatial3d.dataset.MaterialResourceType.toEnum(returnValue);
	}
	native private static boolean setResData_IFeature_MemoryDataStreamPtr(long pResFeature, long resData);
	/**
	 * 设置mesh关联的资源数据流
	 * @param pResFeature mesh的资源feature
	 * @param resData 资源数据流
	 * @return 成功true，失败false
	 */
	public static boolean setResData(com.earthview.world.spatial.geodataset.Ifeature pResFeature, com.earthview.world.core.MemoryDataStreamPtr resData)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long resDataParamValue = resData.nativeObject.pointer;
		boolean returnValue = setResData_IFeature_MemoryDataStreamPtr(pResFeatureParamValue, resDataParamValue);
		return returnValue;
	}
	native private static long getResData_IFeature(long pResFeature);
	/**
	 * 获取mesh关联的资源数据流
	 * @param pResFeature mesh的资源feature
	 * @return 返回资源数据流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr getResData(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long returnValue = getResData_IFeature(pResFeatureParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static boolean setRefResID_IFeature_ev_uint32(long pResFeature, long resID);
	/**
	 * 设置mesh与资源的关联表的资源ID
	 * @param pResFeature mesh的资源feature
	 * @param resID 关联表的资源ID
	 * @return 成功true，失败false
	 */
	public static boolean setRefResID(com.earthview.world.spatial.geodataset.Ifeature pResFeature, long resID)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long resIDParamValue = resID;
		boolean returnValue = setRefResID_IFeature_ev_uint32(pResFeatureParamValue, resIDParamValue);
		return returnValue;
	}
	native private static long getRefResID_IFeature(long pResFeature);
	/**
	 * 获取mesh与资源的关联表的资源ID
	 * @param pResFeature mesh的资源feature
	 * @return 返回mesh与资源的关联表的资源ID
	 */
	public static long getRefResID(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long returnValue = getRefResID_IFeature(pResFeatureParamValue);
		return returnValue;
	}
	native private static boolean setRefMeshID_IFeature_ev_uint32(long pResFeature, long meshID);
	/**
	 * 设置mesh与资源的关联表的meshID
	 * @param pResFeature mesh的资源feature
	 * @param meshID 关联表的meshID
	 * @return 成功true，失败false
	 */
	public static boolean setRefMeshID(com.earthview.world.spatial.geodataset.Ifeature pResFeature, long meshID)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long meshIDParamValue = meshID;
		boolean returnValue = setRefMeshID_IFeature_ev_uint32(pResFeatureParamValue, meshIDParamValue);
		return returnValue;
	}
	native private static long getRefMeshID_IFeature(long pResFeature);
	/**
	 * 获取mesh与资源的关联表的meshID
	 * @param pResFeature mesh的资源feature
	 * @return 返回mesh与资源的关联表的meshID
	 */
	public static long getRefMeshID(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long returnValue = getRefMeshID_IFeature(pResFeatureParamValue);
		return returnValue;
	}
	native private static boolean setResRefCount_IFeature_ev_uint32(long pResFeature, long refCount);
	/**
	 * 设置mesh资源的引用计数
	 * @param pResFeature mesh的资源feature
	 * @param refCount 引用计数
	 * @return 成功true，失败false
	 */
	public static boolean setResRefCount(com.earthview.world.spatial.geodataset.Ifeature pResFeature, long refCount)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long refCountParamValue = refCount;
		boolean returnValue = setResRefCount_IFeature_ev_uint32(pResFeatureParamValue, refCountParamValue);
		return returnValue;
	}
	native private static long getResRefCount_IFeature(long pResFeature);
	/**
	 * 获取mesh资源的引用计数
	 * @param pResFeature mesh的资源feature
	 * @return 返回mesh资源的引用计数
	 */
	public static long getResRefCount(com.earthview.world.spatial.geodataset.Ifeature pResFeature)
	{
		long pResFeatureParamValue = (pResFeature == null ? 0L : pResFeature.nativeObject.pointer);
		long returnValue = getResRefCount_IFeature(pResFeatureParamValue);
		return returnValue;
	}
	native private static void getBoundCenter_IFeature_ev_real64_ev_real64_ev_real64(long pMeshFeature, long latitude, long longitude, long altitude);
	/**
	 * 获取包围盒中心点
	 * @param pMeshFeature mesh的feature
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 高度
	 * @return 成功true，失败false
	 */
	public static void getBoundCenter(com.earthview.world.spatial.geodataset.Ifeature pMeshFeature, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude)
	{
		long pMeshFeatureParamValue = (pMeshFeature == null ? 0L : pMeshFeature.nativeObject.pointer);
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		getBoundCenter_IFeature_ev_real64_ev_real64_ev_real64(pMeshFeatureParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue);
	}
	native private static void mergeFeature_IFeature_IFeature(long pOutFeature, long pSrcFeature);
	/**
	 * 把pSrcFeature合并到pOutFeature中去
	 * @param pOutFeature 
	 * @param pSrcFeature 纬度
	 * @return 成功true，失败false
	 */
	public static void mergeFeature(NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> pOutFeature, com.earthview.world.spatial.geodataset.Ifeature pSrcFeature)
	{
		long pOutFeatureParamValue = pOutFeature.nativeObject.pointer;
		long pSrcFeatureParamValue = (pSrcFeature == null ? 0L : pSrcFeature.nativeObject.pointer);
		mergeFeature_IFeature_IFeature(pOutFeatureParamValue, pSrcFeatureParamValue);
	}
	public ModelFeatureUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelFeatureUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelFeatureUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelFeatureUtility obj = null;
 		if(baseObj instanceof ModelFeatureUtility)
		{
			obj = (ModelFeatureUtility)baseObj;
		} else {
			obj = new ModelFeatureUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelFeatureUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
