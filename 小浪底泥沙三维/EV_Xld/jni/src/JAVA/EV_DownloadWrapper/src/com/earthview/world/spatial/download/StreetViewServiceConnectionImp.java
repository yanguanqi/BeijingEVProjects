package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class StreetViewServiceConnectionImp extends com.earthview.world.spatial.download.ConnectionImp {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp", new StreetViewServiceConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCStreetViewServiceConnectionImpProxy", new StreetViewServiceConnectionImpClassFactory());
	}

	public StreetViewServiceConnectionImp() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCStreetViewServiceConnectionImpProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.download.StreetViewServiceConnectionImp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	public StreetViewServiceConnectionImp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StreetViewServiceConnectionImp(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_readintidata_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getStreetPoints_EVString_EVString_CStreetPointList(long pNativeObject, String method);
	native protected void register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_openConnection_void(long pNativeObject, String method);
	native protected void register_closeConnection_void(long pNativeObject, String method);
	native protected void register_setConnectTimeout_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_readintidata_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "readintidata_EVString_MemoryDataStreamPtr_callback");
			this.register_getStreetPoints_EVString_EVString_CStreetPointList(this.nativeObject.pointer, "getStreetPoints_EVString_EVString_CStreetPointList_callback");
			this.register_getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr(this.nativeObject.pointer, "getPicture_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_callback");
			this.register_openConnection_void(this.nativeObject.pointer, "openConnection_void_callback");
			this.register_closeConnection_void(this.nativeObject.pointer, "closeConnection_void_callback");
			this.register_setConnectTimeout_ev_int32(this.nativeObject.pointer, "setConnectTimeout_ev_int32_callback");
		}
	}
	
	public static StreetViewServiceConnectionImp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StreetViewServiceConnectionImp obj = null;
 		if(baseObj instanceof StreetViewServiceConnectionImp)
		{
			obj = (StreetViewServiceConnectionImp)baseObj;
		} else {
			obj = new StreetViewServiceConnectionImp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStreetViewServiceConnectionImp");
			obj.increaseCast();
		}

		return obj;
	}
}
