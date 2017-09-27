package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDatasetUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDatasetUtility", new ModelDatasetUtilityClassFactory());
	}

	public ModelDatasetUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelDatasetUtility", null);
	}

	native private static long getTableFields_CSqlDatabase_EVString_IFields(long db, String tab, long flds);
	/**
	 * 获取表的结构
	 * @param db 数据库句柄
	 * @param tab 表名
	 * @param flds 传出的表结构
	 * @return 返回字段个数
	 */
	public static long getTableFields(com.earthview.world.core.database.SqlDatabase db, String tab, com.earthview.world.spatial.geodataset.Ifields flds)
	{
		long dbParamValue = db.nativeObject.pointer;
		String tabParamValue = tab;
		long fldsParamValue = (flds == null ? 0L : flds.nativeObject.pointer);
		long returnValue = getTableFields_CSqlDatabase_EVString_IFields(dbParamValue, tabParamValue, fldsParamValue);
		return returnValue;
	}
	native private static boolean clearTable_CSqlDatabase_EVString(long db, long tab);
	/**
	 * 清空数据库表记录
	 * @param db 数据库句柄
	 * @param tab 表名
	 * @return true成功，false失败
	 */
	public static boolean clearTable(com.earthview.world.core.database.SqlDatabase db, StringPointer tab)
	{
		long dbParamValue = db.nativeObject.pointer;
		long tabParamValue = tab.nativeObject.pointer;
		boolean returnValue = clearTable_CSqlDatabase_EVString(dbParamValue, tabParamValue);
		return returnValue;
	}
	native private static void convertToWgs84_ISpatialReference_CEnvelope_CEnvelope(long spatialRef, long resEnvelope, long desEnvelope);
	/**
	 * 转到wgs84坐标系下
	 * @param spatialRef 数据投影
	 * @param resEnvelope 原始的包围盒
	 * @param desEnvelope 投影后的包围盒
	 */
	public static void convertToWgs84(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.geometry.Envelope resEnvelope, com.earthview.world.spatial.geometry.Envelope desEnvelope)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long resEnvelopeParamValue = resEnvelope.nativeObject.pointer;
		long desEnvelopeParamValue = desEnvelope.nativeObject.pointer;
		convertToWgs84_ISpatialReference_CEnvelope_CEnvelope(spatialRefParamValue, resEnvelopeParamValue, desEnvelopeParamValue);
	}
	native private static void convertToWgs84_ISpatialReference_CVector3_CVector3(long spatialRef, long resVector, long desVector);
	/**
	 * 转到wgs84坐标系下
	 * @param spatialRef 数据投影
	 * @param resEnvelope 原始的点
	 * @param desEnvelope 投影后的点
	 */
	public static void convertToWgs84(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.math.Vector3 resVector, com.earthview.world.spatial.math.Vector3 desVector)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long resVectorParamValue = resVector.nativeObject.pointer;
		long desVectorParamValue = desVector.nativeObject.pointer;
		convertToWgs84_ISpatialReference_CVector3_CVector3(spatialRefParamValue, resVectorParamValue, desVectorParamValue);
	}
	native private static void convertWgs84ToProjCoordinateData_ISpatialReference_CEnvelope_CEnvelope(long spatialRef, long resEnvelope, long desEnvelope);
	/**
	 * 从wgs84转到投影坐标系下
	 * @param spatialRef 数据投影
	 * @param resEnvelope 原始的包围盒
	 * @param desEnvelope 投影后的包围盒
	 */
	public static void convertWgs84ToProjCoordinateData(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.geometry.Envelope resEnvelope, com.earthview.world.spatial.geometry.Envelope desEnvelope)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long resEnvelopeParamValue = resEnvelope.nativeObject.pointer;
		long desEnvelopeParamValue = desEnvelope.nativeObject.pointer;
		convertWgs84ToProjCoordinateData_ISpatialReference_CEnvelope_CEnvelope(spatialRefParamValue, resEnvelopeParamValue, desEnvelopeParamValue);
	}
	native private static void convertWgs84ToProjCoordinateData_ISpatialReference_CVector3_CVector3(long spatialRef, long resVector, long desVector);
	/**
	 * 从wgs84转到投影坐标系下
	 * @param spatialRef 数据投影
	 * @param resEnvelope 原始的点
	 * @param desEnvelope 投影后的点
	 */
	public static void convertWgs84ToProjCoordinateData(com.earthview.world.spatial.geometry.Ispatialreference spatialRef, com.earthview.world.spatial.math.Vector3 resVector, com.earthview.world.spatial.math.Vector3 desVector)
	{
		long spatialRefParamValue = (spatialRef == null ? 0L : spatialRef.nativeObject.pointer);
		long resVectorParamValue = resVector.nativeObject.pointer;
		long desVectorParamValue = desVector.nativeObject.pointer;
		convertWgs84ToProjCoordinateData_ISpatialReference_CVector3_CVector3(spatialRefParamValue, resVectorParamValue, desVectorParamValue);
	}
	native private static long QuaterToAngle_CQuaternion(long quter);
	/**
	 * 四元数转x,y,z三个轴旋转角度
	 * @param quter x
	 */
	public static com.earthview.world.spatial.math.Vector3 QuaterToAngle(com.earthview.world.spatial.math.Quaternion quter)
	{
		long quterParamValue = quter.nativeObject.pointer;
		long returnValue = QuaterToAngle_CQuaternion(quterParamValue);
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
	native private static long AngleToQuater_CVector3(long v3);
	/**
	 * x,y,z三个轴旋转角度转四元数
	 * @param x x
	 * @param y y
	 * @param z z
	 * @param w w
	 */
	public static com.earthview.world.spatial.math.Quaternion AngleToQuater(com.earthview.world.spatial.math.Vector3 v3)
	{
		long v3ParamValue = v3.nativeObject.pointer;
		long returnValue = AngleToQuater_CVector3(v3ParamValue);
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
	native private static boolean isCubeTexture_EVString(String filename);
	/**
	 * 文件名是否是立方体纹理
	 * @param filename 文件名
	 */
	public static boolean isCubeTexture(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = isCubeTexture_EVString(filenameParamValue);
		return returnValue;
	}
	public ModelDatasetUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDatasetUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDatasetUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDatasetUtility obj = null;
 		if(baseObj instanceof ModelDatasetUtility)
		{
			obj = (ModelDatasetUtility)baseObj;
		} else {
			obj = new ModelDatasetUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDatasetUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
