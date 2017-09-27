package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LayerBlendType implements INativeEnum<LayerBlendType> {
	LBT_COLOUR(LayerBlendTypeHelper.ENUM_VALUES[0]),
	LBT_ALPHA(LayerBlendTypeHelper.ENUM_VALUES[1]);
	private int value;
	LayerBlendType(int i) {
		this.value = i;
	}
	public LayerBlendType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LayerBlendType toEnum(int retval) {
		if(retval == LBT_COLOUR.value){
			return LBT_COLOUR;
		}
		else if(retval == LBT_ALPHA.value){
			return LBT_ALPHA;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LayerBlendTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
