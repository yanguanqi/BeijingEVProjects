package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 旋转模式
 */
public enum OrientationMode implements INativeEnum<OrientationMode> {
	OR_DEGREE_0(OrientationModeHelper.ENUM_VALUES[0]),
	OR_DEGREE_90(OrientationModeHelper.ENUM_VALUES[1]),
	OR_DEGREE_180(OrientationModeHelper.ENUM_VALUES[2]),
	OR_DEGREE_270(OrientationModeHelper.ENUM_VALUES[3]),
	OR_PORTRAIT(OrientationModeHelper.ENUM_VALUES[4]),
	OR_LANDSCAPERIGHT(OrientationModeHelper.ENUM_VALUES[5]),
	OR_LANDSCAPELEFT(OrientationModeHelper.ENUM_VALUES[6]);
	private int value;
	OrientationMode(int i) {
		this.value = i;
	}
	public OrientationMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final OrientationMode toEnum(int retval) {
		if(retval == OR_DEGREE_0.value){
			return OR_DEGREE_0;
		}
		else if(retval == OR_DEGREE_90.value){
			return OR_DEGREE_90;
		}
		else if(retval == OR_DEGREE_180.value){
			return OR_DEGREE_180;
		}
		else if(retval == OR_DEGREE_270.value){
			return OR_DEGREE_270;
		}
		else if(retval == OR_PORTRAIT.value){
			return OR_PORTRAIT;
		}
		else if(retval == OR_LANDSCAPERIGHT.value){
			return OR_LANDSCAPERIGHT;
		}
		else if(retval == OR_LANDSCAPELEFT.value){
			return OR_LANDSCAPELEFT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class OrientationModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
