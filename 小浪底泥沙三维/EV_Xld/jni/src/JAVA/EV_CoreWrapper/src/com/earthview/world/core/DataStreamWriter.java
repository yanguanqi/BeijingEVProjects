package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamWriter extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStreamWriter", new DataStreamWriterClassFactory());
	}

	public enum DataStreamOrder implements INativeEnum<DataStreamOrder> {
		BIG_ENDIAN_ORDER(DataStreamOrderHelper.ENUM_VALUES[0]),
		LITTLE_ENDIAN_ORDER(DataStreamOrderHelper.ENUM_VALUES[1]);
		private int value;
		DataStreamOrder(int i) {
			this.value = i;
		}
		public DataStreamOrder getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final DataStreamOrder toEnum(int retval) {
			if(retval == BIG_ENDIAN_ORDER.value){
				return BIG_ENDIAN_ORDER;
			}
			else if(retval == LITTLE_ENDIAN_ORDER.value){
				return LITTLE_ENDIAN_ORDER;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class DataStreamOrderHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// little-endian order
	public DataStreamWriter(com.earthview.world.core.DataStream dataStream) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dataStreamPtr = new BasePointer(dataStream);
		list.add("dataStream", dataStreamPtr.get());
		Create("CDataStreamWriter", list);
	}

	public DataStreamWriter(com.earthview.world.core.DataStream dataStream, com.earthview.world.core.DataStreamWriter.DataStreamOrder dataStreamOrder) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dataStreamPtr = new BasePointer(dataStream);
		list.add("dataStream", dataStreamPtr.get());
		BasePointer dataStreamOrderPtr = new BasePointer(dataStreamOrder);
		list.add("dataStreamOrder", dataStreamOrderPtr.get());
		Create("CDataStreamWriter", list);
	}

	native private int writeBool_ev_bool(long pNativeObject, boolean value);
	public int writeBool(boolean value)
	{
		boolean valueParamValue = value;
		int returnValue = writeBool_ev_bool(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeChar_ev_char(long pNativeObject, byte value);
	public int writeChar(byte value)
	{
		byte valueParamValue = value;
		int returnValue = writeChar_ev_char(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeUChar_ev_uchar(long pNativeObject, short value);
	public int writeUChar(short value)
	{
		short valueParamValue = value;
		int returnValue = writeUChar_ev_uchar(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeWChar_ev_wchar(long pNativeObject, char value);
	public int writeWChar(char value)
	{
		char valueParamValue = value;
		int returnValue = writeWChar_ev_wchar(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeByte_ev_byte(long pNativeObject, short value);
	public int writeByte(short value)
	{
		short valueParamValue = value;
		int returnValue = writeByte_ev_byte(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeInt8_ev_int8(long pNativeObject, byte value);
	public int writeInt8(byte value)
	{
		byte valueParamValue = value;
		int returnValue = writeInt8_ev_int8(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeUInt8_ev_uint8(long pNativeObject, short value);
	public int writeUInt8(short value)
	{
		short valueParamValue = value;
		int returnValue = writeUInt8_ev_uint8(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeInt16_ev_int16(long pNativeObject, short value);
	public int writeInt16(short value)
	{
		short valueParamValue = value;
		int returnValue = writeInt16_ev_int16(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeUInt16_ev_uint16(long pNativeObject, int value);
	public int writeUInt16(int value)
	{
		int valueParamValue = value;
		int returnValue = writeUInt16_ev_uint16(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeInt32_ev_int32(long pNativeObject, int value);
	public int writeInt32(int value)
	{
		int valueParamValue = value;
		int returnValue = writeInt32_ev_int32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeUInt32_ev_uint32(long pNativeObject, long value);
	public int writeUInt32(long value)
	{
		long valueParamValue = value;
		int returnValue = writeUInt32_ev_uint32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeInt64_ev_int64(long pNativeObject, long value);
	public int writeInt64(long value)
	{
		long valueParamValue = value;
		int returnValue = writeInt64_ev_int64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeUInt64_ev_uint64(long pNativeObject, long value);
	public int writeUInt64(ULongPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = writeUInt64_ev_uint64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeReal32_ev_real32(long pNativeObject, float value);
	public int writeReal32(float value)
	{
		float valueParamValue = value;
		int returnValue = writeReal32_ev_real32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeReal64_ev_real64(long pNativeObject, double value);
	public int writeReal64(double value)
	{
		double valueParamValue = value;
		int returnValue = writeReal64_ev_real64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeObjectAddr_void(long pNativeObject, long value);
	/**
	 * 写入一个对象地址，调用此函数后，将导致持久化的二进制流不能在32位和64位系统下通用！
	 * @param value 对象地址
	 */
	public int writeObjectAddr(VoidPointer value)
	{
		long valueParamValue = (value == null ? 0L : value.nativeObject.pointer);
		int returnValue = writeObjectAddr_void(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeString_EVString(long pNativeObject, String value);
	/**
	 * /写入一个字符串对象，会自动在后面加0		/
	 * @param value 字符串对象
	 */
	public int writeString(String value)
	{
		String valueParamValue = value;
		int returnValue = writeString_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int writeString_EVString_ev_int32(long pNativeObject, String value, int length);
	/**
	 * /写入一个字符串对象，不会自动在后面加0		/
	 * @param value 字符串对象
	 */
	public int writeString(String value, int length)
	{
		String valueParamValue = value;
		int lengthParamValue = length;
		int returnValue = writeString_EVString_ev_int32(this.nativeObject.pointer, valueParamValue, lengthParamValue);
		return returnValue;
	}
	native private int writeRaw_CMemoryDataStream(long pNativeObject, long value);
	///
	public int writeRaw(com.earthview.world.core.MemoryDataStream value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = writeRaw_CMemoryDataStream(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean eof_void(long pNativeObject);
	public boolean eof()
	{
		boolean returnValue = eof_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long dataStream_void(long pNativeObject);
	public com.earthview.world.core.DataStream dataStream()
	{
		long returnValue = dataStream_void(this.nativeObject.pointer);
		com.earthview.world.core.DataStream __returnValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate, "CDataStream");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStream)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataStream");
		}
		return __returnValue;
	}
	public DataStreamWriter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataStreamWriter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataStreamWriter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataStreamWriter obj = null;
 		if(baseObj instanceof DataStreamWriter)
		{
			obj = (DataStreamWriter)baseObj;
		} else {
			obj = new DataStreamWriter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataStreamWriter");
			obj.increaseCast();
		}

		return obj;
	}
}
