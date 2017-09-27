package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class SqlBlobStream extends com.earthview.world.core.DataStream {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CSqlBlobStream", new SqlBlobStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCSqlBlobStreamProxy", new SqlBlobStreamClassFactory());
	}

	native private long read_void_ev_size_t(long pNativeObject, long buf, long count);
	/**
	 * 读取指定长度数据到指定缓存中，读取完成，游标下移Count个位置。
	 * @param buf 缓存地址
	 * @param count 读取数据大小
	 * @return 实际读取数据长度
	 */
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

	native private void skip_ev_int32(long pNativeObject, int count);
	/**
	 * 跳过指定长度的数据。
	 * @param count 跳过数据长度
	 */
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
	/**
	 * 游标位置移动到指定位置上
	 * @param pos 指定位置
	 */
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
	/**
	 * 获取游标位置
	 * @param  
	 * @return 游标位置
	 */
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
	/**
	 * 判断读取是否结束
	 * @param  
	 * @return 读取结束，返回true;否则，返回false
	 */
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
	/**
	 * 关闭流
	 * @param  
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void close_void_NoVirtual(long pNativeObject);
	protected void close_NoVirtual()
	{
		close_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long toDataStream_void_callback()
	{
		com.earthview.world.core.MemoryDataStreamPtr returnValue = toDataStream();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toDataStream_void(long pNativeObject);
	/**
	 * 转换为内存流
	 * @param  
	 * @return 内存流对象SqlServer数据库Blob流对象，只有当pos！=0的时候，返回空。
	 */
	public com.earthview.world.core.MemoryDataStreamPtr toDataStream()
	{
		long returnValue = toDataStream_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long toDataStream_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.MemoryDataStreamPtr toDataStream_NoVirtual()
	{
		long returnValue = toDataStream_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}

	native private long write_void_ev_size_t(long pNativeObject, long buf, long count);
	/**
	 * 从指定缓存中写入指定长度的数据。不支持此方法，方法无效。
	 * @param buf 缓存地址
	 * @param count 读取数据大小
	 * @return 实际读取数据长度
	 */
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

	protected  String DriverName_void_callback()
	{
		String returnValue = DriverName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String DriverName_void(long pNativeObject);
	/**
	 * 获取驱动名称
	 * @param  
	 * @return 驱动名称
	 */
	public String DriverName()
	{
		String returnValue = DriverName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String DriverName_void_NoVirtual(long pNativeObject);
	protected String DriverName_NoVirtual()
	{
		String returnValue = DriverName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long data_void_callback()
	{
		BytePointer returnValue = data();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long data_void(long pNativeObject);
	/**
	 * 获取原始数据
	 * @param  
	 * @return 数据首地址
	 */
	public BytePointer data()
	{
		long returnValue = data_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long data_void_NoVirtual(long pNativeObject);
	protected BytePointer data_NoVirtual()
	{
		long returnValue = data_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	public SqlBlobStream(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SqlBlobStream(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_toDataStream_void(long pNativeObject, String method);
	native protected void register_DriverName_void(long pNativeObject, String method);
	native protected void register_data_void(long pNativeObject, String method);
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
			this.register_toDataStream_void(this.nativeObject.pointer, "toDataStream_void_callback");
			this.register_DriverName_void(this.nativeObject.pointer, "DriverName_void_callback");
			this.register_data_void(this.nativeObject.pointer, "data_void_callback");
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
	
	public static SqlBlobStream fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SqlBlobStream obj = null;
 		if(baseObj instanceof SqlBlobStream)
		{
			obj = (SqlBlobStream)baseObj;
		} else {
			obj = new SqlBlobStream(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSqlBlobStream");
			obj.increaseCast();
		}

		return obj;
	}
}
