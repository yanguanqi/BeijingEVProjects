package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class WebVector3DDataset extends com.earthview.world.spatial.WebDataset {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebVector3DDataset", new WebVector3DDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebVector3DDatasetProxy", new WebVector3DDatasetClassFactory());
	}

	native private long getMetaInfoRef_void(long pNativeObject);
	/**
	 * 获取元数据信息
	 * @return 元数据对象指针
	 */
	public com.earthview.world.spatial.Evvector3dmetainfo getMetaInfoRef()
	{
		long returnValue = getMetaInfoRef_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Evvector3dmetainfo __returnValue = new com.earthview.world.spatial.Evvector3dmetainfo(CreatedWhenConstruct.CWC_NotToCreate, "CEVVector3DMetaInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evvector3dmetainfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVVector3DMetaInfo");
		}
		return __returnValue;
	}
	protected  int readMetaData_MemoryDataStreamPtr_callback(long streamPackage)
	{
		com.earthview.world.core.MemoryDataStreamPtr streamPackageParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamPackageParamValue.setDelegate(true);
		streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		IClassFactory streamPackageParamValueClassFactory = GlobalClassFactoryMap.get(streamPackageParamValue.getCppInstanceTypeName());
		if (streamPackageParamValueClassFactory != null)
		{
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamPackageParamValueClassFactory.create();
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		}
		int returnValue = readMetaData(streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readMetaData_MemoryDataStreamPtr(long pNativeObject, long streamPackage);
	/**
	 * 读取初始化信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readMetaData(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readMetaData_MemoryDataStreamPtr(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}
	native private int readMetaData_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long streamPackage);
	protected int readMetaData_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readMetaData_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}

	protected  int readLayerInfo_MemoryDataStreamPtr_callback(long streamPackage)
	{
		com.earthview.world.core.MemoryDataStreamPtr streamPackageParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamPackageParamValue.setDelegate(true);
		streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		IClassFactory streamPackageParamValueClassFactory = GlobalClassFactoryMap.get(streamPackageParamValue.getCppInstanceTypeName());
		if (streamPackageParamValueClassFactory != null)
		{
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamPackageParamValueClassFactory.create();
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		}
		int returnValue = readLayerInfo(streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readLayerInfo_MemoryDataStreamPtr(long pNativeObject, long streamPackage);
	/**
	 * 读取初始化信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readLayerInfo(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readLayerInfo_MemoryDataStreamPtr(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}
	native private int readLayerInfo_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long streamPackage);
	protected int readLayerInfo_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readLayerInfo_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, streamPackageParamValue);
		return returnValue;
	}

	protected  int readOctreeNodes_EVString_MemoryDataStreamPtr_callback(String nodecode, long streamPackage)
	{
		String nodecodeParamValue = nodecode;
		com.earthview.world.core.MemoryDataStreamPtr streamPackageParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamPackageParamValue.setDelegate(true);
		streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		IClassFactory streamPackageParamValueClassFactory = GlobalClassFactoryMap.get(streamPackageParamValue.getCppInstanceTypeName());
		if (streamPackageParamValueClassFactory != null)
		{
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamPackageParamValueClassFactory.create();
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		}
		int returnValue = readOctreeNodes(nodecodeParamValue, streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readOctreeNodes_EVString_MemoryDataStreamPtr(long pNativeObject, String nodecode, long streamPackage);
	/**
	 * 读取八叉树信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readOctreeNodes(String nodecode, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String nodecodeParamValue = nodecode;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readOctreeNodes_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, nodecodeParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readOctreeNodes_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String nodecode, long streamPackage);
	protected int readOctreeNodes_NoVirtual(String nodecode, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String nodecodeParamValue = nodecode;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readOctreeNodes_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, nodecodeParamValue, streamPackageParamValue);
		return returnValue;
	}

	protected  int readOctreeObjects_EVString_MemoryDataStreamPtr_callback(String nodecode, long streamPackage)
	{
		String nodecodeParamValue = nodecode;
		com.earthview.world.core.MemoryDataStreamPtr streamPackageParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamPackageParamValue.setDelegate(true);
		streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		IClassFactory streamPackageParamValueClassFactory = GlobalClassFactoryMap.get(streamPackageParamValue.getCppInstanceTypeName());
		if (streamPackageParamValueClassFactory != null)
		{
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamPackageParamValueClassFactory.create();
			streamPackageParamValue.setDelegate(true);
			streamPackageParamValue.setInstancePointer(new InstancePointer(streamPackage));
		}
		int returnValue = readOctreeObjects(nodecodeParamValue, streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readOctreeObjects_EVString_MemoryDataStreamPtr(long pNativeObject, String nodecode, long streamPackage);
	/**
	 * 读取八叉树信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readOctreeObjects(String nodecode, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String nodecodeParamValue = nodecode;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readOctreeObjects_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, nodecodeParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readOctreeObjects_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String nodecode, long streamPackage);
	protected int readOctreeObjects_NoVirtual(String nodecode, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String nodecodeParamValue = nodecode;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readOctreeObjects_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, nodecodeParamValue, streamPackageParamValue);
		return returnValue;
	}

	public WebVector3DDataset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebVector3DDataset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_readMetaData_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readLayerInfo_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readOctreeNodes_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readOctreeObjects_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
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
			this.register_readMetaData_MemoryDataStreamPtr(this.nativeObject.pointer, "readMetaData_MemoryDataStreamPtr_callback");
			this.register_readLayerInfo_MemoryDataStreamPtr(this.nativeObject.pointer, "readLayerInfo_MemoryDataStreamPtr_callback");
			this.register_readOctreeNodes_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readOctreeNodes_EVString_MemoryDataStreamPtr_callback");
			this.register_readOctreeObjects_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readOctreeObjects_EVString_MemoryDataStreamPtr_callback");
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
	
	public static WebVector3DDataset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebVector3DDataset obj = null;
 		if(baseObj instanceof WebVector3DDataset)
		{
			obj = (WebVector3DDataset)baseObj;
		} else {
			obj = new WebVector3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebVector3DDataset");
			obj.increaseCast();
		}

		return obj;
	}
}
