package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObliqueDataConvert extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CObliqueDataConvert", new ObliqueDataConvertClassFactory());
	}

	public ObliqueDataConvert() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CObliqueDataConvert", null);
	}

	native private static boolean convertObqXmlToIndexDB_CObliqueDBUtility_EVString(long dbUtility, String strTileXml);
	public static boolean convertObqXmlToIndexDB(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String strTileXml)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String strTileXmlParamValue = strTileXml;
		boolean returnValue = convertObqXmlToIndexDB_CObliqueDBUtility_EVString(dbUtilityParamValue, strTileXmlParamValue);
		return returnValue;
	}
	native private static long queryMeshFilesByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);
	public static com.earthview.world.core.StringVector queryMeshFilesByRegion(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		long returnValue = queryMeshFilesByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(dbUtilityParamValue, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private static long queryCpdStreamByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);
	public static com.earthview.world.core.MemoryDataStreamPtr queryCpdStreamByRegion(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		long returnValue = queryCpdStreamByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(dbUtilityParamValue, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
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
	native private static String getCpdFileByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(long dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat);
	public static String getCpdFileByRegion(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, int level, double minLon, double minLat, double maxLon, double maxLat)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		int levelParamValue = level;
		double minLonParamValue = minLon;
		double minLatParamValue = minLat;
		double maxLonParamValue = maxLon;
		double maxLatParamValue = maxLat;
		String returnValue = getCpdFileByRegion_CObliqueDBUtility_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(dbUtilityParamValue, levelParamValue, minLonParamValue, minLatParamValue, maxLonParamValue, maxLatParamValue);
		return returnValue;
	}
	native private static boolean convertLodTreeExportXmlToDatabase_CObliqueDBUtility_EVString(long dbUtility, String strLodTreeExportXml);
	/**
	 * 转换METADATA的信息到库
	 * @param strLodTreeExportXml lodTreeExportXml文件路径
	 */
	public static boolean convertLodTreeExportXmlToDatabase(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String strLodTreeExportXml)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String strLodTreeExportXmlParamValue = strLodTreeExportXml;
		boolean returnValue = convertLodTreeExportXmlToDatabase_CObliqueDBUtility_EVString(dbUtilityParamValue, strLodTreeExportXmlParamValue);
		return returnValue;
	}
	native private static boolean convertTopLodToDatabase_CObliqueDBUtility(long dbUtility);
	/**
	 * 转换顶级索引到数据库
	 */
	public static boolean convertTopLodToDatabase(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		boolean returnValue = convertTopLodToDatabase_CObliqueDBUtility(dbUtilityParamValue);
		return returnValue;
	}
	native private static boolean convertDemMetaInfoToDatabase_CObliqueDBUtility_EVString(long dbUtility, String strDemXml);
	/**
	 * 转换DEMMETADATA的信息到库
	 */
	public static boolean convertDemMetaInfoToDatabase(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String strDemXml)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String strDemXmlParamValue = strDemXml;
		boolean returnValue = convertDemMetaInfoToDatabase_CObliqueDBUtility_EVString(dbUtilityParamValue, strDemXmlParamValue);
		return returnValue;
	}
	native private static boolean clearAllLodTab_CObliqueDBUtility(long dbUtility);
	/**
	 * 清除所有LOD表
	 */
	public static boolean clearAllLodTab(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		boolean returnValue = clearAllLodTab_CObliqueDBUtility(dbUtilityParamValue);
		return returnValue;
	}
	native private static boolean convertLodXmlToDatabase_CObliqueDBUtility_EVString(long dbUtility, String strTileXml);
	/**
	 * 转换一个瓦块目录索引到数据库
	 * @param strTileXml 瓦块xml
	 * @param destDBFile 输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径
	 * @return 默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的
	 */
	public static boolean convertLodXmlToDatabase(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String strTileXml)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String strTileXmlParamValue = strTileXml;
		boolean returnValue = convertLodXmlToDatabase_CObliqueDBUtility_EVString(dbUtilityParamValue, strTileXmlParamValue);
		return returnValue;
	}
	native private static boolean convertAllLodXmlToDatabase_CObliqueDBUtility_EVString(long dbUtility, String strTileXml);
	/**
	 * 转换一个Data目录索引到数据库
	 * @param strDataFolder Data目录
	 * @param destDBFile 输出数据库文件路径，一般会有多个瓦块目录，必须传同一个数据库输出路径
	 * @return 默认认为数据库在瓦块的上一级，数据库如果存在则直接写入，不存在则创建。重复写入会清空原来的
	 */
	public static boolean convertAllLodXmlToDatabase(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String strTileXml)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String strTileXmlParamValue = strTileXml;
		boolean returnValue = convertAllLodXmlToDatabase_CObliqueDBUtility_EVString(dbUtilityParamValue, strTileXmlParamValue);
		return returnValue;
	}
	native private static boolean updateTileModelBound_CObliqueDBUtility_EVString(long dbUtility, String tileName);
	/**
	 * 在转完mesh后，把每个mesh的外框计算出来
	 * @param tileName 瓦块名称
	 */
	public static boolean updateTileModelBound(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String tileName)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String tileNameParamValue = tileName;
		boolean returnValue = updateTileModelBound_CObliqueDBUtility_EVString(dbUtilityParamValue, tileNameParamValue);
		return returnValue;
	}
	native private static boolean updateTileModelBoundForMeshx_CObliqueDBUtility_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(long dbUtility, String tileName, long xmin, long xmax, long ymin, long ymax, long zmin, long zmax);
	/**
	 * 在转完mesh后，把每个mesh的外框计算出来
	 * @param tileName 瓦块名称
	 */
	public static boolean updateTileModelBoundForMeshx(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String tileName, FloatPointer xmin, FloatPointer xmax, FloatPointer ymin, FloatPointer ymax, FloatPointer zmin, FloatPointer zmax)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String tileNameParamValue = tileName;
		long xminParamValue = xmin.nativeObject.pointer;
		long xmaxParamValue = xmax.nativeObject.pointer;
		long yminParamValue = ymin.nativeObject.pointer;
		long ymaxParamValue = ymax.nativeObject.pointer;
		long zminParamValue = zmin.nativeObject.pointer;
		long zmaxParamValue = zmax.nativeObject.pointer;
		boolean returnValue = updateTileModelBoundForMeshx_CObliqueDBUtility_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(dbUtilityParamValue, tileNameParamValue, xminParamValue, xmaxParamValue, yminParamValue, ymaxParamValue, zminParamValue, zmaxParamValue);
		return returnValue;
	}
	native private static boolean updateDatasetBound_CObliqueDBUtility(long dbUtility);
	/**
	 * 在转完mesh后，计算总外边框
	 * @param tileName 瓦块名称
	 */
	public static boolean updateDatasetBound(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		boolean returnValue = updateDatasetBound_CObliqueDBUtility(dbUtilityParamValue);
		return returnValue;
	}
	native private static boolean generalAndUpdateModelBound_CObliqueDBUtility_EVString_EVString_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(long dbUtility, String tileName, String meshName, long meshPtr, long xmin, long xmax, long zmin, long zmax);
	/**
	 * 计算mesh的外框，并入库
	 */
	public static boolean generalAndUpdateModelBound(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String tileName, String meshName, com.earthview.world.graphic.MeshPtr meshPtr, FloatPointer xmin, FloatPointer xmax, FloatPointer zmin, FloatPointer zmax)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String tileNameParamValue = tileName;
		String meshNameParamValue = meshName;
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		long xminParamValue = xmin.nativeObject.pointer;
		long xmaxParamValue = xmax.nativeObject.pointer;
		long zminParamValue = zmin.nativeObject.pointer;
		long zmaxParamValue = zmax.nativeObject.pointer;
		boolean returnValue = generalAndUpdateModelBound_CObliqueDBUtility_EVString_EVString_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(dbUtilityParamValue, tileNameParamValue, meshNameParamValue, meshPtrParamValue, xminParamValue, xmaxParamValue, zminParamValue, zmaxParamValue);
		return returnValue;
	}
	native private static void generalTextureCoordinate_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(long meshPtr, float xmin, float xmax, float zmin, float zmax);
	/**
	 * 生成矢量与临时组的纹理坐标
	 */
	public static void generalTextureCoordinate(com.earthview.world.graphic.MeshPtr meshPtr, float xmin, float xmax, float zmin, float zmax)
	{
		long meshPtrParamValue = meshPtr.nativeObject.pointer;
		float xminParamValue = xmin;
		float xmaxParamValue = xmax;
		float zminParamValue = zmin;
		float zmaxParamValue = zmax;
		generalTextureCoordinate_CMeshPtr_ev_real32_ev_real32_ev_real32_ev_real32(meshPtrParamValue, xminParamValue, xmaxParamValue, zminParamValue, zmaxParamValue);
	}
	native private static boolean updateLocalMatrix_CObliqueDBUtility_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long dbUtility, double posx, double posy, double posz, double scalex, double scaley, double scalez, double rotw, double rotx, double roty, double rotz);
	/**
	 * 更新变换矩阵
	 */
	public static boolean updateLocalMatrix(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, double posx, double posy, double posz, double scalex, double scaley, double scalez, double rotw, double rotx, double roty, double rotz)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		double posxParamValue = posx;
		double posyParamValue = posy;
		double poszParamValue = posz;
		double scalexParamValue = scalex;
		double scaleyParamValue = scaley;
		double scalezParamValue = scalez;
		double rotwParamValue = rotw;
		double rotxParamValue = rotx;
		double rotyParamValue = roty;
		double rotzParamValue = rotz;
		boolean returnValue = updateLocalMatrix_CObliqueDBUtility_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(dbUtilityParamValue, posxParamValue, posyParamValue, poszParamValue, scalexParamValue, scaleyParamValue, scalezParamValue, rotwParamValue, rotxParamValue, rotyParamValue, rotzParamValue);
		return returnValue;
	}
	native private static boolean convertTileLodToPackage7z_CObliqueDBUtility_EVString_EVString(long dbUtility, String tileName, String tileFolder);
	/**
	 * 打包索引到7z包
	 */
	public static boolean convertTileLodToPackage7z(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String tileName, String tileFolder)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String tileNameParamValue = tileName;
		String tileFolderParamValue = tileFolder;
		boolean returnValue = convertTileLodToPackage7z_CObliqueDBUtility_EVString_EVString(dbUtilityParamValue, tileNameParamValue, tileFolderParamValue);
		return returnValue;
	}
	native private static boolean generalLevelMapTable_CObliqueDBUtility_ev_uint32_CStringArray(long dbUtility, long maxLevel, long tileLodXmlVec);
	/**
	 * 产生模型与dem级别的映射表
	 */
	public static boolean generalLevelMapTable(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, long maxLevel, com.earthview.world.core.StringArray tileLodXmlVec)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		long maxLevelParamValue = maxLevel;
		long tileLodXmlVecParamValue = tileLodXmlVec.nativeObject.pointer;
		boolean returnValue = generalLevelMapTable_CObliqueDBUtility_ev_uint32_CStringArray(dbUtilityParamValue, maxLevelParamValue, tileLodXmlVecParamValue);
		return returnValue;
	}
	native private static boolean convertMetaInfoToPackage7z_CObliqueDBUtility_EVString(long dbUtility, String destFolder);
	/**
	 * 把初始化元数据信息打包到本地
	 */
	public static boolean convertMetaInfoToPackage7z(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String destFolder)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String destFolderParamValue = destFolder;
		boolean returnValue = convertMetaInfoToPackage7z_CObliqueDBUtility_EVString(dbUtilityParamValue, destFolderParamValue);
		return returnValue;
	}
	native private static boolean convertMetaInfoToPackage7z_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8(long dbUtility, String destFolder, long sharedTextureVec, short maxLevel);
	/**
	 * 把初始化元数据信息打包到本地
	 */
	public static boolean convertMetaInfoToPackage7z(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String destFolder, com.earthview.world.core.MemoryDataStreamVector sharedTextureVec, short maxLevel)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String destFolderParamValue = destFolder;
		long sharedTextureVecParamValue = sharedTextureVec.nativeObject.pointer;
		short maxLevelParamValue = maxLevel;
		boolean returnValue = convertMetaInfoToPackage7z_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8(dbUtilityParamValue, destFolderParamValue, sharedTextureVecParamValue, maxLevelParamValue);
		return returnValue;
	}
	native private static boolean convertMetaInfoToPackage7z_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8_OBQRecordInfoList(long dbUtility, String destFolder, long sharedTextureVec, short maxLevel, long recordInfoList);
	/**
	 * 把初始化元数据信息打包到本地
	 */
	public static boolean convertMetaInfoToPackage7z(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility dbUtility, String destFolder, com.earthview.world.core.MemoryDataStreamVector sharedTextureVec, short maxLevel, com.earthview.world.spatial3d.modelmanager.Obqrecordinfolist recordInfoList)
	{
		long dbUtilityParamValue = (dbUtility == null ? 0L : dbUtility.nativeObject.pointer);
		String destFolderParamValue = destFolder;
		long sharedTextureVecParamValue = sharedTextureVec.nativeObject.pointer;
		short maxLevelParamValue = maxLevel;
		long recordInfoListParamValue = recordInfoList.nativeObject.pointer;
		boolean returnValue = convertMetaInfoToPackage7z_CObliqueDBUtility_EVString_MemoryDataStreamVector_ev_uint8_OBQRecordInfoList(dbUtilityParamValue, destFolderParamValue, sharedTextureVecParamValue, maxLevelParamValue, recordInfoListParamValue);
		return returnValue;
	}
	public ObliqueDataConvert(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObliqueDataConvert(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ObliqueDataConvert fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObliqueDataConvert obj = null;
 		if(baseObj instanceof ObliqueDataConvert)
		{
			obj = (ObliqueDataConvert)baseObj;
		} else {
			obj = new ObliqueDataConvert(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObliqueDataConvert");
			obj.increaseCast();
		}

		return obj;
	}
}
