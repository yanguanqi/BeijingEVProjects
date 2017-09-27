package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileHandleDataStream extends com.earthview.world.core.DataStream {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileHandleDataStream", new FileHandleDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileHandleDataStreamProxy", new FileHandleDataStreamClassFactory());
	}

	//// Create stream from a binary file(exist or not)
	public FileHandleDataStream(String strFullPath, int accessMode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strFullPathPtr = new BasePointer(strFullPath);
		list.add("strFullPath", strFullPathPtr.get());
		BasePointer accessModePtr = new BasePointer(accessMode);
		list.add("accessMode", accessModePtr.get());
		Create("JCFileHandleDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.FileHandleDataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long read_void_ev_size_t(long pNativeObject, long buf, long count);
	public long read(VoidPointer buf, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long countParamValue = count;
		long returnValue = read_void_ev_size_t(this.nativeObject.pointer, bufParamValue, countParamValue);
		return returnValue;
	}
	native private long read_void_ev_size_t_NoVirtual(long pNativeObject, long buf, long count);
	protected long read_NoVirtual(VoidPointer buf, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long countParamValue = count;
		long returnValue = read_void_ev_size_t_NoVirtual(this.nativeObject.pointer, bufParamValue, countParamValue);
		return returnValue;
	}

	native private long write_void_ev_size_t(long pNativeObject, long buf, long count);
	public long write(VoidPointer buf, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long countParamValue = count;
		long returnValue = write_void_ev_size_t(this.nativeObject.pointer, bufParamValue, countParamValue);
		return returnValue;
	}
	native private long write_void_ev_size_t_NoVirtual(long pNativeObject, long buf, long count);
	protected long write_NoVirtual(VoidPointer buf, long count)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long countParamValue = count;
		long returnValue = write_void_ev_size_t_NoVirtual(this.nativeObject.pointer, bufParamValue, countParamValue);
		return returnValue;
	}

	native private void skip_ev_int32(long pNativeObject, int count);
	public void skip(int count)
	{
		int countParamValue = count;
		skip_ev_int32(this.nativeObject.pointer, countParamValue);
	}
	native private void skip_ev_int32_NoVirtual(long pNativeObject, int count);
	protected void skip_NoVirtual(int count)
	{
		int countParamValue = count;
		skip_ev_int32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	native private void seek_ev_size_t(long pNativeObject, long pos);
	public void seek(long pos)
	{
		long posParamValue = pos;
		seek_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void seek_ev_size_t_NoVirtual(long pNativeObject, long pos);
	protected void seek_NoVirtual(long pos)
	{
		long posParamValue = pos;
		seek_ev_size_t_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	native private long tell_void(long pNativeObject);
	public long tell()
	{
		long returnValue = tell_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long tell_void_NoVirtual(long pNativeObject);
	protected long tell_NoVirtual()
	{
		long returnValue = tell_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean eof_void(long pNativeObject);
	public boolean eof()
	{
		boolean returnValue = eof_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean eof_void_NoVirtual(long pNativeObject);
	protected boolean eof_NoVirtual()
	{
		boolean returnValue = eof_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void close_void(long pNativeObject);
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void close_void_NoVirtual(long pNativeObject);
	protected void close_NoVirtual()
	{
		close_void_NoVirtual(this.nativeObject.pointer);
	}

	public FileHandleDataStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileHandleDataStream(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean isReadable()
	{
		return super.isReadable_NoVirtual();
	}
	public boolean isWriteable()
	{
		return super.isWriteable_NoVirtual();
	}
	public long readLine(BytePointer buf, long maxCount, String delim)
	{
		return super.readLine_NoVirtual(buf, maxCount, delim);
	}
	public long readLine(BytePointer buf, long maxCount)
	{
		return super.readLine_NoVirtual(buf, maxCount);
	}
	public String getLine(boolean trimAfter)
	{
		return super.getLine_NoVirtual(trimAfter);
	}
	public String getLine()
	{
		return super.getLine_NoVirtual();
	}
	public String getAsString()
	{
		return super.getAsString_NoVirtual();
	}
	public long skipLine(String delim)
	{
		return super.skipLine_NoVirtual(delim);
	}
	public long skipLine()
	{
		return super.skipLine_NoVirtual();
	}
	
	native protected void register_isReadable_void(long pNativeObject, String method);
	native protected void register_isWriteable_void(long pNativeObject, String method);
	native protected void register_read_void_ev_size_t(long pNativeObject, String method);
	native protected void register_write_void_ev_size_t(long pNativeObject, String method);
	native protected void register_readLine_ev_char_ev_size_t_EVString(long pNativeObject, String method);
	native protected void register_readLine_ev_char_ev_size_t(long pNativeObject, String method);
	native protected void register_getLine_ev_bool(long pNativeObject, String method);
	native protected void register_getLine_void(long pNativeObject, String method);
	native protected void register_getAsString_void(long pNativeObject, String method);
	native protected void register_skipLine_EVString(long pNativeObject, String method);
	native protected void register_skipLine_void(long pNativeObject, String method);
	native protected void register_skip_ev_int32(long pNativeObject, String method);
	native protected void register_seek_ev_size_t(long pNativeObject, String method);
	native protected void register_tell_void(long pNativeObject, String method);
	native protected void register_eof_void(long pNativeObject, String method);
	native protected void register_close_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isReadable_void(this.nativeObject.pointer, "isReadable_void_callback");
			this.register_isWriteable_void(this.nativeObject.pointer, "isWriteable_void_callback");
			this.register_read_void_ev_size_t(this.nativeObject.pointer, "read_void_ev_size_t_callback");
			this.register_write_void_ev_size_t(this.nativeObject.pointer, "write_void_ev_size_t_callback");
			this.register_readLine_ev_char_ev_size_t_EVString(this.nativeObject.pointer, "readLine_ev_char_ev_size_t_EVString_callback");
			this.register_readLine_ev_char_ev_size_t(this.nativeObject.pointer, "readLine_ev_char_ev_size_t_callback");
			this.register_getLine_ev_bool(this.nativeObject.pointer, "getLine_ev_bool_callback");
			this.register_getLine_void(this.nativeObject.pointer, "getLine_void_callback");
			this.register_getAsString_void(this.nativeObject.pointer, "getAsString_void_callback");
			this.register_skipLine_EVString(this.nativeObject.pointer, "skipLine_EVString_callback");
			this.register_skipLine_void(this.nativeObject.pointer, "skipLine_void_callback");
			this.register_skip_ev_int32(this.nativeObject.pointer, "skip_ev_int32_callback");
			this.register_seek_ev_size_t(this.nativeObject.pointer, "seek_ev_size_t_callback");
			this.register_tell_void(this.nativeObject.pointer, "tell_void_callback");
			this.register_eof_void(this.nativeObject.pointer, "eof_void_callback");
			this.register_close_void(this.nativeObject.pointer, "close_void_callback");
		}
	}
	
	public static FileHandleDataStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileHandleDataStream obj = null;
 		if(baseObj instanceof FileHandleDataStream)
		{
			obj = (FileHandleDataStream)baseObj;
		} else {
			obj = new FileHandleDataStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFileHandleDataStream");
			obj.increaseCast();
		}

		return obj;
	}
}
