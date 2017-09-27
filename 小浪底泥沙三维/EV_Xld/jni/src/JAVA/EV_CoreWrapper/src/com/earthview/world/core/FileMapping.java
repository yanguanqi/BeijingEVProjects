package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileMapping extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileMapping", new FileMappingClassFactory());
	}

	public FileMapping() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFileMapping", null);
	}

	native private boolean open_ev_string_FILEACCESS_ev_uint64_ev_string(long pNativeObject, String strFileName, int access, long nMaxSize, String strShareName);
	public boolean open(String strFileName, com.earthview.world.core.FILEACCESS access, ULongPointer nMaxSize, String strShareName)
	{
		String strFileNameParamValue = strFileName;
		int accessParamValue = access.getValue();
		long nMaxSizeParamValue = nMaxSize.nativeObject.pointer;
		String strShareNameParamValue = strShareName;
		boolean returnValue = open_ev_string_FILEACCESS_ev_uint64_ev_string(this.nativeObject.pointer, strFileNameParamValue, accessParamValue, nMaxSizeParamValue, strShareNameParamValue);
		return returnValue;
	}
	native private boolean isOpen_void(long pNativeObject);
	public boolean isOpen()
	{
		boolean returnValue = isOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void close_void(long pNativeObject);
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private long mapViewOfFile_ev_uint64_ev_uint64(long pNativeObject, long nOffset, long nBytes);
	public VoidPointer mapViewOfFile(ULongPointer nOffset, ULongPointer nBytes)
	{
		long nOffsetParamValue = nOffset.nativeObject.pointer;
		long nBytesParamValue = nBytes.nativeObject.pointer;
		long returnValue = mapViewOfFile_ev_uint64_ev_uint64(this.nativeObject.pointer, nOffsetParamValue, nBytesParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean flushMapViewOfFile_void(long pNativeObject);
	public boolean flushMapViewOfFile()
	{
		boolean returnValue = flushMapViewOfFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean unMapViewOfFile_void(long pNativeObject);
	public boolean unMapViewOfFile()
	{
		boolean returnValue = unMapViewOfFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	public FileMapping(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileMapping(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FileMapping fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileMapping obj = null;
 		if(baseObj instanceof FileMapping)
		{
			obj = (FileMapping)baseObj;
		} else {
			obj = new FileMapping(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFileMapping");
			obj.increaseCast();
		}

		return obj;
	}
}
