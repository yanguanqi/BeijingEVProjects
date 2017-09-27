package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObliqueDBUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility", new ObliqueDBUtilityClassFactory());
	}

	public ObliqueDBUtility(com.earthview.world.core.database.SqlDatabase db) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		Create("CObliqueDBUtility", list);
	}

	public enum EVDataType implements INativeEnum<EVDataType> {
		DT_OBQ(EVDataTypeHelper.ENUM_VALUES[0]),
		DT_QSLIM(EVDataTypeHelper.ENUM_VALUES[1]);
		private int value;
		EVDataType(int i) {
			this.value = i;
		}
		public EVDataType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVDataType toEnum(int retval) {
			if(retval == DT_OBQ.value){
				return DT_OBQ;
			}
			else if(retval == DT_QSLIM.value){
				return DT_QSLIM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVDataTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private boolean insertMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 插入metadataxml信息
	/// <returns>true插入成功，false插入不成功</returns>
	public boolean insertMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = insertMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean readMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 读取metadataxml信息
	/// <returns>ev_bool，返回true，读取成功，返回false，读取失败</returns>
	public boolean readMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 更新metadataxml信息
	/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
	public boolean updateMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean insertDemMetaDataInfo_OBQDemMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 插入DEM metadataxml信息
	/// <returns>true插入成功，false插入不成功</returns>
	public boolean insertDemMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = insertDemMetaDataInfo_OBQDemMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean readDemMetaDataInfo_OBQDemMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 读取DEM metadataxml信息
	/// <returns>ev_bool，返回true，读取成功，返回false，读取失败</returns>
	public boolean readDemMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readDemMetaDataInfo_OBQDemMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateDemMetaDataInfo_OBQDemMetaInfo(long pNativeObject, long info);
	/// <summary>
	/// 更新DEM metadataxml信息
	/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
	public boolean updateDemMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateDemMetaDataInfo_OBQDemMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean insertTileLod_EVString_LodIndex(long pNativeObject, String tileName, long pLodNode);
	/// <summary>
	/// LodIndex*下面挂接了瓦块所有lod信息
	/// <param name="tileName">瓦片名称</param>
	/// <param name="pLodNode">Lod信息</param>
	/// <returns>true插入成功，false插入不成功</returns>
	public boolean insertTileLod(String tileName, com.earthview.world.spatial3d.modelmanager.LodIndex pLodNode)
	{
		String tileNameParamValue = tileName;
		long pLodNodeParamValue = (pLodNode == null ? 0L : pLodNode.nativeObject.pointer);
		boolean returnValue = insertTileLod_EVString_LodIndex(this.nativeObject.pointer, tileNameParamValue, pLodNodeParamValue);
		return returnValue;
	}
	native private boolean updateTileLodBound_EVString_ev_uint32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String tileName, long id, float xmin, float xmax, float ymin, float ymax, float zmin, float zmax);
	/// <summary>
	/// 更新个边框信息
	/// <param name="tileName">瓦片名称</param>
	/// <param name="id">id</param>
	/// <param name="xmin">x轴最小值</param>
	/// <param name="xmax">x轴最大值</param>
	/// <param name="zmin">z轴最小值</param>
	/// <param name="zmax">z轴最大值</param>
	/// <returns>true插入成功，false插入不成功</returns>
	public boolean updateTileLodBound(String tileName, long id, float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)
	{
		String tileNameParamValue = tileName;
		long idParamValue = id;
		float xminParamValue = xmin;
		float xmaxParamValue = xmax;
		float yminParamValue = ymin;
		float ymaxParamValue = ymax;
		float zminParamValue = zmin;
		float zmaxParamValue = zmax;
		boolean returnValue = updateTileLodBound_EVString_ev_uint32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, tileNameParamValue, idParamValue, xminParamValue, xmaxParamValue, yminParamValue, ymaxParamValue, zminParamValue, zmaxParamValue);
		return returnValue;
	}
	native private boolean updateTileLodBound_EVString_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String tileName, String meshName, float xmin, float xmax, float ymin, float ymax, float zmin, float zmax);
	public boolean updateTileLodBound(String tileName, String meshName, float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)
	{
		String tileNameParamValue = tileName;
		String meshNameParamValue = meshName;
		float xminParamValue = xmin;
		float xmaxParamValue = xmax;
		float yminParamValue = ymin;
		float ymaxParamValue = ymax;
		float zminParamValue = zmin;
		float zmaxParamValue = zmax;
		boolean returnValue = updateTileLodBound_EVString_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, tileNameParamValue, meshNameParamValue, xminParamValue, xmaxParamValue, yminParamValue, ymaxParamValue, zminParamValue, zmaxParamValue);
		return returnValue;
	}
	native private long readAllTileName_void(long pNativeObject);
	/// <summary>
	/// 获取所有目录下瓦块名称
	/// <returns>CStringArray，名称数组</returns>
	public com.earthview.world.core.StringArray readAllTileName()
	{
		long returnValue = readAllTileName_void(this.nativeObject.pointer);
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
		return __returnValue;
	}
	native private boolean readAllTileNameAndTopTileLod_CStringArray_LodIndexVector(long pNativeObject, long tileNames, long lodVec);
	///只支持7z的组织方式
	public boolean readAllTileNameAndTopTileLod(com.earthview.world.core.StringArray tileNames, com.earthview.world.spatial3d.modelmanager.LodIndexVector lodVec)
	{
		long tileNamesParamValue = tileNames.nativeObject.pointer;
		long lodVecParamValue = lodVec.nativeObject.pointer;
		boolean returnValue = readAllTileNameAndTopTileLod_CStringArray_LodIndexVector(this.nativeObject.pointer, tileNamesParamValue, lodVecParamValue);
		return returnValue;
	}
	native private long readTileLod_EVString(long pNativeObject, String tileName);
	/// <summary>
	/// 读取瓦片LOD信息
	/// <param name="tileName">瓦片名称</param>
	/// <returns>LodIndex，LOD信息，LodIndex*需要释放</returns>
	public com.earthview.world.spatial3d.modelmanager.LodIndex readTileLod(String tileName)
	{
		String tileNameParamValue = tileName;
		long returnValue = readTileLod_EVString(this.nativeObject.pointer, tileNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodIndex __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndex(CreatedWhenConstruct.CWC_NotToCreate, "LodIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndex");
		}
		return __returnValue;
	}
	native private long readChildLod_EVString_ev_uint32(long pNativeObject, String tileName, long parentID);
	/// <summary>
	/// 读取子瓦片LOD信息
	/// <param name="tileName">瓦片名称</param>
	/// <param name="parentID">父亲ID</param>
	/// <returns>LodIndex，LOD信息，LodIndex*需要释放</returns>
	public com.earthview.world.spatial3d.modelmanager.LodIndexVector readChildLod(String tileName, long parentID)
	{
		String tileNameParamValue = tileName;
		long parentIDParamValue = parentID;
		long returnValue = readChildLod_EVString_ev_uint32(this.nativeObject.pointer, tileNameParamValue, parentIDParamValue);
		com.earthview.world.spatial3d.modelmanager.LodIndexVector __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		}
		return __returnValue;
	}
	native private long readChildLod_EVString_EVString(long pNativeObject, String tileName, String modelPath);
	public com.earthview.world.spatial3d.modelmanager.LodIndexVector readChildLod(String tileName, String modelPath)
	{
		String tileNameParamValue = tileName;
		String modelPathParamValue = modelPath;
		long returnValue = readChildLod_EVString_EVString(this.nativeObject.pointer, tileNameParamValue, modelPathParamValue);
		com.earthview.world.spatial3d.modelmanager.LodIndexVector __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		}
		return __returnValue;
	}
	native private long readLodByID_EVString_ev_uint32(long pNativeObject, String tileName, long id);
	public com.earthview.world.spatial3d.modelmanager.LodIndex readLodByID(String tileName, long id)
	{
		String tileNameParamValue = tileName;
		long idParamValue = id;
		long returnValue = readLodByID_EVString_ev_uint32(this.nativeObject.pointer, tileNameParamValue, idParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.LodIndex __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndex(CreatedWhenConstruct.CWC_NotToCreate, "LodIndex");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndex)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndex");
		}
		return __returnValue;
	}
	native private boolean updateMetaDataInfo_ev_real64(long pNativeObject, double altitude);
	/// <summary>
	/// 更新metadataxml高度信息
	/// <param name="altitude">高度</param>
	/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
	public boolean updateMetaDataInfo(double altitude)
	{
		double altitudeParamValue = altitude;
		boolean returnValue = updateMetaDataInfo_ev_real64(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}
	native private boolean insertAllTopLod_void(long pNativeObject);
	/// <summary>
	/// 插入所有顶级瓦块索引到顶级瓦块表
	/// <returns></returns>
	public boolean insertAllTopLod()
	{
		boolean returnValue = insertAllTopLod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean createTopLodTable_void(long pNativeObject);
	/// <summary>
	/// 创建顶级瓦块表
	/// <returns></returns>
	public boolean createTopLodTable()
	{
		boolean returnValue = createTopLodTable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean insertTopLod_EVString_LodIndex_ev_bool(long pNativeObject, String tileName, long pLodIndex, boolean haveTopTileIndexTab);
	/// <summary>
	/// 插入顶级瓦块索引到顶级瓦块表
	/// <param name="tileName">瓦片名称</param>
	/// <param name="pLodIndex">顶级瓦块索引</param>
	/// <param name="haveTopTileIndexTab">是否含有TopTileIndexTab表</param>
	/// <returns></returns>
	public boolean insertTopLod(String tileName, com.earthview.world.spatial3d.modelmanager.LodIndex pLodIndex, boolean haveTopTileIndexTab)
	{
		String tileNameParamValue = tileName;
		long pLodIndexParamValue = (pLodIndex == null ? 0L : pLodIndex.nativeObject.pointer);
		boolean haveTopTileIndexTabParamValue = haveTopTileIndexTab;
		boolean returnValue = insertTopLod_EVString_LodIndex_ev_bool(this.nativeObject.pointer, tileNameParamValue, pLodIndexParamValue, haveTopTileIndexTabParamValue);
		return returnValue;
	}
	native private long readAllTopLod_void(long pNativeObject);
	/// <summary>
	/// 读取所有顶级瓦块索引
	/// <returns></returns>
	public com.earthview.world.spatial3d.modelmanager.LodIndexVector readAllTopLod()
	{
		long returnValue = readAllTopLod_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.modelmanager.LodIndexVector __returnValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LodIndexVector");
		}
		return __returnValue;
	}
	native private boolean dropAllLodTab_void(long pNativeObject);
	/// <summary>
	/// 删除所有瓦块索引表
	/// <returns></returns>
	public boolean dropAllLodTab()
	{
		boolean returnValue = dropAllLodTab_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean insertLevelMap_IntPairVector(long pNativeObject, long mapLevel);
	/// <summary>
	/// 插入级别映射
	/// <returns></returns>
	public boolean insertLevelMap(com.earthview.world.core.IntPairVector mapLevel)
	{
		long mapLevelParamValue = mapLevel.nativeObject.pointer;
		boolean returnValue = insertLevelMap_IntPairVector(this.nativeObject.pointer, mapLevelParamValue);
		return returnValue;
	}
	native private boolean readLevelMap_IntPairVector(long pNativeObject, long mapLevel);
	/// <summary>
	/// 读取级别映射
	/// <returns></returns>
	public boolean readLevelMap(com.earthview.world.core.IntPairVector mapLevel)
	{
		long mapLevelParamValue = mapLevel.nativeObject.pointer;
		boolean returnValue = readLevelMap_IntPairVector(this.nativeObject.pointer, mapLevelParamValue);
		return returnValue;
	}
	native private String getDBFile_void(long pNativeObject);
	/// <summary>
	/// 获取DB文件路径
	/// <returns>EVString，返回DB文件路径</returns>
	public String getDBFile()
	{
		String returnValue = getDBFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSqlDatabase_void(long pNativeObject);
	/// <summary>
	/// 获取数据库连接
	/// <returns>CSqlDatabase，数据库连接</returns>
	public com.earthview.world.core.database.SqlDatabase getSqlDatabase()
	{
		long returnValue = getSqlDatabase_void(this.nativeObject.pointer);
		com.earthview.world.core.database.SqlDatabase __returnValue = new com.earthview.world.core.database.SqlDatabase(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.database.SqlDatabase)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSqlDatabase");
		}
		return __returnValue;
	}
	native private static boolean baseInfoToStream_OBQInitData_MemoryDataStreamPtr(long initData, long stream);
	/// <summary>
	/// 序列化所有元数据信息成流对象 
	/// <returns></returns>
	public static boolean baseInfoToStream(com.earthview.world.spatial3d.modelmanager.Obqinitdata initData, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long initDataParamValue = initData.nativeObject.pointer;
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = baseInfoToStream_OBQInitData_MemoryDataStreamPtr(initDataParamValue, streamParamValue);
		return returnValue;
	}
	native private static boolean streamToBaseInfo_MemoryDataStreamPtr_OBQInitData(long stream, long initData);
	/// <summary>
	/// 从流对象解析元数据信息
	//注意：传出的LodIndexVector里边的指针需要外部释放
	/// <returns></returns>
	public static boolean streamToBaseInfo(com.earthview.world.core.MemoryDataStreamPtr stream, com.earthview.world.spatial3d.modelmanager.Obqinitdata initData)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long initDataParamValue = initData.nativeObject.pointer;
		boolean returnValue = streamToBaseInfo_MemoryDataStreamPtr_OBQInitData(streamParamValue, initDataParamValue);
		return returnValue;
	}
	native private static boolean obqPublishFileToInfo_EVString_ev_int32_CStringArray_CStringArray(String filePath, long version, long rootNames, long modelNames);
	/// <summary>
	/// 解析publish文件					
	/// <returns></returns>
	public static boolean obqPublishFileToInfo(String filePath, IntegerPointer version, com.earthview.world.core.StringArray rootNames, com.earthview.world.core.StringArray modelNames)
	{
		String filePathParamValue = filePath;
		long versionParamValue = version.nativeObject.pointer;
		long rootNamesParamValue = rootNames.nativeObject.pointer;
		long modelNamesParamValue = modelNames.nativeObject.pointer;
		boolean returnValue = obqPublishFileToInfo_EVString_ev_int32_CStringArray_CStringArray(filePathParamValue, versionParamValue, rootNamesParamValue, modelNamesParamValue);
		return returnValue;
	}
	native private static boolean obqPublishInfoToFile_EVString_ev_int32_CStringArray_CStringArray(String filePath, int version, long rootNames, long modelNames);
	/// <summary>
	/// 保存publish文件				
	/// <returns></returns>
	public static boolean obqPublishInfoToFile(String filePath, int version, com.earthview.world.core.StringArray rootNames, com.earthview.world.core.StringArray modelNames)
	{
		String filePathParamValue = filePath;
		int versionParamValue = version;
		long rootNamesParamValue = rootNames.nativeObject.pointer;
		long modelNamesParamValue = modelNames.nativeObject.pointer;
		boolean returnValue = obqPublishInfoToFile_EVString_ev_int32_CStringArray_CStringArray(filePathParamValue, versionParamValue, rootNamesParamValue, modelNamesParamValue);
		return returnValue;
	}
	native private void setDataType_EVDataType(long pNativeObject, int type);
	///
	public void setDataType(com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility.EVDataType type)
	{
		int typeParamValue = type.getValue();
		setDataType_EVDataType(this.nativeObject.pointer, typeParamValue);
	}
	public ObliqueDBUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObliqueDBUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ObliqueDBUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObliqueDBUtility obj = null;
 		if(baseObj instanceof ObliqueDBUtility)
		{
			obj = (ObliqueDBUtility)baseObj;
		} else {
			obj = new ObliqueDBUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObliqueDBUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
