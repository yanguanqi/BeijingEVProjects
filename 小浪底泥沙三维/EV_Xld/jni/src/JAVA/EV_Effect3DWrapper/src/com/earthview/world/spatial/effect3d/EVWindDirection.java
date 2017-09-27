package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 风向枚举
 */
public enum EVWindDirection implements INativeEnum<EVWindDirection> {
	WD_EAST(EVWindDirectionHelper.ENUM_VALUES[0]),
	WD_SOUTH(EVWindDirectionHelper.ENUM_VALUES[1]),
	WD_WEST(EVWindDirectionHelper.ENUM_VALUES[2]),
	WD_NORTH(EVWindDirectionHelper.ENUM_VALUES[3]),
	WD_SOUTHEAST(EVWindDirectionHelper.ENUM_VALUES[4]),
	WD_NORTHEAST(EVWindDirectionHelper.ENUM_VALUES[5]),
	WD_SOUTHWEST(EVWindDirectionHelper.ENUM_VALUES[6]),
	WD_NORTHWEST(EVWindDirectionHelper.ENUM_VALUES[7]);
	private int value;
	EVWindDirection(int i) {
		this.value = i;
	}
	public EVWindDirection getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWindDirection toEnum(int retval) {
		if(retval == WD_EAST.value){
			return WD_EAST;
		}
		else if(retval == WD_SOUTH.value){
			return WD_SOUTH;
		}
		else if(retval == WD_WEST.value){
			return WD_WEST;
		}
		else if(retval == WD_NORTH.value){
			return WD_NORTH;
		}
		else if(retval == WD_SOUTHEAST.value){
			return WD_SOUTHEAST;
		}
		else if(retval == WD_NORTHEAST.value){
			return WD_NORTHEAST;
		}
		else if(retval == WD_SOUTHWEST.value){
			return WD_SOUTHWEST;
		}
		else if(retval == WD_NORTHWEST.value){
			return WD_NORTHWEST;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWindDirectionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
