package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EV_MenuType implements INativeEnum<EV_MenuType> {
	MT_Operation_2D(EV_MenuTypeHelper.ENUM_VALUES[0]);
	private int value;
	EV_MenuType(int i) {
		this.value = i;
	}
	public EV_MenuType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EV_MenuType toEnum(int retval) {
		if(retval == MT_Operation_2D.value){
			return MT_Operation_2D;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EV_MenuTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
