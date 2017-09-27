package com.earthview.world.spatial.geometry.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVBitOrderType implements INativeEnum<EVBitOrderType> {
	BOT_BIGENDIAN_XDR(EVBitOrderTypeHelper.ENUM_VALUES[0]),
	BOT_LITTLEENDIAN_NDR(EVBitOrderTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVBitOrderType(int i) {
		this.value = i;
	}
	public EVBitOrderType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVBitOrderType toEnum(int retval) {
		if(retval == BOT_BIGENDIAN_XDR.value){
			return BOT_BIGENDIAN_XDR;
		}
		else if(retval == BOT_LITTLEENDIAN_NDR.value){
			return BOT_LITTLEENDIAN_NDR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVBitOrderTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
