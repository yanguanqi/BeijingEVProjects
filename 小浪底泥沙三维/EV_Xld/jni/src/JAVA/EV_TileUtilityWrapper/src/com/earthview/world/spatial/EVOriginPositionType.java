package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVOriginPositionType implements INativeEnum<EVOriginPositionType> {
	OPT_UNKNOWN(EVOriginPositionTypeHelper.ENUM_VALUES[0]),
	OPT_LEFTTOP(EVOriginPositionTypeHelper.ENUM_VALUES[1]),
	OPT_LEFTLOW(EVOriginPositionTypeHelper.ENUM_VALUES[2]),
	OPT_RIGHTTOP(EVOriginPositionTypeHelper.ENUM_VALUES[3]),
	OPT_RIGHTLOW(EVOriginPositionTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVOriginPositionType(int i) {
		this.value = i;
	}
	public EVOriginPositionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVOriginPositionType toEnum(int retval) {
		if(retval == OPT_UNKNOWN.value){
			return OPT_UNKNOWN;
		}
		else if(retval == OPT_LEFTTOP.value){
			return OPT_LEFTTOP;
		}
		else if(retval == OPT_LEFTLOW.value){
			return OPT_LEFTLOW;
		}
		else if(retval == OPT_RIGHTTOP.value){
			return OPT_RIGHTTOP;
		}
		else if(retval == OPT_RIGHTLOW.value){
			return OPT_RIGHTLOW;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVOriginPositionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
