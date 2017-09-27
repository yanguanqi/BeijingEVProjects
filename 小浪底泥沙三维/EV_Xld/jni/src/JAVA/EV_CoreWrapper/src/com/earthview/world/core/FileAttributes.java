package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：文件/目录属性
///创建时间：2012.2.13
///作者：邹先涛
public class FileAttributes extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::FileAttributes", new FileAttributesClassFactory());
	}

	public FileAttributes() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FileAttributes", null);
	}

	native private boolean get_bIsDirectory_void(long pNativeObject);
	public boolean get_bIsDirectory()
	{
		boolean jniValue = get_bIsDirectory_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bIsDirectory_ev_bool (long pNativeObject, boolean value);
	public void set_bIsDirectory(boolean bIsDirectory)
	{
		boolean bIsDirectoryParamValue = bIsDirectory;
		
		set_bIsDirectory_ev_bool(this.nativeObject.pointer, bIsDirectoryParamValue);
	}
	
	native private boolean get_bIsHidden_void(long pNativeObject);
	public boolean get_bIsHidden()
	{
		boolean jniValue = get_bIsHidden_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bIsHidden_ev_bool (long pNativeObject, boolean value);
	public void set_bIsHidden(boolean bIsHidden)
	{
		boolean bIsHiddenParamValue = bIsHidden;
		
		set_bIsHidden_ev_bool(this.nativeObject.pointer, bIsHiddenParamValue);
	}
	
	native private boolean get_bIsReadOnly_void(long pNativeObject);
	public boolean get_bIsReadOnly()
	{
		boolean jniValue = get_bIsReadOnly_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bIsReadOnly_ev_bool (long pNativeObject, boolean value);
	public void set_bIsReadOnly(boolean bIsReadOnly)
	{
		boolean bIsReadOnlyParamValue = bIsReadOnly;
		
		set_bIsReadOnly_ev_bool(this.nativeObject.pointer, bIsReadOnlyParamValue);
	}
	
	native private String get_strCreateTime_void(long pNativeObject);
	public String get_strCreateTime()
	{
		String jniValue = get_strCreateTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strCreateTime_ev_string (long pNativeObject, String value);
	public void set_strCreateTime(String strCreateTime)
	{
		String strCreateTimeParamValue = strCreateTime;
		
		set_strCreateTime_ev_string(this.nativeObject.pointer, strCreateTimeParamValue);
	}
	
	native private String get_strLastAccessTime_void(long pNativeObject);
	public String get_strLastAccessTime()
	{
		String jniValue = get_strLastAccessTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strLastAccessTime_ev_string (long pNativeObject, String value);
	public void set_strLastAccessTime(String strLastAccessTime)
	{
		String strLastAccessTimeParamValue = strLastAccessTime;
		
		set_strLastAccessTime_ev_string(this.nativeObject.pointer, strLastAccessTimeParamValue);
	}
	
	native private String get_strLastWriteTime_void(long pNativeObject);
	public String get_strLastWriteTime()
	{
		String jniValue = get_strLastWriteTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strLastWriteTime_ev_string (long pNativeObject, String value);
	public void set_strLastWriteTime(String strLastWriteTime)
	{
		String strLastWriteTimeParamValue = strLastWriteTime;
		
		set_strLastWriteTime_ev_string(this.nativeObject.pointer, strLastWriteTimeParamValue);
	}
	
	public FileAttributes(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileAttributes(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FileAttributes fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileAttributes obj = null;
 		if(baseObj instanceof FileAttributes)
		{
			obj = (FileAttributes)baseObj;
		} else {
			obj = new FileAttributes(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FileAttributes");
			obj.increaseCast();
		}

		return obj;
	}
}
