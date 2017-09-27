package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVIOFlag读写枚举
 */
public enum EVIOFlag implements INativeEnum<EVIOFlag> {
	IO_READ(EVIOFlagHelper.ENUM_VALUES[0]),
	IO_WRITE(EVIOFlagHelper.ENUM_VALUES[1]);
	private int value;
	EVIOFlag(int i) {
		this.value = i;
	}
	public EVIOFlag getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVIOFlag toEnum(int retval) {
		if(retval == IO_READ.value){
			return IO_READ;
		}
		else if(retval == IO_WRITE.value){
			return IO_WRITE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVIOFlagHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
