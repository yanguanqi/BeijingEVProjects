package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileInfo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::FileInfo", new FileInfoClassFactory());
	}

	public FileInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FileInfo", null);
	}

	native private long get_archive_void(long pNativeObject);
	public com.earthview.world.core.Archive get_archive()
	{
		long jniValue = get_archive_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Archive)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArchive");
		}
		return __returnValue;
	}
	
	native private String get_filename_void(long pNativeObject);
	public String get_filename()
	{
		String jniValue = get_filename_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_filename_EVString (long pNativeObject, String value);
	public void set_filename(String filename)
	{
		String filenameParamValue = filename;
		
		set_filename_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	
	native private String get_path_void(long pNativeObject);
	public String get_path()
	{
		String jniValue = get_path_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_path_EVString (long pNativeObject, String value);
	public void set_path(String path)
	{
		String pathParamValue = path;
		
		set_path_EVString(this.nativeObject.pointer, pathParamValue);
	}
	
	native private String get_basename_void(long pNativeObject);
	public String get_basename()
	{
		String jniValue = get_basename_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_basename_EVString (long pNativeObject, String value);
	public void set_basename(String basename)
	{
		String basenameParamValue = basename;
		
		set_basename_EVString(this.nativeObject.pointer, basenameParamValue);
	}
	
	native private long get_compressedSize_void(long pNativeObject);
	public long get_compressedSize()
	{
		long jniValue = get_compressedSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_compressedSize_ev_size_t (long pNativeObject, long value);
	public void set_compressedSize(long compressedSize)
	{
		long compressedSizeParamValue = compressedSize;
		
		set_compressedSize_ev_size_t(this.nativeObject.pointer, compressedSizeParamValue);
	}
	
	native private long get_uncompressedSize_void(long pNativeObject);
	public long get_uncompressedSize()
	{
		long jniValue = get_uncompressedSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_uncompressedSize_ev_size_t (long pNativeObject, long value);
	public void set_uncompressedSize(long uncompressedSize)
	{
		long uncompressedSizeParamValue = uncompressedSize;
		
		set_uncompressedSize_ev_size_t(this.nativeObject.pointer, uncompressedSizeParamValue);
	}
	
	public FileInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FileInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileInfo obj = null;
 		if(baseObj instanceof FileInfo)
		{
			obj = (FileInfo)baseObj;
		} else {
			obj = new FileInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FileInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
