package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////////////////////
public class Evlasxgserviceconnection extends com.earthview.world.spatial.download.WebServiceConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVLasXGServiceConnection", new EvlasxgserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JEVLasXGServiceConnectionProxy", new EvlasxgserviceconnectionClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public Evlasxgserviceconnection(StringPointer name, StringPointer url, StringPointer pluginFile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		BasePointer pluginFilePtr = new BasePointer(pluginFile);
		list.add("pluginFile", pluginFilePtr.get());
		Create("JEVLasXGServiceConnectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.Evlasxgserviceconnection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setConnectionImp_ConnectionImp(long pNativeObject, long ref_pImp);
	/**
	 * 
	 * @param  
	 */
	public void setConnectionImp(com.earthview.world.spatial.download.ConnectionImp ref_pImp)
	{
		long ref_pImpParamValue = (ref_pImp == null ? 0L : ref_pImp.nativeObject.pointer);
		setConnectionImp_ConnectionImp(this.nativeObject.pointer, ref_pImpParamValue);
	}
	native private void setConnectionImp_ConnectionImp_NoVirtual(long pNativeObject, long ref_pImp);
	protected void setConnectionImp_NoVirtual(com.earthview.world.spatial.download.ConnectionImp ref_pImp)
	{
		long ref_pImpParamValue = (ref_pImp == null ? 0L : ref_pImp.nativeObject.pointer);
		setConnectionImp_ConnectionImp_NoVirtual(this.nativeObject.pointer, ref_pImpParamValue);
	}

	native private void closeConnect_void(long pNativeObject);
	/**
	 * 断开与web服务器的连接
	 * @param  
	 */
	public void closeConnect()
	{
		closeConnect_void(this.nativeObject.pointer);
	}
	native private void closeConnect_void_NoVirtual(long pNativeObject);
	protected void closeConnect_NoVirtual()
	{
		closeConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void openConnect_void(long pNativeObject);
	/**
	 * 连接web服务器
	 * @param  
	 */
	public void openConnect()
	{
		openConnect_void(this.nativeObject.pointer);
	}
	native private void openConnect_void_NoVirtual(long pNativeObject);
	protected void openConnect_NoVirtual()
	{
		openConnect_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  int readInitData_EVString_MemoryDataStreamPtr_callback(String servicename, long streamPackage)
	{
		String servicenameParamValue = servicename;
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
		int returnValue = readInitData(servicenameParamValue, streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readInitData_EVString_MemoryDataStreamPtr(long pNativeObject, String servicename, long streamPackage);
	/**
	 * 读取初始化信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readInitData(String servicename, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readInitData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, servicenameParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readInitData_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String servicename, long streamPackage);
	protected int readInitData_NoVirtual(String servicename, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readInitData_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, servicenameParamValue, streamPackageParamValue);
		return returnValue;
	}

	protected  int readTileData_EVString_EVString_MemoryDataStreamPtr_callback(String servicename, String url, long streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
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
		int returnValue = readTileData(servicenameParamValue, urlParamValue, streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readTileData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String servicename, String url, long streamPackage);
	/**
	 * 读取瓦块流信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readTileData(String servicename, String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, servicenameParamValue, urlParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readTileData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String servicename, String url, long streamPackage);
	protected int readTileData_NoVirtual(String servicename, String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readTileData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, servicenameParamValue, urlParamValue, streamPackageParamValue);
		return returnValue;
	}

	protected  int readDem_EVString_EVString_MemoryDataStreamPtr_callback(String servicename, String url, long streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
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
		int returnValue = readDem(servicenameParamValue, urlParamValue, streamPackageParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readDem_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String servicename, String url, long streamPackage);
	/**
	 * 读取DEM信息
	 * @param  
	 * @return 失败返回-1
	 */
	public int readDem(String servicename, String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readDem_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, servicenameParamValue, urlParamValue, streamPackageParamValue);
		return returnValue;
	}
	native private int readDem_EVString_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String servicename, String url, long streamPackage);
	protected int readDem_NoVirtual(String servicename, String url, com.earthview.world.core.MemoryDataStreamPtr streamPackage)
	{
		String servicenameParamValue = servicename;
		String urlParamValue = url;
		long streamPackageParamValue = streamPackage.nativeObject.pointer;
		int returnValue = readDem_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, servicenameParamValue, urlParamValue, streamPackageParamValue);
		return returnValue;
	}

	protected  int getWFSMetaData_EVString_CDataMetaInfo_callback(String servicename, long metadata)
	{
		String servicenameParamValue = servicename;
		DataMetaInfo metadataParamValue = new DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		metadataParamValue.setDelegate(true);
		metadataParamValue.setInstancePointer(new InstancePointer(metadata));
		IClassFactory metadataParamValueClassFactory = GlobalClassFactoryMap.get(metadataParamValue.getCppInstanceTypeName());
		if (metadataParamValueClassFactory != null)
		{
			metadataParamValue.setDelegate(true);
			metadataParamValue = (DataMetaInfo)metadataParamValueClassFactory.create();
			metadataParamValue.setDelegate(true);
			metadataParamValue.setInstancePointer(new InstancePointer(metadata));
		}
		int returnValue = getWFSMetaData(servicenameParamValue, metadataParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getWFSMetaData_EVString_CDataMetaInfo(long pNativeObject, String servicename, long metadata);
	/**
	 * 读取WFS元数据
	 * @param  
	 * @return 失败返回-1
	 */
	public int getWFSMetaData(String servicename, DataMetaInfo metadata)
	{
		String servicenameParamValue = servicename;
		long metadataParamValue = metadata.nativeObject.pointer;
		int returnValue = getWFSMetaData_EVString_CDataMetaInfo(this.nativeObject.pointer, servicenameParamValue, metadataParamValue);
		return returnValue;
	}
	native private int getWFSMetaData_EVString_CDataMetaInfo_NoVirtual(long pNativeObject, String servicename, long metadata);
	protected int getWFSMetaData_NoVirtual(String servicename, DataMetaInfo metadata)
	{
		String servicenameParamValue = servicename;
		long metadataParamValue = metadata.nativeObject.pointer;
		int returnValue = getWFSMetaData_EVString_CDataMetaInfo_NoVirtual(this.nativeObject.pointer, servicenameParamValue, metadataParamValue);
		return returnValue;
	}

	protected  int getFields_EVString_CFields_callback(String servicename, long fields)
	{
		String servicenameParamValue = servicename;
		Fields fieldsParamValue = new Fields(CreatedWhenConstruct.CWC_NotToCreate);
		fieldsParamValue.setDelegate(true);
		fieldsParamValue.setInstancePointer(new InstancePointer(fields));
		IClassFactory fieldsParamValueClassFactory = GlobalClassFactoryMap.get(fieldsParamValue.getCppInstanceTypeName());
		if (fieldsParamValueClassFactory != null)
		{
			fieldsParamValue.setDelegate(true);
			fieldsParamValue = (Fields)fieldsParamValueClassFactory.create();
			fieldsParamValue.setDelegate(true);
			fieldsParamValue.setInstancePointer(new InstancePointer(fields));
		}
		int returnValue = getFields(servicenameParamValue, fieldsParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getFields_EVString_CFields(long pNativeObject, String servicename, long fields);
	/**
	 * 读取字段数据
	 * @param  
	 * @return 失败返回-1
	 */
	public int getFields(String servicename, Fields fields)
	{
		String servicenameParamValue = servicename;
		long fieldsParamValue = fields.nativeObject.pointer;
		int returnValue = getFields_EVString_CFields(this.nativeObject.pointer, servicenameParamValue, fieldsParamValue);
		return returnValue;
	}
	native private int getFields_EVString_CFields_NoVirtual(long pNativeObject, String servicename, long fields);
	protected int getFields_NoVirtual(String servicename, Fields fields)
	{
		String servicenameParamValue = servicename;
		long fieldsParamValue = fields.nativeObject.pointer;
		int returnValue = getFields_EVString_CFields_NoVirtual(this.nativeObject.pointer, servicenameParamValue, fieldsParamValue);
		return returnValue;
	}

	protected  int getFeatures_EVString_ev_int32_EVLasFeatureVector_callback(String servicename, int type, long featurevector)
	{
		String servicenameParamValue = servicename;
		int typeParamValue = type;
		com.earthview.world.spatial.download.Evlasfeaturevector featurevectorParamValue = new com.earthview.world.spatial.download.Evlasfeaturevector(CreatedWhenConstruct.CWC_NotToCreate);
		featurevectorParamValue.setDelegate(true);
		featurevectorParamValue.setInstancePointer(new InstancePointer(featurevector));
		IClassFactory featurevectorParamValueClassFactory = GlobalClassFactoryMap.get(featurevectorParamValue.getCppInstanceTypeName());
		if (featurevectorParamValueClassFactory != null)
		{
			featurevectorParamValue.setDelegate(true);
			featurevectorParamValue = (com.earthview.world.spatial.download.Evlasfeaturevector)featurevectorParamValueClassFactory.create();
			featurevectorParamValue.setDelegate(true);
			featurevectorParamValue.setInstancePointer(new InstancePointer(featurevector));
		}
		int returnValue = getFeatures(servicenameParamValue, typeParamValue, featurevectorParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getFeatures_EVString_ev_int32_EVLasFeatureVector(long pNativeObject, String servicename, int type, long featurevector);
	/**
	 * 读取要素数据
	 * @param  
	 * @return 失败返回-1
	 */
	public int getFeatures(String servicename, int type, com.earthview.world.spatial.download.Evlasfeaturevector featurevector)
	{
		String servicenameParamValue = servicename;
		int typeParamValue = type;
		long featurevectorParamValue = featurevector.nativeObject.pointer;
		int returnValue = getFeatures_EVString_ev_int32_EVLasFeatureVector(this.nativeObject.pointer, servicenameParamValue, typeParamValue, featurevectorParamValue);
		return returnValue;
	}
	native private int getFeatures_EVString_ev_int32_EVLasFeatureVector_NoVirtual(long pNativeObject, String servicename, int type, long featurevector);
	protected int getFeatures_NoVirtual(String servicename, int type, com.earthview.world.spatial.download.Evlasfeaturevector featurevector)
	{
		String servicenameParamValue = servicename;
		int typeParamValue = type;
		long featurevectorParamValue = featurevector.nativeObject.pointer;
		int returnValue = getFeatures_EVString_ev_int32_EVLasFeatureVector_NoVirtual(this.nativeObject.pointer, servicenameParamValue, typeParamValue, featurevectorParamValue);
		return returnValue;
	}

	public Evlasxgserviceconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evlasxgserviceconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_readInitData_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readTileData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_readDem_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getWFSMetaData_EVString_CDataMetaInfo(long pNativeObject, String method);
	native protected void register_getFields_EVString_CFields(long pNativeObject, String method);
	native protected void register_getFeatures_EVString_ev_int32_EVLasFeatureVector(long pNativeObject, String method);
	native protected void register_setConnectionImp_ConnectionImp(long pNativeObject, String method);
	native protected void register_closeConnect_void(long pNativeObject, String method);
	native protected void register_openConnect_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_readInitData_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readInitData_EVString_MemoryDataStreamPtr_callback");
			this.register_readTileData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readTileData_EVString_EVString_MemoryDataStreamPtr_callback");
			this.register_readDem_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readDem_EVString_EVString_MemoryDataStreamPtr_callback");
			this.register_getWFSMetaData_EVString_CDataMetaInfo(this.nativeObject.pointer, "getWFSMetaData_EVString_CDataMetaInfo_callback");
			this.register_getFields_EVString_CFields(this.nativeObject.pointer, "getFields_EVString_CFields_callback");
			this.register_getFeatures_EVString_ev_int32_EVLasFeatureVector(this.nativeObject.pointer, "getFeatures_EVString_ev_int32_EVLasFeatureVector_callback");
			this.register_setConnectionImp_ConnectionImp(this.nativeObject.pointer, "setConnectionImp_ConnectionImp_callback");
			this.register_closeConnect_void(this.nativeObject.pointer, "closeConnect_void_callback");
			this.register_openConnect_void(this.nativeObject.pointer, "openConnect_void_callback");
		}
	}
	
	public static Evlasxgserviceconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evlasxgserviceconnection obj = null;
 		if(baseObj instanceof Evlasxgserviceconnection)
		{
			obj = (Evlasxgserviceconnection)baseObj;
		} else {
			obj = new Evlasxgserviceconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVLasXGServiceConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
