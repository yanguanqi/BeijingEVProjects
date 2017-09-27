package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum OBQDemType implements INativeEnum<OBQDemType> {
	OBQDT_Float32(OBQDemTypeHelper.ENUM_VALUES[0]),
	OBQDT_Int16(OBQDemTypeHelper.ENUM_VALUES[1]);
	private int value;
	OBQDemType(int i) {
		this.value = i;
	}
	public OBQDemType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final OBQDemType toEnum(int retval) {
		if(retval == OBQDT_Float32.value){
			return OBQDT_Float32;
		}
		else if(retval == OBQDT_Int16.value){
			return OBQDT_Int16;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class OBQDemTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
