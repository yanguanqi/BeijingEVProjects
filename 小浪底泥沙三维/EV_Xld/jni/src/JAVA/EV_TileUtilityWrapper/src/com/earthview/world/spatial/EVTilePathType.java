package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 路径类型
 */
public enum EVTilePathType implements INativeEnum<EVTilePathType> {
	TPT_UNKNOWN(EVTilePathTypeHelper.ENUM_VALUES[0]),
	TPT_FILE(EVTilePathTypeHelper.ENUM_VALUES[1]),
	TPT_DATABASE_1_0(EVTilePathTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVTilePathType(int i) {
		this.value = i;
	}
	public EVTilePathType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTilePathType toEnum(int retval) {
		if(retval == TPT_UNKNOWN.value){
			return TPT_UNKNOWN;
		}
		else if(retval == TPT_FILE.value){
			return TPT_FILE;
		}
		else if(retval == TPT_DATABASE_1_0.value){
			return TPT_DATABASE_1_0;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTilePathTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
