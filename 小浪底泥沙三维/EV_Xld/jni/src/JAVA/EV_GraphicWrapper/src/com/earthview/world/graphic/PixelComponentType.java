package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x00000010,
/// This is an intensity format instead of a RGB one. The luminance
/// replaces R,G and B. (but not A)
public enum PixelComponentType implements INativeEnum<PixelComponentType> {
	PCT_BYTE(PixelComponentTypeHelper.ENUM_VALUES[0]),
	PCT_SHORT(PixelComponentTypeHelper.ENUM_VALUES[1]),
	PCT_FLOAT16(PixelComponentTypeHelper.ENUM_VALUES[2]),
	PCT_FLOAT32(PixelComponentTypeHelper.ENUM_VALUES[3]),
	PCT_COUNT(PixelComponentTypeHelper.ENUM_VALUES[4]);
	private int value;
	PixelComponentType(int i) {
		this.value = i;
	}
	public PixelComponentType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final PixelComponentType toEnum(int retval) {
		if(retval == PCT_BYTE.value){
			return PCT_BYTE;
		}
		else if(retval == PCT_SHORT.value){
			return PCT_SHORT;
		}
		else if(retval == PCT_FLOAT16.value){
			return PCT_FLOAT16;
		}
		else if(retval == PCT_FLOAT32.value){
			return PCT_FLOAT32;
		}
		else if(retval == PCT_COUNT.value){
			return PCT_COUNT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class PixelComponentTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
