package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSmoothingMode implements INativeEnum<EVSmoothingMode> {
	SM_Invalid(EVSmoothingModeHelper.ENUM_VALUES[0]),
	SM_Default(EVSmoothingModeHelper.ENUM_VALUES[1]),
	SM_HighSpeed(EVSmoothingModeHelper.ENUM_VALUES[2]),
	SM_HighQuality(EVSmoothingModeHelper.ENUM_VALUES[3]),
	SM_None(EVSmoothingModeHelper.ENUM_VALUES[4]),
	SM_AntiAlias(EVSmoothingModeHelper.ENUM_VALUES[5]);
	private int value;
	EVSmoothingMode(int i) {
		this.value = i;
	}
	public EVSmoothingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSmoothingMode toEnum(int retval) {
		if(retval == SM_Invalid.value){
			return SM_Invalid;
		}
		else if(retval == SM_Default.value){
			return SM_Default;
		}
		else if(retval == SM_HighSpeed.value){
			return SM_HighSpeed;
		}
		else if(retval == SM_HighQuality.value){
			return SM_HighQuality;
		}
		else if(retval == SM_None.value){
			return SM_None;
		}
		else if(retval == SM_AntiAlias.value){
			return SM_AntiAlias;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSmoothingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
