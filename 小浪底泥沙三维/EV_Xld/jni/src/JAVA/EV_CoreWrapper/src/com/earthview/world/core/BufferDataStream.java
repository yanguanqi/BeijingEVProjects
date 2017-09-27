package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BufferDataStream extends com.earthview.world.core.DataStream {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CBufferDataStream", new BufferDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBufferDataStreamProxy", new BufferDataStreamClassFactory());
	}

	public BufferDataStream(com.earthview.world.core.DataStream stream) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		Create("JCBufferDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BufferDataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public BufferDataStream(BytePointer stream, long size) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer streamPtr = new BasePointer(stream);
		list.add("stream", streamPtr.get());
		BasePointer sizePtr = new BasePointer(size);
		list.add("size", sizePtr.get());
		Create("JCBufferDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BufferDataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public BufferDataStream() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBufferDataStreamProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BufferDataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public BufferDataStream(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCBufferDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BufferDataStream".equals(this.getClass().getName()))
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

	native private long readLine_ev_char_ev_size_t_EVString(long pNativeObject, long buf, long maxCount, String delim);
	public long readLine(BytePointer buf, long maxCount, String delim)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long maxCountParamValue = maxCount;
		String delimParamValue = delim;
		long returnValue = readLine_ev_char_ev_size_t_EVString(this.nativeObject.pointer, bufParamValue, maxCountParamValue, delimParamValue);
		return returnValue;
	}
	native private long readLine_ev_char_ev_size_t_EVString_NoVirtual(long pNativeObject, long buf, long maxCount, String delim);
	protected long readLine_NoVirtual(BytePointer buf, long maxCount, String delim)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long maxCountParamValue = maxCount;
		String delimParamValue = delim;
		long returnValue = readLine_ev_char_ev_size_t_EVString_NoVirtual(this.nativeObject.pointer, bufParamValue, maxCountParamValue, delimParamValue);
		return returnValue;
	}

	native private long readLine_ev_char_ev_size_t(long pNativeObject, long buf, long maxCount);
	public long readLine(BytePointer buf, long maxCount)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long maxCountParamValue = maxCount;
		long returnValue = readLine_ev_char_ev_size_t(this.nativeObject.pointer, bufParamValue, maxCountParamValue);
		return returnValue;
	}
	native private long readLine_ev_char_ev_size_t_NoVirtual(long pNativeObject, long buf, long maxCount);
	protected long readLine_NoVirtual(BytePointer buf, long maxCount)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		long maxCountParamValue = maxCount;
		long returnValue = readLine_ev_char_ev_size_t_NoVirtual(this.nativeObject.pointer, bufParamValue, maxCountParamValue);
		return returnValue;
	}

	native private String getLine_ev_bool(long pNativeObject, boolean trimAfter);
	public String getLine(boolean trimAfter)
	{
		boolean trimAfterParamValue = trimAfter;
		String returnValue = getLine_ev_bool(this.nativeObject.pointer, trimAfterParamValue);
		return returnValue;
	}
	native private String getLine_ev_bool_NoVirtual(long pNativeObject, boolean trimAfter);
	protected String getLine_NoVirtual(boolean trimAfter)
	{
		boolean trimAfterParamValue = trimAfter;
		String returnValue = getLine_ev_bool_NoVirtual(this.nativeObject.pointer, trimAfterParamValue);
		return returnValue;
	}

	native private String getLine_void(long pNativeObject);
	public String getLine()
	{
		String returnValue = getLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getLine_void_NoVirtual(long pNativeObject);
	protected String getLine_NoVirtual()
	{
		String returnValue = getLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getAsString_void(long pNativeObject);
	public String getAsString()
	{
		String returnValue = getAsString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAsString_void_NoVirtual(long pNativeObject);
	protected String getAsString_NoVirtual()
	{
		String returnValue = getAsString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long skipLine_EVString(long pNativeObject, String delim);
	public long skipLine(String delim)
	{
		String delimParamValue = delim;
		long returnValue = skipLine_EVString(this.nativeObject.pointer, delimParamValue);
		return returnValue;
	}
	native private long skipLine_EVString_NoVirtual(long pNativeObject, String delim);
	protected long skipLine_NoVirtual(String delim)
	{
		String delimParamValue = delim;
		long returnValue = skipLine_EVString_NoVirtual(this.nativeObject.pointer, delimParamValue);
		return returnValue;
	}

	native private long skipLine_void(long pNativeObject);
	public long skipLine()
	{
		long returnValue = skipLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long skipLine_void_NoVirtual(long pNativeObject);
	protected long skipLine_NoVirtual()
	{
		long returnValue = skipLine_void_NoVirtual(this.nativeObject.pointer);
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

	public BufferDataStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BufferDataStream(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static BufferDataStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BufferDataStream obj = null;
 		if(baseObj instanceof BufferDataStream)
		{
			obj = (BufferDataStream)baseObj;
		} else {
			obj = new BufferDataStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBufferDataStream");
			obj.increaseCast();
		}

		return obj;
	}
}
