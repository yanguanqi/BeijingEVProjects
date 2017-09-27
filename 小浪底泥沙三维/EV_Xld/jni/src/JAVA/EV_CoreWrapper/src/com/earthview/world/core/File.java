package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class File extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CFile", new FileClassFactory());
	}

	public File() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFile", null);
	}

	native private boolean open_ev_string_FILEMODE(long pNativeObject, String strFileName, int eMode);
	public boolean open(String strFileName, com.earthview.world.core.FILEMODE eMode)
	{
		String strFileNameParamValue = strFileName;
		int eModeParamValue = eMode.getValue();
		boolean returnValue = open_ev_string_FILEMODE(this.nativeObject.pointer, strFileNameParamValue, eModeParamValue);
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
	native private String readLine_ev_string(long pNativeObject, long strLine);
	public ULongPointer readLine(StringPointer strLine)
	{
		long strLineParamValue = strLine.nativeObject.pointer;
		String returnValue = readLine_ev_string(this.nativeObject.pointer, strLineParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String writeLine_ev_string(long pNativeObject, String strLine);
	public ULongPointer writeLine(String strLine)
	{
		String strLineParamValue = strLine;
		String returnValue = writeLine_ev_string(this.nativeObject.pointer, strLineParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String read_ev_byte_ev_uint64(long pNativeObject, long buf, long nNum);
	public ULongPointer read(UBytePointer buf, ULongPointer nNum)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long nNumParamValue = nNum.nativeObject.pointer;
		String returnValue = read_ev_byte_ev_uint64(this.nativeObject.pointer, bufParamValue, nNumParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String write_ev_byte_ev_uint64(long pNativeObject, long buf, long nNum);
	public ULongPointer write(UBytePointer buf, ULongPointer nNum)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long nNumParamValue = nNum.nativeObject.pointer;
		String returnValue = write_ev_byte_ev_uint64(this.nativeObject.pointer, bufParamValue, nNumParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private boolean eof_void(long pNativeObject);
	public boolean eof()
	{
		boolean returnValue = eof_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String seek_ev_uint64_FILEWAY(long pNativeObject, long nPosOff, int way);
	public ULongPointer seek(ULongPointer nPosOff, com.earthview.world.core.FILEWAY way)
	{
		long nPosOffParamValue = nPosOff.nativeObject.pointer;
		int wayParamValue = way.getValue();
		String returnValue = seek_ev_uint64_FILEWAY(this.nativeObject.pointer, nPosOffParamValue, wayParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private boolean save_void(long pNativeObject);
	public boolean save()
	{
		boolean returnValue = save_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static boolean rename_ev_string_ev_string(String strFileName, String strNwName);
	public static boolean rename(String strFileName, String strNwName)
	{
		String strFileNameParamValue = strFileName;
		String strNwNameParamValue = strNwName;
		boolean returnValue = rename_ev_string_ev_string(strFileNameParamValue, strNwNameParamValue);
		return returnValue;
	}
	native private static boolean copy_ev_string_ev_string_ev_bool(String strSrcFileName, String strDstFolder, boolean bOverWrite);
	public static boolean copy(String strSrcFileName, String strDstFolder, boolean bOverWrite)
	{
		String strSrcFileNameParamValue = strSrcFileName;
		String strDstFolderParamValue = strDstFolder;
		boolean bOverWriteParamValue = bOverWrite;
		boolean returnValue = copy_ev_string_ev_string_ev_bool(strSrcFileNameParamValue, strDstFolderParamValue, bOverWriteParamValue);
		return returnValue;
	}
	native private static boolean move_ev_string_ev_string_ev_bool(String strSrcFileName, String strDstFolder, boolean bOverWrite);
	public static boolean move(String strSrcFileName, String strDstFolder, boolean bOverWrite)
	{
		String strSrcFileNameParamValue = strSrcFileName;
		String strDstFolderParamValue = strDstFolder;
		boolean bOverWriteParamValue = bOverWrite;
		boolean returnValue = move_ev_string_ev_string_ev_bool(strSrcFileNameParamValue, strDstFolderParamValue, bOverWriteParamValue);
		return returnValue;
	}
	native private static boolean remove_ev_string(String strFileName);
	public static boolean remove(String strFileName)
	{
		String strFileNameParamValue = strFileName;
		boolean returnValue = remove_ev_string(strFileNameParamValue);
		return returnValue;
	}
	native private static boolean exists_ev_string(String strFileName);
	public static boolean exists(String strFileName)
	{
		String strFileNameParamValue = strFileName;
		boolean returnValue = exists_ev_string(strFileNameParamValue);
		return returnValue;
	}
	native private static String getSize_ev_string(String strFileName);
	public static ULongPointer getSize(String strFileName)
	{
		String strFileNameParamValue = strFileName;
		String returnValue = getSize_ev_string(strFileNameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private static boolean getAttributes_ev_string_FileAttributes(String strFileName, long attrs);
	public static boolean getAttributes(String strFileName, com.earthview.world.core.FileAttributes attrs)
	{
		String strFileNameParamValue = strFileName;
		long attrsParamValue = attrs.nativeObject.pointer;
		boolean returnValue = getAttributes_ev_string_FileAttributes(strFileNameParamValue, attrsParamValue);
		return returnValue;
	}
	native private static boolean isAbsoluteFile_EVString(String filepath);
	/**
	 * 判断给定的字符串是不是一个绝对文件路径
	 * @param  
	 */
	public static boolean isAbsoluteFile(String filepath)
	{
		String filepathParamValue = filepath;
		boolean returnValue = isAbsoluteFile_EVString(filepathParamValue);
		return returnValue;
	}
	public File(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public File(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static File fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		File obj = null;
 		if(baseObj instanceof File)
		{
			obj = (File)baseObj;
		} else {
			obj = new File(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFile");
			obj.increaseCast();
		}

		return obj;
	}
}
