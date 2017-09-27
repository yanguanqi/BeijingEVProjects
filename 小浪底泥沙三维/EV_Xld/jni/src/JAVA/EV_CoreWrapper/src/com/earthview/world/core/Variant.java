package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Variant extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CVariant", new VariantClassFactory());
	}

	public enum EVDataType implements INativeEnum<EVDataType> {
		DT_Unknown(EVDataTypeHelper.ENUM_VALUES[0]),
		DT_Bool(EVDataTypeHelper.ENUM_VALUES[1]),
		DT_UInt32(EVDataTypeHelper.ENUM_VALUES[2]),
		DT_Int32(EVDataTypeHelper.ENUM_VALUES[3]),
		DT_UInt64(EVDataTypeHelper.ENUM_VALUES[4]),
		DT_Int64(EVDataTypeHelper.ENUM_VALUES[5]),
		DT_Real32(EVDataTypeHelper.ENUM_VALUES[6]),
		DT_Real64(EVDataTypeHelper.ENUM_VALUES[7]),
		DT_String(EVDataTypeHelper.ENUM_VALUES[8]),
		DT_WString(EVDataTypeHelper.ENUM_VALUES[9]),
		DT_Time(EVDataTypeHelper.ENUM_VALUES[10]),
		DT_MemoryDataStream(EVDataTypeHelper.ENUM_VALUES[11]),
		DT_UserType(EVDataTypeHelper.ENUM_VALUES[12]);
		private int value;
		EVDataType(int i) {
			this.value = i;
		}
		public EVDataType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVDataType toEnum(int retval) {
			if(retval == DT_Unknown.value){
				return DT_Unknown;
			}
			else if(retval == DT_Bool.value){
				return DT_Bool;
			}
			else if(retval == DT_UInt32.value){
				return DT_UInt32;
			}
			else if(retval == DT_Int32.value){
				return DT_Int32;
			}
			else if(retval == DT_UInt64.value){
				return DT_UInt64;
			}
			else if(retval == DT_Int64.value){
				return DT_Int64;
			}
			else if(retval == DT_Real32.value){
				return DT_Real32;
			}
			else if(retval == DT_Real64.value){
				return DT_Real64;
			}
			else if(retval == DT_String.value){
				return DT_String;
			}
			else if(retval == DT_WString.value){
				return DT_WString;
			}
			else if(retval == DT_Time.value){
				return DT_Time;
			}
			else if(retval == DT_MemoryDataStream.value){
				return DT_MemoryDataStream;
			}
			else if(retval == DT_UserType.value){
				return DT_UserType;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVDataTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public Variant() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVariant", null);
	}

	public Variant(com.earthview.world.core.Variant other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("CVariant", list);
	}

	public Variant(boolean boolval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer boolvalPtr = new BasePointer(boolval);
		list.add("boolval", boolvalPtr.get());
		Create("CVariant", list);
	}

	public Variant(int int32val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer int32valPtr = new BasePointer(int32val);
		list.add("int32val", int32valPtr.get());
		Create("CVariant", list);
	}

	public Variant(long int64val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer int64valPtr = new BasePointer(int64val);
		list.add("int64val", int64valPtr.get());
		Create("CVariant", list);
	}

	public Variant(ULongPointer uint64val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer uint64valPtr = new BasePointer(uint64val);
		list.add("uint64val", uint64valPtr.get());
		Create("CVariant", list);
	}

	public Variant(float real32val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer real32valPtr = new BasePointer(real32val);
		list.add("real32val", real32valPtr.get());
		Create("CVariant", list);
	}

	public Variant(double real64val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer real64valPtr = new BasePointer(real64val);
		list.add("real64val", real64valPtr.get());
		Create("CVariant", list);
	}

	public Variant(com.earthview.world.core.CoreTime ctval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ctvalPtr = new BasePointer(ctval);
		list.add("ctval", ctvalPtr.get());
		Create("CVariant", list);
	}

	public Variant(BytePointer charval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer charvalPtr = new BasePointer(charval);
		list.add("charval", charvalPtr.get());
		Create("CVariant", list);
	}

	public Variant(VoidPointer userdata) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer userdataPtr = new BasePointer(userdata);
		list.add("userdata", userdataPtr.get());
		Create("CVariant", list);
	}

	/////存用户自定义类型
	public Variant(String stringval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer stringvalPtr = new BasePointer(stringval);
		list.add("stringval", stringvalPtr.get());
		Create("CVariant", list);
	}

	public Variant(com.earthview.world.core.MemoryDataStreamPtr mdspval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer mdspvalPtr = new BasePointer(mdspval);
		list.add("mdspval", mdspvalPtr.get());
		Create("CVariant", list);
	}

	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean isNull_void(long pNativeObject);
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int type_void(long pNativeObject);
	public com.earthview.world.core.Variant.EVDataType type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return com.earthview.world.core.Variant.EVDataType.toEnum(returnValue);
	}
	native private long data_void(long pNativeObject);
	public VoidPointer data()
	{
		long returnValue = data_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long constData_void(long pNativeObject);
	public VoidPointer constData()
	{
		long returnValue = constData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean toBool_ev_bool(long pNativeObject, long ok);
	/////inline const ev_void* data() const {constData();}
	public boolean toBool(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		boolean returnValue = toBool_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private boolean toBool_void(long pNativeObject);
	public boolean toBool()
	{
		boolean returnValue = toBool_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int toInt32_ev_bool(long pNativeObject, long ok);
	public int toInt32(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		int returnValue = toInt32_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private int toInt32_void(long pNativeObject);
	public int toInt32()
	{
		int returnValue = toInt32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long toUInt32_ev_bool(long pNativeObject, long ok);
	public long toUInt32(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		long returnValue = toUInt32_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private long toUInt32_void(long pNativeObject);
	public long toUInt32()
	{
		long returnValue = toUInt32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long toInt64_ev_bool(long pNativeObject, long ok);
	public long toInt64(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		long returnValue = toInt64_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private long toInt64_void(long pNativeObject);
	public long toInt64()
	{
		long returnValue = toInt64_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toUInt64_ev_bool(long pNativeObject, long ok);
	public ULongPointer toUInt64(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		String returnValue = toUInt64_ev_bool(this.nativeObject.pointer, okParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String toUInt64_void(long pNativeObject);
	public ULongPointer toUInt64()
	{
		String returnValue = toUInt64_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private float toReal32_ev_bool(long pNativeObject, long ok);
	public float toReal32(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		float returnValue = toReal32_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private float toReal32_void(long pNativeObject);
	public float toReal32()
	{
		float returnValue = toReal32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double toReal64_ev_bool(long pNativeObject, long ok);
	public double toReal64(BooleanPointer ok)
	{
		long okParamValue = (ok == null ? 0L : ok.nativeObject.pointer);
		double returnValue = toReal64_ev_bool(this.nativeObject.pointer, okParamValue);
		return returnValue;
	}
	native private double toReal64_void(long pNativeObject);
	public double toReal64()
	{
		double returnValue = toReal64_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long toDateTime_void(long pNativeObject);
	public com.earthview.world.core.CoreTime toDateTime()
	{
		long returnValue = toDateTime_void(this.nativeObject.pointer);
		com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		}
		return __returnValue;
	}
	native private String ev_toString_void(long pNativeObject);
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toWString_void(long pNativeObject);
	public String toWString()
	{
		String returnValue = toWString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long toDataStream_void(long pNativeObject);
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
	native private void fromBool_ev_bool(long pNativeObject, boolean val);
	public void fromBool(boolean val)
	{
		boolean valParamValue = val;
		fromBool_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private void fromInt32_ev_int32(long pNativeObject, int val);
	public void fromInt32(int val)
	{
		int valParamValue = val;
		fromInt32_ev_int32(this.nativeObject.pointer, valParamValue);
	}
	native private void fromUInt32_ev_uint32(long pNativeObject, long val);
	public void fromUInt32(long val)
	{
		long valParamValue = val;
		fromUInt32_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void fromInt64_ev_int64(long pNativeObject, long val);
	public void fromInt64(long val)
	{
		long valParamValue = val;
		fromInt64_ev_int64(this.nativeObject.pointer, valParamValue);
	}
	native private void fromUInt64_ev_uint64(long pNativeObject, long val);
	public void fromUInt64(ULongPointer val)
	{
		long valParamValue = val.nativeObject.pointer;
		fromUInt64_ev_uint64(this.nativeObject.pointer, valParamValue);
	}
	native private void fromReal32_ev_real32(long pNativeObject, float val);
	public void fromReal32(float val)
	{
		float valParamValue = val;
		fromReal32_ev_real32(this.nativeObject.pointer, valParamValue);
	}
	native private void fromReal64_ev_real64(long pNativeObject, double val);
	public void fromReal64(double val)
	{
		double valParamValue = val;
		fromReal64_ev_real64(this.nativeObject.pointer, valParamValue);
	}
	native private void fromDateTime_CCoreTime(long pNativeObject, long val);
	public void fromDateTime(com.earthview.world.core.CoreTime val)
	{
		long valParamValue = val.nativeObject.pointer;
		fromDateTime_CCoreTime(this.nativeObject.pointer, valParamValue);
	}
	native private void fromString_ev_string(long pNativeObject, String val);
	public void fromString(String val)
	{
		String valParamValue = val;
		fromString_ev_string(this.nativeObject.pointer, valParamValue);
	}
	native private void fromWString_ev_wstring(long pNativeObject, String val);
	public void fromWString(String val)
	{
		String valParamValue = val;
		fromWString_ev_wstring(this.nativeObject.pointer, valParamValue);
	}
	native private void fromDataStream_MemoryDataStreamPtr(long pNativeObject, long val);
	public void fromDataStream(com.earthview.world.core.MemoryDataStreamPtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		fromDataStream_MemoryDataStreamPtr(this.nativeObject.pointer, valParamValue);
	}
	native private void fromCharString_ev_char(long pNativeObject, long val);
	public void fromCharString(BytePointer val)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		fromCharString_ev_char(this.nativeObject.pointer, valParamValue);
	}
	native private void fromWCharString_ev_wchar(long pNativeObject, long val);
	public void fromWCharString(CharPointer val)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		fromWCharString_ev_wchar(this.nativeObject.pointer, valParamValue);
	}
	native private long OperatorAssign_CVariant(long pNativeObject, long other);
	public com.earthview.world.core.Variant OperatorAssign(com.earthview.world.core.Variant other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = OperatorAssign_CVariant(this.nativeObject.pointer, otherParamValue);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate, "CVariant");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CVariant(long pNativeObject, long other);
	public boolean OperatorEquals(com.earthview.world.core.Variant other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVariant(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVariant(long pNativeObject, long other);
	public boolean OperatorNotEquals(com.earthview.world.core.Variant other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVariant(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	public Variant(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Variant(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Variant fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Variant obj = null;
 		if(baseObj instanceof Variant)
		{
			obj = (Variant)baseObj;
		} else {
			obj = new Variant(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVariant");
			obj.increaseCast();
		}

		return obj;
	}
}
