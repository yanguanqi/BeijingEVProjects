package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVCompositingMode implements INativeEnum<EVCompositingMode> {
	CM_SourceOver(EVCompositingModeHelper.ENUM_VALUES[0]),
	CM_SourceCopy(EVCompositingModeHelper.ENUM_VALUES[1]);
	private int value;
	EVCompositingMode(int i) {
		this.value = i;
	}
	public EVCompositingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCompositingMode toEnum(int retval) {
		if(retval == CM_SourceOver.value){
			return CM_SourceOver;
		}
		else if(retval == CM_SourceCopy.value){
			return CM_SourceCopy;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCompositingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
