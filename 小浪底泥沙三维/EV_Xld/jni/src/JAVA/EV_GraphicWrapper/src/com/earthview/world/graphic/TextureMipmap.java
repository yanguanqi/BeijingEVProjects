package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///指定这个纹理的mipmap数量
public enum TextureMipmap implements INativeEnum<TextureMipmap> {
	MIP_UNLIMITED(TextureMipmapHelper.ENUM_VALUES[0]),
	MIP_DEFAULT(TextureMipmapHelper.ENUM_VALUES[1]);
	private int value;
	TextureMipmap(int i) {
		this.value = i;
	}
	public TextureMipmap getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final TextureMipmap toEnum(int retval) {
		if(retval == MIP_UNLIMITED.value){
			return MIP_UNLIMITED;
		}
		else if(retval == MIP_DEFAULT.value){
			return MIP_DEFAULT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class TextureMipmapHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
