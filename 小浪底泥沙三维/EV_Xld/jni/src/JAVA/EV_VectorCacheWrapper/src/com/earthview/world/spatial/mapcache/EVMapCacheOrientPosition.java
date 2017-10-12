package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapCacheOrientPosition implements INativeEnum<EVMapCacheOrientPosition> {
	EVOP_Unknown(EVMapCacheOrientPositionHelper.ENUM_VALUES[0]),
	EVOP_LeftUp(EVMapCacheOrientPositionHelper.ENUM_VALUES[1]),
	EVOP_LeftDown(EVMapCacheOrientPositionHelper.ENUM_VALUES[2]),
	EVOP_RightUp(EVMapCacheOrientPositionHelper.ENUM_VALUES[3]),
	EVOP_RightDown(EVMapCacheOrientPositionHelper.ENUM_VALUES[4]);
	private int value;
	EVMapCacheOrientPosition(int i) {
		this.value = i;
	}
	public EVMapCacheOrientPosition getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapCacheOrientPosition toEnum(int retval) {
		if(retval == EVOP_Unknown.value){
			return EVOP_Unknown;
		}
		else if(retval == EVOP_LeftUp.value){
			return EVOP_LeftUp;
		}
		else if(retval == EVOP_LeftDown.value){
			return EVOP_LeftDown;
		}
		else if(retval == EVOP_RightUp.value){
			return EVOP_RightUp;
		}
		else if(retval == EVOP_RightDown.value){
			return EVOP_RightDown;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapCacheOrientPositionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
