package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 切割模板枚举
 */
public enum EVVectorCacheTemplateType implements INativeEnum<EVVectorCacheTemplateType> {
	VectorCacheTemplateType_Unknown(EVVectorCacheTemplateTypeHelper.ENUM_VALUES[0]),
	VectorCacheTemplateType_WGS84(EVVectorCacheTemplateTypeHelper.ENUM_VALUES[1]),
	VectorCacheTemplateType_Mercator(EVVectorCacheTemplateTypeHelper.ENUM_VALUES[2]),
	VectorCacheTemplateType_UserDefined(EVVectorCacheTemplateTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVVectorCacheTemplateType(int i) {
		this.value = i;
	}
	public EVVectorCacheTemplateType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheTemplateType toEnum(int retval) {
		if(retval == VectorCacheTemplateType_Unknown.value){
			return VectorCacheTemplateType_Unknown;
		}
		else if(retval == VectorCacheTemplateType_WGS84.value){
			return VectorCacheTemplateType_WGS84;
		}
		else if(retval == VectorCacheTemplateType_Mercator.value){
			return VectorCacheTemplateType_Mercator;
		}
		else if(retval == VectorCacheTemplateType_UserDefined.value){
			return VectorCacheTemplateType_UserDefined;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheTemplateTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
