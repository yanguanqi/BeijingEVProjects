package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamReader extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStreamReader", new DataStreamReaderClassFactory());
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
	public DataStreamReader(com.earthview.world.core.DataStream dataStream) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dataStreamPtr = new BasePointer(dataStream);
		list.add("dataStream", dataStreamPtr.get());
		Create("CDataStreamReader", list);
	}

	public DataStreamReader(com.earthview.world.core.DataStream dataStream, com.earthview.world.core.DataStreamReader.DataStreamOrder dataStreamOrder) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dataStreamPtr = new BasePointer(dataStream);
		list.add("dataStream", dataStreamPtr.get());
		BasePointer dataStreamOrderPtr = new BasePointer(dataStreamOrder);
		list.add("dataStreamOrder", dataStreamOrderPtr.get());
		Create("CDataStreamReader", list);
	}

	native private int readBool_ev_bool(long pNativeObject, long value);
	public int readBool(BooleanPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readBool_ev_bool(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readChar_ev_char(long pNativeObject, long value);
	public int readChar(BytePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readChar_ev_char(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readUChar_ev_uchar(long pNativeObject, long value);
	public int readUChar(UBytePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readUChar_ev_uchar(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readWChar_ev_wchar(long pNativeObject, long value);
	public int readWChar(CharPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readWChar_ev_wchar(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readByte_ev_byte(long pNativeObject, long value);
	public int readByte(UBytePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readByte_ev_byte(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readInt8_ev_int8(long pNativeObject, long value);
	public int readInt8(BytePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readInt8_ev_int8(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readUInt8_ev_uint8(long pNativeObject, long value);
	public int readUInt8(UBytePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readUInt8_ev_uint8(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readInt16_ev_int16(long pNativeObject, long value);
	public int readInt16(ShortPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readInt16_ev_int16(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readUInt16_ev_uint16(long pNativeObject, long value);
	public int readUInt16(UShortPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readUInt16_ev_uint16(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readInt32_ev_int32(long pNativeObject, long value);
	public int readInt32(IntegerPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readInt32_ev_int32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readUInt32_ev_uint32(long pNativeObject, long value);
	public int readUInt32(UIntegerPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readUInt32_ev_uint32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readInt64_ev_int64(long pNativeObject, long value);
	public int readInt64(LongPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readInt64_ev_int64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readUInt64_ev_uint64(long pNativeObject, long value);
	public int readUInt64(ULongPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readUInt64_ev_uint64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readReal32_ev_real32(long pNativeObject, long value);
	public int readReal32(FloatPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readReal32_ev_real32(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readReal64_ev_real64(long pNativeObject, long value);
	public int readReal64(DoublePointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readReal64_ev_real64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readObjectAddr_void(long pNativeObject, long value);
	/**
	 * 
	 * @param  
	 */
	public int readObjectAddr(NativeObjectPointer<VoidPointer> value)
	{
		long valueParamValue = (value == null ? 0L : value.nativeObject.pointer);
		int returnValue = readObjectAddr_void(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readString_EVString(long pNativeObject, long value);
	/**
	 * /读取一个字符串对象，会自动在按字符串结束为0判断	/
	 * @param value 字符串对象
	 */
	public int readString(StringPointer value)
	{
		long valueParamValue = value.nativeObject.pointer;
		int returnValue = readString_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private int readString_EVString_ev_int32(long pNativeObject, long value, int length);
	/**
	 * /读取一个字符串对象，按字符串传入长度来读取/
	 * @param value 字符串对象
	 */
	public int readString(StringPointer value, int length)
	{
		long valueParamValue = value.nativeObject.pointer;
		int lengthParamValue = length;
		int returnValue = readString_EVString_ev_int32(this.nativeObject.pointer, valueParamValue, lengthParamValue);
		return returnValue;
	}
	native private int readRaw_CMemoryDataStream_ev_int32(long pNativeObject, long value, int length);
	///
	public int readRaw(com.earthview.world.core.MemoryDataStream value, int length)
	{
		long valueParamValue = value.nativeObject.pointer;
		int lengthParamValue = length;
		int returnValue = readRaw_CMemoryDataStream_ev_int32(this.nativeObject.pointer, valueParamValue, lengthParamValue);
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
	public DataStreamReader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataStreamReader(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataStreamReader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataStreamReader obj = null;
 		if(baseObj instanceof DataStreamReader)
		{
			obj = (DataStreamReader)baseObj;
		} else {
			obj = new DataStreamReader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDataStreamReader");
			obj.increaseCast();
		}

		return obj;
	}
}
