package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片名对齐方式
 */
public enum EVTileNameFlushType implements INativeEnum<EVTileNameFlushType> {
	TNFT_UNKNOWN(EVTileNameFlushTypeHelper.ENUM_VALUES[0]),
	TNFT_FLUSH_LEFT(EVTileNameFlushTypeHelper.ENUM_VALUES[1]),
	TNFT_FLUSH_RIGHT(EVTileNameFlushTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVTileNameFlushType(int i) {
		this.value = i;
	}
	public EVTileNameFlushType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileNameFlushType toEnum(int retval) {
		if(retval == TNFT_UNKNOWN.value){
			return TNFT_UNKNOWN;
		}
		else if(retval == TNFT_FLUSH_LEFT.value){
			return TNFT_FLUSH_LEFT;
		}
		else if(retval == TNFT_FLUSH_RIGHT.value){
			return TNFT_FLUSH_RIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileNameFlushTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
