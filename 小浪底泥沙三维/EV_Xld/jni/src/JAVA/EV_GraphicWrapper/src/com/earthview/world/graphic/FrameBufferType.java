package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FrameBufferType implements INativeEnum<FrameBufferType> {
	FBT_COLOUR(FrameBufferTypeHelper.ENUM_VALUES[0]),
	FBT_DEPTH(FrameBufferTypeHelper.ENUM_VALUES[1]),
	FBT_STENCIL(FrameBufferTypeHelper.ENUM_VALUES[2]);
	private int value;
	FrameBufferType(int i) {
		this.value = i;
	}
	public FrameBufferType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FrameBufferType toEnum(int retval) {
		if(retval == FBT_COLOUR.value){
			return FBT_COLOUR;
		}
		else if(retval == FBT_DEPTH.value){
			return FBT_DEPTH;
		}
		else if(retval == FBT_STENCIL.value){
			return FBT_STENCIL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FrameBufferTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
