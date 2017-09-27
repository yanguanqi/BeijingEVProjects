package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSpatialRelationEnum implements INativeEnum<EVSpatialRelationEnum> {
	SRE_UNKNOWN(EVSpatialRelationEnumHelper.ENUM_VALUES[0]);
	private int value;
	EVSpatialRelationEnum(int i) {
		this.value = i;
	}
	public EVSpatialRelationEnum getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialRelationEnum toEnum(int retval) {
		if(retval == SRE_UNKNOWN.value){
			return SRE_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialRelationEnumHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
