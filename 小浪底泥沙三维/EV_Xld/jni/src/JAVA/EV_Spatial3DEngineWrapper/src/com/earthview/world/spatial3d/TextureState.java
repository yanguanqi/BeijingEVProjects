package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum TextureState implements INativeEnum<TextureState> {
	TS_DECLARED(TextureStateHelper.ENUM_VALUES[0]),
	TS_THUMB(TextureStateHelper.ENUM_VALUES[1]),
	TS_ORIG(TextureStateHelper.ENUM_VALUES[2]);
	private int value;
	TextureState(int i) {
		this.value = i;
	}
	public TextureState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TextureState toEnum(int retval) {
		if(retval == TS_DECLARED.value){
			return TS_DECLARED;
		}
		else if(retval == TS_THUMB.value){
			return TS_THUMB;
		}
		else if(retval == TS_ORIG.value){
			return TS_ORIG;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TextureStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
