package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LayerBlendOperation implements INativeEnum<LayerBlendOperation> {
	LBO_REPLACE(LayerBlendOperationHelper.ENUM_VALUES[0]),
	LBO_ADD(LayerBlendOperationHelper.ENUM_VALUES[1]),
	LBO_MODULATE(LayerBlendOperationHelper.ENUM_VALUES[2]),
	LBO_ALPHA_BLEND(LayerBlendOperationHelper.ENUM_VALUES[3]);
	private int value;
	LayerBlendOperation(int i) {
		this.value = i;
	}
	public LayerBlendOperation getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LayerBlendOperation toEnum(int retval) {
		if(retval == LBO_REPLACE.value){
			return LBO_REPLACE;
		}
		else if(retval == LBO_ADD.value){
			return LBO_ADD;
		}
		else if(retval == LBO_MODULATE.value){
			return LBO_MODULATE;
		}
		else if(retval == LBO_ALPHA_BLEND.value){
			return LBO_ALPHA_BLEND;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LayerBlendOperationHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
