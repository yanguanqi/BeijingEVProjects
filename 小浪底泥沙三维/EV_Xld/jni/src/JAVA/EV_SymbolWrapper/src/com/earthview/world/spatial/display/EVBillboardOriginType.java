package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVBillboardOriginType implements INativeEnum<EVBillboardOriginType> {
	BOT_TOP_LEFT(EVBillboardOriginTypeHelper.ENUM_VALUES[0]),
	BOT_TOP_CENTER(EVBillboardOriginTypeHelper.ENUM_VALUES[1]),
	BOT_TOP_RIGHT(EVBillboardOriginTypeHelper.ENUM_VALUES[2]),
	BOT_CENTER_LEFT(EVBillboardOriginTypeHelper.ENUM_VALUES[3]),
	BOT_CENTER(EVBillboardOriginTypeHelper.ENUM_VALUES[4]),
	BOT_CENTER_RIGHT(EVBillboardOriginTypeHelper.ENUM_VALUES[5]),
	BOT_BOTTOM_LEFT(EVBillboardOriginTypeHelper.ENUM_VALUES[6]),
	BOT_BOTTOM_CENTER(EVBillboardOriginTypeHelper.ENUM_VALUES[7]),
	BOT_BOTTOM_RIGHT(EVBillboardOriginTypeHelper.ENUM_VALUES[8]);
	private int value;
	EVBillboardOriginType(int i) {
		this.value = i;
	}
	public EVBillboardOriginType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVBillboardOriginType toEnum(int retval) {
		if(retval == BOT_TOP_LEFT.value){
			return BOT_TOP_LEFT;
		}
		else if(retval == BOT_TOP_CENTER.value){
			return BOT_TOP_CENTER;
		}
		else if(retval == BOT_TOP_RIGHT.value){
			return BOT_TOP_RIGHT;
		}
		else if(retval == BOT_CENTER_LEFT.value){
			return BOT_CENTER_LEFT;
		}
		else if(retval == BOT_CENTER.value){
			return BOT_CENTER;
		}
		else if(retval == BOT_CENTER_RIGHT.value){
			return BOT_CENTER_RIGHT;
		}
		else if(retval == BOT_BOTTOM_LEFT.value){
			return BOT_BOTTOM_LEFT;
		}
		else if(retval == BOT_BOTTOM_CENTER.value){
			return BOT_BOTTOM_CENTER;
		}
		else if(retval == BOT_BOTTOM_RIGHT.value){
			return BOT_BOTTOM_RIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVBillboardOriginTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
