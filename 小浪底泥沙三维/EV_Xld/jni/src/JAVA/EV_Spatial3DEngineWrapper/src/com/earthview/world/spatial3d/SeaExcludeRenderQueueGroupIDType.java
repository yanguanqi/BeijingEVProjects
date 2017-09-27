package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SeaExcludeRenderQueueGroupIDType implements INativeEnum<SeaExcludeRenderQueueGroupIDType> {
	REFLECTION_UP_WATER(SeaExcludeRenderQueueGroupIDTypeHelper.ENUM_VALUES[0]),
	REFLECTION_DOWN_WATER(SeaExcludeRenderQueueGroupIDTypeHelper.ENUM_VALUES[1]),
	REFRACTION_UP_WATER(SeaExcludeRenderQueueGroupIDTypeHelper.ENUM_VALUES[2]),
	REFRACTION_DOWN_WATER(SeaExcludeRenderQueueGroupIDTypeHelper.ENUM_VALUES[3]);
	private int value;
	SeaExcludeRenderQueueGroupIDType(int i) {
		this.value = i;
	}
	public SeaExcludeRenderQueueGroupIDType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SeaExcludeRenderQueueGroupIDType toEnum(int retval) {
		if(retval == REFLECTION_UP_WATER.value){
			return REFLECTION_UP_WATER;
		}
		else if(retval == REFLECTION_DOWN_WATER.value){
			return REFLECTION_DOWN_WATER;
		}
		else if(retval == REFRACTION_UP_WATER.value){
			return REFRACTION_UP_WATER;
		}
		else if(retval == REFRACTION_DOWN_WATER.value){
			return REFRACTION_DOWN_WATER;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SeaExcludeRenderQueueGroupIDTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
