package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///纹理用法
public enum TextureUsage implements INativeEnum<TextureUsage> {
	TU_STATIC(TextureUsageHelper.ENUM_VALUES[0]),
	TU_DYNAMIC(TextureUsageHelper.ENUM_VALUES[1]),
	TU_WRITE_ONLY(TextureUsageHelper.ENUM_VALUES[2]),
	TU_STATIC_WRITE_ONLY(TextureUsageHelper.ENUM_VALUES[3]),
	TU_DYNAMIC_WRITE_ONLY(TextureUsageHelper.ENUM_VALUES[4]),
	TU_DYNAMIC_WRITE_ONLY_DISCARDABLE(TextureUsageHelper.ENUM_VALUES[5]),
	TU_AUTOMIPMAP(TextureUsageHelper.ENUM_VALUES[6]),
	TU_RENDERTARGET(TextureUsageHelper.ENUM_VALUES[7]),
	TU_DEFAULT(TextureUsageHelper.ENUM_VALUES[8]);
	private int value;
	TextureUsage(int i) {
		this.value = i;
	}
	public TextureUsage getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TextureUsage toEnum(int retval) {
		if(retval == TU_STATIC.value){
			return TU_STATIC;
		}
		else if(retval == TU_DYNAMIC.value){
			return TU_DYNAMIC;
		}
		else if(retval == TU_WRITE_ONLY.value){
			return TU_WRITE_ONLY;
		}
		else if(retval == TU_STATIC_WRITE_ONLY.value){
			return TU_STATIC_WRITE_ONLY;
		}
		else if(retval == TU_DYNAMIC_WRITE_ONLY.value){
			return TU_DYNAMIC_WRITE_ONLY;
		}
		else if(retval == TU_DYNAMIC_WRITE_ONLY_DISCARDABLE.value){
			return TU_DYNAMIC_WRITE_ONLY_DISCARDABLE;
		}
		else if(retval == TU_AUTOMIPMAP.value){
			return TU_AUTOMIPMAP;
		}
		else if(retval == TU_RENDERTARGET.value){
			return TU_RENDERTARGET;
		}
		else if(retval == TU_DEFAULT.value){
			return TU_DEFAULT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TextureUsageHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
