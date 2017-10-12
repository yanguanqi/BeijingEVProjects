package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class Osgbserviceconnectionimp extends com.earthview.world.spatial.download.ConnectionImp {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBServiceConnectionImp", new OsgbserviceconnectionimpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBServiceConnectionImpProxy", new OsgbserviceconnectionimpClassFactory());
	}

	public Osgbserviceconnectionimp() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOSGBServiceConnectionImpProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.Osgbserviceconnectionimp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	public Osgbserviceconnectionimp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Osgbserviceconnectionimp(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 
	 * @param  
	 */
	public boolean openConnection()
	{
		return super.openConnection_NoVirtual();
	}
	/**
	 * 
	 * @param  
	 */
	public boolean closeConnection()
	{
		return super.closeConnection_NoVirtual();
	}
	/**
	 * 
	 * @param  
	 */
	public void setConnectTimeout(int timeout)
	{
		super.setConnectTimeout_NoVirtual(timeout);
	}
	
	native protected void register_getMetaData_EVString_COSGBLayerMetaData(long pNativeObject, String method);
	native protected void register_getOSGBData_EVString_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_openConnection_void(long pNativeObject, String method);
	native protected void register_closeConnection_void(long pNativeObject, String method);
	native protected void register_setConnectTimeout_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getMetaData_EVString_COSGBLayerMetaData(this.nativeObject.pointer, "getMetaData_EVString_COSGBLayerMetaData_callback");
			this.register_getOSGBData_EVString_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "getOSGBData_EVString_EVString_MemoryDataStreamPtr_callback");
			this.register_openConnection_void(this.nativeObject.pointer, "openConnection_void_callback");
			this.register_closeConnection_void(this.nativeObject.pointer, "closeConnection_void_callback");
			this.register_setConnectTimeout_ev_int32(this.nativeObject.pointer, "setConnectTimeout_ev_int32_callback");
		}
	}
	
	public static Osgbserviceconnectionimp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Osgbserviceconnectionimp obj = null;
 		if(baseObj instanceof Osgbserviceconnectionimp)
		{
			obj = (Osgbserviceconnectionimp)baseObj;
		} else {
			obj = new Osgbserviceconnectionimp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COSGBServiceConnectionImp");
			obj.increaseCast();
		}

		return obj;
	}
}
