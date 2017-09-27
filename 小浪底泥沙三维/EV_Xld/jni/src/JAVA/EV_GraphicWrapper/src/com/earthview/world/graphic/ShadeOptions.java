package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ShadeOptions implements INativeEnum<ShadeOptions> {
	SO_FLAT(ShadeOptionsHelper.ENUM_VALUES[0]),
	SO_GOURAUD(ShadeOptionsHelper.ENUM_VALUES[1]),
	SO_PHONG(ShadeOptionsHelper.ENUM_VALUES[2]);
	private int value;
	ShadeOptions(int i) {
		this.value = i;
	}
	public ShadeOptions getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ShadeOptions toEnum(int retval) {
		if(retval == SO_FLAT.value){
			return SO_FLAT;
		}
		else if(retval == SO_GOURAUD.value){
			return SO_GOURAUD;
		}
		else if(retval == SO_PHONG.value){
			return SO_PHONG;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ShadeOptionsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
