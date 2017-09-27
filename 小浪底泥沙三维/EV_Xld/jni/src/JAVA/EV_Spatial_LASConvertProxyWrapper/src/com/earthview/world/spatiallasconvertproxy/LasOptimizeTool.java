package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasOptimizeTool extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool", new LasOptimizeToolClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LasOptimizeTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLasOptimizeTool", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.spatiallasconvertproxy.LasOptimizeTool getSingleton()
	{
		long returnValue = getSingleton_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatiallasconvertproxy.LasOptimizeTool __returnValue = new com.earthview.world.spatiallasconvertproxy.LasOptimizeTool(CreatedWhenConstruct.CWC_NotToCreate, "CLasOptimizeTool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatiallasconvertproxy.LasOptimizeTool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLasOptimizeTool");
		}
		return __returnValue;
	}
	native private static void destorySingleton_void();
	public static void destorySingleton()
	{
		destorySingleton_void();
	}
	native private void optimizeLas_StringVector_CAxisAlignedBox_CLasOptimizeParams(long pNativeObject, long dataFiles, long box, long params);
	public void optimizeLas(com.earthview.world.core.StringVector dataFiles, com.earthview.world.spatial.math.AxisAlignedBox box, com.earthview.world.spatiallasconvertproxy.LasOptimizeParams params)
	{
		long dataFilesParamValue = dataFiles.nativeObject.pointer;
		long boxParamValue = box.nativeObject.pointer;
		long paramsParamValue = params.nativeObject.pointer;
		optimizeLas_StringVector_CAxisAlignedBox_CLasOptimizeParams(this.nativeObject.pointer, dataFilesParamValue, boxParamValue, paramsParamValue);
	}
	native private void writeVertsToFile_EVString_CTempVertexVector(long pNativeObject, String dataFile, long vertsList);
	public void writeVertsToFile(String dataFile, com.earthview.world.spatiallasconvertproxy.TempVertexVector vertsList)
	{
		String dataFileParamValue = dataFile;
		long vertsListParamValue = vertsList.nativeObject.pointer;
		writeVertsToFile_EVString_CTempVertexVector(this.nativeObject.pointer, dataFileParamValue, vertsListParamValue);
	}
	native private void translateSubMesh_CMatrix4_CSubMesh(long pNativeObject, long translateM, long subMesh);
	public void translateSubMesh(com.earthview.world.spatial.math.Matrix4 translateM, com.earthview.world.graphic.SubMesh subMesh)
	{
		long translateMParamValue = translateM.nativeObject.pointer;
		long subMeshParamValue = (subMesh == null ? 0L : subMesh.nativeObject.pointer);
		translateSubMesh_CMatrix4_CSubMesh(this.nativeObject.pointer, translateMParamValue, subMeshParamValue);
	}
	native private boolean createLasMetaInfoDB_CObliqueDBUtility(long pNativeObject, long dbUtility);
	public boolean createLasMetaInfoDB(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		boolean returnValue = createLasMetaInfoDB_CObliqueDBUtility(this.nativeObject.pointer, dbUtilityParamValue);
		return returnValue;
	}
	native private boolean writeLasMetaInfo2DB_CObliqueDBUtility_EVString_ev_real32_ev_uint32(long pNativeObject, long dbUtility, String name, float value, long type);
	public boolean writeLasMetaInfo2DB(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String name, float value, long type)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String nameParamValue = name;
		float valueParamValue = value;
		long typeParamValue = type;
		boolean returnValue = writeLasMetaInfo2DB_CObliqueDBUtility_EVString_ev_real32_ev_uint32(this.nativeObject.pointer, dbUtilityParamValue, nameParamValue, valueParamValue, typeParamValue);
		return returnValue;
	}
	public LasOptimizeTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LasOptimizeTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LasOptimizeTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LasOptimizeTool obj = null;
 		if(baseObj instanceof LasOptimizeTool)
		{
			obj = (LasOptimizeTool)baseObj;
		} else {
			obj = new LasOptimizeTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLasOptimizeTool");
			obj.increaseCast();
		}

		return obj;
	}
}
