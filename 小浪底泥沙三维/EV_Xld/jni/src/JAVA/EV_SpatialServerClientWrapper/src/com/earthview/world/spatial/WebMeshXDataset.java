package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

/**
 * EarthViewMESHX数据集类
 */
public class WebMeshXDataset extends com.earthview.world.spatial.Iwebobqdataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebMeshXDataset", new WebMeshXDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebMeshXDatasetProxy", new WebMeshXDatasetClassFactory());
	}

	native private int readInitData_MemoryDataStreamPtr(long pNativeObject, long streamPackage);
	/**
	 * 读取初始化信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readInitData(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readInitData_MemoryDataStreamPtr(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}
	native private int readInitData_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long streamPackage);
	protected int readInitData_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readInitData_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}

	native private int readTileData_EVString_MemoryDataStreamPtr(long pNativeObject, String url, long streamPackage);
	/**
	 * 读取瓦块流信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readTileData(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readTileData_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String url, long streamPackage);
	protected int readTileData_NoVirtual(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileData_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}

	native private int readDem_EVString_MemoryDataStreamPtr(long pNativeObject, String url, long streamPackage);
	/**
	 * 读取DEM信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readDem(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readDem_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readDem_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String url, long streamPackage);
	protected int readDem_NoVirtual(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readDem_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}

	native private int readTileMeshData_EVString_MemoryDataStreamPtr(long pNativeObject, String url, long streamPackage);
	public int readTileMeshData(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileMeshData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readTileMeshData_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String url, long streamPackage);
	protected int readTileMeshData_NoVirtual(String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileMeshData_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, urlParamValue, streamPackageParamValue);
		return returnValue;
	}

	public WebMeshXDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebMeshXDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public String getGUID()
	{
		return super.getGUID_NoVirtual();
	}
	/**
	 * 获取数据集类型
	 * @param  
	 * @return 数据集类型
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getType()
	{
		return super.getType_NoVirtual();
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
	
	native protected void register_getGUID_void(long pNativeObject, String method);
	native protected void register_readInitData_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readTileData_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readDem_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readTileMeshData_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
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
			this.register_getGUID_void(this.nativeObject.pointer, "getGUID_void_callback");
			this.register_readInitData_MemoryDataStreamPtr(this.nativeObject.pointer, "readInitData_MemoryDataStreamPtr_callback");
			this.register_readTileData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readTileData_EVString_MemoryDataStreamPtr_callback");
			this.register_readDem_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readDem_EVString_MemoryDataStreamPtr_callback");
			this.register_readTileMeshData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readTileMeshData_EVString_MemoryDataStreamPtr_callback");
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
	
	public static WebMeshXDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebMeshXDataset obj = null;
 		if(baseObj instanceof WebMeshXDataset)
		{
			obj = (WebMeshXDataset)baseObj;
		} else {
			obj = new WebMeshXDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebMeshXDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
