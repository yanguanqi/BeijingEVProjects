package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 倾斜摄影数据集基类
 */
public class Iobqdataset extends com.earthview.world.spatial.geodataset.Idataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::IObqDataset", new IobqdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JIObqDatasetProxy", new IobqdatasetClassFactory());
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
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getDataVersion_void(long pNativeObject);
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		String returnValue = getDataVersion_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String getDataVersion_void_NoVirtual(long pNativeObject);
	protected ULongPointer getDataVersion_NoVirtual()
	{
		String returnValue = getDataVersion_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		long returnValue = getDataSourceRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}
	native private long getDataSourceRef_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef_NoVirtual()
	{
		long returnValue = getDataSourceRef_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasource __returnValue = new com.earthview.world.spatial.geodataset.Idatasource(CreatedWhenConstruct.CWC_NotToCreate, "IDataSource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataSource");
		}
		return __returnValue;
	}

	native private String getGUID_void(long pNativeObject);
	public String getGUID()
	{
		String returnValue = getGUID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getSrcFolder_void(long pNativeObject);
	public String getSrcFolder()
	{
		String returnValue = getSrcFolder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getOBQFile_void(long pNativeObject);
	public String getOBQFile()
	{
		String returnValue = getOBQFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getBILFolder_void(long pNativeObject);
	public String getBILFolder()
	{
		String returnValue = getBILFolder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDataFolder_void(long pNativeObject);
	public String getDataFolder()
	{
		String returnValue = getDataFolder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDBUtlility_void(long pNativeObject);
	public com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility getDBUtlility()
	{
		long returnValue = getDBUtlility_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility __returnValue = new com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility(CreatedWhenConstruct.CWC_NotToCreate, "CObliqueDBUtility");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ObliqueDBUtility)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CObliqueDBUtility");
		}
		return __returnValue;
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

	protected  int readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_callback(String filename, String tileName, long lodID, long meshStream, long childIndexVec)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		long lodIDParamValue = lodID;
		com.earthview.world.spatial.MeshStream meshStreamParamValue = new com.earthview.world.spatial.MeshStream(CreatedWhenConstruct.CWC_NotToCreate);
		meshStreamParamValue.setDelegate(true);
		meshStreamParamValue.setInstancePointer(new InstancePointer(meshStream));
		IClassFactory meshStreamParamValueClassFactory = GlobalClassFactoryMap.get(meshStreamParamValue.getCppInstanceTypeName());
		if (meshStreamParamValueClassFactory != null)
		{
			meshStreamParamValue.setDelegate(true);
			meshStreamParamValue = (com.earthview.world.spatial.MeshStream)meshStreamParamValueClassFactory.create();
			meshStreamParamValue.setDelegate(true);
			meshStreamParamValue.setInstancePointer(new InstancePointer(meshStream));
		}
		com.earthview.world.spatial3d.modelmanager.LodIndexVector childIndexVecParamValue = new com.earthview.world.spatial3d.modelmanager.LodIndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		childIndexVecParamValue.setDelegate(true);
		childIndexVecParamValue.setInstancePointer(new InstancePointer(childIndexVec));
		IClassFactory childIndexVecParamValueClassFactory = GlobalClassFactoryMap.get(childIndexVecParamValue.getCppInstanceTypeName());
		if (childIndexVecParamValueClassFactory != null)
		{
			childIndexVecParamValue.setDelegate(true);
			childIndexVecParamValue = (com.earthview.world.spatial3d.modelmanager.LodIndexVector)childIndexVecParamValueClassFactory.create();
			childIndexVecParamValue.setDelegate(true);
			childIndexVecParamValue.setInstancePointer(new InstancePointer(childIndexVec));
		}
		int returnValue = readTileData(filenameParamValue, tileNameParamValue, lodIDParamValue, meshStreamParamValue, childIndexVecParamValue);
		int __returnValue = returnValue;
		return __returnValue;
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
	native private int readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_NoVirtual(long pNativeObject, String filename, String tileName, long lodID, long meshStream, long childIndexVec);
	protected int readTileData_NoVirtual(String filename, String tileName, long lodID, com.earthview.world.spatial.MeshStream meshStream, com.earthview.world.spatial3d.modelmanager.LodIndexVector childIndexVec)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		long lodIDParamValue = lodID;
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		long childIndexVecParamValue = childIndexVec.nativeObject.pointer;
		int returnValue = readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_NoVirtual(this.nativeObject.pointer, filenameParamValue, tileNameParamValue, lodIDParamValue, meshStreamParamValue, childIndexVecParamValue);
		return returnValue;
	}

	protected  int readTileMeshData_EVString_EVString_MemoryDataStreamPtr_callback(String filename, String tileName, long meshStream)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		com.earthview.world.core.MemoryDataStreamPtr meshStreamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		meshStreamParamValue.setDelegate(true);
		meshStreamParamValue.setInstancePointer(new InstancePointer(meshStream));
		IClassFactory meshStreamParamValueClassFactory = GlobalClassFactoryMap.get(meshStreamParamValue.getCppInstanceTypeName());
		if (meshStreamParamValueClassFactory != null)
		{
			meshStreamParamValue.setDelegate(true);
			meshStreamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)meshStreamParamValueClassFactory.create();
			meshStreamParamValue.setDelegate(true);
			meshStreamParamValue.setInstancePointer(new InstancePointer(meshStream));
		}
		int returnValue = readTileMeshData(filenameParamValue, tileNameParamValue, meshStreamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
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
	native private int readTileMeshData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String filename, String tileName, long meshStream);
	protected int readTileMeshData_NoVirtual(String filename, String tileName, com.earthview.world.core.MemoryDataStreamPtr meshStream)
	{
		String filenameParamValue = filename;
		String tileNameParamValue = tileName;
		long meshStreamParamValue = meshStream.nativeObject.pointer;
		int returnValue = readTileMeshData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, filenameParamValue, tileNameParamValue, meshStreamParamValue);
		return returnValue;
	}

	protected  boolean readMetaDataInfo_OBQMetaInfo_callback(long info)
	{
		com.earthview.world.spatial3d.modelmanager.Obqmetainfo infoParamValue = new com.earthview.world.spatial3d.modelmanager.Obqmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial3d.modelmanager.Obqmetainfo)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		boolean returnValue = readMetaDataInfo(infoParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean readMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	///读元数据信息
	public boolean readMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean readMetaDataInfo_OBQMetaInfo_NoVirtual(long pNativeObject, long info);
	protected boolean readMetaDataInfo_NoVirtual(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = readMetaDataInfo_OBQMetaInfo_NoVirtual(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}

	protected  boolean updateMetaDataInfo_ev_real64_callback(double altitude)
	{
		double altitudeParamValue = altitude;
		boolean returnValue = updateMetaDataInfo(altitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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
	native private boolean updateMetaDataInfo_ev_real64_NoVirtual(long pNativeObject, double altitude);
	protected boolean updateMetaDataInfo_NoVirtual(double altitude)
	{
		double altitudeParamValue = altitude;
		boolean returnValue = updateMetaDataInfo_ev_real64_NoVirtual(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}

	protected  boolean updateMetaDataInfo_OBQMetaInfo_callback(long info)
	{
		com.earthview.world.spatial3d.modelmanager.Obqmetainfo infoParamValue = new com.earthview.world.spatial3d.modelmanager.Obqmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		infoParamValue.setDelegate(true);
		infoParamValue.setInstancePointer(new InstancePointer(info));
		IClassFactory infoParamValueClassFactory = GlobalClassFactoryMap.get(infoParamValue.getCppInstanceTypeName());
		if (infoParamValueClassFactory != null)
		{
			infoParamValue.setDelegate(true);
			infoParamValue = (com.earthview.world.spatial3d.modelmanager.Obqmetainfo)infoParamValueClassFactory.create();
			infoParamValue.setDelegate(true);
			infoParamValue.setInstancePointer(new InstancePointer(info));
		}
		boolean returnValue = updateMetaDataInfo(infoParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean updateMetaDataInfo_OBQMetaInfo(long pNativeObject, long info);
	public boolean updateMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}
	native private boolean updateMetaDataInfo_OBQMetaInfo_NoVirtual(long pNativeObject, long info);
	protected boolean updateMetaDataInfo_NoVirtual(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		long infoParamValue = info.nativeObject.pointer;
		boolean returnValue = updateMetaDataInfo_OBQMetaInfo_NoVirtual(this.nativeObject.pointer, infoParamValue);
		return returnValue;
	}

	public Iobqdataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iobqdataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_readInitData_OBQInitData(long pNativeObject, String method);
	native protected void register_readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(long pNativeObject, String method);
	native protected void register_readTileMeshData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readMetaDataInfo_OBQMetaInfo(long pNativeObject, String method);
	native protected void register_updateMetaDataInfo_ev_real64(long pNativeObject, String method);
	native protected void register_updateMetaDataInfo_OBQMetaInfo(long pNativeObject, String method);
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
			this.register_readInitData_OBQInitData(this.nativeObject.pointer, "readInitData_OBQInitData_callback");
			this.register_readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(this.nativeObject.pointer, "readTileData_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_callback");
			this.register_readTileMeshData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readTileMeshData_EVString_EVString_MemoryDataStreamPtr_callback");
			this.register_readMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, "readMetaDataInfo_OBQMetaInfo_callback");
			this.register_updateMetaDataInfo_ev_real64(this.nativeObject.pointer, "updateMetaDataInfo_ev_real64_callback");
			this.register_updateMetaDataInfo_OBQMetaInfo(this.nativeObject.pointer, "updateMetaDataInfo_OBQMetaInfo_callback");
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
	
	public static Iobqdataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iobqdataset obj = null;
 		if(baseObj instanceof Iobqdataset)
		{
			obj = (Iobqdataset)baseObj;
		} else {
			obj = new Iobqdataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IObqDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
