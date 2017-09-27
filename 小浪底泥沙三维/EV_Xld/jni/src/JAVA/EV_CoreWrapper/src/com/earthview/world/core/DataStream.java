package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStream extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStream", new DataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDataStreamProxy", new DataStreamClassFactory());
	}

	public enum AccessMode implements INativeEnum<AccessMode> {
		READ(AccessModeHelper.ENUM_VALUES[0]),
		WRITE(AccessModeHelper.ENUM_VALUES[1]);
		private int value;
		AccessMode(int i) {
			this.value = i;
		}
		public AccessMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final AccessMode toEnum(int retval) {
			if(retval == READ.value){
				return READ;
			}
			else if(retval == WRITE.value){
				return WRITE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class AccessModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Constructor for creating unnamed streams
	public DataStream(int accessMode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer accessModePtr = new BasePointer(accessMode);
		list.add("accessMode", accessModePtr.get());
		Create("JCDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DataStream() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDataStreamProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	//// Constructor for creating named streams
	public DataStream(String name, int accessMode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer accessModePtr = new BasePointer(accessMode);
		list.add("accessMode", accessModePtr.get());
		Create("JCDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DataStream(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCDataStreamProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DataStream".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	//// Returns the name of the stream, if it has one.
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private int getAccessMode_void(long pNativeObject);
	//// Gets the access mode of the stream
	public int getAccessMode()
	{
		int returnValue = getAccessMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean isReadable_void_callback()
	{
		boolean returnValue = isReadable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isReadable_void(long pNativeObject);
	public boolean isReadable()
	{
		boolean returnValue = isReadable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isReadable_void_NoVirtual(long pNativeObject);
	protected boolean isReadable_NoVirtual()
	{
		boolean returnValue = isReadable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isWriteable_void_callback()
	{
		boolean returnValue = isWriteable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isWriteable_void(long pNativeObject);
	public boolean isWriteable()
	{
		boolean returnValue = isWriteable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isWriteable_void_NoVirtual(long pNativeObject);
	protected boolean isWriteable_NoVirtual()
	{
		boolean returnValue = isWriteable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long read_void_ev_size_t_callback(long buf, long count)
	{
		VoidPointer bufParamValue = (buf == 0L ? null : new VoidPointer(new InstancePointer(buf)));
		long countParamValue = count;
		long returnValue = read(bufParamValue, countParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  long write_void_ev_size_t_callback(long buf, long count)
	{
		VoidPointer bufParamValue = (buf == 0L ? null : new VoidPointer(new InstancePointer(buf)));
		long countParamValue = count;
		long returnValue = write(bufParamValue, countParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  long readLine_ev_char_ev_size_t_EVString_callback(long buf, long maxCount, String delim)
	{
		BytePointer bufParamValue = (buf == 0L ? null : new BytePointer(new InstancePointer(buf)));
		long maxCountParamValue = maxCount;
		String delimParamValue = delim;
		long returnValue = readLine(bufParamValue, maxCountParamValue, delimParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  long readLine_ev_char_ev_size_t_callback(long buf, long maxCount)
	{
		BytePointer bufParamValue = (buf == 0L ? null : new BytePointer(new InstancePointer(buf)));
		long maxCountParamValue = maxCount;
		long returnValue = readLine(bufParamValue, maxCountParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  String getLine_ev_bool_callback(boolean trimAfter)
	{
		boolean trimAfterParamValue = trimAfter;
		String returnValue = getLine(trimAfterParamValue);
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  String getLine_void_callback()
	{
		String returnValue = getLine();
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  String getAsString_void_callback()
	{
		String returnValue = getAsString();
		String __returnValue = returnValue;
		return __returnValue;
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

	protected  long skipLine_EVString_callback(String delim)
	{
		String delimParamValue = delim;
		long returnValue = skipLine(delimParamValue);
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  long skipLine_void_callback()
	{
		long returnValue = skipLine();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  void skip_ev_int32_callback(int count)
	{
		int countParamValue = count;
		skip(countParamValue);
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

	protected  void seek_ev_size_t_callback(long pos)
	{
		long posParamValue = pos;
		seek(posParamValue);
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

	protected  long tell_void_callback()
	{
		long returnValue = tell();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  boolean eof_void_callback()
	{
		boolean returnValue = eof();
		boolean __returnValue = returnValue;
		return __returnValue;
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

	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void close_void_callback()
	{
		close();
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

	public DataStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataStream(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static DataStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataStream obj = null;
 		if(baseObj instanceof DataStream)
		{
			obj = (DataStream)baseObj;
		} else {
			obj = new DataStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataStream");
			obj.increaseCast();
		}

		return obj;
	}
}
