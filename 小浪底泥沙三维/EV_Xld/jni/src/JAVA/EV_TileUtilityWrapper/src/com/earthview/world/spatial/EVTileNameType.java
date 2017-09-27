package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片名样式
 */
public enum EVTileNameType implements INativeEnum<EVTileNameType> {
	TNT_UNKNOWN(EVTileNameTypeHelper.ENUM_VALUES[0]),
	TNT_LEVEL(EVTileNameTypeHelper.ENUM_VALUES[1]),
	TNT_ROW(EVTileNameTypeHelper.ENUM_VALUES[2]),
	TNT_COL(EVTileNameTypeHelper.ENUM_VALUES[3]),
	TNT_ROW_COL(EVTileNameTypeHelper.ENUM_VALUES[4]),
	TNT_LEVEL_ROW_COL(EVTileNameTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVTileNameType(int i) {
		this.value = i;
	}
	public EVTileNameType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileNameType toEnum(int retval) {
		if(retval == TNT_UNKNOWN.value){
			return TNT_UNKNOWN;
		}
		else if(retval == TNT_LEVEL.value){
			return TNT_LEVEL;
		}
		else if(retval == TNT_ROW.value){
			return TNT_ROW;
		}
		else if(retval == TNT_COL.value){
			return TNT_COL;
		}
		else if(retval == TNT_ROW_COL.value){
			return TNT_ROW_COL;
		}
		else if(retval == TNT_LEVEL_ROW_COL.value){
			return TNT_LEVEL_ROW_COL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileNameTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
