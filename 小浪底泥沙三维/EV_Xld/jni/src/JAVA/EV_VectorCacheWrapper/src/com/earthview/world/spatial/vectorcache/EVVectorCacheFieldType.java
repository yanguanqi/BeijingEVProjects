package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 生成缓存时支持导入的字段类型
 */
public enum EVVectorCacheFieldType implements INativeEnum<EVVectorCacheFieldType> {
	VectorCacheFieldType_Unknown(EVVectorCacheFieldTypeHelper.ENUM_VALUES[0]),
	VectorCacheFieldType_Int32(EVVectorCacheFieldTypeHelper.ENUM_VALUES[1]),
	VectorCacheFieldType_Long(EVVectorCacheFieldTypeHelper.ENUM_VALUES[2]),
	VectorCacheFieldType_Real64(EVVectorCacheFieldTypeHelper.ENUM_VALUES[3]),
	VectorCacheFieldType_String(EVVectorCacheFieldTypeHelper.ENUM_VALUES[4]),
	VectorCacheFieldType_Bool(EVVectorCacheFieldTypeHelper.ENUM_VALUES[5]),
	VectorCacheFieldType_Binary(EVVectorCacheFieldTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVVectorCacheFieldType(int i) {
		this.value = i;
	}
	public EVVectorCacheFieldType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheFieldType toEnum(int retval) {
		if(retval == VectorCacheFieldType_Unknown.value){
			return VectorCacheFieldType_Unknown;
		}
		else if(retval == VectorCacheFieldType_Int32.value){
			return VectorCacheFieldType_Int32;
		}
		else if(retval == VectorCacheFieldType_Long.value){
			return VectorCacheFieldType_Long;
		}
		else if(retval == VectorCacheFieldType_Real64.value){
			return VectorCacheFieldType_Real64;
		}
		else if(retval == VectorCacheFieldType_String.value){
			return VectorCacheFieldType_String;
		}
		else if(retval == VectorCacheFieldType_Bool.value){
			return VectorCacheFieldType_Bool;
		}
		else if(retval == VectorCacheFieldType_Binary.value){
			return VectorCacheFieldType_Binary;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheFieldTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
