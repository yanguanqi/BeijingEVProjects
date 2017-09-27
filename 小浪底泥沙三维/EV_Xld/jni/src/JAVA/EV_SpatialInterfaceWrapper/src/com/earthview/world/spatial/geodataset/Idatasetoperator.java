package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据集操作类，用于支持数据集最基本的操作。
 */
public class Idatasetoperator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IDatasetOperator", new IdatasetoperatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIDatasetOperatorProxy", new IdatasetoperatorClassFactory());
	}

	protected  int getDatasetType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVDatasetType returnValue = getDatasetType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDatasetType_void(long pNativeObject);
	/**
	 * 获取Operator对应的数据集类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType()
	{
		int returnValue = getDatasetType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	native private int getDatasetType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDatasetType getDatasetType_NoVirtual()
	{
		int returnValue = getDatasetType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}

	protected  int getDataSourceType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVDataSourceType returnValue = getDataSourceType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getDataSourceType_void(long pNativeObject);
	/**
	 * 获取Operator对应的数据数据源类型
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.EVDataSourceType getDataSourceType()
	{
		int returnValue = getDataSourceType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDataSourceType.toEnum(returnValue);
	}
	native private int getDataSourceType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVDataSourceType getDataSourceType_NoVirtual()
	{
		int returnValue = getDataSourceType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVDataSourceType.toEnum(returnValue);
	}

	protected  boolean openDataset_CDataStream_EVString_callback(long stream, String name)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		String nameParamValue = name;
		boolean returnValue = openDataset(streamParamValue, nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean openDataset_CDataStream_EVString(long pNativeObject, long stream, String name);
	/**
	 * 打开数据集
	 * @param  
	 */
	public boolean openDataset(com.earthview.world.core.DataStream stream, String name)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String nameParamValue = name;
		boolean returnValue = openDataset_CDataStream_EVString(this.nativeObject.pointer, streamParamValue, nameParamValue);
		return returnValue;
	}
	native private boolean openDataset_CDataStream_EVString_NoVirtual(long pNativeObject, long stream, String name);
	protected boolean openDataset_NoVirtual(com.earthview.world.core.DataStream stream, String name)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String nameParamValue = name;
		boolean returnValue = openDataset_CDataStream_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, nameParamValue);
		return returnValue;
	}

	protected  boolean deleteDataset_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean deleteDataset_EVString(long pNativeObject, String name);
	/**
	 * 删除数据集
	 * @param  
	 * @param  
	 */
	public boolean deleteDataset(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean deleteDataset_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean deleteDataset_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = deleteDataset_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	protected  long getDataSourceRef_void_callback()
	{
		com.earthview.world.spatial.geodataset.Idatasource returnValue = getDataSourceRef();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDataSourceRef_void(long pNativeObject);
	/**
	 * 获取数据源引用
	 * @param  
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Idatasetoperator returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆自身
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasetoperator ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasetoperator __returnValue = new com.earthview.world.spatial.geodataset.Idatasetoperator(CreatedWhenConstruct.CWC_NotToCreate, "IDatasetOperator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasetoperator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDatasetOperator");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Idatasetoperator ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idatasetoperator __returnValue = new com.earthview.world.spatial.geodataset.Idatasetoperator(CreatedWhenConstruct.CWC_NotToCreate, "IDatasetOperator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idatasetoperator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDatasetOperator");
		}
		return __returnValue;
	}

	public Idatasetoperator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idatasetoperator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDatasetType_void(long pNativeObject, String method);
	native protected void register_getDataSourceType_void(long pNativeObject, String method);
	native protected void register_openDataset_CDataStream_EVString(long pNativeObject, String method);
	native protected void register_deleteDataset_EVString(long pNativeObject, String method);
	native protected void register_getDataSourceRef_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDatasetType_void(this.nativeObject.pointer, "getDatasetType_void_callback");
			this.register_getDataSourceType_void(this.nativeObject.pointer, "getDataSourceType_void_callback");
			this.register_openDataset_CDataStream_EVString(this.nativeObject.pointer, "openDataset_CDataStream_EVString_callback");
			this.register_deleteDataset_EVString(this.nativeObject.pointer, "deleteDataset_EVString_callback");
			this.register_getDataSourceRef_void(this.nativeObject.pointer, "getDataSourceRef_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Idatasetoperator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idatasetoperator obj = null;
 		if(baseObj instanceof Idatasetoperator)
		{
			obj = (Idatasetoperator)baseObj;
		} else {
			obj = new Idatasetoperator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDatasetOperator");
			obj.increaseCast();
		}

		return obj;
	}
}
