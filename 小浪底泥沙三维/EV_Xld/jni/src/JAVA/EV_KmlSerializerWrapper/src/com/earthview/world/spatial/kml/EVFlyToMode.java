package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///飞行方式
public enum EVFlyToMode implements INativeEnum<EVFlyToMode> {
	FTM_BOUNCE(EVFlyToModeHelper.ENUM_VALUES[0]),
	FTM_SMOOTH(EVFlyToModeHelper.ENUM_VALUES[1]);
	private int value;
	EVFlyToMode(int i) {
		this.value = i;
	}
	public EVFlyToMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVFlyToMode toEnum(int retval) {
		if(retval == FTM_BOUNCE.value){
			return FTM_BOUNCE;
		}
		else if(retval == FTM_SMOOTH.value){
			return FTM_SMOOTH;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVFlyToModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
