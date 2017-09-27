package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum eLayout implements INativeEnum<eLayout> {
	CENTER(eLayoutHelper.ENUM_VALUES[0]),
	UP_LEFT(eLayoutHelper.ENUM_VALUES[1]),
	UP_RIGHT(eLayoutHelper.ENUM_VALUES[2]),
	DOWN_LEFT(eLayoutHelper.ENUM_VALUES[3]),
	DOWN_RIGHT(eLayoutHelper.ENUM_VALUES[4]),
	CENTER_LEFT(eLayoutHelper.ENUM_VALUES[5]),
	CENTER_RIGHT(eLayoutHelper.ENUM_VALUES[6]),
	CENTER_UP(eLayoutHelper.ENUM_VALUES[7]),
	CENTER_DOWN(eLayoutHelper.ENUM_VALUES[8]);
	private int value;
	eLayout(int i) {
		this.value = i;
	}
	public eLayout getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final eLayout toEnum(int retval) {
		if(retval == CENTER.value){
			return CENTER;
		}
		else if(retval == UP_LEFT.value){
			return UP_LEFT;
		}
		else if(retval == UP_RIGHT.value){
			return UP_RIGHT;
		}
		else if(retval == DOWN_LEFT.value){
			return DOWN_LEFT;
		}
		else if(retval == DOWN_RIGHT.value){
			return DOWN_RIGHT;
		}
		else if(retval == CENTER_LEFT.value){
			return CENTER_LEFT;
		}
		else if(retval == CENTER_RIGHT.value){
			return CENTER_RIGHT;
		}
		else if(retval == CENTER_UP.value){
			return CENTER_UP;
		}
		else if(retval == CENTER_DOWN.value){
			return CENTER_DOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class eLayoutHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
