package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum TextureFilterOptions implements INativeEnum<TextureFilterOptions> {
	TFO_NONE(TextureFilterOptionsHelper.ENUM_VALUES[0]),
	TFO_BILINEAR(TextureFilterOptionsHelper.ENUM_VALUES[1]),
	TFO_TRILINEAR(TextureFilterOptionsHelper.ENUM_VALUES[2]),
	TFO_ANISOTROPIC(TextureFilterOptionsHelper.ENUM_VALUES[3]);
	private int value;
	TextureFilterOptions(int i) {
		this.value = i;
	}
	public TextureFilterOptions getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TextureFilterOptions toEnum(int retval) {
		if(retval == TFO_NONE.value){
			return TFO_NONE;
		}
		else if(retval == TFO_BILINEAR.value){
			return TFO_BILINEAR;
		}
		else if(retval == TFO_TRILINEAR.value){
			return TFO_TRILINEAR;
		}
		else if(retval == TFO_ANISOTROPIC.value){
			return TFO_ANISOTROPIC;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TextureFilterOptionsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
