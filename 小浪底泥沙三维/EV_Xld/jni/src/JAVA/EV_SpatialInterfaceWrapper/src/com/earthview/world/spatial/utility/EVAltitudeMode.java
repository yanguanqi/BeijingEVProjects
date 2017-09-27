package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 枚举:高度模式
 */
public enum EVAltitudeMode implements INativeEnum<EVAltitudeMode> {
	AM_UNKNOW(EVAltitudeModeHelper.ENUM_VALUES[0]),
	AM_Absolute_WithSceneHeight(EVAltitudeModeHelper.ENUM_VALUES[1]),
	AM_ClampToGround(EVAltitudeModeHelper.ENUM_VALUES[2]),
	AM_RelativeToGround(EVAltitudeModeHelper.ENUM_VALUES[3]),
	AM_ClampToSeaFloor(EVAltitudeModeHelper.ENUM_VALUES[4]),
	AM_RelativeToSeaFloor(EVAltitudeModeHelper.ENUM_VALUES[5]),
	AM_Absolute(EVAltitudeModeHelper.ENUM_VALUES[6]);
	private int value;
	EVAltitudeMode(int i) {
		this.value = i;
	}
	public EVAltitudeMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVAltitudeMode toEnum(int retval) {
		if(retval == AM_UNKNOW.value){
			return AM_UNKNOW;
		}
		else if(retval == AM_Absolute_WithSceneHeight.value){
			return AM_Absolute_WithSceneHeight;
		}
		else if(retval == AM_ClampToGround.value){
			return AM_ClampToGround;
		}
		else if(retval == AM_RelativeToGround.value){
			return AM_RelativeToGround;
		}
		else if(retval == AM_ClampToSeaFloor.value){
			return AM_ClampToSeaFloor;
		}
		else if(retval == AM_RelativeToSeaFloor.value){
			return AM_RelativeToSeaFloor;
		}
		else if(retval == AM_Absolute.value){
			return AM_Absolute;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVAltitudeModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
