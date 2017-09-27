package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /倾斜摄影数据集基类/
 */
public class ObqDatasetWrapper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CObqDatasetWrapper", new ObqDatasetWrapperClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCObqDatasetWrapperProxy", new ObqDatasetWrapperClassFactory());
	}

	public ObqDatasetWrapper(com.earthview.world.spatial.geodataset.Idataset ref_ds) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_dsPtr = new BasePointer(ref_ds);
		list.add("ref_ds", ref_dsPtr.get());
		Create("JCObqDatasetWrapperProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.ObqDatasetWrapper".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getDataset_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		long returnValue = getDataset_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVDatasetType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	native private String getGUID_void(long pNativeObject);
	/**
	 * 获取GUID
	 * @param  
	 */
	public String getGUID()
	{
		String returnValue = getGUID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void initBILCache_ev_int32(long pNativeObject, int pointNumberPerSide);
	/**
	 * 初始化BILcache
	 * @param  
	 */
	public void initBILCache(int pointNumberPerSide)
	{
		int pointNumberPerSideParamValue = pointNumberPerSide;
		initBILCache_ev_int32(this.nativeObject.pointer, pointNumberPerSideParamValue);
	}
	protected  int readInitData_OBQInitData_callback(long initData)
	{
		com.earthview.world.spatial3d.modelmanager.Obqinitdata initDataParamValue = new com.earthview.world.spatial3d.modelmanager.Obqinitdata(CreatedWhenConstruct.CWC_NotToCreate);
		initDataParamValue.setDelegate(true);
		initDataParamValue.setInstancePointer(new InstancePointer(initData));
		IClassFactory initDataParamValueClassFactory = GlobalClassFactoryMap.get(initDataParamValue.getCppInstanceTypeName());
		if (initDataParamValueClassFactory != null)
		{
			initDataParamValue.setDelegate(true);
			initDataParamValue = (com.earthview.world.spatial3d.modelmanager.Obqinitdata)initDataParamValueClassFactory.create();
			initDataParamValue.setDelegate(true);
			initDataParamValue.setInstancePointer(new InstancePointer(initData));
		}
		int returnValue = readInitData(initDataParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readInitData_OBQInitData(long pNativeObject, long initData);
	/**
	 * 读取初始化信息
	 * @param initData 初始化信息
	 * @return 成功0，失败非0
	 */
	public int readInitData(com.earthview.world.spatial3d.modelmanager.Obqinitdata initData)
	{
		long initDataParamValue = initData.nativeObject.pointer;
		int returnValue = readInitData_OBQInitData(this.nativeObject.pointer, initDataParamValue);
		return returnValue;
	}
	native private int readInitData_OBQInitData_NoVirtual(long pNativeObject, long initData);
	protected int readInitData_NoVirtual(com.earthview.world.spatial3d.modelmanager.Obqinitdata initData)
	{
		long initDataParamValue = initData.nativeObject.pointer;
		int returnValue = readInitData_OBQInitData_NoVirtual(this.nativeObject.pointer, initDataParamValue);
		return returnValue;
	}

	native private int readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(long pNativeObject, String filename, String tileName, long lodID, long meshStream, long childIndexVec);
	/**
	 * 读取瓦块流信息
	 * @param filename 文件名
	 * @param tileName 瓦块名
	 * @param lodID 当前请求的文件瓦块的LODID
	 * @param meshStream 传出，请求数据流资源
	 * @param childIndexVec 传出，请求数据子瓦块索引，（注意：传出的childIndexVec指针需要释放内存）
	 * @return 失败返回-1
	 */
	public int readTileData(String filename, String tileName, long lodID, com.earthview.world.spatial.MeshStream meshStream, com.earthview.world.spatial3d.modelmanager.LodIndexVector childIndexVec)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		long lodIDParamValue = lodID;
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		long childIndexVecParamValue = childIndexVec.nativeObject.pointer;
		int returnValue = readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(this.nativeObject.pointer, filenameParamValue, tileNameParamValue, lodIDParamValue, meshStreamParamValue, childIndexVecParamValue);
		return returnValue;
	}
	native private int readTileMeshData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String filename, String tileName, long meshStream);
	public int readTileMeshData(String filename, String tileName, com.earthview.world.core.MemoryDataStreamPtr meshStream)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		int returnValue = readTileMeshData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, filenameParamValue, tileNameParamValue, meshStreamParamValue);
		return returnValue;
	}
	native private int readDem_ev_uint32_ev_uint32_ev_uint32_MemoryDataStreamPtr(long pNativeObject, long level, long row, long col, long bilStream);
	/**
	 * 读取DEM信息
	 * @param level 级别
	 * @param row 行号
	 * @param col 列号
	 * @param bisStream bil流
	 * @return 失败返回-1
	 */
	public int readDem(long level, long row, long col, com.earthview.world.core.MemoryDataStreamPtr bilStream)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		long bilStreamParamValue = bilStream.nativeObject.pointer;
		int returnValue = readDem_ev_uint32_ev_uint32_ev_uint32_MemoryDataStreamPtr(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, bilStreamParamValue);
		return returnValue;
	}
	native private boolean readMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	///读元数据信息
	public boolean readMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean readDemMetaDataInfo_OBQDemMetaInfo(long pNativeObject, long info);
	///读dem数据信息
	public boolean readDemMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqdemmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readDemMetaDataInfo_OBQDemMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateMetaDataInfo_ev_real64(long pNativeObject, double altitude);
	/// <summary>
	/// 更新元数据高度信息
	/// <param name="altitude">高度</param>
	/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
	public boolean updateMetaDataInfo(double altitude)
	{
		double altitudeParamValue = altitude;
		boolean returnValue = updateMetaDataInfo_ev_real64(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}
	native private boolean updateMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	public boolean updateMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private float getHeightFromBIL_ev_uint32_ev_real32_ev_real32(long pNativeObject, long level, float x, float z);
	/// <summary>
	/// 根据行列值获取高度信息
	/// <returns>高度信息</returns>
	public float getHeightFromBIL(long level, float x, float z)
	{
		long levelParamValue = level;
		float xParamValue = x;
		float zParamValue = z;
		float returnValue = getHeightFromBIL_ev_uint32_ev_real32_ev_real32(this.nativeObject.pointer, levelParamValue, xParamValue, zParamValue);
		return returnValue;
	}
	public ObqDatasetWrapper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObqDatasetWrapper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_readInitData_OBQInitData(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_readInitData_OBQInitData(this.nativeObject.pointer, "readInitData_OBQInitData_callback");
		}
	}
	
	public static ObqDatasetWrapper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObqDatasetWrapper obj = null;
 		if(baseObj instanceof ObqDatasetWrapper)
		{
			obj = (ObqDatasetWrapper)baseObj;
		} else {
			obj = new ObqDatasetWrapper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObqDatasetWrapper");
			obj.increaseCast();
		}

		return obj;
	}
}
