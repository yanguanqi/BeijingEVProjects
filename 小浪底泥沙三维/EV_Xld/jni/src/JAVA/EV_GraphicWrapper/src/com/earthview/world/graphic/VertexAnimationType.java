package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum VertexAnimationType implements INativeEnum<VertexAnimationType> {
	VAT_NONE(VertexAnimationTypeHelper.ENUM_VALUES[0]),
	VAT_MORPH(VertexAnimationTypeHelper.ENUM_VALUES[1]),
	VAT_POSE(VertexAnimationTypeHelper.ENUM_VALUES[2]);
	private int value;
	VertexAnimationType(int i) {
		this.value = i;
	}
	public VertexAnimationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VertexAnimationType toEnum(int retval) {
		if(retval == VAT_NONE.value){
			return VAT_NONE;
		}
		else if(retval == VAT_MORPH.value){
			return VAT_MORPH;
		}
		else if(retval == VAT_POSE.value){
			return VAT_POSE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VertexAnimationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
