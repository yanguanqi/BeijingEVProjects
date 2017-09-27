package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPicLayout implements INativeEnum<EVPicLayout> {
	EPL_TOP_LEFT(EVPicLayoutHelper.ENUM_VALUES[0]),
	EPL_TOP_CENTER(EVPicLayoutHelper.ENUM_VALUES[1]),
	EPL_TOP_RIGHT(EVPicLayoutHelper.ENUM_VALUES[2]),
	EPL_CENTER_LEFT(EVPicLayoutHelper.ENUM_VALUES[3]),
	EPL_CENTER(EVPicLayoutHelper.ENUM_VALUES[4]),
	EPL_CENTER_RIGHT(EVPicLayoutHelper.ENUM_VALUES[5]),
	EPL_BOTTOM_LEFT(EVPicLayoutHelper.ENUM_VALUES[6]),
	EPL_BOTTOM_CENTER(EVPicLayoutHelper.ENUM_VALUES[7]),
	EPL_BOTTOM_RIGHT(EVPicLayoutHelper.ENUM_VALUES[8]);
	private int value;
	EVPicLayout(int i) {
		this.value = i;
	}
	public EVPicLayout getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPicLayout toEnum(int retval) {
		if(retval == EPL_TOP_LEFT.value){
			return EPL_TOP_LEFT;
		}
		else if(retval == EPL_TOP_CENTER.value){
			return EPL_TOP_CENTER;
		}
		else if(retval == EPL_TOP_RIGHT.value){
			return EPL_TOP_RIGHT;
		}
		else if(retval == EPL_CENTER_LEFT.value){
			return EPL_CENTER_LEFT;
		}
		else if(retval == EPL_CENTER.value){
			return EPL_CENTER;
		}
		else if(retval == EPL_CENTER_RIGHT.value){
			return EPL_CENTER_RIGHT;
		}
		else if(retval == EPL_BOTTOM_LEFT.value){
			return EPL_BOTTOM_LEFT;
		}
		else if(retval == EPL_BOTTOM_CENTER.value){
			return EPL_BOTTOM_CENTER;
		}
		else if(retval == EPL_BOTTOM_RIGHT.value){
			return EPL_BOTTOM_RIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPicLayoutHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
