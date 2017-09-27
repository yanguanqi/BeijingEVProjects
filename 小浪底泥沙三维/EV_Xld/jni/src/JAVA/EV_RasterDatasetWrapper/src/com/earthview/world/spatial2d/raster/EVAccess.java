package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVAccess枚举操作权限
 */
public enum EVAccess implements INativeEnum<EVAccess> {
	EV_READONLY(EVAccessHelper.ENUM_VALUES[0]),
	EV_UPDATE(EVAccessHelper.ENUM_VALUES[1]);
	private int value;
	EVAccess(int i) {
		this.value = i;
	}
	public EVAccess getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVAccess toEnum(int retval) {
		if(retval == EV_READONLY.value){
			return EV_READONLY;
		}
		else if(retval == EV_UPDATE.value){
			return EV_UPDATE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVAccessHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
