package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSymbol3DDrawingMode implements INativeEnum<EVSymbol3DDrawingMode> {
	SDM_ALL(EVSymbol3DDrawingModeHelper.ENUM_VALUES[0]),
	SDM_FILL(EVSymbol3DDrawingModeHelper.ENUM_VALUES[1]),
	SDM_FRAME(EVSymbol3DDrawingModeHelper.ENUM_VALUES[2]);
	private int value;
	EVSymbol3DDrawingMode(int i) {
		this.value = i;
	}
	public EVSymbol3DDrawingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSymbol3DDrawingMode toEnum(int retval) {
		if(retval == SDM_ALL.value){
			return SDM_ALL;
		}
		else if(retval == SDM_FILL.value){
			return SDM_FILL;
		}
		else if(retval == SDM_FRAME.value){
			return SDM_FRAME;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSymbol3DDrawingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
