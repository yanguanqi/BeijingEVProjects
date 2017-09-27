package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Directory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDirectory", new DirectoryClassFactory());
	}

	public Directory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDirectory", null);
	}

	native private static boolean create_ev_string(String strDir);
	public static boolean create(String strDir)
	{
		String strDirParamValue = strDir;
		boolean returnValue = create_ev_string(strDirParamValue);
		return returnValue;
	}
	native private static boolean remove_ev_string(String strDir);
	public static boolean remove(String strDir)
	{
		String strDirParamValue = strDir;
		boolean returnValue = remove_ev_string(strDirParamValue);
		return returnValue;
	}
	native private static boolean exists_ev_string(String strDir);
	public static boolean exists(String strDir)
	{
		String strDirParamValue = strDir;
		boolean returnValue = exists_ev_string(strDirParamValue);
		return returnValue;
	}
	native private static boolean copy_ev_string_ev_string_ev_bool(String strSrcDir, String strDstDir, boolean bOverWrite);
	public static boolean copy(String strSrcDir, String strDstDir, boolean bOverWrite)
	{
		String strSrcDirParamValue = strSrcDir;
		String strDstDirParamValue = strDstDir;
		boolean bOverWriteParamValue = bOverWrite;
		boolean returnValue = copy_ev_string_ev_string_ev_bool(strSrcDirParamValue, strDstDirParamValue, bOverWriteParamValue);
		return returnValue;
	}
	native private static boolean move_ev_string_ev_string_ev_bool(String strSrcDir, String strDstDir, boolean bOverWrite);
	public static boolean move(String strSrcDir, String strDstDir, boolean bOverWrite)
	{
		String strSrcDirParamValue = strSrcDir;
		String strDstDirParamValue = strDstDir;
		boolean bOverWriteParamValue = bOverWrite;
		boolean returnValue = move_ev_string_ev_string_ev_bool(strSrcDirParamValue, strDstDirParamValue, bOverWriteParamValue);
		return returnValue;
	}
	native private static boolean getFiles_ev_string_CStringArray_ev_bool(String strDir, long files, boolean bSubDir);
	public static boolean getFiles(String strDir, com.earthview.world.core.StringArray files, boolean bSubDir)
	{
		String strDirParamValue = strDir;
		long filesParamValue = files.nativeObject.pointer;
		boolean bSubDirParamValue = bSubDir;
		boolean returnValue = getFiles_ev_string_CStringArray_ev_bool(strDirParamValue, filesParamValue, bSubDirParamValue);
		return returnValue;
	}
	native private static boolean getFiles_ev_string_CStringArray_ev_bool_ev_string(String strDir, long files, boolean bSubDir, String strWildcard);
	public static boolean getFiles(String strDir, com.earthview.world.core.StringArray files, boolean bSubDir, String strWildcard)
	{
		String strDirParamValue = strDir;
		long filesParamValue = files.nativeObject.pointer;
		boolean bSubDirParamValue = bSubDir;
		String strWildcardParamValue = strWildcard;
		boolean returnValue = getFiles_ev_string_CStringArray_ev_bool_ev_string(strDirParamValue, filesParamValue, bSubDirParamValue, strWildcardParamValue);
		return returnValue;
	}
	native private static boolean getDirectories_ev_string_CStringArray_ev_bool(String strDir, long dirs, boolean bSubDir);
	public static boolean getDirectories(String strDir, com.earthview.world.core.StringArray dirs, boolean bSubDir)
	{
		String strDirParamValue = strDir;
		long dirsParamValue = dirs.nativeObject.pointer;
		boolean bSubDirParamValue = bSubDir;
		boolean returnValue = getDirectories_ev_string_CStringArray_ev_bool(strDirParamValue, dirsParamValue, bSubDirParamValue);
		return returnValue;
	}
	native private static boolean getAttributes_ev_string_FileAttributes(String strDir, long attrs);
	public static boolean getAttributes(String strDir, com.earthview.world.core.FileAttributes attrs)
	{
		String strDirParamValue = strDir;
		long attrsParamValue = attrs.nativeObject.pointer;
		boolean returnValue = getAttributes_ev_string_FileAttributes(strDirParamValue, attrsParamValue);
		return returnValue;
	}
	native private static boolean getCurrentDirectory_ev_string(long dir);
	public static boolean getCurrentDirectory(StringPointer dir)
	{
		long dirParamValue = dir.nativeObject.pointer;
		boolean returnValue = getCurrentDirectory_ev_string(dirParamValue);
		return returnValue;
	}
	native private static boolean setCurrentDirectory_ev_string(String dir);
	public static boolean setCurrentDirectory(String dir)
	{
		String dirParamValue = dir;
		boolean returnValue = setCurrentDirectory_ev_string(dirParamValue);
		return returnValue;
	}
	native private static boolean getTempDirectory_ev_string(long dir);
	public static boolean getTempDirectory(StringPointer dir)
	{
		long dirParamValue = dir.nativeObject.pointer;
		boolean returnValue = getTempDirectory_ev_string(dirParamValue);
		return returnValue;
	}
	native private static boolean getSystemDirectory_ev_string(long dir);
	public static boolean getSystemDirectory(StringPointer dir)
	{
		long dirParamValue = dir.nativeObject.pointer;
		boolean returnValue = getSystemDirectory_ev_string(dirParamValue);
		return returnValue;
	}
	native private static boolean getModuleName_ev_string(long module);
	public static boolean getModuleName(StringPointer module)
	{
		long moduleParamValue = module.nativeObject.pointer;
		boolean returnValue = getModuleName_ev_string(moduleParamValue);
		return returnValue;
	}
	native private static String formatPath_EVString(String path);
	/**
	 * 格式化路径
	 * @param  
	 */
	public static String formatPath(String path)
	{
		String pathParamValue = path;
		String returnValue = formatPath_EVString(pathParamValue);
		return returnValue;
	}
	native private static String formatPath_EVString_EVString(String path, String file);
	public static String formatPath(String path, String file)
	{
		String pathParamValue = path;
		String fileParamValue = file;
		String returnValue = formatPath_EVString_EVString(pathParamValue, fileParamValue);
		return returnValue;
	}
	public Directory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Directory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Directory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Directory obj = null;
 		if(baseObj instanceof Directory)
		{
			obj = (Directory)baseObj;
		} else {
			obj = new Directory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDirectory");
			obj.increaseCast();
		}

		return obj;
	}
}
