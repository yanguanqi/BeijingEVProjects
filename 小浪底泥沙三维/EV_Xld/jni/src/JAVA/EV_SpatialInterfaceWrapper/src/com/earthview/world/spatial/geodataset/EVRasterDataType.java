package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 常用的数据的存储精度枚举操作权限
 */
public enum EVRasterDataType implements INativeEnum<EVRasterDataType> {
	RDT_Unknown(EVRasterDataTypeHelper.ENUM_VALUES[0]),
	RDT_Byte(EVRasterDataTypeHelper.ENUM_VALUES[1]),
	RDT_UInt16(EVRasterDataTypeHelper.ENUM_VALUES[2]),
	RDT_Int16(EVRasterDataTypeHelper.ENUM_VALUES[3]),
	RDT_UInt32(EVRasterDataTypeHelper.ENUM_VALUES[4]),
	RDT_Int32(EVRasterDataTypeHelper.ENUM_VALUES[5]),
	RDT_Float32(EVRasterDataTypeHelper.ENUM_VALUES[6]),
	RDT_Float64(EVRasterDataTypeHelper.ENUM_VALUES[7]),
	RDT_CInt16(EVRasterDataTypeHelper.ENUM_VALUES[8]),
	RDT_CInt32(EVRasterDataTypeHelper.ENUM_VALUES[9]),
	RDT_CFloat32(EVRasterDataTypeHelper.ENUM_VALUES[10]),
	RDT_CFloat64(EVRasterDataTypeHelper.ENUM_VALUES[11]),
	RDT_TypeCount(EVRasterDataTypeHelper.ENUM_VALUES[12]);
	private int value;
	EVRasterDataType(int i) {
		this.value = i;
	}
	public EVRasterDataType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVRasterDataType toEnum(int retval) {
		if(retval == RDT_Unknown.value){
			return RDT_Unknown;
		}
		else if(retval == RDT_Byte.value){
			return RDT_Byte;
		}
		else if(retval == RDT_UInt16.value){
			return RDT_UInt16;
		}
		else if(retval == RDT_Int16.value){
			return RDT_Int16;
		}
		else if(retval == RDT_UInt32.value){
			return RDT_UInt32;
		}
		else if(retval == RDT_Int32.value){
			return RDT_Int32;
		}
		else if(retval == RDT_Float32.value){
			return RDT_Float32;
		}
		else if(retval == RDT_Float64.value){
			return RDT_Float64;
		}
		else if(retval == RDT_CInt16.value){
			return RDT_CInt16;
		}
		else if(retval == RDT_CInt32.value){
			return RDT_CInt32;
		}
		else if(retval == RDT_CFloat32.value){
			return RDT_CFloat32;
		}
		else if(retval == RDT_CFloat64.value){
			return RDT_CFloat64;
		}
		else if(retval == RDT_TypeCount.value){
			return RDT_TypeCount;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVRasterDataTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
