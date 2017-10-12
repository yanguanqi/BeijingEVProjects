package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 切割模板
 */
public enum EVVectorCacheTemplateMode implements INativeEnum<EVVectorCacheTemplateMode> {
	VectorCacheTemplateMode_WGS84(EVVectorCacheTemplateModeHelper.ENUM_VALUES[0]),
	VectorCacheTemplateMode_Mercator(EVVectorCacheTemplateModeHelper.ENUM_VALUES[1]);
	private int value;
	EVVectorCacheTemplateMode(int i) {
		this.value = i;
	}
	public EVVectorCacheTemplateMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheTemplateMode toEnum(int retval) {
		if(retval == VectorCacheTemplateMode_WGS84.value){
			return VectorCacheTemplateMode_WGS84;
		}
		else if(retval == VectorCacheTemplateMode_Mercator.value){
			return VectorCacheTemplateMode_Mercator;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheTemplateModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
