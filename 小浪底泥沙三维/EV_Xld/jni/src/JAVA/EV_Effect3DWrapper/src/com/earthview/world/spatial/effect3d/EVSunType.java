package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 太阳类型
 */
public enum EVSunType implements INativeEnum<EVSunType> {
	ST_SPHERE(EVSunTypeHelper.ENUM_VALUES[0]),
	ST_SPRITE(EVSunTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVSunType(int i) {
		this.value = i;
	}
	public EVSunType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSunType toEnum(int retval) {
		if(retval == ST_SPHERE.value){
			return ST_SPHERE;
		}
		else if(retval == ST_SPRITE.value){
			return ST_SPRITE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSunTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
