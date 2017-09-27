package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FontType implements INativeEnum<FontType> {
	FT_TRUETYPE(FontTypeHelper.ENUM_VALUES[0]),
	FT_IMAGE(FontTypeHelper.ENUM_VALUES[1]);
	private int value;
	FontType(int i) {
		this.value = i;
	}
	public FontType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FontType toEnum(int retval) {
		if(retval == FT_TRUETYPE.value){
			return FT_TRUETYPE;
		}
		else if(retval == FT_IMAGE.value){
			return FT_IMAGE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FontTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
