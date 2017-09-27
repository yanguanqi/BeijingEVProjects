package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 降水枚举
 */
public enum EVPrecipitationType implements INativeEnum<EVPrecipitationType> {
	PT_DRIZZLE(EVPrecipitationTypeHelper.ENUM_VALUES[0]),
	PT_RAIN(EVPrecipitationTypeHelper.ENUM_VALUES[1]),
	PT_SNOW(EVPrecipitationTypeHelper.ENUM_VALUES[2]),
	PT_SNOWGRAINS(EVPrecipitationTypeHelper.ENUM_VALUES[3]),
	PT_ICECRYSTALS(EVPrecipitationTypeHelper.ENUM_VALUES[4]),
	PT_ICEPELLETS(EVPrecipitationTypeHelper.ENUM_VALUES[5]),
	PT_HAIL(EVPrecipitationTypeHelper.ENUM_VALUES[6]),
	PT_SMALLHAIL(EVPrecipitationTypeHelper.ENUM_VALUES[7]),
	PT_NONE(EVPrecipitationTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVPrecipitationType(int i) {
		this.value = i;
	}
	public EVPrecipitationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPrecipitationType toEnum(int retval) {
		if(retval == PT_DRIZZLE.value){
			return PT_DRIZZLE;
		}
		else if(retval == PT_RAIN.value){
			return PT_RAIN;
		}
		else if(retval == PT_SNOW.value){
			return PT_SNOW;
		}
		else if(retval == PT_SNOWGRAINS.value){
			return PT_SNOWGRAINS;
		}
		else if(retval == PT_ICECRYSTALS.value){
			return PT_ICECRYSTALS;
		}
		else if(retval == PT_ICEPELLETS.value){
			return PT_ICEPELLETS;
		}
		else if(retval == PT_HAIL.value){
			return PT_HAIL;
		}
		else if(retval == PT_SMALLHAIL.value){
			return PT_SMALLHAIL;
		}
		else if(retval == PT_NONE.value){
			return PT_NONE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPrecipitationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
