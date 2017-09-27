package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///当前的硬件支持四种不同的纹理类型
public enum TextureType implements INativeEnum<TextureType> {
	TEX_TYPE_1D(TextureTypeHelper.ENUM_VALUES[0]),
	TEX_TYPE_2D(TextureTypeHelper.ENUM_VALUES[1]),
	TEX_TYPE_3D(TextureTypeHelper.ENUM_VALUES[2]),
	TEX_TYPE_CUBE_MAP(TextureTypeHelper.ENUM_VALUES[3]),
	TEX_TYPE_2D_ARRAY(TextureTypeHelper.ENUM_VALUES[4]);
	private int value;
	TextureType(int i) {
		this.value = i;
	}
	public TextureType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TextureType toEnum(int retval) {
		if(retval == TEX_TYPE_1D.value){
			return TEX_TYPE_1D;
		}
		else if(retval == TEX_TYPE_2D.value){
			return TEX_TYPE_2D;
		}
		else if(retval == TEX_TYPE_3D.value){
			return TEX_TYPE_3D;
		}
		else if(retval == TEX_TYPE_CUBE_MAP.value){
			return TEX_TYPE_CUBE_MAP;
		}
		else if(retval == TEX_TYPE_2D_ARRAY.value){
			return TEX_TYPE_2D_ARRAY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TextureTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
