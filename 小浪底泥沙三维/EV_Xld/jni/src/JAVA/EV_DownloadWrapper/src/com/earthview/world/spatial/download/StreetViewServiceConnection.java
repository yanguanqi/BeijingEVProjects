package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

///////////////////////////////////////////////////////////////////////////
public class StreetViewServiceConnection extends com.earthview.world.spatial.download.WebServiceConnection {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetViewServiceConnection", new StreetViewServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCStreetViewServiceConnectionProxy", new StreetViewServiceConnectionClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public StreetViewServiceConnection(StringPointer name, StringPointer url, StringPointer pluginFile) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer urlPtr = new BasePointer(url);
		list.add("url", urlPtr.get());
		BasePointer pluginFilePtr = new BasePointer(pluginFile);
		list.add("pluginFile", pluginFilePtr.get());
		Create("JCStreetViewServiceConnectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.StreetViewServiceConnection".equals(this.getClass().getName()))
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

	protected  int readintidata_EVString_MemoryDataStreamPtr_callback(String servicename, long stream)
	{
		String servicenameParamValue = servicename;
		com.earthview.world.core.MemoryDataStreamPtr streamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int returnValue = readintidata(servicenameParamValue, streamParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int readintidata_EVString_MemoryDataStreamPtr(long pNativeObject, String servicename, long stream);
	public int readintidata(String servicename, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		String servicenameParamValue = servicename;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = readintidata_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, servicenameParamValue, streamParamValue);
		return returnValue;
	}
	native private int readintidata_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String servicename, long stream);
	protected int readintidata_NoVirtual(String servicename, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		String servicenameParamValue = servicename;
		long streamParamValue = stream.nativeObject.pointer;
		int returnValue = readintidata_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, servicenameParamValue, streamParamValue);
		return returnValue;
	}

	protected  int getStreetPoints_EVString_EVString_CStreetPointList_callback(String servicename, String mapCode, long streetPoints)
	{
		String servicenameParamValue = servicename;
		String mapCodeParamValue = mapCode;
		com.earthview.world.spatial.download.StreetPointList streetPointsParamValue = new com.earthview.world.spatial.download.StreetPointList(CreatedWhenConstruct.CWC_NotToCreate);
		streetPointsParamValue.setDelegate(true);
		streetPointsParamValue.setInstancePointer(new InstancePointer(streetPoints));
		IClassFactory streetPointsParamValueClassFactory = GlobalClassFactoryMap.get(streetPointsParamValue.getCppInstanceTypeName());
		if (streetPointsParamValueClassFactory != null)
		{
			streetPointsParamValue.setDelegate(true);
			streetPointsParamValue = (com.earthview.world.spatial.download.StreetPointList)streetPointsParamValueClassFactory.create();
			streetPointsParamValue.setDelegate(true);
			streetPointsParamValue.setInstancePointer(new InstancePointer(streetPoints));
		}
		int returnValue = getStreetPoints(servicenameParamValue, mapCodeParamValue, streetPointsParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getStreetPoints_EVString_EVString_CStreetPointList(long pNativeObject, String servicename, String mapCode, long streetPoints);
	public int getStreetPoints(String servicename, String mapCode, com.earthview.world.spatial.download.StreetPointList streetPoints)
	{
		String servicenameParamValue = servicename;
		String mapCodeParamValue = mapCode;
		long streetPointsParamValue = streetPoints.nativeObject.pointer;
		int returnValue = getStreetPoints_EVString_EVString_CStreetPointList(this.nativeObject.pointer, servicenameParamValue, mapCodeParamValue, streetPointsParamValue);
		return returnValue;
	}
	native private int getStreetPoints_EVString_EVString_CStreetPointList_NoVirtual(long pNativeObject, String servicename, String mapCode, long streetPoints);
	protected int getStreetPoints_NoVirtual(String servicename, String mapCode, com.earthview.world.spatial.download.StreetPointList streetPoints)
	{
		String servicenameParamValue = servicename;
		String mapCodeParamValue = mapCode;
		long streetPointsParamValue = streetPoints.nativeObject.pointer;
		int returnValue = getStreetPoints_EVString_EVString_CStreetPointList_NoVirtual(this.nativeObject.pointer, servicenameParamValue, mapCodeParamValue, streetPointsParamValue);
		return returnValue;
	}

	protected  int getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback(String servicename, int ID, int level, int row, int col, long picMem)
	{
		String servicenameParamValue = servicename;
		int IDParamValue = ID;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		com.earthview.world.core.MemoryDataStreamPtr picMemParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		picMemParamValue.setDelegate(true);
		picMemParamValue.setInstancePointer(new InstancePointer(picMem));
		IClassFactory picMemParamValueClassFactory = GlobalClassFactoryMap.get(picMemParamValue.getCppInstanceTypeName());
		if (picMemParamValueClassFactory != null)
		{
			picMemParamValue.setDelegate(true);
			picMemParamValue = (com.earthview.world.core.MemoryDataStreamPtr)picMemParamValueClassFactory.create();
			picMemParamValue.setDelegate(true);
			picMemParamValue.setInstancePointer(new InstancePointer(picMem));
		}
		int returnValue = getPicture(servicenameParamValue, IDParamValue, levelParamValue, rowParamValue, colParamValue, picMemParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(long pNativeObject, String servicename, int ID, int level, int row, int col, long picMem);
	public int getPicture(String servicename, int ID, int level, int row, int col, com.earthview.world.core.MemoryDataStreamPtr picMem)
	{
		String servicenameParamValue = servicename;
		int IDParamValue = ID;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long picMemParamValue = picMem.nativeObject.pointer;
		int returnValue = getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(this.nativeObject.pointer, servicenameParamValue, IDParamValue, levelParamValue, rowParamValue, colParamValue, picMemParamValue);
		return returnValue;
	}
	native private int getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_NoVirtual(long pNativeObject, String servicename, int ID, int level, int row, int col, long picMem);
	protected int getPicture_NoVirtual(String servicename, int ID, int level, int row, int col, com.earthview.world.core.MemoryDataStreamPtr picMem)
	{
		String servicenameParamValue = servicename;
		int IDParamValue = ID;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long picMemParamValue = picMem.nativeObject.pointer;
		int returnValue = getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, servicenameParamValue, IDParamValue, levelParamValue, rowParamValue, colParamValue, picMemParamValue);
		return returnValue;
	}

	public StreetViewServiceConnection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StreetViewServiceConnection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_readintidata_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getStreetPoints_EVString_EVString_CStreetPointList(long pNativeObject, String method);
	native protected void register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_setConnectionImp_ConnectionImp(long pNativeObject, String method);
	native protected void register_closeConnect_void(long pNativeObject, String method);
	native protected void register_openConnect_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_readintidata_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readintidata_EVString_MemoryDataStreamPtr_callback");
			this.register_getStreetPoints_EVString_EVString_CStreetPointList(this.nativeObject.pointer, "getStreetPoints_EVString_EVString_CStreetPointList_callback");
			this.register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(this.nativeObject.pointer, "getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback");
			this.register_setConnectionImp_ConnectionImp(this.nativeObject.pointer, "setConnectionImp_ConnectionImp_callback");
			this.register_closeConnect_void(this.nativeObject.pointer, "closeConnect_void_callback");
			this.register_openConnect_void(this.nativeObject.pointer, "openConnect_void_callback");
		}
	}
	
	public static StreetViewServiceConnection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StreetViewServiceConnection obj = null;
 		if(baseObj instanceof StreetViewServiceConnection)
		{
			obj = (StreetViewServiceConnection)baseObj;
		} else {
			obj = new StreetViewServiceConnection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStreetViewServiceConnection");
			obj.increaseCast();
		}

		return obj;
	}
}
