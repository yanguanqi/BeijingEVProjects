package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXDataset extends com.earthview.world.spatial3d.modelmanager.Iobqdataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CMeshXDataset", new MeshXDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCMeshXDatasetProxy", new MeshXDatasetClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public MeshXDataset() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMeshXDatasetProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.MeshXDataset".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param  数据集的名字
	 */
	public MeshXDataset(String name, com.earthview.world.spatial.geodataset.Idatasource ref_DataSource) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_DataSourcePtr = new BasePointer(ref_DataSource);
		list.add("ref_DataSource", ref_DataSourcePtr.get());
		Create("JCMeshXDatasetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.MeshXDataset".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	public MeshXDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshXDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	///读元数据信息
	public boolean readMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		return super.readMetaDataInfo_NoVirtual(info);
	}
	/// <summary>
	/// 更新元数据高度信息
	/// <param name="altitude">高度</param>
	/// <returns>ev_bool，返回true，更新成功，返回false，更新失败</returns>
	public boolean updateMetaDataInfo(double altitude)
	{
		return super.updateMetaDataInfo_NoVirtual(altitude);
	}
	public boolean updateMetaDataInfo(com.earthview.world.spatial3d.modelmanager.Obqmetainfo info)
	{
		return super.updateMetaDataInfo_NoVirtual(info);
	}
	/**
	 * 获取数据集名称
	 * @param  
	 * @return 数据集名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取数据集版本号，该方法是确认数据变更情况。
	 * @param  
	 * @return 数据集版本号
	 */
	public ULongPointer getDataVersion()
	{
		return super.getDataVersion_NoVirtual();
	}
	/**
	 * 获取数据集描述
	 * @param  
	 * @return 数据集描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
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
	 * 获取数据集所在数据源对象，该值为引用对象指针。
	 * @param  
	 * @return 数据集所在数据源对象指针
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSourceRef()
	{
		return super.getDataSourceRef_NoVirtual();
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
	
	public static MeshXDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshXDataset obj = null;
 		if(baseObj instanceof MeshXDataset)
		{
			obj = (MeshXDataset)baseObj;
		} else {
			obj = new MeshXDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshXDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
