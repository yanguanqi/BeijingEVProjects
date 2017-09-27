package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum PixelFormatFlags implements INativeEnum<PixelFormatFlags> {
	PFF_HASALPHA(PixelFormatFlagsHelper.ENUM_VALUES[0]),
	PFF_COMPRESSED(PixelFormatFlagsHelper.ENUM_VALUES[1]),
	PFF_FLOAT(PixelFormatFlagsHelper.ENUM_VALUES[2]),
	PFF_DEPTH(PixelFormatFlagsHelper.ENUM_VALUES[3]),
	PFF_NATIVEENDIAN(PixelFormatFlagsHelper.ENUM_VALUES[4]),
	PFF_LUMINANCE(PixelFormatFlagsHelper.ENUM_VALUES[5]);
	private int value;
	PixelFormatFlags(int i) {
		this.value = i;
	}
	public PixelFormatFlags getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final PixelFormatFlags toEnum(int retval) {
		if(retval == PFF_HASALPHA.value){
			return PFF_HASALPHA;
		}
		else if(retval == PFF_COMPRESSED.value){
			return PFF_COMPRESSED;
		}
		else if(retval == PFF_FLOAT.value){
			return PFF_FLOAT;
		}
		else if(retval == PFF_DEPTH.value){
			return PFF_DEPTH;
		}
		else if(retval == PFF_NATIVEENDIAN.value){
			return PFF_NATIVEENDIAN;
		}
		else if(retval == PFF_LUMINANCE.value){
			return PFF_LUMINANCE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class PixelFormatFlagsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
