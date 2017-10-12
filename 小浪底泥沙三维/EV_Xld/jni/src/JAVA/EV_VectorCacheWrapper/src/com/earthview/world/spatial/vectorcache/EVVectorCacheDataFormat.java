package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存数据格式
 */
public enum EVVectorCacheDataFormat implements INativeEnum<EVVectorCacheDataFormat> {
	VectorCacheDataFormat_Unknown(EVVectorCacheDataFormatHelper.ENUM_VALUES[0]),
	VectorCacheDataFormat_SQLITE3_UNCOMPRESSED(EVVectorCacheDataFormatHelper.ENUM_VALUES[1]),
	VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z(EVVectorCacheDataFormatHelper.ENUM_VALUES[2]);
	private int value;
	EVVectorCacheDataFormat(int i) {
		this.value = i;
	}
	public EVVectorCacheDataFormat getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheDataFormat toEnum(int retval) {
		if(retval == VectorCacheDataFormat_Unknown.value){
			return VectorCacheDataFormat_Unknown;
		}
		else if(retval == VectorCacheDataFormat_SQLITE3_UNCOMPRESSED.value){
			return VectorCacheDataFormat_SQLITE3_UNCOMPRESSED;
		}
		else if(retval == VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z.value){
			return VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheDataFormatHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
