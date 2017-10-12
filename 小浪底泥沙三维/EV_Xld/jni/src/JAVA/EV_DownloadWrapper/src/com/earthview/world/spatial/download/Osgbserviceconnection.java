package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////////////////////
public class Osgbserviceconnection extends com.earthview.world.spatial.download.WebServiceConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBServiceConnection", new OsgbserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBServiceConnectionProxy", new OsgbserviceconnectionClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public Osgbserviceconnection(StringPointer name, StringPointer url, StringPointer pluginFile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		BasePointer pluginFilePtr = new BasePointer(pluginFile);
		list.add("pluginFile", pluginFilePtr.get());
		Create("JCOSGBServiceConnectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.Osgbserviceconnection".equals(this.getClass().getName()))
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

	protected  int getMetaData_EVString_COSGBLayerMetaData_callback(String guid, long metadata)
	{
		String guidParamValue = guid;
		com.earthview.world.spatial.download.Osgblayermetadata metadataParamValue = new com.earthview.world.spatial.download.Osgblayermetadata(CreatedWhenConstruct.CWC_NotToCreate);
		metadataParamValue.setDelegate(true);
		metadataParamValue.setInstancePointer(new InstancePointer(metadata));
		IClassFactory metadataParamValueClassFactory = GlobalClassFactoryMap.get(metadataParamValue.getCppInstanceTypeName());
		if (metadataParamValueClassFactory != null)
		{
			metadataParamValue.setDelegate(true);
			metadataParamValue = (com.earthview.world.spatial.download.Osgblayermetadata)metadataParamValueClassFactory.create();
			metadataParamValue.setDelegate(true);
			metadataParamValue.setInstancePointer(new InstancePointer(metadata));
		}
		int returnValue = getMetaData(guidParamValue, metadataParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMetaData_EVString_COSGBLayerMetaData(long pNativeObject, String guid, long metadata);
	public int getMetaData(String guid, com.earthview.world.spatial.download.Osgblayermetadata metadata)
	{
		String guidParamValue = guid;
		long metadataParamValue = metadata.nativeObject.pointer;
		int returnValue = getMetaData_EVString_COSGBLayerMetaData(this.nativeObject.pointer, guidParamValue, metadataParamValue);
		return returnValue;
	}
	native private int getMetaData_EVString_COSGBLayerMetaData_NoVirtual(long pNativeObject, String guid, long metadata);
	protected int getMetaData_NoVirtual(String guid, com.earthview.world.spatial.download.Osgblayermetadata metadata)
	{
		String guidParamValue = guid;
		long metadataParamValue = metadata.nativeObject.pointer;
		int returnValue = getMetaData_EVString_COSGBLayerMetaData_NoVirtual(this.nativeObject.pointer, guidParamValue, metadataParamValue);
		return returnValue;
	}

	protected  int getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback(String guid, String fileName, long osgbData)
	{
		String guidParamValue = guid;
		String fileNameParamValue = fileName;
		com.earthview.world.core.MemoryDataStreamPtr osgbDataParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		osgbDataParamValue.setDelegate(true);
		osgbDataParamValue.setInstancePointer(new InstancePointer(osgbData));
		IClassFactory osgbDataParamValueClassFactory = GlobalClassFactoryMap.get(osgbDataParamValue.getCppInstanceTypeName());
		if (osgbDataParamValueClassFactory != null)
		{
			osgbDataParamValue.setDelegate(true);
			osgbDataParamValue = (com.earthview.world.core.MemoryDataStreamPtr)osgbDataParamValueClassFactory.create();
			osgbDataParamValue.setDelegate(true);
			osgbDataParamValue.setInstancePointer(new InstancePointer(osgbData));
		}
		int returnValue = getOSGBData(guidParamValue, fileNameParamValue, osgbDataParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getOSGBData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String guid, String fileName, long osgbData);
	public int getOSGBData(String guid, String fileName, com.earthview.world.core.MemoryDataStreamPtr osgbData)
	{
		String guidParamValue = guid;
		String fileNameParamValue = fileName;
		long osgbDataParamValue = osgbData.nativeObject.pointer;
		int returnValue = getOSGBData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, guidParamValue, fileNameParamValue, osgbDataParamValue);
		return returnValue;
	}
	native private int getOSGBData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String guid, String fileName, long osgbData);
	protected int getOSGBData_NoVirtual(String guid, String fileName, com.earthview.world.core.MemoryDataStreamPtr osgbData)
	{
		String guidParamValue = guid;
		String fileNameParamValue = fileName;
		long osgbDataParamValue = osgbData.nativeObject.pointer;
		int returnValue = getOSGBData_EVString_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, guidParamValue, fileNameParamValue, osgbDataParamValue);
		return returnValue;
	}

	public Osgbserviceconnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Osgbserviceconnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getMetaData_EVString_COSGBLayerMetaData(long pNativeObject, String method);
	native protected void register_getOSGBData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_setConnectionImp_ConnectionImp(long pNativeObject, String method);
	native protected void register_closeConnect_void(long pNativeObject, String method);
	native protected void register_openConnect_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMetaData_EVString_COSGBLayerMetaData(this.nativeObject.pointer, "getMetaData_EVString_COSGBLayerMetaData_callback");
			this.register_getOSGBData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback");
			this.register_setConnectionImp_ConnectionImp(this.nativeObject.pointer, "setConnectionImp_ConnectionImp_callback");
			this.register_closeConnect_void(this.nativeObject.pointer, "closeConnect_void_callback");
			this.register_openConnect_void(this.nativeObject.pointer, "openConnect_void_callback");
		}
	}
	
	public static Osgbserviceconnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Osgbserviceconnection obj = null;
 		if(baseObj instanceof Osgbserviceconnection)
		{
			obj = (Osgbserviceconnection)baseObj;
		} else {
			obj = new Osgbserviceconnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COSGBServiceConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
